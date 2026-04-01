/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/5-1/5-1_gcc_Os_g
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

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  
                    /* Unresolved local var: int result@[???] */
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 001018d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
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

int test_cpp_member_func(void)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  SimpleClass obj;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  lVar1 = ___stack_chk_guard;
  __s = strncpy(obj.name,"Test",0x1f);
  obj.name[0x1f] = '\0';
  sVar2 = strlen(__s);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return (int)sVar2 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

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
  base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113868;
  derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113898;
  derived.multiplier = 3;
  iVar2 = call_virtual_func(&base,5);
  iVar3 = call_virtual_func(&derived.super_Base,5);
  iVar3 = iVar2 + 0x15 + iVar3;
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

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



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: Point p3@[???]
                       Unresolved local var: bool eq@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

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
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
  int iVar1;
  long lVar2;
  Container<int> int_container;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: Container<double> double_container@[???]
                       Unresolved local var: double r3@[???] */
  lVar2 = ___stack_chk_guard;
  int_container.size = 1;
  int_container.data[0] = 10;
  Container<int>::push(&int_container,0x14);
  Container<int>::push(&int_container,0x1e);
  iVar1 = int_container.data[0];
  if (int_container.size < 1) {
    iVar1 = 0;
  }
  if (lVar2 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(int_container.size + iVar1,&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
  }
  return int_container.size + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

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



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: RTTIBase * obj2@[???]
                       Unresolved local var: int result@[???] */
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
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar7 + 0x78;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
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

int test_cpp_smart_ptr(void)

{
  long lVar1;
  int __in_chrg;
  int __in_chrg_00;
  unique_ptr<int,_std::default_delete<int>_> ptr1;
  unique_ptr<int,_std::default_delete<int>_> ptr2;
  unique_ptr<int_[],_std::default_delete<int_[]>_> arr;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
                       Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
                       ptr3@[???]
                       Unresolved local var: int r3@[???] */
  lVar1 = ___stack_chk_guard;
  ptr2._M_t.super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
  super__Tuple_impl<0,_int*,_std::default_delete<int>_> =
       (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>)operator_new(4);
  ptr1._M_t.super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
  super__Tuple_impl<0,_int*,_std::default_delete<int>_> =
       (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>)
       (__uniq_ptr_impl<int,_std::default_delete<int>_>)0x0;
  *(undefined4 *)
   ptr2._M_t.super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
   super__Tuple_impl<0,_int*,_std::default_delete<int>_> = 200;
                    /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
  arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
  super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> =
       (__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true>)operator_new__(0x14);
  *(undefined8 *)
   arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
   super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> = 0x200000001;
  *(undefined8 *)
   ((long)arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
          super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> + 8) = 0x400000003;
  *(undefined4 *)
   ((long)arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
          super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> + 0x10) = 5;
  std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr(&arr,5);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr2,__in_chrg);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr1,__in_chrg_00);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

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
  DiamondDerived::~DiamondDerived(&obj);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return iVar2 + iVar3;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  int iVar1;
  
  puts(&DAT_001025b2);
  iVar1 = test_cpp_member_func();
  __printf_chk(1,&DAT_001025d6,iVar1);
  iVar1 = test_cpp_constructor();
  __printf_chk(1,&DAT_001025f4,iVar1);
  iVar1 = test_cpp_virtual_func();
  __printf_chk(1,&DAT_00102610,iVar1);
  iVar1 = test_cpp_multiple_inheritance();
  __printf_chk(1,&DAT_0010262c,iVar1);
  iVar1 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_00102648,iVar1);
  iVar1 = test_cpp_operator_overload();
  __printf_chk(1,&DAT_00102665,iVar1);
  iVar1 = test_cpp_template_func();
  __printf_chk(1,&DAT_00102681,iVar1);
  iVar1 = test_cpp_template_class();
  __printf_chk(1,&DAT_0010269d,iVar1);
  iVar1 = test_cpp_lambda();
  __printf_chk(1,&DAT_001026b9,iVar1);
  iVar1 = test_cpp_exception();
  __printf_chk(1,&DAT_001026d5,iVar1);
  iVar1 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_001026f2,iVar1);
  iVar1 = test_cpp_rtti();
  __printf_chk(1,&DAT_0010270f,iVar1);
  return;
}



