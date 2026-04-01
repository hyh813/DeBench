// Forward declarations for classes
#include <stddef.h>

class Base;
class Derived;
class MiddleA;
class MiddleB;
class DiamondDerived;
class MultiDerived;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;
class SimpleClass;

// Virtual table pointers
typedef int (**vtable_ptr)(...);

// Class definitions with static members
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

class SimpleClass {
public:
    char name[32];
};

class Base {
public:
    vtable_ptr _vptr_Base;
    virtual int virtual_func(int x) { return x + 1; }
    virtual const char* getName() { return "Base"; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) { return x * multiplier; }
    virtual const char* getName() { return "Derived"; }
    virtual ~Derived() {}
};

class MiddleA {
public:
    int dataA;
    virtual int func() { return dataA + 150; }
};

class MiddleB {
public:
    int dataB;
    virtual int func() { return dataB + 200; }
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func() { return dataA + 250; }
    virtual ~DiamondDerived() {}
};

class MultiDerived : public Base, public MiddleB {
public:
    virtual int funcA() { return 30; }
    virtual int funcB() { return 40; }
    virtual ~MultiDerived() {}
};

class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual int getType() { return 1; }
    virtual ~RTTIDerivedA() {}
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual int getType() { return 2; }
    virtual ~RTTIDerivedB() {}
};

template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container() : size(0) {}
    void push(T value) {
        if (size <= 9) {
            data[size] = value;
            size++;
        }
    }
    T get(int idx) {
        if (idx < 0 || this->size <= idx) return T();
        return data[idx];
    }
    int getSize() { return size; }
};

// Template functions
template<typename T>
T template_max(T a, T b) {
    return (a < b) ? b : a;
}

template<>
double template_max<double>(double a, double b) {
    return (a <= b) ? b : a;
}

template<typename T>
void template_swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// Type info structures
struct type_info {
    const char* _m_name;
    virtual ~type_info() {}
};

bool operator==(const type_info& a, const type_info& b) {
    return &a == &b;
}

const char* s = "Testing C++ OOP features";

