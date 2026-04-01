/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_gcc_O2_g
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

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  
                    /* Unresolved local var: int result@[???] */
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00010b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
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

/* WARNING: Removing unreachable block (ram,0x00010cb0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  size_t sVar1;
  SimpleClass obj;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  strncpy(obj.name,"Test",0x1f);
  obj.name[0x1f] = '\0';
  sVar1 = strlen(obj.name);
  return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**obj->_vptr_Base)();
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
                    /* Unresolved local var: Base base@[???]
                       Unresolved local var: Derived derived@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: Base * pb@[???]
                       Unresolved local var: Base * pd@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r4@[???] */
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

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



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
                    /* Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: Point p3@[???]
                       Unresolved local var: bool eq@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  int iVar1;
  undefined4 extraout_r0;
  int iVar2;
  undefined4 extraout_r1;
  double a_00;
  double b_00;
  int a;
  int b;
  int local_14;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???] */
  local_14 = 0;
  iVar1 = template_max<int>(3,7);
  template_max<double>(a_00,b_00);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
  if (local_14 == 0) {
    return iVar2 + iVar1 + a + b;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

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



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
                    /* Unresolved local var: int capture_by_value@[???]
                       Unresolved local var: int capture_by_ref@[???]
                       Unresolved local var: anon_struct_8_2_35feab7f lambda1@[???]
                       Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

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



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: RTTIBase * obj2@[???]
                       Unresolved local var: int result@[???] */
  piVar1 = operator_new(4);
  *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
  piVar2 = operator_new(4);
  this = *(type_info **)(*piVar1 + -4);
  *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
  iVar3 = std::type_info::operator==(this,(type_info *)&RTTIDerivedA::typeinfo);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 10;
  }
  iVar4 = std::type_info::operator==
                    (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  if (iVar4 != 0) {
    iVar3 = iVar3 + 0x14;
  }
  iVar4 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  if (iVar4 != 0) {
    iVar3 = iVar3 + 100;
  }
  iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar6 = *piVar1;
  if (iVar4 != 0) {
    iVar3 = iVar3 + 200;
  }
  __s = *(char **)(*(int *)(iVar6 + -4) + 4);
  if (*__s == '*') {
    __s = __s + 1;
  }
  sVar5 = strlen(__s);
  (**(code **)(iVar6 + 4))(piVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ec8 */

/* WARNING: Removing unreachable block (ram,0x00011008) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
  size_t sVar1;
  int iVar2;
  SimpleClass obj;
  
  puts(&DAT_00011450);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  strncpy(obj.name,"Test",0x1f);
  obj.name[0x1f] = '\0';
  sVar1 = strlen(obj.name);
  __printf_chk(1,&DAT_00011474,sVar1 + 0x125c);
  iVar2 = test_cpp_constructor();
  __printf_chk(1,&DAT_00011494,iVar2);
  __printf_chk(1,&DAT_000114b0,0x2a);
  __printf_chk(1,&DAT_000114cc,0x47);
  iVar2 = test_cpp_diamond_inheritance();
  __printf_chk(1,&DAT_000114e8,iVar2);
  __printf_chk(1,&DAT_00011508,0x16);
  iVar2 = test_cpp_template_func();
  __printf_chk(1,&DAT_00011524,iVar2);
  __printf_chk(1,&DAT_00011540,0x10);
  __printf_chk(1,&DAT_0001155c,0x55);
  iVar2 = test_cpp_exception();
  __printf_chk(1,&DAT_00011578,iVar2);
  iVar2 = test_cpp_smart_ptr();
  __printf_chk(1,&DAT_00011598,iVar2);
  iVar2 = test_cpp_rtti();
  __printf_chk(1,&DAT_000115b8,iVar2);
  return;
}



/* Function: virtual_func @ 00011048 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: getName @ 00011050 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 0001105c */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * __thiscall Base::~Base(Base *this,int __in_chrg)

{
  return this;
}



/* Function: virtual_func @ 00011060 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return x * this->multiplier;
}



/* Function: getName @ 0001106c */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: funcA @ 00011078 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: funcB @ 00011080 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: funcB @ 00011088 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00011090 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 000110a8 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((int)&this->dataA +
                 (int)(this->_vptr_MiddleA[-3] +
                      *(int *)(*(int *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) +
                              -0xc))) + 0x96;
}



/* Function: func @ 000110cc */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 000110e4 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((int)&this->dataB +
                 (int)(this->_vptr_MiddleB[-3] +
                      *(int *)(*(int *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) +
                              -0xc))) + 200;
}