/* Function: virtual_func @ 001020d8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: getName @ 001020e0 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 001020ec */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  return;
}



/* Function: virtual_func @ 001020f0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return x * this->multiplier;
}



/* Function: getName @ 001020fc */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: funcA @ 00102108 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: funcB @ 00102110 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

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

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
  return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
  return;
}



/* Function: func @ 0010212c */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  int iVar1;
  
  iVar1 = func((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]));
  return iVar1;
}



/* Function: func @ 00102154 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  int iVar1;
  
  iVar1 = func((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]));
  return iVar1;
}



/* Function: func @ 0010217c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: func @ 00102194 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  int iVar1;
  
  iVar1 = func((DiamondDerived *)
               ((long)&(this->super_MiddleA)._vptr_MiddleA +
               (long)(this->super_MiddleA)._vptr_MiddleA[-3]));
  return iVar1;
}



/* Function: func @ 001021a4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  int iVar1;
  
  iVar1 = func((DiamondDerived *)&this[-1].field_0x20);
  return iVar1;
}



/* Function: ~MiddleA @ 001021ac */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_001138e0;
  *(undefined ***)&this->field_0x10 = &PTR_func_00113918;
  return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = this->_vptr_MiddleA[-4];
  *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var1) = &PTR_func_001138e0;
  *(undefined ***)(&this->field_0x10 + (long)p_Var1) = &PTR_func_00113918;
  return;
}



/* Function: ~MiddleB @ 001021f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00113958;
  *(undefined ***)&this->field_0x10 = &PTR_func_00113990;
  return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = this->_vptr_MiddleB[-4];
  *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var1) = &PTR_func_00113958;
  *(undefined ***)(&this->field_0x10 + (long)p_Var1) = &PTR_func_00113990;
  return;
}



/* Function: getType @ 00102234 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: getType @ 0010223c */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00102244 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00102248 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  return;
}



/* Function: ~MultiDerived @ 0010224c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

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

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  return;
}



/* Function: ~Base @ 00102258 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00102260 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00102268 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  int in_w1;
  
  ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_w1);
  return;
}



/* Function: ~VirtualBase @ 00102278 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~MiddleA @ 00102290 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_001138e0;
  *(undefined ***)&this->field_0x10 = &PTR_func_00113918;
  operator_delete(this,0x20);
  return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-4]));
  return;
}



/* Function: ~MiddleB @ 001022c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00113958;
  *(undefined ***)&this->field_0x10 = &PTR_func_00113990;
  operator_delete(this,0x20);
  return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-4]));
  return;
}



/* Function: ~MiddleA @ 001022f0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
  undefined **ppuVar1;
  _func_int_varargs *p_Var2;
  undefined **ppuVar3;
  
  if (__in_chrg == 0) {
    ppuVar3 = *__vtt_parm;
  }
  else {
    ppuVar3 = &PTR_func_001138e0;
  }
  this->_vptr_MiddleA = (_func_int_varargs **)ppuVar3;
  if (__in_chrg == 0) {
    ppuVar1 = __vtt_parm[1];
    p_Var2 = ((_func_int_varargs **)ppuVar3)[-3];
  }
  else {
    p_Var2 = (_func_int_varargs *)0x10;
    ppuVar1 = &PTR_func_00113918;
  }
  *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var2) = ppuVar1;
  return;
}



/* Function: ~MiddleA @ 0010232c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **__vtt_parm)

{
  ~MiddleA(this,0,__vtt_parm);
  return;
}



/* Function: ~MiddleB @ 00102338 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
  undefined **ppuVar1;
  _func_int_varargs *p_Var2;
  undefined **ppuVar3;
  
  if (__in_chrg == 0) {
    ppuVar3 = *__vtt_parm;
  }
  else {
    ppuVar3 = &PTR_func_00113958;
  }
  this->_vptr_MiddleB = (_func_int_varargs **)ppuVar3;
  if (__in_chrg == 0) {
    ppuVar1 = __vtt_parm[1];
    p_Var2 = ((_func_int_varargs **)ppuVar3)[-3];
  }
  else {
    p_Var2 = (_func_int_varargs *)0x10;
    ppuVar1 = &PTR_func_00113990;
  }
  *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var2) = ppuVar1;
  return;
}



/* Function: ~MiddleB @ 00102374 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **__vtt_parm)

{
  ~MiddleB(this,0,__vtt_parm);
  return;
}



/* Function: template_max<int> @ 00102380 */

