/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010920 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: test_cpp_exception @ 00010a60 */

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



/* Function: main @ 00010b18 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
  return;
}



/* Function: _start @ 00010b58 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010b9c */

/* WARNING: Removing unreachable block (ram,0x00010bb0) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010bc0 */

/* WARNING: Removing unreachable block (ram,0x00010bd0) */
/* WARNING: Removing unreachable block (ram,0x00010bd8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010bec */

/* WARNING: Removing unreachable block (ram,0x00010c08) */
/* WARNING: Removing unreachable block (ram,0x00010c10) */
/* WARNING: Removing unreachable block (ram,0x00010c14) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010c24 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: test_cpp_member_func @ 00010c50 */

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



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

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
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  local_14 = 0;
  iVar1 = template_max<int>(3,7);
  template_max<double>(extraout_d0,extraout_d1);
  iStack_1c = 10;
  iStack_18 = 0x14;
  template_swap<int>(&iStack_1c,&iStack_18);
  uVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)uVar2 + iVar1 + iStack_1c + iStack_18,(int)((ulonglong)uVar2 >> 0x20),
                   local_14,0);
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  int *piVar1;
  int *piVar2;
  type_info *this;
  int iVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  int iVar6;
  
  piVar1 = operator_new(4);
  *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
  piVar2 = operator_new(4);
  this = *(type_info **)(*piVar1 + -4);
  *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
  iVar3 = std::type_info::operator==(this,(type_info *)&RTTIDerivedA::typeinfo);
  if (iVar3 == 0) {
    iVar3 = 0x14;
    iVar6 = 0;
  }
  else {
    iVar6 = 10;
    iVar3 = 0x1e;
  }
  iVar4 = std::type_info::operator==
                    (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
  if (iVar4 != 0) {
    iVar6 = iVar3;
  }
  iVar3 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo);
  if (iVar3 != 0) {
    iVar6 = iVar6 + 100;
  }
  iVar3 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar4 = *piVar1;
  if (iVar3 != 0) {
    iVar6 = iVar6 + 200;
  }
  __s = *(char **)(*(int *)(iVar4 + -4) + 4);
  if (*__s == '*') {
    __s = __s + 1;
  }
  sVar5 = strlen(__s);
  (**(code **)(iVar4 + 4))(piVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  return iVar6 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ed4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 extraout_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  double extraout_d0;
  double extraout_d1;
  int local_40;
  int local_3c [2];
  char acStack_34 [31];
  undefined1 local_15;
  int local_14;
  
  local_14 = 0;
  puts(&DAT_000114d8);
  strncpy(acStack_34,"Test",0x1f);
  local_15 = 0;
  sVar1 = strlen(acStack_34);
  __printf_chk(1,&DAT_000114fc,sVar1 + 0x125c);
  __printf_chk(1,&DAT_0001151c,LifecycleClass::instance_count * 0x3e9 + 0x15);
  __printf_chk(1,&DAT_00011538,0x2a);
  __printf_chk(1,&DAT_00011554,0x47);
  __printf_chk(1,&DAT_00011570,0x28a);
  __printf_chk(1,&DAT_00011590,0x16);
  iVar2 = template_max<int>(3,7);
  template_max<double>(extraout_d0,extraout_d1);
  local_40 = 10;
  local_3c[0] = 0x14;
  template_swap<int>(&local_40,local_3c);
  iVar3 = __aeabi_d2iz(extraout_r0,extraout_r1);
  __printf_chk(1,&DAT_000115ac,iVar3 + iVar2 + local_40 + local_3c[0]);
  __printf_chk(1,&DAT_000115c8,0x10);
  __printf_chk(1,&DAT_000115e4,0x55);
  uVar4 = test_cpp_exception();
  __printf_chk(1,&DAT_00011600,uVar4);
  __printf_chk(1,&DAT_00011620,0x2bf);
  uVar4 = test_cpp_rtti();
  if (local_14 == 0) {
    __printf_chk(1,&DAT_00011640,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: virtual_func @ 000110d0 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 000110d8 */

/* Base::getName() const */

undefined1 * Base::getName(void)

{
  return &DAT_000114c0;
}



/* Function: ~Base @ 000110e4 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  return this;
}



/* Function: virtual_func @ 000110e8 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 000110f4 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 00011100 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 00011108 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00011110 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00011118 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011130 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
                         *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011154 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 0001116c */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
                         *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011190 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000111a8 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
                         *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 000111cc */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000111e4 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: getType @ 000111ec */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 000111f4 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  return this;
}



/* Function: ~RTTIDerivedA @ 000111f8 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 000111fc */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 00011200 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this + *(int *)(*(int *)this + -0x10);
}



/* Function: ~DiamondDerived @ 00011210 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return this + -8;
}



/* Function: ~MultiDerived @ 00011218 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this;
}



/* Function: ~MultiDerived @ 0001121c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return this + -8;
}



/* Function: ~Derived @ 00011224 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  return this;
}



/* Function: ~Base @ 00011228 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~Derived @ 00011240 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this,8);
  return this;
}



/* Function: ~MultiDerived @ 00011258 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MultiDerived @ 00011270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -8,0x10);
  return this + -8;
}



/* Function: ~RTTIDerivedB @ 0001128c */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~RTTIDerivedA @ 000112a4 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~DiamondDerived @ 000112bc */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this,0x18);
  return this;
}



/* Function: ~DiamondDerived @ 000112d4 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)this + -0x10);
  operator_delete(this + iVar1,0x18);
  return this + iVar1;
}



/* Function: ~DiamondDerived @ 000112f8 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -8,0x18);
  return this + -8;
}



/* Function: template_max<int> @ 00011314 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 00011320 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011334 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
  return param_1;
}



/* Function: template_swap<int> @ 00011350 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00011364 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00011370 */

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



/* Function: get @ 00011388 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    return *(undefined4 *)(this + param_1 * 4);
  }
  return 0;
}



/* Function: getSize @ 000113ac */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 000113b4 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 000113c0 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(in_r0 + 0x50);
  if (iVar1 < 10) {
    puVar2 = (undefined4 *)(in_r0 + iVar1 * 8);
    *(int *)(in_r0 + 0x50) = iVar1 + 1;
    *puVar2 = in_r2;
    puVar2[1] = in_r3;
  }
  return SUB84(param_1,0);
}



/* Function: get @ 000113f0 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    return *(undefined8 *)(this + param_1 * 8);
  }
  return 0;
}



/* Function: getSize @ 0001141c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: _fini @ 00011424 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 69 */
