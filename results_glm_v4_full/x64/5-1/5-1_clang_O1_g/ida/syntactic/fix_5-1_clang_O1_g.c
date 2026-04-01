/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <new>
#include <cxxabi.h>
#include <typeinfo>
#include <cstring>
#include <cmath>

extern "C" {
    void __cxa_atexit(void (*)(void*), void*, void*);
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, const std::type_info*, void (*)(void*));
    void __cxa_finalize(void*);
    void __gmon_start__(void);
}

void* __dynamic_cast(const void*, const std::type_info*, const std::type_info*, ptrdiff_t);

extern void* _dso_handle;
extern void (*_gmon_start__)(void);
void* _dso_handle;

/* Class definitions */
struct Base {
    void* _vptr$Base;
    virtual int virtual_func(int x);
    virtual const char* getName() const;
    virtual ~Base();
};

struct Derived : Base {
    void* _vptr$Base;
    int multiplier;
    virtual int virtual_func(int x);
    virtual const char* getName() const;
    virtual ~Derived();
    virtual void operator delete(void*);
};

struct BaseA {
    void* _vptr$BaseA;
    virtual int funcA();
    virtual ~BaseA();
};

struct BaseB {
    void* _vptr$BaseB;
    virtual int funcB();
    virtual ~BaseB();
};

struct MultiDerived : BaseA, BaseB {
    void* _vptr$BaseA;
    void* _vptr$BaseB;
    int dataA;
    int dataB;
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
};

struct VirtualBase {
    void* _vptr$VirtualBase;
    virtual int func();
    virtual ~VirtualBase();
};

struct MiddleA : virtual VirtualBase {
    void* _vptr$VirtualBase;
    int dataA;
    virtual int func();
    virtual ~MiddleA();
};

struct MiddleB : virtual VirtualBase {
    void* _vptr$VirtualBase;
    int dataB;
    virtual int func();
    virtual ~MiddleB();
};

struct DiamondDerived : MiddleA, MiddleB {
    void* _vptr$VirtualBase;
    void* _vptr$MiddleA;
    void* _vptr$MiddleB;
    virtual int func();
    virtual ~DiamondDerived();
};

struct RTTIBase {
    void* _vptr$RTTIBase;
    virtual ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
    void* _vptr$RTTIBase;
    virtual int getType() const;
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    void* _vptr$RTTIBase;
    virtual int getType() const;
    virtual ~RTTIDerivedB();
    virtual void operator delete(void*);
};

struct LifecycleClass {
    static int instance_count;
};

template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/* Global variables */
extern const char* format;
extern const char* aCppL302D;
extern const char* aCppL303D;
extern const char* aCppL304D;
extern const char* aCppL305D;
extern const char* aCppL306D;
extern const char* aCppL307D;
extern const char* aCppL308D;
extern const char* aCppL309D;
extern const char* s;
extern const __int128 xmmword_3262;
extern void* off_59C8;
extern void* off_5A08;
extern void* off_5A50;
extern void* off_5A80;
extern void* off_5B58;
extern void* off_5B88;
extern void* off_5BC0;
extern void* off_5D78;
extern void* off_5DA0;

/* Static member definition */
int LifecycleClass::instance_count = 0;

/* Stub functions for thunks */
static inline void virtual_thunk_to_DiamondDerived_func() {}
static inline void virtual_thunk_to_MiddleA_func() {}
static inline void virtual_thunk_to_MiddleB_func() {}
static inline void non_virtual_thunk_to_MultiDerived_funcB() {}
static inline void non_virtual_thunk_to_MultiDerived_destructor() {}
static inline void non_virtual_thunk_to_MultiDerived_delete() {}
static inline void non_virtual_thunk_to_DiamondDerived_func() {}
static inline void non_virtual_thunk_to_DiamondDerived_destructor() {}
static inline void non_virtual_thunk_to_DiamondDerived_delete() {}

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 return;
}


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
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]
 unsigned __int128 tmp = xmmword_3262;

 *(unsigned long long *)s = (unsigned long long)tmp;
 *(unsigned long long *)&s[15] = (unsigned long long)(tmp >> 64);
 v2 = 0;
 return strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
