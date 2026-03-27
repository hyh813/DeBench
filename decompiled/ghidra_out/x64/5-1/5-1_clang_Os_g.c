/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00101170 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001011a0 */

/* WARNING: Removing unreachable block (ram,0x001011b3) */
/* WARNING: Removing unreachable block (ram,0x001011bf) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001011d0 */

/* WARNING: Removing unreachable block (ram,0x001011f4) */
/* WARNING: Removing unreachable block (ram,0x00101200) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101210 */

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



/* Function: test_cpp_member_func @ 0010125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  size_t sVar1;
  char local_24 [36];
  
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
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
  local_24[0x1f] = 0;
  sVar1 = strlen(local_24);
  return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101294 */

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



/* Function: call_virtual_func @ 001012e5 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x001012eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**obj->_vptr_Base)();
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012ed */

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



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

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



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???] */
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: bool eq@[???]
                       Unresolved local var: Point p3@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

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



/* Function: test_cpp_lambda @ 00101311 */

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



/* Function: test_cpp_exception @ 00101317 */

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
                    /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

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



/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: RTTIBase * obj2@[???]
                       Unresolved local var: int result@[???] */
  puVar1 = operator_new(8);
  *puVar1 = &PTR__RTTIBase_00103d78;
  plVar2 = operator_new(8);
  *plVar2 = (long)&PTR__RTTIBase_00103da0;
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar4 = 0x82;
  if (lVar3 == 0) {
    iVar4 = 0x1e;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  lVar3 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar5 = iVar4 + 200;
  if (lVar3 == 0) {
    iVar5 = iVar4;
  }
  operator_delete(puVar1);
  (**(code **)(*plVar2 + 8))(plVar2);
  return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 0010147f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
  uint uVar1;
  size_t sVar2;
  char local_24 [36];
  
  puts(&DAT_001021d4);
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
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
  local_24[0x1f] = 0;
  sVar2 = strlen(local_24);
  printf(&DAT_0010207d,(ulong)((int)sVar2 + 0x125c));
  uVar1 = test_cpp_constructor();
  printf(&DAT_0010209b,(ulong)uVar1);
  printf(&DAT_001020b7,0x2a);
  printf(&DAT_001020d3,0x47);
  printf(&DAT_001020ef,0x28a);
  printf(&DAT_0010210c,0x16);
  printf(&DAT_00102128,0x27);
  printf(&DAT_00102144,0x10);
  printf(&DAT_00102160,0x55);
  uVar1 = test_cpp_exception();
  printf(&DAT_0010217c,(ulong)uVar1);
  printf(&DAT_00102199,0x2bf);
  uVar1 = test_cpp_rtti();
  printf(&DAT_001021b6,(ulong)uVar1);
  return;
}



/* Function: main @ 001015a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 001015b2 */

int template_max<int>(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 001015ba */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 001015bf */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 001015c8 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 001015d0 */

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



/* Function: get @ 001015e4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
    iVar1 = this->data[(uint)idx];
  }
  return iVar1;
}



/* Function: getSize @ 001015f6 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 001015fa */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00101602 */

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



/* Function: get @ 00101618 */

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



/* Function: getSize @ 0010162c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: ~RTTIDerivedA @ 00101630 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101636 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: ~RTTIBase @ 0010163c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 0010163e */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101644 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: _fini @ 0010164c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 39 */
