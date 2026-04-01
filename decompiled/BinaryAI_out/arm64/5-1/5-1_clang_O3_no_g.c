// Decompiled by BinaryAI
// SHA256: 6114fd641e1e4a9548f1fff963f9e0542d4d06f047f847c2767a5f3429a836ed

// Function: _init @ 0x100d48
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x100d90
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
void __gxx_personality_v0(void)
{
  __gxx_personality_v0();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::printf @ 0x100ea0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _start @ 0x100f00
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100f34
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100f50
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100f80
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00100fbc @ 0x100fbc
void FUN_00100fbc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
  size_t sVar1;
  undefined4 local_38;
  undefined8 local_34;
  undefined7 uStack_2c;
  undefined uStack_25;
  undefined7 uStack_24;
  undefined8 uStack_1d;
  undefined local_15;
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

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)(param_1,param_2);
  return;
}

// Function: test_cpp_virtual_func @ 0x101088
undefined8 test_cpp_virtual_func(void)
{
  return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
undefined8 test_cpp_multiple_inheritance(void)
{
  return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
undefined8 test_cpp_diamond_inheritance(void)
{
  return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
undefined8 test_cpp_operator_overload(void)
{
  return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
undefined8 test_cpp_template_func(void)
{
  return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
undefined8 test_cpp_template_class(void)
{
  return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
undefined8 test_cpp_lambda(void)
{
  return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x1011bc
undefined8 test_cpp_smart_ptr(void)
{
  return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011c4
int test_cpp_rtti(void)
{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR__RTTIBase_00111d58;
  plVar2 = (long *)operator_new(8);
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

// Function: test_cpp_oo_features @ 0x101284
int test_cpp_oo_features(void)
{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_58;
  undefined8 local_54;
  undefined7 uStack_4c;
  undefined uStack_45;
  undefined7 uStack_44;
  undefined8 uStack_3d;
  undefined local_35;
  puts(&DAT_00101734);
  local_35 = 0;
  local_58 = 10;
  uStack_4c = 0;
  local_54 = 0x74736554;
  uStack_3d = 0;
  uStack_45 = 0;
  uStack_44 = 0;
  sVar2 = strlen((char *)((ulong)&local_58 | 4));
  printf(&DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
  printf(&DAT_001015fb,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
  printf(&DAT_00101617,0x2a);
  printf(&DAT_00101633,0x47);
  printf(&DAT_0010164f,0x28a);
  printf(&DAT_0010166c,0x16);
  printf(&DAT_00101688,0x27);
  printf(&DAT_001016a4,0x10);
  printf(&DAT_001016c0,0x55);
  uVar3 = test_cpp_exception();
  printf(&DAT_001016dc,uVar3 & 0xffffffff);
  printf(&DAT_001016f9,0x2bf);
  puVar4 = (undefined8 *)operator_new(8);
  *puVar4 = &PTR__RTTIBase_00111d58;
  plVar5 = (long *)operator_new(8);
  *plVar5 = (long)&PTR__RTTIBase_00111d80;
  lVar6 = __dynamic_cast(puVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar1 = 0x1e;
  if (lVar6 != 0) {
    iVar1 = 0x82;
  }
  lVar6 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar6 != 0) {
    iVar1 = iVar1 + 200;
  }
  operator_delete(puVar4);
  (**(code **)(*plVar5 + 8))(plVar5);
  iVar1 = printf(&DAT_00101716,(ulong)(iVar1 + 0xe));
  return iVar1;
}

// Function: main @ 0x101458
undefined8 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: template_max<int> @ 0x101470
int template_max_int_(int param_1,int param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_max<double> @ 0x10147c
double template_max_double_(double param_1,double param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_swap<int> @ 0x101488
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x10149c
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x1014a4
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x1014c0
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
    uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
  }
  return uVar1;
}

// Function: Container<int>::getSize @ 0x1014e0
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1014e8
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x1014f0
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 10) {
    *(double *)(this + (long)iVar1 * 8) = param_1;
    *(int *)(this + 0x50) = iVar1 + 1;
  }
  return;
}

// Function: Container<double>::get @ 0x10150c
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined8 uVar1;
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    uVar1 = *(undefined8 *)(this + (ulong)(uint)param_1 * 8);
  }
  return uVar1;
}

// Function: Container<double>::getSize @ 0x101528
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101530
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x101534
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10153c
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101540
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x101544
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
  return;
}

