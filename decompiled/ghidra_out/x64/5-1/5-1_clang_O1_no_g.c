/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_clang_O1_no_g
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



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00102150 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00102180 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001021b0 */

/* WARNING: Removing unreachable block (ram,0x001021c3) */
/* WARNING: Removing unreachable block (ram,0x001021cf) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001021e0 */

/* WARNING: Removing unreachable block (ram,0x00102204) */
/* WARNING: Removing unreachable block (ram,0x00102210) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102220 */

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



/* Function: test_cpp_member_func @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  char local_24 [36];
  
  builtin_strncpy(local_24,"Test",5);
  local_24[5] = '\0';
  local_24[6] = '\0';
  local_24[7] = '\0';
  local_24[8] = '\0';
  local_24[9] = '\0';
  local_24[10] = '\0';
  local_24[0xb] = '\0';
  local_24[0xc] = '\0';
  local_24[0xd] = '\0';
  local_24[0xe] = '\0';
  local_24[0xf] = 0;
  local_24[0x10] = '\0';
  local_24[0x11] = '\0';
  local_24[0x12] = '\0';
  local_24[0x13] = '\0';
  local_24[0x14] = '\0';
  local_24[0x15] = '\0';
  local_24[0x16] = '\0';
  local_24[0x17] = '\0';
  local_24[0x18] = '\0';
  local_24[0x19] = '\0';
  local_24[0x1a] = '\0';
  local_24[0x1b] = '\0';
  local_24[0x1c] = '\0';
  local_24[0x1d] = '\0';
  local_24[0x1e] = '\0';
  local_24[0x1f] = 0;
  sVar1 = strlen(local_24);
  return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = operator_new__(0x14);
  lVar2 = 0;
  puVar3 = puVar1;
  do {
    *puVar3 = (int)lVar2;
    lVar2 = lVar2 + 10;
    puVar3 = puVar3 + 1;
  } while (lVar2 != 0x32);
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  iVar4 = LifecycleClass::instance_count + puVar1[2];
  operator_delete__(puVar1);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return LifecycleClass::instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 00102310 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined8 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  undefined **local_20;
  undefined4 local_18;
  undefined **local_10;
  
  local_10 = &PTR_virtual_func_001059c8;
  local_20 = &PTR_virtual_func_00105a08;
  local_18 = 3;
  iVar1 = Base::virtual_func((Base *)&local_10,5);
  iVar2 = (*(code *)*local_20)(&local_20,5);
  return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_20;
  undefined4 local_18;
  
  local_20 = &PTR_funcB_00105a80;
  local_18 = 200;
  iVar1 = MultiDerived::funcA();
  iVar2 = (*(code *)*local_20)(&local_20);
  return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_20;
  undefined4 local_18;
  
  local_20 = &PTR_func_00105bc0;
  local_18 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_20);
  local_18 = 100;
  iVar2 = (*(code *)*local_20)((DiamondDerived *)&local_20);
  return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 00102490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  char *__s1;
  char *__s1_00;
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  bool bVar8;
  
  plVar3 = operator_new(8);
  *plVar3 = (long)&PTR__RTTIBase_00105d78;
  plVar4 = operator_new(8);
  *plVar4 = (long)&PTR__RTTIBase_00105da0;
  __s1 = *(char **)(*(long *)(*plVar3 + -8) + 8);
  if (__s1 == "12RTTIDerivedA") {
    uVar7 = 10;
  }
  else {
    uVar7 = 0;
    if (*__s1 != '*') {
      iVar2 = strcmp(__s1,"12RTTIDerivedA");
      uVar7 = 10;
      if (iVar2 != 0) {
        uVar7 = 0;
      }
    }
  }
  __s1_00 = *(char **)(*(long *)(*plVar4 + -8) + 8);
  if (__s1_00 == "12RTTIDerivedB") {
    bVar8 = true;
  }
  else if (*__s1_00 == '*') {
    bVar8 = false;
  }
  else {
    iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
    bVar8 = iVar2 == 0;
  }
  uVar1 = uVar7 | 0x14;
  if (!bVar8) {
    uVar1 = uVar7;
  }
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  uVar7 = uVar1 + 100;
  if (lVar5 == 0) {
    uVar7 = uVar1;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  uVar1 = uVar7 + 200;
  if (lVar5 == 0) {
    uVar1 = uVar7;
  }
  sVar6 = strlen(__s1 + (*__s1 == '*'));
  (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  return (int)sVar6 + uVar1;
}



/* Function: test_cpp_oo_features @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined **local_18;
  
  puts(&DAT_001031e1);
  uStack_44 = 0x74736554;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  local_48 = 10;
  sVar3 = strlen((char *)&uStack_44);
  lVar7 = 0;
  printf(&DAT_0010307d,(ulong)((int)sVar3 + 0x125c));
  puVar4 = operator_new__(0x14);
  puVar5 = puVar4;
  do {
    *puVar5 = (int)lVar7;
    lVar7 = lVar7 + 10;
    puVar5 = puVar5 + 1;
  } while (lVar7 != 0x32);
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  iVar6 = LifecycleClass::instance_count + puVar4[2];
  operator_delete__(puVar4);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  printf(&DAT_0010309b,(ulong)(uint)(LifecycleClass::instance_count * 1000 + iVar6));
  local_18 = &PTR_virtual_func_001059c8;
  local_48 = 0x105a08;
  uStack_44 = 0;
  auStack_40[0] = 3;
  iVar6 = Base::virtual_func((Base *)&local_18,5);
  iVar1 = (**(code **)CONCAT44(uStack_44,local_48))(&local_48,5);
  printf(&DAT_001030b7,(ulong)(iVar6 + iVar1 + 0x15));
  local_48 = 0x105a50;
  uStack_44 = 0;
  uStack_38 = 0x105a80;
  uStack_34 = 0;
  auStack_40[0] = 100;
  local_30 = 200;
  iVar6 = MultiDerived::funcB((MultiDerived *)&uStack_38);
  printf(&DAT_001030d3,(ulong)(iVar6 + 0x1f));
  local_48 = 0x105b58;
  uStack_44 = 0;
  local_28 = 0x105bc0;
  uStack_24 = 0;
  uStack_38 = 0x105b88;
  uStack_34 = 0;
  local_20 = 0x32;
  iVar6 = DiamondDerived::func((DiamondDerived *)&local_28);
  *(undefined4 *)((long)auStack_40 + *(long *)(CONCAT44(uStack_44,local_48) + -0x18)) = 100;
  iVar1 = (**(code **)CONCAT44(uStack_24,local_28))((DiamondDerived *)&local_28);
  printf(&DAT_001030ef,(ulong)(uint)(iVar6 + iVar1));
  printf(&DAT_0010310c,0x16);
  printf(&DAT_00103128,0x27);
  printf(&DAT_00103144,0x10);
  printf(&DAT_00103160,0x55);
  uVar2 = test_cpp_exception();
  printf(&DAT_0010317c,(ulong)uVar2);
  printf(&DAT_00103199,0x2bf);
  uVar2 = test_cpp_rtti();
  printf(&DAT_001031b6,(ulong)uVar2);
  return;
}



/* Function: main @ 001028f0 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: virtual_func @ 00102900 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: virtual_func @ 00102910 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 8);
}



/* Function: ~Base @ 00102920 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102930 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102940 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: template_max<int> @ 00102950 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00102960 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 00102970 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00102980 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00102990 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 001029b0 */

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



