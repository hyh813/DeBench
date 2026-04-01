/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_clang_O1_g
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


/* Function: sub_1160 @ 0x1160 */
int __usercall sub_1160@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
void GLOBAL__sub_I_5_1_cpp()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x11B0 */
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


/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x11F0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1230 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1280 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1160((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1310 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1330 */
size_t test_cpp_member_func()
{
  _WORD s[4]; // [esp+14h] [ebp-28h] BYREF
  int v2; // [esp+1Ch] [ebp-20h]
  int v3; // [esp+20h] [ebp-1Ch]
  int v4; // [esp+24h] [ebp-18h]
  int v5; // [esp+28h] [ebp-14h]
  _BYTE v6[8]; // [esp+2Ch] [ebp-10h] BYREF

  strcpy((char *)s, "Test");
  HIBYTE(s[2]) = 0;
  s[3] = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  memset(v6, 0, sizeof(v6));
  return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x13B0 */
int test_cpp_constructor()
{
  int v0; // esi
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  int v3; // esi

  v0 = 0;
  v1 = (_DWORD *)operator new[](0x14u);
  v2 = v1;
  do
  {
    *v2 = v0;
    v0 += 10;
    ++v2;
  }
  while ( v0 != 50 );
  ++LifecycleClass::instance_count;
  v3 = v1[2] + LifecycleClass::instance_count;
  operator delete[](v1);
  --LifecycleClass::instance_count;
  return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1420 */
int __cdecl call_virtual_func(Base *obj, int x)
{
  return ((int (__cdecl *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1450 */
int test_cpp_virtual_func()
{
  int v0; // esi
  Base v2[2]; // [esp+8h] [ebp-14h] BYREF
  Base v3; // [esp+10h] [ebp-Ch] BYREF

  v3._vptr$Base = (int (**)(void))&off_5CE4;
  v2[1]._vptr$Base = (int (**)(void))(&dword_0 + 3);
  v0 = Base::virtual_func(&v3, 5);
  return v0 + Derived::virtual_func((Derived *)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x14B0 */
int test_cpp_multiple_inheritance()
{
  int v0; // eax
  MultiDerived v2; // [esp+10h] [ebp-1Ch] BYREF

  v2._vptr$BaseA = (int (**)(void))&off_5D28;
  v2._vptr$BaseB = (int (**)(void))&off_5D40;
  v2.dataA = 100;
  v2.dataB = 200;
  MultiDerived::funcA(&v2);
  return v0 + (*(int (__cdecl **)(BaseB *))v2._vptr$BaseB)(&v2.BaseB) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1510 */
int test_cpp_diamond_inheritance()
{
  int v0; // eax
  _DWORD v2[3]; // [esp+Ch] [ebp-20h]
  _DWORD v3[5]; // [esp+18h] [ebp-14h] BYREF

  v3[0] = &off_5DE4;
  v2[1] = &off_5DC8;
  v3[1] = 50;
  `virtual thunk to'DiamondDerived::func();
  *(_DWORD *)((char *)v2 + (_DWORD)*(&off_5DB0 - 3)) = 100;
  return v0 + (*(int (__cdecl **)(_DWORD *))v3[0])(v3);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1580 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1590 */
int test_cpp_template_func()
{
  return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x15A0 */
int test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15B0 */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x15C0 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x16B0 */
int test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x16C0 */
size_t test_cpp_rtti()
{
  _DWORD *v0; // edi
  _DWORD *v1; // ebp
  const char *v2; // ecx
  int v3; // esi
  char *v4; // eax
  bool v5; // al
  int v6; // ebp
  void *v7; // eax
  int v8; // edi
  void *v9; // eax
  int v10; // ecx
  int v11; // edi
  size_t v12; // ebp
  char *s1; // [esp+0h] [ebp-1Ch]
  _DWORD *v15; // [esp+4h] [ebp-18h]
  void *lpsrc; // [esp+8h] [ebp-14h]

  v0 = (_DWORD *)operator new(4u);
  *v0 = &off_5ECC;
  v1 = (_DWORD *)operator new(4u);
  *v1 = &off_5EE0;
  v2 = *(const char **)(*(_DWORD *)(*v0 - 4) + 4);
  s1 = (char *)v2;
  if ( v2 == "12RTTIDerivedA" )
  {
    v3 = 10;
  }
  else
  {
    v3 = 0;
    if ( *v2 != 42 )
    {
      v3 = 10;
      if ( strcmp(v2, "12RTTIDerivedA") )
        v3 = 0;
    }
  }
  v4 = *(char **)(*(_DWORD *)(*v1 - 4) + 4);
  lpsrc = v1;
  v5 = v4 == "12RTTIDerivedB" || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
  v6 = v3 | 0x14;
  if ( !v5 )
    v6 = v3;
  v7 = __dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0);
  v15 = v0;
  v8 = v6 + 100;
  if ( !v7 )
    v8 = v6;
  v9 = __dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0);
  v10 = v8 + 200;
  if ( !v9 )
    v10 = v8;
  v11 = v10;
  v12 = strlen(&s1[*s1 == 42]);
  (*(void (__cdecl **)(_DWORD *))(*v15 + 4))(v15);
  (*(void (__cdecl **)(void *))(*(_DWORD *)lpsrc + 4))(lpsrc);
  return v11 + v12;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1810 */
void __noreturn test_cpp_oo_features()
{
  size_t v0; // eax
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  _DWORD (__cdecl **v11)(DiamondDerived *__hidden); // [esp+10h] [ebp-3Ch] BYREF
  _DWORD s[2]; // [esp+14h] [ebp-38h] BYREF
  int v13; // [esp+1Ch] [ebp-30h]
  _DWORD (__cdecl **v14)(DiamondDerived *__hidden); // [esp+20h] [ebp-2Ch] BYREF
  int v15; // [esp+24h] [ebp-28h]
  int v16; // [esp+28h] [ebp-24h]
  _BYTE v17[8]; // [esp+2Ch] [ebp-20h] BYREF
  Base v18; // [esp+38h] [ebp-14h] BYREF

  puts(asc_31E5);
  strcpy((char *)s, "Test");
  BYTE1(s[1]) = 0;
  HIWORD(s[1]) = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  memset(v17, 0, sizeof(v17));
  v11 = (_DWORD (__cdecl **)(DiamondDerived *__hidden))(byte_9 + 1);
  v0 = strlen((const char *)s);
  printf(aCppL301D, v0 + 4700);
  v1 = 0;
  v2 = (_DWORD *)operator new[](0x14u);
  v3 = v2;
  do
  {
    *v3 = v1;
    v1 += 10;
    ++v3;
  }
  while ( v1 != 50 );
  ++LifecycleClass::instance_count;
  v4 = v2[2] + LifecycleClass::instance_count;
  operator delete[](v2);
  --LifecycleClass::instance_count;
  printf(aCppL302D, v4 + 1000 * LifecycleClass::instance_count);
  v18._vptr$Base = (int (**)(void))&off_5CE4;
  v11 = (_DWORD (__cdecl **)(DiamondDerived *__hidden))&off_5D04;
  s[0] = 3;
  v5 = Base::virtual_func(&v18, 5);
  v6 = Derived::virtual_func((Derived *)&v11, 5);
  printf(aCppL303D, v5 + v6 + 21);
  v11 = (_DWORD (__cdecl **)(DiamondDerived *__hidden))&off_5D28;
  s[1] = &off_5D40;
  s[0] = 100;
  v13 = 200;
  `non-virtual thunk to'MultiDerived::funcB();
  printf(aCppL304D, v7 + 31);
  v11 = &off_5DB0;
  v14 = &off_5DE4;
  s[1] = &off_5DC8;
  v15 = 50;
  `virtual thunk to'DiamondDerived::func();
  v9 = v8;
  *(_DWORD *)((char *)s + (_DWORD)*(v11 - 3)) = 100;
  v10 = (*v14)((DiamondDerived *)&v14);
  printf(aCppL305D, v9 + v10);
  printf(aCppL306D, 22);
  printf(aCppL307D, 39);
  printf(aCppL308D, 16);
  printf(aCppL309D, 85);
  test_cpp_exception();
}


/* Function: main @ 0x1AB0 */
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AD0 */
int __cdecl Base::virtual_func(Base *this, int x)
{
  return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AE0 */
int __cdecl Derived::virtual_func(Derived *this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZN4BaseD2Ev @ 0x1AF0 */
void __cdecl Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B00 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B10 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1B20 */
int __cdecl template_max<int>(int a, int b)
{
  int result; // eax

  result = b;
  if ( a > b )
    return a;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1B30 */
double __cdecl template_max<double>(double a, double b)
{
  long double v2; // fst6

  v2 = b;
  if ( a > (long double)b )
    return a;
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1B50 */
void __cdecl template_swap<int>(int *a, int *b)
{
  int v2; // edx

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1B70 */
void __cdecl Container<int>::Container(Container<int> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1B80 */
void __cdecl Container<int>::push(Container<int> *this, int value)
{
  int size; // ecx

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1BA0 */
int __cdecl Container<int>::get(const Container<int> *this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1BC0 */
int __cdecl Container<int>::getSize(const Container<int> *this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1BD0 */
void __cdecl Container<double>::Container(Container<double> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1BE0 */
void __cdecl Container<double>::push(Container<double> *this, double value)
{
  int size; // ecx

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C00 */
double __cdecl Container<double>::get(const Container<double> *this, int idx)
{
  long double result; // fst7

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1C20 */
int __cdecl Container<double>::getSize(const Container<double> *this)
{
  return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1C30 */
const char *__cdecl Base::getName(const Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1C50 */
void __cdecl Base::~Base(Base *this)
{
  operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1C80 */
const char *__cdecl Derived::getName(const Derived *this)
{
  return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x1CA0 */
void __cdecl Derived::~Derived(Derived *this)
{
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1CD0 */
int __cdecl MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CE0 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1D10 */
int __cdecl MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1D20 */
void `non-virtual thunk to'MultiDerived::funcB()
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D30 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1D40 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
  operator delete((void *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1D70 */
int __cdecl BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1D80 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  ;
}


/* Function: _ZN5BaseAD0Ev @ 0x1D90 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x1DC0 */
int __cdecl BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1DD0 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1DE0 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E10 */
int __cdecl MiddleA::func(MiddleA *this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1E30 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E40 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1E70 */
void `virtual thunk to'MiddleA::func()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1E90 */
void `virtual thunk to'MiddleA::~MiddleA()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1EA0 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(_DWORD *a1)
{
  operator delete((char *)a1 + *(_DWORD *)(*a1 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1ED0 */
int __cdecl MiddleB::func(MiddleB *this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1EF0 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x1F00 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1F30 */
void `virtual thunk to'MiddleB::func()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1F50 */
void `virtual thunk to'MiddleB::~MiddleB()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1F60 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(_DWORD *a1)
{
  operator delete((char *)a1 + *(_DWORD *)(*a1 - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1F90 */
int __cdecl DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FB0 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1FE0 */
void `non-virtual thunk to'DiamondDerived::func()
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x2000 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x2010 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
  operator delete((void *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2040 */
void `virtual thunk to'DiamondDerived::func()
{
  ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x2060 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
  ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2070 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(_DWORD *a1)
{
  operator delete((char *)a1 + *(_DWORD *)(*a1 - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x20A0 */
int __cdecl VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x20B0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x20C0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x20F0 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2120 */
int __cdecl RTTIDerivedA::getType(const RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2130 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2140 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2170 */
int __cdecl RTTIDerivedB::getType(const RTTIDerivedB *this)
{
  return 2;
}


/* Function: __do_global_ctors_aux @ 0x2180 */
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


/* Function: .term_proc @ 0x21CC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x6084 */

/* FAILED to decompile: __cxa_finalize @ 0x6088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x608C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6090 */

/* FAILED to decompile: strlen @ 0x6094 */

/* FAILED to decompile: __cxa_atexit @ 0x6098 */

/* FAILED to decompile: strcmp @ 0x60A0 */

/* FAILED to decompile: __libc_start_main @ 0x60A4 */

/* FAILED to decompile: _Znaj @ 0x60A8 */

/* FAILED to decompile: _ZdlPv @ 0x60AC */

/* FAILED to decompile: __dynamic_cast @ 0x60B0 */

/* FAILED to decompile: _ZdaPv @ 0x60B4 */

/* FAILED to decompile: printf @ 0x60BC */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: puts @ 0x60C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60D0 */

/* FAILED to decompile: __cxa_throw @ 0x60D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x60DC */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x60E0 */

/* Total functions decompiled: 90, failed: 21 */
