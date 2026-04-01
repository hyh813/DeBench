/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O0_g
 * Processor: pc
 */

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Make this compile as C++ - ensure we use C++ compilation mode */
#ifndef __cplusplus
#error "This file must be compiled as C++ (use .cpp extension or compile with -x c++)"
#endif

#ifdef __cplusplus
#include <new>
#include <typeinfo>
#include <memory>
#include <functional>
#include <tuple>
#include <iostream>
#include <string>
#endif

/* CRT stub functions - declarations */
void _gmon_start__(void);
void frame_dummy(void);
int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);

/* Forward declarations for classes */
class SimpleClass;
class LifecycleClass;
class Base;
class Derived;
class MultiDerived;
class DiamondDerived;
class Point;
template<typename T> class Container;
class BaseA;
class BaseB;
class VirtualBase;
class MiddleA;
class MiddleB;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* SimpleClass definition */
class SimpleClass {
public:
    int value;
    char name[32];
    SimpleClass() : value(0), name{} {}
    SimpleClass(int v, const char *n);
    void setValue(int v);
    int getValue() const;
    int compute(int x) const;
    static int getClassID();
};

/* LifecycleClass definition */
class LifecycleClass {
public:
    size_t size;
    int *data;
    static int instance_count;
    LifecycleClass(size_t s);
    int getData(size_t idx) const;
    static int getInstanceCount();
    ~LifecycleClass();
};

/* Base class definition */
class Base {
public:
    int (**_vptr$Base)(void);
    Base();
    virtual int virtual_func(int x);
    virtual ~Base();
    const char *getName() const;
};

/* Derived class definition */
class Derived : public Base {
public:
    int multiplier;
    Derived(int m);
    int virtual_func(int x) override;
    ~Derived();
    const char *getName() const;
};

/* DiamondDerived class definition */
class DiamondDerived : public MiddleA, public MiddleB {
public:
    int dataA;
    int (**_vptr$MiddleA)(void);
    int (**_vptr$MiddleB)(void);
    DiamondDerived();
    int func() override;
    ~DiamondDerived();
    ~DiamondDerived(void **vtt);
};

/* BaseA class definition */
class BaseA {
public:
    int (**_vptr$BaseA)(void);
    BaseA();
    virtual int funcA();
    virtual ~BaseA();
};

/* BaseB class definition */
class BaseB {
public:
    int (**_vptr$BaseB)(void);
    BaseB();
    virtual int funcB();
    virtual ~BaseB();
};

/* MultiDerived class definition */
class MultiDerived : public BaseA, public BaseB {
public:
    int dataA;
    int dataB;
    int (**_vptr$BaseA)(void);
    int (**_vptr$BaseB)(void);
    MultiDerived();
    int funcA();
    int funcB();
    ~MultiDerived();
};

/* VirtualBase class definition */
class VirtualBase {
public:
    int (**_vptr$VirtualBase)(void);
    VirtualBase();
    virtual int func();
    virtual ~VirtualBase();
};

/* MiddleA class definition */
class MiddleA : virtual public VirtualBase {
public:
    int dataA;
    int (**_vptr$MiddleA)(void);
    MiddleA(void **vtt);
    int func();
    ~MiddleA();
    ~MiddleA(void **vtt);
};

/* MiddleB class definition */
class MiddleB : virtual public VirtualBase {
public:
    int dataB;
    int (**_vptr$MiddleB)(void);
    MiddleB(void **vtt);
    int func() override;
    ~MiddleB();
    ~MiddleB(void **vtt);
};

/* Point class definition */
class Point {
public:
    int x;
    int y;
    Point(Point *this, int _x, int _y);
    Point* operator+(const Point *other);
    bool operator==(const Point *other) const;
    Point* operator++();
};

/* Container template class definition */
template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container(Container<T> *this);
    void push(Container<T> *this, T value);
    T get(const Container<T> *this, int idx) const;
    int getSize(const Container<T> *this) const;
};

/* RTTIBase class definition */
class RTTIBase {
public:
    int (**_vptr$RTTIBase)(void);
    RTTIBase();
    virtual ~RTTIBase();
    virtual int getType() const;
};

/* RTTIDerivedA class definition */
class RTTIDerivedA : public RTTIBase {
public:
    RTTIDerivedA();
    ~RTTIDerivedA();
    int getType() const override;
    int derivedA_data() const;
};

