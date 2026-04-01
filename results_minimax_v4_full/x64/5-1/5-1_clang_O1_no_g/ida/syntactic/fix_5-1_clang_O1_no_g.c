/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O1_no_g
 * Processor: pc
 */

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <typeinfo>
#include <new>
#include <cxxabi.h>
#include <iostream>
#include <cmath>

// Global constant used in test_cpp_member_func
static const unsigned long long xmmword_3262[2] = {0x747365745f70705f, 0x5f74736572547467}; // "cpp_test_string"

// External runtime functions
extern "C" {
    void (*_gmon_start__)(void);
    int __cxa_atexit(void (*)(void*), void*, void*);
    void* __cxa_allocate_exception(size_t);
    void* __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void __cxa_rethrow();
    int __gxx_personality_v0(...);
    void _Unwind_Resume();
    void* __dynamic_cast(const void*, const __cxxabiv1::__class_type_info*, const __cxxabiv1::__class_type_info*, ptrdiff_t);
}

void __cxa_throw(void*, const std::type_info*, void*);

// Class declarations
class Base {
public:
    virtual long long virtual_func(int a2);
    virtual ~Base();
    virtual const char* getName();
};

class Derived : public Base {
public:
    long long virtual_func(int a2) override;
    const char* getName() override;
    ~Derived() override;
};

class LifecycleClass {
public:
    static int instance_count;
};

class BaseA {
public:
    virtual long long funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    virtual long long funcB();
    virtual ~BaseB();
};

class MultiDerived : public BaseA, public BaseB {
public:
    long long funcA() override;
    long long funcB() override;
    ~MultiDerived() override;
};

class VirtualBase {
public:
    virtual long long func();
    virtual ~VirtualBase();
};

class MiddleA : virtual public VirtualBase {
public:
    long long func() override;
    ~MiddleA() override;
};

class MiddleB : virtual public VirtualBase {
public:
    long long func() override;
    ~MiddleB() override;
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    long long func() override;
    ~DiamondDerived() override;
};

class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual long long getType() = 0;
};

class RTTIDerivedA : public RTTIBase {
public:
    ~RTTIDerivedA() override;
    long long getType() override;
};

class RTTIDerivedB : public RTTIBase {
public:
    ~RTTIDerivedB() override;
    long long getType() override;
};

template<typename T>
class Container {
public:
    T data[10];
    unsigned int size;
    Container();
    long long push(T value);
    T get(int index);
    long long getSize();
};

// Template specializations
template<>
Container<int>::Container() {
    // Constructor implementation
}

template<>
long long Container<int>::push(int value) {
    // push implementation
    return 0;
}

template<>
int Container<int>::get(int index) {
    // get implementation
    return 0;
}

template<>
long long Container<int>::getSize() {
    // getSize implementation
    return 0;
}

template<>
Container<double>::Container() {
    // Constructor implementation
}

template<>
long long Container<double>::push(double value) {
    // push implementation
    return 0;
}

template<>
double Container<double>::get(int index) {
    // get implementation
    return 0.0;
}

template<>
long long Container<double>::getSize() {
    // getSize implementation
    return 0;
}

// Template functions
template<typename T>
T template_max(T a, T b);

template<>
unsigned int template_max(unsigned int a, unsigned int b)
{
 unsigned int result; // rax

 result = b;
 if ( a > b )
 return a;
 return result;
}


template<>
double template_max(double a, double b)
{
 return fmax(a, b);
}


template<typename T>
void template_swap(T& a, T& b);

template<>
void template_swap(unsigned int& a, unsigned int& b)
{
 unsigned int result; // rax

 result = a;
 a = b;
 b = result;
}

// Global variables
extern void* _dso_handle;
static std::ios_base::Init __ioinit;

// String literals for printf format strings
static const char aCppL302D[] = "CppL30: %d\n";
static const char aCppL303D[] = "CppL31: %d\n";
static const char aCppL304D[] = "CppL32: %d\n";
static const char aCppL305D[] = "CppL33: %d\n";
static const char aCppL306D[] = "CppL34: %d\n";
static const char aCppL307D[] = "CppL35: %d\n";
static const char aCppL308D[] = "CppL36: %d\n";
static const char aCppL309D[] = "CppL37: %d\n";

// Virtual table pointers
static void* off_59C8;
static void* off_5A08;
static void* off_5A50;
static void* off_5A80;
static void* off_5B58;
static void* off_5B88;
static void* off_5BC0;
static void* off_5D78;
static void* off_5DA0;

