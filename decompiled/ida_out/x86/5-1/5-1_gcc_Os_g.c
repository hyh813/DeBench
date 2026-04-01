/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_gcc_Os_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
  if ( &_gmon_start__ )
    ((void (*)(void))_gmon_start__)();
  frame_dummy();
  return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm { jmp     dword ptr [ebx+8] }
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
  sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
  sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
  sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
  sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
  sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
  sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
  sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
  sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
  sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
int __usercall sub_1180@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 96))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x12D0 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x13C2 */
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13D5 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x1420 */
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, 0, 0, a2, &v3);
  __halt();
}


/* Function: sub_144C @ 0x144C */
void sub_144C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1450 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1460 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x14A0 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x14F0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1180((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x1580 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1589 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x158D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1591 */
__int64 test_cpp_member_func()
{
  __int64 result; // rax
  SimpleClass obj; // [esp+0h] [ebp-30h] BYREF
  unsigned int v2; // [esp+24h] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  strncpy(obj.name, "Test", 0x1Fu);
  obj.name[31] = 0;
  LODWORD(result) = strlen(obj.name) + 4700;
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x15F1 */
int test_cpp_constructor()
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x160D */
int __cdecl call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr_Base)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1621 */
__int64 __usercall test_cpp_virtual_func@<edx:eax>(int a1@<ebp>)
{
  int v1; // ebx
  __int64 result; // rax
  Base base; // [esp+0h] [ebp-1Ch] BYREF
  Derived derived; // [esp+4h] [ebp-18h] BYREF
  unsigned int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+18h] [ebp-4h]

  v6 = a1;
  v5 = __readgsdword(0x14u);
  derived._vptr_Base = (int (**)(...))&off_5C70;
  base._vptr_Base = (int (**)(...))&off_5C58;
  derived.multiplier = 3;
  v1 = call_virtual_func(&base, 5);
  LODWORD(result) = v1 + call_virtual_func(&derived, 5) + 21;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x168F */
int test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1699 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x16A3 */
__int64 test_cpp_template_func()
{
  int v0; // ebx
  __int64 result; // rax
  double r2; // [esp+8h] [ebp-28h]
  int a; // [esp+1Ch] [ebp-14h] BYREF
  int b; // [esp+20h] [ebp-10h] BYREF
  unsigned int v5; // [esp+24h] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  v0 = template_max<int>(3, 7);
  r2 = template_max<double>(2.5, 1.5);
  a = 10;
  b = 20;
  template_swap<int>(&a, &b);
  LODWORD(result) = b + a + v0 + (int)r2;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1735 */
__int64 test_cpp_template_class()
{
  int v0; // eax
  __int64 result; // rax
  int r2[10]; // [esp+8h] [ebp-38h] BYREF
  int v3; // [esp+30h] [ebp-10h]
  unsigned int v4; // [esp+34h] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  v3 = 1;
  r2[0] = 10;
  Container<int>::push((Container<int> *const)r2, 20);
  Container<int>::push((Container<int> *const)r2, 30);
  v0 = 0;
  if ( v3 > 0 )
    v0 = r2[0];
  LODWORD(result) = v3 + v0 + 3;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z15test_cpp_lambdav @ 0x1797 */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x17A1 */
RTTIBase *test_cpp_rtti()
{
  const char *v0; // edi
  int v2; // [esp-Ch] [ebp-34h]
  int v3; // [esp-8h] [ebp-30h]
  int v4; // [esp-4h] [ebp-2Ch]
  int (**vptr_RTTIBase)(...); // [esp+4h] [ebp-24h]
  RTTIBase *obj2; // [esp+8h] [ebp-20h]
  RTTIBase *obj1; // [esp+Ch] [ebp-1Ch]

  obj1 = (RTTIBase *)operator new(4u);
  obj1->_vptr_RTTIBase = (int (**)(...))off_5DD0;
  obj2 = (RTTIBase *)operator new(4u);
  obj2->_vptr_RTTIBase = (int (**)(...))off_5DE4;
  vptr_RTTIBase = obj1->_vptr_RTTIBase;
  v0 = *(const char **)(*((_DWORD *)obj1->_vptr_RTTIBase - 1) + 4);
  if ( v0 != "12RTTIDerivedA" && *v0 != 42 )
    strcmp(v0, "12RTTIDerivedA");
  __dynamic_cast(
    obj1,
    (const struct __class_type_info *)&`typeinfo for'RTTIBase,
    (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
    0);
  __dynamic_cast(
    obj2,
    (const struct __class_type_info *)&`typeinfo for'RTTIBase,
    (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
    0);
  if ( *v0 == 42 )
    ++v0;
  strlen(v0);
  vptr_RTTIBase[1](obj1, v2, v3, v4);
  (*((void (**)(void))obj2->_vptr_RTTIBase + 1))();
  return obj2;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18C9 */
int test_cpp_smart_ptr()
{
  int *v0; // eax
  _DWORD *v1; // eax
  std::unique_ptr<int> ptr2; // [esp+30h] [ebp-2Ch] BYREF
  std::unique_ptr<int []> arr; // [esp+38h] [ebp-24h] BYREF

  arr._M_t._M_t._M_head_impl = (int *)__readgsdword(0x14u);
  v0 = (int *)operator new(4u);
  *(_DWORD *)&ptr2._M_t._M_t._M_head_impl.gap0 = 0;
  *v0 = 200;
  ptr2._M_t._M_t._M_head_impl = v0;
  v1 = (_DWORD *)operator new[](0x14u);
  *v1 = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 4;
  v1[4] = 5;
  *(_DWORD *)&arr._M_t._M_t._M_head_impl.gap0 = v1;
  std::unique_ptr<int []>::~unique_ptr(&arr);
  std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int>::~unique_ptr(&ptr2);
  return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x199D */
__int64 test_cpp_diamond_inheritance()
{
  int v0; // ebx
  __int64 result; // rax
  int v2; // [esp+1Ch] [ebp-40h]
  DiamondDerived obj; // [esp+24h] [ebp-38h] BYREF

  *(&obj.dataB + 1) = __readgsdword(0x14u);
  obj._vptr_MiddleA = (int (**)(...))&off_5D88;
  obj._vptr_MiddleB = (int (**)(...))&off_5DBC;
  *(&obj.dataA + 1) = (int)&off_5DA0;
  obj.dataB = 50;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  obj.dataB = 100;
  v2 = v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  DiamondDerived::~DiamondDerived(&obj);
  LODWORD(result) = v2;
  HIDWORD(result) = *(&obj.dataB + 1) - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1A22 */
// bad sp value at call has been detected, the output may be wrong!
void __noreturn test_cpp_oo_features()
{
  int v0; // eax
  int v1; // eax
  __int64 v2; // rax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  puts(asc_301A);
  v0 = test_cpp_member_func();
  __printf_chk(1, &unk_303E, v0);
  v1 = test_cpp_constructor();
  __printf_chk(1, &unk_305C, v1);
  v2 = test_cpp_virtual_func((int)&savedregs);
  savedregs = HIDWORD(v2);
  __printf_chk(1, &unk_3078, v2);
  v3 = test_cpp_multiple_inheritance();
  __printf_chk(1, &unk_3094, v3);
  v4 = test_cpp_diamond_inheritance();
  __printf_chk(1, &unk_30B0, v4);
  v5 = test_cpp_operator_overload();
  __printf_chk(1, &unk_30CD, v5);
  v6 = test_cpp_template_func();
  savedregs = v7;
  __printf_chk(1, &unk_30E9, v6);
  v8 = test_cpp_template_class();
  __printf_chk(1, &unk_3105, v8);
  v9 = test_cpp_lambda();
  __printf_chk(1, &unk_3121, v9);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1B66 */
int __cdecl Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1B74 */
const char *__cdecl Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B8A */
void __cdecl Base::~Base(Base *const this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B90 */
int __cdecl Derived::virtual_func(Derived *const this, int x)
{
  return this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1BA4 */
const char *__cdecl Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1BBA */
int __cdecl MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1BC4 */
int __cdecl MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1BCE */
int __cdecl `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1BD8 */
int __cdecl VirtualBase::func(VirtualBase *const this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x1BE2 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *const this)
{
  ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1BE8 */
int __cdecl MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1C02 */
int __cdecl `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1C16 */
int __cdecl MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1C30 */
int __cdecl `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *((_DWORD *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C44 */
int __cdecl DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C5E */
int __cdecl `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C71 */
int __cdecl `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x1C7C */
void __cdecl MiddleA::~MiddleA(MiddleA *const this)
{
  this->_vptr_MiddleA = (int (**)(...))&off_5C94;
  *(&this->dataA + 1) = (int)&off_5CB0;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1CA1 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  _DWORD *v1; // eax

  v1 = (int (***)(...))((char *)&this->_vptr_MiddleA + *((_DWORD *)this->_vptr_MiddleA - 4));
  *v1 = &off_5C94;
  v1[2] = &off_5CB0;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1CCC */
void __cdecl MiddleB::~MiddleB(MiddleB *const this)
{
  this->_vptr_MiddleB = (int (**)(...))&off_5CD0;
  *(&this->dataB + 1) = (int)&off_5CEC;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1CF1 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  _DWORD *v1; // eax

  v1 = (int (***)(...))((char *)&this->_vptr_MiddleB + *((_DWORD *)this->_vptr_MiddleB - 4));
  *v1 = &off_5CD0;
  v1[2] = &off_5CEC;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1D1C */
int __cdecl RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1D26 */
int __cdecl RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1D30 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1D36 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1D3C */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D41 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D46 */
void __cdecl Derived::~Derived(Derived *const this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D4C */
void __cdecl Base::~Base(Base *const this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D74 */
void __cdecl Derived::~Derived(Derived *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D9C */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DC4 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x1DD0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DF8 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E20 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E48 */
void __cdecl MiddleA::~MiddleA(MiddleA *const this)
{
  this->_vptr_MiddleA = (int (**)(...))&off_5C94;
  *(&this->dataA + 1) = (int)&off_5CB0;
  operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1E7F */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x1E92 */
void __cdecl MiddleB::~MiddleB(MiddleB *const this)
{
  this->_vptr_MiddleB = (int (**)(...))&off_5CD0;
  *(&this->dataB + 1) = (int)&off_5CEC;
  operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1EC9 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *((_DWORD *)this->_vptr_MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x1EDC */
void __cdecl MiddleA::~MiddleA(MiddleA *const this, const int __in_chrg, const void **const __vtt_parm)
{
  int (**v3)(...); // eax
  int (**v4)(...); // ecx
  int v5; // eax

  v3 = (int (**)(...))&off_5C94;
  if ( !__in_chrg )
    v3 = (int (**)(...))*__vtt_parm;
  this->_vptr_MiddleA = v3;
  if ( __in_chrg )
  {
    v4 = (int (**)(...))&off_5CB0;
    v5 = 8;
  }
  else
  {
    v4 = (int (**)(...))__vtt_parm[1];
    v5 = (int)*(v3 - 3);
  }
  *(int (***)(...))((char *)&this->_vptr_MiddleA + v5) = v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x1F26 */
void __cdecl MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  MiddleA::~MiddleA(this, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x1F42 */
void __cdecl MiddleB::~MiddleB(MiddleB *const this, const int __in_chrg, const void **const __vtt_parm)
{
  int (**v3)(...); // eax
  int (**v4)(...); // ecx
  int v5; // eax

  v3 = (int (**)(...))&off_5CD0;
  if ( !__in_chrg )
    v3 = (int (**)(...))*__vtt_parm;
  this->_vptr_MiddleB = v3;
  if ( __in_chrg )
  {
    v4 = (int (**)(...))&off_5CEC;
    v5 = 8;
  }
  else
  {
    v4 = (int (**)(...))__vtt_parm[1];
    v5 = (int)*(v3 - 3);
  }
  *(int (***)(...))((char *)&this->_vptr_MiddleB + v5) = v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x1F8C */
void __cdecl MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  MiddleB::~MiddleB(this, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1FA8 */
int __cdecl template_max<int>(int a, int b)
{
  int result; // eax

  result = a;
  if ( a < b )
    return b;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1FBC */
double __cdecl template_max<double>(double a, double b)
{
  long double result; // fst7

  result = b;
  if ( a > (long double)b )
    return a;
  return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1FD5 */
void __cdecl template_swap<int>(int *a, int *b)
{
  int v2; // ecx

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1FEE */
void __cdecl Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2002 */
void __cdecl Container<int>::push(Container<int> *const this, int value)
{
  int size; // edx

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2022 */
int __cdecl Container<int>::get(const Container<int> *const this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2040 */
int __cdecl Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2050 */
void __cdecl Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2064 */
void __cdecl Container<double>::push(Container<double> *const this, double value)
{
  int size; // edx

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2088 */
double __cdecl Container<double>::get(const Container<double> *const this, int idx)
{
  long double result; // fst7

  result = 0.0;
  if ( idx >= 0 && idx < this->size )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x20A8 */
int __cdecl Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x20B8 */
void __cdecl std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
  if ( *(_DWORD *)&this->_M_t._M_t._M_head_impl.gap0 )
    operator delete(*(void **)&this->_M_t._M_t._M_head_impl.gap0, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x20E8 */
void __cdecl std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
  if ( *(_DWORD *)&this->_M_t._M_t._M_head_impl.gap0 )
    operator delete[](*(void **)&this->_M_t._M_t._M_head_impl.gap0);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2116 */
void __cdecl DiamondDerived::~DiamondDerived(
        DiamondDerived *const this,
        const int __in_chrg,
        const void **const __vtt_parm)
{
  int (**v3)(...); // edx
  int (**v4)(...); // ecx
  int v5; // edx
  _DWORD (__cdecl **v6)(DiamondDerived *__hidden); // edx
  const void **v7; // edx
  const void **v8; // eax

  v3 = (int (**)(...))&off_5D88;
  if ( !__in_chrg )
    v3 = (int (**)(...))*__vtt_parm;
  this->_vptr_MiddleA = v3;
  if ( __in_chrg )
  {
    v4 = (int (**)(...))&off_5DBC;
    v5 = 16;
  }
  else
  {
    v4 = (int (**)(...))__vtt_parm[5];
    v5 = (int)*(v3 - 3);
  }
  *(int (***)(...))((char *)&this->_vptr_MiddleA + v5) = v4;
  v6 = &off_5DA0;
  if ( !__in_chrg )
    v6 = (_DWORD (__cdecl **)(DiamondDerived *__hidden))__vtt_parm[6];
  *(&this->dataA + 1) = (int)v6;
  v7 = (const void **)off_5D6C;
  if ( !__in_chrg )
    v7 = __vtt_parm + 3;
  MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 1), v7);
  v8 = (const void **)off_5D64;
  if ( !__in_chrg )
    v8 = __vtt_parm + 1;
  MiddleA::~MiddleA(this, v8);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x21B0 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x21CB */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x21D6 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x21EA */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x221E */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2229 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x223C */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this, const void **const __vtt_parm)
{
  DiamondDerived::~DiamondDerived(this, 0, __vtt_parm);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2258 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x225C */
void _x86_get_pc_thunk_cx()
{
  ;
}


/* Function: __x86.get_pc_thunk.si @ 0x2260 */
void _x86_get_pc_thunk_si()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x2270 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2290 */
void (*_do_global_ctors_aux())(void)
{
  void (*result)(void); // eax
  int *v1; // ebx

  result = (void (*)(void))_CTOR_LIST__;
  if ( _CTOR_LIST__ != -1 )
  {
    v1 = &_CTOR_LIST__;
    do
    {
      result();
      result = (void (*)(void))*--v1;
    }
    while ( result != (void (*)(void))-1 );
  }
  return result;
}


/* Function: .term_proc @ 0x22DC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x602C */

/* FAILED to decompile: _Znwj @ 0x6034 */

/* FAILED to decompile: __cxa_finalize @ 0x6038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x603C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6040 */

/* FAILED to decompile: strlen @ 0x6044 */

/* FAILED to decompile: __cxa_atexit @ 0x6048 */

/* FAILED to decompile: _ZdlPvj @ 0x604C */

/* FAILED to decompile: strcmp @ 0x6054 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: _Znaj @ 0x605C */

/* FAILED to decompile: strncpy @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6064 */

/* FAILED to decompile: __dynamic_cast @ 0x6068 */

/* FAILED to decompile: _ZdaPv @ 0x606C */

/* FAILED to decompile: __cxa_rethrow @ 0x6074 */

/* FAILED to decompile: puts @ 0x6078 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x607C */

/* FAILED to decompile: __cxa_end_catch @ 0x6080 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6084 */

/* FAILED to decompile: __cxa_throw @ 0x6088 */

/* FAILED to decompile: _Unwind_Resume @ 0x6090 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6094 */

/* Total functions decompiled: 118, failed: 23 */
