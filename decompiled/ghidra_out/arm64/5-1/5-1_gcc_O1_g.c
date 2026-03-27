/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/5-1/5-1_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00101458 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00101470 @ 00101470 */

void FUN_00101470(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00101640 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101674 */

/* WARNING: Removing unreachable block (ram,0x00101684) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101690 */

/* WARNING: Removing unreachable block (ram,0x001016a8) */
/* WARNING: Removing unreachable block (ram,0x001016b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001016c0 */

/* WARNING: Removing unreachable block (ram,0x001016e4) */
/* WARNING: Removing unreachable block (ram,0x001016f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001016fc @ 001016fc */

void FUN_001016fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101700 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: test_cpp_member_func @ 00101754 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  long lVar1;
  size_t sVar2;
  SimpleClass obj;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  lVar1 = ___stack_chk_guard;
  strncpy(obj.name,"Test",0x1f);
  obj.name[0x1f] = '\0';
  sVar2 = strlen(obj.name);
  if (lVar1 - ___stack_chk_guard == 0) {
    return (int)sVar2 + 0x125c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: test_cpp_constructor @ 001017cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  int iVar1;
  void *pvVar2;
  
                    /* Unresolved local var: int result@[???] */
                    /* Unresolved local var: LifecycleClass obj@[???] */
  pvVar2 = operator_new__(0x14);
                    /* Unresolved local var: size_t i@[???] */
  *(undefined4 *)((long)pvVar2 + 4) = 10;
  *(undefined4 *)((long)pvVar2 + 8) = 0x14;
  *(undefined4 *)((long)pvVar2 + 0xc) = 0x1e;
  *(undefined4 *)((long)pvVar2 + 0x10) = 0x28;
  iVar1 = LifecycleClass::instance_count + 0x15;
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  operator_delete__(pvVar2);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return iVar1 + LifecycleClass::instance_count * 1000;
}



/* Function: call_virtual_func @ 00101838 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
  iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101854 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Base base;
  Derived derived;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: Base * pb@[???]
                       Unresolved local var: Base * pd@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r4@[???] */
  lVar1 = ___stack_chk_guard;
  base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113958;
  derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113988;
  derived.multiplier = 3;
  iVar2 = call_virtual_func(&base,5);
  iVar3 = call_virtual_func(&derived.super_Base,5);
  iVar3 = iVar2 + 0x15 + iVar3;
  if (lVar1 - ___stack_chk_guard == 0) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: test_cpp_multiple_inheritance @ 001018e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
                    /* Unresolved local var: MultiDerived obj@[???]
                       Unresolved local var: BaseA * pa@[???]
                       Unresolved local var: BaseB * pb@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int ptr_equal@[???] */
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001018ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  DiamondDerived obj;
  
                    /* Unresolved local var: VirtualBase * pb@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  lVar1 = ___stack_chk_guard;
  obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00113ac8;
  obj._32_8_ = &PTR_func_00113b30;
  obj.super_MiddleA._16_8_ = &PTR_func_00113af8;
  obj._40_4_ = 0x32;
  iVar2 = DiamondDerived::func((DiamondDerived *)&obj.field_0x20);
  obj._40_4_ = 100;
  iVar3 = DiamondDerived::func((DiamondDerived *)&obj.field_0x20);
  if (lVar1 - ___stack_chk_guard == 0) {
    return iVar2 + iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 + iVar3,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: test_cpp_operator_overload @ 00101988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: Point p3@[???]
                       Unresolved local var: bool eq@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  int iVar1;
  double dVar2;
  int a;
  int b;
  long local_8;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???] */
  local_8 = ___stack_chk_guard;
  iVar1 = template_max<int>(3,7);
  dVar2 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  iVar1 = (int)dVar2 + iVar1 + a + b;
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_template_class @ 00101a38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
                    /* Unresolved local var: Container<int> int_container@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: Container<double> double_container@[???]
                       Unresolved local var: double r3@[???] */
  return 0x10;
}



/* Function: test_cpp_lambda @ 00101a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
                    /* Unresolved local var: int capture_by_value@[???]
                       Unresolved local var: int capture_by_ref@[???]
                       Unresolved local var: anon_struct_16_2_484633fb lambda1@[???]
                       Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x55;
}



/* Function: test_cpp_exception @ 00101a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  
                    /* Unresolved local var: int result@[???] */
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00101a74 to 00101a77 has its CatchHandler @ 00101a78 */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00101b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
                    /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
                       Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: unique_ptr<int_[],_std::default_delete<int_[]>_>
                       arr@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
                       Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
                       ptr3@[???]
                       Unresolved local var: int r3@[???] */
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101b28 */