// Static member definitions
int LifecycleClass::instance_count = 0;

/* Function: .init_proc @ 0x2000 */
void (*init_proc())(void)
{
 void (*result)(void); // rax

 result = _gmon_start__;
 if ( _gmon_start__ )
 _gmon_start__();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 // Empty stub function
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x2150 */
int GLOBAL__sub_I_5_1_cpp()
{
 return __cxa_atexit([](void *p) { ((std::ios_base::Init*)p)->~Init(); }, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2270 */
long long test_cpp_member_func(void)
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF

 *(unsigned long long *)s = xmmword_3262[0];
 *(unsigned long long *)&s[8] = xmmword_3262[1];
 return (unsigned int)strlen((const char*)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v0[2] + LifecycleClass::instance_count;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return (unsigned int)(v3 + 1000 * LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 Base v2; // [rsp+8h] [rbp-20h]
 int v3; // [rsp+10h] [rbp-18h]
 long long ( **v4)(Base *__hidden, int); // [rsp+18h] [rbp-10h] BYREF

 v4 = &off_59C8;
 v3 = 3;
 v0 = v2.virtual_func(5);
 return v0 + v2.virtual_func(5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2380 */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // ebx
 void *v2; // [rsp+8h] [rbp-30h] BYREF
 int v3; // [rsp+10h] [rbp-28h]
 void *v4; // [rsp+18h] [rbp-20h] BYREF
 int v5; // [rsp+20h] [rbp-18h]

 v2 = (void *)&off_5A50;
 v4 = (void *)&off_5A80;
 v3 = 100;
 v5 = 200;
 v0 = ((long long (*)(MultiDerived *))off_5A50)((MultiDerived *)v2);
 return v0 + ((long long (*)(MultiDerived *))off_5A80)((MultiDerived *)v4) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebp
 unsigned int v2[2]; // [rsp+10h] [rbp-38h]
 long long (*v3)(DiamondDerived *__hidden); // [rsp+18h] [rbp-30h]
 long long (*v4)(DiamondDerived *__hidden); // [rsp+28h] [rbp-20h] BYREF
 int v5; // [rsp+30h] [rbp-18h]

 v4 = (long long (*)(DiamondDerived *__hidden))&off_5BC0;
 v3 = (long long (*)(DiamondDerived *__hidden))&off_5B88;
 v5 = 50;
 v0 = v3((DiamondDerived *)v3);
 *(unsigned int *)((char *)v2 + 8) = 100;
 return v0 + (unsigned int)v4((DiamondDerived *)v4);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2450 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2460 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x2470 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x2480 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2490 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
    __cxa_throw(exception, &typeid(int), 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
long long test_cpp_rtti(void)
{
 void *v0; // r14
 void *v1; // r13
 const char *v2; // r15
 int v3; // ebx
 const char *v4; // rdi
 bool v5; // al
 int v6; // ebp
 int v7; // ebx
 int v8; // ebp
 int v9; // ebx

 v0 = (void *)operator new(8u);
 *(unsigned long long *)v0 = (unsigned long long)off_5D78;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_5DA0;
 v2 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8LL) + 8LL);
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
 if ( strcmp(*(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8LL) + 8LL), "12RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL) + 8LL);
 v5 = v4 == "12RTTIDerivedB" || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
    v7 = v6 + 100;
 if ( !__dynamic_cast(
 v0,
 (const __cxxabiv1::__class_type_info*)typeid(RTTIBase).name(),
 (const __cxxabiv1::__class_type_info*)typeid(RTTIDerivedA).name(),
 0) )
 v7 = v6;
 v8 = v7 + 200;
 if ( !__dynamic_cast(
 v1,
 (const __cxxabiv1::__class_type_info*)typeid(RTTIBase).name(),
 (const __cxxabiv1::__class_type_info*)typeid(RTTIDerivedB).name(),
 0) )
 v8 = v7;
 v9 = strlen(&v2[*v2 == 42]);
 (*(void ( **)(void *))(*(unsigned long long *)v0 + 8LL))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v8 + v9);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x26A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 long long v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rcx
 int v4; // ebx
 int v5; // ebx
 int v6; // eax
 int v7; // eax
 int v8; // ebp
 int v9; // eax
 unsigned char s[40]; // [rsp+0h] [rbp-48h] BYREF
 int v11; // [rsp+28h] [rbp-20h]
 long long ( **v12)(Base *__hidden, int); // [rsp+30h] [rbp-18h] BYREF

 puts(aCppL302D);
 *(unsigned long long *)&s[4] = xmmword_3262;
 memset(&s[19], 0, 17);
 *(unsigned int *)s = 10;
 v0 = strlen(&s[4]);
 v1 = 0;
 printf("%s", (unsigned int)(v0 + 4700));
 v2 = (unsigned int *)operator new[](0x14u);
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
 printf(aCppL302D, (unsigned int)(v4 + 1000 * LifecycleClass::instance_count));
 v12 = (long long (**)(Base *__hidden, int))&off_59C8;
 *(unsigned long long *)s = (unsigned long long)(long long*)&off_5A08;
 *(unsigned int *)&s[8] = 3;
 v5 = Base::virtual_func((Base *)s, 5);
 v6 = (*(long long (**)(unsigned char *, long long))s)(s, 5);
 printf(aCppL303D, (unsigned int)(v5 + v6 + 21));
 *(unsigned long long *)s = (unsigned long long)&off_5A50;
 *(unsigned long long *)&s[16] = (unsigned long long)&off_5A80;
 *(unsigned int *)&s[8] = 100;
 *(unsigned int *)&s[24] = 200;
 v7 = ((long long (*)(MultiDerived *))off_5A50)((MultiDerived *)((char*)s + 16));
 printf(aCppL304D, (unsigned int)(v7 + 31));
 *(unsigned long long *)s = (unsigned long long)&off_5B58;
 *(unsigned long long *)&s[32] = (unsigned long long)&off_5BC0;
 *(unsigned long long *)&s[16] = (unsigned long long)&off_5B88;
 v11 = 50;
 v8 = ((long long (*)(DiamondDerived *))off_5BC0)((DiamondDerived *)((char*)s + 32));
 *(unsigned int *)&s[*(unsigned long long *)(*(unsigned long long *)s - 24LL) + 8] = 100;
 v9 = (**(long long ( ***)(unsigned char *))&s[32])(&s[32]);
 printf(aCppL305D, (unsigned int)(v9 + v8));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x28F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2900 */
long long Base::virtual_func(int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
long long Derived::virtual_func(int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZN4BaseD2Ev @ 0x2920 */
Base::~Base()
{
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
// Already defined above as template specialization

/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
// Already defined above as template specialization

/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
// Already defined above as template specialization


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
Container<int>::Container(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
void Container<double>::Container(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double Container<double>::get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2A50 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A60 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2A70 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2A90 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
long long `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete((char *)this - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
long long BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2AF0 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x2B00 */
void BaseA::~BaseA(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2B10 */
long long BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2B20 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B30 */
void BaseB::~BaseB(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2B40 */
long long MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B60 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x2B70 */
void MiddleA::~MiddleA(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2B80 */
long long `virtual thunk to'MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
long long MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x2BE0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x2BF0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2C00 */
long long `virtual thunk to'MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
long long `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this - 16);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
long long `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
long long VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2D00 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2D10 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2D20 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2D30 */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2D40 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2D50 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2D60 */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x2D68 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x60E8 */

/* FAILED to decompile: printf @ 0x60F8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6100 */

/* FAILED to decompile: strlen @ 0x6108 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6110 */

/* FAILED to decompile: __libc_start_main @ 0x6120 */

/* FAILED to decompile: __cxa_atexit @ 0x6128 */

/* FAILED to decompile: _ZdlPv @ 0x6130 */

/* FAILED to decompile: _Znwm @ 0x6138 */

/* FAILED to decompile: __dynamic_cast @ 0x6140 */

/* FAILED to decompile: _ZdaPv @ 0x6148 */

/* FAILED to decompile: strcmp @ 0x6158 */

/* FAILED to decompile: __cxa_rethrow @ 0x6160 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x6168 */

/* FAILED to decompile: puts @ 0x6170 */

/* FAILED to decompile: __cxa_end_catch @ 0x6178 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6180 */

/* FAILED to decompile: __cxa_throw @ 0x6188 */

/* FAILED to decompile: _Unwind_Resume @ 0x6198 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x61A0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61A8 */

/* FAILED to decompile: __gmon_start__ @ 0x61B8 */

/* Total functions decompiled: 84, failed: 22 */
