#include <stdio.h>
#include <string.h>
#include <new>

/* HIBYTE macro for cross-platform compatibility */
#ifndef HIBYTE
#define HIBYTE(w) ((unsigned char)(((unsigned short)(w) >> 8) & 0xFF))
#endif

/* BYTE1 macro for accessing second byte of a 32-bit value */
#ifndef BYTE1
#define BYTE1(w) ((unsigned char)(((unsigned long)(w) >> 8) & 0xFF))
#endif

/* HIWORD macro for accessing high word of a 32-bit value */
#ifndef HIWORD
#define HIWORD(w) ((unsigned short)(((unsigned long)(w) >> 16) & 0xFFFF))
#endif

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

/* ssize_t - provided by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
/* ptrdiff_t is provided by stddef.h */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* C++ class stub definitions for decompiled code */
#define __need_ptrdiff_t
#include <stddef.h>

/* JUMPOUT macro for decompiled code */
#define JUMPOUT(x) __builtin_unreachable()

/* Stub declarations */
extern "C" int call_weak_fn();

/* std namespace stubs */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* External C++ runtime functions */
extern "C" {
    void _cxa_atexit(void (*)(void *), void *, void *);
    void *_dso_handle;
    void *_cxa_allocate_exception(size_t);
    void _cxa_throw(void *, struct type_info *, void *);
    void *_dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, ptrdiff_t);
}

struct type_info;
struct __class_type_info;

/* Base class definition */
struct Base {
    void **_vptr$Base;
    int virtual_func(int x);
    const char *getName() const;
    ~Base();
    static void operator delete(void *p);
};

void Base::operator delete(void *p) {
    ::operator delete(p);
}

/* Derived class definition */
struct Derived {
    void **_vptr$Base;
    int multiplier;
    int virtual_func(int x);
    const char *getName() const;
    ~Derived();
};

/* LifecycleClass definition */
struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Multi inheritance classes */
struct BaseA {
    void **_vptr$BaseA;
    int funcA();
    ~BaseA();
};

struct BaseB {
    void **_vptr$BaseB;
    int funcB();
    ~BaseB();
};

struct MultiDerived : BaseA, BaseB {
    int dataA;
    int dataB;
    int funcA();
    int funcB();
    ~MultiDerived();
};

/* Diamond inheritance classes */
struct MiddleA {
    void **_vptr$MiddleA;
    int dataA;
    int func();
    ~MiddleA();
};

struct MiddleB {
    void **_vptr$MiddleB;
    int dataB;
    int func();
    ~MiddleB();
};

struct DiamondDerived : MiddleA, MiddleB {
    int func();
    ~DiamondDerived();
};

/* Virtual base class */
struct VirtualBase {
    void **_vptr$VirtualBase;
    int func();
    ~VirtualBase();
};

/* RTTI classes */
struct RTTIBase {
    void **_vptr$RTTIBase;
    ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
    int getType() const;
    ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    int getType() const;
    ~RTTIDerivedB();
};

/* Template classes */
template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};



