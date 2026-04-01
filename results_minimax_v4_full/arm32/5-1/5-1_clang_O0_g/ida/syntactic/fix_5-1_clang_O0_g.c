/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library declarations */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <new>
#include <typeinfo>
#include <ios>
#include <iostream>
#include <string>

struct type_info {};

/* Required declarations for runtime functions */
int call_weak_fn(void);
void _dso_handle(void);
void JUMPOUT(int);
extern void *__ioinit;
int _cxa_atexit(void (*)(void *), void *, void *);

/* Using namespace std for standard library types */
using namespace std;

/* SimpleClass definition */
struct SimpleClass {
 int value;
 char name[32];
 SimpleClass(int v, const char *n);
 void setValue(int v);
 int getValue() const;
 size_t compute(int x) const;
 static int getClassID();
};

/* LifecycleClass definition */
struct LifecycleClass {
 size_t size;
 int *data;
 static int instance_count;
 LifecycleClass(size_t s);
 ~LifecycleClass();
 int getData(size_t idx) const;
 static int getInstanceCount();
};
int LifecycleClass::instance_count = 0;

/* Base class definition */
struct Base {
 int (**_vptr$Base)(void);
 virtual ~Base();
 virtual int virtual_func(int x);
 virtual const char *getName() const;
};

/* Derived class definition */
struct Derived : Base {
 int multiplier;
 Derived(int m);
 virtual ~Derived();
 virtual int virtual_func(int x) override;
 virtual const char *getName() const;
};

/* BaseA class definition */
struct BaseA {
 int (**_vptr$BaseA)(void);
 virtual ~BaseA();
 virtual int funcA();
};

/* BaseB class definition */
struct BaseB {
 int (**_vptr$BaseB)(void);
 virtual ~BaseB();
 virtual int funcB();
};

/* MultiDerived class definition */
struct MultiDerived : BaseA, BaseB {
 int dataA;
 int dataB;
 int (**_vptr$BaseA)(void);
 int (**_vptr$BaseB)(void);
 MultiDerived();
 virtual ~MultiDerived();
 virtual int funcA() override;
 virtual int funcB() override;
};

/* VirtualBase class definition */
struct VirtualBase {
 int (**_vptr$VirtualBase)(void);
 virtual ~VirtualBase();
 virtual int func();
};

/* MiddleA class definition */
struct MiddleA : VirtualBase {
 int dataA;
 int (**_vptr$MiddleA)(void);
 MiddleA(int (***vtt)(void));
 virtual ~MiddleA();
 virtual int func() override;
};

/* MiddleB class definition */
struct MiddleB : VirtualBase {
 int dataB;
 int (**_vptr$MiddleB)(void);
 MiddleB(int (***vtt)(void));
 virtual ~MiddleB();
 virtual int func() override;
};

/* Point class definition */
struct Point {
 int x;
 int y;
 Point(int _x, int _y);
 Point(const Point &other);
 Point operator+(const Point &other) const;
 bool operator==(const Point &other) const;
 Point operator++();
};

/* Template function declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

/* Container template class definition */
template<typename T>
struct Container {
 T data[10];
 int size;
 Container();
 void push(T value);
 T get(int idx) const;
 int getSize() const;
};

