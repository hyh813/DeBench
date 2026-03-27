/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_O1_no_g
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



/* Function: _start @ 00010b08 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010b4c */

/* WARNING: Removing unreachable block (ram,0x00010b60) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010b70 */

/* WARNING: Removing unreachable block (ram,0x00010b80) */
/* WARNING: Removing unreachable block (ram,0x00010b88) */
/* WARNING: Removing unreachable block (ram,0x00010b8c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010b9c */

/* WARNING: Removing unreachable block (ram,0x00010bb8) */
/* WARNING: Removing unreachable block (ram,0x00010bc0) */
/* WARNING: Removing unreachable block (ram,0x00010bc4) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010bd4 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: test_cpp_member_func @ 00010c00 */

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
  if (local_c == 0) {
    return sVar1 + 0x125c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00010c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new__(0x14);
  *(undefined4 *)((int)pvVar1 + 4) = 10;
  *(undefined4 *)((int)pvVar1 + 8) = 0x14;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
  *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
  iVar2 = LifecycleClass::instance_count + 0x15;
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  operator_delete__(pvVar1);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return iVar2 + LifecycleClass::instance_count * 1000;
}



/* Function: call_virtual_func @ 00010cd0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00010ce4 */

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
  local_18 = &PTR_virtual_func_0001187c;
  local_14 = &PTR_virtual_func_00011894;
  local_10 = 3;
  iVar1 = call_virtual_func((Base *)&local_18,5);
  uVar2 = call_virtual_func((Base *)&local_14,5);
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + 0x15 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
}



/* Function: test_cpp_multiple_inheritance @ 00010d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

void test_cpp_diamond_inheritance(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_14 = &PTR_func_00011968;
  local_10 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_14);
  local_10 = 100;
  uVar2 = DiamondDerived::func((DiamondDerived *)&local_14);
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
}



/* Function: test_cpp_operator_overload @ 00010df4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00010dfc */

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
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)uVar2 + iVar1 + local_1c + local_18,(int)((ulonglong)uVar2 >> 0x20),local_14
                   ,0);
}



/* Function: test_cpp_template_class @ 00010eac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 00010eb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 00010ebc */

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



/* Function: test_cpp_smart_ptr @ 00010f78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010f84 */

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
  
  piVar1 = operator_new(4);
  *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
  piVar2 = operator_new(4);
  *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
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
  if (iVar4 != 0) {
    iVar3 = iVar3 + 200;
  }
  iVar4 = *piVar1;
  __s = *(char **)(*(int *)(iVar4 + -4) + 4);
  if (*__s == '*') {
    __s = __s + 1;
  }
  sVar5 = strlen(__s);
  (**(code **)(iVar4 + 4))(piVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00011074 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined4 uVar1;
  
  puts(&DAT_000115e4);
  uVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_00011608,uVar1);
  uVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_00011628,uVar1);
  uVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_00011644,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_00011660,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_0001167c,uVar1);
  __printf_chk(1,&DAT_0001169c,0x16);
  uVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_000116b8,uVar1);
  __printf_chk(1,&DAT_000116d4,0x10);
  __printf_chk(1,&DAT_000116f0,0x55);
  uVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_0001170c,uVar1);
  uVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_0001172c,uVar1);
  uVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_0001174c,uVar1);
  return;
}



/* Function: main @ 0001119c */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
  return;
}



/* Function: virtual_func @ 000111dc */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 000111e4 */

/* Base::getName() const */

undefined1 * Base::getName(void)

{
  return &DAT_000115cc;
}



/* Function: ~Base @ 000111f0 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  return this;
}



/* Function: virtual_func @ 000111f4 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 00011200 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 0001120c */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 00011214 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 0001121c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00011224 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 0001123c */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
                         *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011260 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011278 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
                         *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 0001129c */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000112b4 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
                         *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000112d8 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000112f0 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: getType @ 000112f8 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00011300 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  return this;
}



/* Function: ~RTTIDerivedA @ 00011304 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 00011308 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 0001130c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this + *(int *)(*(int *)this + -0x10);
}



/* Function: ~DiamondDerived @ 0001131c */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this + -8;
}



/* Function: ~MultiDerived @ 00011324 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this;
}



/* Function: ~MultiDerived @ 00011328 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this + -8;
}



/* Function: ~Derived @ 00011330 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  return this;
}



/* Function: ~Base @ 00011334 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~Derived @ 0001134c */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this,8);
  return this;
}



/* Function: ~MultiDerived @ 00011364 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MultiDerived @ 0001137c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -8,0x10);
  return this + -8;
}



/* Function: ~RTTIDerivedA @ 00011398 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~RTTIDerivedB @ 000113b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~DiamondDerived @ 000113c8 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this,0x18);
  return this;
}



/* Function: ~DiamondDerived @ 000113e0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)this + -0x10);
  operator_delete(this + iVar1,0x18);
  return this + iVar1;
}



/* Function: ~DiamondDerived @ 00011404 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -8,0x18);
  return this + -8;
}



/* Function: template_max<int> @ 00011420 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 0001142c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
  return param_1;
}



/* Function: template_swap<int> @ 0001145c */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00011470 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 0001147c */

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



/* Function: get @ 00011494 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  if (param_1 < 0) {
    return 0;
  }
  if (*(int *)(this + 0x28) <= param_1) {
    return 0;
  }
  return *(undefined4 *)(this + param_1 * 4);
}



/* Function: getSize @ 000114c0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 000114c8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 000114d4 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  
  iVar2 = *(int *)(in_r0 + 0x50);
  if (iVar2 < 10) {
    *(int *)(in_r0 + 0x50) = iVar2 + 1;
    puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
    *puVar1 = in_r2;
    puVar1[1] = in_r3;
  }
  return SUB84(param_1,0);
}



/* Function: get @ 000114f0 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  if (param_1 < 0) {
    return 0;
  }
  if (*(int *)(this + 0x50) <= param_1) {
    return 0;
  }
  return *(undefined8 *)(this + param_1 * 8);
}



/* Function: getSize @ 00011528 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: _fini @ 00011530 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 69 */
