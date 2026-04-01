/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O0_no_g
 * Processor: pc
 */

#include <cstddef>
#include <cstdio>
#include <cstring>
#include <new>
#include <memory>

#define JUMPOUT(addr) ((void(*)())addr)()

// Forward declarations for external functions
extern "C" {
}

class SimpleClass {
public:
    SimpleClass(int value, const char* name);
    void setValue(int value);
    long long getValue();
    long long compute(int multiplier);
    static long long getClassID();
private:
    unsigned int value;
    char name[32];
};

class LifecycleClass {
public:
    LifecycleClass(unsigned long long size);
    ~LifecycleClass();
    long long getData(unsigned long long idx);
    static long long getInstanceCount();
private:
    unsigned long long* data;
    unsigned long long size;
    static unsigned int instance_count;
};

class Base {
public:
    Base();
    virtual ~Base();
    virtual long long virtual_func(int value);
    virtual const char* getName();
private:
    unsigned long long vtable;
};

class Derived : public Base {
public:
    Derived(int value);
    virtual ~Derived();
    virtual long long virtual_func(int value) override;
    virtual const char* getName() override;
private:
    unsigned long long vtable;
    unsigned int value;
};

class BaseA {
public:
    BaseA();
    virtual ~BaseA();
    virtual long long funcA();
private:
    unsigned long long vtable;
};

class BaseB {
public:
    BaseB();
    virtual ~BaseB();
    virtual long long funcB();
private:
    unsigned long long vtable;
};

class MultiDerived : public BaseA, public BaseB {
public:
    MultiDerived();
    virtual ~MultiDerived();
    virtual long long funcA() override;
    virtual long long funcB() override;
private:
    unsigned long long vtable;
    unsigned long long vtable2;
};

class VirtualBase {
public:
    VirtualBase();
    virtual ~VirtualBase();
    virtual long long func();
private:
    unsigned long long vtable;
};

class MiddleA : public VirtualBase {
public:
    MiddleA(unsigned long long* vtable);
    virtual ~MiddleA();
    virtual long long func() override;
};

class MiddleB : public VirtualBase {
public:
    MiddleB(unsigned long long* vtable);
    virtual ~MiddleB();
    virtual long long func() override;
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    DiamondDerived();
    virtual ~DiamondDerived();
    virtual long long func() override;
private:
    unsigned long long vtable;
    unsigned long long vtable2;
    unsigned long long vtable3;
};

class Point {
public:
    Point(int x, int y);
    long long operator+(unsigned int* other);
    bool operator==(unsigned int* other);
    unsigned int* operator++();
private:
    unsigned int x;
    unsigned int y;
};

class RTTIBase {
public:
    RTTIBase();
    virtual ~RTTIBase();
    virtual long long getType();
private:
    unsigned long long vtable;
};

class RTTIDerivedA : public RTTIBase {
public:
    RTTIDerivedA();
    virtual ~RTTIDerivedA();
    virtual long long getType() override;
    long long derivedA_data();
private:
    unsigned long long vtable;
};

class RTTIDerivedB : public RTTIBase {
public:
    RTTIDerivedB();
    virtual ~RTTIDerivedB();
    virtual long long getType() override;
    long long derivedB_data();
private:
    unsigned long long vtable;
};


    void __cxa_throw(void* exception, void* type_info, void* destructor);
    void* __cxa_allocate_exception(size_t size);
    void* __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void __cxa_rethrow();
    void __cxa_bad_typeid();
    void* __dynamic_cast(const void*, const void*, const void*, long);
    void __stack_chk_fail();
    int strcmp(const char*, const char*);
    size_t strlen(const char*);
    char* strncpy(char*, const char*, size_t);
    int puts(const char*);
    int printf(const char*, ...);
    void* operator new(size_t);
    void* operator new[](size_t);
    void operator delete(void*) throw();
    void operator delete[](void*) throw();
    void operator delete(void*, size_t) throw();
    void operator delete[](void*, size_t) throw();
    void __cxa_atexit(void (*)(void*), void*, void*);
    int __gxx_personality_v0(...);
    void _Unwind_Resume();
    void __gmon_start__();
}

