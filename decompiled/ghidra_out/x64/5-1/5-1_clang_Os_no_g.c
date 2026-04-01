/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_clang_Os_no_g
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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  char local_24 [36];
  
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = operator_new__(0x14);
  lVar2 = 0;
  puVar3 = puVar1;
  do {
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

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001012eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 001012ed */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
  return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 00101311 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_exception @ 00101317 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR__RTTIBase_00103d78;
  plVar2 = operator_new(8);
  *plVar2 = (long)&PTR__RTTIBase_00103da0;
  lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar4 = 0x82;
  if (lVar3 == 0) {
    iVar4 = 0x1e;
  }
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
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  uint uVar1;
  size_t sVar2;
  char local_24 [36];
  
  puts(&DAT_001021d4);
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

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: template_max<int> @ 001015b2 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 001015ba */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 001015bf */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 001015c8 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 001015d0 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 001015e4 */

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



/* Function: getSize @ 001015f6 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001015fa */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00101602 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00101618 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    uVar1 = *(undefined8 *)(this + (ulong)(uint)param_1 * 8);
  }
  return uVar1;
}



/* Function: getSize @ 0010162c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101630 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101636 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 0010163c */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIDerivedB @ 0010163e */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this);
  return;
}



/* Function: getType @ 00101644 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: _fini @ 0010164c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 39 */
