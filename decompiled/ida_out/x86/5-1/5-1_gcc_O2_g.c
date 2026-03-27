/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/5-1/5-1_gcc_O2_g
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
int __usercall sub_1150@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 84))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1270 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x1380 */
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x13E0 */
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


/* Function: sub_140C @ 0x140C */
void sub_140C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1420 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1460 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x14B0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1150((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1540 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1549 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x154D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1560 */
__int64 test_cpp_member_func()
{
  __int64 result; // rax
  SimpleClass obj; // [esp+0h] [ebp-34h] BYREF
  unsigned int v2; // [esp+24h] [ebp-10h]

  v2 = __readgsdword(0x14u);
  strcpy(obj.name, "Test");
  memset(&obj.name[5], 0, 27);
  LODWORD(result) = strlen(obj.name) + 4700;
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor()
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int __cdecl call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr_Base)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func()
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance()
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
__int64 test_cpp_template_func()
{
  int v0; // ebx
  __int64 result; // rax
  double r2; // [esp+8h] [ebp-2Ch]
  int a; // [esp+1Ch] [ebp-18h] BYREF
  int b; // [esp+20h] [ebp-14h] BYREF
  unsigned int v5; // [esp+24h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  v0 = template_max<int>(3, 7);
  a = 10;
  r2 = template_max<double>(2.5, 1.5);
  b = 20;
  template_swap<int>(&a, &b);
  LODWORD(result) = b + a + v0 + (int)r2;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1750 */
size_t test_cpp_rtti()
{
  int v0; // esi
  int *v1; // edi
  const char *v2; // ebp
  int v3; // esi
  size_t v4; // esi
  RTTIBase *obj2; // [esp+14h] [ebp-28h]
  int v7; // [esp+18h] [ebp-24h]

  v0 = 10;
  v1 = (int *)operator new(4u);
  *v1 = (int)off_3E48;
  obj2 = (RTTIBase *)operator new(4u);
  obj2->_vptr_RTTIBase = (int (**)(...))off_3E5C;
  v7 = *v1;
  v2 = *(const char **)(*(_DWORD *)(*v1 - 4) + 4);
  if ( v2 != "12RTTIDerivedA" )
  {
    v0 = 0;
    if ( *v2 != 42 )
      v0 = strcmp(v2, "12RTTIDerivedA") == 0 ? 0xA : 0;
  }
  v3 = v0 + 20;
  if ( __dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v3 += 100;
  }
  if ( __dynamic_cast(
         obj2,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v3 += 200;
  }
  v4 = strlen(&v2[*v2 == 42]) + v3;
  (*(void (__cdecl **)(int *))(v7 + 4))(v1);
  (*((void (__cdecl **)(RTTIBase *))obj2->_vptr_RTTIBase + 1))(obj2);
  return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1880 */
void __noreturn test_cpp_oo_features()
{
  size_t v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  _WORD s[4]; // [esp+1Ch] [ebp-30h] BYREF
  int v5; // [esp+24h] [ebp-28h]
  int v6; // [esp+28h] [ebp-24h]
  int v7; // [esp+2Ch] [ebp-20h]
  int v8; // [esp+30h] [ebp-1Ch]
  int v9; // [esp+34h] [ebp-18h]
  __int16 v10; // [esp+38h] [ebp-14h]
  char v11; // [esp+3Ah] [ebp-12h]
  char v12; // [esp+3Bh] [ebp-11h]
  unsigned int v13; // [esp+3Ch] [ebp-10h]

  v13 = __readgsdword(0x14u);
  puts(asc_2018);
  v11 = 0;
  v10 = 0;
  strcpy((char *)s, "Test");
  HIBYTE(s[2]) = 0;
  s[3] = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v12 = 0;
  v0 = strlen((const char *)s);
  __printf_chk(1, &unk_203C, v0 + 4700);
  v1 = test_cpp_constructor();
  __printf_chk(1, &unk_205A, v1);
  __printf_chk(1, &unk_2076, 42);
  __printf_chk(1, &unk_2092, 71);
  v2 = test_cpp_diamond_inheritance();
  __printf_chk(1, &unk_20AE, v2);
  __printf_chk(1, &unk_20CB, 22);
  v3 = test_cpp_template_func();
  __printf_chk(1, &unk_20E7, v3);
  __printf_chk(1, &unk_2103, 16);
  __printf_chk(1, &unk_211F, 85);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1A30 */
int __cdecl Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1A40 */
const char *__cdecl Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1A60 */
void __cdecl Base::~Base(Base *const this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1A70 */
int __cdecl Derived::virtual_func(Derived *const this, int x)
{
  return this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1A90 */
const char *__cdecl Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1AB0 */
int __cdecl MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1AC0 */
int __cdecl MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1AD0 */
int __cdecl `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1AE0 */
int __cdecl MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B00 */
int __cdecl `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return *(int *)((char *)&this->dataA
                + *((_DWORD *)this->_vptr_MiddleA - 3)
                + *(*(_DWORD **)((char *)&this->_vptr_MiddleA + *((_DWORD *)this->_vptr_MiddleA - 3)) - 3))
       + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B20 */
int __cdecl MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B40 */
int __cdecl `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return *(int *)((char *)&this->dataB
                + *((_DWORD *)this->_vptr_MiddleB - 3)
                + *(*(_DWORD **)((char *)&this->_vptr_MiddleB + *((_DWORD *)this->_vptr_MiddleB - 3)) - 3))
       + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B60 */
int __cdecl DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1B80 */
int __cdecl `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)((char *)&this->dataA
                + *((_DWORD *)this->_vptr_MiddleA - 3)
                + *(*(_DWORD **)((char *)&this->_vptr_MiddleA + *((_DWORD *)this->_vptr_MiddleA - 3)) - 3))
       + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BA0 */
int __cdecl `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(&this[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BC0 */
int __cdecl RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BD0 */
int __cdecl RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BE0 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1BF0 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C00 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C10 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C20 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C30 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C40 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C50 */
void __cdecl Derived::~Derived(Derived *const this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C60 */
void __cdecl Base::~Base(Base *const this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C90 */
void __cdecl Derived::~Derived(Derived *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CC0 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1CF0 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(&this[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1D20 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1D50 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D80 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  operator delete(this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1DB0 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *((_DWORD *)this->_vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1DE0 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(&this[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1E10 */
int __cdecl template_max<int>(int a, int b)
{
  int result; // eax

  result = a;
  if ( a < b )
    return b;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1E30 */
double __cdecl template_max<double>(double a, double b)
{
  long double v2; // fst6

  v2 = a;
  if ( a <= (long double)b )
    return b;
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1E50 */
void __cdecl template_swap<int>(int *a, int *b)
{
  int v2; // ecx

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1E70 */
void __cdecl Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1E80 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1EA0 */
int __cdecl Container<int>::get(const Container<int> *const this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1ED0 */
int __cdecl Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1EE0 */
void __cdecl Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1EF0 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1F20 */
double __cdecl Container<double>::get(const Container<double> *const this, int idx)
{
  if ( idx >= 0 && idx < this->size )
    return this->data[idx];
  else
    return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1F50 */
int __cdecl Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1F5C */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1F60 */
void _x86_get_pc_thunk_si()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x1F70 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x1F90 */
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


/* Function: .term_proc @ 0x1FDC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x402C */

/* FAILED to decompile: _Znwj @ 0x4034 */

/* FAILED to decompile: __cxa_finalize @ 0x4038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x403C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4040 */

/* FAILED to decompile: strlen @ 0x4044 */

/* FAILED to decompile: __cxa_atexit @ 0x4048 */

/* FAILED to decompile: _ZdlPvj @ 0x404C */

/* FAILED to decompile: strcmp @ 0x4054 */

/* FAILED to decompile: __libc_start_main @ 0x4058 */

/* FAILED to decompile: __stack_chk_fail @ 0x405C */

/* FAILED to decompile: __dynamic_cast @ 0x4060 */

/* FAILED to decompile: __cxa_rethrow @ 0x4068 */

/* FAILED to decompile: puts @ 0x406C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4070 */

/* FAILED to decompile: __cxa_end_catch @ 0x4074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4078 */

/* FAILED to decompile: __cxa_throw @ 0x407C */

/* FAILED to decompile: _Unwind_Resume @ 0x4080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4084 */

/* Total functions decompiled: 95, failed: 20 */
