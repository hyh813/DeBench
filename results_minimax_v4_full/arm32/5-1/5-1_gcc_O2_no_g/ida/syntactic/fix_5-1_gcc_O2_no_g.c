/* Auto-injected type definitions by preprocessor */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <typeinfo>
#include <new>
#include <ios>

/* Typeinfo declarations for RTTI */
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
extern struct type_info typeinfo_for_int;

/* Virtual table and typeinfo pointers */
extern void *off_1162C;
extern void *off_11640;

/* _dynamic_cast declaration */
void *_dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, long);

/* std::ios_base::Init::__ioinit declaration */
namespace std {
    static ios_base::Init __ioinit;
}

/* Forward declarations for template functions */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

/* Class definitions */
class Base {
public:
    virtual int virtual_func(int a2);
    virtual const char *getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    virtual int virtual_func(int a2) override;
    virtual const char *getName() override;
    virtual ~Derived();
    int member;
};

class MiddleA {
public:
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB {
public:
    virtual int func();
    virtual ~MiddleB();
};

class MultiDerived : public Derived, public MiddleA, public MiddleB {
public:
    virtual int funcA();
    virtual int funcB();
    virtual int func() override;
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func() override;
    virtual ~DiamondDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA;
class RTTIDerivedB;
class RTTIDerivedA : public RTTIBase {
public:
    virtual int getType();
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual int getType();
    virtual ~RTTIDerivedB();
};

template<typename T>
class Container {
public:
    Container();
    int push(T value);
    T get(int index);
    int getSize();
};

template<>
class Container<int> {
public:
    Container();
    int push(int value);
    int get(int index);
    int getSize();
    int data[10];
    int size;
};

template<>
class Container<double> {
public:
    Container();
    int push(double value);
    long long get(int index);
    int getSize();
    long long data[10];
    int size;
};

/* Forward declarations for classes with static members */
class LifecycleClass {
public:
    static int instance_count;
};
class ContainerInt;
class ContainerDouble;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// typedef long intptr_t;
// typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O2_no_g
 * Processor: arm
 */

/* Forward declarations for CRT weak functions */
extern int call_weak_fn(void);
extern "C" void __cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void*, const std::type_info*, void(*)());

/* Forward declarations for test functions */
void test_cpp_oo_features(void);

/* Forward declarations for CRT functions */
extern "C" int __printf_chk(int flag, const char *format, ...);
extern "C" int _printf_chk(int flag, const char *format, ...);

/* String constants used in the binary */
const char unk_11474[] = "Result: %d\n";
const char unk_11494[] = "Constructor: %d\n";
const char unk_114B0[] = "Virtual func: %d\n";
const char unk_114CC[] = "Multiple inheritance: %d\n";
const char unk_114E8[] = "Diamond inheritance: %d\n";
const char unk_11508[] = "Operator overload: %d\n";
const char unk_11524[] = "Template func: %d\n";
const char unk_11540[] = "Template class: %d\n";
const char unk_1155C[] = "Lambda: %d\n";

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1092C @ 0x1092C */
void sub_1092C()
{
}


/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (const std::type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Forward declarations for CRT functions */
extern "C" void *__dso_handle;
extern "C" int _aeabi_atexit(void *, void *, void *);

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10B28 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 return _aeabi_atexit((void *)&std::__ioinit, nullptr, &__dso_handle);
}



/* Forward declarations for CRT weak functions */
extern int call_weak_fn(void);
extern "C" void __cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void*, const std::type_info*, void(*)());

/* Forward declarations for test functions */
void test_cpp_oo_features(void);




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 (void)strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(unsigned int a1)
{
 return a1 + 1;
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

 (void)a1;
 (void)a2;
 (void)a3;
 v3 = template_max<int>(3, 7);
 v4 = template_max<double>(0.0, 1074003968.0);
 v6 = 10;
 v7 = 20;
 (void)template_swap<int>(&v6, &v7);
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
 void *v0; // r5
 void *v1; // r4
 int v2; // r0
 int v3; // r6
 const char *v4; // r0
 size_t v5; // r6

 v0 = (void *)operator new(4u);
 *(void **)v0 = off_1162C;
 v1 = (void *)operator new(4u);
 v2 = *(int *)(*(char **)v0 - 4);
 *(void **)v1 = off_11640;
 if ( *(unsigned int *)(*(char **)v0 - 4) == (unsigned int)&typeinfo_for_RTTIDerivedA )
 v3 = 10;
 else
 v3 = 0;
 if ( *(unsigned int *)(*(char **)v1 - 4) == (unsigned int)&typeinfo_for_RTTIDerivedB )
 v3 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( *v4 == 42 )
 ++v4;
 v5 = v3 + strlen(v4);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v5;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x10EC8 */
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r2
 int v5; // r0
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 puts("Test");
 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 v0 = strlen(dest);
 (void)_printf_chk(1, unk_11474, v0 + 4700);
 v1 = test_cpp_constructor();
 (void)_printf_chk(1, &unk_11494, v1);
 (void)_printf_chk(1, &unk_114B0, 42);
 (void)_printf_chk(1, &unk_114CC, 71);
 v2 = test_cpp_diamond_inheritance();
 (void)_printf_chk(1, &unk_114E8, v2);
 v3 = test_cpp_operator_overload();
 (void)_printf_chk(1, &unk_11508, v3);
 v5 = test_cpp_template_func(3, 7, 10);
 (void)_printf_chk(1, &unk_11524, v5);
 (void)_printf_chk(1, &unk_11540, 16);
 (void)_printf_chk(1, &unk_1155C, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x11048 */
int Base::virtual_func(int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x11050 */
const char * Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1105C */
Base::~Base()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x11060 */
int Derived::virtual_func(int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1106C */
const char * Derived::getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11078 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11080 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11090 */
int MiddleA::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x110CC */
int MiddleB::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11108 */
int DiamondDerived::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1115C */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11164 */
int RTTIDerivedB::getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1116C */
void RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11170 */
RTTIDerivedA::~RTTIDerivedA()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11174 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11190 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1119C */
Derived::~Derived()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x111A0 */
Base::~Base()
{
 operator delete((void*)this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x111B8 */
Derived::~Derived()
{
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x111D0 */
MultiDerived::~MultiDerived()
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x11204 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1121C */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11234 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1128C */
template<> int template_max<int>(int result, int a2)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11298 */
long long template_max<double>(double a1, double a2)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return *(unsigned long long *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x112C8 */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x112DC */
Container<int>::Container(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x112E8 */
int Container<int>::push(int result, int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11300 */
int Container<int>::get(int a1, int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11324 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1132C */
Container<double>::Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x11338 */
int Container<double>::push(int result, int a2, int a3, int a4)
{
 int v5; // r3
 int v7; // r2
 unsigned int *v8; // r3

 v5 = *(unsigned int *)(result + 80);
 if ( v5 <= 9 )
 {
 v7 = v5 + 1;
 v8 = (unsigned int *)(result + 8 * v5);
 *(unsigned int *)(result + 80) = v7;
 *v8 = a3;
 v8[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x11368 */
long long Container<double>::get(int a1, int a2)
{
 if ( a2 >= 0 && a2 < *(unsigned int *)(a1 + 80) )
 return *(unsigned long long *)(a1 + 8 * a2);
 else
 return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11394 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1139C */
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
