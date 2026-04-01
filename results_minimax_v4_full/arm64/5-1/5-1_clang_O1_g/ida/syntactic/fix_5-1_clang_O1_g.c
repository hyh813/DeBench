/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O1_g
 * Processor: arm
 */

// CRITICAL: This file MUST be compiled as C++
// Compile with: g++ -o output 5-1.cpp
// OR: clang++ -o output 5-1.cpp
// OR rename to .cpp extension

#ifndef __cplusplus
#error This file must be compiled as C++ (use .cpp extension or compile with g++/clang++)
#endif

#include <stdio.h>
#include <stdlib.h>  // for malloc/free
#include <string.h>

// Stub for std::ios_base::Init - avoids needing full <iostream>
namespace std {
    struct ios_base {
        struct Init {
            Init() {}
            ~Init() {}
        };
    };
    static ios_base::Init __ioinit;
}
int off_139A8;  // Base vtable
int off_13A30;  // MultiDerived vtable for BaseA
int off_13A60;  // MultiDerived vtable for BaseB
int off_13B38;  // DiamondDerived vtable for MiddleA
int off_13BA0;  // DiamondDerived vtable for MiddleB
int off_13B68;  // DiamondDerived vtable
int off_13D58;  // RTTI type info
int off_13D80;  // RTTI type info
int off_139E8;  // Derived vtable
int off_13C08;  // Additional vtable
int off_13C78;  // Additional vtable

// External CRT functions - these are provided by the C++ runtime
extern "C" {
void __cxa_throw(void* exception, void* typeinfo, void* dest);
void* __cxa_allocate_exception(unsigned int size);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch();
void __cxa_rethrow();
void __gxx_personality_v0();
int __dynamic_cast(const void* src, const void* src_typeinfo, const void* dst_typeinfo, long long adjust);
}

// Weak function stub - provided by linker
__attribute__((weak)) long long call_weak_fn();

// Forward declarations - must be at the top before any usage
class Base;
class Derived;
class DiamondDerived;
class MultiDerived;
class BaseA;
class BaseB;
class MiddleA;
class MiddleB;
class VirtualBase;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;

// Class definitions
class Base {
public:
    int value;
    int (**_vptr$Base)(void);
    virtual int virtual_func(int x);
    virtual ~Base();
    const char* getName() const;
};

class Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) override;
    virtual ~Derived();
    const char* getName() const;
};

class BaseA {
public:
    int dataA;
    int (**_vptr$BaseA)(void);
    virtual int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    int dataB;
    int (**_vptr$BaseB)(void);
    virtual int funcB();
    virtual ~BaseB();
};

class MultiDerived : public BaseA, public BaseB {
public:
    virtual int funcA() override;
    virtual int funcB() override;
    virtual ~MultiDerived();
};

class MiddleA : public VirtualBase {
public:
    int dataA;
    int (**_vptr$MiddleA)(void);
    virtual int func() override;
    virtual ~MiddleA();
};

class MiddleB : public VirtualBase {
public:
    int dataB;
    int (**_vptr$MiddleB)(void);
    virtual int func() override;
    virtual ~MiddleB();
};

class VirtualBase {
public:
    virtual int func() = 0;
    virtual ~VirtualBase();
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

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    int getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    int getType() const;
};

