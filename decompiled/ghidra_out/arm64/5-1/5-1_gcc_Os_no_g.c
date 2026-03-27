/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/5-1/5-1_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00101638 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00101650 @ 00101650 */

void FUN_00101650(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: test_cpp_exception @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 001018d0 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00101940 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101974 */

/* WARNING: Removing unreachable block (ram,0x00101984) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101990 */

/* WARNING: Removing unreachable block (ram,0x001019a8) */
/* WARNING: Removing unreachable block (ram,0x001019b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001019c0 */

/* WARNING: Removing unreachable block (ram,0x001019e4) */
/* WARNING: Removing unreachable block (ram,0x001019f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001019fc @ 001019fc */

void FUN_001019fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101a00 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: test_cpp_member_func @ 00101a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  char *__s;
  size_t sVar1;
  char acStack_2c [31];
  undefined1 local_d;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = strncpy(acStack_2c,"Test",0x1f);
  local_d = 0;
  sVar1 = strlen(__s);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  undefined **local_20;
  undefined **local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = &PTR_virtual_func_00113868;
  local_18 = &PTR_virtual_func_00113898;
  local_10 = 3;
  iVar1 = call_virtual_func((Base *)&local_20,5);
  iVar2 = call_virtual_func((Base *)&local_18,5);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 + 0x15 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
  int iVar1;
  double dVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = template_max<int>(3,7);
  dVar2 = template_max<double>(2.5,1.5);
  local_10 = 10;
  local_c = 0x14;
  template_swap<int>(&local_10,&local_c);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((int)dVar2 + iVar1 + local_10 + local_c,&__stack_chk_guard,0,
                     local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  int iVar1;
  int local_38 [10];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = 1;
  local_38[0] = 10;
  Container<int>::push((Container<int> *)local_38,0x14);
  Container<int>::push((Container<int> *)local_38,0x1e);
  iVar1 = local_38[0];
  if (local_10 < 1) {
    iVar1 = 0;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10 + iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return local_10 + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  int iVar7;
  char *__s1;
  long lVar8;
  
  plVar3 = operator_new(8);
  *plVar3 = (long)&PTR__RTTIDerivedA_00113b58;
  plVar4 = operator_new(8);
  lVar8 = *plVar3;
  *plVar4 = (long)&PTR__RTTIDerivedB_00113b80;
  __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
  cVar1 = *__s1;
  if (__s1 == "12RTTIDerivedA") {
    iVar7 = 10;
  }
  else if (cVar1 == '*') {
    iVar7 = 0;
  }
  else {
    iVar2 = strcmp(__s1,"12RTTIDerivedA");
    iVar7 = 0;
    if (iVar2 == 0) {
      iVar7 = 10;
    }
  }
  iVar2 = iVar7 + 0x14;
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar7 + 0x78;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar2 + 200;
  }
  if (cVar1 == '*') {
    __s1 = __s1 + 1;
  }
  sVar6 = strlen(__s1);
  (**(code **)(lVar8 + 8))(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  undefined8 local_20;
  undefined4 *puStack_18;
  undefined8 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puStack_18 = operator_new(4);
  local_20 = 0;
  *puStack_18 = 200;
                    /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
  local_10 = operator_new__(0x14);
  *local_10 = 0x200000001;
  local_10[1] = 0x400000003;
  *(undefined4 *)(local_10 + 2) = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
            ((unique_ptr<int[],std::default_delete<int[]>> *)&local_10);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
            ((unique_ptr<int,std::default_delete<int>> *)&puStack_18);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
            ((unique_ptr<int,std::default_delete<int>> *)&local_20);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_38 [2];
  undefined **local_28;
  undefined **local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = &PTR_func_00113ac8;
  local_18 = &PTR_func_00113b30;
  local_28 = &PTR_func_00113af8;
  local_10 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
  local_10 = 100;
  iVar2 = DiamondDerived::func((DiamondDerived *)&local_18);
  DiamondDerived::~DiamondDerived((DiamondDerived *)local_38);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined4 uVar1;
  
  puts(&DAT_001025b2);
  uVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_001025d6,uVar1);
  uVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_001025f4,uVar1);
  uVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_00102610,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_0010262c,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_00102648,uVar1);
  uVar1 = test_cpp_operator_overload();
  __printf_chk(1,&DAT_00102665,uVar1);
  uVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_00102681,uVar1);
  uVar1 = test_cpp_template_class();
  __printf_chk(1,&DAT_0010269d,uVar1);
  uVar1 = test_cpp_lambda();
  __printf_chk(1,&DAT_001026b9,uVar1);
  uVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_001026d5,uVar1);
  uVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_001026f2,uVar1);
  uVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_0010270f,uVar1);
  return;
}



/* Function: virtual_func @ 001020d8 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 001020e0 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_001025a0;
}



/* Function: ~Base @ 001020ec */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: virtual_func @ 001020f0 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 001020fc */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 00102108 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 00102110 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00102118 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00102120 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return;
}