/* RTTIDerivedB class definition */
class RTTIDerivedB : public RTTIBase {
public:
    RTTIDerivedB();
    ~RTTIDerivedB();
    int getType() const override;
    int derivedB_data() const;
};

/* Initialize static member */
int LifecycleClass::instance_count = 0;

/* Helper function for saturated multiplication */
static inline size_t saturated_mul(size_t a, size_t b) {
    if (a == 0 || b == 0) return 0;
    if (a > ((size_t)-1) / b) return (size_t)-1;
    return a * b;
}

/* Note: operator new/delete are declared in the C++ section above */

/* Template function declarations */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

/* __cxa functions */
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, void* typeinfo, void* destructor);
void* __cxa_begin_catch(void* exception);
void __cxa_end_catch();
void __cxa_rethrow();
void __cxa_atexit(void (*dtor)(void*), void* arg, void* dso_handle);
void __cxa_bad_typeid();

/* __dynamic_cast */
void* __dynamic_cast(const void* src, const void* from, const void* to, long long vtable_offset);

/* Unwind functions */
void _Unwind_Resume(void* exc);

/* Exception personality */
int __gxx_personality_v0(int version, int actions, void* exception_class, void* exception_object, void* context);

/* String constants */
const char *asc_500D = "%s\n";
const char *aCppL301D = "Cpp L301: %d\n";
const char *aCppL302D = "Cpp L302: %d\n";
const char *aCppL303D = "Cpp L303: %d\n";
const char *aCppL304D = "Cpp L304: %d\n";
const char *aCppL305D = "Cpp L305: %d\n";
const char *aCppL306D = "Cpp L306: %d\n";
const char *aCppL307D = "Cpp L307: %d\n";
const char *aCppL308D = "Cpp L308: %d\n";
const char *aCppL309D = "Cpp L309: %d\n";

/* External declarations */
extern void *_dso_handle;
/* std::ios_base::Init - stub for iostream initialization */
void __ioinit_func(void);
void __ioinit_destructor(void);

/* Virtual table pointers - external */
extern int (*GLOBAL_OFFSET_TABLE_)[];
extern void *off_8C3C;
extern void *off_8D4C;
extern void *off_8D54;
extern void *off_8CDC;
extern void *off_8CF0;
extern void *off_8E2C;
extern void *off_8ECC;

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%%ebx" : : "b"((void *)8));
}


