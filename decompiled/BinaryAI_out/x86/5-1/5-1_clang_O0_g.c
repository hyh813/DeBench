// Decompiled by BinaryAI
// SHA256: 24a6cf7df4a52c991aecc9a2834c7b342da6bb631815f47ef57fafc1b12dc764

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::std::terminate @ 0x11050
void std::terminate(void)
{
  terminate();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11060
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11070
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x11080
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11090
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x110a0
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110b0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x110c0
void * operator_new__(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x110d0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x110e0
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x110f0
void __cxa_bad_typeid(void)
{
  __cxa_bad_typeid();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x11100
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x11110
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::printf @ 0x11120
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11130
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11140
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11150
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::memset @ 0x11160
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11170
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11180
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x18))();
  return;
}

// Function: __cxx_global_var_init @ 0x111a0
void __cxx_global_var_init(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x111f0
void __regparm3 _GLOBAL__sub_I_5_1_cpp(undefined4 param_1)
{
  __cxx_global_var_init(param_1);
  return;
}

// Function: _start @ 0x11210
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1123c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11240
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11250
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11290
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x112e0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x7d8b) == '\0') {
    if (*(int *)(unaff_EDI + 0x7cfb) != 0) {
      FUN_00011190(*(undefined4 *)(unaff_EDI + 0x7d77));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x7d8f);
    while (uVar1 < ((unaff_EDI + 0x790f) - (unaff_EDI + 0x790b) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x7d8f) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x790b + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x7d8f);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x7d8b) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11379
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1137d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: test_cpp_member_func @ 0x11390
int test_cpp_member_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass local_2c [36];
  SimpleClass::SimpleClass(local_2c,5,"Test");
  SimpleClass::setValue(local_2c,10);
  iVar1 = SimpleClass::getValue(local_2c);
  iVar2 = SimpleClass::compute(local_2c,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x11420
int test_cpp_constructor(void)
{
  int iVar1;
  LifecycleClass local_14 [8];
  int local_c;
  local_c = 0;
  LifecycleClass::LifecycleClass(local_14,5);
  iVar1 = LifecycleClass::getData(local_14,2);
  local_c = local_c + iVar1;
  iVar1 = LifecycleClass::getInstanceCount();
  local_c = iVar1 + local_c;
  LifecycleClass::_LifecycleClass(local_14);
  iVar1 = LifecycleClass::getInstanceCount();
  return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x114f0
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)(param_1,param_2);
  return;
}

// Function: test_cpp_virtual_func @ 0x11520
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Derived local_14 [8];
  Base local_c [4];
  Base::Base(local_c);
  Derived::Derived(local_14,3);
  iVar1 = Base::virtual_func(local_c,5);
  iVar2 = Derived::virtual_func(local_14,5);
  iVar3 = call_virtual_func(local_c,5);
  iVar4 = call_virtual_func((Base *)local_14,5);
  Derived::_Derived(local_14);
  Base::_Base(local_c);
  return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x11670
int test_cpp_multiple_inheritance(void)
{
  int iVar1;
  int iVar2;
  code ***local_3c;
  code **local_1c;
  undefined4 local_18;
  code **local_14;
  undefined4 local_10;
  MultiDerived::MultiDerived((MultiDerived *)&local_1c);
  local_18 = 100;
  local_10 = 200;
  local_3c = (code ***)0x0;
  if (&stack0x00000000 != (undefined *)0x1c) {
    local_3c = &local_14;
  }
  iVar1 = (**local_1c)(&local_1c);
  iVar2 = (***local_3c)(local_3c);
  MultiDerived::_MultiDerived((MultiDerived *)&local_1c);
  return iVar1 + iVar2 + (uint)(&local_1c != local_3c);
}

