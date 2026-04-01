/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010b84 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00010cf8 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010d3c */

/* WARNING: Removing unreachable block (ram,0x00010d50) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010d60 */

/* WARNING: Removing unreachable block (ram,0x00010d80) */
/* WARNING: Removing unreachable block (ram,0x00010d8c) */
/* WARNING: Removing unreachable block (ram,0x00010d90) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010da4 */

/* WARNING: Removing unreachable block (ram,0x00010dd0) */
/* WARNING: Removing unreachable block (ram,0x00010ddc) */
/* WARNING: Removing unreachable block (ram,0x00010de0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010df4 */

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



/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  
  local_28 = 0x74736554;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  local_a = 0;
  local_9 = 0;
  sVar1 = strlen((char *)&local_28);
  return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = operator_new__(0x14);
  iVar2 = 0;
  iVar3 = 0;
  do {
    *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
    iVar2 = iVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -5);
  iVar2 = LifecycleClass::instance_count + 1;
  iVar3 = *(int *)((int)pvVar1 + 8);
  LifecycleClass::instance_count = iVar2;
  operator_delete__(pvVar1);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return LifecycleClass::instance_count * 1000 + iVar3 + iVar2;
}



/* Function: call_virtual_func @ 00010f48 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  undefined **local_14;
  undefined4 local_10;
  undefined **local_c;
  
  local_c = &PTR_virtual_func_00022cf0;
  local_10 = 3;
  local_14 = &PTR_virtual_func_00022d10;
  iVar1 = Base::virtual_func((Base *)&local_c,5);
  iVar2 = (*(code *)*local_14)(&local_14,5);
  return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_18;
  undefined4 local_14;
  
  local_14 = 200;
  local_18 = &PTR_funcB_00022d4c;
  iVar1 = MultiDerived::funcA();
  iVar2 = (*(code *)*local_18)(&local_18);
  return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_18;
  undefined4 local_14;
  
  local_14 = 0x32;
  local_18 = &PTR_func_00022df0;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
  local_14 = 100;
  iVar2 = (*(code *)*local_18)((DiamondDerived *)&local_18);
  return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 000110f0 */

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



/* Function: test_cpp_smart_ptr @ 000111c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  char *__s1;
  uint uVar7;
  bool bVar8;
  
  piVar1 = operator_new(4);
  *piVar1 = (int)&PTR__RTTIBase_00022ed8;
  piVar2 = operator_new(4);
  uVar7 = 0;
  *piVar2 = 0;
  *piVar2 = (int)&PTR__RTTIBase_00022eec;
  __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
  if (__s1 == "12RTTIDerivedA") {
    uVar7 = 10;
  }
  else if (*__s1 != '*') {
    iVar3 = strcmp(__s1,"12RTTIDerivedA");
    uVar7 = 0;
    if (iVar3 == 0) {
      uVar7 = 10;
    }
  }
  pcVar4 = *(char **)(*(int *)(*piVar2 + -4) + 4);
  if (pcVar4 == "12RTTIDerivedB") {
    bVar8 = true;
  }
  else {
    bVar8 = false;
    if (*pcVar4 != '*') {
      iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
      bVar8 = iVar3 == 0;
    }
  }
  iVar3 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar5 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  pcVar4 = __s1 + 1;
  if (*__s1 != '*') {
    pcVar4 = __s1;
  }
  sVar6 = strlen(pcVar4);
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  if (bVar8) {
    uVar7 = uVar7 | 0x14;
  }
  if (iVar3 != 0) {
    uVar7 = uVar7 + 100;
  }
  if (iVar5 != 0) {
    uVar7 = uVar7 + 200;
  }
  return uVar7 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined **ppuVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined **local_40;
  undefined4 local_3c;
  undefined **local_38;
  undefined4 local_34;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined **local_1c;
  
  puts(&DAT_00011c71);
  local_3c = 0x74736554;
  local_38 = (undefined **)0x0;
  local_34 = 0;
  local_30 = (undefined **)0x0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  local_1e = 0;
  iVar6 = 0;
  local_1d = 0;
  local_40 = (undefined **)0xa;
  sVar2 = strlen((char *)&local_3c);
  printf(&DAT_00011b0d,sVar2 + 0x125c);
  pvVar3 = operator_new__(0x14);
  iVar5 = 0;
  do {
    *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
    iVar6 = iVar6 + 10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -5);
  iVar5 = LifecycleClass::instance_count + 1;
  iVar6 = *(int *)((int)pvVar3 + 8);
  LifecycleClass::instance_count = iVar5;
  operator_delete__(pvVar3);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  printf(&DAT_00011b2b,LifecycleClass::instance_count * 1000 + iVar6 + iVar5);
  local_1c = &PTR_virtual_func_00022cf0;
  local_3c = 3;
  local_40 = &PTR_virtual_func_00022d10;
  iVar5 = Base::virtual_func((Base *)&local_1c,5);
  iVar6 = (*(code *)*local_40)(&local_40,5);
  printf(&DAT_00011b47,iVar5 + iVar6 + 0x15);
  local_38 = &PTR_funcB_00022d4c;
  local_34 = 200;
  local_3c = 100;
  local_40 = &PTR_funcA_00022d34;
  iVar5 = MultiDerived::funcB((MultiDerived *)&local_38);
  printf(&DAT_00011b63,iVar5 + 0x1f);
  local_30 = &PTR_func_00022df0;
  local_2c = 0x32;
  local_40 = &PTR_func_00022dbc;
  local_38 = &PTR_func_00022dd4;
  iVar5 = DiamondDerived::func((DiamondDerived *)&local_30);
  ppuVar1 = local_30;
  *(undefined4 *)((int)&local_3c + (int)local_40[-3]) = 100;
  iVar6 = (*(code *)*ppuVar1)((DiamondDerived *)&local_30);
  printf(&DAT_00011b7f,iVar6 + iVar5);
  printf(&DAT_00011b9c,0x16);
  printf(&DAT_00011bb8,0x27);
  printf(&DAT_00011bd4,0x10);
  printf(&DAT_00011bf0,0x55);
  uVar4 = test_cpp_exception();
  printf(&DAT_00011c0c,uVar4);
  printf(&DAT_00011c29,0x2bf);
  uVar4 = test_cpp_rtti();
  printf(&DAT_00011c46,uVar4);
  return;
}



/* Function: main @ 00011648 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: virtual_func @ 0001165c */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: virtual_func @ 00011664 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 4) * param_1;
}



