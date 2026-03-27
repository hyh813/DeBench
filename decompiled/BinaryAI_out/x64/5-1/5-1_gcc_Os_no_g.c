// Decompiled by BinaryAI
// SHA256: d9228abe9094275936bc73470b6488ce41f960738b83608d735965ea27aa77b2

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

// Function: <EXTERNAL>::__cxa_finalize @ 0x102160
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102170
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102180
void * operator_new__(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102190
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x1021a0
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021b0
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x1021c0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021d0
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x1021e0
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1021f0
void operator_delete(void *param_1,ulong param_2)
{
  operator_delete(param_1,param_2);
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x102200
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x102210
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102220
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x102230
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102240
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102250
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::puts @ 0x102260
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102270
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102280
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102290
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: test_cpp_exception @ 0x1022a0
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,int::typeinfo,0);
}

// Function: main @ 0x102367
undefined  [16] main(void)
{
  undefined auVar1 [16];
  ulong in_RAX;
  test_cpp_oo_features();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_RAX;
  return auVar1 << 0x40;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102375
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _start @ 0x1023a0
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1023d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x102400
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x102440
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

// Function: test_cpp_member_func @ 0x102489
int test_cpp_member_func(void)
{
  char *__s;
  size_t sVar1;
  long in_FS_OFFSET;
  char local_30 [31];
  undefined local_11;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = strncpy(local_30,"Test",0x1f);
  local_11 = 0;
  sVar1 = strlen(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1024e3
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1024f5
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)();
  return;
}

// Function: test_cpp_virtual_func @ 0x1024fe
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined **local_28;
  undefined **local_20;
  undefined4 local_18;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 3;
  local_28 = &PTR_virtual_func_001058a8;
  local_20 = &PTR_virtual_func_001058d8;
  iVar1 = call_virtual_func((Base *)&local_28,5);
  iVar2 = call_virtual_func((Base *)&local_20,5);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return iVar1 + 0x15 + iVar2;
}

// Function: test_cpp_multiple_inheritance @ 0x102571
undefined8 test_cpp_multiple_inheritance(void)
{
  return 0x47;
}

// Function: test_cpp_operator_overload @ 0x10257b
undefined8 test_cpp_operator_overload(void)
{
  return 0x16;
}

// Function: test_cpp_template_func @ 0x102585
int test_cpp_template_func(void)
{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int local_18;
  int local_14;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = template_max_int_(3,7);
  dVar2 = template_max_double_(2.5,1.5);
  local_18 = 10;
  local_14 = 0x14;
  template_swap_int_(&local_18,&local_14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return (int)dVar2 + iVar1 + local_18 + local_14;
}

// Function: test_cpp_template_class @ 0x102618
int test_cpp_template_class(void)
{
  int iVar1;
  long in_FS_OFFSET;
  int local_3c [10];
  int local_14;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  local_3c[0] = 10;
  Container<int>::push((Container_int_ *)local_3c,0x14);
  Container<int>::push((Container_int_ *)local_3c,0x1e);
  iVar1 = 0;
  if (0 < local_14) {
    iVar1 = local_3c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return local_14 + 3 + iVar1;
}

// Function: test_cpp_lambda @ 0x10268d
undefined8 test_cpp_lambda(void)
{
  return 0x55;
}

// Function: test_cpp_rtti @ 0x102697
undefined  [16] test_cpp_rtti(void)
{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  undefined8 in_RCX;
  uint uVar7;
  char *__s1;
  undefined auVar8 [16];
  uVar7 = 10;
  plVar3 = (long *)operator_new(8);
  *plVar3 = (long)&PTR__RTTIDerivedA_00105b98;
  plVar4 = (long *)operator_new(8);
  lVar1 = *plVar3;
  *plVar4 = (long)&PTR__RTTIDerivedB_00105bc0;
  __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
  if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
    iVar2 = strcmp(__s1,"12RTTIDerivedA");
    uVar7 = -(uint)(iVar2 == 0) & 10;
  }
  iVar2 = uVar7 + 0x14;
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = uVar7 + 0x78;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar2 + 200;
  }
  if (*__s1 == '*') {
    __s1 = __s1 + 1;
  }
  sVar6 = strlen(__s1);
  (**(code **)(lVar1 + 8))(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  auVar8._4_4_ = 0;
  auVar8._0_4_ = iVar2 + (int)sVar6;
  auVar8._8_8_ = in_RCX;
  return auVar8;
}

// Function: test_cpp_smart_ptr @ 0x1027ac
undefined8 test_cpp_smart_ptr(void)
{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  long local_20;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (undefined4 *)operator_new(4);
  local_38 = 0;
  *local_30 = 200;
  local_28 = (undefined8 *)operator_new__(0x14);
  *local_28 = 0x200000001;
  local_28[1] = 0x400000003;
  *(undefined4 *)(local_28 + 2) = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
            ((unique_ptr_int___std__default_delete_int____ *)&local_28);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
            ((unique_ptr_int_std__default_delete_int__ *)&local_30);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
            ((unique_ptr_int_std__default_delete_int__ *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x10287c
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0x32;
  local_50[0] = 0x105b08;
  local_30 = 0x105b70;
  local_40 = 0x105b38;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_30);
  local_28 = 100;
  iVar2 = DiamondDerived::func((DiamondDerived *)&local_30);
  DiamondDerived::_DiamondDerived((DiamondDerived *)local_50);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x10290d
void test_cpp_oo_features(void)
{
  undefined4 uVar1;
  undefined8 in_RAX;
  puts(&DAT_00103016);
  uVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_0010303a,uVar1);
  test_cpp_constructor();
  __printf_chk();
  uVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_00103074,uVar1);
  test_cpp_multiple_inheritance();
  __printf_chk();
  uVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_001030ac,uVar1);
  test_cpp_operator_overload();
  __printf_chk();
  uVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_001030e5,uVar1);
  uVar1 = test_cpp_template_class();
  __printf_chk(1,&DAT_00103101,uVar1);
  test_cpp_lambda();
  __printf_chk();
  uVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_00103139,uVar1);
  uVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_00103156,uVar1);
  uVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_00103173,uVar1,in_RAX);
  return;
}

