/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_gcc_O1_g
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

int test_cpp_member_func(void)

{
  long lVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  SimpleClass obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(obj.name,"Test",5);
  obj.name[5] = '\0';
  obj.name[6] = '\0';
  obj.name[7] = '\0';
  obj.name[8] = '\0';
  obj.name[9] = '\0';
  obj.name[10] = '\0';
  obj.name[0xb] = '\0';
  obj.name[0xc] = '\0';
  obj.name[0xd] = '\0';
  obj.name[0xe] = '\0';
  obj.name[0xf] = '\0';
  obj.name[0x10] = '\0';
  obj.name[0x11] = '\0';
  obj.name[0x12] = '\0';
  obj.name[0x13] = '\0';
  obj.name[0x14] = '\0';
  obj.name[0x15] = '\0';
  obj.name[0x16] = '\0';
  obj.name[0x17] = '\0';
  obj.name[0x18] = '\0';
  obj.name[0x19] = '\0';
  obj.name[0x1a] = '\0';
  obj.name[0x1b] = '\0';
  obj.name[0x1c] = '\0';
  obj.name[0x1d] = '\0';
  obj.name[0x1e] = '\0';
  obj.name[0x1f] = '\0';
  sVar2 = strlen(obj.name);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)sVar2 + 0x125c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001023de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  int iVar1;
  void *pvVar2;
  
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
  return LifecycleClass::instance_count * 1000 + iVar1;
}



/* Function: call_virtual_func @ 0010243c */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
  iVar1 = (**obj->_vptr_Base)();
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 0010244e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  Base base;
  Derived derived;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001059a0;
  derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001059d0;
  derived.multiplier = 3;
  iVar2 = call_virtual_func(&base,5);
  iVar3 = call_virtual_func(&derived.super_Base,5);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2 + 0x15 + iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_multiple_inheritance @ 001024c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  DiamondDerived obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)(DiamondDerived::vtable + 0x18);
  obj._32_8_ = 0x105b78;
  obj.super_MiddleA._16_8_ = 0x105b40;
  obj._40_4_ = 0x32;
  iVar2 = DiamondDerived::func((DiamondDerived *)&obj.field_0x20);
  obj._40_4_ = 100;
  iVar3 = DiamondDerived::func((DiamondDerived *)&obj.field_0x20);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_operator_overload @ 0010254c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00102556 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int a;
  int b;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = template_max<int>(3,7);
  dVar2 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)dVar2 + iVar1 + a + b;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001025e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 001025ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 001025f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

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

int test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 001026db */

/* WARNING: Removing unreachable block (ram,0x00102769) */
/* WARNING: Removing unreachable block (ram,0x0010276e) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar2 = uVar7 + 0x14;
  if (lVar5 != 0) {
    iVar2 = uVar7 + 0x78;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
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
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  int iVar1;
  
  puts(&DAT_00103018);
  iVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_0010303c,iVar1);
  iVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_0010305a,iVar1);
  iVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_00103076,iVar1);
  iVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_00103092,iVar1);
  iVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_001030ae,iVar1);
  __printf_chk(1,&DAT_001030cb,0x16);
  iVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_001030e7,iVar1);
  __printf_chk(1,&DAT_00103103,0x10);
  __printf_chk(1,&DAT_0010311f,0x55);
  iVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_0010313b,iVar1);
  iVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_00103158,iVar1);
  iVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_00103175,iVar1);
  return;
}



/* Function: main @ 00102970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00102987 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: virtual_func @ 001029b4 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: getName @ 001029bc */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 001029c8 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  return;
}



/* Function: virtual_func @ 001029ce */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return x * this->multiplier;
}



/* Function: getName @ 001029da */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: funcA @ 001029e6 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

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

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: func @ 00102a7d */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)
           ((long)&(this->super_MiddleA)._vptr_MiddleA +
           (long)(this->super_MiddleA)._vptr_MiddleA[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)this + *(long *)(*(long *)&this[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: getType @ 00102aba */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00102ac4 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00102aca */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ad0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ad5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00102ae0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

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

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  return;
}



/* Function: ~Base @ 00102af0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00102b08 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(&this[-1].super_BaseB,0x20);
  return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete((_func_int_varargs *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(&this[-1].field_0x20,0x30);
  return;
}



/* Function: template_max<int> @ 00102bd2 */

int template_max<int>(int a,int b)

{
  if (b <= a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 00102bde */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 00102be7 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00102bf4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00102c00 */

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



/* Function: get @ 00102c18 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < idx) && (idx < this->size)) {
    iVar1 = this->data[idx];
  }
  return iVar1;
}



/* Function: getSize @ 00102c34 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 00102c3c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00102c48 */

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



/* Function: get @ 00102c62 */

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



/* Function: getSize @ 00102c7e */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: _fini @ 00102c88 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 68 */
