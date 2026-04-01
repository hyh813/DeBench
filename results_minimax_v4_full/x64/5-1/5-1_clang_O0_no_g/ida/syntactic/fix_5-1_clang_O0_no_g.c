/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O0_no_g
 * Processor: pc
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <typeinfo>
#include <new>
#include <iostream>
#include <memory>
#include <tuple>
#include <utility>

// Format strings
static const char aCppL301D[] = "Cpp L301: %d\n";
static const char aCppL302D[] = "Cpp L302: %d\n";
static const char aCppL303D[] = "Cpp L303: %d\n";
static const char aCppL304D[] = "Cpp L304: %d\n";
static const char aCppL305D[] = "Cpp L305: %d\n";
static const char aCppL306D[] = "Cpp L306: %d\n";
static const char aCppL307D[] = "Cpp L307: %d\n";
static const char aCppL308D[] = "Cpp L308: %d\n";
static const char aCppL309D[] = "Cpp L309: %d\n";
static const char format[] = "Testing C++ Features:\n";

// Class declarations
class SimpleClass;
class LifecycleClass;
class Base;
class Derived;
class MultiDerived;
class DiamondDerived;
class Point;
template<typename T> class Container;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class BaseA;
class BaseB;
class VirtualBase;
class MiddleA;
class MiddleB;

// Forward declarations for CRT functions
extern "C" {
void (*_gmon_start__)(void);
void *_dso_handle;
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
}

// C++ operator declarations
void *operator new(size_t);
void operator delete(void *);
void *operator new[](size_t);
void operator delete[](void *);

// Template function declarations
template<typename T>
T template_max(T a1, T a2);

template<typename T>
void template_swap(T *a1, T *a2);

// Standard library function declarations
int printf(const char *, ...);
void *memset(void *, int, size_t);
char *strncpy(char *, const char *, size_t);
int strcmp(const char *, const char *);
size_t strlen(const char *);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, std::type_info *, void *);
void __cxa_begin_catch(void *);
void __cxa_end_catch();
void __cxa_rethrow();
void __cxa_bad_typeid();
// dynamic_cast is a C++ operator, declared in <cstddef>
void terminate() noexcept;
void __gmon_start();
void __cxa_finalize(void *);

// Simple point class for operator overloading test
class Point {
public:
    int x;
    int y;
    
    Point(int xx = 0, int yy = 0) : x(xx), y(yy) {}
    
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
    
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
    
    Point& operator++() {
        ++x;
        ++y;
        return *this;
    }
};

// BaseA class for multiple inheritance
class BaseA {
public:
    virtual long long funcA() { return 10; }
    virtual ~BaseA() {}
};

// BaseB class for multiple inheritance
class BaseB {
public:
    virtual long long funcB() { return 20; }
    virtual ~BaseB() {}
};

// VirtualBase for diamond inheritance
class VirtualBase {
public:
    virtual void func() {}
    virtual ~VirtualBase() {}
};

// MiddleA for diamond inheritance
class MiddleA : virtual public VirtualBase {
public:
    unsigned long long vtable_ptr;
    unsigned int value;
    
    virtual void func() {}
    virtual ~MiddleA() {}
};

// MiddleB for diamond inheritance
class MiddleB : virtual public VirtualBase {
public:
    unsigned long long vtable_ptr;
    unsigned int value;
    
    virtual void func() {}
    virtual ~MiddleB() {}
};

// DiamondDerived for diamond inheritance
class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual void func() {}
    virtual ~DiamondDerived() {}
};

// Container template class
template<typename T>
class Container {
public:
    T data[10];
    int size;
    
    Container() : size(0) {}
    