/* WARNING: Removing unreachable block (ram,0x00101bd4) */
/* WARNING: Removing unreachable block (ram,0x00101be0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  size_t sVar5;
  int iVar6;
  char *__s1;
  long lVar7;
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: RTTIBase * obj2@[???]
                       Unresolved local var: int result@[???] */
  plVar2 = operator_new(8);
  *plVar2 = (long)&PTR__RTTIDerivedA_00113b58;
  plVar3 = operator_new(8);
  *plVar3 = (long)&PTR__RTTIDerivedB_00113b80;
  lVar7 = *plVar2;
  __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
  iVar6 = 10;
  if ((__s1 != "12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
    iVar1 = strcmp(__s1,"12RTTIDerivedA");
    iVar6 = 10;
    if (iVar1 != 0) {
      iVar6 = 0;
    }
  }
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar4 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar1 = iVar6 + 0x78;
  if (lVar4 == 0) {
    iVar1 = iVar6 + 0x14;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  lVar4 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar6 = iVar1 + 200;
  if (lVar4 == 0) {
    iVar6 = iVar1;
  }
  if (*__s1 == '*') {
    __s1 = __s1 + 1;
  }
  sVar5 = strlen(__s1);
  (**(code **)(lVar7 + 8))(plVar2);
  (**(code **)(*plVar3 + 8))(plVar3);
  return iVar6 + (int)sVar5;
}



/* Function: test_cpp_oo_features @ 00101c8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  int iVar1;
  
  puts(&DAT_00102148);
  iVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_00102170,iVar1);
  iVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_00102190,iVar1);
  iVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_001021b0,iVar1);
  iVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_001021d0,iVar1);
  iVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_001021f0,iVar1);
  __printf_chk(1,&DAT_00102210,0x16);
  iVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_00102230,iVar1);
  __printf_chk(1,&DAT_00102250,0x10);
  __printf_chk(1,&DAT_00102270,0x55);
  iVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_00102290,iVar1);
  iVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_001022b0,iVar1);
  iVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_001022d0,iVar1);
  return;
}



/* Function: main @ 00101dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00101dd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: virtual_func @ 00101e18 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: getName @ 00101e20 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 00101e2c */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  return;
}



/* Function: virtual_func @ 00101e30 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return x * this->multiplier;
}



/* Function: getName @ 00101e3c */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: funcA @ 00101e48 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: funcB @ 00101e50 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: funcB @ 00101e58 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00101e60 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00101e78 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((long)&this->dataA +
                 (long)(this->_vptr_MiddleA[-3] +
                       *(long *)(*(long *)((long)&this->_vptr_MiddleA +
                                          (long)this->_vptr_MiddleA[-3]) + -0x18))) + 0x96;
}



/* Function: func @ 00101e9c */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00101eb4 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((long)&this->dataB +
                 (long)(this->_vptr_MiddleB[-3] +
                       *(long *)(*(long *)((long)&this->_vptr_MiddleB +
                                          (long)this->_vptr_MiddleB[-3]) + -0x18))) + 200;
}



/* Function: func @ 00101ed8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: func @ 00101ef0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (this->super_MiddleA)._vptr_MiddleA[-3];
  return *(int *)((long)&(this->super_MiddleA).dataA +
                 (long)(p_Var1 + *(long *)(*(long *)((long)&(this->super_MiddleA)._vptr_MiddleA +
                                                    (long)p_Var1) + -0x18))) + 0xfa;
}



/* Function: func @ 00101f14 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)this + *(long *)(*(long *)&this[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101f2c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: getType @ 00101f34 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00101f3c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00101f40 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  return;
}



/* Function: ~DiamondDerived @ 00101f44 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  return;
}



/* Function: ~DiamondDerived @ 00101f48 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00101f4c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00101f50 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  return;
}



/* Function: ~MultiDerived @ 00101f54 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~Derived @ 00101f58 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  return;
}



/* Function: ~Base @ 00101f5c */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00101f74 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00101f8c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00101fa4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(&this[-1].super_BaseB,0x20);
  return;
}



/* Function: ~RTTIDerivedA @ 00101fc0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedB @ 00101fd8 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00101ff0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102008 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete((_func_int_varargs *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
  return;
}



/* Function: ~DiamondDerived @ 0010202c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(&this[-1].field_0x20,0x30);
  return;
}



/* Function: template_max<int> @ 00102048 */

int template_max<int>(int a,int b)

{
  if (a < b) {
    a = b;
  }
  return a;
}



/* Function: template_max<double> @ 00102054 */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 00102060 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00102074 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 0010207c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
  int iVar1;
  
  iVar1 = this->size;
  if (iVar1 < 10) {
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00102098 */

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



/* Function: getSize @ 001020c0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 001020c8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 001020d0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  int iVar1;
  
  iVar1 = this->size;
  if (iVar1 < 10) {
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 001020ec */

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



/* Function: getSize @ 0010210c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: _fini @ 00102114 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