/* Function: ~Base @ 00011670 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  return this;
}



/* Function: ~MultiDerived @ 00011674 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 00011678 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this;
}



/* Function: template_max<int> @ 0001167c */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
  return param_1;
}



/* Function: template_swap<int> @ 000116bc */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 000116d0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 000116dc */

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



/* Function: get @ 000116f4 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 < *(int *)(this + 0x28)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 00011714 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 0001171c */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00011728 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = *(int *)(in_r0 + 0x50);
  if (9 < iVar2) {
    return SUB84(param_1,0);
  }
  puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
  *puVar1 = in_r2;
  puVar1[1] = in_r3;
  *(int *)(in_r0 + 0x50) = iVar2 + 1;
  return SUB84(param_1,0);
}



/* Function: get @ 0001174c */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  if (-1 < param_1) {
    if (param_1 < *(int *)(this + 0x50)) {
      uVar1 = *(undefined4 *)(this + param_1 * 8);
      uVar2 = *(undefined4 *)(this + param_1 * 8 + 4);
    }
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Function: getSize @ 00011778 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00011780 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_00011c64;
}



/* Function: ~Base @ 00011790 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this);
  return;
}



/* Function: getName @ 000117a0 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: ~Derived @ 000117b0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcA @ 000117c0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 000117c8 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 000117d8 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 000117e0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: ~MultiDerived @ 000117e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this;
}



/* Function: ~MultiDerived @ 000117ec */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -8);
  return;
}



/* Function: funcA @ 00011800 */

/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00011808 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA::~BaseA(BaseA *this)

{
  return this;
}



/* Function: ~BaseA @ 0001180c */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 0001181c */

/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 00011824 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB::~BaseB(BaseB *this)

{
  return this;
}



/* Function: ~BaseB @ 00011828 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011838 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011850 */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return this;
}



/* Function: ~MiddleA @ 00011854 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011864 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) +
                 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011884 */

/* virtual thunk to MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return this;
}



/* Function: ~MiddleA @ 00011888 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 000118a4 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118bc */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return this;
}



/* Function: ~MiddleB @ 000118c0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 000118d0 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) +
                 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118f0 */

/* virtual thunk to MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return this;
}



/* Function: ~MiddleB @ 000118f4 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00011910 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011928 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011938 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + -8 + *(int *)(*(int *)(this + -8) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011950 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 00011954 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -8);
  return;
}



/* Function: func @ 00011968 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) +
                 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011988 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 0001198c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 000119a8 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 000119b0 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return this;
}



/* Function: ~VirtualBase @ 000119b4 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  operator_delete(this);
  return;
}



/* Function: ~RTTIDerivedA @ 000119c4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 000119d4 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 000119dc */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return this;
}



/* Function: ~RTTIDerivedB @ 000119e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 000119f0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: _fini @ 000119f8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 83 */
