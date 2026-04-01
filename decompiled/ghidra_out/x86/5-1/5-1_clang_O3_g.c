/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00011180 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000111ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000111c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111db) */
/* WARNING: Removing unreachable block (ram,0x000111e5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011200 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001122e) */
/* WARNING: Removing unreachable block (ram,0x00011238) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011250 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000112ac) */
/* WARNING: Removing unreachable block (ram,0x000112b0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000112e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: test_cpp_member_func @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  size_t sVar1;
  char local_28 [36];
  
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r2@[???] */
  local_28[0x1c] = '\0';
  local_28[0x1d] = '\0';
  local_28[0x1e] = '\0';
  local_28[0x18] = '\0';
  local_28[0x19] = '\0';
  local_28[0x1a] = '\0';
  local_28[0x1b] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  builtin_strncpy(local_28,"Test",5);
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[0x1f] = 0;
  sVar1 = strlen(local_28);
  return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
  iVar1 = (**obj->_vptr_Base)(obj,x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

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



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

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



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: DiamondDerived obj@[???]
                       Unresolved local var: VirtualBase * pb@[???] */
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
                    /* Unresolved local var: Point p1@[???]
                       Unresolved local var: Point p2@[???]
                       Unresolved local var: Point p3@[???]
                       Unresolved local var: bool eq@[???] */
  return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

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



/* Function: test_cpp_lambda @ 00011430 */

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



/* Function: test_cpp_exception @ 00011440 */

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
                    /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011530 */

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



/* Function: test_cpp_rtti @ 00011540 */

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
  *puVar1 = &PTR__RTTIBase_00013ecc;
  piVar2 = operator_new(4);
  *piVar2 = (int)&PTR__RTTIBase_00013ee0;
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar5 = 0x82;
  if (iVar3 == 0) {
    iVar5 = 0x1e;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar3 = iVar5 + 200;
  if (iVar4 == 0) {
    iVar3 = iVar5;
  }
  operator_delete(puVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char local_30 [32];
  
  puts(&DAT_000121d8);
                    /* Unresolved local var: SimpleClass obj@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r2@[???] */
  local_30[0x1c] = '\0';
  local_30[0x1d] = '\0';
  local_30[0x1e] = '\0';
  local_30[0x18] = '\0';
  local_30[0x19] = '\0';
  local_30[0x1a] = '\0';
  local_30[0x1b] = '\0';
  local_30[0x14] = '\0';
  local_30[0x15] = '\0';
  local_30[0x16] = '\0';
  local_30[0x17] = '\0';
  local_30[0x10] = '\0';
  local_30[0x11] = '\0';
  local_30[0x12] = '\0';
  local_30[0x13] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  builtin_strncpy(local_30,"Test",5);
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[0x1f] = 0;
  sVar1 = strlen(local_30);
  printf(&DAT_00012081,sVar1 + 0x125c);
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: LifecycleClass obj@[???] */
  printf(&DAT_0001209f,LifecycleClass::instance_count * 0x3e9 + 0x15);
  printf(&DAT_000120bb,0x2a);
  printf(&DAT_000120d7,0x47);
  printf(&DAT_000120f3,0x28a);
  printf(&DAT_00012110,0x16);
  printf(&DAT_0001212c,0x27);
  printf(&DAT_00012148,0x10);
  printf(&DAT_00012164,0x55);
  iVar2 = test_cpp_exception();
  printf(&DAT_00012180,iVar2);
  printf(&DAT_0001219d,0x2bf);
                    /* Unresolved local var: RTTIBase * obj1@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: RTTIBase * obj2@[???] */
  puVar3 = operator_new(4);
  *puVar3 = &PTR__RTTIBase_00013ecc;
  piVar4 = operator_new(4);
  *piVar4 = (int)&PTR__RTTIBase_00013ee0;
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  iVar2 = __dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar6 = 0x82;
  if (iVar2 == 0) {
    iVar6 = 0x1e;
  }
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  iVar5 = __dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar2 = iVar6 + 200;
  if (iVar5 == 0) {
    iVar2 = iVar6;
  }
  operator_delete(puVar3);
  (**(code **)(*piVar4 + 4))(piVar4);
  printf(&DAT_000121ba,iVar2 + 0xe);
  return;
}



/* Function: main @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 00011830 */

int template_max<int>(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 00011840 */

double template_max<double>(double a,double b)

{
  if (b <= a || a != b) {
    b = a;
  }
  return b;
}



/* Function: template_swap<int> @ 00011860 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00011880 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00011890 */

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



/* Function: get @ 000118b0 */

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



/* Function: getSize @ 000118d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 000118e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 000118f0 */

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



/* Function: get @ 00011910 */

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



/* Function: getSize @ 00011930 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: ~RTTIDerivedA @ 00011940 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00011970 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: ~RTTIBase @ 00011980 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 00011990 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 000119c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: __do_global_ctors_aux @ 000119d0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000119ea) */
/* WARNING: Removing unreachable block (ram,0x00011a00) */
/* WARNING: Removing unreachable block (ram,0x00011a0d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011a1c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 44 */
