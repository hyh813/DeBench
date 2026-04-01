/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/5-1/5-1_clang_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00101618 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00101630 @ 00101630 */

void FUN_00101630(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001017c0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00101800 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101834 */

/* WARNING: Removing unreachable block (ram,0x00101844) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101850 */

/* WARNING: Removing unreachable block (ram,0x00101868) */
/* WARNING: Removing unreachable block (ram,0x00101874) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101880 */

/* WARNING: Removing unreachable block (ram,0x001018a4) */
/* WARNING: Removing unreachable block (ram,0x001018b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001018bc @ 001018bc */

void FUN_001018bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001018c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: test_cpp_member_func @ 00101914 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  undefined4 local_38;
  undefined8 local_34;
  undefined7 uStack_2c;
  undefined1 uStack_25;
  undefined7 uStack_24;
  undefined8 uStack_1d;
  undefined1 local_15;
  
  local_15 = 0;
  local_38 = 10;
  uStack_2c = 0;
  local_34 = 0x74736554;
  uStack_1d = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  sVar1 = strlen((char *)((ulong)&local_38 | 4));
  return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  
  pvVar1 = operator_new__(0x14);
  iVar2 = 0;
  lVar3 = 0;
  do {
    *(int *)((long)pvVar1 + lVar3) = iVar2;
    lVar3 = lVar3 + 4;
    iVar2 = iVar2 + 10;
  } while (lVar3 != 0x14);
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  iVar2 = *(int *)((long)pvVar1 + 8) + LifecycleClass::instance_count;
  operator_delete__(pvVar1);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return iVar2 + LifecycleClass::instance_count * 1000;
}



/* Function: call_virtual_func @ 001019d0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined8 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 001019ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  undefined **local_30;
  undefined4 local_28;
  undefined **local_8;
  
  local_8 = &PTR_virtual_func_001139a8;
  local_30 = &PTR_virtual_func_001139e8;
  local_28 = 3;
  iVar1 = Base::virtual_func((Base *)&local_8,5);
  iVar2 = (*(code *)*local_30)(&local_30,5);
  return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00101a5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_30;
  undefined4 local_28;
  
  local_30 = &PTR_funcB_00113a60;
  local_28 = 200;
  iVar1 = MultiDerived::funcA();
  iVar2 = (*(code *)*local_30)(&local_30);
  return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00101acc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_40;
  undefined4 local_38;
  
  local_40 = &PTR_func_00113ba0;
  local_38 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_40);
  local_38 = 100;
  iVar2 = (*(code *)*local_40)((DiamondDerived *)&local_40);
  return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00101b54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101b5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 00101b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 00101b6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 00101b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 00101b94 to 00101ba3 has its CatchHandler @ 00101ba8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00101c64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char *__s1;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  char *__s1_00;
  
  plVar4 = operator_new(8);
  *plVar4 = (long)&PTR__RTTIBase_00113d58;
  plVar5 = operator_new(8);
  lVar8 = *plVar4;
  *plVar5 = 0;
  *plVar5 = (long)&PTR__RTTIBase_00113d80;
  __s1_00 = *(char **)(*(long *)(lVar8 + -8) + 8);
  if (__s1_00 == "12RTTIDerivedA") {
    uVar7 = 10;
  }
  else if (*__s1_00 == '*') {
    uVar7 = 0;
  }
  else {
    iVar3 = strcmp(__s1_00,"12RTTIDerivedA");
    uVar7 = 10;
    if (iVar3 != 0) {
      uVar7 = 0;
    }
  }
  __s1 = *(char **)(*(long *)(*plVar5 + -8) + 8);
  if (__s1 == "12RTTIDerivedB") {
    bVar2 = true;
  }
  else if (*__s1 == '*') {
    bVar2 = false;
  }
  else {
    iVar3 = strcmp(__s1,"12RTTIDerivedB");
    bVar2 = iVar3 == 0;
  }
  uVar1 = uVar7 | 0x14;
  if (!bVar2) {
    uVar1 = uVar7;
  }
  lVar8 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  if (lVar8 != 0) {
    uVar1 = uVar1 + 100;
  }
  lVar8 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar8 != 0) {
    uVar1 = uVar1 + 200;
  }
  if (*__s1_00 == '*') {
    __s1_00 = __s1_00 + 1;
  }
  sVar6 = strlen(__s1_00);
  (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar5 + 8))(plVar5);
  return uVar1 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  puts(&DAT_001025f9);
  local_60 = 10;
  auStack_58[1] = 0;
  uStack_5c = 0x74736554;
  auStack_58[0] = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  sVar3 = strlen((char *)((ulong)&local_60 | 4));
  printf(&DAT_00102495,(ulong)((int)sVar3 + 0x125c));
  pvVar4 = operator_new__(0x14);
  iVar1 = 0;
  lVar6 = 0;
  do {
    *(int *)((long)pvVar4 + lVar6) = iVar1;
    lVar6 = lVar6 + 4;
    iVar1 = iVar1 + 10;
  } while (lVar6 != 0x14);
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  iVar1 = *(int *)((long)pvVar4 + 8) + LifecycleClass::instance_count;
  operator_delete__(pvVar4);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  printf(&DAT_001024b3,(ulong)(uint)(iVar1 + LifecycleClass::instance_count * 1000));
  auStack_58[0] = 3;
  local_68 = &PTR_virtual_func_001139a8;
  local_60 = 0x1139e8;
  uStack_5c = 0;
  iVar1 = Base::virtual_func((Base *)&local_68,5);
  iVar2 = (**(code **)CONCAT44(uStack_5c,local_60))(&local_60,5);
  printf(&DAT_001024cf,(ulong)(iVar1 + iVar2 + 0x15));
  local_60 = 0x113a30;
  uStack_5c = 0;
  uStack_50 = 0x113a60;
  uStack_4c = 0;
  auStack_58[0] = 100;
  local_48 = 200;
  iVar1 = MultiDerived::funcB((MultiDerived *)&uStack_50);
  printf(&DAT_001024eb,(ulong)(iVar1 + 0x1f));
  local_60 = 0x113b38;
  uStack_5c = 0;
  local_40 = 0x113ba0;
  uStack_3c = 0;
  uStack_50 = 0x113b68;
  uStack_4c = 0;
  local_38 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_40);
  *(undefined4 *)((long)auStack_58 + *(long *)(CONCAT44(uStack_5c,local_60) + -0x18)) = 100;
  iVar2 = (**(code **)CONCAT44(uStack_3c,local_40))((DiamondDerived *)&local_40);
  printf(&DAT_00102507,(ulong)(uint)(iVar2 + iVar1));
  printf(&DAT_00102524,0x16);
  printf(&DAT_00102540,0x27);
  printf(&DAT_0010255c,0x10);
  printf(&DAT_00102578,0x55);
  uVar5 = test_cpp_exception();
  printf(&DAT_00102594,uVar5 & 0xffffffff);
  printf(&DAT_001025b1,0x2bf);
  uVar5 = test_cpp_rtti();
  iVar1 = printf(&DAT_001025ce,uVar5 & 0xffffffff);
  return iVar1;
}



/* Function: main @ 00102050 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: virtual_func @ 00102068 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: virtual_func @ 00102070 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 8) * param_1;
}



/* Function: ~Base @ 0010207c */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102080 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102084 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: template_max<int> @ 00102088 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 00102094 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 001020a0 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 001020b4 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 001020bc */

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



