/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_gcc_O3_no_g
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



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
  __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: main @ 00101310 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00101360 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101390 */

/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001013c0 */

/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101400 */

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



/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  size_t sVar1;
  long in_FS_OFFSET;
  char local_34 [36];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34[0x1e] = 0;
  builtin_strncpy(local_34,"Test",5);
  local_34[5] = '\0';
  local_34[6] = '\0';
  local_34[7] = '\0';
  local_34[8] = '\0';
  local_34[9] = '\0';
  local_34[10] = '\0';
  local_34[0xb] = '\0';
  local_34[0xc] = '\0';
  local_34[0xd] = '\0';
  local_34[0xe] = '\0';
  local_34[0xf] = '\0';
  local_34[0x10] = '\0';
  local_34[0x11] = '\0';
  local_34[0x12] = '\0';
  local_34[0x13] = '\0';
  local_34[0x14] = '\0';
  local_34[0x15] = '\0';
  local_34[0x16] = '\0';
  local_34[0x17] = '\0';
  local_34[0x18] = '\0';
  local_34[0x19] = '\0';
  local_34[0x1a] = '\0';
  local_34[0x1b] = '\0';
  local_34[0x1c] = '\0';
  local_34[0x1d] = '\0';
  local_34[0x1f] = 0;
  sVar1 = strlen(local_34);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)sVar1 + 0x125c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)();
  return;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = template_max<int>(3,7);
  dVar2 = template_max<double>(2.5,1.5);
  local_18 = 10;
  local_14 = 0x14;
  template_swap<int>(&local_18,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)dVar2 + iVar1 + local_18 + local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x001016b2) */
/* WARNING: Removing unreachable block (ram,0x001016b7) */
/* WARNING: Removing unreachable block (ram,0x001016be) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  long lVar1;
  char *__s1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  
  plVar3 = operator_new(8);
  *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
  plVar4 = operator_new(8);
  lVar1 = *plVar3;
  *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
  __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
  if (__s1 == "12RTTIDerivedA") {
    iVar2 = 0x1e;
  }
  else if (*__s1 == '*') {
    iVar2 = 0x14;
  }
  else {
    iVar2 = strcmp(__s1,"12RTTIDerivedA");
    iVar2 = (-(uint)(iVar2 == 0) & 10) + 0x14;
  }
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar2 + 100;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar2 + 200;
  }
  sVar6 = strlen(__s1 + (*__s1 == '*'));
  (**(code **)(lVar1 + 8))(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  double dVar4;
  int local_40;
  int local_3c [2];
  char local_34 [36];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00102018);
  builtin_strncpy(local_34,"Test",5);
  local_34[5] = '\0';
  local_34[6] = '\0';
  local_34[7] = '\0';
  local_34[8] = '\0';
  local_34[9] = '\0';
  local_34[10] = '\0';
  local_34[0xb] = '\0';
  local_34[0xc] = '\0';
  local_34[0xd] = '\0';
  local_34[0xe] = '\0';
  local_34[0xf] = '\0';
  local_34[0x10] = '\0';
  local_34[0x11] = '\0';
  local_34[0x12] = '\0';
  local_34[0x13] = '\0';
  local_34[0x14] = '\0';
  local_34[0x15] = '\0';
  local_34[0x16] = '\0';
  local_34[0x17] = '\0';
  local_34[0x18] = '\0';
  local_34[0x19] = '\0';
  local_34[0x1a] = '\0';
  local_34[0x1b] = '\0';
  local_34[0x1c] = '\0';
  local_34[0x1d] = '\0';
  local_34[0x1e] = 0;
  local_34[0x1f] = 0;
  sVar3 = strlen(local_34);
  __printf_chk(1,&DAT_0010203c,(int)sVar3 + 0x125c);
  __printf_chk(1,&DAT_0010205a,LifecycleClass::instance_count * 0x3e9 + 0x15);
  __printf_chk(1,&DAT_00102076,0x2a);
  __printf_chk(1,&DAT_00102092,0x47);
  __printf_chk(1,&DAT_001020ae,0x28a);
  __printf_chk(1,&DAT_001020cb,0x16);
  iVar1 = template_max<int>(3,7);
  dVar4 = template_max<double>(2.5,1.5);
  local_40 = 10;
  local_3c[0] = 0x14;
  template_swap<int>(&local_40,local_3c);
  __printf_chk(1,&DAT_001020e7,(int)dVar4 + iVar1 + local_40 + local_3c[0]);
  __printf_chk(1,&DAT_00102103,0x10);
  __printf_chk(1,&DAT_0010211f,0x55);
  uVar2 = test_cpp_exception();
  __printf_chk(1,&DAT_0010213b,uVar2);
  __printf_chk(1,&DAT_00102158,0x2bf);
  test_cpp_rtti();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_00102175);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: virtual_func @ 00101990 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 001019a0 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_00102004;
}



/* Function: ~Base @ 001019b0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: virtual_func @ 001019c0 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 8) * param_1;
}



/* Function: getName @ 001019d0 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 001019e0 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 001019f0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00101a00 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00101a10 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a30 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a50 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101a70 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 00101a90 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ab0 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) +
                 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ad0 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101af0 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: getType @ 00101b00 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00101b10 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00101b20 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00101b30 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00101b40 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00101b50 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00101b60 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00101b70 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~Derived @ 00101b80 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  return;
}



/* Function: ~Base @ 00101b90 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00101ba0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00101bb0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00101bc0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(this + -0x10,0x20);
  return;
}



/* Function: ~RTTIDerivedB @ 00101be0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 00101bf0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00101c00 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00101c10 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
  return;
}



/* Function: ~DiamondDerived @ 00101c30 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(this + -0x10,0x30);
  return;
}



/* Function: template_max<int> @ 00101c50 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00101c60 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 00101c70 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00101c80 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00101c90 */

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



/* Function: get @ 00101cb0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    return *(undefined4 *)(this + (long)param_1 * 4);
  }
  return 0;
}



/* Function: getSize @ 00101cd0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101ce0 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00101cf0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00101d10 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    return *(undefined8 *)(this + (long)param_1 * 8);
  }
  return 0;
}



/* Function: getSize @ 00101d40 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: _fini @ 00101d48 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 68 */