/* Function: func @ 0010212c */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 00102154 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 0010217c */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102194 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 001021a4 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -0x10);
  return;
}



/* Function: ~MiddleA @ 001021ac */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  *(undefined ***)this = &PTR_func_001138e0;
  *(undefined ***)(this + 0x10) = &PTR_func_00113918;
  return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x20);
  *(undefined ***)(this + lVar1) = &PTR_func_001138e0;
  *(undefined ***)(this + lVar1 + 0x10) = &PTR_func_00113918;
  return;
}



/* Function: ~MiddleB @ 001021f0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  *(undefined ***)this = &PTR_func_00113958;
  *(undefined ***)(this + 0x10) = &PTR_func_00113990;
  return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x20);
  *(undefined ***)(this + lVar1) = &PTR_func_00113958;
  *(undefined ***)(this + lVar1 + 0x10) = &PTR_func_00113990;
  return;
}



/* Function: getType @ 00102234 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: getType @ 0010223c */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00102244 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00102248 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  return;
}



/* Function: ~MultiDerived @ 0010224c */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~Derived @ 00102254 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  return;
}



/* Function: ~Base @ 00102258 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00102260 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00102268 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -0x10);
  return;
}



/* Function: ~VirtualBase @ 00102278 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~MiddleA @ 00102290 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  *(undefined ***)this = &PTR_func_001138e0;
  *(undefined ***)(this + 0x10) = &PTR_func_00113918;
  operator_delete(this,0x20);
  return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~MiddleB @ 001022c0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  *(undefined ***)this = &PTR_func_00113958;
  *(undefined ***)(this + 0x10) = &PTR_func_00113990;
  operator_delete(this,0x20);
  return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~MiddleA @ 001022f0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  int in_w1;
  undefined **ppuVar1;
  undefined8 *in_x2;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (in_w1 == 0) {
    ppuVar3 = (undefined **)*in_x2;
  }
  else {
    ppuVar3 = &PTR_func_001138e0;
  }
  *(undefined ***)this = ppuVar3;
  if (in_w1 == 0) {
    ppuVar1 = (undefined **)in_x2[1];
    puVar2 = ppuVar3[-3];
  }
  else {
    puVar2 = (undefined *)0x10;
    ppuVar1 = &PTR_func_00113918;
  }
  *(undefined ***)(this + (long)puVar2) = ppuVar1;
  return;
}



/* Function: ~MiddleA @ 0010232c */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this);
  return;
}



/* Function: ~MiddleB @ 00102338 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  int in_w1;
  undefined **ppuVar1;
  undefined8 *in_x2;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (in_w1 == 0) {
    ppuVar3 = (undefined **)*in_x2;
  }
  else {
    ppuVar3 = &PTR_func_00113958;
  }
  *(undefined ***)this = ppuVar3;
  if (in_w1 == 0) {
    ppuVar1 = (undefined **)in_x2[1];
    puVar2 = ppuVar3[-3];
  }
  else {
    puVar2 = (undefined *)0x10;
    ppuVar1 = &PTR_func_00113990;
  }
  *(undefined ***)(this + (long)puVar2) = ppuVar1;
  return;
}



/* Function: ~MiddleB @ 00102374 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this);
  return;
}



/* Function: template_max<int> @ 00102380 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 0010238c */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 00102398 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 001023ac */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 001023b4 */

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



/* Function: get @ 001023d0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 001023f0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001023f8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00102400 */

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



/* Function: get @ 0010241c */

/* Container<double>::get(int) const */

undefined1  [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulong *)(this + (long)param_1 * 8);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Function: getSize @ 0010243c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: ~unique_ptr @ 00102444 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
          (unique_ptr<int,std::default_delete<int>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this,4);
    return;
  }
  return;
}



/* Function: ~unique_ptr @ 00102458 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int in_w1;
  undefined8 *in_x2;
  
  if (in_w1 == 0) {
    ppuVar1 = (undefined **)*in_x2;
  }
  else {
    ppuVar1 = &PTR_func_00113ac8;
  }
  *(undefined ***)this = ppuVar1;
  if (in_w1 == 0) {
    puVar2 = ppuVar1[-3];
    ppuVar1 = (undefined **)in_x2[5];
  }
  else {
    puVar2 = (undefined *)0x20;
    ppuVar1 = &PTR_func_00113b30;
  }
  *(undefined ***)(this + (long)puVar2) = ppuVar1;
  if (in_w1 == 0) {
    ppuVar1 = (undefined **)in_x2[6];
  }
  else {
    ppuVar1 = &PTR_func_00113af8;
  }
  *(undefined ***)(this + 0x10) = ppuVar1;
  MiddleB::~MiddleB((MiddleB *)(this + 0x10));
  MiddleA::~MiddleA((MiddleA *)this);
  return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -0x10);
  return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -0x10);
  return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  return;
}



/* Function: _fini @ 00102588 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 89 */