/* Typeinfo objects */
extern "C" {
    extern struct type_info typeinfo_for_RTITIBase;
    extern struct type_info typeinfo_for_RTITIDerivedA;
    extern struct type_info typeinfo_for_RTITIDerivedB;
    extern void *off_12CF0[];
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O1_g
 * Processor: arm
 */




/* Function: sub_B90 @ 0xB90 */
void sub_B90()
{
 JUMPOUT(0);
}






/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xE60 */
size_t test_cpp_member_func()
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 v1[2] = v1[2] & 0xFF;
 v1[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xED0 */
int test_cpp_constructor()
{
 void *v0; // r0
 int v1; // r1
 int i; // r2
 int v3; // r4
 int v4; // r6

 v0 = operator new[](0x14u);
 v1 = 0;
 for ( i = 0; i != -5; --i )
 {
 ((int*)v0)[-i] = v1;
 v1 += 10;
 }
 v3 = ++LifecycleClass::instance_count;
 v4 = ((int*)v0)[2];
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v4 + v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xF48 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Thunk functions for Base class vtable */
static inline int Base_virtual_func_thunk(Base *obj, int x) {
    return obj->virtual_func(x);
}

static inline const char *Base_getName_thunk(Base *obj) {
    return obj->getName();
}

static inline void Base_dtor_thunk(Base *obj) {
    obj->~Base();
}

/* Function: _Z21test_cpp_virtual_funcv @ 0xF64 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Derived v2; // [sp+4h] [bp-14h] BYREF
 Base v3; // [sp+Ch] [bp-Ch] BYREF

 static void *base_vtable[] = { (void*)(int(*)(Base*,int))Base_virtual_func_thunk, (void*)(const char*(*)(Base*))Base_getName_thunk, (void*)(void(*)(Base*))Base_dtor_thunk };
 v3._vptr$Base = base_vtable;
 v2._vptr$Base = base_vtable;
 v2.multiplier = 3;
 v0 = ((int (*)(Base *, int))*v3._vptr$Base)(&v3, 5);
 return v0 + ((int (*)(Derived *, int))*v2._vptr$Base)(&v2, 5) + 21;
}








/* Function: _Z26test_cpp_operator_overloadv @ 0x10D0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D8 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10E0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10E8 */
int test_cpp_lambda()
{
 return 85;
}





/* Function: _Z18test_cpp_smart_ptrv @ 0x11C0 */
int test_cpp_smart_ptr()
{
 return 703;
}








/* Function: main @ 0x1648 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_member_func();
 test_cpp_constructor();
 call_virtual_func(NULL, 0);
 test_cpp_operator_overload();
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 test_cpp_smart_ptr();
 return 0;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x165C */
int Base::virtual_func(int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1664 */
int Derived::virtual_func(int x)
{
 return this->multiplier * x;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1674 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1678 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x167C */
template<typename T>
T template_max(T a, T b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1688 */
template<>
double template_max<double>(double a, double b)
{
 double v2; // r5

 v2 = b;
 if ( a > b )
 return a;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16BC */
void template_swap(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16D0 */
template<>
Container<int>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16DC */
template<>
void Container<int>::push(int value)
{
 int size; // r2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F4 */
template<>
int Container<int>::get(int idx) const
{
 int result;

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1714 */
template<>
int Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x171C */
template<>
Container<double>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1728 */
template<>
void Container<double>::push(double value)
{
 int size; // r12

 size = this->size;
 if ( size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x174C */
template<>
double Container<double>::get(int idx) const
{
 double result;

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1778 */
template<>
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1780 */
const char * Base::getName() const
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1790 */
Base::~Base()
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x17A0 */
const char * Derived::getName() const
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x17B0 */
Derived::~Derived()
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x17C0 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x17C8 - deleting destructor */
void _ZN12MultiDerivedD0Ev(MultiDerived *_this)
{
 operator delete(_this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17D8 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x17E0 */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x17E8 */
void non_virtual_thunk_to_MultiDerived_MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x17EC */
void non_virtual_thunk_to_MultiDerived_MultiDerived(MultiDerived *_this)
{
 operator delete(static_cast<void*>((char *)reinterpret_cast<char*>(_this) - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1800 */
int BaseA::funcA()
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1808 */
BaseA::~BaseA()
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x180C - deleting destructor */
void _ZN5BaseAD0Ev(BaseA *_this)
{
 operator delete(_this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x181C */
int BaseB::funcB()
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1824 */
BaseB::~BaseB()
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1828 - deleting destructor */
void _ZN5BaseBD0Ev(BaseB *_this)
{
 operator delete(_this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1838 */
int MiddleA::func()
{
 return 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1850 */
MiddleA::~MiddleA()
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1854 - deleting destructor */
void _ZN7MiddleAD0Ev(MiddleA *_this)
{
 operator delete(_this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1864 */
int virtual_thunk_to_MiddleA_func()
{
 return 150;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1884 */
void virtual_thunk_to_MiddleA_D1(MiddleA *__this)
{
 ;
}

/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1888 */
void virtual_thunk_to_MiddleA_D0(MiddleA *__this)
{
 operator delete(static_cast<void*>((char *)__this + *(unsigned int *)(*(unsigned int *)(char *)__this - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A4 */
int MiddleB::func()
{
 return 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x18BC */
MiddleB::~MiddleB()
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x18C0 - deleting destructor */
void _ZN7MiddleBD0Ev(MiddleB *_this)
{
 operator delete(_this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x18D0 */
int virtual_thunk_to_MiddleB_func()
{
 return 200;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x18F0 */
void virtual_thunk_to_MiddleB_D1(MiddleB *__this)
{
 ;
}

/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x18F4 */
void virtual_thunk_to_MiddleB_D0(MiddleB *__this)
{
 operator delete(static_cast<void*>((char *)__this + *(unsigned int *)(*(unsigned int *)(char *)__this - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1910 */
int DiamondDerived::func()
{
 return 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1928 - deleting destructor */
void _ZN14DiamondDerivedD0Ev(DiamondDerived *_this)
{
 operator delete(_this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1938 */
int non_virtual_thunk_to_DiamondDerived_func()
{
 return 250;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1950 */
void non_virtual_thunk_to_DiamondDerived_D1()
{
 ;
}

/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1954 */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *_this)
{
 operator delete(static_cast<void*>((char *)reinterpret_cast<char*>(_this) - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1968 */
int virtual_thunk_to_DiamondDerived_func()
{
 return 250;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1988 */
void virtual_thunk_to_DiamondDerived_D1(DiamondDerived *__this)
{
 ;
}

/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x198C */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *__this)
{
 operator delete(static_cast<void*>((char *)__this + *(unsigned int *)(*(unsigned int *)(char *)__this - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x19A8 */
int VirtualBase::func()
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x19B0 */
VirtualBase::~VirtualBase()
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x19B4 - deleting destructor */
void _ZN11VirtualBaseD0Ev(VirtualBase *_this)
{
 operator delete(_this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x19C4 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x19D4 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x19DC */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x19E0 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19F0 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x19F8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x130CC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x130D0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x130D4 */

/* FAILED to decompile: __imp_printf @ 0x130D8 */

/* FAILED to decompile: __imp_puts @ 0x130DC */

/* FAILED to decompile: __imp___libc_start_main @ 0x130E4 */

/* FAILED to decompile: __imp__Znaj @ 0x130E8 */

/* FAILED to decompile: __imp_abort @ 0x130EC */

/* FAILED to decompile: __imp__ZdlPv @ 0x130F0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x130F4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x130F8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x130FC */

/* FAILED to decompile: __imp__ZdaPv @ 0x13100 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x13108 */

/* FAILED to decompile: __imp_strlen @ 0x1310C */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x13110 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x13114 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x13118 */

/* FAILED to decompile: __imp_strcmp @ 0x1311C */

/* FAILED to decompile: __imp___cxa_throw @ 0x13120 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x13124 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x1312C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13130 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13134 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1313C */

/* Total functions decompiled: 85, failed: 25 */
