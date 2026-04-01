/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_clang_O1_no_g
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



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 000111b0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000111f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001120b) */
/* WARNING: Removing unreachable block (ram,0x00011215) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011230 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001125e) */
/* WARNING: Removing unreachable block (ram,0x00011268) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011280 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000112dc) */
/* WARNING: Removing unreachable block (ram,0x000112e0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: test_cpp_member_func @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  char local_28 [36];
  
  builtin_strncpy(local_28,"Test",5);
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  local_28[0x18] = '\0';
  local_28[0x19] = '\0';
  local_28[0x1a] = '\0';
  local_28[0x1b] = '\0';
  local_28[0x1c] = '\0';
  local_28[0x1d] = '\0';
  local_28[0x1e] = '\0';
  local_28[0x1f] = 0;
  sVar1 = strlen(local_28);
  return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = operator_new__(0x14);
  piVar2 = piVar1;
  do {
    *piVar2 = iVar3;
    iVar3 = iVar3 + 10;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 0x32);
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  iVar3 = LifecycleClass::instance_count + piVar1[2];
  operator_delete__(piVar1);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  return LifecycleClass::instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 00011420 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined4 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  undefined **local_14;
  undefined4 local_10;
  undefined **local_c;
  
  local_c = &PTR_virtual_func_00015ce4;
  local_14 = &PTR_virtual_func_00015d04;
  local_10 = 3;
  iVar1 = Base::virtual_func((Base *)&local_c,5);
  iVar2 = (*(code *)*local_14)(&local_14,5);
  return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_14;
  undefined4 local_10;
  
  local_14 = &PTR_funcB_00015d40;
  local_10 = 200;
  iVar1 = MultiDerived::funcA();
  iVar2 = (*(code *)*local_14)(&local_14);
  return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined **local_14;
  undefined4 local_10;
  
  local_14 = &PTR_func_00015de4;
  local_10 = 0x32;
  iVar1 = DiamondDerived::func((DiamondDerived *)&local_14);
  local_10 = 100;
  iVar2 = (*(code *)*local_14)((DiamondDerived *)&local_14);
  return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00011580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00011590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 000115e5 to 000115fe has its CatchHandler @ 00011601 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  char *__s1;
  char *__s1_00;
  int *piVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  piVar1 = operator_new(4);
  *piVar1 = (int)&PTR__RTTIBase_00015ecc;
  piVar2 = operator_new(4);
  *piVar2 = (int)&PTR__RTTIBase_00015ee0;
  __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
  if (__s1 == "12RTTIDerivedA") {
    uVar6 = 10;
  }
  else {
    uVar6 = 0;
    if (*__s1 != '*') {
      iVar3 = strcmp(__s1,"12RTTIDerivedA");
      uVar6 = 10;
      if (iVar3 != 0) {
        uVar6 = 0;
      }
    }
  }
  __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
  if (__s1_00 == "12RTTIDerivedB") {
    bVar7 = true;
  }
  else if (*__s1_00 == '*') {
    bVar7 = false;
  }
  else {
    iVar3 = strcmp(__s1_00,"12RTTIDerivedB");
    bVar7 = iVar3 == 0;
  }
  uVar5 = uVar6 | 0x14;
  if (!bVar7) {
    uVar5 = uVar6;
  }
  iVar3 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  uVar6 = uVar5 + 100;
  if (iVar3 == 0) {
    uVar6 = uVar5;
  }
  iVar3 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  uVar5 = uVar6 + 200;
  if (iVar3 == 0) {
    uVar5 = uVar6;
  }
  sVar4 = strlen(__s1 + (*__s1 == '*'));
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar2 + 4))(piVar2);
  return sVar4 + uVar5;
}



/* Function: test_cpp_oo_features @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  char *pcVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined **local_3c;
  char local_38 [4];
  undefined **local_34;
  undefined4 local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined3 uStack_1c;
  undefined1 local_19;
  undefined **local_14 [2];
  
  puts(&DAT_000131e5);
  builtin_strncpy(local_38,"Test",4);
  local_34 = (undefined **)0x0;
  local_30 = 0;
  local_2c = (undefined **)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uStack_1c = 0;
  local_19 = 0;
  local_3c = (undefined **)0xa;
  sVar2 = strlen(local_38);
  printf(&DAT_00013081,sVar2 + 0x125c);
  iVar7 = 0;
  piVar3 = operator_new__(0x14);
  piVar6 = piVar3;
  do {
    *piVar6 = iVar7;
    iVar7 = iVar7 + 10;
    piVar6 = piVar6 + 1;
  } while (iVar7 != 0x32);
  LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
  iVar7 = LifecycleClass::instance_count + piVar3[2];
  operator_delete__(piVar3);
  LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
  printf(&DAT_0001309f,LifecycleClass::instance_count * 1000 + iVar7);
  local_14[0] = &PTR_virtual_func_00015ce4;
  local_3c = &PTR_virtual_func_00015d04;
  local_38[0] = '\x03';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  iVar7 = Base::virtual_func((Base *)local_14,5);
  iVar4 = (*(code *)*local_3c)(&local_3c,5);
  printf(&DAT_000130bb,iVar4 + iVar7 + 0x15);
  local_3c = &PTR_funcA_00015d28;
  local_34 = &PTR_funcB_00015d40;
  local_38[0] = 'd';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_30 = 200;
  iVar7 = MultiDerived::funcB((MultiDerived *)&local_34);
  printf(&DAT_000130d7,iVar7 + 0x1f);
  local_3c = &PTR_func_00015db0;
  local_2c = &PTR_func_00015de4;
  local_34 = &PTR_func_00015dc8;
  local_28 = 0x32;
  iVar7 = DiamondDerived::func((DiamondDerived *)&local_2c);
  pcVar1 = local_38 + (int)local_3c[-3];
  pcVar1[0] = 'd';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  iVar4 = (*(code *)*local_2c)((DiamondDerived *)&local_2c);
  printf(&DAT_000130f3,iVar4 + iVar7);
  printf(&DAT_00013110,0x16);
  printf(&DAT_0001312c,0x27);
  printf(&DAT_00013148,0x10);
  printf(&DAT_00013164,0x55);
  uVar5 = test_cpp_exception();
  printf(&DAT_00013180,uVar5);
  printf(&DAT_0001319d,0x2bf);
  uVar5 = test_cpp_rtti();
  printf(&DAT_000131ba,uVar5);
  return;
}



/* Function: main @ 00011ab0 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: virtual_func @ 00011ad0 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: virtual_func @ 00011ae0 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 4) * param_1;
}



/* Function: ~Base @ 00011af0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: ~MultiDerived @ 00011b00 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00011b10 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: template_max<int> @ 00011b20 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00011b30 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_2 <= param_1 || param_1 != param_2) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_swap<int> @ 00011b50 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00011b70 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00011b80 */

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



