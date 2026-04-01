/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/5-1/5-1_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100d48 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00100f00 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100f34 */

/* WARNING: Removing unreachable block (ram,0x00100f44) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100f50 */

/* WARNING: Removing unreachable block (ram,0x00100f68) */
/* WARNING: Removing unreachable block (ram,0x00100f74) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100f80 */

/* WARNING: Removing unreachable block (ram,0x00100fa4) */
/* WARNING: Removing unreachable block (ram,0x00100fb0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100fc0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: test_cpp_member_func @ 00101014 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  size_t sVar1;
  undefined4 local_38;
  undefined8 local_34;
  undefined7 uStack_2c;
  undefined1 uStack_25;
  undefined7 uStack_24;
  undefined8 uStack_1d;
  undefined1 local_15;
  
                    /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  local_15 = 0;
  local_38 = 10;
  uStack_2c = 0;
  local_34 = 0x74736554;
  uStack_1d = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  sVar1 = strlen((char *)((ulong)&local_38 | 4));
  return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101088 */

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



/* Function: test_cpp_multiple_inheritance @ 00101090 */

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



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???] */
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: bool eq@[???]
                       Unresolved local var: Point p3@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

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



/* Function: test_cpp_lambda @ 001010b8 */

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



/* Function: test_cpp_exception @ 001010c0 */

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
                    /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001011bc */

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



/* Function: test_cpp_rtti @ 001011c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: RTTIBase * obj2@[???] */
  puVar1 = operator_new(8);
  *puVar1 = &PTR__RTTIBase_00111d58;
  plVar2 = operator_new(8);
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  *plVar2 = (long)&PTR__RTTIBase_00111d80;
  lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  iVar4 = 0x1e;
  if (lVar3 != 0) {
    iVar4 = 0x82;
  }
  lVar3 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar3 != 0) {
    iVar4 = iVar4 + 200;
  }
  operator_delete(puVar1);
  (**(code **)(*plVar2 + 8))(plVar2);
  return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
  uint uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined4 local_58;
  undefined8 local_54;
  undefined7 uStack_4c;
  undefined1 uStack_45;
  undefined7 uStack_44;
  undefined8 uStack_3d;
  undefined1 local_35;
  
  puts(&DAT_00101734);
                    /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  local_35 = 0;
  local_58 = 10;
  uStack_4c = 0;
  local_54 = 0x74736554;
  uStack_3d = 0;
  uStack_45 = 0;
  uStack_44 = 0;
  sVar2 = strlen((char *)((ulong)&local_58 | 4));
  printf(&DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  printf(&DAT_001015fb,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
  printf(&DAT_00101617,0x2a);
  printf(&DAT_00101633,0x47);
  printf(&DAT_0010164f,0x28a);
  printf(&DAT_0010166c,0x16);
  printf(&DAT_00101688,0x27);
  printf(&DAT_001016a4,0x10);
  printf(&DAT_001016c0,0x55);
  uVar1 = test_cpp_exception();
  printf(&DAT_001016dc,(ulong)uVar1);
  printf(&DAT_001016f9,0x2bf);
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: RTTIBase * obj2@[???] */
  puVar3 = operator_new(8);
  *puVar3 = &PTR__RTTIBase_00111d58;
  plVar4 = operator_new(8);
  *plVar4 = (long)&PTR__RTTIBase_00111d80;
  lVar5 = __dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar6 = 0x1e;
  if (lVar5 != 0) {
    iVar6 = 0x82;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar5 != 0) {
    iVar6 = iVar6 + 200;
  }
  operator_delete(puVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  printf(&DAT_00101716,(ulong)(iVar6 + 0xe));
  return;
}



/* Function: main @ 00101458 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 00101470 */

int template_max<int>(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_max<double> @ 0010147c */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 00101488 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 0010149c */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 001014a4 */

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



/* Function: get @ 001014c0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < idx) && (idx < this->size)) {
    iVar1 = this->data[(uint)idx];
  }
  return iVar1;
}



/* Function: getSize @ 001014e0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 001014e8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 001014f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  int iVar1;
  
  iVar1 = this->size;
  if (iVar1 < 10) {
    this->data[iVar1] = value;
    this->size = iVar1 + 1;
  }
  return;
}



/* Function: get @ 0010150c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((-1 < idx) && (idx < this->size)) {
    dVar1 = this->data[(uint)idx];
  }
  return dVar1;
}



/* Function: getSize @ 00101528 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: ~RTTIDerivedA @ 00101530 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101534 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: ~RTTIBase @ 0010153c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 00101540 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101544 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: _fini @ 0010154c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
