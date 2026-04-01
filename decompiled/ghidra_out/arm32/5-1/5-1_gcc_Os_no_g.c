/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000109b0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: test_cpp_exception @ 00010b08 */

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



/* Function: main @ 00010bbc */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
  return;
}



/* Function: _start @ 00010bfc */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010c40 */

/* WARNING: Removing unreachable block (ram,0x00010c54) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010c64 */

/* WARNING: Removing unreachable block (ram,0x00010c74) */
/* WARNING: Removing unreachable block (ram,0x00010c7c) */
/* WARNING: Removing unreachable block (ram,0x00010c80) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010c90 */

/* WARNING: Removing unreachable block (ram,0x00010cac) */
/* WARNING: Removing unreachable block (ram,0x00010cb4) */
/* WARNING: Removing unreachable block (ram,0x00010cb8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010cc8 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: test_cpp_member_func @ 00010cf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  char acStack_2c [31];
  undefined1 local_d;
  int local_c;
  
  local_c = 0;
  strncpy(acStack_2c,"Test",0x1f);
  local_d = 0;
  sVar1 = strlen(acStack_2c);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010d7c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00010d88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 + 0x15 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
  }
  return;
}



/* Function: test_cpp_multiple_inheritance @ 00010e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_operator_overload @ 00010e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00010e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
  int iVar1;
  undefined4 extraout_r0;
  undefined4 extraout_r1;
  double extraout_d0;
  double extraout_d1;
  undefined8 uVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  iVar1 = template_max<int>(3,7);
  template_max<double>(extraout_d0,extraout_d1);
  local_1c = 10;
  local_18 = 0x14;
  template_swap<int>(&local_1c,&local_18);
  uVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((int)uVar2 + iVar1 + local_1c + local_18,(int)((ulonglong)uVar2 >> 0x20),
                     local_14,0);
  }
  return;
}



/* Function: test_cpp_template_class @ 00010ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

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
  Container<int>::push((Container<int> *)local_38,0x14);
  Container<int>::push((Container<int> *)local_38,0x1e);
  iVar1 = local_38[0];
  if (local_10 < 1) {
    iVar1 = 0;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10 + iVar1 + 3,extraout_r1,local_c,0);
  }
  return;
}



/* Function: test_cpp_lambda @ 00010f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_rtti @ 00010f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  int iVar6;
  
  piVar1 = operator_new(4);
  *piVar1 = (int)&PTR__RTTIDerivedA_00011c68;
  piVar2 = operator_new(4);
  *piVar2 = (int)&PTR__RTTIDerivedB_00011c7c;
  iVar3 = std::type_info::operator==
                    (*(type_info **)(*piVar1 + -4),(type_info *)&RTTIDerivedA::typeinfo);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 10;
  }
  iVar4 = std::type_info::operator==
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



/* Function: test_cpp_smart_ptr @ 00011038 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_14 = operator_new(4);
  *local_14 = 200;
  local_18 = 0;
  local_10 = operator_new__(0x14);
  *local_10 = 1;
  local_10[1] = 2;
  local_10[2] = 3;
  local_10[3] = 4;
  local_10[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
            ((unique_ptr<int[],std::default_delete<int[]>> *)&local_10);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
            ((unique_ptr<int,std::default_delete<int>> *)&local_14);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
            ((unique_ptr<int,std::default_delete<int>> *)&local_18);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 000110ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

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
  DiamondDerived::~DiamondDerived((DiamondDerived *)local_24);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

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



/* Function: virtual_func @ 000112b0 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 000112b8 */

/* Base::getName() const */

undefined1 * Base::getName(void)

{
  return &DAT_00011854;
}



/* Function: ~Base @ 000112c4 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  return this;
}



/* Function: virtual_func @ 000112c8 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 000112d4 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 000112e0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 000112e8 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 000112f0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 000112f8 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 00011300 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return this;
}



/* Function: func @ 00011304 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 0001131c */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00011330 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011348 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 0001135c */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011374 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00011388 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -8);
  return;
}