/* Function: sub_1190 @ 0x1190 */
int sub_1190(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: __cxx_global_var_init @ 0x11A0 */
void _cxx_global_var_init()
{
 /* Stub: just register destructor for static initialization */
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x11F0 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_123C @ 0x123C */
void sub_123C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1240 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1379 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x137D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1390 */
int test_cpp_member_func()
{
 int r2; // [esp+18h] [ebp-30h]
 int r1; // [esp+1Ch] [ebp-2Ch]
 SimpleClass obj(5, "Test");

 obj.setValue(10);
 r1 = obj.getValue();
 r2 = obj.compute(3);
 return SimpleClass::getClassID() + r2 + r1;
}

/* SimpleClass member function implementations */
void SimpleClass::setValue(SimpleClass *this, int v)
{
 this->value = v;
}

int SimpleClass::getValue(const SimpleClass *this)
{
 return this->value;
}

int SimpleClass::compute(const SimpleClass *this, int x)
{
 int v3; // [esp+10h] [ebp-8h]

 v3 = x * this->value;
 return strlen(this->name) + v3;
}


/* Function: _Z20test_cpp_constructorv @ 0x1420 */
int test_cpp_constructor()
{
 int Data; // [esp+1Ch] [ebp-1Ch]
 LifecycleClass obj; // [esp+28h] [ebp-10h] BYREF
 int result; // [esp+30h] [ebp-8h]

 result = 0;
 LifecycleClass::LifecycleClass(&obj, 5u);
 Data = LifecycleClass::getData(&obj, 2u);
 result += Data;
 result += LifecycleClass::getInstanceCount();
 LifecycleClass::~LifecycleClass(&obj);
 return result + 1000 * LifecycleClass::getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1520 */
int test_cpp_virtual_func()
{
 int v1; // [esp+10h] [ebp-48h]
 int r3; // [esp+2Ch] [ebp-2Ch]
 int r2; // [esp+38h] [ebp-20h]
 int r1; // [esp+3Ch] [ebp-1Ch]
 Derived derived; // [esp+48h] [ebp-10h] BYREF
 Base base; // [esp+50h] [ebp-8h] BYREF

 Base::Base(&base);
 Derived::Derived(&derived, 3);
 r1 = Base::virtual_func(&base, 5);
 r2 = Derived::virtual_func(&derived, 5);
 r3 = call_virtual_func(&base, 5);
 v1 = call_virtual_func(&derived, 5) + r3 + r2 + r1;
 Derived::~Derived(&derived);
 Base::~Base(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1670 */
int test_cpp_multiple_inheritance()
{
 MultiDerived *v1; // [esp+20h] [ebp-38h]
 int r2; // [esp+28h] [ebp-30h]
 int r1; // [esp+34h] [ebp-24h]
 MultiDerived obj; // [esp+40h] [ebp-18h] BYREF

 MultiDerived::MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v1 = 0;
 if ( &obj )
 v1 = (MultiDerived *)&obj.BaseB;
 r1 = ((int ( *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
 r2 = (*(int ( **)(MultiDerived *))v1->_vptr$BaseA)(v1);
 MultiDerived::~MultiDerived(&obj);
 return (&obj != v1) + r2 + r1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1760 */
int test_cpp_diamond_inheritance()
{
 int v1; // [esp+10h] [ebp-48h]
 int ( ***v2)(unsigned int); // [esp+20h] [ebp-38h]
 int r1; // [esp+30h] [ebp-28h]
 DiamondDerived obj; // [esp+38h] [ebp-20h] BYREF

 DiamondDerived::DiamondDerived(&obj);
 *(int *)((char *)&obj.dataA + *((unsigned int *)obj._vptr$MiddleA - 3)) = 50;
 v2 = 0;
 if ( &obj )
 v2 = (int ( ***)(unsigned int))((char *)&obj + *((unsigned int *)obj._vptr$MiddleA - 3));
 r1 = (**v2)(v2);
 *(int *)((char *)&obj.dataA + *((unsigned int *)obj._vptr$MiddleA - 3)) = 100;
 v1 = (**v2)(v2) + r1;
 DiamondDerived::~DiamondDerived(&obj);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1840 */
int test_cpp_operator_overload()
{
 int v0; // ecx
 bool eq; // [esp+17h] [ebp-21h]
 Point p3; // [esp+18h] [ebp-20h] BYREF
 Point p2; // [esp+20h] [ebp-18h] BYREF
 Point p1; // [esp+28h] [ebp-10h] BYREF

 Point::Point(&p1, 1, 2);
 Point::Point(&p2, 3, 4);
 Point::operator+(&p3, &p1, &p2);
 eq = Point::operator==(&p1, &p2);
 Point::operator++(&p3);
 v0 = 10;
 if ( eq )
 v0 = 0;
 return v0 + p3.y + p3.x;
}


/* Template function implementations */
template<typename T>
T template_max(T a, T b) {
    if (a <= b) return b;
    else return a;
}

template<typename T>
void template_swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

/* Function: _Z22test_cpp_template_funcv @ 0x1900 */
int test_cpp_template_func()
{
 int b = 20; // [esp+20h] [ebp-18h]
 int a = 10; // [esp+24h] [ebp-14h]
 double r2; // [esp+28h] [ebp-10h]
 int r1; // [esp+30h] [ebp-8h]

 r1 = template_max<int>(3, 7);
 r2 = template_max<double>(2.5, 1.5);
 template_swap<int>(&a, &b);
 return b + a + (int)r2 + r1;
}


/* Function: _Z23test_cpp_template_classv @ 0x19B0 */
int test_cpp_template_class()
{
 double r3; // [esp+20h] [ebp-98h]
 Container<double> double_container; // [esp+28h] [ebp-90h] BYREF
 int r2; // [esp+80h] [ebp-38h]
 int r1; // [esp+84h] [ebp-34h]
 Container<int> int_container; // [esp+88h] [ebp-30h] BYREF

 Container<int>::Container(&int_container);
 Container<int>::push(&int_container, 10);
 Container<int>::push(&int_container, 20);
 Container<int>::push(&int_container, 30);
 r1 = Container<int>::get(&int_container, 0);
 r2 = Container<int>::getSize(&int_container);
 Container<double>::Container(&double_container);
 Container<double>::push(&double_container, 3.14);
 r3 = Container<double>::get(&double_container, 0);
 return (int)r3 + r2 + r1;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B20 */
int test_cpp_lambda()
{
 int r1; // [esp+14h] [ebp-24h]
 int capture_by_ref = 20; // [esp+2Ch] [ebp-Ch] BYREF
 int capture_by_value = 10; // [esp+30h] [ebp-8h]

/* Lambda class 1: captures by value and reference */
class Lambda1 {
public:
    int capture_by_value;
    int *capture_by_ref;
    Lambda1(int cv, int* cr) : capture_by_value(cv), capture_by_ref(cr) {}
    int operator()(int x) const {
        *capture_by_ref += 5;
        return *capture_by_ref + capture_by_value * x;
    }
};
 
 Lambda1 lambda1(capture_by_value, &capture_by_ref);
 r1 = lambda1(3);
 
/* Lambda class 2: template lambda (just a no-op in this case) */
class Lambda2 {
public:
    template<typename A, typename B>
    void operator()(A a, B b) const {
        (void)a;
        (void)b;
    }
};
 
Lambda2 lambda2;
lambda2.operator()<int, int>(10, 20);
 
 return r1 + capture_by_ref;
}


/* Note: Lambda operator() implementations are inlined above */


/* Function: _Z18test_cpp_exceptionv @ 0x1BF0 */
void test_cpp_exception()
{
 unsigned int *exception; // ecx

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D90 */
char *test_cpp_smart_ptr()
{
 int *v0; // eax
 std::unique_ptr<int> *v1; // eax
 char *v3; // [esp+14h] [ebp-64h]
 std::__add_lvalue_reference_helper<int,true>::type v4; // [esp+1Ch] [ebp-5Ch]
 int *v5; // [esp+20h] [ebp-58h]
 int *v6; // [esp+2Ch] [ebp-4Ch]
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> ptr3; // [esp+48h] [ebp-30h] BYREF
 $44B1EA910F358000232221CCB0AF3F67 deleter; // [esp+50h] [ebp-28h] BYREF
 int r2; // [esp+54h] [ebp-24h]
 std::unique_ptr<int[]> v10; // [esp+58h] [ebp-20h] BYREF
 std::unique_ptr<int> ptr2; // [esp+60h] [ebp-18h] BYREF
 std::unique_ptr<int> ptr1; // [esp+70h] [ebp-8h] BYREF

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(&ptr1, v0);
 *std::unique_ptr<int>::operator*(&ptr1) = 200;
 v1 = std::move<std::unique_ptr<int> &>(&ptr1);
 std::unique_ptr<int>::unique_ptr(&ptr2, v1);
 v10._M_t._M_t._M_head_impl = (int *)*std::unique_ptr<int>::operator*(&ptr2);
 v6 = (int *)operator new[](0x14u);
 *v6 = 1;
 v6[1] = 2;
 v6[2] = 3;
 v6[3] = 4;
 v6[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(&v10, v6);
 r2 = *std::unique_ptr<int []>::operator[](&v10, 2u);
 v5 = (int *)operator new(4u);
 *v5 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
 &ptr3,
 v5,
 (const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)&deleter);
 v4 = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(&ptr3);
 v3 = (char *)v10._M_t._M_t._M_head_impl + r2 + *v4;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(&ptr3);
 std::unique_ptr<int []>::~unique_ptr(&v10);
 std::unique_ptr<int>::~unique_ptr(&ptr2);
 std::unique_ptr<int>::~unique_ptr(&ptr1);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1FD0 */
void std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this,
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer __p,
 const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2020 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(
 const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2060 */
void std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 int **v1; // eax
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *deleter; // [esp+10h] [ebp-18h]
 int **__ptr; // [esp+20h] [ebp-8h]

 __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(this);
 v1 = std::move<int *&>(__ptr);
 test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
 }
 *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x2100 */
int test_cpp_rtti()
{
 const char *v0; // eax
 const RTTIDerivedB *v2; // [esp+28h] [ebp-40h]
 const RTTIDerivedA *v3; // [esp+30h] [ebp-38h]
 RTTIDerivedA *v4; // [esp+3Ch] [ebp-2Ch]
 RTTIDerivedB *v5; // [esp+44h] [ebp-24h]
 int result; // [esp+54h] [ebp-14h]
 int resulta; // [esp+54h] [ebp-14h]

 v4 = (RTTIDerivedA *)operator new(4u);
 memset(v4, 0, sizeof(RTTIDerivedA));
 RTTIDerivedA::RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 memset(v5, 0, sizeof(RTTIDerivedB));
 RTTIDerivedB::RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info **)v4->_vptr$RTTIBase - 1),
 (const std::type_info *)&`typeinfo for'RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 __cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info **)v5->_vptr$RTTIBase - 1),
 (const std::type_info *)&`typeinfo for'RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA::derivedA_data(v3);
 v2 = (const RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v2 )
 result += RTTIDerivedB::derivedB_data(v2);
 v0 = std::type_info::name(*((const std::type_info **)v4->_vptr$RTTIBase - 1));
 resulta = result + strlen(v0);
 (*((void ( **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x23A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 printf(asc_500D);
 v0 = test_cpp_member_func();
 printf(aCppL301D, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 printf(aCppL306D, v5);
 v6 = test_cpp_template_func();
 printf(aCppL307D, v6);
 v7 = test_cpp_template_class();
 printf(aCppL308D, v7);
 v8 = test_cpp_lambda();
 printf(aCppL309D, v8);
 test_cpp_exception();
}


/* Function: main @ 0x2530 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2560 */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 std::__uniq_ptr_data<int,(lambda at src_5-1_cpp:445:20),true,false> *this,
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer __p,
 const const struct {unsigned char gap0;} *a3)
{
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 this,
 __p,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x25A0 */
void std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this,
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer __p,
 const const struct {unsigned char gap0;} *__d)
{
 const const struct {unsigned char gap0;} *v3; // eax

 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>((std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *)__d);
 std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 &this->_M_t,
 &__p,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x25F0 */
const const struct {unsigned char gap0;} * std::forward<test_cpp_smart_ptr(void)::$_2 const&>(
 std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *__t)
{
 return (const const struct {unsigned char gap0;} *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2600 */
void std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *this,
 int **__a1,
 const const struct {unsigned char gap0;} *__a2)
{
 const const struct {unsigned char gap0;} *v3; // esi
 int **v4; // [esp+18h] [ebp-10h]

 v4 = std::forward<int *&>(__a1);
 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>((std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *)__a2);
 std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 this,
 v4,
 v3);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2680 */
void std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *this,
 int **__head,
 const const struct {unsigned char gap0;} *__tail)
{
 const const struct {unsigned char gap0;} *v3; // eax
 int **v4; // eax

 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>((std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *)__tail);
 std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(this, v3);
 v4 = std::forward<int *&>(__head);
 std::_Head_base<0u,int *,false>::_Head_base<int *&>((std::_Head_base<0U,int *,false> *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2700 */
void std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(
 std::_Tuple_impl<1U,(lambda at src_5-1_cpp:445:20)> *this,
 const const struct {unsigned char gap0;} *__head)
{
 std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2740 */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(
 std::_Head_base<1U,(lambda at src_5-1_cpp:445:20),true> *this,
 const const struct {unsigned char gap0;} *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2750 */
std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer * std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2780 */
std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type * std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return (std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x27D0 */
void test_cpp_smart_ptr(void)::$_2::operator()(const const struct {unsigned char gap0;} *this, int *p)
{
 *p = -1;
 if ( p )
 operator delete(p);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2820 */
std::__tuple_element_t<0U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2850 */
int ** std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2880 */
int ** std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(
 std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x28B0 */
struct {unsigned char gap0;} * std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return (struct {unsigned char gap0;} *)std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x28E0 */
std::__tuple_element_t<1U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(
 std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return (std::__tuple_element_t<1U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > *)std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2910 */
struct {unsigned char gap0;} * std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(
 std::_Tuple_impl<1U,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2940 */
struct {unsigned char gap0;} * std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(
 std::_Tuple_impl<1U,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2970 */
struct {unsigned char gap0;} * std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(
 std::_Head_base<1U,(lambda at src_5-1_cpp:445:20),true> *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2980 */
std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(
 const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x29D0 */
std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(
 const std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return *std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2A00 */
const std::__tuple_element_t<0U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 const std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2A30 */
int *const * std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 const std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2A60 */
int *const * std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(
 const std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2A90 */
void SimpleClass::SimpleClass(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2AE0 */
void SimpleClass::setValue(int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2B00 */
int SimpleClass::getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2B10 */
int SimpleClass::compute(const SimpleClass *this, int x)
{
 int v3; // [esp+10h] [ebp-8h]

 v3 = x * this->value;
 return strlen(this->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2B50 */
int SimpleClass::getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2B60 */
void LifecycleClass::LifecycleClass(size_t s)
{
 size_t i; // [esp+10h] [ebp-8h]

 this->size = s;
 this->data = (int *)operator new[](saturated_mul(4u, s));
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 *(&GLOBAL_OFFSET_TABLE_ + 33) = (Elf32_Dyn *)((char *)*(&GLOBAL_OFFSET_TABLE_ + 33) + 1);
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x2C00 */
int LifecycleClass::getData(const LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2C50 */
int LifecycleClass::getInstanceCount()
{
 return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2C70 */
void LifecycleClass::~LifecycleClass(LifecycleClass *this)
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x2CC0 */
void Base::Base()
{
 this->_vptr$Base = (int (**)(void))&off_8C3C;
}


/* Function: _ZN7DerivedC2Ei @ 0x2CF0 */
void Derived::Derived(Derived *this, int m)
{
 Base::Base(this);
 this->_vptr$Base = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 233);
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2D40 */
int Base::virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2D60 */
int Derived::virtual_func(Derived *this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZN7DerivedD2Ev @ 0x2D80 */
void Derived::~Derived(Derived *this)
{
 Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x2DB0 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2DC0 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA(this);
 BaseB::BaseB(&this->BaseB);
 this->_vptr$BaseA = (int (**)(void))&(&GLOBAL_OFFSET_TABLE_)[-28];
 this->_vptr$BaseB = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 218);
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2E20 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB(&this->BaseB);
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E60 */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((VirtualBase *)&this->MiddleB);
 MiddleA::MiddleA(this, (void **)off_8D4C);
 MiddleB::MiddleB((MiddleB *)(&this->dataA + 1), (void **)off_8D54);
 this->_vptr$MiddleA = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 190);
 this->_vptr$MiddleB = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 177);
 *(&this->dataA + 1) = (int)(&GLOBAL_OFFSET_TABLE_ - 184);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2F00 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this, (void **)&`VTT for'DiamondDerived);
 VirtualBase::~VirtualBase((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x2F50 */
void Point::Point(Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x2F70 */
Point * Point::operator+@<eax>(Point *__return_ptr retstr, const Point *this, const Point *other)
{
 Point::Point(retstr, other->x + this->x, other->y + this->y);
 return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2FD0 */
bool Point::operator==(const Point *this, const Point *other)
{
 bool v3; // [esp+7h] [ebp-1h]

 v3 = 0;
 if ( this->x == other->x )
 return this->y == other->y;
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3020 */
Point * Point::operator++(Point *this)
{
 Point *result; // eax

 result = this;
 ++this->x;
 ++this->y;
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3040 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3070 */
double template_max<double>(double a, double b)
{
 if ( a <= (long double)b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x30B0 */
void template_swap<int>(int *a, int *b)
{
 int temp; // [esp+0h] [ebp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x30E0 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3100 */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // ecx

 if ( this->size < 10 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3140 */
int Container<int>::get(const Container<int> *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3190 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x31A0 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x31C0 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // ecx

 if ( this->size < 10 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3200 */
double Container<double>::get(const Container<double> *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3260 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3270 */
void std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(
 std::unique_ptr<int> *this,
 std::unique_ptr<int>::pointer __p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x32C0 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int>::operator*(
 const std::unique_ptr<int> *this)
{
 return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3300 */
std::remove_reference<std::unique_ptr<int> &>::type * std::move<std::unique_ptr<int> &>(
 std::unique_ptr<int> *__t)
{
 return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3310 */
void std::unique_ptr<int>::unique_ptr(std::unique_ptr<int> *this, std::unique_ptr<int> *a2)
{
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3350 */
void std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
 std::unique_ptr<int[]> *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x33A0 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int []>::operator[](
 const std::unique_ptr<int[]> *this,
 std::size_t __i)
{
 return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x33F0 */
void std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int[]> *this)
{
 std::unique_ptr<int[]>::deleter_type *deleter; // ecx
 int **__ptr; // [esp+10h] [ebp-8h]

 __ptr = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int []>::get_deleter(this);
 std::default_delete<int []>::operator()<int>(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3470 */
void std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *this)
{
 int *v1; // edx
 std::unique_ptr<int>::deleter_type *deleter; // [esp+14h] [ebp-14h]
 int **__ptr; // [esp+20h] [ebp-8h]

 __ptr = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int>::get_deleter(this);
 v1 = *std::move<int *&>(__ptr);
 std::default_delete<int>::operator()(deleter, v1);
 }
 *__ptr = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3500 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 82);
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3540 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))&(&GLOBAL_OFFSET_TABLE_)[-9];
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3580 */
bool std::type_info::operator==(const std::type_info *this, const std::type_info *__arg)
{
 bool v3; // [esp+17h] [ebp-11h]
 char v4; // [esp+23h] [ebp-5h]

 v4 = 1;
 if ( *((unsigned int *)this + 1) != *((unsigned int *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this + 1) != 42 )
 v3 = strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3610 */
int RTTIDerivedA::derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3620 */
int RTTIDerivedB::derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3630 */
const char * std::type_info::name(const std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned int *)this + 1) + 1);
 else
 return (const char *)*((unsigned int *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3670 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3690 */
void Base::~Base(Base *this)
{
 Base::~Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x36D0 */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x36F0 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3730 */
void BaseA::BaseA(BaseA *this)
{
 this->_vptr$BaseA = (int (**)(void))&off_8CDC;
}


/* Function: _ZN5BaseBC2Ev @ 0x3760 */
void BaseB::BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_8CF0;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3790 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x37A0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x37E0 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x37F0 */
void `non-virtual thunk to'MultiDerived::funcB(int a1)
{
 MultiDerived::funcB((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3820 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3850 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3880 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3890 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x38A0 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38E0 */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38F0 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3900 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3940 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 this->_vptr$VirtualBase = (int (**)(void))&off_8E2C;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3970 */
void MiddleA::MiddleA(MiddleA *this, void **vtt)
{
 this->_vptr$MiddleA = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned int *)this->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3990 */
void MiddleB::MiddleB(MiddleB *this, void **vtt)
{
 this->_vptr$MiddleB = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned int *)this->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x39B0 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x39D0 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this, (void **)`VTT for'MiddleA);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataA + 1));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3A20 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x3A60 */
void `virtual thunk to'MiddleA::func(unsigned int *a1)
{
 MiddleA::func((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x3A90 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3AC0 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3AF0 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3B10 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this, (void **)`VTT for'MiddleB);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataB + 1));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3B60 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x3BA0 */
void `virtual thunk to'MiddleB::func(unsigned int *a1)
{
 MiddleB::func((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x3BD0 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3C00 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3C30 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3C50 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3C90 */
void `non-virtual thunk to'DiamondDerived::func(int a1)
{
 DiamondDerived::func((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3CC0 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3CF0 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x3D20 */
void `virtual thunk to'DiamondDerived::func(unsigned int *a1)
{
 DiamondDerived::func((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3D50 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3D80 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x3DB0 */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x3DC0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3DD0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3E10 */
void MiddleA::~MiddleA(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x3E20 */
void MiddleB::~MiddleB(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x3E30 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, void **vtt)
{
 MiddleB::~MiddleB((MiddleB *)(&this->dataA + 1), vtt + 3);
 MiddleA::~MiddleA(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3E90 */
void std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3ED0 */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
 std::tuple<int *,std::default_delete<int> > *v2; // eax

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
 std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3F50 */
std::remove_reference<std::tuple<int *,std::default_delete<int> > &>::type * std::move<std::tuple<int *,std::default_delete<int>> &>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3F60 */
void std::tuple<int *,std::default_delete<int>>::tuple(
 std::tuple<int *,std::default_delete<int> > *this,
 std::tuple<int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3FA0 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x3FD0 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4000 */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this,
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this, a2);
 *(unsigned int *)&this->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0 = *(unsigned int *)&a2->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4040 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this,
 std::_Tuple_impl<1U,std::default_delete<int> > *__in)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4050 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4080 */
int ** std::__get_helper<0u,int *,std::default_delete<int>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x40B0 */
int ** std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x40E0 */
int ** std::_Head_base<0u,int *,false>::_M_head(std::_Head_base<0U,int *,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x40F0 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_8ECC;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4120 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4150 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4190 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x41A0 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x41B0 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x41F0 */
int RTTIBase::getType(const RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4200 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4230 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4270 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4280 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, __p);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x42C0 */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4310 */
void std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x4350 */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x4390 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this)
{
 std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x43C0 */
void std::_Head_base<0u,int *,false>::_Head_base(std::_Head_base<0U,int *,false> *this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x43E0 */
void std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(
 std::_Head_base<1U,std::default_delete<int>,true> *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F0 */
std::unique_ptr<int>::deleter_type * std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4440 */
void std::default_delete<int>::operator()(const std::default_delete<int> *this, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4480 */
std::remove_reference<int *&>::type * std::move<int *&>(int **__t)
{
 return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4490 */
std::default_delete<int> * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return std::get<1u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x44C0 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int> > > * std::get<1u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x44F0 */
std::default_delete<int> * std::__get_helper<1u,std::default_delete<int>>(
 std::_Tuple_impl<1U,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4520 */
std::default_delete<int> * std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4550 */
std::default_delete<int> * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(
 std::_Head_base<1U,std::default_delete<int>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4560 */
std::unique_ptr<int>::pointer std::unique_ptr<int>::get(const std::unique_ptr<int> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B0 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return *std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x45E0 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 const std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4610 */
int *const * std::__get_helper<0u,int *,std::default_delete<int>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4640 */
int *const * std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
 const std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x4670 */
int *const * std::_Head_base<0u,int *,false>::_M_head(const std::_Head_base<0U,int *,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4680 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, __p);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x46C0 */
void std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4710 */
void std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4750 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4780 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x47C0 */
void std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *this)
{
 std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x47F0 */
void std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(
 std::_Head_base<1U,std::default_delete<int[]>,true> *this)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4800 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4830 */
int ** std::__get_helper<0u,int *,std::default_delete<int []>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4860 */
int ** std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4890 */
std::unique_ptr<int[]>::deleter_type * std::unique_ptr<int []>::get_deleter(std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x48E0 */
std::enable_if<true,void>::type std::default_delete<int []>::operator()<int>(
 const std::default_delete<int[]> *this,
 int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4920 */
std::default_delete<int[]> * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<1u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4950 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int[]> > > * std::get<1u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4980 */
std::default_delete<int[]> * std::__get_helper<1u,std::default_delete<int []>>(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x49B0 */
std::default_delete<int[]> * std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x49E0 */
std::default_delete<int[]> * std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(
 std::_Head_base<1U,std::default_delete<int[]>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x49F0 */
std::unique_ptr<int[]>::pointer std::unique_ptr<int []>::get(const std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4A40 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4A70 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 const std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4AA0 */
int *const * std::__get_helper<0u,int *,std::default_delete<int []>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4AD0 */
int *const * std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
 const std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B00 */
int ** std::forward<int *&>(std::remove_reference<int *&>::type *__t)
{
 return __t;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4B10 */
void std::_Head_base<0u,int *,false>::_Head_base<int *&>(std::_Head_base<0U,int *,false> *this, int **__h)
{
 this->_M_head_impl = *std::forward<int *&>(__h);
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x4B9C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9090 */

/* FAILED to decompile: __cxa_finalize @ 0x9094 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9098 */

/* FAILED to decompile: __cxa_begin_catch @ 0x909C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x90A0 */

/* FAILED to decompile: strlen @ 0x90A4 */

/* FAILED to decompile: __cxa_atexit @ 0x90A8 */

/* FAILED to decompile: strcmp @ 0x90B0 */

/* FAILED to decompile: __libc_start_main @ 0x90B4 */

/* FAILED to decompile: _Znaj @ 0x90B8 */

/* FAILED to decompile: strncpy @ 0x90BC */

/* FAILED to decompile: _ZdlPv @ 0x90C0 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90C4 */

/* FAILED to decompile: __dynamic_cast @ 0x90C8 */

/* FAILED to decompile: _ZdaPv @ 0x90CC */

/* FAILED to decompile: printf @ 0x90D4 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90DC */

/* FAILED to decompile: __cxa_end_catch @ 0x90E0 */

/* FAILED to decompile: memset @ 0x90E4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90E8 */

/* FAILED to decompile: __cxa_throw @ 0x90EC */

/* FAILED to decompile: _Unwind_Resume @ 0x90F4 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x90F8 */

/* Total functions decompiled: 221, failed: 24 */
