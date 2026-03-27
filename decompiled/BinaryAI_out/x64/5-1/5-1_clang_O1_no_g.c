// Decompiled by BinaryAI
// SHA256: 7d2eb3f67d7b79284ccda07814eb56f8d50035e18d0f3d5748618154554cf5d9

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

// Function: <EXTERNAL>::operator.new[] @ 0x102030
void * operator_new__(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x102040
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102050
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x102060
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x102070
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x102080
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.delete @ 0x102090
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x1020a0
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1020b0
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x1020c0
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x1020d0
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1020e0
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1020f0
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::puts @ 0x102100
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102110
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102120
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102130
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102140
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x102150
void _GLOBAL__sub_I_5_1_cpp(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _start @ 0x102180
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1021b0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1021e0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x102220
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

// Function: test_cpp_member_func @ 0x102270
int test_cpp_member_func(void)
{
  size_t sVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined3 uStack_14;
  undefined4 uStack_11;
  undefined4 uStack_d;
  undefined4 uStack_9;
  undefined local_5;
  local_24 = 0x74736554;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_11 = 0;
  uStack_d = 0;
  uStack_9 = 0;
  local_5 = 0;
  sVar1 = strlen((char *)&local_24);
  return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1022b0
int test_cpp_constructor(void)
{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  puVar1 = (undefined4 *)operator_new__(0x14);
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

// Function: call_virtual_func @ 0x102310
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)();
  return;
}

// Function: test_cpp_virtual_func @ 0x102320
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  code **local_20;
  undefined4 local_18;
  undefined **local_10;
  local_10 = &PTR_virtual_func_001059c8;
  local_20 = (code **)&PTR_virtual_func_00105a08;
  local_18 = 3;
  iVar1 = Base::virtual_func((Base *)&local_10,5);
  iVar2 = (**local_20)(&local_20,5);
  return iVar2 + iVar1 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x102380
int test_cpp_multiple_inheritance(void)
{
  int iVar1;
  int iVar2;
  code **local_20;
  undefined4 local_18;
  local_20 = (code **)&PTR_funcB_00105a80;
  local_18 = 200;
  iVar1 = MultiDerived::funcA();
  iVar2 = (**local_20)(&local_20);
  return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x1023e0
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  code **local_20;
  undefined4 local_18;
  local_20 = (code **)&PTR_func_00105bc0;
  local_18 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_20);
  local_18 = 100;
  iVar2 = (**local_20)(&local_20);
  return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x102450
undefined8 test_cpp_operator_overload(void)
{
  return 0x16;
}

// Function: test_cpp_template_func @ 0x102460
undefined8 test_cpp_template_func(void)
{
  return 0x27;
}

// Function: test_cpp_template_class @ 0x102470
undefined8 test_cpp_template_class(void)
{
  return 0x10;
}

// Function: test_cpp_lambda @ 0x102480
undefined8 test_cpp_lambda(void)
{
  return 0x55;
}

// Function: test_cpp_exception @ 0x102490
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x102550
undefined8 test_cpp_smart_ptr(void)
{
  return 0x2bf;
}

// Function: test_cpp_rtti @ 0x102560
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
  plVar3 = (long *)operator_new(8);
  *plVar3 = (long)&PTR__RTTIBase_00105d78;
  plVar4 = (long *)operator_new(8);
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

// Function: test_cpp_oo_features @ 0x1026a0
void test_cpp_oo_features(void)
{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 local_48;
  undefined4 auStack_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined **local_18;
  puts(&DAT_001031e1);
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  local_48 = (undefined **)0x747365540000000a;
  sVar3 = strlen((char *)((long)&local_48 + 4));
  lVar7 = 0;
  printf(&DAT_0010307d,(ulong)((int)sVar3 + 0x125c));
  puVar4 = (undefined4 *)operator_new__(0x14);
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
  local_48 = &PTR_virtual_func_00105a08;
  auStack_40[0] = 3;
  iVar6 = Base::virtual_func((Base *)&local_18,5);
  iVar1 = (*(code *)*local_48)(&local_48,5);
  printf(&DAT_001030b7,(ulong)(iVar6 + iVar1 + 0x15));
  local_48 = &PTR_funcA_00105a50;
  auStack_40[2] = 0x105a80;
  auStack_40[3] = 0;
  auStack_40[0] = 100;
  local_30 = 200;
  iVar6 = MultiDerived::funcB((MultiDerived *)(auStack_40 + 2));
  printf(&DAT_001030d3,(ulong)(iVar6 + 0x1f));
  local_48 = &PTR_func_00105b58;
  local_28 = 0x105bc0;
  uStack_24 = 0;
  auStack_40[2] = 0x105b88;
  auStack_40[3] = 0;
  local_20 = 0x32;
  iVar6 = DiamondDerived::func((DiamondDerived *)&local_28);
  *(undefined4 *)((long)auStack_40 + (long)local_48[-3]) = 100;
  iVar1 = (**(code **)CONCAT44(uStack_24,local_28))(&local_28);
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

// Function: main @ 0x1028f0
undefined8 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: Base::virtual_func @ 0x102900
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x102910
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return param_1 * *(int *)(this + 8);
}

// Function: Base::~Base @ 0x102920
void __thiscall Base::_Base(Base *this)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x102930
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102940
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  return;
}

// Function: template_max<int> @ 0x102950
int template_max_int_(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: template_max<double> @ 0x102960
double template_max_double_(double param_1,double param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_swap<int> @ 0x102970
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x102980
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x102990
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x28);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x1029b0
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return uVar1;
}

// Function: Container<int>::getSize @ 0x1029d0
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1029e0
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x1029f0
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x50);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}

