// Decompiled by BinaryAI
// SHA256: 67e796735b89b4870cd1557a2847a12ac5c8011e7939a28ea8d0c1ba5772acab

// Function: _init @ 0x10848
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
void * operator_new(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::printf @ 0x1088c
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10898
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::abort @ 0x108b0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void)
{
  __cxa_end_cleanup();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void)
{
  __gxx_personality_v0();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
void __aeabi_dcmpgt(void)
{
  __aeabi_dcmpgt();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _start @ 0x10994
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x109d8
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x109fc
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10a40
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10a90
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

// Function: test_cpp_member_func @ 0x10afc
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
  undefined local_a;
  undefined local_9;
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

// Function: test_cpp_constructor @ 0x10b64
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)();
  return;
}

// Function: test_cpp_virtual_func @ 0x10b8c
undefined4 test_cpp_virtual_func(void)
{
  return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10b94
undefined4 test_cpp_multiple_inheritance(void)
{
  return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10b9c
undefined4 test_cpp_diamond_inheritance(void)
{
  return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10ba8
undefined4 test_cpp_operator_overload(void)
{
  return 0x16;
}

// Function: test_cpp_template_func @ 0x10bb0
undefined4 test_cpp_template_func(void)
{
  return 0x27;
}

// Function: test_cpp_template_class @ 0x10bb8
undefined4 test_cpp_template_class(void)
{
  return 0x10;
}

// Function: test_cpp_lambda @ 0x10bc0
undefined4 test_cpp_lambda(void)
{
  return 0x55;
}

// Function: test_cpp_exception @ 0x10bc8
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x10c98
undefined4 test_cpp_smart_ptr(void)
{
  return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10ca4
int test_cpp_rtti(void)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  puVar1 = (undefined4 *)operator_new(4);
  *puVar1 = &PTR__RTTIBase_00021ed8;
  piVar2 = (int *)operator_new(4);
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

// Function: test_cpp_oo_features @ 0x10d70
void test_cpp_oo_features(void)
{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined local_1a;
  undefined local_19;
  puts(&DAT_0001134c);
  local_38 = 0x74736554;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_1a = 0;
  local_19 = 0;
  sVar1 = strlen((char *)&local_38);
  printf(&DAT_000111f5,sVar1 + 0x125c);
  printf(&DAT_00011213,LifecycleClass::instance_count * 0x3e9 + 0x15);
  printf(&DAT_0001122f,0x2a);
  printf(&DAT_0001124b,0x47);
  printf(&DAT_00011267,0x28a);
  printf(&DAT_00011284,0x16);
  printf(&DAT_000112a0,0x27);
  printf(&DAT_000112bc,0x10);
  printf(&DAT_000112d8,0x55);
  uVar2 = test_cpp_exception();
  printf(&DAT_000112f4,uVar2);
  printf(&DAT_00011311,0x2bf);
  puVar3 = (undefined4 *)operator_new(4);
  *puVar3 = &PTR__RTTIBase_00021ed8;
  piVar4 = (int *)operator_new(4);
  *piVar4 = (int)&PTR__RTTIBase_00021eec;
  iVar5 = __dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  iVar6 = __dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  operator_delete(puVar3);
  (**(code **)(*piVar4 + 4))(piVar4);
  iVar7 = 0x82;
  if (iVar5 == 0) {
    iVar7 = 0x1e;
  }
  if (iVar6 != 0) {
    iVar7 = iVar7 + 200;
  }
  printf(&DAT_0001132e,iVar7 + 0xe);
  return;
}

// Function: main @ 0x10fac
undefined4 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: template_max<int> @ 0x10fc0
int template_max_int_(int param_1,int param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_max<double> @ 0x10fcc
double template_max_double_(double param_1,double param_2)
{
  double extraout_d0;
  __aeabi_dcmpgt();
  return extraout_d0;
}

// Function: template_swap<int> @ 0x11000
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x11014
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x11020
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 < 10) {
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x11038
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 uVar1;
  uVar1 = 0;
  if (param_1 < 0) {
    return uVar1;
  }
  if (param_1 < *(int *)(this + 0x28)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}

// Function: Container<int>::getSize @ 0x11058
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11060
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x1106c
void Container<double>::push(double param_1)
{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar2;
  iVar2 = *(int *)(in_r0 + 0x50);
  if (9 < iVar2) {
    return;
  }
  puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
  *puVar1 = in_r2;
  puVar1[1] = in_r3;
  *(int *)(in_r0 + 0x50) = iVar2 + 1;
  return;
}

// Function: Container<double>::get @ 0x11090
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  uVar2 = 0;
  uVar1 = 0;
  if (-1 < param_1) {
    if (param_1 < *(int *)(this + 0x50)) {
      uVar1 = *(undefined4 *)(this + param_1 * 8);
      uVar2 = *(undefined4 *)((int)(this + param_1 * 8) + 4);
    }
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}

// Function: Container<double>::getSize @ 0x110bc
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110c4
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x110c8
undefined4 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110d0
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110d4
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x110d8
undefined4 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: _fini @ 0x110e0
void _fini(void)
{
  return;
}