/* Function: ~MiddleA @ 00011390 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  *(undefined ***)this = &PTR_func_00011b2c;
  *(undefined ***)(this + 8) = &PTR_func_00011b48;
  return;
}



/* Function: ~MiddleA @ 000113a8 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)this + -0x10);
  *(undefined ***)(this + iVar1) = &PTR_func_00011b2c;
  *(undefined ***)(this + iVar1 + 8) = &PTR_func_00011b48;
  return;
}



/* Function: ~MiddleB @ 000113d0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  *(undefined ***)this = &PTR_func_00011b68;
  *(undefined ***)(this + 8) = &PTR_func_00011b84;
  return;
}



/* Function: ~MiddleB @ 000113e8 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)this + -0x10);
  *(undefined ***)(this + iVar1) = &PTR_func_00011b68;
  *(undefined ***)(this + iVar1 + 8) = &PTR_func_00011b84;
  return;
}



/* Function: getType @ 00011410 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: getType @ 00011418 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00011420 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  return this;
}



/* Function: ~RTTIDerivedA @ 00011424 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  return this;
}



/* Function: ~MultiDerived @ 00011428 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this;
}



/* Function: ~MultiDerived @ 0001142c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this + -8;
}



/* Function: ~Derived @ 00011434 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  return this;
}



/* Function: ~Base @ 00011438 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~Derived @ 00011450 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this,8);
  return this;
}



/* Function: ~MultiDerived @ 00011468 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MultiDerived @ 00011480 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~VirtualBase @ 00011488 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  operator_delete(this,8);
  return this;
}



/* Function: ~RTTIDerivedB @ 000114a0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~RTTIDerivedA @ 000114b8 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~MiddleA @ 000114d0 */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  *(undefined ***)this = &PTR_func_00011b2c;
  *(undefined ***)(this + 8) = &PTR_func_00011b48;
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MiddleA @ 000114fc */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MiddleB @ 00011510 */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  *(undefined ***)this = &PTR_func_00011b68;
  *(undefined ***)(this + 8) = &PTR_func_00011b84;
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MiddleB @ 0001153c */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MiddleA @ 00011550 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  int *in_r1;
  int iVar1;
  
  iVar1 = *in_r1;
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = in_r1[1];
  return;
}



/* Function: ~MiddleB @ 00011568 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  int *in_r1;
  int iVar1;
  
  iVar1 = *in_r1;
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = in_r1[1];
  return;
}



/* Function: template_max<int> @ 00011580 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 0001158c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000115a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
  return param_1;
}



/* Function: template_swap<int> @ 000115bc */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 000115d0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 000115dc */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 000115f4 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    return *(undefined4 *)(this + param_1 * 4);
  }
  return 0;
}



/* Function: getSize @ 00011618 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00011620 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 0001162c */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  
  iVar2 = *(int *)(in_r0 + 0x50);
  if (9 < iVar2) {
    return SUB84(param_1,0);
  }
  *(int *)(in_r0 + 0x50) = iVar2 + 1;
  puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
  *puVar1 = in_r2;
  puVar1[1] = in_r3;
  return SUB84(param_1,0);
}



/* Function: get @ 0001164c */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    return *(undefined8 *)(this + param_1 * 8);
  }
  return 0;
}



/* Function: getSize @ 00011678 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: ~unique_ptr @ 00011680 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

unique_ptr<int,std::default_delete<int>> * __thiscall
std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
          (unique_ptr<int,std::default_delete<int>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this,4);
  }
  return this;
}



/* Function: ~unique_ptr @ 000116a4 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

unique_ptr<int[],std::default_delete<int[]>> * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  return this;
}



/* Function: ~DiamondDerived @ 000116c4 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

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
  MiddleB::~MiddleB((MiddleB *)(this + 8));
  MiddleA::~MiddleA((MiddleA *)this);
  return this;
}



/* Function: ~DiamondDerived @ 00011748 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  return;
}



/* Function: ~DiamondDerived @ 00011754 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 0001175c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~DiamondDerived @ 00011770 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x18);
  return this;
}



/* Function: ~DiamondDerived @ 00011790 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00011798 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~DiamondDerived @ 000117ac */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  return;
}



/* Function: _fini @ 000117b8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 86 */