/* Function: get @ 001020d8 */

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



/* Function: getSize @ 001020f8 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00102100 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00102108 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(double *)(this + (long)iVar1 * 8) = param_1;
    *(int *)(this + 0x50) = iVar1 + 1;
  }
  return;
}



/* Function: get @ 00102124 */

/* Container<double>::get(int) const */

undefined1  [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    uVar1 = *(ulong *)(this + (long)param_1 * 8);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Function: getSize @ 00102140 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00102148 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_001025ec;
}



/* Function: ~Base @ 00102154 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this);
  return;
}



/* Function: getName @ 00102168 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: ~Derived @ 00102174 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcA @ 00102188 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 00102190 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 001021a4 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 001021ac */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: ~MultiDerived @ 001021b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 001021b8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -0x10);
  return;
}



/* Function: funcA @ 001021d0 */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 001021d8 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  return;
}



/* Function: ~BaseA @ 001021dc */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 001021f0 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 001021f8 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  return;
}



/* Function: ~BaseB @ 001021fc */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00102210 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00102228 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 0010222c */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00102240 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00102264 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 00102268 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: func @ 00102288 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 001022a0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 001022a4 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 001022b8 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 001022dc */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: func @ 00102300 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102318 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 0010232c */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + -0x10 + *(long *)(*(long *)(this + -0x10) + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102344 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102348 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -0x10);
  return;
}



/* Function: func @ 00102360 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102384 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102388 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: func @ 001023a8 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 001023b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return;
}



/* Function: ~VirtualBase @ 001023b4 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  operator_delete(this);
  return;
}



/* Function: ~RTTIDerivedA @ 001023c8 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 001023dc */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 001023e4 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 001023e8 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 001023fc */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: _fini @ 00102404 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 85 */
