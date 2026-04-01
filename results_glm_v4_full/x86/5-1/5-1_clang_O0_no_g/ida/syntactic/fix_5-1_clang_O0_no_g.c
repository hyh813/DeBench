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

/* Standard library includes */
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <typeinfo>
#include <memory>
#include <tuple>
#include <utility>
#include <exception>
#include <algorithm>
#include <cxxabi.h>
#include <iostream>

/* Standard library function declarations */
namespace std {
    void terminate();
    
    /* Minimal type_info definition for RTTI support */
    class type_info {
    public:
        virtual ~type_info();
        const char *name() const;
        bool operator==(const type_info&) const;
        bool operator!=(const type_info&) const;
        
    private:
        const char *__type_name;
    };
}

/* Forward declarations for decompiled symbols */

extern "C" {
    void *__dso_handle;
    void *__cxa_allocate_exception(size_t);
    void __cxa_throw(void *, const std::type_info *, void (*)(void *));
    int __cxa_atexit(void (*)(void *), void *, void *);
    void __cxa_begin_catch(void *);
    void __cxa_end_catch(void);
    void __cxa_rethrow(void);
    void __cxa_bad_typeid(void);
    void *__dynamic_cast(void *, const struct __class_type_info *, 
                          const struct __class_type_info *, ptrdiff_t);
    int __gxx_personality_v0(void);
    void _Unwind_Resume(void);
}

/* Global symbols */
extern void GLOBAL_OFFSET_TABLE_;
extern unsigned int off_8C3C;
extern unsigned int off_8CDC;
extern unsigned int off_8CF0;
extern unsigned int off_8E2C;
extern unsigned int off_8ECC;

namespace std {
    namespace ios_base {
        class Init {
        public:
            Init();
            ~Init();
        };
    }
    extern ios_base::Init __ioinit;
}

/* Type info symbols */
extern std::type_info typeinfo_for_int;
extern std::type_info typeinfo_for_RTTIBase;
extern std::type_info typeinfo_for_RTTIDerivedA;
extern std::type_info typeinfo_for_RTTIDerivedB;

/* LifecycleClass static member */
extern int LifecycleClass_instance_count;

/* Forward declarations for classes used in the code */
class SimpleClass {
public:
    unsigned int value;
    char name[32];
    SimpleClass(int a2, char *src);
    void *setValue(int a2);
    int getValue();
    size_t compute(int a2);
    static int getClassID();
};

class LifecycleClass {
public:
    void *data;
    unsigned int size;
    static int instance_count;
    LifecycleClass(unsigned int a2);
    int getData(unsigned int a2);
    static int getInstanceCount();
    ~LifecycleClass();
};