int template_max<int>(int a,int b)

{
  if (a < b) {
    a = b;
  }
  return a;
}



/* Function: template_max<double> @ 0010238c */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 00102398 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 001023ac */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 001023b4 */

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



/* Function: get @ 001023d0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  if ((idx < 0) || (this->size <= idx)) {
    iVar1 = 0;
  }
  else {
    iVar1 = this->data[idx];
  }
  return iVar1;
}



/* Function: getSize @ 001023f0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 001023f8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00102400 */

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



/* Function: get @ 0010241c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double dVar1;
  
  if ((idx < 0) || (this->size <= idx)) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = this->data[idx];
  }
  return dVar1;
}



/* Function: getSize @ 0010243c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: ~unique_ptr @ 00102444 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
   __in_chrg) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this,int __in_chrg)

{
  _Tuple_impl<0,_int*,_std::default_delete<int>_> _Var1;
  
                    /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
  _Var1 = (this->_M_t).super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
          super__Tuple_impl<0,_int*,_std::default_delete<int>_>;
  if (_Var1 != (_Tuple_impl<0,_int*,_std::default_delete<int>_>)0x0) {
    operator_delete((void *)_Var1,4);
    return;
  }
  return;
}



/* Function: ~unique_ptr @ 00102458 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
   this, int __in_chrg) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int __in_chrg)

{
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> _Var1;
  
                    /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
  _Var1 = (this->_M_t).super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
          super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>;
  if (_Var1 != (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>)0x0) {
    operator_delete__((void *)_Var1);
    return;
  }
  return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  undefined **ppuVar1;
  _func_int_varargs *p_Var2;
  undefined1 *this_00;
  
  if (__in_chrg == 0) {
    ppuVar1 = *__vtt_parm;
  }
  else {
    ppuVar1 = &PTR_func_00113ac8;
  }
  (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
  if (__in_chrg == 0) {
    p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
    ppuVar1 = __vtt_parm[5];
  }
  else {
    p_Var2 = (_func_int_varargs *)0x20;
    ppuVar1 = &PTR_func_00113b30;
  }
  *(undefined ***)(p_Var2 + (long)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar1;
  if (__in_chrg == 0) {
    ppuVar1 = __vtt_parm[6];
  }
  else {
    ppuVar1 = &PTR_func_00113af8;
  }
  this_00 = &(this->super_MiddleA).field_0x10;
  *(undefined ***)this_00 = ppuVar1;
  ppuVar1 = &PTR_PTR_00113a90;
  if (__in_chrg == 0) {
    ppuVar1 = __vtt_parm + 3;
  }
  MiddleB::~MiddleB((MiddleB *)this_00,ppuVar1);
  ppuVar1 = &PTR_PTR_00113a80;
  if (__in_chrg == 0) {
    ppuVar1 = __vtt_parm + 1;
  }
  MiddleA::~MiddleA(&this->super_MiddleA,ppuVar1);
  return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this,2,(void **)0x0);
  return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20);
  return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived((DiamondDerived *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
  return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20);
  return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived((DiamondDerived *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
  return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **__vtt_parm)

{
  ~DiamondDerived(this,0,__vtt_parm);
  return;
}



/* Function: _fini @ 00102588 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 89 */
