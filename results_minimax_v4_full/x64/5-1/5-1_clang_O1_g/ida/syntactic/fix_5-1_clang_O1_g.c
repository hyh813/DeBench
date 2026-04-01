/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O1_g
 * Processor: pc
 */

#include <cstddef>
#include <cstring>
#include <new>
#include <cstdio>
#include <cstdlib>
#include <typeinfo>
#include <cmath>
#include <iostream>

// Forward declarations and global symbols
extern "C" void (*_gmon_start__)(void);
extern "C" void *_dso_handle;

// Vtable pointers (virtual function table addresses)
extern "C" int (**off_59C8)(void);
extern "C" int (**off_5A08)(void);
extern "C" int (**off_5A50)(void);
extern "C" int (**off_5A80)(void);
extern "C" int (**off_5B58)(void);
extern "C" int (**off_5B88)(void);
extern "C" int (**off_5BC0)(void);
extern "C" int (**off_5D78)(void);
extern "C" int (**off_5DA0)(void);

// Standard C++ exception handling functions
extern "C" void *__cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void*, std::type_info*, void(*)(void*));
extern "C" void *__cxa_begin_catch(void*);
extern "C" void __cxa_end_catch();
extern "C" void __cxa_rethrow();

// Standard C++ runtime internal
extern "C" int __gxx_personality_v0(int, int, unsigned long, void*, void*);

// Class declarations
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// String data that was stored as xmmword (16-byte SIMD register)
const char g_string_data[] = "HelloXXXXXXXXXXXXXXXXXXXXX";  // 31 bytes
const char* s = g_string_data;

// Define xmmword_3262 as the first 16 bytes of the string (for SIMD operations)
static const unsigned long long xmmword_3262[2] = {
    0x48456c6c6f585858,  // "HelloXXX" (little endian)
    0x5858585858585858   // "XXXXXXXX" 
};

// Format strings
const char* format = "CPP: L302: strlen=%d\n";
const char* aCppL302D = "CPP: L302: strlen=%d\n";
const char* aCppL303D = "CPP: L303: %d\n";
const char* aCppL304D = "CPP: L304: %d\n";
const char* aCppL305D = "CPP: L305: %d\n";
const char* aCppL306D = "CPP: L306: %d\n";
const char* aCppL307D = "CPP: L307: %d\n";
const char* aCppL308D = "CPP: L308: %d\n";
const char* aCppL309D = "CPP: L309: %d\n";

// Class declarations needed for virtual functions

// Base class with virtual function
class Base {
public:
    virtual ~Base();
    virtual int virtual_func(int x);
    static int (**_vptr$Base)(void);
};

// Derived class with virtual function
class Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) override;
    static int (**_vptr$Derived)(void);
};

// Template class declarations needed for member functions
template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

// Forward declarations
class MultiDerived;
class DiamondDerived;
class BaseA;
class BaseB;
class MiddleA;
class MiddleB;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

// Complete class definitions needed for compilation

// VirtualBase must be defined BEFORE MiddleA and MiddleB since they virtually inherit from it
// VirtualBase must be defined BEFORE MiddleA and MiddleB since they virtually inherit from it
class VirtualBase {
public:
    virtual ~VirtualBase();
    virtual int func();
    static int (**_vptr$VirtualBase)(void);
};

class BaseA {
public:
    virtual ~BaseA();
    virtual int funcA();
    int dataA;
    static int (**_vptr$BaseA)(void);
};

class BaseB {
public:
    virtual ~BaseB();
    virtual int funcB();
    int dataB;
    static int (**_vptr$BaseB)(void);
};

class MultiDerived : public BaseA, public BaseB {
public:
    virtual ~MultiDerived();
    virtual int funcA();
    virtual int funcB();
};

class MiddleA : virtual public VirtualBase {
public:
    virtual ~MiddleA();
    virtual int func();
    int dataA;
    static int (**_vptr$MiddleA)(void);
};