// Function: test_cpp_diamond_inheritance @ 0x11760
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  undefined4 *local_3c;
  int local_24 [7];
  DiamondDerived::DiamondDerived((DiamondDerived *)local_24);
  *(undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 0x32;
  local_3c = (undefined4 *)0x0;
  if (&stack0x00000000 != (undefined *)0x24) {
    local_3c = (undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc));
  }
  iVar1 = (**(code **)*local_3c)(local_3c);
  *(undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 100;
  iVar2 = (**(code **)*local_3c)(local_3c);
  DiamondDerived::_DiamondDerived((DiamondDerived *)local_24);
  return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x11840
int test_cpp_operator_overload(void)
{
  byte bVar1;
  int iVar2;
  int local_24;
  int local_20;
  Point local_1c [8];
  Point local_14 [12];
  Point::Point(local_14,1,2);
  Point::Point(local_1c,3,4);
  Point::operator_((Point *)&local_24,local_14);
  bVar1 = Point::operator__(local_14,local_1c);
  Point::operator__((Point *)&local_24);
  iVar2 = 10;
  if ((bVar1 & 1) != 0) {
    iVar2 = 0;
  }
  return local_24 + local_20 + iVar2;
}

// Function: test_cpp_template_func @ 0x11900
int test_cpp_template_func(void)
{
  int local_1c;
  int local_18;
  double local_14;
  int local_c;
  local_c = template_max_int_(3,7);
  local_14 = template_max_double_(2.5,1.5);
  local_18 = 10;
  local_1c = 0x14;
  template_swap_int_(&local_18,&local_1c);
  return local_c + (int)ROUND(local_14) + local_18 + local_1c;
}

// Function: test_cpp_template_class @ 0x119b0
int test_cpp_template_class(void)
{
  longdouble lVar1;
  Container_double_ local_94 [88];
  int local_3c;
  int local_38;
  Container_int_ local_34 [44];
  Container<int>::Container(local_34);
  Container<int>::push(local_34,10);
  Container<int>::push(local_34,0x14);
  Container<int>::push(local_34,0x1e);
  local_38 = Container<int>::get(local_34,0);
  local_3c = Container<int>::getSize(local_34);
  Container<double>::Container(local_94);
  Container<double>::push(local_94,3.14);
  lVar1 = (longdouble)Container<double>::get(local_94,0);
  return local_38 + local_3c + (int)ROUND((double)lVar1);
}

// Function: test_cpp_lambda @ 0x11b20
int test_cpp_lambda(void)
{
  int iVar1;
  auto aVar2;
  __0 local_24 [8];
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  local_c = 10;
  local_10 = 0x14;
  local_1c = 10;
  local_18 = &local_10;
  iVar1 = test_cpp_lambda()::$_1::operator__((__1 *)&local_1c,3);
  aVar2 = test_cpp_lambda()::$_0::operator__(local_24,10,0x14);
  return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x11ba0
int __thiscall test_cpp_lambda()::$_1::operator__(__1 *this,int param_1)
{
  **(int **)(this + 4) = **(int **)(this + 4) + 5;
  return param_1 * *(int *)this + **(int **)(this + 4);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x11bd0
auto __thiscall test_cpp_lambda()::$_0::operator__(__0 *this,int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x11bf0
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x11d90
int test_cpp_smart_ptr(void)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  type *ptVar4;
  int iVar5;
  unique_ptr_int_test_cpp_smart_ptr______2_ local_34 [8];
  __2 local_2c [4];
  int local_28;
  unique_ptr_int___std__default_delete_int____ local_24 [4];
  int local_20;
  unique_ptr_int_std__default_delete_int__ local_1c [16];
  unique_ptr_int_std__default_delete_int__ local_c [4];
  piVar2 = (int *)operator_new(4);
  *piVar2 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
            (local_c,piVar2);
  puVar3 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator_(local_c);
  *puVar3 = 200;
  ptVar4 = std::move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_c);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(local_1c,(unique_ptr *)ptVar4);
  piVar2 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator_(local_1c);
  local_20 = *piVar2;
  piVar2 = (int *)operator_new__(0x14);
  *piVar2 = 1;
  piVar2[1] = 2;
  piVar2[2] = 3;
  piVar2[3] = 4;
  piVar2[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr_int__std__default_delete_int____void_bool_(local_24,piVar2);
  piVar2 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator__(local_24,2);
  local_28 = *piVar2;
  piVar2 = (int *)operator_new(4);
  *piVar2 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
            (local_34,piVar2,local_2c);
  piVar2 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_(local_34);
  iVar1 = *piVar2;
  iVar5 = local_20 + local_28;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::_unique_ptr(local_34);
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr(local_24);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(local_1c);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(local_c);
  return iVar5 + iVar1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0x11fd0
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
  __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
            ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator* @ 0x12020
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  get(this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr @ 0x12060
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

// Function: test_cpp_rtti @ 0x12100
int test_cpp_rtti(void)
{
  int *this;
  int *this_00;
  uint uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  int *this_01;
  int *local_44;
  int *local_3c;
  int local_18;
  this = (int *)operator_new(4);
  memset(this,0,4);
  RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
  this_00 = (int *)operator_new(4);
  memset(this_00,0,4);
  RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
  local_18 = 0;
  if (this == (int *)0x0) {
    __cxa_bad_typeid();
  }
  uVar1 = std::type_info::operator__
                    (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA::typeinfo);
  if ((uVar1 & 1) != 0) {
    local_18 = 10;
  }
  if (this_00 == (int *)0x0) {
    __cxa_bad_typeid();
  }
  this_01 = *(int **)(*this_00 + -4);
  uVar1 = std::type_info::operator__((type_info *)this_01,(type_info *)&RTTIDerivedB::typeinfo);
  if ((uVar1 & 1) != 0) {
    local_18 = local_18 + 0x14;
  }
  if (this == (int *)0x0) {
    local_3c = (int *)0x0;
  }
  else {
    this_01 = this;
    local_3c = (int *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_3c != (int *)0x0) {
    iVar2 = RTTIDerivedA::derivedA_data();
    local_18 = iVar2 + local_18;
    this_01 = local_3c;
  }
  if (this_00 == (int *)0x0) {
    local_44 = (int *)0x0;
  }
  else {
    this_01 = this_00;
    local_44 = (int *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (local_44 != (int *)0x0) {
    iVar2 = RTTIDerivedB::derivedB_data();
    local_18 = iVar2 + local_18;
    this_01 = local_44;
  }
  if (this == (int *)0x0) {
    __cxa_bad_typeid(this_01);
  }
  __s = (char *)std::type_info::name(*(type_info **)(*this + -4));
  sVar3 = strlen(__s);
  if (this != (int *)0x0) {
    (**(code **)(*this + 4))(this);
  }
  if (this_00 != (int *)0x0) {
    (**(code **)(*this_00 + 4))(this_00);
  }
  return sVar3 + local_18;
}

// Function: test_cpp_oo_features @ 0x123a0
void test_cpp_oo_features(void)
{
  undefined4 uVar1;
  printf(&DAT_0001500d);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00015032,uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_00015050,uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_0001506c,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_00015088,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000150a4,uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_000150c1,uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_000150dd,uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_000150f9,uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00015115,uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00015131,uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_0001514e,uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_0001516b,uVar1);
  return;
}

// Function: main @ 0x12530
undefined4 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x12560
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

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x125a0
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __2 *p_Var1;
  p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
            ((tuple_int__test_cpp_smart_ptr______2_ *)this,&param_1,p_Var1);
  return;
}

// Function: std::forward<test_cpp_smart_ptr()::$_2_const&> @ 0x125f0
__2 * std::forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
  return (__2 *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 0x12600
void __thiscall
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
  return;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 0x12680
void __thiscall
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
          (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
  int **ppiVar1;
  forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  _Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
  ppiVar1 = forward_int___((type *)param_1);
  _Head_base<0u,int*,false>::_Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
  return;
}

// Function: std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl @ 0x12700
void std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)
{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
  return;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base @ 0x12740
__2 * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)
{
  return param_1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x12750
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter @ 0x12780
undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: test_cpp_smart_ptr()::$_2::operator() @ 0x127d0
void __thiscall test_cpp_smart_ptr()::$_2::operator__(__2 *this,int *param_1)
{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12820
type * std::get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12850
int ** std::__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x12880
void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter @ 0x128b0
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_1u_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::get<1u,int*,test_cpp_smart_ptr()::$_2> @ 0x128e0
type * std::get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  __2 *p_Var1;
  p_Var1 = __get_helper_1u_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}

// Function: std::__get_helper<1u,test_cpp_smart_ptr()::$_2> @ 0x12910
__2 * std::__get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  __2 *p_Var1;
  p_Var1 = (__2 *)_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return p_Var1;
}

// Function: std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head @ 0x12940
void std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head @ 0x12970
_Head_base * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get @ 0x12980
undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x129d0
undefined4 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
  return *puVar1;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12a00
type * std::get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12a30
int ** std::__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x12a60
void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: SimpleClass::SimpleClass @ 0x12a90
void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}

// Function: SimpleClass::setValue @ 0x12ae0
void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
  *(int *)this = param_1;
  return;
}

// Function: SimpleClass::getValue @ 0x12b00
undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)
{
  return *(undefined4 *)this;
}

// Function: SimpleClass::compute @ 0x12b10
int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
  int iVar1;
  size_t sVar2;
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return iVar1 * param_1 + sVar2;
}

// Function: SimpleClass::getClassID @ 0x12b50
undefined4 SimpleClass::getClassID(void)
{
  return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x12b60
void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)
{
  uint uVar1;
  void *pvVar2;
  uint local_c;
  *(uint *)(this + 4) = param_1;
  uVar1 = (uint)((ulonglong)param_1 * 4);
  if ((int)((ulonglong)param_1 * 4 >> 0x20) != 0) {
    uVar1 = 0xffffffff;
  }
  pvVar2 = operator_new__(uVar1);
  *(void **)this = pvVar2;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
  }
  instance_count = instance_count + 1;
  return;
}

// Function: LifecycleClass::getData @ 0x12c00
undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)
{
  undefined4 local_c;
  if (param_1 < *(uint *)(this + 4)) {
    local_c = *(undefined4 *)(*(int *)this + param_1 * 4);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: LifecycleClass::getInstanceCount @ 0x12c50
undefined4 LifecycleClass::getInstanceCount(void)
{
  return instance_count;
}

// Function: LifecycleClass::~LifecycleClass @ 0x12c70
void __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}

// Function: Base::Base @ 0x12cc0
void __thiscall Base::Base(Base *this)
{
  *(undefined ***)this = &PTR_virtual_func_00018c3c;
  return;
}

// Function: Derived::Derived @ 0x12cf0
void __thiscall Derived::Derived(Derived *this,int param_1)
{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00018c5c;
  *(int *)(this + 4) = param_1;
  return;
}

// Function: Base::virtual_func @ 0x12d40
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x12d60
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return param_1 * *(int *)(this + 4);
}

