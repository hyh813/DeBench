/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O1_g
 * Processor: arm
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Stub for C++ type_info (not available in C)
struct type_info {
    const char *_name;
    virtual ~type_info();
};

// Forward declarations for classes (needed early for function implementations)
// Order matters: Base first, then classes that use Base
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// Function declaration for weak symbol callback
int call_weak_fn(void);

// C++ operator declarations (needed for memory allocation/deallocation in C code)
// Use C-compatible wrapper names since 'operator' is a C++ keyword
void* _Znwm(unsigned long long size);
void* _Znam(unsigned long long size);
void _ZdlPv(void* ptr);
void _ZdaPv(void* ptr);
void _ZdlPv_m(void* ptr, unsigned long long size);
void _ZdaPv_m(void* ptr, unsigned long long size);

// Now define Base FIRST (it must come before MiddleA, MiddleB, MultiDerived, DiamondDerived since they contain Base members)
struct Base {
public:
    virtual int virtual_func(int x);
    virtual const char* getName() const;
    virtual ~Base();
    void** _vptr_Base;
};

// Now define MiddleA, MiddleB, MultiDerived, DiamondDerived 
// These MUST come after Base since they contain Base as a member
// and BEFORE their member function implementations
struct MiddleA {
    int dataA;
    void** _vptr_MiddleA;
    int func();
};

struct MiddleB {
    int dataB;
    void** _vptr_MiddleB;
    int func();
};

struct MultiDerived {
    int dataA;
    int dataB;
    void** _vptr_MultiDerived;
    struct Base Base;
    int funcA();
    int funcB();
};

struct DiamondDerived {
    int dataA;
    int dataB;
    void** _vptr_MiddleA;
    void** _vptr_MiddleB;
    struct Base Base;
    int func();
};

// Class definitions for Base and Derived (must be complete before member function implementations)
struct Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) override;
    virtual const char* getName() const override;
    virtual ~Derived();
};

// Full class definitions for MiddleA, MiddleB, MultiDerived, DiamondDerived 
// These MUST be fully defined BEFORE their member function implementations
struct MiddleA {
    int dataA;
    void** _vptr_MiddleA;
    int func();
};

struct MiddleB {
    int dataB;
    void** _vptr_MiddleB;
    int func();
};

struct MultiDerived {
    int dataA;
    int dataB;
    void** _vptr_MultiDerived;
    struct Base Base;
    int funcA();
    int funcB();
};

struct DiamondDerived {
    int dataA;
    int dataB;
    void** _vptr_MiddleA;
    void** _vptr_MiddleB;
    struct Base Base;
    int func();
};

// Full class definitions for RTTI classes
struct RTTIBase {
    virtual int getType() const;
    virtual ~RTTIBase();
};

struct RTTIDerivedA : public RTTIBase {
    virtual int getType() const override;
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : public RTTIBase {
    virtual int getType() const override;
    virtual ~RTTIDerivedB();
};

struct SimpleClass {
public:
    char name[32];
};

struct LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Container template class
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

template<typename T>
Container<T>::Container() : size(0) {}

template<typename T>
void Container<T>::push(T value) {
    if (size <= 9) {
        data[size++] = value;
    }
}

template<typename T>
T Container<T>::get(int idx) const {
    if (idx >= 0 && idx < size) {
        return data[idx];
    }
    return T();
}

template<typename T>
int Container<T>::getSize() const {
    return size;
}

// Template functions
template<typename T>
T template_max(T a, T b) {
    return (a < b) ? b : a;
}

template<typename T>
void template_swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

/* Function: .init_proc @ 0x1458 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1470 @ 0x1470 */
void sub_1470()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1754 */
int test_cpp_member_func()
{
 struct SimpleClass obj; // [xsp+20h] [xbp+20h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x17CC */
int test_cpp_constructor()
{
 unsigned int *v0; // x0
 int v1; // w1
 int v2; // w19

 v0 = (unsigned int *)_Znam(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 v2 = v1 + 21;
 _ZdaPv(v0);
 --LifecycleClass::instance_count;
 return v2 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1838 */
int call_virtual_func(struct Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1854 */
int test_cpp_virtual_func()
{
 int v0; // w19
 struct Base base; // [xsp+20h] [xbp+20h] BYREF
 struct Derived derived; // [xsp+28h] [xbp+28h] BYREF

 base._vptr_Base = (int (**)(...))&off_13958;
 derived._vptr_Base = (int (**)(...))&off_13988;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func(&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x18E4 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x18EC */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 unsigned char obj_32[24]; // [xsp+48h] [xbp+48h] BYREF

 *(unsigned long long *)obj_32 = &off_13B30;
 *(unsigned int *)&obj_32[8] = 50;
 v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)obj_32);
 *(unsigned int *)&obj_32[8] = 100;
 return v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)obj_32);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1988 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1990 */
int test_cpp_template_func()
{
 int v0; // w19
 double v1; // d8
 int a; // [xsp+20h] [xbp+20h] BYREF
 int b; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max<int>(3, 7);
 v1 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x1A38 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1A40 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1A48 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`type_info for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1B20 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1B28 */
int test_cpp_rtti()
{
 long long *v0; // x20
 void *v1; // x21
 long long v2; // x23
 char *v3; // x22
 int v4; // w19
 int v5; // w19
 const char *v6; // x0
 int v7; // w19

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_13B58;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = off_13B80;
 v2 = *v0;
 v3 = *(char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 {
 if ( !strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") )
 v4 = 10;
 else
 v4 = 0;
 }
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v5 += 200;
 }
 if ( *v3 == 42 )
 v6 = v3 + 1;
 else
 v6 = v3;
 v7 = v5 + strlen(v6);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1C8C */
void test_cpp_oo_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_2148);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_2170, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_2190, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_21B0, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_21D0, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_21F0, v4);
 __printf_chk(1, &unk_2210, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, &unk_2230, v5);
 __printf_chk(1, &unk_2250, 16);
 __printf_chk(1, &unk_2270, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1DBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1DD4 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1E18 */
int Base::virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1E20 */
const char * Base::getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1E2C */
void Base::~Base(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1E30 */
int Derived::virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1E3C */
const char * Derived::getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1E48 */
int MultiDerived::funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1E50 */
int MultiDerived::funcB(MultiDerived *const this)
{
 return 40;
}


// Renamed from: `virtual thunk to'MultiDerived::funcB
long long thunk_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E60 */
int MiddleA::func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1E9C */
int MiddleB::func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: virtual_thunk_MiddleA_func @ 0x1E78 */
long long virtual_thunk_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1E9C */
int MiddleB::func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: virtual_thunk_MiddleB_func @ 0x1EB4 */
long long virtual_thunk_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1ED8 */
int DiamondDerived::func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: virtual_thunk_DiamondDerived_func @ 0x1EF0 */
long long virtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) - 3))
 + 250);
}