// Function: Base::virtual_func @ 0x102a58
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Base::getName @ 0x102a60
undefined * Base::getName(void)
{
  return &DAT_00103004;
}

// Function: Base::~Base @ 0x102a6c
void __thiscall Base::_Base(Base *this)
{
  return;
}

// Function: Derived::virtual_func @ 0x102a72
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return *(int *)(this + 8) * param_1;
}

// Function: Derived::getName @ 0x102a7e
char * Derived::getName(void)
{
  return "Derived";
}

// Function: MultiDerived::funcA @ 0x102a8a
undefined8 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102a94
undefined8 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x102a9e
undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)
{
  return 0x28;
}

// Function: VirtualBase::func @ 0x102aa8
undefined8 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102ab2
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return;
}

// Function: MiddleA::func @ 0x102ab8
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102acd
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: MiddleB::func @ 0x102ada
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x102aef
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: DiamondDerived::func @ 0x102afc
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102b11
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: DiamondDerived::func @ 0x102b1e
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -0x10);
  return;
}

// Function: MiddleA::~MiddleA @ 0x102b28
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  *(undefined8 *)this = 0x105920;
  *(undefined8 *)(this + 0x10) = 0x105958;
  return;
}

// Function: MiddleA::~MiddleA @ 0x102b3f
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  long lVar1;
  lVar1 = *(long *)(*(long *)this + -0x20);
  *(undefined8 *)(this + lVar1) = 0x105920;
  *(undefined8 *)((long)(this + lVar1) + 0x10) = 0x105958;
  return;
}

// Function: MiddleB::~MiddleB @ 0x102b5e
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  *(undefined8 *)this = 0x105998;
  *(undefined8 *)(this + 0x10) = 0x1059d0;
  return;
}

// Function: MiddleB::~MiddleB @ 0x102b75
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  long lVar1;
  lVar1 = *(long *)(*(long *)this + -0x20);
  *(undefined8 *)(this + lVar1) = 0x105998;
  *(undefined8 *)((long)(this + lVar1) + 0x10) = 0x1059d0;
  return;
}

// Function: RTTIDerivedA::getType @ 0x102b94
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIDerivedB::getType @ 0x102b9e
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ba8
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102bae
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb9
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  return;
}

// Function: Derived::~Derived @ 0x102bbe
void __thiscall Derived::_Derived(Derived *this)
{
  return;
}

