/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_gcc_Os_no_g
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
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x13C2 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
  return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13D5 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
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
__int64 test_cpp_member_func(void)
{
  __int64 result; // rax
  char dest[32]; // [esp+0h] [ebp-2Ch] BYREF
  unsigned int v2; // [esp+20h] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  strncpy(dest, "Test", 0x1Fu);
  dest[31] = 0;
  LODWORD(result) = strlen(dest) + 4700;
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x15F1 */
int test_cpp_constructor(void)
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x160D */
int __cdecl call_virtual_func(int (***a1)(void), int a2)
{
  return (**a1)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1621 */
// bad sp value at call has been detected, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
__int64 test_cpp_virtual_func(void)
{
  int v0; // ebx
  __int64 result; // rax
  int (**v2)(void); // [esp-20h] [ebp-20h] BYREF
  int (**v3[2])(void); // [esp-1Ch] [ebp-1Ch] BYREF
  unsigned int v4; // [esp-14h] [ebp-14h]

  v4 = __readgsdword(0x14u);
  v3[0] = (int (**)(void))&off_5C70;
  v2 = (int (**)(void))&off_5C58;
  v3[1] = (int (**)(void))(&dword_0 + 3);
  v0 = call_virtual_func(&v2, 5);
  LODWORD(result) = v0 + call_virtual_func(v3, 5) + 21;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x168F */
int test_cpp_multiple_inheritance(void)
{
  return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1699 */
int test_cpp_operator_overload(void)
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x16A3 */
__int64 __usercall test_cpp_template_func@<edx:eax>(long double a1@<st0>)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // [esp+1Ch] [ebp-14h] BYREF
  int v4; // [esp+20h] [ebp-10h] BYREF
  unsigned int v5; // [esp+24h] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  v1 = template_max<int>(3, 7);
  template_max<double>(2.5, 1.5);
  v3 = 10;
  v4 = 20;
  template_swap<int>(&v3, &v4);
  LODWORD(result) = v4 + v3 + v1 + (int)(double)a1;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1735 */
__int64 test_cpp_template_class(void)
{
  int v0; // eax
  __int64 result; // rax
  _DWORD v2[10]; // [esp+8h] [ebp-38h] BYREF
  int v3; // [esp+30h] [ebp-10h]
  unsigned int v4; // [esp+34h] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  v3 = 1;
  v2[0] = 10;
  Container<int>::push(v2, 20);
  Container<int>::push(v2, 30);
  v0 = 0;
  if ( v3 > 0 )
    v0 = v2[0];
  LODWORD(result) = v3 + v0 + 3;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z15test_cpp_lambdav @ 0x1797 */
int test_cpp_lambda(void)
{
  return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x17A1 */
void *test_cpp_rtti(void)
{
  const char *v0; // edi
  int v2; // [esp-Ch] [ebp-34h]
  int v3; // [esp-8h] [ebp-30h]
  int v4; // [esp-4h] [ebp-2Ch]
  int v5; // [esp+4h] [ebp-24h]
  void *v6; // [esp+8h] [ebp-20h]
  int *lpsrc; // [esp+Ch] [ebp-1Ch]

  lpsrc = (int *)operator new(4u);
  *lpsrc = (int)off_5DD0;
  v6 = (void *)operator new(4u);
  *(_DWORD *)v6 = off_5DE4;
  v5 = *lpsrc;
  v0 = *(const char **)(*(_DWORD *)(*lpsrc - 4) + 4);
  if ( v0 != "12RTTIDerivedA" && *v0 != 42 )
    strcmp(v0, "12RTTIDerivedA");
  __dynamic_cast(
    lpsrc,
    (const struct __class_type_info *)&`typeinfo for'RTTIBase,
    (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
    0);
  __dynamic_cast(
    v6,
    (const struct __class_type_info *)&`typeinfo for'RTTIBase,
    (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
    0);
  if ( *v0 == 42 )
    ++v0;
  strlen(v0);
  (*(void (__stdcall **)(int *, int, int, int))(v5 + 4))(lpsrc, v2, v3, v4);
  (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  return v6;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18C9 */
int test_cpp_smart_ptr(void)
{
  _DWORD *v0; // eax
  _DWORD *v1; // eax
  int v3; // [esp+30h] [ebp-2Ch] BYREF
  _DWORD *v4; // [esp+34h] [ebp-28h] BYREF
  _DWORD v5[5]; // [esp+38h] [ebp-24h] BYREF

  v5[1] = __readgsdword(0x14u);
  v0 = (_DWORD *)operator new(4u);
  v3 = 0;
  *v0 = 200;
  v4 = v0;
  v1 = (_DWORD *)operator new[](0x14u);
  *v1 = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 4;
  v1[4] = 5;
  v5[0] = v1;
  std::unique_ptr<int []>::~unique_ptr(v5);
  std::unique_ptr<int>::~unique_ptr(&v4);
  std::unique_ptr<int>::~unique_ptr(&v3);
  return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x199D */
__int64 test_cpp_diamond_inheritance(void)
{
  int v0; // ebx
  __int64 result; // rax
  int v2; // [esp+1Ch] [ebp-40h]
  _DWORD v3[4]; // [esp+24h] [ebp-38h] BYREF
  _DWORD (__cdecl **v4)(DiamondDerived *__hidden); // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+38h] [ebp-24h]
  unsigned int v6; // [esp+3Ch] [ebp-20h]

  v6 = __readgsdword(0x14u);
  v3[0] = &off_5D88;
  v4 = &off_5DBC;
  v3[2] = &off_5DA0;
  v5 = 50;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&v4);
  v5 = 100;
  v2 = v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)&v4);
  DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
  LODWORD(result) = v2;
  HIDWORD(result) = v6 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1A22 */
void __usercall __noreturn test_cpp_oo_features(long double a1@<st0>)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  puts(asc_301A);
  v1 = test_cpp_member_func();
  __printf_chk(1, &unk_303E, v1);
  v2 = test_cpp_constructor();
  __printf_chk(1, &unk_305C, v2);
  v3 = test_cpp_virtual_func();
  __printf_chk(1, &unk_3078, v3);
  v4 = test_cpp_multiple_inheritance();
  __printf_chk(1, &unk_3094, v4);
  v5 = test_cpp_diamond_inheritance();
  __printf_chk(1, &unk_30B0, v5);
  v6 = test_cpp_operator_overload();
  __printf_chk(1, &unk_30CD, v6);
  v7 = test_cpp_template_func(a1);
  __printf_chk(1, &unk_30E9, v7);
  v8 = test_cpp_template_class();
  __printf_chk(1, &unk_3105, v8);
  v9 = test_cpp_lambda();
  __printf_chk(1, &unk_3121, v9);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1B66 */
int __cdecl Base::virtual_func(Base *this, int a2)
{
  return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1B74 */
const char *Base::getName()
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B8A */
void Base::~Base()
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B90 */
int __cdecl Derived::virtual_func(Derived *this, int a2)
{
  return *((_DWORD *)this + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1BA4 */
const char *Derived::getName()
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1BBA */
int MultiDerived::funcA()
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1BC4 */
int MultiDerived::funcB()
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1BCE */
int `non-virtual thunk to'MultiDerived::funcB()
{
  return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1BD8 */
int VirtualBase::func()
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x1BE2 */
void VirtualBase::~VirtualBase()
{
  ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1BE8 */
int __cdecl MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1C02 */
int __cdecl `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1C16 */
int __cdecl MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1C30 */
int __cdecl `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C44 */
int __cdecl DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C5E */
int __cdecl `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C71 */
int __cdecl `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x1C7C */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  *(_DWORD *)this = &off_5C94;
  *((_DWORD *)this + 2) = &off_5CB0;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1CA1 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16));
  *v1 = &off_5C94;
  v1[2] = &off_5CB0;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1CCC */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  *(_DWORD *)this = &off_5CD0;
  *((_DWORD *)this + 2) = &off_5CEC;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1CF1 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16));
  *v1 = &off_5CD0;
  v1[2] = &off_5CEC;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1D1C */
int RTTIDerivedA::getType()
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1D26 */
int RTTIDerivedB::getType()
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1D30 */
void RTTIDerivedB::~RTTIDerivedB()
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1D36 */
void RTTIDerivedA::~RTTIDerivedA()
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1D3C */
void MultiDerived::~MultiDerived()
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D41 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D46 */
void Derived::~Derived()
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D4C */
void __cdecl Base::~Base(Base *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D74 */
void __cdecl Derived::~Derived(Derived *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D9C */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DC4 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x1DD0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DF8 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E20 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E48 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  *(_DWORD *)this = &off_5C94;
  *((_DWORD *)this + 2) = &off_5CB0;
  operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1E7F */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x1E92 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  *(_DWORD *)this = &off_5CD0;
  *((_DWORD *)this + 2) = &off_5CEC;
  operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1EC9 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x1EDC */
void __cdecl MiddleA::~MiddleA(MiddleA *this, int a2, int a3)
{
  _DWORD (__cdecl **v3)(MiddleA *__hidden); // eax
  _DWORD (__cdecl **v4)(MiddleA *__hidden); // ecx
  int v5; // eax

  v3 = &off_5C94;
  if ( !a2 )
    v3 = *(_DWORD (__cdecl ***)(MiddleA *__hidden))a3;
  *(_DWORD *)this = v3;
  if ( a2 )
  {
    v4 = &off_5CB0;
    v5 = 8;
  }
  else
  {
    v4 = *(_DWORD (__cdecl ***)(MiddleA *__hidden))(a3 + 4);
    v5 = (int)*(v3 - 3);
  }
  *(_DWORD *)((char *)this + v5) = v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x1F26 */
void __cdecl MiddleA::~MiddleA(MiddleA *this, int a2)
{
  MiddleA::~MiddleA(this, 0, a2);
}


/* Function: _ZN7MiddleBD4Ev @ 0x1F42 */
void __cdecl MiddleB::~MiddleB(MiddleB *this, int a2, int a3)
{
  _DWORD (__cdecl **v3)(MiddleB *__hidden); // eax
  _DWORD (__cdecl **v4)(MiddleB *__hidden); // ecx
  int v5; // eax

  v3 = &off_5CD0;
  if ( !a2 )
    v3 = *(_DWORD (__cdecl ***)(MiddleB *__hidden))a3;
  *(_DWORD *)this = v3;
  if ( a2 )
  {
    v4 = &off_5CEC;
    v5 = 8;
  }
  else
  {
    v4 = *(_DWORD (__cdecl ***)(MiddleB *__hidden))(a3 + 4);
    v5 = (int)*(v3 - 3);
  }
  *(_DWORD *)((char *)this + v5) = v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x1F8C */
void __cdecl MiddleB::~MiddleB(MiddleB *this, int a2)
{
  MiddleB::~MiddleB(this, 0, a2);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1FA8 */
int __cdecl template_max<int>(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( a1 < a2 )
    return a2;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1FBC */
long double __cdecl template_max<double>(double a1, double a2)
{
  long double result; // fst7

  result = a2;
  if ( a1 > (long double)a2 )
    return a1;
  return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1FD5 */
_DWORD *__cdecl template_swap<int>(int *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = a2;
  v3 = *a1;
  *a1 = *a2;
  *a2 = v3;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1FEE */
int __cdecl Container<int>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2002 */
int __cdecl Container<int>::push(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 <= 9 )
  {
    *(_DWORD *)(a1 + 40) = v3 + 1;
    *(_DWORD *)(a1 + 4 * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2022 */
int __cdecl Container<int>::get(int a1, int a2)
{
  int result; // eax

  result = 0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 40) > a2 )
    return *(_DWORD *)(a1 + 4 * a2);
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2040 */
int __cdecl Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2050 */
int __cdecl Container<double>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2064 */
int __cdecl Container<double>::push(int a1, double a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 <= 9 )
  {
    *(_DWORD *)(a1 + 80) = v3 + 1;
    *(double *)(a1 + 8 * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2088 */
long double __cdecl Container<double>::get(int a1, int a2)
{
  long double result; // fst7

  result = 0.0;
  if ( a2 >= 0 && a2 < *(_DWORD *)(a1 + 80) )
    return *(double *)(a1 + 8 * a2);
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x20A8 */
int __cdecl Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x20B8 */
void __cdecl std::unique_ptr<int>::~unique_ptr(void **a1)
{
  if ( *a1 )
    operator delete(*a1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x20E8 */
void __cdecl std::unique_ptr<int []>::~unique_ptr(void **a1)
{
  if ( *a1 )
    operator delete[](*a1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2116 */
void __cdecl DiamondDerived::~DiamondDerived(MiddleA *this, int a2, int a3)
{
  _DWORD (__cdecl **v3)(DiamondDerived *__hidden); // edx
  _DWORD (__cdecl **v4)(DiamondDerived *__hidden); // ecx
  int v5; // edx
  _DWORD (__cdecl **v6)(DiamondDerived *__hidden); // edx
  _DWORD (__cdecl ***v7)(MiddleB *__hidden); // edx
  _DWORD (__cdecl ***v8)(MiddleA *__hidden); // eax

  v3 = &off_5D88;
  if ( !a2 )
    v3 = *(_DWORD (__cdecl ***)(DiamondDerived *__hidden))a3;
  *(_DWORD *)this = v3;
  if ( a2 )
  {
    v4 = &off_5DBC;
    v5 = 16;
  }
  else
  {
    v4 = *(_DWORD (__cdecl ***)(DiamondDerived *__hidden))(a3 + 20);
    v5 = (int)*(v3 - 3);
  }
  *(_DWORD *)((char *)this + v5) = v4;
  v6 = &off_5DA0;
  if ( !a2 )
    v6 = *(_DWORD (__cdecl ***)(DiamondDerived *__hidden))(a3 + 24);
  *((_DWORD *)this + 2) = v6;
  v7 = off_5D6C;
  if ( !a2 )
    v7 = (_DWORD (__cdecl ***)(MiddleB *__hidden))(a3 + 12);
  MiddleB::~MiddleB((MiddleA *)((char *)this + 8), (int)v7);
  v8 = off_5D64;
  if ( !a2 )
    v8 = (_DWORD (__cdecl ***)(MiddleA *__hidden))(a3 + 4);
  MiddleA::~MiddleA(this, (int)v8);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x21B0 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
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
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x21EA */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
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
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x223C */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this, int a2)
{
  DiamondDerived::~DiamondDerived(this, 0, a2);
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
