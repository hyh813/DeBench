/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O2_no_g
 * Processor: arm
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
#include <typeinfo>
#include <iostream>
#include <string>
extern "C" {
#else
// For C compatibility
typedef enum { false = 0, true = 1 } _Bool;
#endif

// Forward declarations for C++ exception handling
void *__cxa_allocate_exception(unsigned long);
void __cxa_throw(void *, const void *, void *);
int __cxa_atexit(void (*)(void *), void *, void *);
void *call_weak_fn(void);

// Forward declaration for typeid_int
extern const int typeid_int;

#ifdef __cplusplus
}

// C++ class forward declarations
class LifecycleClass {
public:
    static int instance_count;
};

// Forward declarations
class Base;
class Derived;
class MultiDerived;
class MiddleA;
class MiddleB;
class DiamondDerived;
class RTTIDerivedA;
class RTTIDerivedB;
template<typename T> class Container;

// Class definitions
class Base {
public:
    virtual long long virtual_func(int a2);
    virtual const char *getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    long long value;
    virtual long long virtual_func(int a2) override;
    virtual const char *getName() override;
    virtual ~Derived();
};

class MultiDerived : public Base, public Derived {
public:
    long long funcA();
    long long funcB();
    virtual ~MultiDerived();
};

class MiddleA {
public:
    long long func();
};

class MiddleB {
public:
    long long func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    long long func();
    virtual ~DiamondDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual long long getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual long long getType();
    virtual ~RTTIBase();
};

// Template function forward declarations
template<typename T> T template_max(T result, T a2);
template<typename T> void template_swap(T *result, T *a2);

// Forward declaration for test_cpp_oo_features
void test_cpp_oo_features(void);

// Forward declaration for std namespace (moved outside C++ block for main() access)
namespace std {
    extern "C" {
        char __ioinit;
    }
}
namespace std {
    namespace ios_base {
        class Init {
        public:
            Init();
            ~Init();
        };
    }
}
#endif

// Class definitions (for C++ compilation)
#ifdef __cplusplus
class LifecycleClass {
public:
    static int instance_count;
};

class Base {
public:
    virtual long long virtual_func(int a2);
    virtual const char *getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    long long value;
    virtual long long virtual_func(int a2) override;
    virtual const char *getName() override;
    virtual ~Derived();
};

class MultiDerived : public Base, public Derived {
public:
    long long funcA();
    long long funcB();
    virtual ~MultiDerived();
};

class MiddleA {
public:
    long long func();
};

class MiddleB {
public:
    long long func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    long long func();
    virtual ~DiamondDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual long long getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual long long getType();
    virtual ~RTTIDerivedB();
};

template<typename T> class Container;
#endif

/* Function: .init_proc @ 0xE90 */
#ifdef __cplusplus
long long init_proc()
{
 return call_weak_fn();
}
#endif

#ifndef __cplusplus
/* Function: .init_proc @ 0xE90 */
long long init_proc()
{
 return call_weak_fn();
}
#endif


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 return;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeid_int, 0);
}


// Forward declaration for test_cpp_oo_features
void test_cpp_oo_features(void);

#ifdef __cplusplus
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}
#endif


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
#ifdef __cplusplus
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}
#endif



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Forward declarations needed for template functions
template<typename T> T template_max(T result, T a2);
template<typename T> void template_swap(T *result, T *a2);

// Forward declarations needed
#ifdef __cplusplus
class LifecycleClass;
#endif

/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
long long test_cpp_member_func(void)
{
 char *v0; // x0
 char dest[36]; // [xsp+14h] [xbp+14h] BYREF

 v0 = strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(v0) + 4700;
}