// Function: Base::~Base @ 0x102bc4
void __thiscall Base::_Base(Base *this)
{
  operator_delete(this,8);
  return;
}

// Function: Derived::~Derived @ 0x102bd2
void __thiscall Derived::_Derived(Derived *this)
{
  operator_delete(this,0x10);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x102be0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  operator_delete(this,0x20);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bee
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x102bf8
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  operator_delete(this,0x10);
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102c06
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  operator_delete(this,8);
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102c14
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  operator_delete(this,8);
  return;
}

// Function: MiddleA::~MiddleA @ 0x102c22
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  *(undefined8 *)this = 0x105920;
  *(undefined8 *)(this + 0x10) = 0x105958;
  operator_delete(this,0x20);
  return;
}

// Function: MiddleA::~MiddleA @ 0x102c42
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleB::~MiddleB @ 0x102c50
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  *(undefined8 *)this = 0x105998;
  *(undefined8 *)(this + 0x10) = 0x1059d0;
  operator_delete(this,0x20);
  return;
}

// Function: MiddleB::~MiddleB @ 0x102c70
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleA::~MiddleA @ 0x102c7e
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  long lVar1;
  long lVar2;
  long *in_RDX;
  int in_ESI;
  long lVar3;
  lVar1 = 0x105920;
  if (in_ESI == 0) {
    lVar1 = *in_RDX;
  }
  *(long *)this = lVar1;
  lVar3 = 0x105958;
  lVar2 = 0x10;
  if (in_ESI == 0) {
    lVar3 = in_RDX[1];
    lVar2 = *(long *)(lVar1 + -0x18);
  }
  *(long *)(this + lVar2) = lVar3;
  return;
}

// Function: MiddleA::~MiddleA @ 0x102cb0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  return;
}

// Function: MiddleB::~MiddleB @ 0x102cbe
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  long lVar1;
  long lVar2;
  long *in_RDX;
  int in_ESI;
  long lVar3;
  lVar1 = 0x105998;
  if (in_ESI == 0) {
    lVar1 = *in_RDX;
  }
  *(long *)this = lVar1;
  lVar3 = 0x1059d0;
  lVar2 = 0x10;
  if (in_ESI == 0) {
    lVar3 = in_RDX[1];
    lVar2 = *(long *)(lVar1 + -0x18);
  }
  *(long *)(this + lVar2) = lVar3;
  return;
}

// Function: MiddleB::~MiddleB @ 0x102cf0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  return;
}

// Function: template_max<int> @ 0x102cfe
int template_max_int_(int param_1,int param_2)
{
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: template_max<double> @ 0x102d0a
double template_max_double_(double param_1,double param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_swap<int> @ 0x102d13
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x102d20
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x102d2c
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x102d44
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return uVar1;
}

// Function: Container<int>::getSize @ 0x102d5a
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x102d62
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x102d6e
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}

// Function: Container<double>::get @ 0x102d88
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined8 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
    uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
  }
  return uVar1;
}

// Function: Container<double>::getSize @ 0x102da2
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102daa
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this,4);
    return;
  }
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102dc2
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
          (unique_ptr_int___std__default_delete_int____ *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102dd4
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  long lVar1;
  long lVar2;
  long *in_RDX;
  long lVar3;
  int in_ESI;
  lVar1 = 0x105b08;
  if (in_ESI == 0) {
    lVar1 = *in_RDX;
  }
  *(long *)this = lVar1;
  lVar2 = 0x105b70;
  lVar3 = 0x20;
  if (in_ESI == 0) {
    lVar2 = in_RDX[5];
    lVar3 = *(long *)(lVar1 + -0x18);
  }
  *(long *)(this + lVar3) = lVar2;
  lVar1 = 0x105b38;
  if (in_ESI == 0) {
    lVar1 = in_RDX[6];
  }
  *(long *)(this + 0x10) = lVar1;
  MiddleB::_MiddleB((MiddleB *)(this + 0x10));
  MiddleA::_MiddleA((MiddleA *)this);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e5e
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e6e
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e78
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e86
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this,0x30);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eab
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eb5
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ec2
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  return;
}

// Function: _fini @ 0x102ed0
void _fini(void)
{
  return;
}

