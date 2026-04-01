/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* MSVC/GCC intrinsics and macros */
#ifdef __GNUC__
#define __readgsdword(a) __builtin_readgsdword(a)
#else
#define __readgsdword(a) 0
#endif
#define LODWORD(x) ((unsigned int)((unsigned long long)(x) & 0xFFFFFFFF))
#define HIDWORD(x) ((unsigned int)(((unsigned long long)(x) >> 32) & 0xFFFFFFFF))

/* Include typeinfo for typeid() */
#include <typeinfo>

/* Forward declarations for template functions */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

/* Class definitions */
struct SimpleClass {
 char name[32];
};

struct LifecycleClass {
 static int instance_count;
};

struct Base {
 int (**_vptr_Base)();
};

struct Derived {
 int (**_vptr_Base)(...);
 int multiplier;
};

struct MultiDerived {
 int (**_vptr_Base)(...);
 int dataA;
 int dataB;
 int (**_vptr_MiddleA)(...);
 int (**_vptr_MiddleB)(...);
 int funcA_data;
 int funcB_data;
};

struct MiddleA {
 int (**_vptr_MiddleA)(...);
 int dataA;
};

struct MiddleB {
 int (**_vptr_MiddleB)(...);
 int dataB;
};

struct DiamondDerived {
 int (**_vptr_MiddleA)(...);
 int dataA;
 int (**_vptr_MiddleB)(...);
 int dataB;
};