// LifecycleClass declaration - must be defined before use
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Container class template declarations
template<typename T>
class Container {
public:
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/* Function: .init_proc @ 0x1618 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1630 @ 0x1630 */
void sub_1630()
{
 // JUMPOUT - was unreachable code in original binary
 return;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x17C0 */
void GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* Function: _Z20test_cpp_member_funcv @ 0x1914 */
int test_cpp_member_func()
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_2689;
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1964 */
int test_cpp_constructor()
{
 unsigned int *v0; // x0
 int v1; // w8
 long long i; // x9
 int v3; // w20

 v0 = (unsigned int *)::operator new[](0x14u);
 v1 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v0[i] = v1;
 v1 += 10;
 }
 v3 = v0[2] + ++LifecycleClass::instance_count;
 ::operator delete[](v0);
 return v3 + 1000 * --LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x19D0 */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x19EC */
int test_cpp_virtual_func()
{
 int v0; // w19
 Derived v2; // [xsp+0h] [xbp-10h] BYREF
 Base v3; // [xsp+28h] [xbp+18h] BYREF

 v3._vptr$Base = (int (**)(void))&off_139A8;
 v2.multiplier = 3;
 v0 = Base::virtual_func(&v3, 5);
 return v0 + Derived::virtual_func(&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1A5C */
int test_cpp_multiple_inheritance()
{
 int v0; // w20
 int v1; // w0
 MultiDerived v3; // [xsp+0h] [xbp-20h] BYREF

 v3._vptr$BaseA = (int (**)(void))&off_13A30;
 v3._vptr$BaseB = (int (**)(void))&off_13A60;
 v3.dataA = 100;
 v3.dataB = 200;
 v0 = MultiDerived::funcA(&v3);
 (*v3._vptr$BaseB)();
 return v0 + v1 + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1ACC */
int test_cpp_diamond_inheritance()
{
 int v0; // w0
 int v1; // w20
 int v2; // w0
 long long ( **v4)(DiamondDerived *__hidden); // [xsp+0h] [xbp-30h]
 long long ( **v5)(DiamondDerived *__hidden); // [xsp+10h] [xbp-20h]
 long long ( **v6)(DiamondDerived *__hidden); // [xsp+20h] [xbp-10h]
 int v7; // [xsp+28h] [xbp-8h]

 v4 = &off_13B38;
 v6 = &off_13BA0;
 v5 = &off_13B68;
 `virtual thunk to'DiamondDerived::func();
 v1 = v0;
 v7 = 100;
 `virtual thunk to'DiamondDerived::func();
 return v2 + v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B54 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B5C */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1B64 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6C */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1B74 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1C64 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1C6C */
int test_cpp_rtti()
{
 long long *v0; // x19
 unsigned long long *v1; // x0
 long long v2; // x8
 const void *v3; // x20
 const char *v4; // x21
 int v5; // w22
 const char *v6; // x0
 int v7; // w8
 int v8; // w23
 int v9; // w22
 const char *v10; // x0
 int v11; // w21

 v0 = (long long *)operator new(8u);
 *v0 = (long long)&off_13D58;
 v1 = (unsigned long long *)operator new(8u);
 v2 = *v0;
 *v1 = 0;
 v3 = v1;
 *v1 = &off_13D80;
 v4 = *(const char **)(*(unsigned long long *)(v2 - 8) + 8LL);
 if ( v4 == "12RTTIDerivedA" )
 {
 v5 = 10;
 }
 else if ( *v4 == 42 )
 {
 v5 = 0;
 }
 else if ( !strcmp(v4, "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else
 {
 v5 = 0;
 }
 v6 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v3 - 8LL) + 8LL);
 if ( v6 == "12RTTIDerivedB" )
 v7 = 1;
 else
 v7 = *v6 != 42 && strcmp(v6, "12RTTIDerivedB") == 0;
 if ( v7 )
 v8 = v5 | 0x14;
 else
 v8 = v5;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v8 += 100;
 }
 if ( __dynamic_cast(
 v3,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v9 = v8 + 200;
 }
 else
 {
 v9 = v8;
 }
 if ( *v4 == 42 )
 v10 = v4 + 1;
 else
 v10 = v4;
 v11 = strlen(v10);
 (*(void ( **)(long long *))(*v0 + 8))(v0);
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return v9 + v11;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E04 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned int *v1; // x0
 int v2; // w8
 long long i; // x9
 int v4; // w20
 long long v5; // x1
 int v6; // w19
 int v7; // w0
 int v8; // w0
 int v9; // w0
 int v10; // w20
 int v11; // w0
 Base v12; // [xsp+8h] [xbp-38h] BYREF
 unsigned char v13[40]; // [xsp+10h] [xbp-30h] BYREF
 int v14; // [xsp+38h] [xbp-8h]

 puts(asc_25F9);
 *(unsigned int *)v13 = 10;
 *(unsigned long long *)&v13[4] = *(unsigned long long *)"Test";
 memset(&v13[19], 0, 17);
 v0 = strlen(&v13[4]);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 v1 = (unsigned int *)operator new[](0x14u);
 v2 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 v4 = v1[2] + ++LifecycleClass::instance_count;
 operator delete[](v1);
 v5 = (unsigned int)(v4 + 1000 * --LifecycleClass::instance_count);
 printf(aCppL302D, v5);
 *(unsigned int *)&v13[8] = 3;
 v12._vptr$Base = (int (**)(void))&off_139A8;
 *(unsigned long long *)v13 = &off_139E8;
 v6 = Base::virtual_func(&v12, 5);
 v7 = (**(long long ( ***)(unsigned char *, long long))v13)(v13, 5);
 printf(aCppL303D, (unsigned int)(v6 + v7 + 21));
 *(unsigned long long *)v13 = &off_13A30;
 *(unsigned long long *)&v13[16] = &off_13A60;
 *(unsigned int *)&v13[8] = 100;
 *(unsigned int *)&v13[24] = 200;
 non_virtual_thunk_MultiDerived_funcB();
 printf(aCppL304D, (unsigned int)(v8 + 31));
 *(unsigned long long *)v13 = &off_13B38;
 *(unsigned long long *)&v13[32] = &off_13BA0;
 *(unsigned long long *)&v13[16] = &off_13B68;
 v14 = 50;
 `virtual thunk to'DiamondDerived::func();
 v10 = v9;
 *(unsigned int *)&v13[*(unsigned long long *)(*(unsigned long long *)v13 + 0xFFFFFFFFFFFFFFE8LL) + 8] = 100;
 (**(void ( ***)())&v13[32])();
 printf(aCppL305D, (unsigned int)(v11 + v10));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: sub_2008 @ 0x2008 */
// positive sp value has been detected, the output may be wrong!
long long sub_2008(unsigned int a1)
{
 unsigned int v1; // w0

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = test_cpp_rtti();
 return printf(aCppL403D, v1);
}


/* Function: main @ 0x2050 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_205C @ 0x205C */
// positive sp value has been detected, the output may be wrong!
long long sub_205C()
{
 return 0;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2068 */
int Base::virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2070 */
int Derived::virtual_func(Derived *this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x207C */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2080 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2084 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2088 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2094 */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x20A0 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x20B4 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x20BC */
void Container<int>::push(Container<int> *this, int value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x20D8 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20F8 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2100 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2108 */
void Container<double>::push(Container<double> *this, double value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2124 */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2140 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x2148 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2154 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2168 */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2174 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2188 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2190 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x21A4 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


// Thunk functions - renamed to avoid invalid characters
void non_virtual_thunk_MultiDerived_funcB();
void non_virtual_thunk_MultiDerived_d1();
void non_virtual_thunk_MultiDerived_d0();
void virtual_thunk_MiddleA_func();
void virtual_thunk_MiddleA_d1();
void virtual_thunk_MiddleA_d0();


/* Function: _ZN5BaseA5funcAEv @ 0x21D0 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x21D8 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x21DC */
void BaseA::~BaseA(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x21F0 */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x21F8 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x21FC */
void BaseB::~BaseB(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2210 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x2228 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x222C */
void MiddleA::~MiddleA(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2240 */
void virtual_thunk_MiddleA_func()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2264 */
void virtual_thunk_MiddleA_d1()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2268 */
void virtual_thunk_MiddleA_d1()
{
 unsigned long long *v0; // x0

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2288 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x22A0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x22A4 */
void MiddleB::~MiddleB(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x22B8 */
void virtual_thunk_MiddleB_func();
void virtual_thunk_MiddleB_d1();
void virtual_thunk_MiddleB_d0();
void non_virtual_thunk_DiamondDerived_func();
void non_virtual_thunk_DiamondDerived_d1();
void non_virtual_thunk_DiamondDerived_d0();
void virtual_thunk_DiamondDerived_func();
void virtual_thunk_DiamondDerived_d1();
void virtual_thunk_DiamondDerived_d0();
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2318 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x232C */
void non_virtual_thunk_DiamondDerived_func()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2344 */
void non_virtual_thunk_DiamondDerived_d1()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2348 */
void non_virtual_thunk_DiamondDerived_d0()
{
 long long v0; // x0

 operator delete((void *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2360 */
void virtual_thunk_DiamondDerived_func()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2384 */
void virtual_thunk_DiamondDerived_d1()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2388 */
void virtual_thunk_DiamondDerived_d0()
{
 unsigned long long *v0; // x0

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x23A8 */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x23B0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x23B4 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x23C8 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x23DC */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x23E4 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x23E8 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x23FC */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x2404 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14140 */

/* FAILED to decompile: puts @ 0x14150 */

/* FAILED to decompile: strlen @ 0x14158 */

/* FAILED to decompile: __cxa_begin_catch @ 0x14160 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x14168 */

/* FAILED to decompile: __cxa_finalize @ 0x14170 */

/* FAILED to decompile: __libc_start_main @ 0x14180 */

/* FAILED to decompile: _ZdlPv @ 0x14188 */

/* FAILED to decompile: _Znwm @ 0x14190 */

/* FAILED to decompile: __dynamic_cast @ 0x14198 */

/* FAILED to decompile: __cxa_atexit @ 0x141A0 */

/* FAILED to decompile: _ZdaPv @ 0x141A8 */

/* FAILED to decompile: strcmp @ 0x141B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x141C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x141C8 */

/* FAILED to decompile: abort @ 0x141D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x141D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x141E0 */

/* FAILED to decompile: __cxa_throw @ 0x141E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x141F8 */

/* FAILED to decompile: printf @ 0x14200 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14208 */

/* FAILED to decompile: __gmon_start__ @ 0x14218 */

/* Total functions decompiled: 87, failed: 23 */