/* Function: func @ 00011108 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
         + 0xfa;
}



/* Function: func @ 00011120 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (this->super_MiddleA)._vptr_MiddleA[-3];
  return *(int *)((int)&(this->super_MiddleA).dataA +
                 (int)(p_Var1 + *(int *)(*(int *)((int)&(this->super_MiddleA)._vptr_MiddleA +
                                                 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 00011144 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((int)this + *(int *)(*(int *)&this[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 0001115c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: getType @ 00011164 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 0001116c */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  return this;
}



/* Function: ~RTTIDerivedA @ 00011170 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  return this;
}



/* Function: ~DiamondDerived @ 00011174 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void * __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  return this;
}



/* Function: ~DiamondDerived @ 00011178 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

_func_int_varargs * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return (_func_int_varargs *)
         ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-4]);
}



/* Function: ~DiamondDerived @ 00011188 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return &this[-1].field_0x10;
}



/* Function: ~MultiDerived @ 00011190 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  return this;
}



/* Function: ~MultiDerived @ 00011194 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return &this[-1].super_BaseB;
}



/* Function: ~Derived @ 0001119c */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  return this;
}



/* Function: ~Base @ 000111a0 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * __thiscall Base::~Base(Base *this,int __in_chrg)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~Derived @ 000111b8 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  operator_delete(this,8);
  return this;
}



/* Function: ~MultiDerived @ 000111d0 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MultiDerived @ 000111e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(&this[-1].super_BaseB,0x10);
  return &this[-1].super_BaseB;
}



/* Function: ~RTTIDerivedB @ 00011204 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~RTTIDerivedA @ 0001121c */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  operator_delete(this,4);
  return this;
}



/* Function: ~DiamondDerived @ 00011234 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void * __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  operator_delete(this,0x18);
  return this;
}



/* Function: ~DiamondDerived @ 0001124c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

_func_int_varargs * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)
           ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-4]
           );
  operator_delete(p_Var1,0x18);
  return p_Var1;
}



/* Function: ~DiamondDerived @ 00011270 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(&this[-1].field_0x10,0x18);
  return &this[-1].field_0x10;
}



/* Function: template_max<int> @ 0001128c */

int template_max<int>(int a,int b)

{
  if (a < b) {
    a = b;
  }
  return a;
}



/* Function: template_max<double> @ 00011298 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000112ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max<double>(double a,double b)

{
  __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0));
  return a;
}



/* Function: template_swap<int> @ 000112c8 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 000112dc */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

Container<int> * __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return this;
}



/* Function: push @ 000112e8 */

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



/* Function: get @ 00011300 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  if ((-1 < idx) && (idx < this->size)) {
    return this->data[idx];
  }
  return 0;
}



/* Function: getSize @ 00011324 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 0001132c */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container<double> * __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return this;
}



/* Function: push @ 00011338 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar1;
  
  iVar1 = this->size;
  if (iVar1 < 10) {
    this->size = iVar1 + 1;
    *(undefined4 *)(this->data + iVar1) = in_r2;
    *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
  }
  return;
}



/* Function: get @ 00011368 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double in_d0;
  
  if ((-1 < idx) && (idx < this->size)) {
    return in_d0;
  }
  return in_d0;
}



/* Function: getSize @ 00011394 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: _fini @ 0001139c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 69 */