// Function: Derived::~Derived @ 0x12d80
void __thiscall Derived::_Derived(Derived *this)
{
  Base::_Base((Base *)this);
  return;
}

// Function: Base::~Base @ 0x12db0
Base * __thiscall Base::_Base(Base *this)
{
  return this;
}

// Function: MultiDerived::MultiDerived @ 0x12dc0
void __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 8));
  *(undefined ***)this = &PTR_funcA_00018c80;
  *(undefined ***)(this + 8) = &PTR_funcB_00018c98;
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x12e20
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  BaseB::_BaseB((BaseB *)(this + 8));
  BaseA::_BaseA((BaseA *)this);
  return;
}

// Function: DiamondDerived::DiamondDerived @ 0x12e60
void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 8));
  *(undefined4 *)this = 0x18d08;
  *(undefined4 *)(this + 0x10) = 0x18d3c;
  *(undefined4 *)(this + 8) = 0x18d20;
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12f00
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
  return;
}

// Function: Point::Point @ 0x12f50
void __thiscall Point::Point(Point *this,int param_1,int param_2)
{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

// Function: Point::operator+ @ 0x12f70
Point * __thiscall Point::operator_(Point *this,Point *param_1)
{
  int *in_stack_0000000c;
  Point(this,*(int *)param_1 + *in_stack_0000000c,*(int *)(param_1 + 4) + in_stack_0000000c[1]);
  return this;
}

// Function: Point::operator== @ 0x12fd0
bool __thiscall Point::operator__(Point *this,Point *param_1)
{
  bool local_5;
  local_5 = false;
  if (*(int *)this == *(int *)param_1) {
    local_5 = *(int *)(this + 4) == *(int *)(param_1 + 4);
  }
  return local_5;
}

// Function: Point::operator++ @ 0x13020
void __thiscall Point::operator__(Point *this)
{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

// Function: template_max<int> @ 0x13040
int template_max_int_(int param_1,int param_2)
{
  int local_8;
  if (param_2 < param_1) {
    local_8 = param_1;
  }
  else {
    local_8 = param_2;
  }
  return local_8;
}

// Function: template_max<double> @ 0x13070
double template_max_double_(double param_1,double param_2)
{
  double local_c;
  if (param_1 <= param_2) {
    local_c = param_2;
  }
  else {
    local_c = param_1;
  }
  return local_c;
}

// Function: template_swap<int> @ 0x130b0
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x130e0
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x13100
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

// Function: Container<int>::get @ 0x13140
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 local_8;
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(this + param_1 * 4);
  }
  return local_8;
}