#define JUMPOUT(addr) ((void(*)())addr)()
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
 JUMPOUT(0);
}


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
 sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
 sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
 sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
 sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
 sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
 sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
 sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
 sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
 sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
 sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
 sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
 sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
 sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
 sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
 sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
 sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
 sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
 sub_2020();
}


/* Function: sub_2150 @ 0x2150 */
void sub_2150()
{
 sub_2020();
}


/* Function: sub_2160 @ 0x2160 */
void sub_2160()
{
 sub_2020();
}


/* Function: sub_2170 @ 0x2170 */
void sub_2170()
{
 sub_2020();
}



// CRT stub functions removed by preprocessor



/* Function: _Z20test_cpp_member_funcv @ 0x23CA */
long long test_cpp_member_func(void)
{
 int Value; // [rsp+4h] [rbp-3Ch]
 int v2; // [rsp+8h] [rbp-38h]
 unsigned char v3[40]; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 SimpleClass::SimpleClass((SimpleClass *)v3, 5, "Test");
 SimpleClass::setValue((SimpleClass *)v3, 10);
 Value = SimpleClass::getValue((SimpleClass *)v3);
 v2 = SimpleClass::compute((SimpleClass *)v3, 3);
 return v2 + Value + (unsigned int)SimpleClass::getClassID((SimpleClass *)v3);
}


