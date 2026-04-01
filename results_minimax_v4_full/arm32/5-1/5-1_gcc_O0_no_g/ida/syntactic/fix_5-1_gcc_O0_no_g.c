/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O0_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
typedef int bool;
#define true 1
#define false 0

/* Class forward declarations */
struct SimpleClass;
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct Container_int;
struct Container_double;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct MiddleMiddleB;

/* SimpleClass definition */
struct SimpleClass {
 int value;
 char name[32];
 SimpleClass(int v, const char *n);
 void setValue(int v);
 int getValue() const;
 int compute(int x) const;
 int getClassID() const;
};

/* LifecycleClass definition */
struct LifecycleClass {
 unsigned int *data;
 unsigned int size;
 static int instance_count;
 LifecycleClass(unsigned int s);
 ~LifecycleClass();
 int getData(unsigned int idx) const;
 static int getInstanceCount();
};

/* Base class definition */
struct Base {
 int (**vtable)(Base*, int);
 Base();
 virtual ~Base();
 virtual int virtual_func(int x);
 const char* getName() const;
};

/* Derived class definition */
struct Derived : Base {
 int derived_value;
 Derived(int v);
 virtual ~Derived();
 virtual int virtual_func(int x);
 const char* getName() const;
};

/* BaseA for multiple inheritance */
struct BaseA {
 int (*vtable[2])();
 BaseA();
 virtual ~BaseA();
 virtual int funcA();
};

/* BaseB for multiple inheritance */
struct BaseB {
 int (*vtable[2])();
 BaseB();
 virtual ~BaseB();
 virtual int funcB();
};

/* MultiDerived class definition */
struct MultiDerived : BaseA, BaseB {
 int (*vtableA[2])();
 int (*vtableB[2])();
 MultiDerived();
 virtual ~MultiDerived();
 virtual int funcA();
 virtual int funcB();
};

/* VirtualBase for diamond inheritance */
struct VirtualBase {
 int (*vtable[1])();
 VirtualBase();
 virtual ~VirtualBase();
 virtual int func();
};

/* MiddleA for diamond inheritance */
struct MiddleA : virtual VirtualBase {
 unsigned int* vtable_ptr;
 MiddleA(unsigned int* vt);
 virtual ~MiddleA();
 virtual int func();
};

/* MiddleB for diamond inheritance */
struct MiddleB : virtual VirtualBase {
 unsigned int* vtable_ptr;
 MiddleB(unsigned int* vt);
 virtual ~MiddleB();
 virtual int func();
};

/* DiamondDerived class definition */
struct DiamondDerived : MiddleA, MiddleMiddleB {
 int (*vtable[3])();
 DiamondDerived();
 virtual ~DiamondDerived();
 virtual int func();
};

/* MiddleMiddleB for diamond inheritance */
struct MiddleMiddleB : virtual VirtualBase {
 unsigned int* vtable_ptr;
 MiddleMiddleB(unsigned int* vt);
 virtual ~MiddleMiddleB();
 virtual int func();
};

/* Point class for operator overloading */
struct Point {
 int x;
 int y;
 Point(int _x, int _y);
 Point operator+(const Point& other) const;
 bool operator==(const Point& other) const;
 Point& operator++();
};

/* Container template class definition - using explicit structs instead of templates */
struct Container_int {
 int arr[10];
 int size;
 Container_int();
 void push(int value);
 int get(int idx) const;
 int getSize() const;
};

struct Container_double {
 double arr[10];
 int size;
 Container_double();
 void push(double v1, unsigned int v2, unsigned int v3);
 double get(int idx) const;
 int getSize() const;
};

/* RTTI classes */
struct RTTIBase {
 int (*vtable[1])();
 RTTIBase();
 virtual ~RTTIBase();
 virtual int getType() const;
};

struct RTTIDerivedA : RTTIBase {
 RTTIDerivedA();
 virtual ~RTTIDerivedA();
 virtual int getType() const;
 int derivedA_data() const;
};

struct RTTIDerivedB : RTTIBase {
 RTTIDerivedB();
 virtual ~RTTIDerivedB();
 virtual int getType() const;
 int derivedB_data() const;
};

/* Template function definitions - using explicit instantiations instead */
int template_max_int(int a, int b) {
 return (a > b) ? a : b;
}

double template_max_double(double a, double b) {
 return (a > b) ? a : b;
}

void template_swap_int(int *a, int *b) {
 int tmp = *a;
 *a = *b;
 *b = tmp;
}