/* Function: _Z20test_cpp_constructorv @ 0x1310 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int v4; // [xsp+20h] [xbp+20h] BYREF
 int v5; // [xsp+24h] [xbp+24h] BYREF

 template_max<int>(3, 7, &_stack_chk_guard, 0);
 v1 = v0;
 v2 = template_max<double>(2.5, 1.5);
 v4 = 10;
 v5 = 20;
 template_swap<int>(&v4, &v5);
 return (unsigned int)((int)v2 + v1 + v4 + v5);
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
long long test_cpp_rtti(void)
{
 int v0; // w19
 long long *v1; // x21
 void *v2; // x20
 long long v3; // x24
 const char *v4; // x23
 int v5; // w25
 int v6; // w19
 const char *v7; // x0
 unsigned int v8; // w19

 v0 = 10;
 v1 = (long long *)operator new(8u);
 *v1 = (long long)off_12C28;
 v2 = (void *)operator new(8u);
 v3 = *v1;
 v4 = *(const char **)(*(unsigned long long *)(*v1 - 8) + 8LL);
 *(unsigned long long *)v2 = off_12C50;
 v5 = *(unsigned char *)v4;
 if ( v4 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( v5 != 42 )
 {
 if ( !strcmp(v4, "12RTTIDerivedA") )
 v0 = 10;
 else
 v0 = 0;
 }
 }
 v6 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v2,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v5 == 42 )
 v7 = v4 + 1;
 else
 v7 = v4;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v2 + 8LL))(v2);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15B0 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 char v4[36]; // [xsp+24h] [xbp+24h] BYREF

 puts(asc_1B10);
 strncpy(v4, "Test", 0x1Fu);
 v4[31] = 0;
 v0 = strlen(v4);
 __printf_chk(1, &unk_1B38, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_1B58, v1);
 __printf_chk(1, &unk_1B78, 42);
 __printf_chk(1, &unk_1B98, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_1BB8, v2);
 __printf_chk(1, &unk_1BD8, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, &unk_1BF8, v3);
 __printf_chk(1, &unk_1C18, 16);
 __printf_chk(1, &unk_1C38, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1740 */
long long Base::virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1750 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1760 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1770 */
long long Derived::virtual_func(Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1780 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1790 */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17A0 */
#ifdef __cplusplus
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}
#endif


// Forward declaration for thunk function
long long thunk_MultiDerived_funcB(void *ptr);

/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x17B0 */
#ifdef __cplusplus
long long thunk_MultiDerived_funcB(void *ptr)
{
 return 40;
}
#endif


/* Function: _ZN7MiddleA4funcEv @ 0x17C0 */
long long MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x17E0 */
long long thunk_virtual_MiddleA_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1810 */
long long MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1830 */
long long thunk_virtual_MiddleB_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1860 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1880 */
long long thunk_virtual_DiamondDerived_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x18A4 */
long long thunk_nonvirtual_DiamondDerived_func(void *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x18C0 */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x18D0 */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x18E0 */
void RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x18F0 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1900 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1904
void thunk_virtual_DiamondDerived_dtor(void *this)
{
 ;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1910
void thunk_nonvirtual_DiamondDerived_dtor(void *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1920 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1924 */
void thunk_nonvirtual_MultiDerived_dtor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1930 */
void Derived::~Derived(Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1940 */
void Base::~Base(Base *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1950 */
void Derived::~Derived(Derived *this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1960 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1970 */
void thunk_nonvirtual_MultiDerived_dtor(MultiDerived *this)
{
 operator delete((char *)this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1980 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1990 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x19A0 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x19B0 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x19C4 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x19D0 */
long long template_max<int>(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x19E0 */
double template_max<double>(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x19F0 */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1A10 */
long long Container<int>::Container(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1A20 */
long long Container<int>::push(long long result, int a2)
{
 int v2; // w2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1A40 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 )
 {
 result = 0;
 if ( *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1A70 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1A80 */
long long Container<double>::Container(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1A90 */
long long Container<double>::push(long long result, double a2)
{
 int v2; // w1

 v2 = *(unsigned int *)(result + 80);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 80) = v2 + 1;
 *(double *)(result + 8LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1AB0 */
double Container<double>::get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1AD0 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1AD8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x130A0 */

/* FAILED to decompile: strlen @ 0x130A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x130B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x130B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: __libc_start_main @ 0x130E0 */

/* FAILED to decompile: _Znwm @ 0x130E8 */

/* FAILED to decompile: _ZdlPvm @ 0x130F0 */

/* FAILED to decompile: strncpy @ 0x130F8 */

/* FAILED to decompile: __dynamic_cast @ 0x13100 */

/* FAILED to decompile: __cxa_atexit @ 0x13108 */

/* FAILED to decompile: strcmp @ 0x13118 */

/* FAILED to decompile: __cxa_rethrow @ 0x13120 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x13128 */

/* FAILED to decompile: abort @ 0x13130 */

/* FAILED to decompile: __cxa_end_catch @ 0x13138 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x13140 */

/* FAILED to decompile: __cxa_throw @ 0x13148 */

/* FAILED to decompile: _Unwind_Resume @ 0x13150 */

/* FAILED to decompile: __printf_chk @ 0x13158 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13160 */

/* FAILED to decompile: __gmon_start__ @ 0x13170 */

/* Total functions decompiled: 70, failed: 23 */
