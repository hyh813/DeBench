/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_clang_Os_no_g
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
/* test_cpp_member_func() */

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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

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



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = operator_new(4);
  *puVar1 = &PTR__RTTIBase_00021ed8;
  piVar2 = operator_new(4);
  *piVar2 = (int)&PTR__RTTIBase_00021eec;
  iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
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



/* Function: test_cpp_oo_features @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  size_t sVar1;
  undefined4 uVar2;
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
  
  puts(&DAT_00011294);
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
  printf(&DAT_0001113d,sVar1 + 0x125c);
  printf(&DAT_0001115b,LifecycleClass::instance_count * 0x3e9 + 0x15);
  printf(&DAT_00011177,0x2a);
  printf(&DAT_00011193,0x47);
  printf(&DAT_000111af,0x28a);
  printf(&DAT_000111cc,0x16);
  printf(&DAT_000111e8,0x27);
  printf(&DAT_00011204,0x10);
  printf(&DAT_00011220,0x55);
  uVar2 = test_cpp_exception();
  printf(&DAT_0001123c,uVar2);
  printf(&DAT_00011259,0x2bf);
  uVar2 = test_cpp_rtti();
  printf(&DAT_00011276,uVar2);
  return;
}



/* Function: main @ 00010ef4 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 00010f08 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
  return param_1;
}



/* Function: template_swap<int> @ 00010f48 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00010f5c */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00010f68 */

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



/* Function: get @ 00010f80 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 < *(int *)(this + 0x28)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 00010fa0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00010fa8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00010fb4 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = *(int *)(in_r0 + 0x50);
  if (9 < iVar2) {
    return SUB84(param_1,0);
  }
  puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
  *puVar1 = in_r2;
  puVar1[1] = in_r3;
  *(int *)(in_r0 + 0x50) = iVar2 + 1;
  return SUB84(param_1,0);
}



/* Function: get @ 00010fd8 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  if (-1 < param_1) {
    if (param_1 < *(int *)(this + 0x50)) {
      uVar1 = *(undefined4 *)(this + param_1 * 8);
      uVar2 = *(undefined4 *)(this + param_1 * 8 + 4);
    }
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Function: getSize @ 00011004 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 0001100c */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00011010 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 00011018 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return this;
}



/* Function: ~RTTIDerivedB @ 0001101c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00011020 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: _fini @ 00011028 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 39 */