    void push(const T& value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
    
    T get(int index) const {
        if (index < 0 || index >= size) return T();
        return data[index];
    }
    
    int getSize() const { return size; }
};

// RTTI classes
class RTTIBase {
public:
    unsigned long long vtable_ptr;
    virtual int getType() { return 0; }
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual int getType() { return 1; }
    int derivedA_data() { return 100; }
    virtual ~RTTIDerivedA() {}
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual int getType() { return 2; }
    int derivedB_data() { return 200; }
    virtual ~RTTIDerivedB() {}
};

// Forward declarations for base classes (incomplete type resolution)
class BaseA;
class BaseB;
class VirtualBase;
class MiddleA;
class MiddleB;
class DiamondDerived;

// Base class definition (needed for virtual function tests)
class Base {
public:
    virtual long long virtual_func(int a2);
    virtual ~Base();
    virtual const char* getName();
};

// Derived class definition
class Derived : public Base {
public:
    int derived_value;
    Derived(int v = 0);
    virtual long long virtual_func(int a2) override;
    virtual ~Derived();
    virtual const char* getName();
};

// MultiDerived class definition
class MultiDerived : public BaseA, public BaseB {
public:
    MultiDerived();
    virtual ~MultiDerived();
    long long funcA();
    long long funcB();
};

// CRT internal ioinit object
// Note: ios_base is defined in <iostream>, only the Init object is needed here
namespace std {
    ios_base::Init __ioinit;
}

// SimpleClass definition
class SimpleClass {
public:
    int value;
    char name[32];
    
    SimpleClass(int v = 0, const char* n = "") {
        value = v;
        strncpy(name, n, 31);
        name[31] = '\0';
    }
    
    void setValue(int v) { value = v; }
    int getValue() const { return value; }
    int compute(int multiplier) const { return multiplier * value + strlen(name); }
    static int getClassID() { return 4660; }
};

// LifecycleClass definition
class LifecycleClass {
public:
    unsigned long long size;
    unsigned int* data;
    static int instance_count;
    
    LifecycleClass(unsigned long long s) : size(s), data(nullptr) {
        data = new unsigned int[s];
        for (unsigned long long i = 0; i < s; i++) {
            data[i] = 10 * i;
        }
        instance_count++;
    }
    
    ~LifecycleClass() {
        if (data) delete[] data;
        instance_count--;
    }
    
    unsigned int getData(unsigned long long idx) const {
        if (idx >= size) return (unsigned int)-1;
        return data[idx];
    }
    
