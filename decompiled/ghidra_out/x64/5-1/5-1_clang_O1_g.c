/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_clang_O1_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

int test_cpp_member_func(void)

{
  size_t sVar1;
  char local_24 [36];
  
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
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

int test_cpp_constructor(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  puVar1 = operator_new__(0x14);
  lVar2 = 0;
  puVar3 = puVar1;
  do {
                    /* Unresolved local var: size_t i@[???] */
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

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
  iVar1 = (**obj->_vptr_Base)();
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  undefined **local_20;
  undefined4 local_18;
  Base local_10;
  
                    /* Unresolved local var: Base base@[???]
                       Unresolved local var: Derived derived@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: Base * pb@[???]
                       Unresolved local var: Base * pd@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r4@[???] */
  local_10._vptr_Base = (_func_int **)&PTR_virtual_func_001059c8;
  local_20 = &PTR_virtual_func_00105a08;
  local_18 = 3;
  iVar1 = Base::virtual_func(&local_10,5);
  iVar2 = (*(code *)*local_20)(&local_20,5);
  return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  MultiDerived local_30;
  
                    /* Unresolved local var: MultiDerived obj@[???]
                       Unresolved local var: BaseB * pb@[???]
                       Unresolved local var: BaseA * pa@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int ptr_equal@[???] */
  local_30.super_BaseA._vptr_BaseA = (_func_int **)&PTR_funcA_00105a50;
  local_30.super_BaseB._vptr_BaseB = (_func_int **)&PTR__ZThn16_N12MultiDerived5funcBEv_00105a80;
  local_30.super_BaseA.dataA = 100;
  local_30.super_BaseB.dataB = 200;
  iVar1 = MultiDerived::funcA(&local_30);
  iVar2 = (**local_30.super_BaseB._vptr_BaseB)(&local_30.super_BaseB);
  return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
  int extraout_EAX;
  int iVar1;
  undefined **local_20;
  undefined4 local_18;
  
                    /* Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  local_20 = &PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0;
  local_18 = 0x32;
  _ZTv0_n24_N14DiamondDerived4funcEv();
  local_18 = 100;
  iVar1 = (*(code *)*local_20)(&local_20);
  return iVar1 + extraout_EAX;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: bool eq@[???]
                       Unresolved local var: Point p3@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return 0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
                    /* Unresolved local var: Container<int> int_container@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: double r3@[???]
                       Unresolved local var: Container<double> double_container@[???] */
  return 0x10;
}



/* Function: test_cpp_lambda @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
                    /* Unresolved local var: int capture_by_value@[???]
                       Unresolved local var: int capture_by_ref@[???]
                       Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
  return 0x55;
}



/* Function: test_cpp_exception @ 00102490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int e@[???]
                       Unresolved local var: BaseException * e@[???]
                       Unresolved local var: DerivedException * e@[???] */
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
                    /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
                       ptr3@[???]
                       Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
                       arr@[???]
                       Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
                       Unresolved local var: deleter_type deleter@[???] */
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: RTTIBase * obj2@[???]
                       Unresolved local var: int result@[???] */
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
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  uVar7 = uVar1 + 100;
  if (lVar5 == 0) {
    uVar7 = uVar1;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
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

void test_cpp_oo_features(void)

{
  int iVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [10];
  Base local_18;
  
  puts(&DAT_001031e1);
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  uStack_44 = 0x74736554;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[4] = 0;
  auStack_40[5] = 0;
  auStack_40[6] = 0;
  local_48 = 10;
  sVar3 = strlen((char *)&uStack_44);
  lVar7 = 0;
  printf(&DAT_0010307d,(ulong)((int)sVar3 + 0x125c));
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  puVar4 = operator_new__(0x14);
                    /* Unresolved local var: size_t i@[???] */
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
                    /* Unresolved local var: Base base@[???]
                       Unresolved local var: Derived derived@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: Base * pb@[???]
                       Unresolved local var: Base * pd@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r4@[???] */
  local_18._vptr_Base = (_func_int **)&PTR_virtual_func_001059c8;
  local_48 = 0x105a08;
  uStack_44 = 0;
  auStack_40[0] = 3;
  iVar6 = Base::virtual_func(&local_18,5);
  iVar1 = (**(code **)CONCAT44(uStack_44,local_48))(&local_48,5);
  printf(&DAT_001030b7,(ulong)(iVar6 + iVar1 + 0x15));
                    /* Unresolved local var: MultiDerived obj@[???]
                       Unresolved local var: BaseA * pa@[???]
                       Unresolved local var: BaseB * pb@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int ptr_equal@[???] */
  local_48 = 0x105a50;
  uStack_44 = 0;
  auStack_40[2] = 0x105a80;
  auStack_40[3] = 0;
  auStack_40[0] = 100;
  auStack_40[4] = 200;
  _ZThn16_N12MultiDerived5funcBEv();
  printf(&DAT_001030d3,(ulong)(extraout_EAX + 0x1f));
                    /* Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  local_48 = 0x105b58;
  uStack_44 = 0;
  auStack_40[6] = 0x105bc0;
  auStack_40[7] = 0;
  auStack_40[2] = 0x105b88;
  auStack_40[3] = 0;
  auStack_40[8] = 0x32;
  _ZTv0_n24_N14DiamondDerived4funcEv();
  *(undefined4 *)((long)auStack_40 + *(long *)(CONCAT44(uStack_44,local_48) + -0x18)) = 100;
  iVar6 = (**(code **)CONCAT44(auStack_40[7],auStack_40[6]))(auStack_40 + 6);
  printf(&DAT_001030ef,(ulong)(uint)(extraout_EAX_00 + iVar6));
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: virtual_func @ 00102900 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: virtual_func @ 00102910 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return x * this->multiplier;
}



/* Function: ~Base @ 00102920 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102930 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102940 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: template_max<int> @ 00102950 */

int template_max<int>(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 00102960 */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 00102970 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00102980 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00102990 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
  int iVar1;
  
  iVar1 = this->size;
  if ((long)iVar1 < 10) {
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 001029b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
    iVar1 = this->data[idx];
  }
  return iVar1;
}



/* Function: getSize @ 001029d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 001029e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 001029f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  int iVar1;
  
  iVar1 = this->size;
  if ((long)iVar1 < 10) {
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00102a10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((-1 < idx) && (idx < this->size)) {
    dVar1 = this->data[idx];
  }
  return dVar1;
}



/* Function: getSize @ 00102a30 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: getName @ 00102a40 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 00102a50 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this);
  return;
}



/* Function: getName @ 00102a60 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: ~Derived @ 00102a70 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcA @ 00102a80 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 00102a90 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 00102aa0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00102ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
  return;
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00102ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
  return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00102ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
  long in_RDI;
  
  operator_delete((void *)(in_RDI + -0x10));
  return;
}



/* Function: funcA @ 00102ae0 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
  return 10;
}



/* Function: ~BaseA @ 00102af0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  return;
}



/* Function: ~BaseA @ 00102b00 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 00102b10 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
  return 0x14;
}



/* Function: ~BaseB @ 00102b20 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  return;
}



/* Function: ~BaseB @ 00102b30 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00102b40 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00102b60 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 00102b70 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this);
  return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00102b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
  return;
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00102ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
  return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00102bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
  long *in_RDI;
  
  operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: func @ 00102bc0 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00102be0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 00102bf0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this);
  return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00102c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
  return;
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00102c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
  return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00102c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
  long *in_RDI;
  
  operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: func @ 00102c40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 00102c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
  return;
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 00102c90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
  return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00102ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
  long in_RDI;
  
  operator_delete((void *)(in_RDI + -0x10));
  return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00102cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
  return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
  return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00102ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
  long *in_RDI;
  
  operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: func @ 00102cf0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
  return 100;
}



/* Function: ~VirtualBase @ 00102d00 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return;
}



/* Function: ~VirtualBase @ 00102d10 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  operator_delete(this);
  return;
}



/* Function: ~RTTIDerivedA @ 00102d20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00102d30 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: ~RTTIBase @ 00102d40 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 00102d50 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00102d60 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: _fini @ 00102d68 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 83 */
