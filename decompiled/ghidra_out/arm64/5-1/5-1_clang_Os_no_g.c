/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/5-1/5-1_clang_Os_no_g
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
/* test_cpp_member_func() */

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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 001011b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR__RTTIBase_00111d58;
  plVar2 = operator_new(8);
  *plVar2 = (long)&PTR__RTTIBase_00111d80;
  lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
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



/* Function: test_cpp_oo_features @ 00101278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  undefined4 local_38;
  undefined8 local_34;
  undefined7 uStack_2c;
  undefined1 uStack_25;
  undefined7 uStack_24;
  undefined8 uStack_1d;
  undefined1 local_15;
  
  puts(&DAT_00101680);
  local_15 = 0;
  local_38 = 10;
  uStack_2c = 0;
  local_34 = 0x74736554;
  uStack_1d = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  sVar2 = strlen((char *)((ulong)&local_38 | 4));
  printf(&DAT_00101529,(ulong)((int)sVar2 + 0x125c));
  printf(&DAT_00101547,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
  printf(&DAT_00101563,0x2a);
  printf(&DAT_0010157f,0x47);
  printf(&DAT_0010159b,0x28a);
  printf(&DAT_001015b8,0x16);
  printf(&DAT_001015d4,0x27);
  printf(&DAT_001015f0,0x10);
  printf(&DAT_0010160c,0x55);
  uVar3 = test_cpp_exception();
  printf(&DAT_00101628,uVar3 & 0xffffffff);
  printf(&DAT_00101645,0x2bf);
  uVar3 = test_cpp_rtti();
  iVar1 = printf(&DAT_00101662,uVar3 & 0xffffffff);
  return iVar1;
}



/* Function: main @ 001013a4 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 001013bc */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_max<double> @ 001013c8 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 001013d4 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 001013e8 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 001013f0 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 0010140c */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 0010142c */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101434 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 0010143c */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(double *)(this + (long)iVar1 * 8) = param_1;
    *(int *)(this + 0x50) = iVar1 + 1;
  }
  return;
}



/* Function: get @ 00101458 */

/* Container<double>::get(int) const */

undefined1  [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    uVar1 = *(ulong *)(this + (ulong)(uint)param_1 * 8);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Function: getSize @ 00101474 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 0010147c */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101480 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 00101488 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 0010148c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101490 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: _fini @ 00101498 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