// Function: Container<int>::getSize @ 0x13190
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x131a0
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x131c0
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
  int iVar1;
  if (*(int *)(this + 0x50) < 10) {
    iVar1 = *(int *)(this + 0x50);
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + iVar1 * 8) = param_1;
  }
  return;
}

// Function: Container<double>::get @ 0x13200
longdouble __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  double local_c;
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    local_c = 0.0;
  }
  else {
    local_c = *(double *)(this + param_1 * 8);
  }
  return (longdouble)local_c;
}

// Function: Container<double>::getSize @ 0x13260
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void> @ 0x13270
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
          (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::operator* @ 0x132c0
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator_
          (unique_ptr_int_std__default_delete_int__ *this)
{
  get(this);
  return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x13300
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
  return (type *)param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr @ 0x13310
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
             (__uniq_ptr_data *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x13350
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
          (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x133a0
int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
          (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
  int iVar1;
  iVar1 = get(this);
  return iVar1 + param_1 * 4;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x133f0
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
          (unique_ptr_int___std__default_delete_int____ *this)
{
  int *piVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  ppuVar3 = &_GLOBAL_OFFSET_TABLE_;
  piVar1 = (int *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  if (*piVar1 != 0) {
    uVar2 = get_deleter();
    _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
              (uVar2,*piVar1,ppuVar3,this);
  }
  *piVar1 = 0;
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x13470
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

// Function: RTTIDerivedA::RTTIDerivedA @ 0x13500
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00018eb8;
  return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x13540
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00018ee0;
  return;
}

// Function: std::type_info::operator== @ 0x13580
bool __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
  int iVar1;
  bool local_15;
  bool local_9;
  local_9 = true;
  if (*(int *)(this + 4) != *(int *)(param_1 + 4)) {
    local_15 = false;
    if (**(char **)(this + 4) != '*') {
      iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
      local_15 = iVar1 == 0;
    }
    local_9 = local_15;
  }
  return local_9;
}

// Function: RTTIDerivedA::derivedA_data @ 0x13610
undefined4 RTTIDerivedA::derivedA_data(void)
{
  return 100;
}

// Function: RTTIDerivedB::derivedB_data @ 0x13620
undefined4 RTTIDerivedB::derivedB_data(void)
{
  return 200;
}

// Function: std::type_info::name @ 0x13630
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

// Function: Base::getName @ 0x13670
undefined * Base::getName(void)
{
  return &DAT_00015189;
}

// Function: Base::~Base @ 0x13690
void __thiscall Base::_Base(Base *this)
{
  _Base(this);
  operator_delete(this);
  return;
}

// Function: Derived::getName @ 0x136d0
char * Derived::getName(void)
{
  return "Derived";
}

// Function: Derived::~Derived @ 0x136f0
void __thiscall Derived::_Derived(Derived *this)
{
  _Derived(this);
  operator_delete(this);
  return;
}

// Function: BaseA::BaseA @ 0x13730
void __thiscall BaseA::BaseA(BaseA *this)
{
  *(undefined ***)this = &PTR_funcA_00018cdc;
  return;
}

// Function: BaseB::BaseB @ 0x13760
void __thiscall BaseB::BaseB(BaseB *this)
{
  *(undefined ***)this = &PTR_funcB_00018cf0;
  return;
}

// Function: MultiDerived::funcA @ 0x13790
undefined4 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x137a0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this);
  operator_delete(this);
  return;
}

// Function: MultiDerived::funcB @ 0x137e0
undefined4 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x137f0
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
  funcB();
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x13820
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -8);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x13850
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -8);
  return;
}