class Base {
public:
    virtual ~Base();
    virtual int virtual_func(int a2);
    virtual const char *getName();
    Base();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class Derived : public Base {
public:
    unsigned int derived_value;
    Derived(int a2);
    int virtual_func(int a2);
    const char *getName();
    ~Derived();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class BaseA {
public:
    virtual ~BaseA();
    virtual int funcA();
    BaseA();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class BaseB {
public:
    virtual ~BaseB();
    virtual int funcB();
    BaseB();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class MultiDerived : public BaseA, public BaseB {
public:
    unsigned int vtable1;
    unsigned int vtable2;
    MultiDerived();
    ~MultiDerived();
    int funcA();
    int funcB();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class VirtualBase {
public:
    virtual ~VirtualBase();
    virtual int func();
    VirtualBase();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class MiddleA : virtual public VirtualBase {
public:
    MiddleA(unsigned int *a2);
    int func();
    ~MiddleA();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class MiddleB : virtual public VirtualBase {
public:
    MiddleB(unsigned int *a2);
    int func();
    ~MiddleB();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    DiamondDerived();
    ~DiamondDerived();
    int func();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class Point {
public:
    unsigned int x;
    unsigned int y;
    Point(int a2, int a3);
    static Point *operator+(Point *a1, unsigned int *a2, unsigned int *a3);
    static int operator==(unsigned int *a1, unsigned int *a2);
    static unsigned int *operator++(unsigned int *a1);
};

template<typename T>
class Container {
public:
    T data[10];
    unsigned int count;
    Container();
    int push(T a2);
    T get(int a2);
    int getSize();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType();
    RTTIBase();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class RTTIDerivedA : public RTTIBase {
public:
    RTTIDerivedA();
    ~RTTIDerivedA();
    int getType();
    int derivedA_data();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

class RTTIDerivedB : public RTTIBase {
public:
    RTTIDerivedB();
    ~RTTIDerivedB();
    int getType();
    int derivedB_data();
    static void operator delete(void *p);
    static void operator delete(void *p, size_t);
};

/* Lambda closure type definitions */
namespace {
    struct __Lambda_test_cpp_lambda__0 {
        int operator()(int a1, int a2, int a3) const {
            return a3 + a2;
        }
    };
    
    struct __Lambda_test_cpp_lambda__1 {
        int operator()(int a1, int a2) const {
            **(unsigned int **)(a1 + 4) += 5;
            return **(unsigned int **)(a1 + 4) + *(unsigned int *)a1 * a2;
        }
    };
    
    /* Lambda closure type $_2 for test_cpp_smart_ptr */
    struct __Lambda_test_cpp_smart_ptr__2 {
        inline void operator()(unsigned int *a1) const {
            if (a1)
                ::operator delete(a1);
        }
    };
    
    /* Type aliases for lambda closure types matching mangled names */
    using test_cpp_lambda_void____0 = __Lambda_test_cpp_lambda__0;
    using test_cpp_lambda_void____1 = __Lambda_test_cpp_lambda__1;
}

/* Type alias for unique_ptr with custom deleter to avoid complex template syntax */
typedef std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2> smart_ptr_custom_t;

/* Lambda closure type aliases for test_cpp_lambda */
typedef __Lambda_test_cpp_lambda__0 test_cpp_lambda_void____0;
typedef __Lambda_test_cpp_lambda__1 test_cpp_lambda_void____1;

/* Standard operator new/delete - defined by standard library */
void *operator new(size_t size) {
    return __builtin_malloc(size);
}

void *operator new[](size_t size) {
    return __builtin_malloc(size);
}

void operator delete(void *p) noexcept {
    if (p) __builtin_free(p);
}

void operator delete[](void *p) noexcept {
    if (p) __builtin_free(p);
}

/* Template function forward declarations */
template<typename T>
T template_max(T a1, T a2);

template<typename T>
void template_swap(T *a1, T *a2);

/* Saturated multiply function */
static inline unsigned int saturated_mul(unsigned int a, unsigned int b) {
    unsigned long long result = (unsigned long long)a * b;
    return (result > 0xFFFFFFFF) ? 0xFFFFFFFF : (unsigned int)result;
}

/* String literal references */
extern const char asc_500D[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* Missing destructor */
extern "C" void _do_global_dtors_aux(void);

/* Elf32_Dyn type */
struct Elf32_Dyn {
    int d_tag;
    union {
        int d_val;
        void *d_ptr;
    } d_un;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O0_no_g
 * Processor: pc
 */

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__("jmp *8(%ebx)");
}


/* Function: sub_1190 @ 0x1190 */
int sub_1190(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: __cxx_global_var_init @ 0x11A0 */
int _cxx_global_var_init()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x11F0 */
int GLOBAL__sub_I_5_1_cpp()
{
 return _cxx_global_var_init();
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
int test_cpp_member_func(void)
{
 SimpleClass *v1; // [esp+0h] [ebp-48h]
 int v2; // [esp+18h] [ebp-30h]
 int Value; // [esp+1Ch] [ebp-2Ch]
 unsigned char v4[40]; // [esp+20h] [ebp-28h] BYREF

 SimpleClass::SimpleClass((SimpleClass *)v4, 5, "Test");
 SimpleClass::setValue((SimpleClass *)v4, 10);
 Value = SimpleClass::getValue((SimpleClass *)v4);
 v2 = SimpleClass::compute((SimpleClass *)v4, 3);
 return SimpleClass::getClassID(v1) + v2 + Value;
}


/* Function: _Z20test_cpp_constructorv @ 0x1420 */
int test_cpp_constructor(void)
{
 int v0; // eax
 LifecycleClass *v2; // [esp+0h] [ebp-38h]
 LifecycleClass *v3; // [esp+0h] [ebp-38h]
 int InstanceCount; // [esp+10h] [ebp-28h]
 int Data; // [esp+1Ch] [ebp-1Ch]
 unsigned char v6[8]; // [esp+28h] [ebp-10h] BYREF
 int v7; // [esp+30h] [ebp-8h]

 v7 = 0;
 LifecycleClass::LifecycleClass((LifecycleClass *)v6, 5u);
 Data = LifecycleClass::getData((LifecycleClass *)v6, 2u);
 v7 += Data;
 InstanceCount = LifecycleClass::getInstanceCount(v2);
 v7 += InstanceCount;
 LifecycleClass::~LifecycleClass((LifecycleClass *)v6);
 v0 = LifecycleClass::getInstanceCount(v3);
 return v7 + 1000 * v0;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1520 */
int test_cpp_virtual_func(void)
{
 int v1; // [esp+10h] [ebp-48h]
 int v2; // [esp+2Ch] [ebp-2Ch]
 int v3; // [esp+38h] [ebp-20h]
 int v4; // [esp+3Ch] [ebp-1Ch]
 unsigned char v5[8]; // [esp+48h] [ebp-10h] BYREF
 unsigned char v6[8]; // [esp+50h] [ebp-8h] BYREF

 Base::Base((Base *)v6);
 Derived::Derived((Derived *)v5, 3);
 v4 = Base::virtual_func((Base *)v6, 5);
 v3 = Derived::virtual_func((Derived *)v5, 5);
 v2 = call_virtual_func((Base *)v6, 5);
 v1 = call_virtual_func((Base *)v5, 5) + v2 + v3 + v4;
 Derived::~Derived((Derived *)v5);
 Base::~Base((Base *)v6);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1670 */
int test_cpp_multiple_inheritance(void)
{
 unsigned int *v1; // [esp+20h] [ebp-38h]
 int v2; // [esp+28h] [ebp-30h]
 int v3; // [esp+34h] [ebp-24h]
 unsigned int v4[2]; // [esp+40h] [ebp-18h] BYREF
 unsigned int v5[4]; // [esp+48h] [ebp-10h] BYREF

 MultiDerived::MultiDerived((MultiDerived *)v4);
 v4[1] = 100;
 v5[1] = 200;
 v1 = 0;
 if ( v4 )
 v1 = v5;
 v3 = (*(int ( **)(unsigned int *))v4[0])(v4);
 v2 = (*(int ( **)(unsigned int *))*v1)(v1);
 MultiDerived::~MultiDerived((MultiDerived *)v4);
 return (v4 != v1) + v2 + v3;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1760 */
int test_cpp_diamond_inheritance(void)
{
 int v1; // [esp+10h] [ebp-48h]
 int ( ***v2)(unsigned int); // [esp+20h] [ebp-38h]
 int v3; // [esp+30h] [ebp-28h]
 unsigned int v4[8]; // [esp+38h] [ebp-20h] BYREF

 DiamondDerived::DiamondDerived((DiamondDerived *)v4);
 *(unsigned int *)((char *)&v4[1] + *(unsigned int *)(v4[0] - 12)) = 50;
 v2 = 0;
 if ( v4 )
 v2 = (int ( ***)(unsigned int))((char *)v4 + *(unsigned int *)(v4[0] - 12));
 v3 = (**v2)(v2);
 *(unsigned int *)((char *)&v4[1] + *(unsigned int *)(v4[0] - 12)) = 100;
 v1 = (**v2)(v2) + v3;
 DiamondDerived::~DiamondDerived((DiamondDerived *)v4);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1840 */
int test_cpp_operator_overload(void)
{
 int v0; // ecx
 char v2; // [esp+17h] [ebp-21h]
 unsigned int v3[2]; // [esp+18h] [ebp-20h] BYREF
 unsigned char v4[8]; // [esp+20h] [ebp-18h] BYREF
 unsigned char v5[16]; // [esp+28h] [ebp-10h] BYREF

 Point::Point((Point *)v5, 1, 2);
 Point::Point((Point *)v4, 3, 4);
 Point::operator+((Point *)v3, (unsigned int *)v5, (unsigned int *)v4);
 v2 = Point::operator==(v5, v4) & 1;
 Point::operator++(v3);
 v0 = 10;
 if ( (v2 & 1) != 0 )
 v0 = 0;
 return v0 + v3[1] + v3[0];
}


/* Function: _Z22test_cpp_template_funcv @ 0x1900 */
int test_cpp_template_func(long double a1)
{
 int v2; // [esp+20h] [ebp-18h] BYREF
 int v3; // [esp+24h] [ebp-14h] BYREF
 double v4; // [esp+28h] [ebp-10h]
 int v5; // [esp+30h] [ebp-8h]

 v5 = template_max<int>(3, 7);
 template_max<double>(2.5, 1.5);
 v4 = a1;
 v3 = 10;
 v2 = 20;
 template_swap<int>(&v3, &v2);
 return v2 + v3 + (int)v4 + v5;
}


/* Function: _Z23test_cpp_template_classv @ 0x19B0 */
int test_cpp_template_class(void)
{
 double v1; // [esp+20h] [ebp-98h]
 unsigned char v2[88]; // [esp+28h] [ebp-90h] BYREF
 int Size; // [esp+80h] [ebp-38h]
 int v4; // [esp+84h] [ebp-34h]
 unsigned char v5[48]; // [esp+88h] [ebp-30h] BYREF

 Container<int>::Container(v5);
 Container<int>::push(v5, 10);
 Container<int>::push(v5, 20);
 Container<int>::push(v5, 30);
 v4 = Container<int>::get(v5, 0);
 Size = Container<int>::getSize(v5);
 Container<double>::Container(v2);
 Container<double>::push((int)v2, 3.14);
 v1 = Container<double>::get(v2, 0);
 return (int)v1 + Size + v4;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B20 */
int test_cpp_lambda(void)
{
 int v1; // [esp+14h] [ebp-24h]
 unsigned char v2[8]; // [esp+18h] [ebp-20h] BYREF
 unsigned int v3[3]; // [esp+20h] [ebp-18h] BYREF
 unsigned int v4[3]; // [esp+2Ch] [ebp-Ch] BYREF

 v4[1] = 10;
 v4[0] = 20;
 v3[0] = 10;
 v3[1] = (unsigned int)v4;
 v1 = __Lambda_test_cpp_lambda__1().operator()(v3, 3);
 return __Lambda_test_cpp_lambda__0().operator()<int,int>(v2, 10, 20) + v1;
}








/* Function: _Z18test_cpp_exceptionv @ 0x1BF0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // ecx

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct std::type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D90 */
int test_cpp_smart_ptr(void)
{
 unsigned int *v0; // eax
 int v1; // eax
 int v3; // [esp+14h] [ebp-64h]
 unsigned int *v4; // [esp+1Ch] [ebp-5Ch]
 unsigned int *v5; // [esp+20h] [ebp-58h]
 unsigned int *v6; // [esp+2Ch] [ebp-4Ch]
 unsigned char v7[8]; // [esp+48h] [ebp-30h] BYREF
 unsigned char v8[4]; // [esp+50h] [ebp-28h] BYREF
 int v9; // [esp+54h] [ebp-24h]
 unsigned char v10[4]; // [esp+58h] [ebp-20h] BYREF
 int v11; // [esp+5Ch] [ebp-1Ch]
 unsigned char v12[8]; // [esp+60h] [ebp-18h] BYREF
 unsigned char v13[8]; // [esp+70h] [ebp-8h] BYREF

 v0 = (unsigned int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v13, v0);
 *(unsigned int *)std::unique_ptr<int>::operator*(v13) = 200;
 v1 = std::move<std::unique_ptr<int> &>(v13);
 std::unique_ptr<int>::unique_ptr(v12, v1);
 v11 = *(unsigned int *)std::unique_ptr<int>::operator*(v12);
 v6 = (unsigned int *)operator new[](0x14u);
 *v6 = 1;
 v6[1] = 2;
 v6[2] = 3;
 v6[3] = 4;
 v6[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v10, v6);
 v9 = *(unsigned int *)std::unique_ptr<int []>::operator[](v10, 2);
 v5 = (unsigned int *)operator new(4u);
 *v5 = 500;
 std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::unique_ptr<__Lambda_test_cpp_smart_ptr__2,void>(v7, v5, v8);
 v4 = (unsigned int *)std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::operator*(v7);
 v3 = *v4 + v9 + v11;
 std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::~unique_ptr(v7);
 std::unique_ptr<int []>::~unique_ptr(v10);
 std::unique_ptr<int>::~unique_ptr(v12);
 std::unique_ptr<int>::~unique_ptr(v13);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1FD0 */
int std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::unique_ptr(
 int a1,
 int a2,
 int a3)
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 a1,
 a2,
 a3);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2020 */
int std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::operator*(const std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2> *this)
{
 return std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::get((int)this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2060 */
void std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::~unique_ptr(std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2> *this)
{
 unsigned int *v1; // eax
 int deleter; // [esp+10h] [ebp-18h]
 unsigned int *v4; // [esp+20h] [ebp-8h]

 v4 = (unsigned int *)std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_ptr((int)this);
 if ( *v4 )
 {
 deleter = std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::get_deleter((int)this);
 v1 = (unsigned int *)std::move<int *>((int)v4);
 __Lambda_test_cpp_smart_ptr__2::operator()(deleter, v1);
 }
 *v4 = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x2100 */
size_t test_cpp_rtti(void)
{
 const char *v0; // eax
 RTTIDerivedB *v2; // [esp+28h] [ebp-40h]
 RTTIDerivedA *v3; // [esp+30h] [ebp-38h]
 RTTIDerivedA *v4; // [esp+3Ch] [ebp-2Ch]
 RTTIDerivedB *v5; // [esp+44h] [ebp-24h]
 int v6; // [esp+54h] [ebp-14h]
 size_t v7; // [esp+54h] [ebp-14h]

 v4 = (RTTIDerivedA *)operator new(4u);
 memset(v4, 0, 4u);
 RTTIDerivedA::RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 memset(v5, 0, 4u);
 RTTIDerivedB::RTTIDerivedB(v5);
 v6 = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( (**((std::type_info **)(*(unsigned int *)v4 - 4)) == typeinfo_for_RTTIDerivedA) )
 v6 = 10;
 if ( !v5 )
 __cxa_bad_typeid();
 if ( (**((std::type_info **)(*(unsigned int *)v5 - 4)) == typeinfo_for_RTTIDerivedB) )
 v6 += 20;
 v3 = (RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 v6 += RTTIDerivedA::derivedA_data(v3);
 v2 = (RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 v6 += RTTIDerivedB::derivedB_data(v2);
 v0 = (const char *)(**((std::type_info **)(*(unsigned int *)v4 - 4))).name();
 v7 = v6 + strlen(v0);
 (*(void ( **)(RTTIDerivedA *))(*(unsigned int *)v4 + 4))(v4);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned int *)v5 + 4))(v5);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x23A0 */
void test_cpp_oo_features(long double a1)
{
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax

 printf(asc_500D);
 v1 = test_cpp_member_func();
 printf(aCppL301D, v1);
 v2 = test_cpp_constructor();
 printf(aCppL302D, v2);
 v3 = test_cpp_virtual_func();
 printf(aCppL303D, v3);
 v4 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v4);
 v5 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v5);
 v6 = test_cpp_operator_overload();
 printf(aCppL306D, v6);
 v7 = test_cpp_template_func(a1);
 printf(aCppL307D, v7);
 v8 = test_cpp_template_class();
 printf(aCppL308D, v8);
 v9 = test_cpp_lambda();
 printf(aCppL309D, v9);
 test_cpp_exception();
}


/* Function: main @ 0x2530 */
int main(int argc, const char **argv, const char **envp)
{
 long double v3; // fst7

 test_cpp_oo_features(v3);
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2560 */
int ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 int a1,
 int a2,
 int a3)
{
 return std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::__uniq_ptr_impl<__Lambda_test_cpp_smart_ptr__2 const&>(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x25A0 */
int std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::__uniq_ptr_impl<__Lambda_test_cpp_smart_ptr__2 const&>(
 int a1,
 int a2,
 int a3)
{
 int v3; // eax

 v3 = std::forward<__Lambda_test_cpp_smart_ptr__2 const&>(a3);
 return std::tuple<int *,__Lambda_test_cpp_smart_ptr__2>::tuple<int *&,__Lambda_test_cpp_smart_ptr__2 const&,true>(
 a1,
 &a2,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x25F0 */
int std::forward<__Lambda_test_cpp_smart_ptr__2 const&>(int a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2600 */
int std::tuple<int *,__Lambda_test_cpp_smart_ptr__2>::tuple<int *&,__Lambda_test_cpp_smart_ptr__2 const&,true>(
 int a1,
 int a2,
 int a3)
{
 int v3; // esi
 int v5; // [esp+18h] [ebp-10h]

 v5 = std::forward<int *&>(a2);
 v3 = std::forward<__Lambda_test_cpp_smart_ptr__2 const&>(a3);
 return std::_Tuple_impl<0u,int *,__Lambda_test_cpp_smart_ptr__2>::_Tuple_impl<int *&,__Lambda_test_cpp_smart_ptr__2 const&,void>(
 a1,
 v5,
 v3);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2680 */
int std::_Tuple_impl<0u,int *,__Lambda_test_cpp_smart_ptr__2>::_Tuple_impl<int *&,__Lambda_test_cpp_smart_ptr__2 const&,void>(
 int a1,
 int a2,
 int a3)
{
 int v3; // eax
 int v4; // eax

 v3 = std::forward<__Lambda_test_cpp_smart_ptr__2 const&>(a3);
 std::_Tuple_impl<1u,__Lambda_test_cpp_smart_ptr__2>::_Tuple_impl(a1, v3);
 v4 = std::forward<int *&>(a2);
 return std::_Head_base<0u,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2700 */
int std::_Tuple_impl<1u,__Lambda_test_cpp_smart_ptr__2>::_Tuple_impl(int a1, int a2)
{
 return std::_Head_base<1u,__Lambda_test_cpp_smart_ptr__2,true>::_Head_base(a1, a2);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2740 */
int std::_Head_base<1u,__Lambda_test_cpp_smart_ptr__2,true>::_Head_base(int a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2750 */
int std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_ptr(int a1)
{
 return std::get<0u,int *,__Lambda_test_cpp_smart_ptr__2>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2760 */
int std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_deleter(int a1)
{
 return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2780 */
int std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::get_deleter(std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2> *this)
{
 return std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_deleter((int)this);
}





/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2820 */
int std::get<0u,int *,__Lambda_test_cpp_smart_ptr__2>(int a1)
{
 return std::__get_helper<0u,int *,__Lambda_test_cpp_smart_ptr__2>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2850 */
int std::__get_helper<0u,int *,__Lambda_test_cpp_smart_ptr__2>(int a1)
{
 return std::_Tuple_impl<0u,int *,__Lambda_test_cpp_smart_ptr__2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2880 */
int std::_Tuple_impl<0u,int *,__Lambda_test_cpp_smart_ptr__2>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x28B0 */
int std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_deleter(int a1)
{
 return std::get<1u,int *,__Lambda_test_cpp_smart_ptr__2>(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x28E0 */
int std::get<1u,int *,__Lambda_test_cpp_smart_ptr__2>(int a1)
{
 return std::__get_helper<1u,__Lambda_test_cpp_smart_ptr__2>(a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2910 */
int std::__get_helper<1u,__Lambda_test_cpp_smart_ptr__2>(int a1)
{
 return std::_Tuple_impl<1u,__Lambda_test_cpp_smart_ptr__2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2940 */
int std::_Tuple_impl<1u,__Lambda_test_cpp_smart_ptr__2>::_M_head(int a1)
{
 return std::_Head_base<1u,__Lambda_test_cpp_smart_ptr__2,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2970 */
int std::_Head_base<1u,__Lambda_test_cpp_smart_ptr__2,true>::_M_head(int a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2980 */
int std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2>::get(const std::unique_ptr<int,__Lambda_test_cpp_smart_ptr__2> *this)
{
 return std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_ptr((int)this);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x29D0 */
int std::__uniq_ptr_impl<int,__Lambda_test_cpp_smart_ptr__2>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,__Lambda_test_cpp_smart_ptr__2>(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2A00 */
int std::get<0u,int *,__Lambda_test_cpp_smart_ptr__2>(int a1)
{
 return std::__get_helper<0u,int *,__Lambda_test_cpp_smart_ptr__2>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2A30 */
int std::__get_helper<0u,int *,__Lambda_test_cpp_smart_ptr__2>(int a1)
{
 return std::_Tuple_impl<0u,int *,__Lambda_test_cpp_smart_ptr__2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2A60 */
int std::_Tuple_impl<0u,int *,__Lambda_test_cpp_smart_ptr__2>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2A90 */
void SimpleClass::SimpleClass(SimpleClass *this, int a2, char *src)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, src, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2AE0 */
SimpleClass * SimpleClass::setValue(SimpleClass *this, int a2)
{
 SimpleClass *result; // eax

 result = this;
 *(unsigned int *)this = a2;
 return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2B00 */
int SimpleClass::getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2B10 */
size_t SimpleClass::compute(SimpleClass *this, int a2)
{
 int v3; // [esp+10h] [ebp-8h]

 v3 = a2 * *(unsigned int *)this;
 return strlen((const char *)this + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2B50 */
int SimpleClass::getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2B60 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned int a2)
{
 unsigned int i; // [esp+10h] [ebp-8h]

 *((unsigned int *)this + 1) = a2;
 *(unsigned int *)this = operator new[](saturated_mul(4u, a2));
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned int *)this + 4 * i) = 10 * i;
 *(&GLOBAL_OFFSET_TABLE_ + 33) = (Elf32_Dyn *)((char *)*(&GLOBAL_OFFSET_TABLE_ + 33) + 1);
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x2C00 */
int LifecycleClass::getData(LifecycleClass *this, unsigned int a2)
{
 if ( a2 >= *((unsigned int *)this + 1) )
 return -1;
 else
 return *(unsigned int *)(*(unsigned int *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2C50 */
int LifecycleClass::getInstanceCount()
{
 return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2C70 */
void LifecycleClass::~LifecycleClass(void **this)
{
 if ( *this )
 operator delete[](*this);
 --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x2CC0 */
void Base::Base(Base *this)
{
 *(void **)this = &off_8C3C;
}


/* Function: _ZN7DerivedC2Ei @ 0x2CF0 */
void Derived::Derived(Derived *this, int a2)
{
 Base::Base(this);
 *(unsigned int *)this = &GLOBAL_OFFSET_TABLE_ - 233;
 *((unsigned int *)this + 1) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2D40 */
int Base::virtual_func(Base *this, int a2)
{
 return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2D60 */
int Derived::virtual_func(Derived *this, int a2)
{
 return *((unsigned int *)this + 1) * a2;
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
 BaseB::BaseB((MultiDerived *)((char *)this + 8));
 *(unsigned int *)this = &GLOBAL_OFFSET_TABLE_ - 224;
 *((unsigned int *)this + 2) = &GLOBAL_OFFSET_TABLE_ - 218;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2E20 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB((MultiDerived *)((char *)this + 8));
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E60 */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 16));
 MiddleA::MiddleA(this);
 MiddleB::MiddleB((DiamondDerived *)((char *)this + 8));
 *(unsigned int *)this = &GLOBAL_OFFSET_TABLE_ - 190;
 *((unsigned int *)this + 4) = &GLOBAL_OFFSET_TABLE_ - 177;
 *((unsigned int *)this + 2) = &GLOBAL_OFFSET_TABLE_ - 184;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2F00 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 16));
}


/* Function: _ZN5PointC2Eii @ 0x2F50 */
void Point::Point(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x2F70 */
Point * Point::operator+(Point *a1, unsigned int *a2, unsigned int *a3)
{
 Point::Point(a1, *a3 + *a2, a3[1] + a2[1]);
 return a1;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2FD0 */
int Point::operator==(unsigned int *a1, unsigned int *a2)
{
 bool v3; // [esp+7h] [ebp-1h]

 v3 = 0;
 if ( *a1 == *a2 )
 return a1[1] == a2[1];
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3020 */
unsigned int * Point::operator++(unsigned int *a1)
{
 unsigned int *result; // eax

 result = a1;
 ++*a1;
 ++a1[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3040 */
int template_max<int>(int a1, int a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3070 */
long double template_max<double>(double a1, double a2)
{
 if ( a1 <= (long double)a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x30B0 */
int * template_swap<int>(int *a1, int *a2)
{
 int *result; // eax
 int v3; // [esp+0h] [ebp-4h]

 v3 = *a1;
 *a1 = *a2;
 result = a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x30E0 */
int Container<int>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3100 */
int Container<int>::push(int a1, int a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 40) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3140 */
int Container<int>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3190 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x31A0 */
int Container<double>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x31C0 */
int Container<double>::push(int a1, double a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 80) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3200 */
long double Container<double>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3260 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3270 */
int std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(int a1, int a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x32C0 */
int std::unique_ptr<int>::operator*(int a1)
{
 return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3300 */
int std::move<std::unique_ptr<int> &>(int a1)
{
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3310 */
int std::unique_ptr<int>::unique_ptr(int a1, int a2)
{
 return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3350 */
int std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(int a1, int a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x33A0 */
int std::unique_ptr<int []>::operator[](int a1, int a2)
{
 return 4 * a2 + std::unique_ptr<int []>::get(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x33F0 */
unsigned int * std::unique_ptr<int []>::~unique_ptr(int a1)
{
 int deleter; // ecx
 unsigned int *result; // eax
 unsigned int *v3; // [esp+10h] [ebp-8h]

 v3 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 if ( *v3 )
 {
 deleter = std::unique_ptr<int []>::get_deleter(a1);
 std::default_delete<int []>::operator()<int>(deleter, *v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3470 */
unsigned int * std::unique_ptr<int>::~unique_ptr(int a1)
{
 int v1; // edx
 unsigned int *result; // eax
 int deleter; // [esp+14h] [ebp-14h]
 unsigned int *v4; // [esp+20h] [ebp-8h]

 v4 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 if ( *v4 )
 {
 deleter = std::unique_ptr<int>::get_deleter(a1);
 v1 = *(unsigned int *)std::move<int *&>(v4);
 std::default_delete<int>::operator()(deleter, v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3500 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned int *)this = &GLOBAL_OFFSET_TABLE_ - 82;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3540 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned int *)this = &GLOBAL_OFFSET_TABLE_ - 72;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3580 */
int std::type_info::operator==(const std::type_info &a2) const
{
 bool v3; // [esp+17h] [ebp-11h]
 char v4; // [esp+23h] [ebp-5h]

 v4 = 1;
 if ( *(unsigned int *)((const char *)this + 4) != *(unsigned int *)((const char *)&a2 + 4) )
 {
 v3 = 0;
 if ( **(unsigned char **)((const char *)this + 4) != 42 )
 v3 = strcmp(*(const char **)((const char *)this + 4), *(const char **)((const char *)&a2 + 4)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3610 */
int RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
    return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3620 */
int RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
    return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3630 */
const char *std::type_info::name(const std::type_info *this)
{
 if ( **((unsigned char **)((const char *)this + 1)) == 42 )
 return (const char *)(*((unsigned int *)((const char *)this + 1)) + 1);
 else
 return (const char *)(*((unsigned int *)((const char *)this + 1)));
}


/* Function: _ZNK4Base7getNameEv @ 0x3670 */
const char * Base::getName(Base *this)
{
    return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3690 */
void Base::~Base(Base *this)
{
 Base::~Base();
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x36D0 */
const char * Derived::getName(Derived *this)
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
 *(void **)this = &off_8CDC;
}


/* Function: _ZN5BaseBC2Ev @ 0x3760 */
void BaseB::BaseB(BaseB *this)
{
 *(void **)this = &off_8CF0;
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
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return MultiDerived::funcB(this);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3820 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3850 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
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
 BaseA::~BaseA();
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
 BaseB::~BaseB();
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3940 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 *(void **)this = &off_8E2C;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3970 */
void MiddleA::MiddleA(MiddleA *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3990 */
void MiddleB::MiddleB(MiddleB *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x39B0 */
int MiddleA::func(MiddleA *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x39D0 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 VirtualBase::~VirtualBase((MiddleA *)((char *)this + 8));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3A20 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x3A60 */
int virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x3A90 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3AC0 */
void virtual_thunk_to_MiddleA_deleting_destructor(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3AF0 */
int MiddleB::func(MiddleB *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3B10 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 VirtualBase::~VirtualBase((MiddleB *)((char *)this + 8));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3B60 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x3BA0 */
int virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x3BD0 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3C00 */
void virtual_thunk_to_MiddleB_deleting_destructor(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3C30 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3C50 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3C90 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3CC0 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3CF0 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x3D20 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3D50 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3D80 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
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
 VirtualBase::~VirtualBase();
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3E10 */
void MiddleA::~MiddleA()
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x3E20 */
void MiddleB::~MiddleB()
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x3E30 */
void DiamondDerived::~DiamondDerived()
{
 MiddleB::~MiddleB();
 MiddleA::~MiddleA();
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3E90 */
int std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(int a1, int a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3ED0 */
unsigned int * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
 int v2; // eax
 unsigned int *result; // eax

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
 std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
 result = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3F50 */
int std::move<std::tuple<int *,std::default_delete<int>> &>(int a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3F60 */
int std::tuple<int *,std::default_delete<int>>::tuple(int a1, int a2)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3FA0 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
 return std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: __clang_call_terminate @ 0x3FD0 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4000 */
unsigned int * std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(unsigned int *a1, unsigned int *a2)
{
 unsigned int *result; // eax

 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4040 */
int std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
 return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4050 */
int std::get<0u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4080 */
int std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x40B0 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x40E0 */
int std::_Head_base<0u,int *,false>::_M_head(int a1)
{
 return a1;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x40F0 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 *(void **)this = &off_8ECC;
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
int RTTIDerivedA::getType(RTTIDerivedA *this)
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
 RTTIBase::~RTTIBase();
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x41F0 */
int RTTIBase::getType(RTTIBase *this)
{
    return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4200 */
void RTTIDerivedB::~RTTIDerivedB()
{
 RTTIBase::~RTTIBase();
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4230 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB();
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4270 */
int RTTIDerivedB::getType(RTTIDerivedB *this)
{
    return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4280 */
int std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl_ctor(int a1, int a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x42C0 */
unsigned int * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
 unsigned int *result; // eax

 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
 result = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4310 */
int std::tuple<int *,std::default_delete<int>>::tuple(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x4350 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(int a1)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1);
 return std::_Head_base<0u,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x4390 */
int std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x43C0 */
unsigned int * std::_Head_base<0u,int *,false>::_Head_base(unsigned int *a1)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = 0;
 return result;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x43E0 */
int std::_Head_base<1u,std::default_delete<int>,true>::_Head_base()
{
 return 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F0 */
int std::unique_ptr<int>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4440 */
void std::default_delete<int>::operator()(int a1, void *a2)
{
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4480 */
int std::move<int *&>(int a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4490 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(int a1)
{
 return std::get<1u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x44C0 */
int std::get<1u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<1u,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x44F0 */
int std::__get_helper<1u,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4520 */
int std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4550 */
int std::_Head_base<1u,std::default_delete<int>,true>::_M_head(int a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4560 */
int std::unique_ptr<int>::get(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B0 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x45E0 */
int std::get<0u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4610 */
int std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4640 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x4670 */
int std::_Head_base<0u,int *,false>::_M_head(int a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4680 */
int std::__uniq_ptr_data<int,std::default_delete<int []>,true,true>::__uniq_ptr_impl_ctor(int a1, int a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x46C0 */
unsigned int * std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(int a1, int a2)
{
 unsigned int *result; // eax

 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
 result = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4710 */
int std::tuple<int *,std::default_delete<int []>>::tuple(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4750 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
 return std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4780 */
unsigned int * std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(unsigned int *a1)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(a1);
 return std::_Head_base<0u,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x47C0 */
int std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(int a1)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x47F0 */
int std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base()
{
 return 0;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4800 */
int std::get<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4830 */
int std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4860 */
int std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4890 */
int std::unique_ptr<int []>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x48E0 */
void std::default_delete<int []>::operator()<int>(int a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4920 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(int a1)
{
 return std::get<1u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4950 */
int std::get<1u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<1u,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4980 */
int std::__get_helper<1u,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x49B0 */
int std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x49E0 */
int std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(int a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x49F0 */
int std::unique_ptr<int []>::get(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4A40 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4A70 */
int std::get<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4AA0 */
int std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4AD0 */
int std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B00 */
int std::forward<int *&>(int a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4B10 */
unsigned int * std::_Head_base<0u,int *,false>::_Head_base(unsigned int *a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = *a2;
 return result;
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