    static int getInstanceCount() { return instance_count; }
};

int LifecycleClass::instance_count = 0;

/* Function: .init_proc @ 0x2000 */
void (*init_proc(void))(void)
{
 if ( _gmon_start__ )
 _gmon_start__();
 return _gmon_start__;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 // Empty function placeholder
}


/* Function: __cxx_global_var_init @ 0x2180 */
int _cxx_global_var_init()
{
 new (&std::__ioinit) std::ios_base::Init();
 return __cxa_atexit((void (*)(void *))([] (void *p) { ((std::ios_base::Init*)p)->~Init(); }), &std::__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x21B0 */
int GLOBAL__sub_I_5_1_cpp()
{
 return _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x22B0 */
long long test_cpp_member_func(void)
{
 int v1; // [rsp+10h] [rbp-30h]
 int Value; // [rsp+14h] [rbp-2Ch]
 unsigned char v3[40]; // [rsp+18h] [rbp-28h] BYREF

 new (v3) SimpleClass(5, "Test");
 ((SimpleClass *)v3)->setValue(10);
 Value = ((SimpleClass *)v3)->getValue();
 v1 = ((SimpleClass *)v3)->compute(3);
 return (unsigned int)SimpleClass::getClassID() + v1 + Value;
}


/* Function: _Z20test_cpp_constructorv @ 0x2310 */
long long test_cpp_constructor(void)
{
 int v0; // eax
 int InstanceCount; // [rsp+Ch] [rbp-34h]
 int Data; // [rsp+18h] [rbp-28h]
 unsigned char v4[20]; // [rsp+28h] [rbp-18h] BYREF
 int v5; // [rsp+3Ch] [rbp-4h]

 v5 = 0;
 new (v4) LifecycleClass(5u);
 Data = ((LifecycleClass *)v4)->getData(2u);
 v5 += Data;
 InstanceCount = ((LifecycleClass *)v4)->getInstanceCount();
 v5 += InstanceCount;
 ((LifecycleClass *)v4)->~LifecycleClass();
 v0 = ((LifecycleClass *)v4)->getInstanceCount();
 return (unsigned int)(v5 + 1000 * v0);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x23B0 */
long long call_virtual_func(Base *a1, unsigned int a2)
{
 typedef long long (Base::*VirtualFn)(int);
 VirtualFn fn = *(VirtualFn *)(*(unsigned long long *)a1);
 return (a1->*fn)((int)a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x23E0 */
long long test_cpp_virtual_func(void)
{
 unsigned int v1; // [rsp+4h] [rbp-5Ch]
 int v2; // [rsp+1Ch] [rbp-44h]
 int v3; // [rsp+34h] [rbp-2Ch]
 int v4; // [rsp+38h] [rbp-28h]
 unsigned char v5[16]; // [rsp+48h] [rbp-18h] BYREF
 unsigned char v6[8]; // [rsp+58h] [rbp-8h] BYREF

 new (v6) Base();
 new (v5) Derived(3);
 v4 = ((Base *)v6)->virtual_func(5);
 v3 = Derived::virtual_func((Derived *)v5, 5);
 v2 = call_virtual_func((Base *)v6, 5u);
 v1 = call_virtual_func((Base *)v5, 5u) + v2 + v3 + v4;
 ((Derived *)v5)->~Derived();
 ((Base *)v6)->~Base();
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24F0 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned long long v1; // [rsp+18h] [rbp-58h]
 int v2; // [rsp+28h] [rbp-48h]
 int v3; // [rsp+3Ch] [rbp-34h]
 MultiDerived *md; // [rsp+50h] [rbp-20h] BYREF
 int v5; // [rsp+58h] [rbp-18h]
 unsigned int v6[4]; // [rsp+60h] [rbp-10h] BYREF

 md = new MultiDerived();
 v5 = 100;
 v6[2] = 200;
 v1 = 0;
 if ( md )
 v1 = (unsigned long long)md;
 v3 = md->funcA();
 v2 = md->funcB();
 delete md;
 return (unsigned int)(md != (MultiDerived *)v1) + v2 + v3;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x25D0 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v1; // [rsp+Ch] [rbp-64h]
 unsigned long long v2; // [rsp+18h] [rbp-58h]
 int v3; // [rsp+34h] [rbp-3Ch]
 unsigned long long v4[6]; // [rsp+40h] [rbp-30h] BYREF

 new (v4) DiamondDerived();
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 50;
 v2 = 0;
 if ( v4 )
 v2 = *(unsigned long long *)((char *)v4 + *(unsigned long long *)(v4[0] - 24LL));
 v3 = ((long long (*)(unsigned long long))v2)(v2);
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 100;
 v1 = ((long long (*)(unsigned long long))v2)(v2) + v3;
 DiamondDerived::~DiamondDerived((DiamondDerived *)v4);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x26A0 */
long long test_cpp_operator_overload(void)
{
 int v0; // ecx
 char v2; // [rsp+7h] [rbp-19h]
 Point v3; // [rsp+8h] [rbp-18h] BYREF
 Point v4; // [rsp+10h] [rbp-10h] BYREF
 Point v5; // [rsp+18h] [rbp-8h] BYREF

 new (&v5) Point(1, 2);
 new (&v4) Point(3, 4);
 v3 = v5.operator+(v4);
 v2 = v5.operator==(v4) & 1;
 v3.operator++();
 v0 = 10;
 if ( (v2 & 1) != 0 )
 v0 = 0;
 return (unsigned int)(v0 + (int)v3.y + (int)v3.x);
}


/* Function: _Z22test_cpp_template_funcv @ 0x2720 */
long long test_cpp_template_func(void)
{
 int v1; // [rsp+8h] [rbp-18h] BYREF
 int v2; // [rsp+Ch] [rbp-14h] BYREF
 double v3; // [rsp+10h] [rbp-10h]
 int v4; // [rsp+1Ch] [rbp-4h]

 v4 = template_max<int>(3, 7);
 v3 = template_max<double>(2.5, 1.5);
 v2 = 10;
 v1 = 20;
 template_swap<int>(&v2, &v1);
 return (unsigned int)(v1 + v2 + (int)v3 + v4);
}


/* Function: _Z23test_cpp_template_classv @ 0x2790 */
long long test_cpp_template_class(void)
{
 double v1; // [rsp+8h] [rbp-98h]
 unsigned char v2[88]; // [rsp+10h] [rbp-90h] BYREF
 int Size; // [rsp+68h] [rbp-38h]
 int v4; // [rsp+6Ch] [rbp-34h]
 unsigned char v5[48]; // [rsp+70h] [rbp-30h] BYREF

 new (v5) Container<int>();
 ((Container<int> *)v5)->push(10);
 ((Container<int> *)v5)->push(20);
 ((Container<int> *)v5)->push(30);
 v4 = ((Container<int> *)v5)->get(0);
 Size = ((Container<int> *)v5)->getSize();
 new (v2) Container<double>();
 ((Container<double> *)v2)->push(3.14);
 v1 = ((Container<double> *)v2)->get(0);
 return (unsigned int)((int)v1 + Size + v4);
}


// Lambda capture class for test_cpp_lambda
class test_cpp_lambda$_0 {
public:
    long long operator()(int a1, int a2) const {
        return (unsigned int)(a2 + a1);
    }
};

class test_cpp_lambda$_1 {
public:
    long long operator()(int* a1, int a2) const {
        a1[2] += 5;
        return (unsigned int)(a1[2] + a1[0] * a2);
    }
};

/* Function: _Z15test_cpp_lambdav @ 0x2840 */
long long test_cpp_lambda(void)
{
 int v1; // [rsp+Ch] [rbp-24h]
 unsigned char v2[8]; // [rsp+10h] [rbp-20h] BYREF
 int v3; // [rsp+18h] [rbp-18h] BYREF
 unsigned int *v4; // [rsp+20h] [rbp-10h]
 unsigned int v5[2]; // [rsp+28h] [rbp-8h] BYREF

 v5[1] = 10;
 v5[0] = 20;
 v3 = 10;
 v4 = v5;
 v1 = test_cpp_lambda$_1{}(&v3, 3);
 return (unsigned int)test_cpp_lambda$_0{}(10, 20) + v1;
}


/* Function: test_cpp_lambda::<lambda>::operator() @ 0x28A0 */
long long test_cpp_lambda(void)::$_1::operator()(long long a1, int a2)
{
 **(unsigned int **)(a1 + 8) += 5;
 return (unsigned int)(**(unsigned int **)(a1 + 8) + *(unsigned int *)a1 * a2);
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x28D0 */
long long test_cpp_lambda(void)::$_0::operator()<int,int>(long long a1, int a2, int a3)
{
 return (unsigned int)(a3 + a2);
}


/* Function: _Z18test_cpp_exceptionv @ 0x28F0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rdi

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2A50 */
long long test_cpp_smart_ptr(void)
{
 long long v0; // rax
 unsigned int *v1; // rsi
 unsigned int v3; // [rsp+4h] [rbp-9Ch]
 unsigned int *v4; // [rsp+10h] [rbp-90h]
 unsigned int *v5; // [rsp+18h] [rbp-88h]
 unsigned char v6[8]; // [rsp+60h] [rbp-40h] BYREF
 unsigned char v7[4]; // [rsp+68h] [rbp-38h] BYREF
 int v8; // [rsp+6Ch] [rbp-34h]
 unsigned char v9[12]; // [rsp+70h] [rbp-30h] BYREF
 int v10; // [rsp+7Ch] [rbp-24h]
 unsigned char v11[12]; // [rsp+80h] [rbp-20h] BYREF
 unsigned char v12[8]; // [rsp+98h] [rbp-8h] BYREF

 *(unsigned int *)operator new(4u) = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>();
 *(unsigned int *)std::unique_ptr<int>::operator*(v12) = 200;
 v0 = std::move<std::unique_ptr<int> &>(v12);
 std::unique_ptr<int>::unique_ptr(v11, v0);
 v10 = *(unsigned int *)std::unique_ptr<int>::operator*(v11);
 v1 = (unsigned int *)operator new[](0x14u);
 *v1 = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>();
 v8 = *(unsigned int *)std::unique_ptr<int []>::operator[](v9, 2);
 v5 = (unsigned int *)operator new(4u);
 *v5 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(v6, v5, v7);
 v4 = (unsigned int *)std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(v6);
 v3 = *v4 + v8 + v10;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(v6);
 std::unique_ptr<int []>::~unique_ptr(v9);
 std::unique_ptr<int>::~unique_ptr(v11);
 std::unique_ptr<int>::~unique_ptr(v12);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x2C40 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>()
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_();
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2C80 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(long long a1)
{
 return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2CB0 */
unsigned long long * std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(long long a1)
{
 unsigned long long *v1; // rax
 unsigned long long *result; // rax
 long long deleter; // [rsp+8h] [rbp-28h]
 unsigned long long *v4; // [rsp+20h] [rbp-10h]

 v4 = (unsigned long long *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr();
 if ( *v4 )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(a1);
 v1 = (unsigned long long *)std::move<int *&>(v4);
 test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x2D30 */
long long test_cpp_rtti(void)
{
 const char *v0; // rax
 RTTIDerivedB *v2; // [rsp+18h] [rbp-68h]
 RTTIDerivedA *v3; // [rsp+28h] [rbp-58h]
 RTTIDerivedA *v4; // [rsp+40h] [rbp-40h]
 RTTIDerivedB *v5; // [rsp+48h] [rbp-38h]
 int v6; // [rsp+6Ch] [rbp-14h]
 unsigned int v7; // [rsp+6Ch] [rbp-14h]

 v4 = (RTTIDerivedA *)operator new(8u);
 memset(v4, 0, 8u);
 RTTIDerivedA::RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(8u);
 memset(v5, 0, 8u);
 RTTIDerivedB::RTTIDerivedB(v5);
 v6 = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( (std::type_info::operator==(*(unsigned long long *)(*(unsigned long long *)v4 - 8LL), &`typeinfo for'RTTIDerivedA) & 1) != 0 )
 v6 = 10;
 if ( !v5 )
 __cxa_bad_typeid();
 if ( (std::type_info::operator==(*(unsigned long long *)(*(unsigned long long *)v5 - 8LL), &`typeinfo for'RTTIDerivedB) & 1) != 0 )
 v6 += 20;
 v3 = (RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v3 )
 v6 += RTTIDerivedA::derivedA_data(v3);
 v2 = (RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v2 )
 v6 += RTTIDerivedB::derivedB_data(v2);
 v0 = (const char *)std::type_info::name(*(std::type_info **)(*(unsigned long long *)v4 - 8LL));
 v7 = strlen(v0) + v6;
 (*(void ( **)(RTTIDerivedA *))(*(unsigned long long *)v4 + 8LL))(v4);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned long long *)v5 + 8LL))(v5);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F70 */
void test_cpp_oo_features(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 printf(format);
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


/* Function: main @ 0x3080 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x30A0 */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 long long a1,
 long long a2,
 long long a3)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x30D0 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 unsigned long long v5[2]; // [rsp+10h] [rbp-10h] BYREF

 v5[1] = a1;
 v5[0] = a2;
 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
 return std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 a1,
 v5,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x3110 */
long long std::forward<test_cpp_smart_ptr(void)::$_2 const&>(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x3120 */
long long std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rdx
 long long v5; // [rsp+10h] [rbp-20h]

 v5 = std::forward<int *&>(a2);
 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 a1,
 v5,
 v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x3180 */
long long std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 long long v4; // rax

 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
 std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(a1, v3);
 v4 = std::forward<int *&>(a2);
 return std::_Head_base<0ul,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x31E0 */
long long std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(long long a1, long long a2)
{
 return std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(a1, a2);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x3210 */
void std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x3220 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x3240 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter()
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter();
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x3270 */
void test_cpp_smart_ptr(void)::$_2::operator()(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32B0 */
long long std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(long long a1)
{
 return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x32D0 */
long long std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x32F0 */
long long std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x3310 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(long long a1)
{
 return std::get<1ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x3330 */
long long std::get<1ul,int *,test_cpp_smart_ptr(void)::$_2>(long long a1)
{
 return std::__get_helper<1ul,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x3350 */
long long std::__get_helper<1ul,test_cpp_smart_ptr(void)::$_2>(long long a1)
{
 return std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x3370 */
long long std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_M_head(long long a1)
{
 return std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x3390 */
long long std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x33A0 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get()
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x33D0 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x33F0 */
long long std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(long long a1)
{
 return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3410 */
long long std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x3430 */
long long std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3450 */
void SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3490 */
SimpleClass * SimpleClass::setValue(SimpleClass *this, int a2)
{
 SimpleClass *result; // rax

 result = this;
 *(unsigned int *)this = a2;
 return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x34B0 */
long long SimpleClass::getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x34C0 */
long long SimpleClass::compute(SimpleClass *this, int a2)
{
 long long v3; // [rsp+8h] [rbp-18h]

 v3 = a2 * *(unsigned int *)this;
 return strlen((const char *)this + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3500 */
long long SimpleClass::getClassID(SimpleClass *this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3510 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned long long a2)
{
 unsigned long long i; // [rsp+8h] [rbp-18h]

 *((unsigned long long *)this + 1) = a2;
 *(unsigned long long *)this = operator new[](saturated_mul(4u, a2));
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)this + 4 * i) = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x35B0 */
long long LifecycleClass::getData(LifecycleClass *this, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)this + 1) )
 return (unsigned int)-1;
 else
 return *(unsigned int *)(*(unsigned long long *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3600 */
long long LifecycleClass::getInstanceCount(LifecycleClass *this)
{
 return (unsigned int)LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x3610 */
void LifecycleClass::~LifecycleClass(LifecycleClass *this)
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x3650 */
void Base::Base(Base *this)
{
 *(unsigned long long *)this = &off_8878;
}


/* Function: _ZN7DerivedC2Ei @ 0x3670 */
void Derived::Derived(Derived *this, int a2)
{
 Base::Base(this);
 *(unsigned long long *)this = &off_88B8;
 *((unsigned int *)this + 2) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x36B0 */
long long Base::virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x36D0 */
long long Derived::virtual_func(Derived *this, int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZN7DerivedD2Ev @ 0x36F0 */
void Derived::~Derived(Derived *this)
{
 this->~Base();
}


/* Function: _ZN4BaseD2Ev @ 0x3710 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3720 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 new (this) BaseA();
 new ((char *)this + 16) BaseB();
 *(unsigned long long *)this = &off_8900;
 *((unsigned long long *)this + 2) = &off_8930;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3770 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB((MultiDerived *)((char *)this + 16));
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x37A0 */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 new (this) VirtualBase();
 new ((char *)this + 32) MiddleA();
 new ((char *)this + 16) MiddleB();
 *(unsigned long long *)this = &off_8A08;
 *((unsigned long long *)this + 4) = &off_8A70;
 *((unsigned long long *)this + 2) = &off_8A38;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3830 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 32));
}


/* Function: _ZN5PointC2Eii @ 0x3870 */
void Point::Point(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3890 */
long long Point::operator+(unsigned int *a1, unsigned int *a2)
{
 long long v3; // [rsp+18h] [rbp-8h] BYREF

 Point::Point((Point *)&v3, *a2 + *a1, a2[1] + a1[1]);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x38D0 */
_BOOL8 Point::operator==(unsigned int *a1, unsigned int *a2)
{
 bool v3; // [rsp+Fh] [rbp-11h]

 v3 = 0;
 if ( *a1 == *a2 )
 return a1[1] == a2[1];
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3920 */
unsigned int * Point::operator++(unsigned int *a1)
{
 unsigned int *result; // rax

 result = a1;
 ++*a1;
 ++a1[1];
 return result;
}


// Template function implementations
template<typename T>
T template_max(T a1, T a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}

template<typename T>
void template_swap(T *a1, T *a2)
{
 T v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x39E0 */
long long Container<int>::Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3A00 */
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 40) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4LL * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3A40 */
long long Container<int>::get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3A90 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3AB0 */
long long Container<double>::Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3AD0 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 80) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8LL * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3B10 */
double Container<double>::get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3B70 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3B90 */
long long std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3BC0 */
long long std::unique_ptr<int>::operator*(long long a1)
{
 return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BF0 */
long long std::move<std::unique_ptr<int> &>(long long a1)
{
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3C00 */
long long std::unique_ptr<int>::unique_ptr(long long a1, long long a2)
{
 return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C30 */
long long std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
 long long a1,
 long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3C60 */
long long std::unique_ptr<int []>::operator[](long long a1, long long a2)
{
 return 4 * a2 + std::unique_ptr<int []>::get(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CA0 */
unsigned long long * std::unique_ptr<int []>::~unique_ptr(long long a1)
{
 long long deleter; // rdi
 unsigned long long *result; // rax
 unsigned long long *v3; // [rsp+10h] [rbp-10h]

 v3 = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr();
 if ( *v3 )
 {
 deleter = std::unique_ptr<int []>::get_deleter(a1);
 std::default_delete<int []>::operator()<int>(deleter, *v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3D10 */
unsigned long long * std::unique_ptr<int>::~unique_ptr(long long a1)
{
 long long v1; // rsi
 unsigned long long *result; // rax
 long long deleter; // [rsp+0h] [rbp-20h]
 unsigned long long *v4; // [rsp+10h] [rbp-10h]

 v4 = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr();
 if ( *v4 )
 {
 deleter = std::unique_ptr<int>::get_deleter(a1);
 v1 = *(unsigned long long *)std::move<int *&>(v4);
 std::default_delete<int>::operator()(deleter, v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3D80 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned long long *)this = off_8D50;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3DC0 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned long long *)this = off_8DA0;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3E00 */
long long std::type_info::operator==(long long a1, long long a2)
{
 bool v3; // [rsp+Fh] [rbp-21h]
 char v4; // [rsp+1Fh] [rbp-11h]

 v4 = 1;
 if ( *(unsigned long long *)(a1 + 8) != *(unsigned long long *)(a2 + 8) )
 {
 v3 = 0;
 if ( **(unsigned char **)(a1 + 8) != 42 )
 v3 = strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3E80 */
long long RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3E90 */
long long RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3EA0 */
long long std::type_info::name(std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return *((unsigned long long *)this + 1) + 1LL;
 else
 return *((unsigned long long *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3EF0 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3F10 */
void Base::~Base(Base *this)
{
 Base::~Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3F40 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3F60 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3F90 */
void BaseA::BaseA(BaseA *this)
{
 *(unsigned long long *)this = &off_89B0;
}


/* Function: _ZN5BaseBC2Ev @ 0x3FB0 */
void BaseB::BaseB(BaseB *this)
{
 *(unsigned long long *)this = &off_89D8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3FD0 */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3FE0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x4010 */
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x4020 */
long long `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this_)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this_ - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4040 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4060 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x4080 */
long long BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x4090 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x40A0 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x40D0 */
long long BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x40E0 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x40F0 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x4120 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 *(unsigned long long *)this = &off_8C38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x4140 */
void MiddleA::MiddleA(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x4170 */
void MiddleB::MiddleB(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x41A0 */
long long MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x41C0 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 VirtualBase::~VirtualBase((MiddleA *)((char *)this + 16));
}


/* Function: _ZN7MiddleAD0Ev @ 0x4200 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x4230 */
long long `virtual thunk to'MiddleA::func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x4250 */
void `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x4270 */
void `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x4290 */
long long MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x42B0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 VirtualBase::~VirtualBase((MiddleB *)((char *)this + 16));
}


/* Function: _ZN7MiddleBD0Ev @ 0x42F0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x4320 */
long long `virtual thunk to'MiddleB::func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x4340 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x4360 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x4380 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x43A0 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x43D0 */
long long `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x43F0 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4410 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4430 */
long long `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4450 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4470 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x4490 */
long long VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x44A0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x44B0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x44E0 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x44F0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4500 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 MiddleB::~MiddleB((DiamondDerived *)((char *)this + 16));
 MiddleA::~MiddleA(this);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x4550 */
long long std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4580 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(long long a1, long long a2)
{
 long long v2; // rax
 unsigned long long *result; // rax

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
 std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
 result = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x45E0 */
long long std::move<std::tuple<int *,std::default_delete<int>> &>(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x45F0 */
long long std::tuple<int *,std::default_delete<int>>::tuple(long long a1, long long a2)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4620 */
long long std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: __clang_call_terminate @ 0x4640 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4650 */
unsigned long long * std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *result; // rax

 std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4690 */
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x46A0 */
long long std::get<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x46C0 */
long long std::__get_helper<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x46E0 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4700 */
long long std::_Head_base<0ul,int *,false>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4710 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 *(unsigned long long *)this = off_8D78;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4730 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4750 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4780 */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4790 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x47A0 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x47D0 */
long long RTTIBase::getType(RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x47E0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4800 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4830 */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4840 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x4870 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(long long a1, long long a2)
{
 unsigned long long *result; // rax

 std::tuple<int *,std::default_delete<int>>::tuple<true,true>();
 result = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x48B0 */
long long std::tuple<int *,std::default_delete<int>>::tuple<true,true>()
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x48E0 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(long long a1)
{
 std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
 return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4910 */
long long std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4930 */
unsigned long long * std::_Head_base<0ul,int *,false>::_Head_base(unsigned long long *a1)
{
 unsigned long long *result; // rax

 result = a1;
 *a1 = 0;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4950 */
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x4960 */
long long std::unique_ptr<int>::get_deleter()
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter();
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4990 */
void std::default_delete<int>::operator()(long long a1, void *a2)
{
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x49D0 */
long long std::move<int *&>(long long a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x49E0 */
long long std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(long long a1)
{
 return std::get<1ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4A00 */
long long std::get<1ul,int *,std::default_delete<int>>(long long a1)
{
 return std::__get_helper<1ul,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4A20 */
long long std::__get_helper<1ul,std::default_delete<int>>(long long a1)
{
 return std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4A40 */
long long std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4A60 */
long long std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4A70 */
long long std::unique_ptr<int>::get()
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4AA0 */
long long std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4AC0 */
long long std::get<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4AE0 */
long long std::__get_helper<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4B00 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4B20 */
long long std::_Head_base<0ul,int *,false>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4B30 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4B60 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(long long a1, long long a2)
{
 unsigned long long *result; // rax

 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>();
 result = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4BA0 */
long long std::tuple<int *,std::default_delete<int []>>::tuple<true,true>()
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl();
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4BD0 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4BF0 */
unsigned long long * std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(unsigned long long *a1)
{
 std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl();
 return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4C20 */
long long std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4C40 */
void std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4C50 */
long long std::get<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4C70 */
long long std::__get_helper<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4C90 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4CB0 */
long long std::unique_ptr<int []>::get_deleter()
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter();
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x4CE0 */
void std::default_delete<int []>::operator()<int>(long long a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4D20 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(long long a1)
{
 return std::get<1ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4D40 */
long long std::get<1ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::__get_helper<1ul,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4D60 */
long long std::__get_helper<1ul,std::default_delete<int []>>(long long a1)
{
 return std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4D80 */
long long std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4DA0 */
long long std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4DB0 */
long long std::unique_ptr<int []>::get()
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4DE0 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4E00 */
long long std::get<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4E20 */
long long std::__get_helper<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4E40 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4E60 */
long long std::forward<int *&>(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4E70 */
unsigned long long * std::_Head_base<0ul,int *,false>::_Head_base<int *&>(unsigned long long *a1, long long a2)
{
 unsigned long long *v2; // rcx
 unsigned long long *result; // rax

 v2 = (unsigned long long *)std::forward<int *&>(a2);
 result = a1;
 *a1 = *v2;
 return result;
}


/* Function: .term_proc @ 0x4EA4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x9100 */

/* FAILED to decompile: printf @ 0x9110 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9118 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9120 */

/* FAILED to decompile: strlen @ 0x9128 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9130 */

/* FAILED to decompile: strncpy @ 0x9138 */

/* FAILED to decompile: memset @ 0x9140 */

/* FAILED to decompile: __libc_start_main @ 0x9150 */

/* FAILED to decompile: __cxa_atexit @ 0x9158 */

/* FAILED to decompile: _ZdlPv @ 0x9160 */

/* FAILED to decompile: _Znwm @ 0x9168 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9170 */

/* FAILED to decompile: __dynamic_cast @ 0x9178 */

/* FAILED to decompile: _ZdaPv @ 0x9180 */

/* FAILED to decompile: strcmp @ 0x9190 */

/* FAILED to decompile: __cxa_rethrow @ 0x9198 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x91A0 */

/* FAILED to decompile: __cxa_end_catch @ 0x91A8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x91B0 */

/* FAILED to decompile: __cxa_throw @ 0x91B8 */

/* FAILED to decompile: _Unwind_Resume @ 0x91C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x91D0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x91D8 */

/* FAILED to decompile: __gmon_start__ @ 0x91E8 */

/* Total functions decompiled: 215, failed: 25 */
