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

/* Forward declarations for external functions */
extern "C" {
void __cxa_throw(void*, void*, void(*)());
void* __cxa_allocate_exception(size_t);
void __cxa_begin_catch(void*);
void __cxa_end_catch();
void __cxa_rethrow();
void __cxa_atexit(void*, void*, void*);
void __cxa_finalize(void*);
int __cxa_personality_v0(int, int, void*, void*, void*);
void* __dynamic_cast(const void*, const void*, const void*, long);
void* operator new(unsigned int);
void operator delete(void*, unsigned int);
int puts(const char*);
size_t strlen(const char*);
int strcmp(const char*, const char*);
char* strcpy(char*, const char*);
void* memset(void*, int, size_t);
int __printf_chk(int, const char*, ...);
int __stack_chk_fail();
}

/* Forward declarations for std namespace */
namespace std {
struct ios_base {
    struct Init {
        Init();
        ~Init();
    };
};
static ios_base::Init __ioinit;
}

/* Standard library */
#include <stddef.h>
#include <typeinfo>
#include <ios>

/* GCC builtins */
unsigned int __readgsdword(unsigned int);

/* Windows-style macros for accessing low/high DWORD */
#define LODWORD(x) ((DWORD)((DWORDLONG)(x) & 0xFFFFFFFF))
#define HIDWORD(x) ((DWORD)((DWORDLONG)(x) >> 32))

/* Typeinfo structures */
struct type_info {
    virtual ~type_info();
};

struct __class_type_info {};
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

/* Forward declarations for classes */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

struct Base {
    int (**_vptr_Base)();
    virtual int virtual_func(int x);
    virtual ~Base();
    const char* getName();
};

struct Derived : Base {
    int multiplier;
    virtual int virtual_func(int x);
    virtual ~Derived();
};

struct MiddleA {
    int (**_vptr_MiddleA)();
    int dataA;
    virtual int func();
};

struct MiddleB {
    int (**_vptr_MiddleB)();
    int dataB;
    virtual int func();
};

struct MultiDerived : Base, MiddleB {
    int (**_vptr_MultiDerived)();
    int dataA;
    int funcA();
    int funcB();
    virtual ~MultiDerived();
};

struct DiamondDerived : MiddleA, MiddleB {
    int dataC;
    virtual int func();
    virtual ~DiamondDerived();
};

struct RTTIBase {
    int (**_vptr_RTTIBase)();
    virtual int getType();
};

struct RTTIDerivedA : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedB();
};