// Function: BaseA::funcA @ 0x13880
undefined4 BaseA::funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x13890
BaseA * __thiscall BaseA::_BaseA(BaseA *this)
{
  return this;
}

// Function: BaseA::~BaseA @ 0x138a0
void __thiscall BaseA::_BaseA(BaseA *this)
{
  _BaseA(this);
  operator_delete(this);
  return;
}

// Function: BaseB::funcB @ 0x138e0
undefined4 BaseB::funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x138f0
BaseB * __thiscall BaseB::_BaseB(BaseB *this)
{
  return this;
}

// Function: BaseB::~BaseB @ 0x13900
void __thiscall BaseB::_BaseB(BaseB *this)
{
  _BaseB(this);
  operator_delete(this);
  return;
}

// Function: VirtualBase::VirtualBase @ 0x13940
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(undefined ***)this = &PTR_func_00018e2c;
  return;
}

// Function: MiddleA::MiddleA @ 0x13970
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
  undefined4 *in_stack_00000008;
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}

// Function: MiddleB::MiddleB @ 0x13990
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
  undefined4 *in_stack_00000008;
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}

// Function: MiddleA::func @ 0x139b0
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x139d0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 8));
  return;
}

// Function: MiddleA::~MiddleA @ 0x13a20
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::func @ 0x13a60
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: MiddleA::~MiddleA @ 0x13a90
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleA::~MiddleA @ 0x13ac0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleB::func @ 0x13af0
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x13b10
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 8));
  return;
}