// External declarations for runtime functions
extern "C" {
    void* operator new(size_t size);
    void operator delete(void* ptr);
    void* operator new[](size_t size);
    void operator delete[](void* ptr);
    int puts(const char* s);
    size_t strlen(const char* s);
    char* strncpy(char* dest, const char* src, size_t n);
    int printf(const char* format, ...);
    void __cxa_throw(void* exception, const type_info* info, void (*dtor)(void*));
    void* __cxa_allocate_exception(size_t size);
    void __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void abort();
    int __dynamic_cast(const void* src, const type_info* src_type, const type_info* dst_type, void*);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_109BC @ 0x109BC */
void sub_109BC()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C00 */
size_t test_cpp_member_func()
{
 SimpleClass obj; // [sp+0h] [bp-30h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10C6C */
int test_cpp_constructor()
{
 unsigned int *v0; // r0
 int v1; // r3
 int v2; // r4

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v2 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CD0 */
int call_virtual_func(Base *obj, int x)
{
 return obj->virtual_func(x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE4 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Base base; // [sp+0h] [bp-18h] BYREF
 Derived derived; // [sp+4h] [bp-14h] BYREF

 base._vptr.Base = (int (**)(...))&off_1187C;
 derived._vptr.Base = (int (**)(...))&off_11894;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func(&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10D68 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10D70 */
int test_cpp_diamond_inheritance()
{
 int v0; // r4
 DiamondDerived obj; // [sp+4h] [bp-24h] BYREF

 obj._vptr.MiddleB = (int (**)(...))&off_11968;
 obj.dataB = 50;
 v0 = virtual_thunk_DiamondDerived_func((DiamondDerived *)&obj.MiddleB);
 obj.dataB = 100;
 return v0 + virtual_thunk_DiamondDerived_func((DiamondDerived *)&obj.MiddleB);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10DF4 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10DFC */
int test_cpp_template_func()
{
 int v0; // r4
 double v1; // r6
 int a; // [sp+4h] [bp-1Ch] BYREF
 int b; // [sp+8h] [bp-18h] BYREF

 v0 = template_max<int>(3, 7);
 v1 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x10EAC */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10EB4 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10EBC */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10F78 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F84 */
size_t test_cpp_rtti()
{
 void *v0; // r5
 void *v1; // r4
 int v2; // r6
 const char *v3; // r0
 size_t v4; // r6

 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = off_1197C;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11990;
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v0 - 4), &typeinfo_for_RTTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v1 - 4), &typeinfo_for_RTTIDerivedB) )
 v2 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v2 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v2 += 200;
 }
 v3 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( *v3 == 42 )
 ++v3;
 v4 = v2 + strlen(v3);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11074 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 puts(s);
 v0 = test_cpp_member_func();
 _printf_chk(1, &unk_11608, v0);
 v1 = test_cpp_constructor();
 _printf_chk(1, &unk_11628, v1);
 v2 = test_cpp_virtual_func();
 _printf_chk(1, &unk_11644, v2);
 v3 = test_cpp_multiple_inheritance();
 _printf_chk(1, &unk_11660, v3);
 v4 = test_cpp_diamond_inheritance();
 _printf_chk(1, &unk_1167C, v4);
 _printf_chk(1, &unk_1169C, 22);
 v5 = test_cpp_template_func();
 _printf_chk(1, &unk_116B8, v5);
 _printf_chk(1, &unk_116D4, 16);
 _printf_chk(1, &unk_116F0, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1119C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_111A4 @ 0x111A4 */
void sub_111A4(int a1, int a2, int a3, int a4, int a5, int a6)
{
 __asm { POP {R4,PC} }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x111AC */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init(&std::__ioinit);
 _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x111DC */
int Base::virtual_func(int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x111E4 */
const char * Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x111F0 */
Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x111F4 */
int Derived::virtual_func(int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x11200 */
const char * Derived::getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1120C */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11214 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1121C */
int non_virtual_thunk_MultiDerived_funcB(MultiDerived *ptr)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11224 */
int MiddleA::func()
{
	return dataA + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1123C */
int virtual_thunk_MiddleA_func(MiddleA *ptr)
{
 return ptr->func();
}


/* Function: _ZN7MiddleB4funcEv @ 0x11260 */
int MiddleB::func()
{
 return dataB + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11278 */
int virtual_thunk_MiddleB_func(MiddleB *ptr)
{
 return *(int *)((char *)&ptr->dataB
 + *((unsigned int *)ptr->_vptr.MiddleB - 3)
 + *(*(unsigned int **)((char *)&ptr->_vptr.MiddleB + *((unsigned int *)ptr->_vptr.MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1129C */
int DiamondDerived::func()
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x112B4 */
int virtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA
 + *((unsigned int *)this->_vptr.MiddleA - 3)
 + *(*(unsigned int **)((char *)&this->_vptr.MiddleA + *((unsigned int *)this->_vptr.MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x112D8 */
int non_virtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(&this[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x112F0 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x112F8 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11300 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11304 */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11308 */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1130C */
void virtual_thunk_DiamondDerived_dtor(DiamondDerived *this)
{
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1131C */
void non_virtual_thunk_DiamondDerived_dtor(DiamondDerived *this)
{
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11324 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11328 */
void non_virtual_thunk_MultiDerived_dtor(MultiDerived *this)
{
}


/* Function: _ZN7DerivedD2Ev @ 0x11330 */
Derived::~Derived()
{
}


/* Function: _ZN4BaseD0Ev @ 0x11334 */
Base::~Base()
{
 operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1134C */
Derived::~Derived()
{
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11364 */
void * MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x10u);
 return this;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1137C */
void non_virtual_thunk_MultiDerived_dtor(MultiDerived *ptr)
{
 operator delete(&ptr[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x11398 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x113B0 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x113C8 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x113E0 */
void virtual_thunk_DiamondDerived_dtor(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned int *)this->_vptr.MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11404 */
void non_virtual_thunk_DiamondDerived_dtor(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11420 */
int template_max(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1142C */
double template_max<double>(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1145C */
void template_swap<int>(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11470 */
Container<int> * Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
 return this;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1147C */
void Container<int>::push(Container<int> *const this, int value)
{
 int size; // r3

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11494 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 if ( idx < 0 )
 return 0;
 if ( this->size > idx )
 return this->data[idx];
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x114C0 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x114C8 */
Container<double> * Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
 return this;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x114D4 */
void Container<double>::push(Container<double> *const this, int a2, double value)
{
 int size; // r1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x114F0 */
double Container<double>::get(const Container<double> *const this, int idx)
{
 double *v3; // t0

 if ( idx < 0 )
 return 0.0;
 if ( this->size <= idx )
 return 0.0;
 v3 = &this->data[idx];
 return *v3;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11528 */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x11530 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 71, failed: 27 */