/* Function: getSize @ 001029d0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001029e0 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 001029f0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00102a10 */

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



/* Function: getSize @ 00102a30 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00102a40 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_001031d4;
}



/* Function: ~Base @ 00102a50 */

/* Base::~Base() */

undefined8 __thiscall Base::~Base(Base *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: getName @ 00102a60 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: ~Derived @ 00102a70 */

/* Derived::~Derived() */

undefined8 __thiscall Derived::~Derived(Derived *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: funcA @ 00102a80 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 00102a90 */

/* MultiDerived::~MultiDerived() */

undefined8 __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: funcB @ 00102aa0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00102ab0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: ~MultiDerived @ 00102ac0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102ad0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

undefined8 __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  undefined8 in_RAX;
  
  operator_delete(this + -0x10);
  return in_RAX;
}



/* Function: funcA @ 00102ae0 */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00102af0 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  return;
}



/* Function: ~BaseA @ 00102b00 */

/* BaseA::~BaseA() */

undefined8 __thiscall BaseA::~BaseA(BaseA *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: funcB @ 00102b10 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 00102b20 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  return;
}



/* Function: ~BaseB @ 00102b30 */

/* BaseB::~BaseB() */

undefined8 __thiscall BaseB::~BaseB(BaseB *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: func @ 00102b40 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00102b60 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 00102b70 */

/* MiddleA::~MiddleA() */

undefined8 __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: func @ 00102b80 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
                         *(long *)(*(long *)this + -0x18)) + 0x96;
}



/* Function: ~MiddleA @ 00102ba0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 00102bb0 */

/* virtual thunk to MiddleA::~MiddleA() */

undefined8 __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  undefined8 in_RAX;
  
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}



/* Function: func @ 00102bc0 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 00102be0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 00102bf0 */

/* MiddleB::~MiddleB() */

undefined8 __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: func @ 00102c00 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
                         *(long *)(*(long *)this + -0x18)) + 200;
}



/* Function: ~MiddleB @ 00102c20 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 00102c30 */

/* virtual thunk to MiddleB::~MiddleB() */

undefined8 __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  undefined8 in_RAX;
  
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}



/* Function: func @ 00102c40 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c60 */

/* DiamondDerived::~DiamondDerived() */

undefined8 __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: func @ 00102c70 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c90 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ca0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined8 __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  undefined8 in_RAX;
  
  operator_delete(this + -0x10);
  return in_RAX;
}



/* Function: func @ 00102cb0 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
                         *(long *)(*(long *)this + -0x18)) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102cd0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ce0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

undefined8 __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  undefined8 in_RAX;
  
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}



/* Function: func @ 00102cf0 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 00102d00 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return;
}



/* Function: ~VirtualBase @ 00102d10 */

/* VirtualBase::~VirtualBase() */

undefined8 __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: ~RTTIDerivedA @ 00102d20 */

/* RTTIDerivedA::~RTTIDerivedA() */

undefined8 __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: getType @ 00102d30 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 00102d40 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 00102d50 */

/* RTTIDerivedB::~RTTIDerivedB() */

undefined8 __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  undefined8 in_RAX;
  
  operator_delete(this);
  return in_RAX;
}



/* Function: getType @ 00102d60 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: _fini @ 00102d68 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 83 */