// Function: MiddleB::~MiddleB @ 0x13b60
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  operator_delete(this);
  return;
}

// Function: MiddleB::func @ 0x13ba0
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: MiddleB::~MiddleB @ 0x13bd0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleB::~MiddleB @ 0x13c00
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: DiamondDerived::func @ 0x13c30
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13c50
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this);
  return;
}

// Function: DiamondDerived::func @ 0x13c90
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13cc0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13cf0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -8);
  return;
}

// Function: DiamondDerived::func @ 0x13d20
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13d50
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13d80
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: VirtualBase::func @ 0x13db0
undefined4 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x13dc0
VirtualBase * __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return this;
}

// Function: VirtualBase::~VirtualBase @ 0x13dd0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  _VirtualBase(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::~MiddleA @ 0x13e10
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  return this;
}

// Function: MiddleB::~MiddleB @ 0x13e20
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13e30
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  MiddleB::_MiddleB((MiddleB *)(this + 8));
  MiddleA::_MiddleA((MiddleA *)this);
  return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x13e90
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x13ed0
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
  type *ptVar1;
  undefined4 *puVar2;
  ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
  tuple<int*,std::default_delete<int>>::tuple
            ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
  puVar2 = (undefined4 *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
  *puVar2 = 0;
  return;
}

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x13f50
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
  return (type *)param_1;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x13f60
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0u_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x13fa0
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_0u_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: __clang_call_terminate @ 0x13fd0
void __clang_call_terminate(undefined4 param_1)
{
  __cxa_begin_catch(param_1,&_GLOBAL_OFFSET_TABLE_);
  std::terminate();
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl @ 0x14000
void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0u_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined4 *)this = *(undefined4 *)param_1;
  return;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl @ 0x14040
_Tuple_impl * std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
  return param_1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x14050
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x14080
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head @ 0x140b0
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0u,int*,false>::_M_head @ 0x140e0
_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: RTTIBase::RTTIBase @ 0x140f0
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(undefined ***)this = &PTR__RTTIBase_00018ecc;
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x14120
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x14150
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  _RTTIDerivedA(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x14190
undefined4 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x141a0
RTTIBase * __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return this;
}

