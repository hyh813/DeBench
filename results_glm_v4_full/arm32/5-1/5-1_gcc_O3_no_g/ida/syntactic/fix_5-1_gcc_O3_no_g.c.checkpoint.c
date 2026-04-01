#include <string.h>
#include <stdio.h>
#include <new>
#include <typeinfo>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for C++ runtime types */
struct __class_type_info;

/* Forward declarations for template specializations */
template<typename T> T template_max(T a, T b, T c = T(), T d = T());
template<typename T> void template_swap(T* a, T* b);

template<> int template_max<int>(int result, int a2, int, int);
template<> double template_max<double>(double a1, double a2, double, double);
template<> void template_swap<int>(int *result, int *a2);

/* Dynamic cast declaration from C++ runtime */
extern void* __dynamic_cast(void* src_ptr, const struct __class_type_info* src_type, const struct __class_type_info* dst_type, ptrdiff_t src2dst_offset);

/* C++ exception handling runtime functions */
extern void* __cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void* thrown_exception, std::type_info* tinfo, void (*dest)(void*));

/* ARM EABI atexit function */
extern int __aeabi_atexit(void* object, void (*destructor)(void*), void* dso_handle);

/* Forward declarations for C++ classes */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    ios_base::Init __ioinit;
}

/* Static wrapper for ios_base::Init destructor */
static inline void ios_init_destructor_wrapper(void* obj) {
    ((std::ios_base::Init*)obj)->~Init();
}

/* Forward declaration for test function */
void test_cpp_oo_features(void);

/* CRT stub function declarations */
extern int call_weak_fn(void);

/* Stub implementations for missing functions */

/* C++ exception handling stubs */
void* __cxa_allocate_exception(size_t thrown_size) {
    /* Stub - allocate memory for exception */
    static unsigned char exception_buffer[64];
    static int in_use = 0;
    if (!in_use && thrown_size <= 64) {
        in_use = 1;
        return exception_buffer;
    }
    return 0;
}

void __cxa_throw(void* thrown_exception, std::type_info* tinfo, void (*dest)(void*)) {
    /* Stub - would normally throw the exception */
    /* For decompilation purposes, just prevent crash */
    while (1) {
        /* Infinite loop to simulate exception being thrown */
    }
}

/* ARM EABI atexit stub */
int __aeabi_atexit(void* object, void (*destructor)(void*), void* dso_handle) {
    /* Stub - would register destructor */
    return 0;
}

/* Weak function stub */
int call_weak_fn(void) {
    return 0;
}

/* JUMPOUT macro for IDA decompilation */
#define JUMPOUT(x) do {} while(0)

class Base {
public:
    virtual int virtual_func(int a2);
    virtual const char * getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    virtual int virtual_func(int a2);
    virtual const char * getName();
    virtual ~Derived();
};

class MiddleA : virtual public Base {
public:
    virtual int func();
};

