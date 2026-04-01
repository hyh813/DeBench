/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00102000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00102280 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001022b0 */

/* WARNING: Removing unreachable block (ram,0x001022c3) */
/* WARNING: Removing unreachable block (ram,0x001022cf) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001022e0 */

/* WARNING: Removing unreachable block (ram,0x00102304) */
/* WARNING: Removing unreachable block (ram,0x00102310) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102320 */

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



/* Function: test_cpp_member_func @ 00102369 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  long in_FS_OFFSET;
  char local_34 [36];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_34,"Test",5);
  local_34[5] = '\0';
  local_34[6] = '\0';
  local_34[7] = '\0';
  local_34[8] = '\0';
  local_34[9] = '\0';
  local_34[10] = '\0';
  local_34[0xb] = '\0';
  local_34[0xc] = '\0';
  local_34[0xd] = '\0';
  local_34[0xe] = '\0';
  local_34[0xf] = '\0';
  local_34[0x10] = '\0';
  local_34[0x11] = '\0';
  local_34[0x12] = '\0';
  local_34[0x13] = '\0';
  local_34[0x14] = '\0';
  local_34[0x15] = '\0';
  local_34[0x16] = '\0';
  local_34[0x17] = '\0';
  local_34[0x18] = '\0';
  local_34[0x19] = '\0';
  local_34[0x1a] = '\0';
  local_34[0x1b] = '\0';
  local_34[0x1c] = '\0';
  local_34[0x1d] = '\0';
  local_34[0x1e] = 0;
  local_34[0x1f] = 0;
  sVar1 = strlen(local_34);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)sVar1 + 0x125c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001023de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = operator_new__(0x14);
  *(undefined4 *)((long)pvVar2 + 4) = 10;
  *(undefined4 *)((long)pvVar2 + 8) = 0x14;
  *(undefined4 *)((long)pvVar2 + 0xc) = 0x1e;
  *(undefined4 *)((long)pvVar2 + 0x10) = 0x28;
  iVar1 = LifecycleClass::instance_count + 0x15;
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  operator_delete__(pvVar2);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return LifecycleClass::instance_count * 1000 + iVar1;
}



/* Function: call_virtual_func @ 0010243c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined8 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 0010244e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined **local_30;
  undefined **local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &PTR_virtual_func_001059a0;
  local_28 = &PTR_virtual_func_001059d0;
  local_20 = 3;
  iVar1 = call_virtual_func((Base *)&local_30,5);
  iVar2 = call_virtual_func((Base *)&local_28,5);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 + 0x15 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_multiple_inheritance @ 001024c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x105b78;
  local_30 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_38);
  local_30 = 100;
  iVar2 = DiamondDerived::func((DiamondDerived *)&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_operator_overload @ 0010254c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00102556 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = template_max<int>(3,7);
  dVar2 = template_max<double>(2.5,1.5);
  local_18 = 10;
  local_14 = 0x14;
  template_swap<int>(&local_18,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)dVar2 + iVar1 + local_18 + local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001025e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 001025ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 001025f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00102620 to 00102624 has its CatchHandler @ 00102625 */
  __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001026d1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 001026db */

/* WARNING: Removing unreachable block (ram,0x00102769) */
/* WARNING: Removing unreachable block (ram,0x0010276e) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  long lVar1;
  char *__s1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  
  plVar3 = operator_new(8);
  *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
  plVar4 = operator_new(8);
  *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
  lVar1 = *plVar3;
  __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
  uVar7 = 10;
  if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
    iVar2 = strcmp(__s1,"12RTTIDerivedA");
    uVar7 = -(uint)(iVar2 == 0) & 10;
  }
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar2 = uVar7 + 0x14;
  if (lVar5 != 0) {
    iVar2 = uVar7 + 0x78;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar2 + 200;
  }
  sVar6 = strlen(__s1 + (*__s1 == '*'));
  (**(code **)(lVar1 + 8))(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00102801 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103018);
  uVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_0010303c,uVar1);
  uVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_0010305a,uVar1);
  uVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_00103076,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_00103092,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_001030ae,uVar1);
  __printf_chk(1,&DAT_001030cb,0x16);
  uVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_001030e7,uVar1);
  __printf_chk(1,&DAT_00103103,0x10);
  __printf_chk(1,&DAT_0010311f,0x55);
  uVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_0010313b,uVar1);
  uVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_00103158,uVar1);
  uVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_00103175,uVar1);
  return;
}



/* Function: main @ 00102970 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00102987 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: virtual_func @ 001029b4 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 001029bc */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_00103004;
}



/* Function: ~Base @ 001029c8 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: virtual_func @ 001029ce */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 001029da */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 001029e6 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 001029fa */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00102a04 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a7d */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: getType @ 00102aba */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00102ac4 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00102aca */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ad0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ad5 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102ae0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102ae5 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~Derived @ 00102aea */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  return;
}



/* Function: ~Base @ 00102af0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00102b08 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -0x10,0x20);
  return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -0x10,0x30);
  return;
}



/* Function: template_max<int> @ 00102bd2 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00102bde */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 00102be7 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00102bf4 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00102c00 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 00102c18 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 00102c34 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00102c3c */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00102c48 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00102c62 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
  }
  return uVar1;
}



/* Function: getSize @ 00102c7e */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: _fini @ 00102c88 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 68 */