// Function: Container<double>::get @ 0x102a10
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined8 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
    uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
  }
  return uVar1;
}

// Function: Container<double>::getSize @ 0x102a30
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: Base::getName @ 0x102a40
undefined * Base::getName(void)
{
  return &DAT_001031d4;
}

// Function: Base::~Base @ 0x102a50
undefined8 __thiscall Base::_Base(Base *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: Derived::getName @ 0x102a60
char * Derived::getName(void)
{
  return "Derived";
}

// Function: Derived::~Derived @ 0x102a70
undefined8 __thiscall Derived::_Derived(Derived *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: MultiDerived::funcA @ 0x102a80
undefined8 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102a90
undefined8 __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: MultiDerived::funcB @ 0x102aa0
undefined8 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x102ab0
undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)
{
  return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x102ac0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x102ad0
undefined8 __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  undefined8 in_RAX;
  operator_delete(this + -0x10);
  return in_RAX;
}

// Function: BaseA::funcA @ 0x102ae0
undefined8 BaseA::funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x102af0
void __thiscall BaseA::_BaseA(BaseA *this)
{
  return;
}

// Function: BaseA::~BaseA @ 0x102b00
undefined8 __thiscall BaseA::_BaseA(BaseA *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: BaseB::funcB @ 0x102b10
undefined8 BaseB::funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x102b20
void __thiscall BaseB::_BaseB(BaseB *this)
{
  return;
}

// Function: BaseB::~BaseB @ 0x102b30
undefined8 __thiscall BaseB::_BaseB(BaseB *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: MiddleA::func @ 0x102b40
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102b60
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  return;
}

// Function: MiddleA::~MiddleA @ 0x102b70
undefined8 __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: MiddleA::func @ 0x102b80
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
                         *(long *)(*(long *)this + -0x18)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102ba0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  return;
}

// Function: MiddleA::~MiddleA @ 0x102bb0
undefined8 __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  undefined8 in_RAX;
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}

// Function: MiddleB::func @ 0x102bc0
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102be0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  return;
}

// Function: MiddleB::~MiddleB @ 0x102bf0
undefined8 __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: MiddleB::func @ 0x102c00
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
                         *(long *)(*(long *)this + -0x18)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102c20
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  return;
}

// Function: MiddleB::~MiddleB @ 0x102c30
undefined8 __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  undefined8 in_RAX;
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}

// Function: DiamondDerived::func @ 0x102c40
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c60
undefined8 __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: DiamondDerived::func @ 0x102c70
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c90
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ca0
undefined8 __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  undefined8 in_RAX;
  operator_delete(this + -0x10);
  return in_RAX;
}

// Function: DiamondDerived::func @ 0x102cb0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
                         *(long *)(*(long *)this + -0x18)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102cd0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ce0
undefined8 __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  undefined8 in_RAX;
  operator_delete(this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}

// Function: VirtualBase::func @ 0x102cf0
undefined8 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102d00
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x102d10
undefined8 __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102d20
undefined8 __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: RTTIDerivedA::getType @ 0x102d30
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x102d40
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102d50
undefined8 __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  undefined8 in_RAX;
  operator_delete(this);
  return in_RAX;
}

// Function: RTTIDerivedB::getType @ 0x102d60
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: _fini @ 0x102d68
void _fini(void)
{
  return;
}

