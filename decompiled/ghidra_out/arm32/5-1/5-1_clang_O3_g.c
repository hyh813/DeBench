/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010848 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00010994 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000109d8 */

/* WARNING: Removing unreachable block (ram,0x000109ec) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000109fc */

/* WARNING: Removing unreachable block (ram,0x00010a1c) */
/* WARNING: Removing unreachable block (ram,0x00010a28) */
/* WARNING: Removing unreachable block (ram,0x00010a2c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010a40 */

/* WARNING: Removing unreachable block (ram,0x00010a6c) */
/* WARNING: Removing unreachable block (ram,0x00010a78) */
/* WARNING: Removing unreachable block (ram,0x00010a7c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010a90 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  size_t sVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r2@[???] */
  local_28 = 0x74736554;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_c = 0;
  local_a = 0;
  local_9 = 0;
  sVar1 = strlen((char *)&local_28);
  return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**obj->_vptr_Base)();
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
                    /* Unresolved local var: Derived derived@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r4@[???]
                       Unresolved local var: Base base@[???]
                       Unresolved local var: Base * pb@[???]
                       Unresolved local var: Base * pd@[???] */
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
                    /* Unresolved local var: MultiDerived obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int ptr_equal@[???]
                       Unresolved local var: BaseA * pa@[???]
                       Unresolved local var: BaseB * pb@[???] */
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???] */
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: Point p3@[???]
                       Unresolved local var: bool eq@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
                    /* Unresolved local var: Container<int> int_container@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: double r3@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: Container<double> double_container@[???] */
  return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
                    /* Unresolved local var: int capture_by_value@[???]
                       Unresolved local var: int capture_by_ref@[???]
                       Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
  return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int e@[???]
                       Unresolved local var: BaseException * e@[???]
                       Unresolved local var: DerivedException * e@[???] */
                    /* Unresolved local var: int e@[???] */
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
                    /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
                       Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
                       arr@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
                       ptr3@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: deleter_type deleter@[???] */
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: RTTIBase * obj2@[???] */
  puVar1 = operator_new(4);
  *puVar1 = &PTR__RTTIBase_00021ed8;
  piVar2 = operator_new(4);
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  *piVar2 = (int)&PTR__RTTIBase_00021eec;
  iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  operator_delete(puVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar5 = 0x82;
  if (iVar3 == 0) {
    iVar5 = 0x1e;
  }
  if (iVar4 != 0) {
    iVar5 = iVar5 + 200;
  }
  return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  
  puts(&DAT_00011358);
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r2@[???] */
  local_38 = 0x74736554;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_1a = 0;
  local_19 = 0;
  sVar1 = strlen((char *)&local_38);
  printf(&DAT_00011201,sVar1 + 0x125c);
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  printf(&DAT_0001121f,LifecycleClass::instance_count * 0x3e9 + 0x15);
  printf(&DAT_0001123b,0x2a);
  printf(&DAT_00011257,0x47);
  printf(&DAT_00011273,0x28a);
  printf(&DAT_00011290,0x16);
  printf(&DAT_000112ac,0x27);
  printf(&DAT_000112c8,0x10);
  printf(&DAT_000112e4,0x55);
  iVar2 = test_cpp_exception();
  printf(&DAT_00011300,iVar2);
  printf(&DAT_0001131d,0x2bf);
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: RTTIBase * obj2@[???] */
  puVar3 = operator_new(4);
  *puVar3 = &PTR__RTTIBase_00021ed8;
  piVar4 = operator_new(4);
  *piVar4 = (int)&PTR__RTTIBase_00021eec;
  iVar2 = __dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar5 = __dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  operator_delete(puVar3);
  (**(code **)(*piVar4 + 4))(piVar4);
  iVar6 = 0x82;
  if (iVar2 == 0) {
    iVar6 = 0x1e;
  }
  if (iVar5 != 0) {
    iVar6 = iVar6 + 200;
  }
  printf(&DAT_0001133a,iVar6 + 0xe);
  return;
}



/* Function: main @ 00010fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 00010fcc */

int template_max<int>(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_max<double> @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max<double>(double a,double b)

{
  __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0));
  return a;
}



/* Function: template_swap<int> @ 0001100c */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00011020 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 0001102c */

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



/* Function: get @ 00011044 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  iVar1 = 0;
  if (idx < 0) {
    return 0;
  }
  if (idx < this->size) {
    iVar1 = this->data[idx];
  }
  return iVar1;
}



/* Function: getSize @ 00011064 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 0001106c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00011078 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar1;
  
  iVar1 = this->size;
  if (9 < iVar1) {
    return;
  }
  *(undefined4 *)(this->data + iVar1) = in_r2;
  *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
  this->size = iVar1 + 1;
  return;
}



/* Function: get @ 0001109c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double in_d0;
  
  if (-1 < idx) {
    return in_d0;
  }
  return in_d0;
}



/* Function: getSize @ 000110c8 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: ~RTTIDerivedA @ 000110d0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 000110d4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: ~RTTIBase @ 000110dc */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 000110e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 000110e4 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: _fini @ 000110ec */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 39 */
