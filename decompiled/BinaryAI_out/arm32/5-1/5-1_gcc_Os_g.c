// Decompiled by BinaryAI
// SHA256: d65490c74640e79d8582be148a4edf699e4568d599b00068e580cec657afee0d

// Function: _init @ 0x109b0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
void * operator_new(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::puts @ 0x10a00
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,uint param_2)
{
  operator_delete(param_1,param_2);
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
void __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
  operator__(this,param_1);
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
  __cxa_end_cleanup();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10a78
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x10a84
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
void __aeabi_d2iz(void)
{
  __aeabi_d2iz();
  return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
void __gxx_personality_v0(void)
{
  __gxx_personality_v0();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
void __aeabi_dcmpgt(void)
{
  __aeabi_dcmpgt();
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x10ad8
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: test_cpp_exception @ 0x10b08
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: main @ 0x10bbc
undefined4 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10bcc
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __aeabi_atexit(&std::__ioinit,std::ios_base::Init::_Init,&__dso_handle);
  return;
}

// Function: _start @ 0x10bfc
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x10c40
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x10c64
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10c90
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10cc8
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: test_cpp_member_func @ 0x10cf4
int test_cpp_member_func(void)
{
  size_t sVar1;
  char acStack_2c [31];
  undefined local_d;
  int local_c;
  local_c = 0;
  strncpy(acStack_2c,"Test",0x1f);
  local_d = 0;
  sVar1 = strlen(acStack_2c);
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10d60
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10d7c
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)();
  return;
}

// Function: test_cpp_virtual_func @ 0x10d88
void test_cpp_virtual_func(void)
{
  int iVar1;
  undefined8 uVar2;
  undefined **local_18;
  undefined **local_14;
  undefined4 local_10;
  int local_c;
  local_c = 0;
  local_18 = &PTR_virtual_func_00011af0;
  local_14 = &PTR_virtual_func_00011b08;
  local_10 = 3;
  iVar1 = call_virtual_func((Base *)&local_18,5);
  uVar2 = call_virtual_func((Base *)&local_14,5);
  if (local_c != 0) {
    __stack_chk_fail(iVar1 + 0x15 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
  }
  return;
}

// Function: test_cpp_multiple_inheritance @ 0x10e08
undefined4 test_cpp_multiple_inheritance(void)
{
  return 0x47;
}

// Function: test_cpp_operator_overload @ 0x10e10
undefined4 test_cpp_operator_overload(void)
{
  return 0x16;
}

// Function: test_cpp_template_func @ 0x10e18
void test_cpp_template_func(void)
{
  undefined4 in_r0;
  int iVar1;
  undefined4 uVar2;
  int in_r1;
  undefined4 extraout_r1;
  int in_r2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  iVar3 = 0;
  iVar1 = template_max_int_(3,7);
  uVar2 = 0;
  template_max_double_((double)CONCAT44(in_r1,in_r0),(double)CONCAT44(iVar3,in_r2));
  iVar5 = 10;
  iVar6 = 0x14;
  template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe8);
  uVar4 = __aeabi_d2iz(uVar2,extraout_r1);
  if (iVar3 != 0) {
    __stack_chk_fail((int)uVar4 + iVar1 + iVar5 + iVar6,(int)((ulonglong)uVar4 >> 0x20),iVar3,0);
  }
  return;
}

// Function: test_cpp_template_class @ 0x10ec0
void test_cpp_template_class(void)
{
  undefined4 extraout_r1;
  int iVar1;
  int local_38 [10];
  int local_10;
  int local_c;
  local_c = 0;
  local_10 = 1;
  local_38[0] = 10;
  Container<int>::push((Container_int_ *)local_38,0x14);
  Container<int>::push((Container_int_ *)local_38,0x1e);
  iVar1 = local_38[0];
  if (local_10 < 1) {
    iVar1 = 0;
  }
  if (local_c != 0) {
    __stack_chk_fail(local_10 + iVar1 + 3,extraout_r1,local_c,0);
  }
  return;
}

// Function: test_cpp_lambda @ 0x10f40
undefined4 test_cpp_lambda(void)
{
  return 0x55;
}

// Function: test_cpp_rtti @ 0x10f48
int test_cpp_rtti(void)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  int iVar6;
  piVar1 = (int *)operator_new(4);
  *piVar1 = (int)&PTR__RTTIDerivedA_00011c68;
  piVar2 = (int *)operator_new(4);
  *piVar2 = (int)&PTR__RTTIDerivedB_00011c7c;
  iVar3 = std::type_info::operator__
                    (*(type_info **)(*piVar1 + -4),(type_info *)&RTTIDerivedA::typeinfo);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 10;
  }
  iVar4 = std::type_info::operator__
                    (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
  if (iVar4 != 0) {
    iVar3 = iVar3 + 0x14;
  }
  iVar4 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  if (iVar4 != 0) {
    iVar3 = iVar3 + 100;
  }
  iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar6 = *piVar1;
  if (iVar4 != 0) {
    iVar3 = iVar3 + 200;
  }
  __s = *(char **)(*(int *)(iVar6 + -4) + 4);
  if (*__s == '*') {
    __s = __s + 1;
  }
  sVar5 = strlen(__s);
  (**(code **)(iVar6 + 4))(piVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  return iVar3 + sVar5;
}

// Function: test_cpp_smart_ptr @ 0x11038
undefined4 test_cpp_smart_ptr(void)
{
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  local_c = 0;
  local_14 = (undefined4 *)operator_new(4);
  *local_14 = 200;
  local_18 = 0;
  local_10 = (undefined4 *)operator_new__(0x14);
  *local_10 = 1;
  local_10[1] = 2;
  local_10[2] = 3;
  local_10[3] = 4;
  local_10[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
            ((unique_ptr_int___std__default_delete_int____ *)&local_10);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
            ((unique_ptr_int_std__default_delete_int__ *)&local_14);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
            ((unique_ptr_int_std__default_delete_int__ *)&local_18);
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x110ec
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  undefined **local_24 [2];
  undefined **local_1c;
  undefined **local_14;
  undefined4 local_10;
  int local_c;
  local_c = 0;
  local_14 = &PTR_func_00011c54;
  local_24[0] = &PTR_func_00011c20;
  local_1c = &PTR_func_00011c38;
  local_10 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_14);
  local_10 = 100;
  iVar2 = DiamondDerived::func((DiamondDerived *)&local_14);
  DiamondDerived::_DiamondDerived((DiamondDerived *)local_24);
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x1117c
void test_cpp_oo_features(void)
{
  undefined4 uVar1;
  puts(&DAT_00011866);
  uVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_0001188a,uVar1);
  uVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_000118a8,uVar1);
  uVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_000118c4,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_000118e0,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_000118fc,uVar1);
  uVar1 = test_cpp_operator_overload();
  __printf_chk(1,&DAT_00011919,uVar1);
  uVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_00011935,uVar1);
  uVar1 = test_cpp_template_class();
  __printf_chk(1,&DAT_00011951,uVar1);
  uVar1 = test_cpp_lambda();
  __printf_chk(1,&DAT_0001196d,uVar1);
  uVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_00011989,uVar1);
  uVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_000119a6,uVar1);
  uVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_000119c3,uVar1);
  return;
}