// Renamed from: `non-virtual thunk to'DiamondDerived::func
long long thunk_nonvirtual_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1F2C */
int RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1F34 */
int RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1F3C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1F40 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1F44 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 ;
}


// Renamed from: `non-virtual thunk to'DiamondDerived::~DiamondDerived
void thunk_nonvirtual_DiamondDerived_dtor(DiamondDerived *this)
{
 ;
}


/* Function: virtual_thunk_DiamondDerived_dtor @ 0x1F4C */
void virtual_thunk_DiamondDerived_dtor(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1F50 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 ;
}


// Renamed from: `non-virtual thunk to'MultiDerived::~MultiDerived
void thunk_nonvirtual_MultiDerived_dtor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1F58 */
void Derived::~Derived(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1F5C */
void Base::~Base(Base *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1F74 */
void Derived::~Derived(Derived *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1F8C */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x20u);
}


// Renamed from: `non-virtual thunk to'MultiDerived::~MultiDerived
void thunk_nonvirtual_MultiDerived_dtor_delete(MultiDerived *this)
{
 operator delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1FC0 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1FD8 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FF0 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2008 */
void virtual_thunk_DiamondDerived_dtor_delete(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4), 0x30u);
}


// Renamed from: `non-virtual thunk to'DiamondDerived::~DiamondDerived
void thunk_nonvirtual_DiamondDerived_dtor_delete(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2048 */
int template_max<int>(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2054 */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2060 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2074 */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x207C */
void Container<int>::push(Container<int> *const this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2098 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 )
 {
 result = 0;
 if ( this->size > idx )
 return this->data[idx];
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20C0 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x20C8 */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x20D0 */
void Container<double>::push(Container<double> *const this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x20EC */
double Container<double>::get(const Container<double> *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x210C */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x2114 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14098 */

/* FAILED to decompile: puts @ 0x140A8 */

/* FAILED to decompile: strlen @ 0x140B0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140C0 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140D0 */

/* FAILED to decompile: __cxa_finalize @ 0x140D8 */

/* FAILED to decompile: __libc_start_main @ 0x140E8 */

/* FAILED to decompile: _Znwm @ 0x140F0 */

/* FAILED to decompile: _ZdlPvm @ 0x140F8 */

/* FAILED to decompile: strncpy @ 0x14100 */

/* FAILED to decompile: __dynamic_cast @ 0x14108 */

/* FAILED to decompile: __cxa_atexit @ 0x14110 */

/* FAILED to decompile: _ZdaPv @ 0x14118 */

/* FAILED to decompile: strcmp @ 0x14128 */

/* FAILED to decompile: __cxa_rethrow @ 0x14130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x14138 */

/* FAILED to decompile: abort @ 0x14140 */

/* FAILED to decompile: __cxa_end_catch @ 0x14148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14150 */

/* FAILED to decompile: __cxa_throw @ 0x14158 */

/* FAILED to decompile: _Unwind_Resume @ 0x14168 */

/* FAILED to decompile: __printf_chk @ 0x14170 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14178 */

/* FAILED to decompile: __gmon_start__ @ 0x14188 */

/* Total functions decompiled: 70, failed: 25 */