struct RTTIBase {
 int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedA {
 int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedB {
 int (**_vptr_RTTIBase)(...);
};

template<typename T>
struct Container {
 T data[10];
 int size;
};

namespace std {
 struct ios_base {
  struct Init {};
 };
 static ios_base::Init __ioinit;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O1_g
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
 __asm { jmp dword ptr [ebx+8] }
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
int sub_1170@<eax>(int a1@<ebx>)
{
 return (*(int (**)(void))(a1 + 92))();
}



/* CRT stub function _start removed by preprocessor */

/* Function: sub_12DC @ 0x12DC */
void sub_12DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1419 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x141D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1421 */
long long test_cpp_member_func()
{
 long long result; // rax
 SimpleClass obj; // [esp+8h] [ebp-34h] BYREF
 unsigned int v2; // [esp+2Ch] [ebp-10h]

 v2 = __readgsdword(0x14u);
 strcpy(obj.name, "Test");
 memset(&obj.name[5], 0, 27);
 LODWORD(result) = strlen(obj.name) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x14B5 */
int test_cpp_constructor()
{
 unsigned int *v0; // eax
 int v1; // esi

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v1 + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1523 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x153B */
long long test_cpp_virtual_func()
{
 int v0; // ebx
 long long result; // rax
 Base base; // [esp+8h] [ebp-1Ch] BYREF
 Derived derived; // [esp+Ch] [ebp-18h] BYREF
 unsigned int v4; // [esp+14h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 base._vptr_Base = (int (**)(...))&off_4CD4;
 derived._vptr_Base = (int (**)(...))&off_4CEC;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 LODWORD(result) = v0 + call_virtual_func(&derived, 5) + 21;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x15B1 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x15BB */
long long test_cpp_diamond_inheritance()
{
 int v0; // ebx
 long long result; // rax
 DiamondDerived obj; // [esp+14h] [ebp-28h] BYREF

 *(&obj.dataB + 1) = __readgsdword(0x14u);
 obj._vptr_MiddleB = (int (**)(...))&off_4DC0;
 obj.dataB = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.MiddleB);
 obj.dataB = 100;
 LODWORD(result) = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.MiddleB);
 HIDWORD(result) = *(&obj.dataB + 1) - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1634 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x163E */
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
 double r2; // [esp+8h] [ebp-2Ch]
 int a; // [esp+1Ch] [ebp-18h] BYREF
 int b; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 LODWORD(result) = b + a + v0 + (int)r2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x16E2 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x16EC */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x16F6 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeid(int), 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1806 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1810 */
size_t test_cpp_rtti()
{
 void *v0; // ebp
 const char *v1; // edi
 int v2; // esi
 int v3; // esi
 size_t v4; // esi
 RTTIBase *obj1; // [esp+18h] [ebp-24h]
 int (**vptr_RTTIBase)(...); // [esp+1Ch] [ebp-20h]

 obj1 = (RTTIBase *)operator new(4u);
 obj1->_vptr_RTTIBase = (int (**)(...))off_4DD4;
 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = off_4DE8;
 vptr_RTTIBase = obj1->_vptr_RTTIBase;
 v1 = *(const char **)(*((unsigned int *)obj1->_vptr_RTTIBase - 1) + 4);
 v2 = 10;
 if ( v1 != "12RTTIDerivedA" )
 {
 v2 = 0;
 if ( *v1 != 42 )
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v2 + 20;
 if ( __dynamic_cast(
 obj1,
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedA),
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(&v1[*v1 == 42]) + v3;
 vptr_RTTIBase[1](obj1);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x193A */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_2018);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_203C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_205A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_2076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_2092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_20AE, v4);
 __printf_chk(1, &unk_20CB, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, &unk_20E7, v5);
 __printf_chk(1, &unk_2103, 16);
 __printf_chk(1, &unk_211F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1A75 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1A8B */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AC8 */
int Base::virtual_func(int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AD4 */
const char * Base::getName() const
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1AEA */
Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AF0 */
int Derived::virtual_func(Derived *self, int x)
{
 return self->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B02 */
const char * Derived::getName() const
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B18 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B22 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: nonvirtual_thunk_to_MultiDerived_funcB @ 0x1B2C */
int nonvirtual_thunk_to_MultiDerived_funcB(MultiDerived *ptr)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B36 */
int MiddleA::func()
{
 MiddleA *this_ptr = (MiddleA *)((char *)this + offsetof(MiddleA, dataA) + *((unsigned int *)this->_vptr_MiddleA - 3));
 return *(int *)((char *)this + offsetof(MiddleA, dataA) + *((unsigned int *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: virtual_thunk_to_MiddleB_func @ 0x1B81 */
int virtual_thunk_to_MiddleB_func(MiddleB *ptr)
{
 return *(int *)((char *)&ptr->dataB
 + *((unsigned int *)ptr->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&ptr->_vptr_MiddleB + *((unsigned int *)ptr->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B9E */
int DiamondDerived::func()
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: virtual_thunk_to_DiamondDerived_func @ 0x1BB5 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *ptr)
{
 return *(int *)((char *)&ptr->dataA
 + *((unsigned int *)ptr->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&ptr->_vptr_MiddleA + *((unsigned int *)ptr->_vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: nonvirtual_thunk_to_DiamondDerived_func @ 0x1BD1 */
int nonvirtual_thunk_to_DiamondDerived_func(DiamondDerived *ptr)
{
 return *(unsigned int *)((char *)ptr + *(unsigned int *)(*(&ptr[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BEA */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BF4 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BFE */
void RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1C04 */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C0A */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C0F */
void nonvirtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C14 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C1A */
void MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C1F */
void nonvirtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C24 */
Derived::~Derived()
{
}


/* Function: _ZN4BaseD0Ev @ 0x1C2A */
void Base::~Base()
{
 operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C4E */
void Derived::~Derived(Derived *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1C72 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1C95 */
void nonvirtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 operator delete(&this[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1CBC */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1CE0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D04 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 operator delete(this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1D27 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned int *)this->_vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1D50 */
void nonvirtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 1, 0x18u);
}


/* Function: template_max<int> */
int template_max_int(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: template_max<double> */
double template_max_double(double a, double b)
{
 long double v2; // fst6

 v2 = a;
 if ( a <= (long double)b )
 return b;
 return v2;
}


/* Function: template_swap<int> */
void template_swap_int(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1DB4 */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1DC4 */
void Container<int>::push(Container<int> *const this, int value)
{
 int size; // edx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1DE2 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1E02 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1E0E */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1E1E */
void Container<double>::push(Container<double> *const this, double value)
{
 int size; // edx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1E40 */
double Container<double>::get(const Container<double> *const this, int idx)
{
 if ( idx < 0 )
 return 0.0;
 if ( this->size > idx )
 return this->data[idx];
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1E60 */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1E6C */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1E70 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1E80 */
void _stack_chk_fail_local()
{
 __asm { add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1EEC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: _Znaj @ 0x505C */

/* FAILED to decompile: __stack_chk_fail @ 0x5060 */

/* FAILED to decompile: __dynamic_cast @ 0x5064 */

/* FAILED to decompile: _ZdaPv @ 0x5068 */

/* FAILED to decompile: __cxa_rethrow @ 0x5070 */

/* FAILED to decompile: puts @ 0x5074 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5078 */

/* FAILED to decompile: __cxa_end_catch @ 0x507C */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5080 */

/* FAILED to decompile: __cxa_throw @ 0x5084 */

/* FAILED to decompile: _Unwind_Resume @ 0x508C */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5090 */

/* Total functions decompiled: 97, failed: 22 */