// Function: Base::virtual_func @ 0x112b0
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Base::getName @ 0x112b8
undefined1 * Base::getName(void)
{
  return &DAT_00011854;
}

// Function: Base::~Base @ 0x112c4
void __thiscall Base::_Base(Base *this)
{
  return;
}

// Function: Derived::virtual_func @ 0x112c8
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x112d4
char * Derived::getName(void)
{
  return "Derived";
}

// Function: MultiDerived::funcA @ 0x112e0
undefined4 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::funcB @ 0x112e8
undefined4 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x112f0
undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)
{
  return 0x28;
}

// Function: VirtualBase::func @ 0x112f8
undefined4 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11300
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return;
}

// Function: MiddleA::func @ 0x11304
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1131c
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: MiddleB::func @ 0x11330
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11348
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: DiamondDerived::func @ 0x1135c
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11374
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: DiamondDerived::func @ 0x11388
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -8);
  return;
}

// Function: MiddleA::~MiddleA @ 0x11390
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  *(undefined ***)this = &PTR_func_00011b2c;
  *(undefined ***)(this + 8) = &PTR_func_00011b48;
  return;
}

// Function: MiddleA::~MiddleA @ 0x113a8
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  int iVar1;
  iVar1 = *(int *)(*(int *)this + -0x10);
  *(undefined ***)(this + iVar1) = &PTR_func_00011b2c;
  *(undefined ***)(this + iVar1 + 8) = &PTR_func_00011b48;
  return;
}

// Function: MiddleB::~MiddleB @ 0x113d0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  *(undefined ***)this = &PTR_func_00011b68;
  *(undefined ***)(this + 8) = &PTR_func_00011b84;
  return;
}

// Function: MiddleB::~MiddleB @ 0x113e8
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  int iVar1;
  iVar1 = *(int *)(*(int *)this + -0x10);
  *(undefined ***)(this + iVar1) = &PTR_func_00011b68;
  *(undefined ***)(this + iVar1 + 8) = &PTR_func_00011b84;
  return;
}

