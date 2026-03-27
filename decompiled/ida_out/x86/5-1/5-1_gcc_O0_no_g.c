/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/5-1/5-1_gcc_O0_no_g
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
void sub_1180()
{
  sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
  sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
int __usercall sub_11A0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 104))();
}


/* Function: _start @ 0x1310 */
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


/* Function: sub_133C @ 0x133C */
void sub_133C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1340 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1350 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1390 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x13E0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_11A0((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1470 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1479 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x147D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1482 */
__int64 test_cpp_member_func(void)
{
  __int64 result; // rax
  SimpleClass *v1; // [esp+0h] [ebp-48h]
  int Value; // [esp+Ch] [ebp-3Ch]
  int v3; // [esp+10h] [ebp-38h]
  _BYTE v4[36]; // [esp+18h] [ebp-30h] BYREF
  unsigned int v5; // [esp+3Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  SimpleClass::SimpleClass((SimpleClass *)v4, 5, "Test");
  SimpleClass::setValue((SimpleClass *)v4, 10);
  Value = SimpleClass::getValue((SimpleClass *)v4);
  v3 = SimpleClass::compute((SimpleClass *)v4, 3);
  LODWORD(result) = v3 + Value + SimpleClass::getClassID(v1);
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1519 */
__int64 test_cpp_constructor(void)
{
  LifecycleClass *Data; // eax
  int InstanceCount; // eax
  int v2; // eax
  __int64 result; // rax
  int v4; // [esp+0h] [ebp-18h]
  LifecycleClass *v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+0h] [ebp-18h]
  _BYTE v7[8]; // [esp+4h] [ebp-14h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-Ch]

  v8 = __readgsdword(0x14u);
  LifecycleClass::LifecycleClass((LifecycleClass *)v7, 5u);
  Data = (LifecycleClass *)LifecycleClass::getData((LifecycleClass *)v7, 2u);
  InstanceCount = LifecycleClass::getInstanceCount(Data);
  v5 = (LifecycleClass *)(InstanceCount + v4);
  LifecycleClass::~LifecycleClass((LifecycleClass *)v7);
  v2 = LifecycleClass::getInstanceCount(v5);
  LODWORD(result) = 1000 * v2 + v6;
  HIDWORD(result) = v8 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x159F */
int __cdecl call_virtual_func(Base *a1, int a2)
{
  return (**(int (__cdecl ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x15CA */
__int64 test_cpp_virtual_func(void)
{
  int v0; // ebx
  __int64 result; // rax
  _DWORD (__cdecl **v2)(Base *__hidden, int); // [esp+8h] [ebp-30h] BYREF
  int v3; // [esp+Ch] [ebp-2Ch]
  int v4; // [esp+10h] [ebp-28h]
  _DWORD (__cdecl ***v5)(Base *__hidden, int); // [esp+14h] [ebp-24h]
  Base *v6; // [esp+18h] [ebp-20h]
  int v7; // [esp+1Ch] [ebp-1Ch]
  int v8; // [esp+20h] [ebp-18h]
  _BYTE v9[8]; // [esp+24h] [ebp-14h] BYREF
  unsigned int v10; // [esp+2Ch] [ebp-Ch]

  v10 = __readgsdword(0x14u);
  v2 = &off_8DA8;
  Derived::Derived((Derived *)v9, 3);
  v3 = Base::virtual_func((Base *)&v2, 5);
  v4 = Derived::virtual_func((Derived *)v9, 5);
  v5 = &v2;
  v6 = (Base *)v9;
  v7 = call_virtual_func((Base *)&v2, 5);
  v8 = call_virtual_func(v6, 5);
  v0 = v7 + v4 + v3 + v8;
  Derived::~Derived((Derived *)v9);
  Base::~Base((Base *)&v2);
  LODWORD(result) = v0;
  HIDWORD(result) = v10 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x16DE */
__int64 test_cpp_multiple_inheritance(void)
{
  int v0; // ebx
  __int64 result; // rax
  int v2; // [esp+10h] [ebp-28h]
  _DWORD v3[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD v4[2]; // [esp+24h] [ebp-14h] BYREF
  unsigned int v5; // [esp+2Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  MultiDerived::MultiDerived((MultiDerived *)v3);
  v3[1] = 100;
  v4[1] = 200;
  v2 = (*(int (__cdecl **)(_DWORD *))v3[0])(v3);
  v0 = (*(int (__cdecl **)(_DWORD *))v4[0])(v4) + v2 + (v3 != v4);
  MultiDerived::~MultiDerived((MultiDerived *)v3);
  LODWORD(result) = v0;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x17C0 */
__int64 test_cpp_diamond_inheritance(void)
{
  int v0; // ebx
  __int64 result; // rax
  int v2; // [esp+Ch] [ebp-2Ch]
  _BYTE v3[16]; // [esp+14h] [ebp-24h] BYREF
  int (__cdecl **v4)(_DWORD); // [esp+24h] [ebp-14h] BYREF
  int v5; // [esp+28h] [ebp-10h]
  unsigned int v6; // [esp+2Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  DiamondDerived::DiamondDerived((DiamondDerived *)v3);
  v5 = 50;
  v2 = (*v4)(&v4);
  v5 = 100;
  v0 = v2 + (*v4)(&v4);
  DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
  LODWORD(result) = v0;
  HIDWORD(result) = v6 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1888 */
__int64 test_cpp_operator_overload(void)
{
  int v0; // edx
  __int64 result; // rax
  char v2; // [esp+3h] [ebp-25h]
  _BYTE v3[8]; // [esp+4h] [ebp-24h] BYREF
  _BYTE v4[8]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v5[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v6; // [esp+1Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  Point::Point((Point *)v3, 1, 2);
  Point::Point((Point *)v4, 3, 4);
  Point::operator+((Point *)v5);
  v2 = Point::operator==(v3, v4);
  Point::operator++(v5);
  if ( v2 )
    v0 = 0;
  else
    v0 = 10;
  LODWORD(result) = v0 + v5[0] + v5[1];
  HIDWORD(result) = v6 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1938 */
__int64 test_cpp_template_func(void)
{
  __int64 result; // rax
  int v1; // [esp+14h] [ebp-24h] BYREF
  int v2; // [esp+18h] [ebp-20h] BYREF
  int v3; // [esp+1Ch] [ebp-1Ch]
  double v4; // [esp+20h] [ebp-18h]
  unsigned int v5; // [esp+2Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  v3 = template_max<int>(3, 7);
  v4 = template_max<double>(0, 1074003968, 0, 1073217536);
  v1 = 10;
  v2 = 20;
  template_swap<int>(&v1, &v2);
  LODWORD(result) = v1 + v3 + (int)v4 + v2;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x19F3 */
__int64 test_cpp_template_class(void)
{
  __int64 result; // rax
  int v1; // [esp+18h] [ebp-A0h]
  int Size; // [esp+1Ch] [ebp-9Ch]
  _BYTE v3[44]; // [esp+2Ch] [ebp-8Ch] BYREF
  _BYTE v4[84]; // [esp+58h] [ebp-60h] BYREF
  unsigned int v5; // [esp+ACh] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  Container<int>::Container(v3);
  Container<int>::push(v3, 10);
  Container<int>::push(v3, 20);
  Container<int>::push(v3, 30);
  v1 = Container<int>::get(v3, 0);
  Size = Container<int>::getSize(v3);
  Container<double>::Container(v4);
  Container<double>::push(v4, 1374389535, 1074339512);
  LODWORD(result) = Size + v1 + (int)Container<double>::get(v4, 0);
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1B34 */
int __cdecl test_cpp_lambda(void)::{lambda(int)#1}::operator()(int a1, int a2)
{
  **(_DWORD **)(a1 + 4) += 5;
  return a2 * *(_DWORD *)a1 + **(_DWORD **)(a1 + 4);
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6B */
__int64 test_cpp_lambda(void)
{
  __int64 result; // rax
  _DWORD v1[2]; // [esp+4h] [ebp-24h] BYREF
  int v2; // [esp+Ch] [ebp-1Ch]
  _DWORD v3[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  v1[1] = 10;
  v1[0] = 20;
  v3[0] = 10;
  v3[1] = v1;
  v2 = test_cpp_lambda(void)::{lambda(int)#1}::operator()((int)v3, 3);
  LODWORD(result) = v2 + 30;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BD7 */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1D26 */
void __cdecl test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(int a1, _DWORD *a2)
{
  *a2 = -1;
  if ( a2 )
    operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D5E */
__int64 test_cpp_smart_ptr(void)
{
  _DWORD *v0; // eax
  int v1; // eax
  _DWORD *v2; // edx
  _DWORD *v3; // eax
  int v4; // ebx
  __int64 result; // rax
  char v6; // [esp+Fh] [ebp-29h] BYREF
  _BYTE v7[4]; // [esp+10h] [ebp-28h] BYREF
  _BYTE v8[4]; // [esp+14h] [ebp-24h] BYREF
  _BYTE v9[4]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v10[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h]
  unsigned int v14; // [esp+2Ch] [ebp-Ch]

  v14 = __readgsdword(0x14u);
  v0 = (_DWORD *)operator new(4u);
  *v0 = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v7, v0);
  *(_DWORD *)std::unique_ptr<int>::operator*(v7) = 200;
  v1 = std::move<std::unique_ptr<int> &>(v7);
  std::unique_ptr<int>::unique_ptr(v8, v1);
  v11 = *(_DWORD *)std::unique_ptr<int>::operator*(v8);
  v2 = (_DWORD *)operator new[](0x14u);
  *v2 = 1;
  v2[1] = 2;
  v2[2] = 3;
  v2[3] = 4;
  v2[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v9, v2);
  v12 = *(_DWORD *)std::unique_ptr<int []>::operator[](v9, 2);
  v3 = (_DWORD *)operator new(4u);
  *v3 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
    v10,
    v3,
    &v6);
  v13 = *(_DWORD *)std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(v10);
  v4 = v12 + v11 + v13;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(v10);
  std::unique_ptr<int []>::~unique_ptr(v9);
  std::unique_ptr<int>::~unique_ptr(v8);
  std::unique_ptr<int>::~unique_ptr(v7);
  LODWORD(result) = v4;
  HIDWORD(result) = v14 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x1F3B */
size_t test_cpp_rtti(void)
{
  RTTIDerivedA *v0; // esi
  RTTIDerivedB *v1; // esi
  RTTIDerivedA *v2; // eax
  RTTIDerivedB *v3; // eax
  const char *v4; // eax
  int v6; // [esp+Ch] [ebp-1Ch]
  size_t v7; // [esp+Ch] [ebp-1Ch]
  RTTIDerivedA *lpsrc; // [esp+10h] [ebp-18h]

  v0 = (RTTIDerivedA *)operator new(4u);
  *(_DWORD *)v0 = 0;
  RTTIDerivedA::RTTIDerivedA(v0);
  lpsrc = v0;
  v1 = (RTTIDerivedB *)operator new(4u);
  *(_DWORD *)v1 = 0;
  RTTIDerivedB::RTTIDerivedB(v1);
  v6 = 0;
  if ( !lpsrc )
    __cxa_bad_typeid();
  if ( (unsigned __int8)std::type_info::operator==(*(_DWORD *)(*(_DWORD *)lpsrc - 4), &`typeinfo for'RTTIDerivedA) )
    v6 = 10;
  if ( !v1 )
    __cxa_bad_typeid();
  if ( (unsigned __int8)std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v1 - 4), &`typeinfo for'RTTIDerivedB) )
    v6 += 20;
  v2 = (RTTIDerivedA *)__dynamic_cast(
                         lpsrc,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                         0);
  if ( v2 )
    v6 += RTTIDerivedA::derivedA_data(v2);
  v3 = (RTTIDerivedB *)__dynamic_cast(
                         v1,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                         0);
  if ( v3 )
    v6 += RTTIDerivedB::derivedB_data(v3);
  v4 = (const char *)std::type_info::name(*(std::type_info **)(*(_DWORD *)lpsrc - 4));
  v7 = v6 + strlen(v4);
  (*(void (__cdecl **)(RTTIDerivedA *))(*(_DWORD *)lpsrc + 4))(lpsrc);
  (*(void (__cdecl **)(RTTIDerivedB *))(*(_DWORD *)v1 + 4))(v1);
  return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x20EA */
void __noreturn test_cpp_oo_features(void)
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  puts(asc_503C);
  v0 = test_cpp_member_func();
  printf(aCppL301D, v0);
  v1 = test_cpp_constructor();
  printf(aCppL302D, v1);
  v2 = test_cpp_virtual_func();
  printf(aCppL303D, v2);
  v3 = test_cpp_multiple_inheritance();
  printf(aCppL304D, v3);
  v4 = test_cpp_diamond_inheritance();
  printf(aCppL305D, v4);
  v5 = test_cpp_operator_overload();
  printf(aCppL306D, v5);
  v6 = test_cpp_template_func();
  printf(aCppL307D, v6);
  v7 = test_cpp_template_class();
  printf(aCppL308D, v7);
  v8 = test_cpp_lambda();
  printf(aCppL309D, v8);
  test_cpp_exception();
}


/* Function: main @ 0x2238 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x2258 */
int __cdecl ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
        int a1,
        char a2,
        int a3)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
           a1,
           a2,
           a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x2282 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
        int a1,
        char a2,
        int a3)
{
  return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
           a1,
           a2,
           a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x22AA */
_DWORD *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(int a1)
{
  int deleter; // ebx
  _DWORD **v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // [esp+Ch] [ebp-Ch]

  v4 = (_DWORD *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(a1);
    v2 = (_DWORD **)std::move<int *&>(v4);
    test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x2312 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(int a1)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x233A */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        int a1,
        char a2,
        int a3)
{
  int v3; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  return std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
           a1,
           &a2,
           v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2374 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(int a1)
{
  return std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2396 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(int a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x23D9 */
int __cdecl std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(int a1)
{
  return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x23EC */
int __cdecl std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
        int a1,
        int a2,
        int a3)
{
  int v3; // ebx
  int v4; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  v4 = std::forward<int *&>(a2);
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
           a1,
           v4,
           v3);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x242F */
int __cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2450 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(int a1)
{
  return std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2472 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2496 */
int __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
        int a1,
        int a2,
        int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(a1, v3);
  v4 = std::forward<int *&>(a2);
  return std::_Head_base<0u,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x24E5 */
int __cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2505 */
int __cdecl std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::__get_helper<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2525 */
int __cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2546 */
int __cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(int a1, int a2)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(a1, a2);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x256A */
int __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x258B */
int __cdecl std::__get_helper<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x25AB */
int __cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x25CC */
double *std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base()
{
  return &GLOBAL_OFFSET_TABLE_;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x25DC */
int __cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(int a1)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x25FC */
int __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x261D */
int __cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(int a1)
{
  return a1;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x262F */
int __cdecl __static_initialization_and_destruction_0(int a1, int a2)
{
  int result; // eax

  if ( a1 == 1 && a2 == 0xFFFF )
  {
    std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
    return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  }
  return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x268C */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x26B4 */
int __cdecl std::type_info::name(std::type_info *this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return *((_DWORD *)this + 1) + 1;
  else
    return *((_DWORD *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x26E6 */
_BOOL4 __cdecl std::type_info::operator==(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      || **(_BYTE **)(a1 + 4) != 42 && !strcmp(*(const char **)(a1 + 4), *(const char **)(a2 + 4));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x274A */
void __cdecl SimpleClass::SimpleClass(SimpleClass *this, int a2, char *src)
{
  *(_DWORD *)this = a2;
  strncpy((char *)this + 4, src, 0x1Fu);
  *((_BYTE *)this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x278E */
int __cdecl SimpleClass::getValue(SimpleClass *this)
{
  return *(_DWORD *)this;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x27A6 */
SimpleClass *__cdecl SimpleClass::setValue(SimpleClass *this, int a2)
{
  SimpleClass *result; // eax

  result = this;
  *(_DWORD *)this = a2;
  return result;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x27C2 */
size_t __cdecl SimpleClass::compute(SimpleClass *this, int a2)
{
  int v2; // esi

  v2 = a2 * *(_DWORD *)this;
  return v2 + strlen((const char *)this + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x27FD */
int SimpleClass::getClassID()
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2816 */
void __cdecl LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned int a2)
{
  unsigned int i; // [esp+Ch] [ebp-Ch]

  *((_DWORD *)this + 1) = a2;
  if ( a2 > 0x1FFFFFFF )
    __cxa_throw_bad_array_new_length();
  *(_DWORD *)this = operator new[](4 * a2);
  for ( i = 0; i < a2; ++i )
    *(_DWORD *)(*(_DWORD *)this + 4 * i) = 10 * i;
  ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x28A4 */
void __cdecl LifecycleClass::~LifecycleClass(void **this)
{
  if ( *this )
    operator delete[](*this);
  --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x28EA */
int __cdecl LifecycleClass::getData(LifecycleClass *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 1) )
    return -1;
  else
    return *(_DWORD *)(*(_DWORD *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x291E */
int LifecycleClass::getInstanceCount()
{
  return LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2938 */
int __cdecl Base::virtual_func(Base *this, int a2)
{
  return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2952 */
const char *Base::getName()
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x296C */
void __cdecl Base::~Base(Base *this)
{
  *(_DWORD *)this = &off_8DA8;
}


/* Function: _ZN4BaseD0Ev @ 0x298C */
void __cdecl Base::~Base(Base *this)
{
  Base::~Base(this);
  operator delete(this, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x29C6 */
void __cdecl Base::Base(Base *this)
{
  *(_DWORD *)this = &off_8DA8;
}


/* Function: _ZN7DerivedC2Ei @ 0x29E6 */
void __cdecl Derived::Derived(Derived *this, int a2)
{
  Base::Base(this);
  *(_DWORD *)this = &off_8D90;
  *((_DWORD *)this + 1) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A26 */
int __cdecl Derived::virtual_func(Derived *this, int a2)
{
  return a2 * *((_DWORD *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A44 */
const char *Derived::getName()
{
  return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x2A5E */
int BaseA::funcA()
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2A76 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  *(_DWORD *)this = &off_8D7C;
}


/* Function: _ZN5BaseAD0Ev @ 0x2A96 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  BaseA::~BaseA(this);
  operator delete(this, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2AD0 */
int BaseB::funcB()
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2AE8 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  *(_DWORD *)this = &off_8D68;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B08 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  BaseB::~BaseB(this);
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2B42 */
int MultiDerived::funcA()
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2B5A */
int MultiDerived::funcB()
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x2B72 */
int __cdecl `non-virtual thunk to'MultiDerived::funcB()
{
  return MultiDerived::funcB();
}


/* Function: _ZN5BaseAC2Ev @ 0x2B7E */
void __cdecl BaseA::BaseA(BaseA *this)
{
  *(_DWORD *)this = &off_8D7C;
}


/* Function: _ZN5BaseBC2Ev @ 0x2B9E */
void __cdecl BaseB::BaseB(BaseB *this)
{
  *(_DWORD *)this = &off_8D68;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2BBE */
void __cdecl MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA(this);
  BaseB::BaseB((MultiDerived *)((char *)this + 8));
  *(_DWORD *)this = &off_8D3C;
  *((_DWORD *)this + 2) = &off_8D54;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2C12 */
int VirtualBase::func()
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2C2A */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  *(_DWORD *)this = &off_8D28;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2C4A */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2C84 */
int __cdecl MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x2CB0 */
int __cdecl `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2CC4 */
int __cdecl MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x2CF0 */
int __cdecl `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2D04 */
int __cdecl DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2D30 */
int __cdecl `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x2D43 */
int __cdecl `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x2D4E */
void __cdecl VirtualBase::VirtualBase(VirtualBase *this)
{
  *(_DWORD *)this = &off_8D28;
}


/* Function: _ZN7MiddleAC2Ev @ 0x2D6E */
void __cdecl MiddleA::MiddleA(MiddleA *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x2DA6 */
void __cdecl MiddleA::~MiddleA(MiddleA *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x2DDE */
void __cdecl MiddleB::MiddleB(MiddleB *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x2E16 */
void __cdecl MiddleB::~MiddleB(MiddleB *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E4E */
void __cdecl DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 16));
  MiddleA::MiddleA(this, off_8CA0);
  MiddleB::MiddleB((DiamondDerived *)((char *)this + 8), off_8CA8);
  *(_DWORD *)this = &off_8C5C;
  *((_DWORD *)this + 4) = &off_8C90;
  *((_DWORD *)this + 2) = &off_8C74;
}


/* Function: _ZN5PointC2Eii @ 0x2ED0 */
void __cdecl Point::Point(Point *this, int a2, int a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x2EF6 */
Point *__stdcall Point::operator+(Point *a1, _DWORD *a2, _DWORD *a3)
{
  Point::Point(a1, *a2 + *a3, a3[1] + a2[1]);
  return a1;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2F3C */
_BOOL4 __cdecl Point::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x2F7A */
_DWORD *__cdecl Point::operator++(_DWORD *a1)
{
  ++*a1;
  ++a1[1];
  return a1;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2FAC */
int __cdecl template_max<int>(int a1, int a2)
{
  if ( a1 <= a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2FCF */
long double __cdecl template_max<double>(double a1, double a2)
{
  if ( a1 <= (long double)a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3011 */
int *__cdecl template_swap<int>(int *a1, int *a2)
{
  int *result; // eax
  int v3; // [esp+Ch] [ebp-4h]

  v3 = *a1;
  *a1 = *a2;
  result = a2;
  *a2 = v3;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3042 */
int __cdecl Container<int>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3060 */
int __cdecl Container<int>::push(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 40);
  if ( result <= 9 )
  {
    result = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = result + 1;
    *(_DWORD *)(a1 + 4 * result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x309C */
int __cdecl Container<int>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 40) )
    return 0;
  else
    return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x30D0 */
int __cdecl Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x30EA */
int __cdecl Container<double>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3108 */
int __cdecl Container<double>::push(int a1, double a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 80);
  if ( result <= 9 )
  {
    result = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = result + 1;
    *(double *)(a1 + 8 * result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x314E */
long double __cdecl Container<double>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 80) )
    return 0.0;
  else
    return *(double *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3180 */
int __cdecl Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x319A */
int __cdecl std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(int a1, int a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x31C4 */
int __cdecl std::unique_ptr<int>::unique_ptr(int a1, int a2)
{
  return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x31EE */
int RTTIBase::getType()
{
  return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3206 */
int RTTIDerivedA::getType()
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x321E */
int RTTIDerivedA::derivedA_data()
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3236 */
int RTTIDerivedB::getType()
{
  return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x324E */
int RTTIDerivedB::derivedB_data()
{
  return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x3266 */
void __cdecl RTTIBase::RTTIBase(RTTIBase *this)
{
  *(_DWORD *)this = off_8C44;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3286 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *this)
{
  *(_DWORD *)this = off_8C44;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x32A6 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x32E0 */
void __cdecl RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase(this);
  *(_DWORD *)this = off_8C30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3316 */
void __cdecl RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase(this);
  *(_DWORD *)this = off_8C1C;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x334C */
int __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(int a1, int a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3376 */
int __cdecl std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(int a1, int a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x33A0 */
_DWORD *__cdecl std::unique_ptr<int>::~unique_ptr(int a1)
{
  int deleter; // ebx
  void **v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // [esp+Ch] [ebp-Ch]

  v4 = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int>::get_deleter(a1);
    v2 = (void **)std::move<int *&>(v4);
    std::default_delete<int>::operator()(deleter, *v2);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x340C */
int __cdecl std::unique_ptr<int>::operator*(int a1)
{
  return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3437 */
int __cdecl std::move<std::unique_ptr<int> &>(int a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x344E */
_DWORD *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1, a2);
  result = a1;
  *a1 = *a2;
  return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3480 */
_DWORD *__cdecl std::tuple<int *,std::default_delete<int>>::tuple(_DWORD *a1, _DWORD *a2)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x34AA */
_DWORD *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax

  v2 = (_DWORD *)std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
  std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
  result = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
  *result = 0;
  return result;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x34F8 */
int __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(int a1, int a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3522 */
int __cdecl std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(int a1, int a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x354C */
void **__cdecl std::unique_ptr<int []>::~unique_ptr(int a1)
{
  int deleter; // eax
  void **result; // eax
  void **v3; // [esp+Ch] [ebp-Ch]

  v3 = (void **)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  if ( *v3 )
  {
    deleter = std::unique_ptr<int []>::get_deleter(a1);
    std::default_delete<int []>::operator()<int>(deleter, *v3);
  }
  result = v3;
  *v3 = 0;
  return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x35A8 */
int __cdecl std::unique_ptr<int []>::operator[](int a1, int a2)
{
  return std::unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x35DE */
_DWORD *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
  _DWORD *result; // eax

  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
  result = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x361C */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
  return std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3642 */
int __cdecl std::unique_ptr<int>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3667 */
int __cdecl std::move<int *&>(int a1)
{
  return a1;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x367E */
void __cdecl std::default_delete<int>::operator()(int a1, void *a2)
{
  if ( a2 )
    operator delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x36B2 */
int __cdecl std::unique_ptr<int>::get(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x36D7 */
int __cdecl std::move<std::tuple<int *,std::default_delete<int>> &>(int a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x36EE */
double *std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl()
{
  return &GLOBAL_OFFSET_TABLE_;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3702 */
_DWORD *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(int a1, int a2)
{
  _DWORD *result; // eax

  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
  result = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3740 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
  return std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3766 */
int __cdecl std::unique_ptr<int []>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x378C */
void __cdecl std::default_delete<int []>::operator()<int>(int a1, void *a2)
{
  if ( a2 )
    operator delete[](a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x37BE */
int __cdecl std::unique_ptr<int []>::get(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x37E4 */
int __cdecl std::tuple<int *,std::default_delete<int>>::tuple<true,true>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x380A */
int __cdecl std::get<0u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3830 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(int a1)
{
  return std::get<1u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3856 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x387E */
int __cdecl std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x38A4 */
int __cdecl std::get<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x38CA */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(int a1)
{
  return std::get<1u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x38F0 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3918 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(int a1)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1);
  return std::_Head_base<0u,int *,false>::_Head_base(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x394C */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3970 */
int __cdecl std::get<1u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<1u,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3994 */
int __cdecl std::get<0u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x39BA */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(int a1)
{
  std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(a1);
  return std::_Head_base<0u,int *,false>::_Head_base(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x39EE */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3A12 */
int __cdecl std::get<1u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<1u,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x3A36 */
int __cdecl std::get<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x3A5B */
int __cdecl std::forward<int *&>(int a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3A72 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3A98 */
_DWORD *__cdecl std::_Head_base<0u,int *,false>::_Head_base(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = 0;
  return result;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x3AB5 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3ADA */
int __cdecl std::__get_helper<1u,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3AFE */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3B22 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(int a1)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3B47 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3B6C */
int __cdecl std::__get_helper<1u,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3B90 */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x3BB4 */
_DWORD *__cdecl std::_Head_base<0u,int *,false>::_Head_base<int *&>(_DWORD *a1, int a2)
{
  int v2; // edx
  _DWORD *result; // eax

  v2 = *(_DWORD *)std::forward<int *&>(a2);
  result = a1;
  *a1 = v2;
  return result;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
double *std::_Head_base<1u,std::default_delete<int>,true>::_Head_base()
{
  return &GLOBAL_OFFSET_TABLE_;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 */
int __cdecl std::_Head_base<0u,int *,false>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C0A */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
double *std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base()
{
  return &GLOBAL_OFFSET_TABLE_;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
int __cdecl std::_Head_base<1u,std::default_delete<int>,true>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3CC7 */
int __cdecl std::_Head_base<0u,int *,false>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x3CDD */
int __cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x3CF4 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  *(_DWORD *)this = off_8C1C;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3D26 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3D60 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  *(_DWORD *)this = off_8C30;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x3D92 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3DCC */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  *(_DWORD *)this = &off_8C5C;
  *((_DWORD *)this + 4) = &off_8C90;
  *((_DWORD *)this + 2) = &off_8C74;
  MiddleB::~MiddleB((DiamondDerived *)((char *)this + 8), off_8CA8);
  MiddleA::~MiddleA(this, off_8CA0);
  VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 16));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3E4E */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3E5C */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3E72 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3EAB */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3EB6 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3ECA */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  *(_DWORD *)this = &off_8D3C;
  *((_DWORD *)this + 2) = &off_8D54;
  BaseB::~BaseB((MultiDerived *)((char *)this + 8));
  BaseA::~BaseA(this);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3F19 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3F24 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3F5D */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x3F68 */
void __cdecl Derived::~Derived(Derived *this)
{
  *(_DWORD *)this = &off_8D90;
  Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x3F9A */
void __cdecl Derived::~Derived(Derived *this)
{
  Derived::~Derived(this);
  operator delete(this, 8u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x3FD3 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x3FD7 */
void _x86_get_pc_thunk_si()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x3FE0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x4000 */
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


/* Function: .term_proc @ 0x404C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9030 */

/* FAILED to decompile: __cxa_finalize @ 0x9034 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9038 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x903C */

/* FAILED to decompile: strlen @ 0x9040 */

/* FAILED to decompile: __cxa_atexit @ 0x9044 */

/* FAILED to decompile: _ZdlPvj @ 0x9048 */

/* FAILED to decompile: strcmp @ 0x9050 */

/* FAILED to decompile: __libc_start_main @ 0x9054 */

/* FAILED to decompile: _Znaj @ 0x9058 */

/* FAILED to decompile: strncpy @ 0x905C */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9060 */

/* FAILED to decompile: __stack_chk_fail @ 0x9064 */

/* FAILED to decompile: __dynamic_cast @ 0x9068 */

/* FAILED to decompile: _ZdaPv @ 0x906C */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x9074 */

/* FAILED to decompile: printf @ 0x9078 */

/* FAILED to decompile: __cxa_rethrow @ 0x907C */

/* FAILED to decompile: puts @ 0x9080 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x9084 */

/* FAILED to decompile: __cxa_end_catch @ 0x9088 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x908C */

/* FAILED to decompile: __cxa_throw @ 0x9090 */

/* FAILED to decompile: _Unwind_Resume @ 0x9098 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x909C */

/* Total functions decompiled: 235, failed: 25 */