class MiddleB : virtual public Base {
public:
    virtual int func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class MultiDerived {
public:
    int funcA();
    int funcB();
    virtual ~MultiDerived();
};

class RTTIDerivedA {
public:
    virtual int getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB {
public:
    virtual int getType();
    virtual ~RTTIDerivedB();
};

class LifecycleClass {
public:
    static int instance_count;
};

/* RTTI type info declarations */
extern const std::type_info typeinfo_for_RTTIDerivedA;
extern const std::type_info typeinfo_for_RTTIDerivedB;
extern const std::type_info typeinfo_for_RTITIBase;

/* Use standard type_info for int - defined by <typeinfo> header */
static const std::type_info& typeinfo_for_int = typeid(int);

/* Vtable pointers for RTTI objects */
extern const unsigned int off_116B4;
extern const unsigned int off_116C8;

/* External symbols */
void *_dso_handle = NULL;

static const char s[] = "C++ OO Features Test";

/* Format string constants */
extern const char unk_114FC[];
extern const char unk_1151C[];
extern const char unk_11538[];
extern const char unk_11554[];
extern const char unk_11570[];
extern const char unk_11590[];
extern const char unk_115AC[];
extern const char unk_115C8[];
extern const char unk_115E4[];

/* printf_chk declaration */
extern int __printf_chk(int flag, const char *format, ...);

/* Define the static member */
int LifecycleClass::instance_count = 0;

/* Forward declarations for Container classes */
template<typename T> class Container {
public:
    Container();
    void push(T value);
    T get(int index);
    int getSize();
private:
    T data[10];
    int count;
};

/* Forward declarations for explicit specializations */
template<> Container<int>::Container();
template<> void Container<int>::push(int value);
template<> int Container<int>::get(int index);
template<> int Container<int>::getSize();

template<> Container<double>::Container();
template<> void Container<double>::push(double value);
template<> double Container<double>::get(int index);
template<> int Container<double>::getSize();

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1092C @ 0x1092C */
void sub_1092C()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (std::type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10B28 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 return __aeabi_atexit(reinterpret_cast<void*>(&std::__ioinit), reinterpret_cast<void (*)(void*)>(ios_init_destructor_wrapper), &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(void *a1)
{
 return (*(int (**)(void*))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v3; // r4
 double v4; // r6
 int v6; // [sp+4h] [bp-1Ch] BYREF
 int v7; // [sp+8h] [bp-18h] BYREF

 v3 = template_max<int>(3, 7, a1, a2);
 {
 double temp_result = template_max<double>(*(double*)&a1, *(double*)&a2);
 v4 = temp_result;
 }
 v6 = 10;
 v7 = 20;
 template_swap<int>(&v6, &v7);
 return (int)v4 + v3 + v6 + v7;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10DD0 */
size_t test_cpp_rtti(void)
{
 return 0;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x10ED4 */
void test_cpp_oo_features(void)
{
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x110D0 */
int Base::virtual_func(int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x110D8 */
const char * Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x110E4 */
Base::~Base()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x110E8 */
int Derived::virtual_func(int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x110F4 */
const char * Derived::getName()
{
 return "Derived";
}


/* Function: _ZN7DerivedD2Ev @ 0x110F8 */
Derived::~Derived()
{
 ;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11100 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11108 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11110 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11118 */
int MiddleA::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x11130 */
int virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11154 */
int MiddleB::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1116C */
int virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11190 */
int DiamondDerived::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x111A8 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x111CC */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*((unsigned int *)_this - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x111E4 */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x111EC */
int RTTIDerivedB::getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x111F4 */
RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x111F8 */
RTTIDerivedA::~RTTIDerivedA()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11200 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11210 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x11220 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD2Ev @ 0x11224 */
void non_virtual_thunk_to_DiamondDerived_D2Ev(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11218 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1121C */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x11228 */
static void Base_deleting_destructor(Base* _this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x11240 */
static void Derived_deleting_destructor(Derived* _this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11258 */
static void MultiDerived_deleting_destructor(MultiDerived* _this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11270 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *_this)
{
 operator delete((char *)_this - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1128C */
static void RTTIDerivedB_deleting_destructor(RTTIDerivedB* _this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x112A4 */
static void RTTIDerivedA_deleting_destructor(RTTIDerivedA* _this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x112BC */
static void DiamondDerived_deleting_destructor(DiamondDerived* _this)
{
 operator delete(_this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x112D4 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x112F8 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete((char *)_this - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11314 */
template<> int template_max<int>(int result, int a2, int, int)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11320 */
template<> double template_max<double>(double a1, double a2, double, double)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x11350 */
template<> void template_swap<int>(int *result, int *a2)
{
 int v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11364 */
template<>
Container<int>::Container()
{
 *(unsigned int *)(this + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x11370 */
template<>
void Container<int>::push(int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)(this + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(this + 40) = v2 + 1;
 *(unsigned int *)(this + 4 * v2) = a2;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11388 */
template<>
int Container<int>::get(int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(this + 40) > a2 )
 return *(unsigned int *)(this + 4 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x113AC */
template<>
int Container<int>::getSize()
{
 return *(unsigned int *)(this + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x113B4 */
template<>
Container<double>::Container()
{
 *(unsigned int *)(this + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x113C0 */
template<>
void Container<double>::push(double a2)
{
 int v5; // r3
 int v7; // r2
 unsigned int *v8; // r3
 unsigned int *a2_parts = (unsigned int *)&a2;

 v5 = *(unsigned int *)(this + 80);
 if ( v5 <= 9 )
 {
 v7 = v5 + 1;
 v8 = (unsigned int *)(this + 8 * v5);
 *(unsigned int *)(this + 80) = v7;
 *v8 = a2_parts[0];
 v8[1] = a2_parts[1];
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x113F0 */
template<>
double Container<double>::get(int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(this + 80) > a2 )
 return *(double *)(this + 8 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1141C */
template<>
int Container<double>::getSize()
{
 return *(unsigned int *)(this + 80);
}


/* Function: .term_proc @ 0x11424 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x22098 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x2209C */

/* FAILED to decompile: __imp_strncpy @ 0x220A0 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220A4 */

/* FAILED to decompile: __imp_abort @ 0x220A8 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220AC */

/* FAILED to decompile: __imp___libc_start_main @ 0x220B0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220B4 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220B8 */

/* FAILED to decompile: __imp___printf_chk @ 0x220BC */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220C0 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220C4 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220C8 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220CC */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220D0 */

/* FAILED to decompile: __imp_strlen @ 0x220D4 */

/* FAILED to decompile: __imp__Znwj @ 0x220D8 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220E0 */

/* FAILED to decompile: __imp_puts @ 0x220E4 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220E8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220F0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x220F4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x220FC */

/* Total functions decompiled: 70, failed: 25 */
