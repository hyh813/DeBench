// Decompiled by BinaryAI
// SHA256: 5d02349844d25a496f5e07dea4ea0b2c41b31abb19c209e1a5560e148b73bbd3

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::printf @ 0x101030
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101040
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x101050
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101060
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101070
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.delete @ 0x101080
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x101090
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010a0
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010b0
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010c0
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::puts @ 0x1010d0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x1010e0
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1010f0
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101100
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101110
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _start @ 0x101150
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x101180
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1011b0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1011f0
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

// Function: test_cpp_member_func @ 0x101240
int test_cpp_member_func(void)
{
  size_t sVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined3 uStack_14;
  undefined4 uStack_11;
  undefined4 uStack_d;
  undefined4 uStack_9;
  undefined local_5;
  uStack_14 = 0;
  uStack_11 = 0;
  uStack_d = 0;
  uStack_9 = 0;
  local_24 = 0x74736554;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_5 = 0;
  sVar1 = strlen((char *)&local_24);
  return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101280
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)();
  return;
}

// Function: test_cpp_virtual_func @ 0x1012b0
undefined8 test_cpp_virtual_func(void)
{
  return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012c0
undefined8 test_cpp_multiple_inheritance(void)
{
  return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012d0
undefined8 test_cpp_diamond_inheritance(void)
{
  return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012e0
undefined8 test_cpp_operator_overload(void)
{
  return 0x16;
}

// Function: test_cpp_template_func @ 0x1012f0
undefined8 test_cpp_template_func(void)
{
  return 0x27;
}

// Function: test_cpp_template_class @ 0x101300
undefined8 test_cpp_template_class(void)
{
  return 0x10;
}

// Function: test_cpp_lambda @ 0x101310
undefined8 test_cpp_lambda(void)
{
  return 0x55;
}

// Function: test_cpp_exception @ 0x101320
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x1013e0
undefined8 test_cpp_smart_ptr(void)
{
  return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013f0
int test_cpp_rtti(void)
{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = &PTR__RTTIBase_00103d78;
  plVar3 = (long *)operator_new(8);
  *plVar3 = (long)&PTR__RTTIBase_00103da0;
  lVar4 = __dynamic_cast(puVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar1 = 0x82;
  if (lVar4 == 0) {
    iVar1 = 0x1e;
  }
  lVar4 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar5 = iVar1 + 200;
  if (lVar4 == 0) {
    iVar5 = iVar1;
  }
  operator_delete(puVar2);
  (**(code **)(*plVar3 + 8))(plVar3);
  return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined3 uStack_3c;
  undefined4 uStack_39;
  undefined4 uStack_35;
  undefined4 uStack_31;
  undefined local_2d;
  puts(&DAT_001021d4);
  uStack_3c = 0;
  uStack_39 = 0;
  uStack_35 = 0;
  uStack_31 = 0;
  local_4c = 0x74736554;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_2d = 0;
  sVar3 = strlen((char *)&local_4c);
  printf(&DAT_0010207d,(ulong)((int)sVar3 + 0x125c));
  printf(&DAT_0010209b,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
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
  puVar4 = (undefined8 *)operator_new(8);
  *puVar4 = &PTR__RTTIBase_00103d78;
  plVar5 = (long *)operator_new(8);
  *plVar5 = (long)&PTR__RTTIBase_00103da0;
  lVar6 = __dynamic_cast(puVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar2 = 0x82;
  if (lVar6 == 0) {
    iVar2 = 0x1e;
  }
  lVar6 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  iVar7 = iVar2 + 200;
  if (lVar6 == 0) {
    iVar7 = iVar2;
  }
  operator_delete(puVar4);
  (**(code **)(*plVar5 + 8))(plVar5);
  printf(&DAT_001021b6,(ulong)(iVar7 + 0xe));
  return;
}

// Function: main @ 0x101680
undefined8 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: template_max<int> @ 0x101690
int template_max_int_(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: template_max<double> @ 0x1016a0
double template_max_double_(double param_1,double param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_swap<int> @ 0x1016b0
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x1016c0
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x1016d0
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x28);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x1016f0
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
  }
  return uVar1;
}

// Function: Container<int>::getSize @ 0x101710
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101720
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x101730
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x50);
  if ((long)iVar1 < 10) {
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}

// Function: Container<double>::get @ 0x101750
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined8 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
    uVar1 = *(undefined8 *)(this + (ulong)(uint)param_1 * 8);
  }
  return uVar1;
}

// Function: Container<double>::getSize @ 0x101770
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101780
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x101790
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1017a0
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1017b0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x1017c0
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: _fini @ 0x1017c8
void _fini(void)
{
  return;
}