/* Function: .init_proc @ 0x10A5C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10A68 @ 0x10A68 */
void sub_10A68()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10CC4 */
int test_cpp_member_func(void)
{
 int Value; // [sp+4h] [bp-38h]
 SimpleClass *v2; // [sp+8h] [bp-34h]
 unsigned char v3[36]; // [sp+10h] [bp-2Ch] BYREF

 SimpleClass::SimpleClass((SimpleClass *)v3, 5, "Test");
 SimpleClass::setValue((SimpleClass *)v3, 10);
 Value = SimpleClass::getValue((SimpleClass *)v3);
 v2 = (SimpleClass *)SimpleClass::compute((SimpleClass *)v3, 3);
 return (int)v2 + Value + SimpleClass::getClassID(v2);
}


/* Function: _Z20test_cpp_constructorv @ 0x10D74 */
char *test_cpp_constructor(void)
{
 LifecycleClass *v0; // r0
 LifecycleClass *Data; // [sp+0h] [bp-14h]
 char *v3; // [sp+0h] [bp-14h]
 unsigned char v4[8]; // [sp+4h] [bp-10h] BYREF

 LifecycleClass::LifecycleClass((LifecycleClass *)v4, 5u);
 Data = (LifecycleClass *)LifecycleClass::getData((LifecycleClass *)v4, 2u);
 v3 = (char *)Data + LifecycleClass::getInstanceCount(Data);
 LifecycleClass::~LifecycleClass((LifecycleClass *)v4);
 return &v3[1000 * LifecycleClass::getInstanceCount(v0)];
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10E48 */
int call_virtual_func(unsigned int (*(*a1)(unsigned int, int)), int a2)
{
 return (**a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10E84 */
int test_cpp_virtual_func(void)
{
 int v0; // r4
 unsigned int (**v2)(Base *__hidden, int); // [sp+0h] [bp-34h] BYREF
 int v3; // [sp+4h] [bp-30h]
 int v4; // [sp+8h] [bp-2Ch]
 unsigned int (***v5)(Base *__hidden, int); // [sp+Ch] [bp-28h]
 int ( ***v6)(unsigned int, int); // [sp+10h] [bp-24h]
 int v7; // [sp+14h] [bp-20h]
 int v8; // [sp+18h] [bp-1Ch]
 unsigned char v9[8]; // [sp+1Ch] [bp-18h] BYREF

 v2 = &off_145F0;
 Derived::Derived((Derived *)v9, 3);
 v3 = Base::virtual_func((Base *)&v2, 5);
 v4 = Derived::virtual_func((Derived *)v9, 5);
 v5 = &v2;
 v6 = (int ( ***)(unsigned int, int))v9;
 v7 = call_virtual_func((int ( ***)(unsigned int, int))&v2, 5);
 v8 = call_virtual_func(v6, 5);
 v0 = v3 + v4 + v7 + v8;
 Derived::~Derived((Derived *)v9);
 Base::~Base((Base *)&v2);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10FA0 */
int test_cpp_multiple_inheritance(void)
{
 int v0; // r4
 int v2; // [sp+8h] [bp-2Ch]
 unsigned int v3[2]; // [sp+14h] [bp-20h] BYREF
 unsigned int v4[2]; // [sp+1Ch] [bp-18h] BYREF

 MultiDerived::MultiDerived((MultiDerived *)v3);
 v3[1] = 100;
 v4[1] = 200;
 v2 = (*(int ( **)(unsigned int *))v3[0])(v3);
 v0 = v2 + (*(int ( **)(unsigned int *))v4[0])(v4) + (v3 != v4);
 MultiDerived::~MultiDerived((MultiDerived *)v3);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110A4 */
int test_cpp_diamond_inheritance(void)
{
 int v0; // r4
 int v2; // [sp+4h] [bp-30h]
 unsigned char v3[16]; // [sp+Ch] [bp-28h] BYREF
 int ( **v4)(unsigned int); // [sp+1Ch] [bp-18h] BYREF
 int v5; // [sp+20h] [bp-14h]

 DiamondDerived::DiamondDerived((DiamondDerived *)v3);
 v5 = 50;
 v2 = (*v4)(&v4);
 v5 = 100;
 v0 = v2 + (*v4)(&v4);
 DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1117C */
int test_cpp_operator_overload(void)
{
 int v0; // r2
 char v2; // [sp+3h] [bp-21h]
 unsigned char v3[8]; // [sp+4h] [bp-20h] BYREF
 unsigned char v4[8]; // [sp+Ch] [bp-18h] BYREF
 unsigned int v5[2]; // [sp+14h] [bp-10h] BYREF

 Point::Point((Point *)v3, 1, 2);
 Point::Point((Point *)v4, 3, 4);
 Point::operator+(v5, v3, v4);
 v2 = Point::operator==(v3, v4);
 Point::operator++(v5);
 if ( v2 )
 v0 = 0;
 else
 v0 = 10;
 return v0 + v5[0] + v5[1];
}


/* Function: test_cpp_template_func */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v4; // [sp+4h] [bp-20h] BYREF
 int v5; // [sp+8h] [bp-1Ch] BYREF
 int v6; // [sp+Ch] [bp-18h]
 double v7; // [sp+10h] [bp-14h]

 v6 = template_max_int(3, 7);
 v7 = template_max_double(0.0, 1074003968.0);
 v4 = 10;
 v5 = 20;
 template_swap_int(&v4, &v5);
 return (int)v7 + v6 + v4 + v5;
}


/* Function: _Z23test_cpp_template_classv @ 0x11324 */
int test_cpp_template_class(void)
{
 int v1; // [sp+0h] [bp-ACh]
 int Size; // [sp+4h] [bp-A8h]
 unsigned char v3[44]; // [sp+14h] [bp-98h] BYREF
 unsigned char v4[92]; // [sp+40h] [bp-6Ch] BYREF

 Container_int::Container_int(v3);
 Container_int::push(v3, 10);
 Container_int::push(v3, 20);
 Container_int::push(v3, 30);
 v1 = Container_int::get(v3, 0);
 Size = Container_int::getSize(v3);
 Container_double::Container_double(v4);
 Container_double::push(v4, v4, 1374389535, 1074339512);
 return v1 + Size + (int)COERCE_DOUBLE(Container_double::get(v4, 0));
}


/* Function: test_cpp_lambda */
int test_cpp_lambda(void)
{
 unsigned int v1[2]; // [sp+4h] [bp-20h] BYREF
 unsigned int v2[2]; // [sp+14h] [bp-10h] BYREF

 v1[1] = 10;
 v1[0] = 20;
 v2[0] = 10;
 v2[1] = v1;
 return test_cpp_lambda_lambda_operator(v2, 3) + 30;
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1143C */
int test_cpp_lambda_lambda_operator(int a1, int a2)
{
 **(unsigned int **)(a1 + 4) += 5;
 return *(unsigned int *)a1 * a2 + **(unsigned int **)(a1 + 4);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1152C */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&"typeinfo for int", 0);
}


/* Function: sub_11564 @ 0x11564 */
void sub_11564(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1169C */
void test_cpp_smart_ptr_lambda(int *a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x116E0 */
int test_cpp_smart_ptr(void)
{
 unsigned int *v0; // r0
 int v1; // r0
 unsigned int *v2; // r0
 unsigned int *v3; // r0
 int v4; // r4
 unsigned char v6[4]; // [sp+4h] [bp-30h] BYREF
 unsigned char v7[4]; // [sp+8h] [bp-2Ch] BYREF
 unsigned char v8[4]; // [sp+Ch] [bp-28h] BYREF
 unsigned char v9[4]; // [sp+10h] [bp-24h] BYREF
 unsigned char v10[4]; // [sp+14h] [bp-20h] BYREF
 int v11; // [sp+18h] [bp-1Ch]
 int v12; // [sp+1Ch] [bp-18h]
 int v13; // [sp+20h] [bp-14h]

 v0 = (unsigned int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v7, v0);
 *(unsigned int *)std::unique_ptr<int>::operator*(v7) = 200;
 v1 = std::move<std::unique_ptr<int> &>(v7);
 std::unique_ptr<int>::unique_ptr(v8, v1);
 v11 = *(unsigned int *)std::unique_ptr<int>::operator*(v8);
 v2 = (unsigned int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v9);
 v12 = *(unsigned int *)std::unique_ptr<int []>::operator[](v9, 2);
 v3 = (unsigned int *)operator new(4u);
 *v3 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr_lambda>::unique_ptr<test_cpp_smart_ptr_lambda,void>(
 v10,
 v3,
 v6);
 v13 = *(unsigned int *)std::unique_ptr<int,test_cpp_smart_ptr_lambda>::operator*(v10);
 v4 = v11 + v12 + v13;
 std::unique_ptr<int,test_cpp_smart_ptr_lambda>::~unique_ptr(v10);
 std::unique_ptr<int []>::~unique_ptr(v9);
 std::unique_ptr<int>::~unique_ptr(v8);
 std::unique_ptr<int>::~unique_ptr(v7);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x118C4 */
size_t test_cpp_rtti(void)
{
 RTTIDerivedA *v0; // r4
 RTTIDerivedB *v1; // r4
 RTTIDerivedA *v2; // r3
 RTTIDerivedB *v3; // r3
 const char *v4; // r0
 int v6; // [sp+4h] [bp-20h]
 size_t v7; // [sp+4h] [bp-20h]
 RTTIDerivedA *lpsrc; // [sp+8h] [bp-1Ch]

 v0 = (RTTIDerivedA *)operator new(4u);
 *(unsigned int *)v0 = 0;
 RTTIDerivedA::RTTIDerivedA(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator new(4u);
 *(unsigned int *)v1 = 0;
 RTTIDerivedB::RTTIDerivedB(v1);
 v6 = 0;
 if ( !lpsrc )
 _cxa_bad_typeid();
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)lpsrc - 4), &"typeinfo for RTTIDerivedA") )
 v6 = 10;
 if ( !v1 )
 _cxa_bad_typeid();
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v1 - 4), &`typeinfo for'RTTIDerivedB) )
 v6 += 20;
 v2 = (RTTIDerivedA *)_dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&"typeinfo for RTTIBase",
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 if ( v2 )
 v6 += RTTIDerivedA::derivedA_data(v2);
 v3 = (RTTIDerivedB *)_dynamic_cast(
 v1,
 (const struct __class_type_info *)&"typeinfo for RTTIBase",
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 if ( v3 )
 v6 += RTTIDerivedB::derivedB_data(v3);
 v4 = (const char *)std::type_info::name(*(std::type_info **)(*(unsigned int *)lpsrc - 4));
 v7 = strlen(v4) + v6;
 (*(void ( **)(RTTIDerivedA *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned int *)v1 + 4))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11ADC */
void test_cpp_oo_features(void)
{
 int v0; // r0
 char *v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r1
 int v8; // r2
 int v9; // r0
 int v10; // r0
 int v11; // r0

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
 v6 = printf(aCppL306D, v5);
 v9 = test_cpp_template_func(v6, v7, v8);
 printf(aCppL307D, v9);
 v10 = test_cpp_template_class();
 printf(aCppL308D, v10);
 v11 = test_cpp_lambda();
 printf(aCppL309D, v11);
 test_cpp_exception();
}


/* Function: main @ 0x11C18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x11C30 */
void ZNSt15__uniq_ptr_data_lambda(int a1, int a2, int a3)
{
 /* std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::__uniq_ptr_impl<test_cpp_smart_ptr_lambda const&>(a1, a2, a3); */
 return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x11C6C */
int std_unique_ptr_lambda_construct(int a1, int a2, int a3)
{
 ZNSt15__uniq_ptr_data_lambda(a1, a2, a3);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x11CA8 */
int std::unique_ptr<int,test_cpp_smart_ptr_lambda>::~unique_ptr(int a1)
{
 int deleter; // r4
 unsigned int **v2; // r0
 unsigned int *v5; // [sp+Ch] [bp-10h]

 v5 = (unsigned int *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::_M_ptr(a1);
 if ( *v5 )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr_lambda>::get_deleter(a1);
 v2 = (unsigned int **)std::move<int *&>(v5);
 test_cpp_smart_ptr_lambda::operator()(deleter, *v2);
 }
 *v5 = 0;
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x11D1C */
int std::unique_ptr<int,test_cpp_smart_ptr_lambda>::operator*(int a1)
{
 return std::unique_ptr<int,test_cpp_smart_ptr_lambda>::get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x11D4C */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::__uniq_ptr_impl<test_cpp_smart_ptr_lambda const&>(
 int a1,
 int a2,
 int a3)
{
 int v4; // r0
 int v6; // [sp+8h] [bp-14h] BYREF
 int v7; // [sp+Ch] [bp-10h]

 v7 = a1;
 v6 = a2;
 v4 = std::forward<test_cpp_smart_ptr_lambda const&>(a3);
 std::tuple<int *,test_cpp_smart_ptr_lambda>::tuple<int *&,test_cpp_smart_ptr_lambda const&,true>(
 a1,
 &v6,
 v4);
 return v7;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11D94 */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::_M_ptr(int a1)
{
 return std::get<0u,int *,test_cpp_smart_ptr_lambda>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x11DC0 */
int std::unique_ptr<int,test_cpp_smart_ptr_lambda>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::_M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x11DEC */
int std::unique_ptr<int,test_cpp_smart_ptr_lambda>::get(int a1)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::_M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x11E18 */
void std_forward_lambda()
{
 ;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x11E3C */
int std::tuple<int *,test_cpp_smart_ptr_lambda>::tuple<int *&,test_cpp_smart_ptr_lambda const&,true>(
 int a1,
 int a2)
{
 int v3; // r5
 int v4; // r0

 v3 = std::forward<int *&>(a2);
 std::forward<test_cpp_smart_ptr_lambda const&>();
 std::_Tuple_impl<0u,int *,test_cpp_smart_ptr_lambda>::_Tuple_impl<int *&,test_cpp_smart_ptr_lambda const&,void>(
 a1,
 v3,
 v4);
 return a1;
}


/* Function: std_get_tuple_element_0_lambda */
int std_get_tuple_element_0_lambda(int a1)
{
 return std_get_helper_0_lambda(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x11EBC */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::_M_deleter(int a1)
{
 return std::get<1u,int *,test_cpp_smart_ptr_lambda>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11EE8 */
int std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,test_cpp_smart_ptr_lambda>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x11F18 */
int std::_Tuple_impl<0u,int *,test_cpp_smart_ptr_lambda>::_Tuple_impl<int *&,test_cpp_smart_ptr_lambda const&,void>(
 int a1,
 int a2)
{
 int v2; // r0
 int v3; // r0

 std::forward<test_cpp_smart_ptr_lambda const&>();
 std::_Tuple_impl<1u,test_cpp_smart_ptr_lambda>::_Tuple_impl(a1, v2);
 v3 = std::forward<int *&>(a2);
 std::_Head_base<0u,int *,false>::_Head_base<int *&>(a1, v3);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x11F74 */
int std::__get_helper<0u,int *,test_cpp_smart_ptr_lambda>(int a1)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr_lambda>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11F9C */
int std::get<1u,int *,test_cpp_smart_ptr_lambda>(int a1)
{
 return std::__get_helper<1u,test_cpp_smart_ptr_lambda>(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x11FC4 */
int std::get<0u,int *,test_cpp_smart_ptr_lambda>(int a1)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr_lambda>(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x11FF0 */
int std::_Tuple_impl<1u,test_cpp_smart_ptr_lambda>::_Tuple_impl(int a1, int a2)
{
 std::_Head_base<1u,test_cpp_smart_ptr_lambda,true>::_Head_base(a1, a2);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x12020 */
int std::_Tuple_impl<0u,int *,test_cpp_smart_ptr_lambda>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x1204C */
int std::__get_helper<1u,test_cpp_smart_ptr_lambda>(int a1)
{
 return std::_Tuple_impl<1u,test_cpp_smart_ptr_lambda>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x12074 */
int std::__get_helper<0u,int *,test_cpp_smart_ptr_lambda>(int a1)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr_lambda>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x1209C */
void std::_Head_base<1u,test_cpp_smart_ptr_lambda,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x120C4 */
int std::_Tuple_impl<1u,test_cpp_smart_ptr_lambda>::_M_head(int a1)
{
 return std::_Head_base<1u,test_cpp_smart_ptr_lambda,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x120EC */
int std::_Tuple_impl<0u,int *,test_cpp_smart_ptr_lambda>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x12118 */
void std::_Head_base<1u,test_cpp_smart_ptr_lambda,true>::_M_head()
{
 ;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x1213C */
int __static_initialization_and_destruction_0(int result, int a2)
{
 if ( result == 1 && a2 == 0xFFFF )
 {
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x121A0 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x121BC */
int std::type_info::name(std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return *((unsigned int *)this + 1) + 1;
 else
 return *((unsigned int *)this + 1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x12208 */
void SimpleClass__SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x12260 */
int SimpleClass::getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x12288 */
unsigned int * SimpleClass::setValue(unsigned int *this, int a2)
{
 *this = a2;
 return this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x122B8 */
size_t SimpleClass::compute(SimpleClass *this, int a2)
{
 return a2 * *(unsigned int *)this + strlen((const char *)this + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x12304 */
int SimpleClass::getClassID(SimpleClass *this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x12324 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned int a2)
{
 unsigned int i; // [sp+Ch] [bp-8h]

 *((unsigned int *)this + 1) = a2;
 if ( a2 > 0x1FFFFFFE )
 _cxa_throw_bad_array_new_length();
 *(unsigned int *)this = operator new[](4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned int *)this + 4 * i) = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x123F4 */
void LifecycleClass::~LifecycleClass(void **this)
{
 if ( *this )
 operator delete[](*this);
 --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x1244C */
int LifecycleClass::getData(LifecycleClass *this, unsigned int a2)
{
 if ( a2 >= *((unsigned int *)this + 1) )
 return -1;
 else
 return *(unsigned int *)(*(unsigned int *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x124A4 */
int LifecycleClass::getInstanceCount(LifecycleClass *this)
{
 return LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x124C8 */
int Base::virtual_func(Base *this, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x124F4 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1251C */
void Base::~Base()
{
}


/* Function: _ZN4BaseD0Ev @ 0x12550 */
void Base::~Base()
{
 Base::~Base(this);
 operator delete(this, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x12584 */
void Base::Base(Base *this)
{
 *(unsigned int *)this = &off_145F0;
}


/* Function: _ZN7DerivedC2Ei @ 0x125B8 */
void Derived::Derived(Derived *this, int a2)
{
 Base::Base(this);
 *(unsigned int *)this = &off_145D8;
 *((unsigned int *)this + 1) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x12604 */
int Derived::virtual_func(Derived *this, int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x12638 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x12660 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x12684 */
void BaseA::~BaseA(BaseA *this)
{
 *(unsigned int *)this = &off_145C4;
}


/* Function: _ZN5BaseAD0Ev @ 0x126B8 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator delete(this, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x126EC */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x12710 */
void BaseB::~BaseB(BaseB *this)
{
 *(unsigned int *)this = &off_145B0;
}


/* Function: _ZN5BaseBD0Ev @ 0x12744 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x12778 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1279C */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x127C0 */
int `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
 return MultiDerived::funcB((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x127C8 */
void BaseA::BaseA(BaseA *this)
{
 *(unsigned int *)this = &off_145C4;
}


/* Function: _ZN5BaseBC2Ev @ 0x127FC */
void BaseB::BaseB(BaseB *this)
{
 *(unsigned int *)this = &off_145B0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x12830 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA(this);
 BaseB::BaseB((MultiDerived *)((char *)this + 8));
 *(unsigned int *)this = &off_14584;
 *((unsigned int *)this + 2) = &off_1459C;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1288C */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x128B0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 *(unsigned int *)this = &off_14570;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x128E4 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x12918 */
int MiddleA::func(MiddleA *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1295C */
int `virtual thunk to'MiddleA::func(MiddleA *this)
{
 return MiddleA::func((MiddleA *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x12970 */
int MiddleB::func(MiddleB *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x129B4 */
int `virtual thunk to'MiddleB::func(MiddleB *this)
{
 return MiddleB::func((MiddleB *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x129C8 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x12A0C */
int `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x12A20 */
int `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x12A28 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 *(unsigned int *)this = &off_14570;
}


/* Function: _ZN7MiddleAC2Ev @ 0x12A5C */
void MiddleA::MiddleA(MiddleA *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x12ABC */
void MiddleA::~MiddleA(MiddleA *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x12B1C */
void MiddleB::MiddleB(MiddleB *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x12B7C */
void MiddleB::~MiddleB(MiddleB *this, unsigned int *a2)
{
 *(unsigned int *)this = *a2;
 *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x12BDC */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 16));
 MiddleA::MiddleA(this, off_144E8);
 MiddleB::MiddleB((DiamondDerived *)((char *)this + 8), off_144F0);
 *(unsigned int *)this = &off_144A4;
 *((unsigned int *)this + 4) = &off_144D8;
 *((unsigned int *)this + 2) = &off_144BC;
}


/* Function: _ZN5PointC2Eii @ 0x12C74 */
void Point::Point(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x12CB8 */
void <R1,R2,R3,R12> Point::operator+(Point *a1, unsigned int *a2, unsigned int *a3)
{
 Point::Point(a1, *a2 + *a3, a2[1] + a3[1]);
}


/* Function: _ZNK5PointeqERKS_ @ 0x12D10 */
bool Point::operator==(unsigned int *a1, unsigned int *a2)
{
 return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x12D70 */
unsigned int * Point::operator++(unsigned int *result)
{
 ++*result;
 ++result[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x12DBC */
int template_max_int(int a1, int a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x12DFC */
long long template_max_double(double a1, double a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return *(unsigned long long *)&a2;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x12DFC */
long long template_max_double(double a1, double a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return *(unsigned long long *)&a2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x12E5C */
int * template_swap_int(int *result, int *a2)
{
 int v2; // [sp+Ch] [bp-8h]

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x12EA8 */
Container_int::Container_int(Container_int *this)
{
 this->size = 0;
 return this;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x12ED8 */
void Container_int::push(Container_int *this, int a2)
{
 int v2; // r3
 int v3; // [sp+4h] [bp-8h]

 v3 = result;
 if ( *(int *)(result + 40) <= 9 )
 {
 v2 = *(unsigned int *)(result + 40);
 result = v2 + 1;
 *(unsigned int *)(v3 + 40) = v2 + 1;
 *(unsigned int *)(v3 + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x12F2C */
int Container<int>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x12F84 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x12FAC */
int Container<double>::Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x12FDC */
int Container<double>::push(int result, int a2, int a3, int a4)
{
 int v4; // r1
 unsigned int *v5; // r1

 if ( *(int *)(result + 80) <= 9 )
 {
 v4 = *(unsigned int *)(result + 80);
 *(unsigned int *)(result + 80) = v4 + 1;
 v5 = (unsigned int *)(result + 8 * v4);
 *v5 = a3;
 v5[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x13040 */
long long Container<double>::get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return *(unsigned long long *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x130A8 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x130D0 */
void std___uniq_ptr_data_int___default_delete_int____uniq_ptr_data(int a1, int a2)
{
 std____uniq_ptr_impl_int___default_delete_int____uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x13108 */
void std__unique_ptr_int____unique_ptr(int a1, int a2)
{
 std___uniq_ptr_data_int___default_delete_int____uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x13140 */
int RTTIBase::getType(RTTIBase *this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x13164 */
int RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x131AC */
int RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x131D0 */
int RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x131F4 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 *(unsigned int *)this = off_1448C;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x13228 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 *(unsigned int *)this = off_1448C;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x1325C */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x13290 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned int *)this = off_14478;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x132CC */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 *(unsigned int *)this = off_14464;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x13308 */
int ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(int a1, int a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x13340 */
int std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(int a1, int a2)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x13374 */
int std::unique_ptr<int>::~unique_ptr(int a1)
{
 int deleter; // r4
 unsigned int *v2; // r0
 unsigned int *v5; // [sp+Ch] [bp-10h]

 v5 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
 if ( *v5 )
 {
 deleter = std::unique_ptr<int>::get_deleter(a1);
 v2 = (unsigned int *)std::move<int *&>(v5);
 std::default_delete<int>::operator()(deleter, *v2);
 }
 *v5 = 0;
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x133E8 */
int std::unique_ptr<int>::operator*(int a1)
{
 return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x13418 */
void std::move<std::unique_ptr<int> &>()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1343C */
unsigned int * std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(unsigned int *a1, unsigned int *a2)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1, a2);
 *a1 = *a2;
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1347C */
unsigned int * std::tuple<int *,std::default_delete<int>>::tuple(unsigned int *a1, unsigned int *a2)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x134B4 */
unsigned int * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(unsigned int *a1, int a2)
{
 unsigned int *v3; // r0

 v3 = (unsigned int *)std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
 std::tuple<int *,std::default_delete<int>>::tuple(a1, v3);
 *(unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2) = 0;
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x1350C */
int ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(int a1, int a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x13544 */
int std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(int a1, int a2)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x13578 */
int std::unique_ptr<int []>::~unique_ptr(int a1)
{
 int deleter; // r0
 unsigned int *v4; // [sp+Ch] [bp-8h]

 v4 = (unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
 if ( *v4 )
 {
 deleter = std::unique_ptr<int []>::get_deleter(a1);
 std::default_delete<int []>::operator()<int>(deleter, *v4);
 }
 *v4 = 0;
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x135E4 */
int std::unique_ptr<int []>::operator[](int a1, int a2)
{
 return std::unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x13624 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
 *(unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1) = a2;
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
 return std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x13694 */
int std::unique_ptr<int>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x136C0 */
void std::move<int *&>()
{
 ;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x136E4 */
void std::default_delete<int>::operator()(int a1, void *a2)
{
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x1371C */
int std::unique_ptr<int>::get(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x13748 */
void std::move<std::tuple<int *,std::default_delete<int>> &>()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x1376C */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x13794 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(int a1, int a2)
{
 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
 *(unsigned int *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1) = a2;
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x137D8 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
 return std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x13804 */
int std::unique_ptr<int []>::get_deleter(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x13830 */
void std::default_delete<int []>::operator()<int>(int a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x13864 */
int std::unique_ptr<int []>::get(int a1)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x13890 */
int std::tuple<int *,std::default_delete<int>>::tuple<true,true>(int a1)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1);
 return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x138BC */
int std_get_tuple_element_0_int_ptr_default_delete(int a1)
{
 return std_get_helper_0_int_ptr_default_delete(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(int a1)
{
 return std::get<1u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x13944 */
int std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(int a1)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(a1);
 return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13970 */
int std::get<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(int a1)
{
 return std::get<1u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
int std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
 return *(unsigned int *)std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x139F8 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(int a1)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1);
 std::_Head_base<0u,int *,false>::_Head_base(a1);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13A2C */
int std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x13A54 */
int std::get<1u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<1u,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x13A7C */
int std::get<0u,int *,std::default_delete<int>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x13AA8 */
int std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(int a1)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(a1);
 std::_Head_base<0u,int *,false>::_Head_base(a1);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13ADC */
int std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13B04 */
int std::get<1u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<1u,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x13B2C */
int std::get<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x13B58 */
void std::forward<int *&>()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x13B7C */
int std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
 std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(a1);
 return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x13BA4 */
unsigned int * std::_Head_base<0u,int *,false>::_Head_base(unsigned int *result)
{
 *result = 0;
 return result;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x13BD4 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x13C00 */
int std::__get_helper<1u,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13C28 */
int std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x13C50 */
int std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(int a1)
{
 std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(a1);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x13C78 */
int std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13CA4 */
int std::__get_helper<1u,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13CCC */
int std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x13CF4 */
unsigned int * std::_Head_base<0u,int *,false>::_Head_base<int *&>(unsigned int *a1)
{
 unsigned int *v1; // r0

 std::forward<int *&>();
 *a1 = *v1;
 return a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x13D30 */
void std::_Head_base<1u,std::default_delete<int>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x13D54 */
void std::_Head_base<0u,int *,false>::_M_head()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x13D78 */
int std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x13DA0 */
int std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x13DCC */
void std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x13DF0 */
int std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x13E18 */
int std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
 return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x13E44 */
void std::_Head_base<1u,std::default_delete<int>,true>::_M_head()
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 */
void std::_Head_base<0u,int *,false>::_M_head()
{
 ;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x13E8C */
void std::_Head_base<1u,std::default_delete<int []>,true>::_M_head()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x13EB0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x13F90 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 *(unsigned int *)this = &off_144A4;
 *((unsigned int *)this + 4) = &off_144D8;
 *((unsigned int *)this + 2) = &off_144BC;
 MiddleB::~MiddleB((DiamondDerived *)((char *)this + 8), off_144F0);
 MiddleA::~MiddleA(this, off_144E8);
 VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 16));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x14028 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x14030 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x14044 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x14078 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x14080 */
void `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 16)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x14094 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 *(unsigned int *)this = &off_14584;
 *((unsigned int *)this + 2) = &off_1459C;
 BaseB::~BaseB((MultiDerived *)((char *)this + 8));
 BaseA::~BaseA(this);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x140F0 */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x140F8 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1412C */
void `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x14134 */
void Derived::~Derived(Derived *this)
{
 *(unsigned int *)this = &off_145D8;
 Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x14170 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this, 8u);
}


/* Function: .term_proc @ 0x141A4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr1 @ 0x250A8 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x250AC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x250B0 */

/* FAILED to decompile: __imp_strncpy @ 0x250B4 */

/* FAILED to decompile: __imp__ZdaPv @ 0x250B8 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x250BC */

/* FAILED to decompile: __imp_abort @ 0x250C0 */

/* FAILED to decompile: __imp___cxa_throw @ 0x250C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x250C8 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x250CC */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x250D0 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x250D4 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x250D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x250DC */

/* FAILED to decompile: __imp___dynamic_cast @ 0x250E0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x250E4 */

/* FAILED to decompile: __imp_strlen @ 0x250E8 */

/* FAILED to decompile: __imp__Znwj @ 0x250EC */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x250F0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x250F4 */

/* FAILED to decompile: __imp_puts @ 0x250F8 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x250FC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x25100 */

/* FAILED to decompile: __imp___cxa_bad_typeid @ 0x25104 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x25108 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x2510C */

/* FAILED to decompile: __imp_printf @ 0x25110 */

/* FAILED to decompile: __imp__Znaj @ 0x25114 */

/* FAILED to decompile: __imp___cxa_throw_bad_array_new_length @ 0x25118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x25120 */

/* Total functions decompiled: 205, failed: 30 */