int test_cpp_constructor()
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
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
int test_cpp_virtual_func()
{
 int v0; // ebx
 Derived v2; // [rsp+8h] [rbp-20h] BYREF
 int v3; // [rsp+10h] [rbp-18h]
 Base v4; // [rsp+18h] [rbp-10h] BYREF

 v4._vptr$Base = (int (**)(void))&off_59C8;
 v3 = 3;
 v0 = Base::virtual_func(&v4, 5);
 v2._vptr$Base = (int (**)(void))&off_5A08;
 v2.multiplier = 3;
 return v0 + Derived::virtual_func(&v2, 5) + 21;
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
 v0 = MultiDerived::funcA(&v2);
 return v0 + (*(long long ( **)(BaseB *))v2._vptr$BaseB)(static_cast<BaseB*>(&v2)) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
int test_cpp_diamond_inheritance()
{
 int v0 = 0;
 unsigned int v2[2]; // [rsp+10h] [rbp-38h]
 long long ( **v3)(DiamondDerived *__hidden); // [rsp+18h] [rbp-30h]
 long long ( **v4)(DiamondDerived *__hidden); // [rsp+28h] [rbp-20h] BYREF
 int v5; // [rsp+30h] [rbp-18h]

 v4 = &off_5BC0;
 v3 = &off_5B88;
 v5 = 50;
 virtual_thunk_to_DiamondDerived_func();
 *(unsigned int *)((char *)v2 + (unsigned long long)*(&off_5B58 - 3)) = 100;
 return v0 + (*v4)((DiamondDerived *)&v4);
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
 return 0;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
int test_cpp_rtti()
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
 *(unsigned long long *)v0 = &off_5D78;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = &off_5DA0;
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
 (const __cxxabiv1::__class_type_info *)&typeid(RTTIBase),
 (const __cxxabiv1::__class_type_info *)&typeid(RTTIDerivedA),
 0) )
 v7 = v6;
 v8 = v7 + 200;
 if ( !__dynamic_cast(
 v1,
 (const __cxxabiv1::__class_type_info *)&typeid(RTTIBase),
 (const __cxxabiv1::__class_type_info *)&typeid(RTTIDerivedB),
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
 *(unsigned long long *)&s[4] = xmmword_3262;
 memset(&s[19], 0, 17);
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
 non_virtual_thunk_to_MultiDerived_funcB();
 v7 = 0;
 printf(aCppL304D, (unsigned int)(v7 + 31));
 *(unsigned long long *)s = &off_5B58;
 *(unsigned long long *)&s[32] = &off_5BC0;
 *(unsigned long long *)&s[16] = &off_5B88;
 v12 = 50;
 virtual_thunk_to_DiamondDerived_func();
 v9 = 0;
 *(unsigned int *)&s[*(unsigned long long *)(*(unsigned long long *)s - 24LL) + 8] = 100;
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
int Base::virtual_func(int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
int Derived::virtual_func(int x)
{
 return multiplier * x;
}





/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
void Container_int_Constructor(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
void Container_int_push(Container<int> *this, int value)
{
 long long size;

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
int Container_int_get(const Container<int> *this, int idx)
{
 int result;

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
int Container_int_getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
void Container_double_Constructor(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
void Container_double_push(Container<double> *this, double value)
{
 long long size;

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double Container_double_get(const Container<double> *this, int idx)
{
 double result;

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
int Container_double_getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char * Base::getName() const
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x2A50 */
Base::~Base()
{
    // Base destructor
}


/* Function: _ZN4BaseD0Ev @ 0x2A60 */
static void Base_deleting_d0(Base* this)
{
    this->~Base();
    operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A70 */
const char * Derived::getName() const
{
 return "Derived";
}




/* Function: _ZN7DerivedD2Ev @ 0x2A78 */
Derived::~Derived()
{
    // Derived destructor
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
int MultiDerived::funcA()
{
 return 30;
}





/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 0;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void non_virtual_thunk_to_MultiDerived_destructor()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void non_virtual_thunk_to_MultiDerived_delete()
{
 long long v0; // rdi

 operator delete((void *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
int BaseA::funcA()
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2AF0 */
BaseA::~BaseA()
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x2B00 */
static void BaseA_deleting_d0(BaseA* this)
{
    this->~BaseA();
    operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2B10 */
int BaseB::funcB()
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2B20 */
BaseB::~BaseB()
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B30 */
static void BaseB_deleting_d0(BaseB* this)
{
    this->~BaseB();
    operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2B40 */
int MiddleA::func()
{
 return this->dataA + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B60 */
MiddleA::~MiddleA()
{
    // MiddleA complete destructor
}


/* Function: _ZN7MiddleAD0Ev @ 0x2B70 */
static void MiddleA_deleting_d0(MiddleA* this)
{
    this->~MiddleA();
    operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2B80 */
int virtual_thunk_to_MiddleA_func()
{
 return 0;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void virtual_thunk_to_MiddleA_destructor()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void virtual_thunk_to_MiddleA_delete()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
int MiddleB::func()
{
 return this->dataB + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x2BE0 */
MiddleB::~MiddleB()
{
    // MiddleB complete destructor
}


/* Function: _ZN7MiddleBD0Ev @ 0x2BF0 */
static void MiddleB_deleting_d0(MiddleB* this)
{
    this->~MiddleB();
    operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2C00 */
int virtual_thunk_to_MiddleB_func()
{
 return 0;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void virtual_thunk_to_MiddleB_destructor()
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void virtual_thunk_to_MiddleB_delete()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
int DiamondDerived::func()
{
 return static_cast<MiddleA*>(this)->dataA + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
static void DiamondDerived_deleting_d0(DiamondDerived* this)
{
    this->~DiamondDerived();
    operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
int non_virtual_thunk_to_DiamondDerived_func()
{
 return 0;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void non_virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void non_virtual_thunk_to_DiamondDerived_delete()
{
 long long v0; // rdi

 operator delete((void *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
int virtual_thunk_to_DiamondDerived_func()
{
 return 0;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void virtual_thunk_to_DiamondDerived_delete()
{
 unsigned long long *v0; // rdi

 operator delete((char *)v0 + *(unsigned long long *)(*v0 - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
int VirtualBase::func()
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2D00 */
VirtualBase::~VirtualBase()
{
    // VirtualBase destructor
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2D10 */
static void VirtualBase_deleting_d0(VirtualBase* this)
{
    this->~VirtualBase();
    operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2D20 */
RTTIDerivedA::~RTTIDerivedA()
{
    // RTTIDerivedA destructor
}

/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2D28 */
static void RTTIDerivedA_deleting_d0(RTTIDerivedA* this)
{
    this->~RTTIDerivedA();
    operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2D30 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x2D38 */
static void RTTIBase_deleting_d0(RTTIBase* this)
{
    this->~RTTIBase();
    operator delete(this);
}

/* Function: _ZN8RTTIBaseD2Ev @ 0x2D40 */
RTTIBase::~RTTIBase()
{
    // RTTIBase destructor
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2D58 */
RTTIDerivedB::~RTTIDerivedB()
{
    // RTTIDerivedB destructor
}




/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2D60 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x2D68 */
void term_proc()
{
 ;
}




/* Define the missing extern symbols */
const __int128 xmmword_3262 = 0;

/* Vtable pointers */
void* off_59C8 = nullptr;
void* off_5A08 = nullptr;
void* off_5A50 = nullptr;
void* off_5A80 = nullptr;
void* off_5B58 = nullptr;
void* off_5B88 = nullptr;
void* off_5BC0 = nullptr;
void* off_5D78 = nullptr;
void* off_5DA0 = nullptr;

/* String constants */
const char* format = "%d\n";
const char* aCppL302D = "%d\n";
const char* aCppL303D = "%d\n";
const char* aCppL304D = "%d\n";
const char* aCppL305D = "%d\n";
const char* aCppL306D = "%d\n";
const char* aCppL307D = "%d\n";
const char* aCppL308D = "%d\n";
const char* aCppL309D = "%d\n";
const char* s = "test";

/* Standard library functions (provided by system headers) */

/* C++ ABI functions (declared in extern "C" block above) */

/* Unwind handling */
extern "C" {
    void _Unwind_Resume(void);
    void __gxx_personality_v0(void);
}

/* C++ runtime exception handling functions */
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void);
void __cxa_rethrow(void);

/* libc startup */
int __libc_start_main(int (*)(int, char**, char**), int, char**, void (*)(), void (*)(), void (*)(), void*);

/* Operator delete/delete[] */
void _ZdlPv(void*);
void _ZdaPv(void*);

/* Operator new/new[] */
void* _Znwm(unsigned long);





/* C++ operators */
void* operator new(size_t size) {
    return malloc(size);
}

void* operator new[](size_t size) {
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    free(ptr);
}

void operator delete[](void* ptr) noexcept {
    free(ptr);
}

/* Total functions decompiled: 84, failed: 22 */
