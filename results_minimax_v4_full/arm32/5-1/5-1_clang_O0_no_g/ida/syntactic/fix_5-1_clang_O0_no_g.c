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
 * Binary: build/arm32/5-1/5-1_clang_O0_no_g
 * Processor: arm
 */

/* External function declarations */
extern "C" int call_weak_fn(void);

/* Function: .init_proc @ 0xD2C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D38 @ 0xD38 */
void sub_D38()
{
}


/* External function declarations */
extern "C" int call_weak_fn(void);
extern "C" void _cxa_atexit(void (*)(void*), void*, void*);
extern "C" void *_dso_handle;
void *operator new(unsigned int);
void *operator new[](unsigned int);
void operator delete(void*);
void operator delete[](void*);
extern "C" int printf(const char *, ...);
extern "C" int strcmp(const char *, const char *);
extern "C" char *strncpy(char *, const char *, unsigned int);
extern "C" unsigned int strlen(const char *);
extern "C" void _cxa_throw(void*, void*, void*);
extern "C" void* _cxa_allocate_exception(unsigned int);
extern "C" void _cxa_begin_catch(void*);
extern "C" void _cxa_end_catch(void);
extern "C" void _cxa_bad_typeid(void);
extern "C" void* _dynamic_cast(const void*, const void*, const void*, unsigned long);
namespace std { void terminate(void); }

/* Forward declarations for classes */
class SimpleClass;
class LifecycleClass;
class Base;
class Derived;
class VirtualBase;
class MiddleA;
class MiddleB;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class DiamondDerived;

/* Class definitions */
class BaseA {
public:
    int (**vtable)(unsigned int, int);
    BaseA();
    virtual int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    int (**vtable)(unsigned int, int);
    BaseB();
    virtual int funcB();
    virtual ~BaseB();
};

class MultiDerived : public BaseA, public BaseB {
public:
    int value;
    MultiDerived();
    virtual ~MultiDerived();
    int funcA();
    int funcB();
};

class VirtualBase {
public:
    int (**vtable)(unsigned int, int);
    VirtualBase();
    virtual int func();
    virtual ~VirtualBase();
};

class MiddleA : public VirtualBase {
public:
    MiddleA(MiddleA *this, unsigned int *a2);
    int func();
    virtual ~MiddleA();
};

class MiddleB : public VirtualBase {
public:
    MiddleB(MiddleB *this, unsigned int *a2);
    int func();
    virtual ~MiddleB();
};

class DiamondDerived : public VirtualBase, public MiddleA, public MiddleB {
public:
    int value;
    DiamondDerived();
    virtual ~DiamondDerived();
    int func();
};

template<typename T> class Container;
class Base;
class Derived;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class Point;

/* Class definitions */
class SimpleClass {
public:
    int value;
    char name[32];
    SimpleClass(int v, const char* n);
    void setValue(int v);
    int getValue() const;
    size_t compute(int a2) const;
    static int getClassID();
};

class LifecycleClass {
public:
    unsigned int* data;
    unsigned int size;
    static int instance_count;
    LifecycleClass(unsigned int s);
    int getData(unsigned int idx) const;
    static int getInstanceCount();
    ~LifecycleClass();
};

class Base {
public:
    int (**vtable)(unsigned int, int);
    Base();
    virtual int virtual_func(int a2);
    virtual ~Base();
};

class Derived : public Base {
public:
    int multiplier;
    Derived(int m);
    int virtual_func(int a2) override;
    ~Derived();
};

/* External declarations for std namespace */
extern "C" void *__ioinit;
void _ZNSt8ios_base4InitC1Ev();
void _ZNSt8ios_base4InitD1Ev();