// Function: RTTIDerivedA::getType @ 0x11410
undefined4 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIDerivedB::getType @ 0x11418
undefined4 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11420
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11424
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x11428
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x1142c
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  return this + -8;
}

// Function: Derived::~Derived @ 0x11434
void __thiscall Derived::_Derived(Derived *this)
{
  return;
}

// Function: Base::~Base @ 0x11438
Base * __thiscall Base::_Base(Base *this)
{
  operator_delete(this,4);
  return this;
}

// Function: Derived::~Derived @ 0x11450
Derived * __thiscall Derived::_Derived(Derived *this)
{
  operator_delete(this,8);
  return this;
}

// Function: MultiDerived::~MultiDerived @ 0x11468
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  operator_delete(this,0x10);
  return this;
}

// Function: MultiDerived::~MultiDerived @ 0x11480
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -8);
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x11488
VirtualBase * __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  operator_delete(this,8);
  return this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x114a0
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  operator_delete(this,4);
  return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x114b8
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  operator_delete(this,4);
  return this;
}

// Function: MiddleA::~MiddleA @ 0x114d0
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  *(undefined ***)this = &PTR_func_00011b2c;
  *(undefined ***)(this + 8) = &PTR_func_00011b48;
  operator_delete(this,0x10);
  return this;
}

// Function: MiddleA::~MiddleA @ 0x114fc
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleB::~MiddleB @ 0x11510
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  *(undefined ***)this = &PTR_func_00011b68;
  *(undefined ***)(this + 8) = &PTR_func_00011b84;
  operator_delete(this,0x10);
  return this;
}

// Function: MiddleB::~MiddleB @ 0x1153c
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleA::~MiddleA @ 0x11550
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  int *in_r1;
  int iVar1;
  iVar1 = *in_r1;
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = in_r1[1];
  return;
}

// Function: MiddleB::~MiddleB @ 0x11568
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  int *in_r1;
  int iVar1;
  iVar1 = *in_r1;
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = in_r1[1];
  return;
}

// Function: template_max<int> @ 0x11580
int template_max_int_(int param_1,int param_2)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_max<double> @ 0x1158c
double template_max_double_(double param_1,double param_2)
{
  double extraout_d0;
  __aeabi_dcmpgt();
  return extraout_d0;
}

// Function: template_swap<int> @ 0x115bc
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x115d0
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x115dc
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x115f4
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    return *(undefined4 *)(this + param_1 * 4);
  }
  return 0;
}

// Function: Container<int>::getSize @ 0x11618
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11620
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x1162c
void Container<double>::push(double param_1)
{
  int in_r0;
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  iVar2 = *(int *)(in_r0 + 0x50);
  if (9 < iVar2) {
    return;
  }
  *(int *)(in_r0 + 0x50) = iVar2 + 1;
  puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
  *puVar1 = in_r2;
  puVar1[1] = in_r3;
  return;
}

// Function: Container<double>::get @ 0x1164c
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    return *(undefined8 *)(this + param_1 * 8);
  }
  return 0;
}

// Function: Container<double>::getSize @ 0x11678
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x11680
unique_ptr_int_std__default_delete_int__ * __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this,4);
  }
  return this;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
          (unique_ptr_int___std__default_delete_int____ *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x116c4
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  int in_r1;
  undefined4 *in_r2;
  undefined **ppuVar1;
  undefined *puVar2;
  if (in_r1 == 0) {
    ppuVar1 = (undefined **)*in_r2;
  }
  else {
    ppuVar1 = &PTR_func_00011c20;
  }
  *(undefined ***)this = ppuVar1;
  if (in_r1 == 0) {
    puVar2 = ppuVar1[-3];
    ppuVar1 = (undefined **)in_r2[5];
  }
  else {
    puVar2 = (undefined *)0x10;
    ppuVar1 = &PTR_func_00011c54;
  }
  *(undefined ***)(this + (int)puVar2) = ppuVar1;
  if (in_r1 == 0) {
    ppuVar1 = (undefined **)in_r2[6];
  }
  else {
    ppuVar1 = &PTR_func_00011c38;
  }
  *(undefined ***)(this + 8) = ppuVar1;
  MiddleB::_MiddleB((MiddleB *)(this + 8));
  MiddleA::_MiddleA((MiddleA *)this);
  return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11748
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11754
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1175c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11770
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this,0x18);
  return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11790
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11798
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x117ac
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  return;
}

// Function: _fini @ 0x117b8
void _fini(void)
{
  return;
}