template<typename T>
struct Container {
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O3_g
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
int sub_1150@<eax>(int a1@<ebx>)
{
 return (*(int (**)(void))(a1 + 84))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1270 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeid(int), 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



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



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



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
long long test_cpp_member_func()
{
 long long result; // rax
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
int call_virtual_func(Base *obj, int x)
{
 return obj->virtual_func(x);
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
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
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
 int *v0; // edi
 const char *v1; // ebp
 int v2; // ecx
 int v3; // esi
 size_t v4; // esi
 RTTIBase *obj2; // [esp+14h] [ebp-28h]
 int v7; // [esp+18h] [ebp-24h]

 v0 = (int *)operator new(4u);
 *v0 = (int)off_4E48;
 obj2 = (RTTIBase *)operator new(4u);
 obj2->_vptr_RTTIBase = (int (**)(...))off_4E5C;
 v7 = *v0;
 v1 = *(const char **)(*(unsigned int *)(*v0 - 4) + 4);
 if ( v1 == "12RTTIDerivedA" )
 {
 v2 = 30;
 }
 else if ( *v1 == 42 )
 {
 v2 = 20;
 }
 else
 {
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 30 : 20;
 }
 v3 = v2;
 if ( __dynamic_cast(
        v0,
        (const struct __class_type_info *)&typeid(RTTIBase),
        (const struct __class_type_info *)&typeid(RTTIDerivedA),
        0) )
 {
   v3 += 100;
 }
 if ( __dynamic_cast(
        obj2,
        (const struct __class_type_info *)&typeid(RTTIBase),
        (const struct __class_type_info *)&typeid(RTTIDerivedB),
        0) )
 {
 v3 += 200;
 }
 v4 = strlen(&v1[*v1 == 42]) + v3;
 (*(void ( **)(int *))(v7 + 4))(v0);
 (*((void ( **)(RTTIBase *))obj2->_vptr_RTTIBase + 1))(obj2);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x18C0 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // esi
 double v2; // [esp+10h] [ebp-4Ch]
 int a; // [esp+20h] [ebp-3Ch] BYREF
 int b; // [esp+24h] [ebp-38h] BYREF
 unsigned short s[4]; // [esp+2Ch] [ebp-30h] BYREF
 int v6; // [esp+34h] [ebp-28h]
 int v7; // [esp+38h] [ebp-24h]
 int v8; // [esp+3Ch] [ebp-20h]
 int v9; // [esp+40h] [ebp-1Ch]
 int v10; // [esp+44h] [ebp-18h]
 short v11; // [esp+48h] [ebp-14h]
 char v12; // [esp+4Ah] [ebp-12h]
 char v13; // [esp+4Bh] [ebp-11h]
 unsigned int v14; // [esp+4Ch] [ebp-10h]

 v14 = __readgsdword(0x14u);
 puts(asc_3018);
 v12 = 0;
 v11 = 0;
 strcpy((char *)s, "Test");
 HIBYTE(s[2]) = 0;
 s[3] = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v13 = 0;
 v0 = strlen((const char *)s);
 __printf_chk(1, &unk_303C, v0 + 4700);
 __printf_chk(1, &unk_305A, 1001 * LifecycleClass::instance_count + 21);
 __printf_chk(1, &unk_3076, 42);
 __printf_chk(1, &unk_3092, 71);
 __printf_chk(1, &unk_30AE, 650);
 __printf_chk(1, &unk_30CB, 22);
 v1 = template_max<int>(3, 7);
 a = 10;
 v2 = template_max<double>(2.5, 1.5);
 b = 20;
 template_swap<int>(&a, &b);
 __printf_chk(1, &unk_30E7, b + a + v1 + (int)v2);
 __printf_chk(1, &unk_3103, 16);
 __printf_chk(1, &unk_311F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AE0 */
int Base::virtual_func(int x)
{
 Base *this = (Base *)__builtin_get_object_ptr();
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AF0 */
const char * Base::getName() const
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B10 */
Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B20 */
int Derived::virtual_func(int x)
{
 return multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B40 */
const char * Derived::getName() const
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B60 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B70 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B80 */
int non_virtual_thunk_to_MultiDerived__funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B90 */
int MiddleA::func()
{
 MiddleA *this = (MiddleA *)__builtin_get_object_ptr();
 return this->dataA + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1BB0 */
int virtual_thunk_to_MiddleA__func(MiddleA *this)
{
 return this->dataA + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1BD0 */
int MiddleB::func(MiddleB *this)
{
 return this->dataB + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1BF0 */
int virtual_thunk_to_MiddleB__func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB
 + *((unsigned int *)this->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&this->_vptr_MiddleB + *((unsigned int *)this->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C10 */
int DiamondDerived::func()
{
 return dataA + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C30 */
int virtual_thunk_to_DiamondDerived__func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA
 + *((unsigned int *)this->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&this->_vptr_MiddleA + *((unsigned int *)this->_vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C50 */
int non_virtual_thunk_to_DiamondDerived__func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(&this[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1C70 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1C80 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1C90 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1CA0 */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1CB0 */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1CC0 */
void virtual_thunk_to_DiamondDerived_D1(DiamondDerived *this)
{
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1CD0 */
void non_virtual_thunk_to_DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1CE0 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1CF0 */
void non_virtual_thunk_to_MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D00 */
Derived::~Derived()
{
}


/* Function: _ZN4BaseD0Ev @ 0x1D10 */
Base::~Base()
{
}


/* Function: _ZN7DerivedD0Ev @ 0x1D40 */
Derived::~Derived()
{
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D70 */
MultiDerived::~MultiDerived()
{
 operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DA0 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this)
{
 operator delete(&this[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DD0 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E00 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1E30 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1E60 */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned int *)this->_vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1E90 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1EC0 */
int template_max<int>(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1EE0 */
double template_max<double>(double a, double b)
{
 long double v2; // fst6

 v2 = a;
 if ( a <= (long double)b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1F00 */
void template_swap<int>(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1F20 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1F30 */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // edx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1F50 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1F80 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1F90 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1FA0 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // edx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1FD0 */
double Container<double>::get(Container<double> *this, int idx)
{
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2000 */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: __x86.get_pc_thunk.ax @ 0x200C */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x2010 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2020 */
void _stack_chk_fail_local()
{
 __asm { add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x208C */
void term_proc()
{
 _do_global_dtors_aux();
}


int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: __stack_chk_fail @ 0x505C */

/* FAILED to decompile: __dynamic_cast @ 0x5060 */

/* FAILED to decompile: __cxa_rethrow @ 0x5068 */

/* FAILED to decompile: puts @ 0x506C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5070 */

/* FAILED to decompile: __cxa_end_catch @ 0x5074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5078 */

/* FAILED to decompile: __cxa_throw @ 0x507C */

/* FAILED to decompile: _Unwind_Resume @ 0x5080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5084 */

/* Total functions decompiled: 95, failed: 20 */