// Function: RTTIBase::~RTTIBase @ 0x141b0
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  _RTTIBase(this);
  operator_delete(this);
  return;
}

// Function: RTTIBase::getType @ 0x141f0
undefined4 RTTIBase::getType(void)
{
  return 0;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x14200
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x14230
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  _RTTIDerivedB(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x14270
undefined4 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x14280
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x142c0
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

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x14310
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
          (tuple_int__std__default_delete_int__ *this)
{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
  return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl @ 0x14350
void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_1u_std__default_delete_int__ *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
  return;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl @ 0x14390
void __thiscall
std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_1u_std__default_delete_int__ *this)
{
  _Head_base<1u,std::default_delete<int>,true>::_Head_base
            ((_Head_base_1u_std__default_delete_int__true_ *)this);
  return;
}

// Function: std::_Head_base<0u,int*,false>::_Head_base @ 0x143c0
void __thiscall std::_Head_base<0u,int*,false>::_Head_base(_Head_base_0u_int__false_ *this)
{
  *(undefined4 *)this = 0;
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int>,true>::_Head_base @ 0x143e0
_Head_base_1u_std__default_delete_int__true_ * __thiscall
std::_Head_base<1u,std::default_delete<int>,true>::_Head_base
          (_Head_base_1u_std__default_delete_int__true_ *this)
{
  return this;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x143f0
undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr_int_std__default_delete_int__ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::default_delete<int>::operator() @ 0x14440
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::move<int*&> @ 0x14480
type * std::move_int___(int **param_1)
{
  return (type *)param_1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x14490
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_1u_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: std::get<1u,int*,std::default_delete<int>> @ 0x144c0
type * std::get_1u_int__std__default_delete_int__(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1u,std::default_delete<int>> @ 0x144f0
default_delete * std::__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_M_head @ 0x14520
void std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int>,true>::_M_head @ 0x14550
_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x14560
undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x145b0
undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)get_0u_int__std__default_delete_int__((tuple *)this);
  return *puVar1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x145e0
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x14610
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head @ 0x14640
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0u,int*,false>::_M_head @ 0x14670
_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x14680
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x146c0
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

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x14710
void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
          (tuple_int__std__default_delete_int____ *this)
{
  _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x14750
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_0u_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl @ 0x14780
void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
  _Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_1u_std__default_delete_int____ *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
  return;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl @ 0x147c0
void __thiscall
std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_1u_std__default_delete_int____ *this)
{
  _Head_base<1u,std::default_delete<int[]>,true>::_Head_base
            ((_Head_base_1u_std__default_delete_int____true_ *)this);
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base @ 0x147f0
_Head_base_1u_std__default_delete_int____true_ * __thiscall
std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base
          (_Head_base_1u_std__default_delete_int____true_ *this)
{
  return this;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x14800
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x14830
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head @ 0x14860
void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x14890
undefined4 std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter(void)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter();
  return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x148e0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
               (undefined4 param_1,void *param_2)
{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x14920
void std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter(void)
{
  tuple *in_stack_00000004;
  get_1u_int__std__default_delete_int____(in_stack_00000004);
  return;
}

// Function: std::get<1u,int*,std::default_delete<int[]>> @ 0x14950
type * std::get_1u_int__std__default_delete_int____(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1u,std::default_delete<int[]>> @ 0x14980
default_delete * std::__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head @ 0x149b0
void std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head @ 0x149e0
_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x149f0
undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x14a40
undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)get_0u_int__std__default_delete_int____((tuple *)this);
  return *puVar1;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x14a70
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x14aa0
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head @ 0x14ad0
void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::forward<int*&> @ 0x14b00
int ** std::forward_int___(type *param_1)
{
  return (int **)param_1;
}

// Function: std::_Head_base<0u,int*,false>::_Head_base<int*&> @ 0x14b10
void __thiscall
std::_Head_base<0u,int*,false>::_Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
  int **ppiVar1;
  ppiVar1 = forward_int___((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}

// Function: __do_global_ctors_aux @ 0x14b50
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x14b9c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