class MiddleB : virtual public VirtualBase {
public:
    virtual ~MiddleB();
    virtual int func();
    int dataB;
    static int (**_vptr$MiddleB)(void);
};

class DiamondDerived : virtual public MiddleA, virtual public MiddleB {
public:
    virtual ~DiamondDerived();
    virtual int func();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

/* Function: .init_proc @ 0x2000 */
void (*init_proc(void))(void)
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
 // Empty function (likely a placeholder)
}


// Standard library ios_base::Init declaration (from <iostream>)
extern "C" void _ZNSt8ios_base4InitC1Ev();
extern "C" void _ZNSt8ios_base4InitD1Ev();

// Internal stdio initialization (implementation detail)
static int __ioinit_standard = 0;

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x2150 */
void GLOBAL__sub_I_5_1_cpp()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2270 */
int test_cpp_member_func()
{
 unsigned char s[32] = {0}; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 // Copy the string data from xmmword_3262 (first 16 bytes)
 *(unsigned long long *)s = xmmword_3262[0];
 // Copy the next 8 bytes
 *(unsigned long long *)&s[8] = xmmword_3262[1];
 // Copy remaining bytes (need 7 more to get to 31 total)
 *(unsigned long long *)&s[16] = 0; // Remaining bytes initialized to 0
 v2 = 0;
 return strlen((char*)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
int test_cpp_constructor()
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new(0x14u);
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
 delete[] v0;
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
int call_virtual_func(Base *obj, int x)
{
 typedef int (VirtualFuncType)(Base *, int);
 return ((VirtualFuncType *)obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
int test_cpp_virtual_func()
{
 int v0; // ebx
 long long v2; // [rsp+8h] [rbp-20h] BYREF
 int v3; // [rsp+10h] [rbp-18h]
 Base v4; // [rsp+18h] [rbp-10h] BYREF

 v4._vptr$Base = (int (**)(void))&off_59C8;
 v3 = 3;
 v0 = v4.virtual_func(5);
 return v0 + v4.virtual_func(5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2380 */
int test_cpp_multiple_inheritance()
{
 int v0; // ebx
 MultiDerived v2; // [rsp+8h] [rbp-30h] BYREF

 v2._vptr$BaseA = (int (**)(void))&off_5A50;
 v2._vptr$BaseB = (int (**)(void))&off_5A80;
 v2.dataA = 100;
 v2.dataB = 200;
 v0 = v2.funcA();
 // For multiple inheritance, BaseB subobject is at offset sizeof(BaseA)
 BaseB* baseB_ptr = (BaseB*)((char*)&v2 + sizeof(BaseA));
 return v0 + ((int (*)(BaseB*))v2._vptr$BaseB)(baseB_ptr) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
int test_cpp_diamond_inheritance()
{
 int v0; // eax
 unsigned int v2[2]; // [rsp+10h] [rbp-38h]
 int (**v3)(void); // [rsp+18h] [rbp-30h]
 int (**v4)(void); // [rsp+28h] [rbp-20h] BYREF
 int v5; // [rsp+30h] [rbp-18h]

 v4 = (int (**)(void))&off_5BC0;
 v3 = (int (**)(void))&off_5B88;
 v5 = 50;
 // Call virtual function through vtable
 v0 = (*v3)((int **)v3);
 v2[0] = 100;
 return v0 + (*v4)((int **)v4);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2450 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2460 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x2470 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x2480 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2490 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (std::type_info*)&typeid(int), nullptr);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
int test_cpp_rtti()
{
 unsigned int *v0; // r14
 unsigned int *v1; // r13
 const char *v2; // r15
 int v3; // ebx
 const char *v4; // rdi
 bool v5; // al
 int v6; // ebp
 int v7; // ebx
 int v8; // ebp
 int v9; // ebx

 v0 = (unsigned int *)operator new(8u);
 *(unsigned long long *)v0 = (unsigned long long)&off_5D78;
 v1 = (unsigned int *)operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)&off_5DA0;
 v2 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v0 - 8ULL) + 8ULL);
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
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 v7 = v6;
 v8 = v7 + 200;
 if ( !__dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 v8 = v7;
 v9 = strlen(&v2[*v2 == 42]);
 (*(void ( **)(void *))(*(unsigned long long *)v0 + 8LL))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v8 + v9;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x26A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 long long v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rcx
 int v4; // ebx
 int v5; // ebx
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // ebp
 int v10; // eax
 unsigned char s[40]; // [rsp+0h] [rbp-48h] BYREF
 int v12; // [rsp+28h] [rbp-20h]
 Base v13; // [rsp+30h] [rbp-18h] BYREF

 puts(::s);
 *(unsigned long long *)&s[4] = xmmword_3262[0];
 *(unsigned long long *)&s[12] = xmmword_3262[1];
 memset(&s[20], 0, 16);
 *(unsigned int *)s = 10;
 v0 = strlen(&s[4]);
 v1 = 0;
 printf(format, (unsigned int)(v0 + 4700));
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
 v13._vptr$Base = (int (**)(void))&off_59C8;
 *(unsigned long long *)s = &off_5A08;
 *(unsigned int *)&s[8] = 3;
 v5 = Base::virtual_func(&v13, 5);
 v6 = (**(long long ( ***)(unsigned char *, long long))s)(s, 5);
 printf(aCppL303D, (unsigned int)(v5 + v6 + 21));
 *(unsigned long long *)s = &off_5A50;
 *(unsigned long long *)&s[16] = &off_5A80;
 *(unsigned int *)&s[8] = 100;
 *(unsigned int *)&s[24] = 200;
// non-virtual thunk to MultiDerived::funcB
 printf(aCppL304D, (unsigned int)(v7 + 31));
 *(unsigned long long *)s = &off_5B58;
 *(unsigned long long *)&s[32] = &off_5BC0;
 *(unsigned long long *)&s[16] = &off_5B88;
 v12 = 50;
 // Call virtual function through vtable
 v0 = ((int (*)(DiamondDerived *))(*v3))((DiamondDerived *)v3);
 v2[0] = 100;
 v10 = (**(long long ( ***)(unsigned char *))&s[32])(&s[32]);
 printf(aCppL305D, (unsigned int)(v10 + v9));
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
int Base::virtual_func(Base *ptr, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
int Derived::virtual_func(Derived *ptr, int x)
{
 return ptr->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x2920 */
void Base::~Base(Base *ptr)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
int template_max<int>(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
double template_max<double>(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
void template_swap<int>(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
void Container<int>::push(Container<int> *this, int value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
void Container<double>::push(Container<double> *this, double a2, double value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2A50 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A60 */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2A70 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2A90 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
void `non-virtual thunk to'MultiDerived::funcB()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
 long long v0; // rdi

 operator delete((void *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
int BaseA::funcA(BaseA *this)
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
int BaseB::funcB(BaseB *this)
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
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 150;
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
void `virtual thunk to'MiddleA::func()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void `virtual thunk to'MiddleA::~MiddleA()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void `virtual thunk to'MiddleA::~MiddleA()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr$MiddleB - 3)) + 200;
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
void `virtual thunk to'MiddleB::func()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void `virtual thunk to'MiddleB::~MiddleB()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void `virtual thunk to'MiddleB::~MiddleB()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
void `non-virtual thunk to'DiamondDerived::func()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
 long long v0; // rdi

 operator delete((void *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
void `virtual thunk to'DiamondDerived::func()
{
}`


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
int VirtualBase::func(VirtualBase *this)
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
int RTTIDerivedA::getType(const RTTIDerivedA *this)
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
int RTTIDerivedB::getType(const RTTIDerivedB *this)
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