/* DiamondDerived class definition */
struct DiamondDerived : MiddleA, MiddleB {
 int (**_vptr$MiddleA)(void);
 int (**_vptr$MiddleB)(void);
 DiamondDerived();
 virtual ~DiamondDerived();
 virtual int func() override;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xD2C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D38 @ 0xD38 */
void sub_D38()
{
 JUMPOUT(0);
}


/* Function: __ios_base_Init_destructor @ 0xED0 */
void __ios_base_Init_destructor(void *arg)
{
 ((std::ios_base::Init *)arg)->~Init();
}

/* Function: __cxx_global_var_init @ 0xE84 */
void _cxx_global_var_init()
{
 new (&std::__ioinit) std::ios_base::Init();
 _cxa_atexit((void (*)(void *))&__ios_base_Init_destructor, &std::__ioinit, (void *)&_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xED0 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x104C */
int test_cpp_member_func()
{
 int v1; // [sp+Ch] [bp-2Ch]
 int Value; // [sp+10h] [bp-28h]
 SimpleClass v3(5, "Test");

 v3.setValue(10);
 Value = v3.getValue();
 v1 = v3.compute(3);
 return Value + v1 + SimpleClass::getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x10C8 */
int test_cpp_constructor()
{
 int Data; // [sp+8h] [bp-18h]
 LifecycleClass obj(5); // [sp+14h] [bp-Ch] BYREF
 int result; // [sp+1Ch] [bp-4h]

 result = 0;
 Data = obj.getData(2u);
 result += Data;
 result += obj.getInstanceCount();
 return result + 1000 * obj.getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1174 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x11AC */
int test_cpp_virtual_func()
{
 int v1; // [sp+0h] [bp-40h]
 int v2; // [sp+18h] [bp-28h]
 int r2; // [sp+24h] [bp-1Ch]
 int r1; // [sp+28h] [bp-18h]
 Derived derived(3); // [sp+34h] [bp-Ch] BYREF
 Base base_obj; // [sp+3Ch] [bp-4h] BYREF

 r1 = base_obj.virtual_func(5);
 r2 = derived.virtual_func(5);
 v2 = call_virtual_func(&base_obj, 5);
 v1 = r1 + r2 + v2 + call_virtual_func(&derived, 5);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int test_cpp_multiple_inheritance()
{
 int v1; // [sp+0h] [bp-40h]
 MultiDerived *v2; // [sp+10h] [bp-30h]
 int r1; // [sp+24h] [bp-1Ch]
 MultiDerived obj; // [sp+30h] [bp-10h] BYREF

 new (&obj) MultiDerived();
 obj.dataA = 100;
 obj.dataB = 200;
 v2 = 0;
 if ( &obj )
 v2 = (MultiDerived *)((char *)&obj + sizeof(BaseA));
 r1 = ((int ( *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
 v1 = r1 + (*(int ( **)(MultiDerived *))v2->_vptr$BaseA)(v2) + (&obj != v2);
 obj.~MultiDerived();
 return v1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13C0 */
int test_cpp_diamond_inheritance()
{
 int v1; // [sp+0h] [bp-40h]
 int (*v2)(unsigned int); // [sp+10h] [bp-30h]
 int v3; // [sp+20h] [bp-20h]
 DiamondDerived var18; // [sp+28h] [bp-18h] BYREF

 new (&var18) DiamondDerived();
 *(int *)((char *)&var18.dataA + *((unsigned int *)var18._vptr$MiddleA - 3)) = 50;
 v2 = 0;
 if ( &var18 )
 v2 = (int (*)(unsigned int))((char *)&var18 + *((unsigned int *)var18._vptr$MiddleA - 3));
 v3 = v2((unsigned int)50);
 *(int *)((char *)&var18.dataA + *((unsigned int *)var18._vptr$MiddleA - 3)) = 100;
 v1 = v3 + (**v2)((unsigned int)100);
 var18.~DiamondDerived();
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x14C4 */
int test_cpp_operator_overload()
{
 int result; // r0
 bool v1; // [sp+Fh] [bp-19h]
 Point v2{0, 0}; // [sp+10h] [bp-18h] BYREF
 Point p2{0, 0}; // [sp+18h] [bp-10h] BYREF
 Point p1{1, 2}; // [sp+20h] [bp-8h] BYREF

 Point p3{3, 4};
 new (&p2) Point(p3);
 new (&v2) Point(p1 + p2);
 v1 = (p1 == p2);
 ++v2;
 result = v2.x + v2.y + 10;
 if ( v1 )
 return v2.x + v2.y;
 return result;
}


/* Template specializations - must be declared before use */
template<>
int template_max<int>(int a, int b);

template<>
void template_swap<int>(int *a, int *b);

/* Function: _Z22test_cpp_template_funcv @ 0x1550 */
int test_cpp_template_func()
{
 int b; // [sp+8h] [bp-18h] BYREF
 int a; // [sp+Ch] [bp-14h] BYREF
 double v3; // [sp+10h] [bp-10h]
 int r1; // [sp+1Ch] [bp-4h]

 r1 = template_max<int>(3, 7);
 v3 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return r1 + (int)v3 + a + b;
}

/* Function: _Z12template_maxIiET_S0_S0_ @ 0x29B8 */
template<>
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z23test_cpp_template_classv @ 0x15E8 */
int test_cpp_template_class()
{
 double v1; // [sp+10h] [bp-98h]
 Container<double> v2; // [sp+18h] [bp-90h] BYREF
 int r2; // [sp+74h] [bp-34h]
 int r1; // [sp+78h] [bp-30h]
 Container<int> int_container; // [sp+7Ch] [bp-2Ch] BYREF

 new (&int_container) Container<int>();
 int_container.push(10);
 int_container.push(20);
 int_container.push(30);
 r1 = int_container.get(0);
 r2 = int_container.getSize();
 new (&v2) Container<double>();
 v2.push(3.14);
 v1 = v2.get(0);
 return r1 + r2 + (int)v1;
}


/* Lambda class for test_cpp_lambda()::$_0 */
struct Lambda$_0 {
 template<typename T, typename U>
 void operator()(T a, U b) const {
 }
};

/* Lambda class for test_cpp_lambda()::$_1 */
struct Lambda$_1 {
 int capture_by_value;
 int *capture_by_ref;
 int operator()(int x) const {
  *capture_by_ref += 5;
  return *capture_by_ref + x * capture_by_value;
 }
};

/* Function: _Z15test_cpp_lambdav @ 0x16B4 */
int test_cpp_lambda()
{
 int v0; // r0
 int v2; // [sp+10h] [bp-18h]
 Lambda$_0 v3; // [sp+14h] [bp-14h] BYREF
 Lambda$_1 lambda1; // [sp+18h] [bp-10h] BYREF
 int capture_by_ref; // [sp+20h] [bp-8h] BYREF
 int capture_by_value; // [sp+24h] [bp-4h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda1.capture_by_value = 10;
 lambda1.capture_by_ref = &capture_by_ref;
 v2 = lambda1.operator()(3);
 v3.operator()<int,int>(10, 20);
 return v2 + v0;
}








/* Function: _Z18test_cpp_exceptionv @ 0x1784 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18F4 */
char *test_cpp_smart_ptr()
{
 int *v0; // r0
 std::unique_ptr<int> *v1; // r0
 char *v3; // [sp+0h] [bp-58h]
 std::__add_lvalue_reference_helper<int,true>::type v4; // [sp+8h] [bp-50h]
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer v5; // [sp+Ch] [bp-4Ch]
 int *__p; // [sp+1Ch] [bp-3Ch]
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> v7; // [sp+34h] [bp-24h] BYREF
 int r2; // [sp+3Ch] [bp-1Ch]
 std::unique_ptr<int[]> v9; // [sp+40h] [bp-18h] BYREF
 std::unique_ptr<int> ptr2; // [sp+48h] [bp-10h] BYREF
 std::unique_ptr<int> __t; // [sp+54h] [bp-4h] BYREF

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(&__t, v0);
 *std::unique_ptr<int>::operator*(&__t) = 200;
 v1 = std::move<std::unique_ptr<int> &>(&__t);
 std::unique_ptr<int>::unique_ptr(&ptr2, v1);
 v9._M_t._M_t._M_head_impl = (int *)*std::unique_ptr<int>::operator*(&ptr2);
 __p = (int *)operator new[](0x14u);
 *__p = 1;
 __p[1] = 2;
 __p[2] = 3;
 __p[3] = 4;
 __p[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(&v9, __p);
 r2 = *std::unique_ptr<int []>::operator[](&v9, 2u);
 v5 = (std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer)operator new(4u);
 *v5 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
 &v7,
 v5,
 (const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)&v7._M_t._M_t.std::_Head_base<0U,int *,false>);
 v4 = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(&v7);
 v3 = (char *)v9._M_t._M_t._M_head_impl + r2 + *v4;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(&v7);
 std::unique_ptr<int []>::~unique_ptr(&v9);
 std::unique_ptr<int>::~unique_ptr(&ptr2);
 std::unique_ptr<int>::~unique_ptr(&__t);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1ACC */
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


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x1B10 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(
 const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x1B44 */
void std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 int **v1; // r0
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *deleter; // [sp+0h] [bp-18h]
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer *__t; // [sp+Ch] [bp-Ch]

 __t = std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(&this->_M_t);
 if ( *__t )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(this);
 v1 = std::move<int *&>(__t);
 test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
 }
 *__t = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x1BD4 */
int test_cpp_rtti()
{
 const char *v0; // r0
 const RTTIDerivedB *v2; // [sp+Ch] [bp-3Ch]
 const RTTIDerivedA *v3; // [sp+14h] [bp-34h]
 RTTIDerivedA *v4; // [sp+24h] [bp-24h]
 RTTIDerivedB *v5; // [sp+2Ch] [bp-1Ch]
 int result; // [sp+3Ch] [bp-Ch]
 int resulta; // [sp+3Ch] [bp-Ch]

 v4 = (RTTIDerivedA *)operator new(4u);
 v4->_vptr$RTTIBase = 0;
 RTTIDerivedA::RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 v5->_vptr$RTTIBase = 0;
 RTTIDerivedB::RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 _cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info **)v4->_vptr$RTTIBase - 1),
 (const std::type_info *)&`typeinfo for'RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 _cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info **)v5->_vptr$RTTIBase - 1),
 (const std::type_info *)&`typeinfo for'RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const RTTIDerivedA *)_dynamic_cast(
 v4,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA::derivedA_data(v3);
 v2 = (const RTTIDerivedB *)_dynamic_cast(
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


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E74 */
void test_cpp_oo_features()
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
}


/* Function: sub_1F40 @ 0x1F40 */
// positive sp value has been detected, the output may be wrong!
int sub_1F40(int a1)
{
 char *v1; // r0
 int v2; // r0
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
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 std::__uniq_ptr_data<int,(lambda at src_5-1_cpp:445:20),true,false> *this,
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer a2,
 const const struct {unsigned char gap0;} *a3)
{
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 this,
 a2,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x201C */
void std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this,
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer __p,
 std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *__d)
{
 const const struct {unsigned char gap0;} *v3; // r0
 int *__a1; // [sp+8h] [bp-8h] BYREF
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *thisa; // [sp+Ch] [bp-4h]

 thisa = this;
 __a1 = __p;
 v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(__d);
 std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 &this->_M_t,
 &__a1,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x2064 */
void std::forward<test_cpp_smart_ptr(void)::$_2 const&>(
 std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *__t)
{
 ;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2078 */
void std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
 std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *this,
 int **__a1,
 std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *__a2)
{
 const const struct {unsigned char gap0;} *v3; // r0
 int **__head; // [sp+4h] [bp-14h]

 __head = std::forward<int *&>(__a1);
 std::forward<test_cpp_smart_ptr(void)::$_2 const&>(__a2);
 std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 this,
 __head,
 v3);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x20D4 */
void std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
 std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *this,
 int **__head,
 std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *__tail)
{
 const const struct {unsigned char gap0;} *v3; // r0
 int **v4; // r0

 std::forward<test_cpp_smart_ptr(void)::$_2 const&>(__tail);
 std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(this, v3);
 v4 = std::forward<int *&>(__head);
 std::_Head_base<0u,int *,false>::_Head_base<int *&>((std::_Head_base<0U,int *,false> *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x212C */
void std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(
 std::_Tuple_impl<1U,(lambda at src_5-1_cpp:445:20)> *this,
 const const struct {unsigned char gap0;} *__head)
{
 std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2160 */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(
 std::_Head_base<1U,(lambda at src_5-1_cpp:445:20),true> *this,
 const const struct {unsigned char gap0;} *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2178 */
std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer * std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x219C */
std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type * std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(
 std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return (std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x21D0 */
void test_cpp_smart_ptr(void)::$_2::operator()(const const struct {unsigned char gap0;} *this, int *p)
{
 *p = -1;
 if ( p )
 operator delete(p);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x221C */
std::__tuple_element_t<0U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2240 */
int ** std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2264 */
int ** std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(
 std::_Head_base<0U,int *,false> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x2288 */
std::__tuple_element_t<1U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(
 std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x22AC */
std::__tuple_element_t<1U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(
 std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return (std::__tuple_element_t<1U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > *)std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x22D0 */
struct {unsigned char gap0;} * std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(
 std::_Tuple_impl<1U,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x22F4 */
struct {unsigned char gap0;} * std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(
 std::_Tuple_impl<1U,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2318 */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(
 std::_Head_base<1U,(lambda at src_5-1_cpp:445:20),true> *__b)
{
 ;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x232C */
std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(
 const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2360 */
std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(
 const std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
 return *std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2388 */
const std::__tuple_element_t<0U,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > * std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 const std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x23AC */
int *const * std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(
 const std::_Tuple_impl<0U,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x23D0 */
int *const * std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(
 const std::_Head_base<0U,int *,false> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x23F4 */
void SimpleClass::SimpleClass(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2444 */
void SimpleClass::setValue(SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2464 */
int SimpleClass::getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x247C */
size_t SimpleClass::compute(const SimpleClass *this, int x)
{
 return strlen(this->name) + this->value * x;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x24C4 */
int SimpleClass::getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x24D0 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, size_t s)
{
 unsigned int v2; // r0
 size_t i; // [sp+8h] [bp-10h]

 this->size = s;
 v2 = 4 * s;
 if ( s != (s & 0x3FFFFFFF) )
 v2 = -1;
 this->data = (int *)operator new[](v2);
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x259C */
int LifecycleClass::getData(const LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x25F4 */
int LifecycleClass::getInstanceCount()
{
 return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2604 */
void LifecycleClass::~LifecycleClass(LifecycleClass *this)
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x266C */
void Base::Base(Base *this)
{
 this->_vptr$Base = (int (**)(void))&off_14C48;
}


/* Function: _ZN7DerivedC2Ei @ 0x2694 */
void Derived::Derived(Derived *this, int m)
{
 Base::Base(this);
 this->_vptr$Base = (int (**)(void))&off_14C68;
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x26E0 */
int Base::virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x26FC */
int Derived::virtual_func(Derived *this, int x)
{
 return x * this->multiplier;
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
 BaseB::BaseB(&this->BaseB);
 this->_vptr$BaseA = (int (**)(void))&off_14C8C;
 this->_vptr$BaseB = (int (**)(void))&off_14CA4;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x27B4 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB(&this->BaseB);
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x27EC */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((VirtualBase *)&this->MiddleB);
 MiddleA::MiddleA(this, (void **)off_14D58);
 MiddleB::MiddleB((MiddleB *)(&this->dataA + 1), (void **)off_14D60);
 this->_vptr$MiddleA = (int (**)(void))&off_14D14;
 this->_vptr$MiddleB = (int (**)(void))&off_14D48;
 *(&this->dataA + 1) = (int)&off_14D2C;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2870 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this, (void **)&`VTT for'DiamondDerived);
 VirtualBase::~VirtualBase((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x28B4 */
void Point::Point(Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x28E0 */
void Point::operator+(Point *__return_ptr retstr, const Point *this, const Point *other)
{
 Point::Point(retstr, this->x + other->x, this->y + other->y);
}


/* Function: _ZNK5PointeqERKS_ @ 0x2924 */
int Point::operator==(const Point *this, const Point *other)
{
 int v3; // [sp+4h] [bp-Ch]

 LOBYTE(v3) = 0;
 if ( this->x == other->x )
 v3 = other->y - this->y + (this->y == other->y) + this->y - other->y;
 return v3 & 1;
}


/* Function: _ZN5PointppEv @ 0x298C */
Point * Point::operator++(Point *this)
{
 ++this->x;
 ++this->y;
 return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x29B8 */
template<>
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x29FC */
template<>
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2A74 */
template<>
void template_swap<int>(int *a, int *b)
{
 int v2; // [sp+0h] [bp-Ch]

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2AB0 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2ACC */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // r2

 if ( this->size <= 9 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2B14 */
int Container<int>::get(const Container<int> *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2B7C */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2B94 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2BB0 */
void Container<double>::push(Container<double> *this, double value)
{
 int v3; // [sp+Ch] [bp-Ch]

 v3 = HIDWORD(value);
 if ( this->size <= 9 )
 {
 HIDWORD(value) = this->size;
 this->size = HIDWORD(value) + 1;
 LODWORD(this->data[HIDWORD(value)]) = LODWORD(value);
 HIDWORD(this->data[HIDWORD(value)]) = v3;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C04 */
double Container<double>::get(const Container<double> *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7C */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x2C94 */
void std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(
 std::unique_ptr<int> *this,
 std::unique_ptr<int>::pointer __p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x2CD0 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int>::operator*(
 const std::unique_ptr<int> *this)
{
 return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x2D04 */
void std::move<std::unique_ptr<int> &>(std::unique_ptr<int> *__t)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x2D18 */
void std::unique_ptr<int>::unique_ptr(std::unique_ptr<int> *this, std::unique_ptr<int> *a2)
{
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x2D4C */
void std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
 std::unique_ptr<int[]> *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x2D88 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int []>::operator[](
 const std::unique_ptr<int[]> *this,
 std::size_t __i)
{
 return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC8 */
void std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int[]> *this)
{
 const std::default_delete<int[]> *deleter; // r0
 int **v3; // [sp+4h] [bp-Ch]

 v3 = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
 if ( *v3 )
 {
 deleter = std::unique_ptr<int []>::get_deleter(this);
 std::default_delete<int []>::operator()<int>(deleter, *v3);
 }
 *v3 = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2E3C */
void std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *this)
{
 int **v1; // r0
 std::default_delete<int> *deleter; // [sp+4h] [bp-14h]
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__t; // [sp+Ch] [bp-Ch]

 __t = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
 if ( *__t )
 {
 deleter = std::unique_ptr<int>::get_deleter(this);
 v1 = std::move<int *&>(__t);
 std::default_delete<int>::operator()(deleter, *v1);
 }
 *__t = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x2EC0 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_14EC4;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x2F00 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))off_14EEC;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x2F40 */
bool std::type_info::operator==(const std::type_info *this, const std::type_info *__arg)
{
 bool v3; // [sp+4h] [bp-14h]
 bool v4; // [sp+Ch] [bp-Ch]

 v4 = 1;
 if ( *((unsigned int *)this + 1) != *((unsigned int *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this + 1) != 42 )
 return strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
 return v3;
 }
 return v4;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x2FE0 */
int RTTIDerivedA::derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x2FF4 */
int RTTIDerivedB::derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3008 */
const char * std::type_info::name(const std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned int *)this + 1) + 1);
 else
 return (const char *)*((unsigned int *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x305C */
const char * Base::getName(const Base *this)
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
const char * Derived::getName(const Derived *this)
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
 this->_vptr$BaseA = (int (**)(void))&off_14CE8;
}


/* Function: _ZN5BaseBC2Ev @ 0x311C */
void BaseB::BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_14CFC;
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
void `non-virtual thunk to'MultiDerived::funcB(int a1)
{
 MultiDerived::funcB((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x31B4 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x31D0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
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
 this->_vptr$VirtualBase = (int (**)(void))&off_14E38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x32C0 */
void MiddleA::MiddleA(MiddleA *this, int (***vtt)(void))
{
 this->_vptr$MiddleA = *vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned int *)this->_vptr$MiddleA - 3)) = vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x32F4 */
void MiddleB::MiddleB(MiddleB *this, int (***vtt)(void))
{
 this->_vptr$MiddleB = *vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned int *)this->_vptr$MiddleB - 3)) = vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x3328 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x3350 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this, (void **)`VTT for'MiddleA);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataA + 1));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3394 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x33C4 */
void `virtual thunk to'MiddleA::func(unsigned int *a1)
{
 MiddleA::func((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x33E4 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3408 */
void `virtual thunk to'MiddleA::~MiddleA(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3428 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3450 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this, (void **)`VTT for'MiddleB);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataB + 1));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3494 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x34C4 */
void `virtual thunk to'MiddleB::func(unsigned int *a1)
{
 MiddleB::func((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x34E4 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3508 */
void `virtual thunk to'MiddleB::~MiddleB(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3528 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3550 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3580 */
void `non-virtual thunk to'DiamondDerived::func(int a1)
{
 DiamondDerived::func((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3598 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x35B4 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x35CC */
void `virtual thunk to'DiamondDerived::func(unsigned int *a1)
{
 DiamondDerived::func((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x35EC */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3610 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
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
void MiddleA::~MiddleA(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x36A0 */
void MiddleB::~MiddleB(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x36B8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, void **vtt)
{
 MiddleB::~MiddleB((MiddleB *)(&this->dataA + 1), vtt + 3);
 MiddleA::~MiddleA(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3708 */
void std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x373C */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
 std::tuple<int *,std::default_delete<int> > *v2; // r0

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
 std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x379C */
void std::move<std::tuple<int *,std::default_delete<int>> &>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 ;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x37B0 */
void std::tuple<int *,std::default_delete<int>>::tuple(
 std::tuple<int *,std::default_delete<int> > *this,
 std::tuple<int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x37E4 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x3808 */
void _clang_call_terminate(void *a1)
{
 _cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3810 */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this,
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this, a2);
 *(unsigned int *)&this->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0 = *(unsigned int *)&a2->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x3850 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this,
 std::_Tuple_impl<1U,std::default_delete<int> > *__in)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3868 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x388C */
int ** std::__get_helper<0u,int *,std::default_delete<int>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x38B0 */
int ** std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(std::_Head_base<0U,int *,false> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x38D4 */
void std::_Head_base<0u,int *,false>::_M_head(std::_Head_base<0U,int *,false> *__b)
{
 ;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x38E8 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_14ED8;
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
int RTTIDerivedA::getType(const RTTIDerivedA *this)
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
int RTTIBase::getType(const RTTIBase *this)
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
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x3A48 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x3A7C */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x3AC8 */
void std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3AFC */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3B30 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this)
{
 std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3B5C */
void std::_Head_base<0u,int *,false>::_Head_base(std::_Head_base<0U,int *,false> *this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3B78 */
void std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(
 std::_Head_base<1U,std::default_delete<int>,true> *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3B8C */
std::unique_ptr<int>::deleter_type * std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x3BC0 */
void std::default_delete<int>::operator()(const std::default_delete<int> *this, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3C00 */
void std::move<int *&>(int **__t)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3C14 */
std::default_delete<int> * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return std::get<1u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3C38 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int> > > * std::get<1u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3C5C */
std::default_delete<int> * std::__get_helper<1u,std::default_delete<int>>(
 std::_Tuple_impl<1U,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C80 */
std::default_delete<int> * std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CA4 */
void std::_Head_base<1u,std::default_delete<int>,true>::_M_head(
 std::_Head_base<1U,std::default_delete<int>,true> *__b)
{
 ;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x3CB8 */
std::unique_ptr<int>::pointer std::unique_ptr<int>::get(const std::unique_ptr<int> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3CEC */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return *std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3D14 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 const std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3D38 */
int *const * std::__get_helper<0u,int *,std::default_delete<int>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3D5C */
int *const * std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
 const std::_Head_base<0U,int *,false> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3D80 */
void std::_Head_base<0u,int *,false>::_M_head(const std::_Head_base<0U,int *,false> *__b)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x3D94 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3DC8 */
void std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x3E14 */
void std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3E48 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x3E6C */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3EA0 */
void std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *this)
{
 std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3ECC */
void std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(
 std::_Head_base<1U,std::default_delete<int[]>,true> *this)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3EE0 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3F04 */
int ** std::__get_helper<0u,int *,std::default_delete<int []>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3F28 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(std::_Head_base<0U,int *,false> *__t)
{
 std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3F4C */
std::unique_ptr<int[]>::deleter_type * std::unique_ptr<int []>::get_deleter(std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x3F80 */
void std::default_delete<int []>::operator()<int>(const std::default_delete<int[]> *this, int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x3FC0 */
std::default_delete<int[]> * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<1u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3FE4 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int[]> > > * std::get<1u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4008 */
std::default_delete<int[]> * std::__get_helper<1u,std::default_delete<int []>>(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x402C */
std::default_delete<int[]> * std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4050 */
void std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(
 std::_Head_base<1U,std::default_delete<int[]>,true> *__b)
{
 ;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4064 */
std::unique_ptr<int[]>::pointer std::unique_ptr<int []>::get(const std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4098 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x40C0 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 const std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x40E4 */
int *const * std::__get_helper<0u,int *,std::default_delete<int []>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4108 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
 const std::_Head_base<0U,int *,false> *__t)
{
 std::_Head_base<0u,int *,false>::_M_head(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x412C */
void std::forward<int *&>(std::remove_reference<int *&>::type *__t)
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4140 */
void std::_Head_base<0u,int *,false>::_Head_base<int *&>(std::_Head_base<0U,int *,false> *this, int **__h)
{
 int **v2; // r0

 std::forward<int *&>(__h);
 this->_M_head_impl = *v2;
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