/* Function: _Z20test_cpp_constructorv @ 0x245C */
long long test_cpp_constructor(void)
{
 int Data; // [rsp+Ch] [rbp-24h]
 int v2; // [rsp+Ch] [rbp-24h]
 unsigned char v3[24]; // [rsp+10h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 LifecycleClass::LifecycleClass((LifecycleClass *)v3, 5u);
 Data = LifecycleClass::getData((LifecycleClass *)v3, 2u);
 v2 = LifecycleClass::getInstanceCount((LifecycleClass *)v3) + Data;
 LifecycleClass::~LifecycleClass((LifecycleClass *)v3);
 return 1000 * (unsigned int)LifecycleClass::getInstanceCount((LifecycleClass *)v3) + v2;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24DE */
long long call_virtual_func(Base *a1, unsigned int a2)
{
 return (**(long long ( ***)(Base *, unsigned long long))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x250B */
long long test_cpp_virtual_func(void)
{
 unsigned int v0; // ebx
 int v2; // [rsp+8h] [rbp-58h]
 int v3; // [rsp+Ch] [rbp-54h]
 int v4; // [rsp+10h] [rbp-50h]
 unsigned long long v5[2]; // [rsp+18h] [rbp-48h] BYREF
 Base *v6; // [rsp+28h] [rbp-38h]
 unsigned char v7[24]; // [rsp+30h] [rbp-30h] BYREF
 unsigned long long v8; // [rsp+48h] [rbp-18h]

 v8 = __readfsqword(0x28u);
 v5[0] = &off_8B50;
 Derived::Derived((Derived *)v7, 3);
 v2 = Base::virtual_func((Base *)v5, 5);
 v3 = Derived::virtual_func((Derived *)v7, 5);
 v5[1] = v5;
 v6 = (Base *)v7;
 v4 = call_virtual_func((Base *)v5, 5u);
 v0 = v4 + v3 + v2 + call_virtual_func(v6, 5u);
 Derived::~Derived((Derived *)v7);
 Base::~Base((Base *)v5);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2616 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned int v0; // ebx
 int v2; // [rsp+4h] [rbp-5Ch]
 long long ( **v3)(unsigned long long); // [rsp+20h] [rbp-40h] BYREF
 int v4; // [rsp+28h] [rbp-38h]
 long long ( **v5)(unsigned long long); // [rsp+30h] [rbp-30h] BYREF
 int v6; // [rsp+38h] [rbp-28h]
 unsigned long long v7; // [rsp+48h] [rbp-18h]

 v7 = __readfsqword(0x28u);
 MultiDerived::MultiDerived((MultiDerived *)&v3);
 v4 = 100;
 v6 = 200;
 v2 = (*v3)(&v3);
 v0 = (*v5)(&v5) + v2 + (&v3 != &v5);
 MultiDerived::~MultiDerived((MultiDerived *)&v3);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x26F3 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v0; // ebx
 int v2; // [rsp+0h] [rbp-60h]
 unsigned char v3[32]; // [rsp+10h] [rbp-50h] BYREF
 long long ( **v4)(unsigned long long); // [rsp+30h] [rbp-30h] BYREF
 int v5; // [rsp+38h] [rbp-28h]
 unsigned long long v6; // [rsp+48h] [rbp-18h]

 v6 = __readfsqword(0x28u);
 DiamondDerived::DiamondDerived((DiamondDerived *)v3);
 v5 = 50;
 v2 = (*v4)(&v4);
 v5 = 100;
 v0 = v2 + (*v4)(&v4);
 DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x27B2 */
long long test_cpp_operator_overload(void)
{
 int v0; // edx
 char v2; // [rsp+Fh] [rbp-21h]
 unsigned char v3[8]; // [rsp+10h] [rbp-20h] BYREF
 unsigned char v4[8]; // [rsp+18h] [rbp-18h] BYREF
 unsigned long long v5[2]; // [rsp+20h] [rbp-10h] BYREF

 v5[1] = __readfsqword(0x28u);
 Point::Point((Point *)v3, 1, 2);
 Point::Point((Point *)v4, 3, 4);
 v5[0] = Point::operator+(v3, v4);
 v2 = Point::operator==(v3, v4);
 Point::operator++(v5);
 if ( v2 )
 v0 = 0;
 else
 v0 = 10;
 return (unsigned int)(v0 + LODWORD(v5[0]) + HIDWORD(v5[0]));
}


/* Function: _Z22test_cpp_template_funcv @ 0x2864 */
long long test_cpp_template_func(void)
{
 int v1; // [rsp+4h] [rbp-1Ch] BYREF
 int v2; // [rsp+8h] [rbp-18h] BYREF
 int v3; // [rsp+Ch] [rbp-14h]
 double v4; // [rsp+10h] [rbp-10h]
 unsigned long long v5; // [rsp+18h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 v3 = template_max<int>(3, 7);
 v4 = template_max<double>(2.5, 1.5);
 v1 = 10;
 v2 = 20;
 template_swap<int>(&v1, &v2);
 return (unsigned int)(v1 + v3 + (int)v4 + v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x2906 */
long long test_cpp_template_class(void)
{
 int v1; // [rsp+0h] [rbp-A0h]
 int Size; // [rsp+4h] [rbp-9Ch]
 unsigned char v3[48]; // [rsp+10h] [rbp-90h] BYREF
 unsigned char v4[88]; // [rsp+40h] [rbp-60h] BYREF
 unsigned long long v5; // [rsp+98h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 Container<int>::Container(v3);
 Container<int>::push(v3, 10);
 Container<int>::push(v3, 20);
 Container<int>::push(v3, 30);
 v1 = Container<int>::get(v3, 0);
 Size = Container<int>::getSize(v3);
 Container<double>::Container(v4);
 Container<double>::push(v4, 3.14);
 return (unsigned int)(Size + v1 + (int)Container<double>::get(v4, 0));
}


// Lambda functor implementation
struct LambdaFunctor {
    unsigned int val1;
    unsigned int val2;
    unsigned int& captured;
    
    LambdaFunctor(unsigned int v1, unsigned int v2, unsigned int& cap) : val1(v1), val2(v2), captured(cap) {}
    
    long long operator()(long long a1, int a2) {
        unsigned int* p = (unsigned int*)a1;
        p[1] += 5;  // Increment the second value
        return (long long)(a2 * *p + p[1]);
    }
};


/* Function: _Z15test_cpp_lambdav @ 0x2A4E */
long long test_cpp_lambda(void)
{
 unsigned int v1[2]; // [rsp+0h] [rbp-30h] BYREF
 int v2; // [rsp+10h] [rbp-20h] BYREF
 unsigned int *v3; // [rsp+18h] [rbp-18h]
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 v1[1] = 10;
 v1[0] = 20;
 v2 = 10;
 v3 = v1;
 LambdaFunctor functor(v1[0], v1[1], v2);
 return (unsigned int)functor((long long)&v2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2ABE */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeid(int), 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x2BE4 */
void test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2C17 */
long long test_cpp_smart_ptr(void)
{
 unsigned int *v0; // rax
 long long v1; // rax
 unsigned int *v2; // rdx
 unsigned int *v3; // rax
 unsigned int v4; // ebx
 char v6; // [rsp+Bh] [rbp-45h] BYREF
 int v7; // [rsp+Ch] [rbp-44h]
 int v8; // [rsp+10h] [rbp-40h]
 int v9; // [rsp+14h] [rbp-3Ch]
 unsigned char v10[8]; // [rsp+18h] [rbp-38h] BYREF
 unsigned char v11[8]; // [rsp+20h] [rbp-30h] BYREF
 unsigned char v12[8]; // [rsp+28h] [rbp-28h] BYREF
 unsigned char v13[8]; // [rsp+30h] [rbp-20h] BYREF
 unsigned long long v14; // [rsp+38h] [rbp-18h]

 v14 = __readfsqword(0x28u);
 v0 = (unsigned int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v10, v0);
 *(unsigned int *)std::unique_ptr<int>::operator*(v10) = 200;
 v1 = std::move<std::unique_ptr<int> &>(v10);
 std::unique_ptr<int>::unique_ptr(v11, v1);
 v7 = *(unsigned int *)std::unique_ptr<int>::operator*(v11);
 v2 = (unsigned int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v12, v2);
 v8 = *(unsigned int *)std::unique_ptr<int []>::operator[](v12, 2);
 v3 = (unsigned int *)operator new(4u);
 *v3 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
 v13,
 v3,
 &v6);
 v9 = *(unsigned int *)std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(v13);
 v4 = v8 + v7 + v9;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(v13);
 std::unique_ptr<int []>::~unique_ptr(v12);
 std::unique_ptr<int>::~unique_ptr(v11);
 std::unique_ptr<int>::~unique_ptr(v10);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x2DC5 */
long long test_cpp_rtti(void)
{
 RTTIDerivedA *v0; // rbx
 RTTIDerivedB *v1; // rbx
 RTTIDerivedA *v2; // rax
 RTTIDerivedB *v3; // rax
 const char *v4; // rax
 int v6; // [rsp+Ch] [rbp-34h]
 unsigned int v7; // [rsp+Ch] [rbp-34h]
 RTTIDerivedA *lpsrc; // [rsp+10h] [rbp-30h]

 v0 = (RTTIDerivedA *)operator new(8u);
 *(unsigned long long *)v0 = 0;
 RTTIDerivedA::RTTIDerivedA(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator new(8u);
 *(unsigned long long *)v1 = 0;
 RTTIDerivedB::RTTIDerivedB(v1);
 v6 = 0;
 if ( !lpsrc )
 __cxa_bad_typeid();
 if ( (unsigned char)std::type_info::operator==(*(unsigned long long *)(*(unsigned long long *)lpsrc - 8LL), &`typeinfo for'RTTIDerivedA) )
 v6 = 10;
 if ( !v1 )
 __cxa_bad_typeid();
 if ( (unsigned char)std::type_info::operator==(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL), &`typeinfo for'RTTIDerivedB) )
 v6 += 20;
 v2 = (RTTIDerivedA *)__dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v2 )
 v6 += RTTIDerivedA::derivedA_data(v2);
 v3 = (RTTIDerivedB *)__dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v3 )
 v6 += RTTIDerivedB::derivedB_data(v3);
 v4 = (const char *)std::type_info::name(*(std::type_info **)(*(unsigned long long *)lpsrc - 8LL));
 v7 = strlen(v4) + v6;
 (*(void ( **)(RTTIDerivedA *))(*(unsigned long long *)lpsrc + 8LL))(lpsrc);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F6F */
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

 puts(s);
 v0 = test_cpp_member_func();
 printf(format, v0);
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


/* Function: main @ 0x30CD */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x30E2 */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 long long a1,
 long long a2,
 long long a3)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x3110 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
 long long a1,
 long long a2,
 long long a3)
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x313E */
unsigned long long * std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(long long a1)
{
 long long deleter; // rbx
 unsigned int **v2; // rax
 unsigned long long *result; // rax
 unsigned long long *v4; // [rsp+18h] [rbp-18h]

 v4 = (unsigned long long *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
 if ( *v4 )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(a1);
 v2 = (unsigned int **)std::move<int *&>(v4);
 test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x31A2 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(long long a1)
{
 return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x31C4 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 unsigned long long v5[3]; // [rsp+10h] [rbp-20h] BYREF

 v5[1] = a1;
 v5[0] = a2;
 v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
 return std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
 a1,
 v5,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x3202 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x321C */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(long long a1)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x3236 */
long long std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(long long a1)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x3250 */
long long std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
long long std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // r12
 long long v4; // rax

 v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
 v4 = std::forward<int *&>(a2);
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
 a1,
 v4,
 v3);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32AC */
long long std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(long long a1)
{
 return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x32C6 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(long long a1)
{
 return std::get<1ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x32E0 */
long long std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x32FE */
long long std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 long long v4; // rax

 v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
 std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(a1, v3);
 v4 = std::forward<int *&>(a2);
 return std::_Head_base<0ul,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
long long std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
long long std::get<1ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(long long a1)
{
 return std::__get_helper<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
long long std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(long long a1)
{
 return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x33A2 */
long long std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(
 long long a1,
 long long a2)
{
 return std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(a1, a2);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
long long std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33E2 */
long long std::__get_helper<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(long long a1)
{
 return std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
long long std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x3416 */
void std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
long long std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(long long a1)
{
 return std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
long long std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
long long std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(long long a1)
{
 return a1;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x3467 */
int __static_initialization_and_destruction_0(int a1, int a2)
{
 int result; // eax

 if ( a1 == 1 && a2 == 0xFFFF )
 {
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x34BD */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x34D6 */
long long std::type_info::name(std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return *((unsigned long long *)this + 1) + 1LL;
 else
 return *((unsigned long long *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
_BOOL8 std::type_info::operator==(long long a1, long long a2)
{
 return *(unsigned long long *)(a1 + 8) == *(unsigned long long *)(a2 + 8)
 || **(unsigned char **)(a1 + 8) != 42 && !strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3570 */
void SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
long long SimpleClass::getValue(SimpleClass *self)
{
 return *(unsigned int *)self;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
SimpleClass * SimpleClass::setValue(SimpleClass *this, int a2)
{
 SimpleClass *result; // rax

 result = this;
 *(unsigned int *)this = a2;
 return result;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
long long SimpleClass::compute(SimpleClass *this, int a2)
{
 int v2; // ebx

 v2 = a2 * *(unsigned int *)this;
 return v2 + (unsigned int)strlen((const char *)this + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3620 */
long long SimpleClass::getClassID(SimpleClass *self)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3630 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned long long a2)
{
 unsigned long long i; // [rsp+18h] [rbp-8h]

 *((unsigned long long *)this + 1) = a2;
 if ( a2 > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 *(unsigned long long *)this = operator new[](4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)this + 4 * i) = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
LifecycleClass::~LifecycleClass()
{
 if ( *(unsigned long long *)this )
 operator delete[](*(unsigned long long *)this);
 --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
long long LifecycleClass::getData(LifecycleClass *this, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)this + 1) )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned int *)(*(unsigned long long *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
long long LifecycleClass::getInstanceCount(LifecycleClass *this)
{
 return (unsigned int)LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x375A */
long long Base::virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x3788 */
void Base::~Base()
{
 *(unsigned long long *)this = &off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void Base::~Base()
{
 Base::~Base();
 operator delete(this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void Base::Base(Base *this)
{
 *(unsigned long long *)this = &off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void Derived::Derived(Derived *this, int a2)
{
 Base::Base(this);
 *(unsigned long long *)this = &off_8B20;
 *((unsigned int *)this + 2) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x382E */
long long Derived::virtual_func(Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
long long BaseA::funcA()
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void BaseA::~BaseA(void)
{
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void BaseA::~BaseA()
{
 this->~BaseA();
 operator delete(this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
long long BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void BaseB::~BaseB()
{
 *(unsigned long long *)this = &off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
long long `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void BaseA::BaseA(BaseA *this)
{
 *(unsigned long long *)this = &off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void BaseB::BaseB(BaseB *this)
{
 *(unsigned long long *)this = &off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA(this);
 BaseB::BaseB((MultiDerived *)((char *)this + 16));
 *(unsigned long long *)this = &off_8A78;
 *((unsigned long long *)this + 2) = &off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
long long VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 *(unsigned long long *)this = &off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
long long MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
long long `virtual thunk to'MiddleA::func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
long long MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
long long `virtual thunk to'MiddleB::func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
long long `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
long long `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 *(unsigned long long *)this = &off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void MiddleA::MiddleA(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void MiddleA::~MiddleA(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void MiddleB::MiddleB(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void MiddleB::~MiddleB(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 32));
 MiddleA::MiddleA(this, off_8940);
 MiddleB::MiddleB((DiamondDerived *)((char *)this + 16), off_8950);
 *(unsigned long long *)this = &off_88B8;
 *((unsigned long long *)this + 4) = &off_8920;
 *((unsigned long long *)this + 2) = &off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void Point::Point(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
long long Point::operator+(unsigned int *a1, unsigned int *a2)
{
 unsigned long long v3[2]; // [rsp+10h] [rbp-10h] BYREF

 v3[1] = __readfsqword(0x28u);
 Point::Point((Point *)v3, *a2 + *a1, a2[1] + a1[1]);
 return v3[0];
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
_BOOL8 Point::operator==(unsigned int *a1, unsigned int *a2)
{
 return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x3D80 */
unsigned int * Point::operator++(unsigned int *a1)
{
 ++*a1;
 ++a1[1];
 return a1;
}


// Template functions
template<typename T>
T template_max(T a1, T a2) {
    return (a1 > a2) ? a1 : a2;
}

template<typename T>
void template_swap(T* a1, T* a2) {
    T temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

// Template class declarations
template<typename T>
class Container {
public:
    Container();
    ~Container();
    long long getSize();
    long long get(int idx);
    void push(T value);
private:
    T data[10];
    int size;
};

template<>
class Container<int> {
public:
    Container();
    ~Container();
    long long getSize();
    long long get(int idx);
    void push(int value);
private:
    int data[10];
    int size;
};

template<>
class Container<double> {
public:
    Container();
    ~Container();
    long long getSize();
    long long get(int idx);
    void push(double value);
private:
    double data[10];
    int size;
};

// Stub implementations for missing std template infrastructure
// Note: These are simplified stubs for compilation only
namespace std {

// Forward declarations
template<typename... Types>
class tuple;

template<size_t I, typename T>
struct tuple_element;

// Primary template - base case
template<size_t I, typename Head, typename... Tail>
struct tuple_element<I, tuple<Head, Tail...>> {
    using type = typename tuple_element<I-1, tuple<Tail...>>::type;
};

// Specialization for index 0
template<typename Head, typename... Tail>
struct tuple_element<0, tuple<Head, Tail...>> {
    using type = Head;
};

// Specialization for empty tuple
template<size_t I>
struct tuple_element<I, tuple<>> {
    using type = void;
};

// Simplified tuple for our purposes
template<typename... Types>
struct tuple {};

template<size_t I, typename... Types>
using tuple_element_t = typename tuple_element<I, tuple<Types...>>::type;

// Simplified unique_ptr implementations
template<typename T, typename Deleter = void>
class unique_ptr;

template<typename T>
class unique_ptr<T[]>;

// Simplified default_delete
template<typename T>
struct default_delete;

// Simplified __uniq_ptr_impl
template<typename T, typename Deleter>
struct __uniq_ptr_impl {
    typedef T* pointer;
    typedef Deleter deleter_type;
    
    std::tuple<pointer, deleter_type> _M_t;
    
    __uniq_ptr_impl() : _M_t() {}
    __uniq_ptr_impl(pointer p) : _M_t(p, deleter_type()) {}
    
    pointer _M_ptr() { return std::get<0>(_M_t); }
    deleter_type& _M_deleter() { return std::get<1>(_M_t); }
};

// Simplified __uniq_ptr_data  
template<typename T, typename Deleter, bool = false, bool = false>
struct __uniq_ptr_data;

// Simplified tuple implementations
template<size_t I, typename... Types>
tuple_element_t<I, tuple<Types...>>& get(tuple<Types...>& t);

template<size_t I, typename... Types>
const tuple_element_t<I, tuple<Types...>>& get(const tuple<Types...>& t);

// Simplified tuple_impl
template<size_t I, typename... Types>
struct _Tuple_impl;

template<typename T>
struct _Head_base;

// Simplified forward
template<typename T>
T&& forward(T& t);

// Simplified move  
template<typename T>
typename std::remove_reference<T>::type&& move(T&& t);

} // namespace std


/* Function: _ZN9ContainerIiEC2Ev @ 0x3E3A */
long long Container<int>::Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 LODWORD(result) = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = result + 1;
 result = (int)result;
 *(unsigned int *)(a1 + 4LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
long long Container<int>::get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
long long Container<double>::Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 LODWORD(result) = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = result + 1;
 result = (int)result;
 *(double *)(a1 + 8LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
long long Container<double>::get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return *(unsigned long long *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3F92 */
long long std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3FBC */
long long std::unique_ptr<int>::unique_ptr(long long a1, long long a2)
{
 return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
long long RTTIBase::getType(RTTIBase *this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3FFA */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x400E */
long long RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4022 */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x4036 */
long long RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x404A */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 *(unsigned long long *)this = off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 *(unsigned long long *)this = off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x40B6 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned long long *)this = off_8860;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x40E4 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned long long *)this = off_8838;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4112 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x413C */
long long std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x4166 */
unsigned long long * std::unique_ptr<int>::~unique_ptr(long long a1)
{
 long long deleter; // rbx
 unsigned long long *v2; // rax
 unsigned long long *result; // rax
 unsigned long long *v4; // [rsp+18h] [rbp-18h]

 v4 = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 if ( *v4 )
 {
 deleter = std::unique_ptr<int>::get_deleter(a1);
 v2 = (unsigned long long *)std::move<int *&>(v4);
 std::default_delete<int>::operator()(deleter, *v2);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x41CE */
long long std::unique_ptr<int>::operator*(long long a1)
{
 return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x41F3 */
long long std::move<std::unique_ptr<int> &>(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4206 */
unsigned long long * std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *result; // rax

 std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x423E */
unsigned long long * std::tuple<int *,std::default_delete<int>>::tuple(unsigned long long *a1, unsigned long long *a2)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4268 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(unsigned long long *a1, long long a2)
{
 unsigned long long *v2; // rax
 unsigned long long *result; // rax

 v2 = (unsigned long long *)std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
 std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
 result = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x42B2 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x42DC */
long long std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
 long long a1,
 long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x4306 */
unsigned long long * std::unique_ptr<int []>::~unique_ptr(long long a1)
{
 long long deleter; // rax
 unsigned long long *result; // rax
 unsigned long long *v3; // [rsp+18h] [rbp-8h]

 v3 = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 if ( *v3 )
 {
 deleter = std::unique_ptr<int []>::get_deleter(a1);
 std::default_delete<int []>::operator()<int>(deleter, *v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x4362 */
long long std::unique_ptr<int []>::operator[](long long a1, long long a2)
{
 return std::unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x439A */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(long long a1, long long a2)
{
 unsigned long long *result; // rax

 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
 result = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x43D6 */
long long std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F4 */
long long std::unique_ptr<int>::get_deleter(long long a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4412 */
long long std::move<int *&>(long long a1)
{
 return a1;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4424 */
void std::default_delete<int>::operator()(long long a1, void *a2)
{
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4452 */
long long std::unique_ptr<int>::get(long long a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4470 */
long long std::move<std::tuple<int *,std::default_delete<int>> &>(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4482 */
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4496 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(long long a1, long long a2)
{
 unsigned long long *result; // rax

 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
 result = (unsigned long long *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x44D2 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x44F0 */
long long std::unique_ptr<int []>::get_deleter(long long a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x450E */
void std::default_delete<int []>::operator()<int>(long long a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4538 */
long long std::unique_ptr<int []>::get(long long a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4556 */
long long std::tuple<int *,std::default_delete<int>>::tuple<true,true>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4575 */
long long std::get<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4594 */
long long std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(long long a1)
{
 return std::get<1ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B2 */
long long std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x45D4 */
long long std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x45F3 */
long long std::get<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4612 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(long long a1)
{
 return std::get<1ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4630 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(long long a1)
{
 return *(unsigned long long *)std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x4652 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(long long a1)
{
 std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(a1);
 return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x467D */
long long std::__get_helper<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x469B */
long long std::get<1ul,int *,std::default_delete<int>>(long long a1)
{
 return std::__get_helper<1ul,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x46B9 */
long long std::get<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x46D8 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(long long a1)
{
 std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(a1);
 return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4703 */
long long std::__get_helper<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4721 */
long long std::get<1ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::__get_helper<1ul,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x473F */
long long std::get<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x475D */
long long std::forward<int *&>(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4770 */
long long std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4790 */
unsigned long long * std::_Head_base<0ul,int *,false>::_Head_base(unsigned long long *a1)
{
 unsigned long long *result; // rax

 result = a1;
 *a1 = 0;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x47AA */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x47C8 */
long long std::__get_helper<1ul,std::default_delete<int>>(long long a1)
{
 return std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x47E6 */
long long std::__get_helper<0ul,int *,std::default_delete<int>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4804 */
long long std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4823 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4841 */
long long std::__get_helper<1ul,std::default_delete<int []>>(long long a1)
{
 return std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x485F */
long long std::__get_helper<0ul,int *,std::default_delete<int []>>(long long a1)
{
 return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x487E */
unsigned long long * std::_Head_base<0ul,int *,false>::_Head_base<int *&>(unsigned long long *a1, long long a2)
{
 long long v2; // rdx
 unsigned long long *result; // rax

 v2 = *(unsigned long long *)std::forward<int *&>(a2);
 result = a1;
 *a1 = v2;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x48AC */
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x48BB */
long long std::_Head_base<0ul,int *,false>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x48CD */
long long std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x490A */
void std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4919 */
long long std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(long long a1)
{
 return std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(long long a1)
{
 return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4955 */
long long std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
long long std::_Head_base<0ul,int *,false>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4979 */
long long std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(long long a1)
{
 return a1;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 *(unsigned long long *)this = off_8838;
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 *(unsigned long long *)this = off_8860;
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 *(unsigned long long *)this = &off_88B8;
 *((unsigned long long *)this + 4) = &off_8920;
 *((unsigned long long *)this + 2) = &off_88E8;
 MiddleB::~MiddleB((DiamondDerived *)((char *)this + 16), off_8950);
 MiddleA::~MiddleA(this, off_8940);
 VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 32));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4B17 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4B21 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x4B2E */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 *(unsigned long long *)this = &off_8A78;
 *((unsigned long long *)this + 2) = &off_8AA8;
 BaseB::~BaseB((MultiDerived *)((char *)this + 16));
 BaseA::~BaseA(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void Derived::~Derived(Derived *this)
{
 *(unsigned long long *)this = &off_8B20;
 Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this, 0x10u);
}


/* Function: .term_proc @ 0x4C1C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x9048 */

/* FAILED to decompile: printf @ 0x9050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9058 */

/* FAILED to decompile: strlen @ 0x9060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9068 */

/* FAILED to decompile: strncpy @ 0x9070 */

/* FAILED to decompile: __libc_start_main @ 0x9080 */

/* FAILED to decompile: __cxa_atexit @ 0x9088 */

/* FAILED to decompile: _Znwm @ 0x9090 */

/* FAILED to decompile: _ZdlPvm @ 0x9098 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90A0 */

/* FAILED to decompile: __stack_chk_fail @ 0x90A8 */

/* FAILED to decompile: __dynamic_cast @ 0x90B0 */

/* FAILED to decompile: _ZdaPv @ 0x90B8 */

/* FAILED to decompile: strcmp @ 0x90C8 */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x90D0 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90E0 */

/* FAILED to decompile: puts @ 0x90E8 */

/* FAILED to decompile: __cxa_end_catch @ 0x90F0 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90F8 */

/* FAILED to decompile: __cxa_throw @ 0x9100 */

/* FAILED to decompile: _Unwind_Resume @ 0x9110 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x9118 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x9120 */

/* FAILED to decompile: __gmon_start__ @ 0x9130 */