/* Function: get @ 00011ba0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 00011bc0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00011bd0 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00011be0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00011c00 */

/* Container<double>::get(int) const */

longdouble __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    lVar1 = (longdouble)*(double *)(this + param_1 * 8);
  }
  return lVar1;
}



/* Function: getSize @ 00011c20 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00011c30 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &UNK_000131d8;
}



/* Function: FUN_00011c35 @ 00011c35 */

int FUN_00011c35(void)

{
  int unaff_retaddr;
  
  return unaff_retaddr + 0x15a3;
}



/* Function: ~Base @ 00011c50 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this);
  return;
}



/* Function: getName @ 00011c80 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: FUN_00011c85 @ 00011c85 */

int FUN_00011c85(void)

{
  int unaff_retaddr;
  
  return unaff_retaddr + 0x1558;
}



/* Function: ~Derived @ 00011ca0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcA @ 00011cd0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 00011d10 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00011d20 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: ~MultiDerived @ 00011d30 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00011d40 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -8);
  return;
}



/* Function: funcA @ 00011d70 */

/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00011d80 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  return;
}



/* Function: ~BaseA @ 00011d90 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  operator_delete(this);
  return;
}



/* Function: funcB @ 00011dc0 */

/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 00011dd0 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  return;
}



/* Function: ~BaseB @ 00011de0 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011e10 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011e30 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 00011e40 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011e70 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
                         *(int *)(*(int *)this + -0xc)) + 0x96;
}



/* Function: ~MiddleA @ 00011e90 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return;
}



/* Function: ~MiddleA @ 00011ea0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  operator_delete(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00011ed0 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 00011ef0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 00011f00 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011f30 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
                         *(int *)(*(int *)this + -0xc)) + 200;
}



/* Function: ~MiddleB @ 00011f50 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return;
}



/* Function: ~MiddleB @ 00011f60 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  operator_delete(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00011f90 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011fb0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this);
  return;
}



/* Function: func @ 00011fe0 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00012000 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00012010 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -8);
  return;
}



/* Function: func @ 00012040 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
                         *(int *)(*(int *)this + -0xc)) + 0xfa;
}



/* Function: ~DiamondDerived @ 00012060 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00012070 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 000120a0 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 000120b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return;
}



/* Function: ~VirtualBase @ 000120c0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  operator_delete(this);
  return;
}



/* Function: ~RTTIDerivedA @ 000120f0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00012120 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 00012130 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 00012140 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00012170 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: __do_global_ctors_aux @ 00012180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001219a) */
/* WARNING: Removing unreachable block (ram,0x000121b0) */
/* WARNING: Removing unreachable block (ram,0x000121bd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000121cc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 90 */