/* Function: __cxx_global_var_init @ 0xE84 */
int _cxx_global_var_init()
{
 _ZNSt8ios_base4InitC1Ev();
 return _cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xED0 */
int GLOBAL__sub_I_5_1_cpp()
{
 return _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x104C */
int test_cpp_member_func(void)
{
 SimpleClass *v1; // [sp+Ch] [bp-2Ch]
 int Value; // [sp+10h] [bp-28h]
 unsigned char v3[36]; // [sp+14h] [bp-24h] BYREF

 new (v3) SimpleClass(5, "Test");
 ((SimpleClass *)v3)->setValue(10);
 Value = ((SimpleClass *)v3)->getValue();
 v1 = (SimpleClass *)((SimpleClass *)v3)->compute(3);
 ((SimpleClass *)v3)->~SimpleClass();
 return (int)v1 + Value + SimpleClass::getClassID();
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x23F4 */
void SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _Z20test_cpp_constructorv @ 0x10C8 */
int test_cpp_constructor(void)
{
    LifecycleClass *v0; // r0
    int v1; // r1
    int InstanceCount; // [sp+0h] [bp-20h]
    int Data; // [sp+8h] [bp-18h]
    unsigned char v5[8]; // [sp+14h] [bp-Ch] BYREF
    LifecycleClass *v6; // [sp+1Ch] [bp-4h]

    v6 = 0;
    new (v5) LifecycleClass(5);
    Data = ((LifecycleClass *)v5)->getData(2);
    v6 = (LifecycleClass *)((char *)v6 + Data);
    InstanceCount = LifecycleClass::getInstanceCount();
    v6 = (LifecycleClass *)((char *)v6 + InstanceCount);
    ((LifecycleClass *)v5)->~LifecycleClass();
    v1 = LifecycleClass::getInstanceCount();
    return (int)v6 + 1000 * v1;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1174 */
int call_virtual_func(int (**a1)(unsigned int, int), int a2)
{
 return (*a1)(a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x11AC */
int test_cpp_virtual_func(void)
{
 int v1; // [sp+0h] [bp-40h]
 int v2; // [sp+18h] [bp-28h]
 int v3; // [sp+24h] [bp-1Ch]
 int v4; // [sp+28h] [bp-18h]
 int ( **v5[2])(unsigned int, int); // [sp+34h] [bp-Ch] BYREF
 int ( **v6)(unsigned int, int); // [sp+3Ch] [bp-4h] BYREF

 Base::Base((Base *)&v6);
 Derived::Derived((Derived *)v5, 3);
 v4 = Base::virtual_func((Base *)&v6, 5);
 v3 = Derived::virtual_func((Derived *)v5, 5);
 v2 = call_virtual_func(&v6, 5);
 v1 = v4 + v3 + v2 + call_virtual_func(v5, 5);
 Derived::~Derived((Derived *)v5);
 Base::~Base((Base *)&v6);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int test_cpp_multiple_inheritance(void)
{
 int v1; // [sp+0h] [bp-40h]
 unsigned int *v2; // [sp+10h] [bp-30h]
 int v3; // [sp+24h] [bp-1Ch]
 unsigned int v4[2]; // [sp+30h] [bp-10h] BYREF
 unsigned int v5[2]; // [sp+38h] [bp-8h] BYREF

 MultiDerived::MultiDerived((MultiDerived *)v4);
 v4[1] = 100;
 v5[1] = 200;
 v2 = 0;
 if ( v4 )
 v2 = v5;
 v3 = (*(int ( **)(unsigned int *))v4[0])(v4);
 v1 = v3 + (*(int ( **)(unsigned int *))*v2)(v2) + (v4 != v2);
 MultiDerived::~MultiDerived((MultiDerived *)v4);
 return v1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13C0 */
int test_cpp_diamond_inheritance(void)
{
 int v1; // [sp+0h] [bp-40h]
 int ( ***v2)(unsigned int); // [sp+10h] [bp-30h]
 int v3; // [sp+20h] [bp-20h]
 unsigned int v4[6]; // [sp+28h] [bp-18h] BYREF

 DiamondDerived::DiamondDerived((DiamondDerived *)v4);
 *(unsigned int *)((char *)&v4[1] + *(unsigned int *)(v4[0] - 12)) = 50;
 v2 = 0;
 if ( v4 )
 v2 = (int ( ***)(unsigned int))((char *)v4 + *(unsigned int *)(v4[0] - 12));
 v3 = (**v2)(v2);
 *(unsigned int *)((char *)&v4[1] + *(unsigned int *)(v4[0] - 12)) = 100;
 v1 = v3 + (**v2)(v2);
 DiamondDerived::~DiamondDerived((DiamondDerived *)v4);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x14C4 */
int test_cpp_operator_overload(void)
{
 int result; // r0
 char v1; // [sp+Fh] [bp-19h]
 int v2; // [sp+10h] [bp-18h] BYREF
 int v3; // [sp+14h] [bp-14h]
 unsigned char v4[8]; // [sp+18h] [bp-10h] BYREF
 unsigned char v5[8]; // [sp+20h] [bp-8h] BYREF

 new (v5) Point(1, 2);
 new (v4) Point(3, 4);
 Point::operator+((Point *)v4, (Point *)v5);
 v1 = Point::operator==(v5, v4);
 Point::operator++((unsigned int *)&v2);
 result = v2 + v3 + 10;
 if ( (v1 & 1) != 0 )
 return v2 + v3;
 return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1550 */
int test_cpp_template_func(void)
{
 int v1; // [sp+8h] [bp-18h] BYREF
 int v2; // [sp+Ch] [bp-14h] BYREF
 double v3; // [sp+10h] [bp-10h]
 int v4; // [sp+1Ch] [bp-4h]

 v4 = template_max<int>(3, 7);
 v3 = COERCE_DOUBLE(template_max<double>(0, 1074003968, 0, 1073217536));
 v2 = 10;
 v1 = 20;
 template_swap<int>(&v2, &v1);
 return v4 + (int)v3 + v2 + v1;
}


/* Function: _Z23test_cpp_template_classv @ 0x15E8 */
int test_cpp_template_class(void)
{
 int v0; // r1
 double v2; // [sp+10h] [bp-98h]
 unsigned char v3[92]; // [sp+18h] [bp-90h] BYREF
 int Size; // [sp+74h] [bp-34h]
 int v5; // [sp+78h] [bp-30h]
 unsigned char v6[44]; // [sp+7Ch] [bp-2Ch] BYREF

 Container<int>::Container();
 Container<int>::push(v6, 10);
 Container<int>::push(v6, 20);
 Container<int>::push(v6, 30);
 v5 = Container<int>::get(v6);
 Size = Container<int>::getSize(v6);
 Container<double>::Container();
 Container<double>::push(v3, v0, 1374389535, 1074339512);
 v2 = COERCE_DOUBLE(Container<double>::get(v3, 0));
 return v5 + Size + (int)v2;
}


/* Function: _Z15test_cpp_lambdav @ 0x16B4 */
int test_cpp_lambda(void)
{
 int v1; // [sp+10h] [bp-18h]
 unsigned char v2[4]; // [sp+14h] [bp-14h] BYREF
 unsigned int v3[2]; // [sp+18h] [bp-10h] BYREF
 unsigned int v4[2]; // [sp+20h] [bp-8h] BYREF
 test_cpp_lambda(void)::$_1 lambda1;
 test_cpp_lambda(void)::$_0 lambda0;

 v4[1] = 10;
 v4[0] = 20;
 v3[0] = 10;
 v3[1] = v4;
 v1 = lambda1.operator()(v3, 3);
 return v1 + lambda0.operator()<int,int>(v2, 10, 20);
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x1724 */
int test_cpp_lambda(void)::$_1::operator()(int a1, int a2)
{
 **(unsigned int **)(a1 + 4) += 5;
 return **(unsigned int **)(a1 + 4) + a2 * *(unsigned int *)a1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x1760 */
int test_cpp_lambda(void)::$_0::operator()<int,int>(int a1, int a2, int a3)
{
 return a2 + a3;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1784 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18F4 */
int test_cpp_smart_ptr(void)
{
 int v1; // [sp+0h] [bp-58h]
 unsigned int *v2; // [sp+8h] [bp-50h]
 unsigned int *v3; // [sp+1Ch] [bp-3Ch]
 unsigned char v4[4]; // [sp+34h] [bp-24h] BYREF
 int v5; // [sp+3Ch] [bp-1Ch]
 unsigned char v6[4]; // [sp+40h] [bp-18h] BYREF
 int v7; // [sp+44h] [bp-14h]
 unsigned char v8[4]; // [sp+48h] [bp-10h] BYREF
 unsigned char v9[4]; // [sp+54h] [bp-4h] BYREF

 *(unsigned int *)operator new(4u) = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>();
 *(unsigned int *)std::unique_ptr<int>::operator*(v9) = 200;
 std::move<std::unique_ptr<int> &>(v9);
 std::unique_ptr<int>::unique_ptr();
 v7 = *(unsigned int *)std::unique_ptr<int>::operator*(v8);
 v3 = (unsigned int *)operator new[](0x14u);
 *v3 = 1;
 v3[1] = 2;
 v3[2] = 3;
 v3[3] = 4;
 v3[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>();
 v5 = *(unsigned int *)std::unique_ptr<int []>::operator[](v6, 2);
 *(unsigned int *)operator new(4u) = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>();
 v2 = (unsigned int *)std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(v4);
 v1 = v7 + v5 + *v2;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(v4);
 std::unique_ptr<int []>::~unique_ptr(v6);
 std::unique_ptr<int>::~unique_ptr(v8);
 std::unique_ptr<int>::~unique_ptr(v9);
 return v1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1ACC */
int std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
 int a1)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_();
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x1B10 */
int std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(int a1)
{
 return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x1B44 */
int std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(int a1)
{
 unsigned int *v1; // r0
 int deleter; // [sp+0h] [bp-18h]
 unsigned int *v5; // [sp+Ch] [bp-Ch]

 v5 = (unsigned int *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr();
 if ( *v5 )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(a1);
 v1 = (unsigned int *)std::move<int *&>(v5);
 test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
 }
 *v5 = 0;
 return a1;
}


/* Function: _Z13test_cpp_rttiv @ 0x1BD4 */
size_t test_cpp_rtti(void)
{
 const char *v0; // r0
 RTTIDerivedB *v2; // [sp+Ch] [bp-3Ch]
 RTTIDerivedA *v3; // [sp+14h] [bp-34h]
 RTTIDerivedA *v4; // [sp+24h] [bp-24h]
 RTTIDerivedB *v5; // [sp+2Ch] [bp-1Ch]
 int v6; // [sp+3Ch] [bp-Ch]
 size_t v7; // [sp+3Ch] [bp-Ch]

 v4 = (RTTIDerivedA *)operator new(4u);
 *(unsigned int *)v4 = 0;
 RTTIDerivedA::RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 *(unsigned int *)v5 = 0;
 RTTIDerivedB::RTTIDerivedB(v5);
 v6 = 0;
 if ( !v4 )
 _cxa_bad_typeid();
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v4 - 4), &`typeinfo for'RTTIDerivedA) )
 v6 = 10;
 if ( !v5 )
 _cxa_bad_typeid();
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v5 - 4), &`typeinfo for'RTTIDerivedB) )
 v6 += 20;
 v3 = (RTTIDerivedA *)_dynamic_cast(
 v4,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v3 )
 v6 += RTTIDerivedA::derivedA_data(v3);
 v2 = (RTTIDerivedB *)_dynamic_cast(
 v5,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v2 )
 v6 += RTTIDerivedB::derivedB_data(v2);
 v0 = (const char *)std::type_info::name(*(std::type_info **)(*(unsigned int *)v4 - 4));
 v7 = v6 + strlen(v0);
 (*(void ( **)(RTTIDerivedA *))(*(unsigned int *)v4 + 4))(v4);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned int *)v5 + 4))(v5);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E74 */
int test_cpp_oo_features(void)
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0

 printf(asc_4221);
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
 return 0;
}


/* Function: sub_1F40 @ 0x1F40 */
// positive sp value has been detected, the output may be wrong!
int sub_1F40(int a1)
{
 int v1; // r0
 size_t v2; // r0
 int v3; // r0
 int ( *v5)(int); // [sp-4h] [bp-4h]

 printf(aCppL401D, a1);
 v1 = test_cpp_smart_ptr();
 printf(aCppL402D, v1);
 v2 = test_cpp_rtti();
 v3 = printf(aCppL403D, v2);
 return v5(v3);
}


/* Function: main @ 0x1FB4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_1FD0 @ 0x1FD0 */
// positive sp value has been detected, the output may be wrong!
int sub_1FD0()
{
 int ( *v1)(); // [sp-4h] [bp-4h]

 return v1();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x1FE0 */
int ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 int a1)
{
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>();
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x201C */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 int a1,
 int a2,
 int a3)
{
 int v3; // r0
 unsigned int v6[2]; // [sp+8h] [bp-8h] BYREF

 v6[1] = a1;
 v6[0] = a2;
 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
 std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(a1, v6, v3);
 return a1;
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x2064 */
void std::forward<test_cpp_smart_ptr(void)::$_2 const&>()
{
 ;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2078 */
int std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 int a1,
 int a2)
{
 int v2; // r0
 int v4; // [sp+4h] [bp-14h]

 v4 = std::forward<int *&>(a2);
 std::forward<test_cpp_smart_ptr(void)::$_2 const&>();
 std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 a1,
 v4,
 v2);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x20D4 */
int std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 int a1,
 int a2)
{
 int v2; // r0
 int v3; // r0

 std::forward<test_cpp_smart_ptr(void)::$_2 const&>();
 std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(a1, v2);
 v3 = std::forward<int *&>(a2);
 std::_Head_base<0u,int *,false>::_Head_base<int *&>(a1, v3);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x212C */
int std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(int a1)
{
 std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base();
 return a1;
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2160 */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2178 */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(int a1)
{
 return std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x219C */
int std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(a1);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x21D0 */
void test_cpp_smart_ptr(void)::$_2::operator()(int a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x221C */
int std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2240 */
int std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2264 */
int std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2288 */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(int a1)
{
 return std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x22AC */
int std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
 return std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x22D0 */
int std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(int a1)
{
 return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x22F4 */
int std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(int a1)
{
 return std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2318 */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head()
{
 ;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x232C */
int std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(int a1)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2360 */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2388 */
int std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x23AC */
int std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x23D0 */
int std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x23F4 */
void SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2444 */
int SimpleClass::setValue(SimpleClass *this, int a2)
{
 int result; // r0

 result = a2;
 *(unsigned int *)this = a2;
 return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2464 */
int SimpleClass::getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x247C */
size_t SimpleClass::compute(SimpleClass *this, int a2)
{
 return strlen((const char *)this + 4) + *(unsigned int *)this * a2;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x24C4 */
int SimpleClass::getClassID(SimpleClass *this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x24D0 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned int a2)
{
 unsigned int v2; // r0
 unsigned int i; // [sp+8h] [bp-10h]

 this->size = a2;
 v2 = 4 * a2;
 if ( a2 != (a2 & 0x3FFFFFFF) )
  v2 = -1;
 this->data = (unsigned int *)operator new[](v2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned int *)this + 4 * i) = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x259C */
int LifecycleClass::getData(LifecycleClass *this, unsigned int a2)
{
 if ( a2 >= *((unsigned int *)this + 1) )
 return -1;
 else
 return *(unsigned int *)(*(unsigned int *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x25F4 */
int LifecycleClass::getInstanceCount()
{
 return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2604 */
void LifecycleClass::~LifecycleClass(void **this)
{
 if ( *this )
 operator delete[](*this);
 --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x266C */
void Base::Base(Base *this)
{
 *(unsigned int *)this = &off_14C48;
}


/* Function: _ZN7DerivedC2Ei @ 0x2694 */
void Derived::Derived(Derived *this, int a2)
{
 Base::Base(this);
 *(unsigned int *)this = &off_14C68;
 *((unsigned int *)this + 1) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x26E0 */
int Base::virtual_func(Base *this, int a2)
{
 return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x26FC */
int Derived::virtual_func(Derived *this, int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZN7DerivedD2Ev @ 0x2720 */
void Derived::~Derived(Derived *this)
{
 Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x274C */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2760 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA(this);
 BaseB::BaseB((MultiDerived *)((char *)this + 8));
 *(unsigned int *)this = &off_14C8C;
 *((unsigned int *)this + 2) = &off_14CA4;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x27B4 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB((MultiDerived *)((char *)this + 8));
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x27EC */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 16));
 MiddleA::MiddleA(this);
 MiddleB::MiddleB((DiamondDerived *)((char *)this + 8));
 *(unsigned int *)this = &off_14D14;
 *((unsigned int *)this + 4) = &off_14D48;
 *((unsigned int *)this + 2) = &off_14D2C;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2870 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 16));
}


/* Function: _ZN5PointC2Eii @ 0x28B4 */
void Point::Point(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x28E0 */
void Point::operator+(Point *a1, unsigned int *a2, unsigned int *a3)
{
 Point::Point(a1, *a2 + *a3, a2[1] + a3[1]);
}


/* Function: _ZNK5PointeqERKS_ @ 0x2924 */
int Point::operator==(unsigned int *a1, unsigned int *a2)
{
 int v3; // [sp+4h] [bp-Ch]

 LOBYTE(v3) = 0;
 if ( *a1 == *a2 )
 v3 = a2[1] - a1[1] + (a1[1] == a2[1]) + a1[1] - a2[1];
 return v3 & 1;
}


/* Function: _ZN5PointppEv @ 0x298C */
unsigned int * Point::operator++(unsigned int *result)
{
 ++*result;
 ++result[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x29B8 */
int template_max<int>(int a1, int a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x29FC */
long long template_max<double>(double a1, double a2)
{
 if ( a1 <= a2 )
 return *(unsigned long long *)&a2;
 else
 return *(unsigned long long *)&a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2A74 */
int template_swap<int>(int *a1, int *a2)
{
 int result; // r0
 int v3; // [sp+0h] [bp-Ch]

 v3 = *a1;
 *a1 = *a2;
 result = v3;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2AB0 */
int Container<int>::Container(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2ACC */
int Container<int>::push(int a1, int a2)
{
 int result; // r0
 int v3; // r2

 result = *(unsigned int *)(a1 + 40);
 if ( result <= 9 )
 {
 result = a2;
 v3 = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2B14 */
int Container<int>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2B7C */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2B94 */
int Container<double>::Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2BB0 */
int Container<double>::push(int a1, int a2, int a3, int a4)
{
 int result; // r0
 int v5; // r3

 result = *(unsigned int *)(a1 + 80);
 if ( result <= 9 )
 {
 result = a4;
 v5 = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = v5 + 1;
 *(unsigned int *)(a1 + 8 * v5) = a3;
 *(unsigned int *)(a1 + 8 * v5 + 4) = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C04 */
long long Container<double>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return *(unsigned long long *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7C */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x2C94 */
int std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(int a1)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi();
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x2CD0 */
int std::unique_ptr<int>::operator*(int a1)
{
 return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x2D04 */
void std::move<std::unique_ptr<int> &>()
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x2D18 */
int std::unique_ptr<int>::unique_ptr(int a1)
{
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data();
 return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x2D4C */
int std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(int a1)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi();
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x2D88 */
int std::unique_ptr<int []>::operator[](int a1, int a2)
{
 return std::unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC8 */
int std::unique_ptr<int []>::~unique_ptr(int a1)
{
 int deleter; // r0
 unsigned int *v4; // [sp+4h] [bp-Ch]

 v4 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr();
 if ( *v4 )
 {
 deleter = std::unique_ptr<int []>::get_deleter(a1);
 std::default_delete<int []>::operator()<int>(deleter, *v4);
 }
 *v4 = 0;
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2E3C */
int std::unique_ptr<int>::~unique_ptr(int a1)
{
 unsigned int *v1; // r0
 int deleter; // [sp+4h] [bp-14h]
 unsigned int *v5; // [sp+Ch] [bp-Ch]

 v5 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr();
 if ( *v5 )
 {
 deleter = std::unique_ptr<int>::get_deleter(a1);
 v1 = (unsigned int *)std::move<int *&>(v5);
 std::default_delete<int>::operator()(deleter, *v1);
 }
 *v5 = 0;
 return a1;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x2EC0 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned int *)this = off_14EC4;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x2F00 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned int *)this = off_14EEC;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x2F40 */
int std::type_info::operator==(int a1, int a2)
{
 bool v3; // [sp+4h] [bp-14h]
 char v4; // [sp+Ch] [bp-Ch]

 v4 = 1;
 if ( *(unsigned int *)(a1 + 4) != *(unsigned int *)(a2 + 4) )
 {
 v3 = 0;
 if ( **(unsigned char **)(a1 + 4) != 42 )
 v3 = strcmp(*(const char **)(a1 + 4), *(const char **)(a2 + 4)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x2FE0 */
int RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x2FF4 */
int RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3008 */
int std::type_info::name(std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return *((unsigned int *)this + 1) + 1;
 else
 return *((unsigned int *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x305C */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3078 */
void Base::~Base(Base *this)
{
 Base::~Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x30A8 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x30C4 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x30F4 */
void BaseA::BaseA(BaseA *this)
{
 *(unsigned int *)this = &off_14CE8;
}


/* Function: _ZN5BaseBC2Ev @ 0x311C */
void BaseB::BaseB(BaseB *this)
{
 *(unsigned int *)this = &off_14CFC;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3144 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3158 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3188 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x319C */
int `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x31B4 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x31D0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x31E8 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x31FC */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x3210 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x3240 */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x3254 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3268 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3298 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 *(unsigned int *)this = &off_14E38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x32C0 */
void MiddleA::MiddleA(MiddleA *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x32F4 */
void MiddleB::MiddleB(MiddleB *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x3328 */
int MiddleA::func(MiddleA *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x3350 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 VirtualBase::~VirtualBase((MiddleA *)((char *)this + 8));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3394 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x33C4 */
int `virtual thunk to'MiddleA::func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x33E4 */
void `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3408 */
void `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3428 */
int MiddleB::func(MiddleB *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3450 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 VirtualBase::~VirtualBase((MiddleB *)((char *)this + 8));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3494 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x34C4 */
int `virtual thunk to'MiddleB::func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x34E4 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3508 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3528 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3550 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3580 */
int `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3598 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x35B4 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x35CC */
int `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x35EC */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3610 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x3630 */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x3644 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3658 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3688 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x36A0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x36B8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 MiddleB::~MiddleB((DiamondDerived *)((char *)this + 8));
 MiddleA::~MiddleA(this);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3708 */
int std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(int a1)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl();
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x373C */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
 int v2; // r0
 int result; // r0
 unsigned int *v5; // [sp+4h] [bp-Ch]

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
 std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
 v5 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
 result = a1;
 *v5 = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x379C */
void std::move<std::tuple<int *,std::default_delete<int>> &>()
{
 ;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x37B0 */
int std::tuple<int *,std::default_delete<int>>::tuple(int a1)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl();
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x37E4 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
 return std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: __clang_call_terminate @ 0x3808 */
void _clang_call_terminate(void *a1)
{
 _cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3810 */
unsigned int * std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(unsigned int *a1, unsigned int *a2)
{
 unsigned int *result; // r0

 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl();
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x3850 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl()
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3868 */
int std::get<0u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x388C */
int std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x38B0 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x38D4 */
void std::_Head_base<0u,int *,false>::_M_head()
{
 ;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x38E8 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 *(unsigned int *)this = off_14ED8;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3910 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x393C */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x396C */
int RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3980 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x3994 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x39C4 */
int RTTIBase::getType(RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x39D8 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3A04 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3A34 */
int RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x3A48 */
int ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(int a1)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl();
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x3A7C */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
 unsigned int *v2; // r2
 int result; // r0

 std::tuple<int *,std::default_delete<int>>::tuple<true,true>();
 v2 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 result = a1;
 *v2 = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x3AC8 */
int std::tuple<int *,std::default_delete<int>>::tuple<true,true>(int a1)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl();
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3AFC */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(int a1)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl();
 std::_Head_base<0u,int *,false>::_Head_base(a1);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3B30 */
int std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
 std::_Head_base<1u,std::default_delete<int>,true>::_Head_base();
 return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3B5C */
unsigned int * std::_Head_base<0u,int *,false>::_Head_base(unsigned int *result)
{
 *result = 0;
 return result;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3B78 */
void std::_Head_base<1u,std::default_delete<int>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3B8C */
int std::unique_ptr<int>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x3BC0 */
void std::default_delete<int>::operator()(int a1, void *a2)
{
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3C00 */
void std::move<int *&>()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3C14 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(int a1)
{
 return std::get<1u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3C38 */
int std::get<1u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<1u,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3C5C */
int std::__get_helper<1u,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C80 */
int std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CA4 */
void std::_Head_base<1u,std::default_delete<int>,true>::_M_head()
{
 ;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3CB8 */
int std::unique_ptr<int>::get(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3CEC */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3D14 */
int std::get<0u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3D38 */
int std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3D5C */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3D80 */
void std::_Head_base<0u,int *,false>::_M_head()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x3D94 */
int ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(int a1)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl();
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3DC8 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(int a1, int a2)
{
 unsigned int *v2; // r2
 int result; // r0

 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>();
 v2 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 result = a1;
 *v2 = a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x3E14 */
int std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(int a1)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl();
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3E48 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
 return std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x3E6C */
unsigned int * std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(unsigned int *a1)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl();
 std::_Head_base<0u,int *,false>::_Head_base(a1);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3EA0 */
int std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(int a1)
{
 std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base();
 return a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3ECC */
void std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base()
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3EE0 */
int std::get<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3F04 */
int std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3F28 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head()
{
 std::_Head_base<0u,int *,false>::_M_head();
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3F4C */
int std::unique_ptr<int []>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x3F80 */
void std::default_delete<int []>::operator()<int>(int a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x3FC0 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(int a1)
{
 return std::get<1u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3FE4 */
int std::get<1u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<1u,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4008 */
int std::__get_helper<1u,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x402C */
int std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4050 */
void std::_Head_base<1u,std::default_delete<int []>,true>::_M_head()
{
 ;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4064 */
int std::unique_ptr<int []>::get(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4098 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x40C0 */
int std::get<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x40E4 */
int std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4108 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head()
{
 std::_Head_base<0u,int *,false>::_M_head();
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x412C */
void std::forward<int *&>()
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4140 */
unsigned int * std::_Head_base<0u,int *,false>::_Head_base<int *&>(unsigned int *a1)
{
 unsigned int *v1; // r0
 unsigned int *v2; // r1
 unsigned int *result; // r0

 std::forward<int *&>();
 v2 = v1;
 result = a1;
 *a1 = *v2;
 return result;
}


/* Function: .term_proc @ 0x4180 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x150D8 */

/* FAILED to decompile: __imp__ZSt9terminatev @ 0x150DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x150E0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x150E4 */

/* FAILED to decompile: __imp_printf @ 0x150E8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x150F0 */

/* FAILED to decompile: __imp__Znaj @ 0x150F4 */

/* FAILED to decompile: __imp_abort @ 0x150F8 */

/* FAILED to decompile: __imp__ZdlPv @ 0x150FC */

/* FAILED to decompile: __imp___cxa_bad_typeid @ 0x15100 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x15104 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x15108 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x1510C */

/* FAILED to decompile: __imp__ZdaPv @ 0x15110 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x15118 */

/* FAILED to decompile: __imp_strlen @ 0x1511C */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x15120 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x15124 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x15128 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x1512C */

/* FAILED to decompile: __imp_strcmp @ 0x15130 */

/* FAILED to decompile: __imp___cxa_throw @ 0x15134 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x15138 */

/* FAILED to decompile: __imp_strncpy @ 0x1513C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x15144 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x15148 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x1514C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x15154 */

/* Total functions decompiled: 218, failed: 28 */
