/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O2_g
 * Processor: arm
 */

// This file contains both C and C++ code
// Compile with: g++ -o output source.cpp

// Include standard C headers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

// C++ headers and namespace
// Note: Using iostream requires compiling with g++ (C++ compiler)
// If compiling with gcc (C compiler), comment out the following line:
#ifdef __cplusplus
#include <iostream>
#include <new>
using namespace std;
#endif

// Define JUMPOUT as a macro that causes compilation to stop (it indicates unreachable code in IDA)
#define JUMPOUT(addr) ((void)(addr), __builtin_trap())

// Forward declarations
void call_weak_fn();
void test_cpp_oo_features();

// Forward declarations for template functions
template<typename T> T template_max(T a, T b) { return a > b ? a : b; }
template<typename T> void template_swap(T *a, T *b) { T temp = *a; *a = *b; *b = temp; }

// SimpleClass definition
struct SimpleClass {
 char name[32];
};

// C++ Exception handling functions
extern void __cxa_throw(void *exception, struct type_info *info, void (*dest)(void *));
extern void *__cxa_allocate_exception(unsigned long size);
extern int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);

// C++ operators
extern void *operator new(unsigned long size);
extern void operator delete(void *ptr, unsigned long size);
extern void operator delete(void *ptr);

// Type info for int (used by __cxa_throw)
extern const struct __class_type_info typeinfo_for_int;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// Template class forward declaration
template<typename T>
class Container;

// Class forward declarations
struct SimpleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// SimpleClass definition
struct SimpleClass {
 char name[32];
};

// Base class definition (for virtual function tests)
struct Base {
 void *_vptr.Base;
 int data;
};

// Derived class definition
struct Derived {
 void *_vptr.Derived;
 int multiplier;
};

// MultiDerived class definition
struct MultiDerived {
 void *_vptr.MultiDerived;
 void *_vptr.Base;
 int multiplier;
 int valueA;
 int valueB;
};

// MiddleA class definition
struct MiddleA {
 void *_vptr.MiddleA;
 int dataA;
};

// MiddleB class definition
struct MiddleB {
 void *_vptr.MiddleB;
 int dataB;
};

// DiamondDerived class definition
struct DiamondDerived {
 void *_vptr.MiddleA;
 void *_vptr.MiddleB;
 int dataA;
 int dataB;
};

// RTTI classes
struct RTTIBase {
 void *_vptr.RTTIBase;
 int data;
};

struct RTTIDerivedA {
 void *_vptr.RTTIDerivedA;
 int type;
};

struct RTTIDerivedB {
 void *_vptr.RTTIDerivedB;
 int type;
};

// LifecycleClass definition
struct LifecycleClass {
 static int instance_count;
};

/* Function: .init_proc @ 0xE90 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
// Static initializer - stub for C++ iostream initialization
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 // Stub: iostream initialization would go here in full C++ program
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
int test_cpp_member_func()
{
 char *v0; // x0
 SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
int test_cpp_constructor()
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr.Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
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


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
int test_cpp_rtti()
{
 int v0; // w19
 long long *v1; // x21
 void *v2; // x20
 long long v3; // x24
 const char *v4; // x23
 int v5; // w25
 int v6; // w19
 const char *v7; // x0
 int v8; // w19

 v0 = 10;
 v1 = (long long *)operator new(8u);
 *v1 = (long long)off_12C28;
 v2 = (void *)operator new(8u);
 v3 = *v1;
 v4 = *(const char **)(*(unsigned long long *)(*v1 - 8) + 8LL);
 *(unsigned long long *)v2 = off_12C50;
 v5 = *(unsigned char *)v4;
 if ( v4 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( v5 != 42 )
 {
 if ( !strcmp(v4, "12RTTIDerivedA") )
 v0 = 10;
 else
 v0 = 0;
 }
 }
 v6 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v2,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v5 == 42 )
 v7 = v4 + 1;
 else
 v7 = v4;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v3 + 8))(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v2 + 8LL))(v2);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15B0 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 char v4[36]; // [xsp+24h] [xbp+24h] BYREF

 puts(asc_1B10);
 strncpy(v4, "Test", 0x1Fu);
 v4[31] = 0;
 v0 = strlen(v4);
 __printf_chk(1, &unk_1B38, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_1B58, v1);
 __printf_chk(1, &unk_1B78, 42);
 __printf_chk(1, &unk_1B98, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_1BB8, v2);
 __printf_chk(1, &unk_1BD8, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, &unk_1BF8, v3);
 __printf_chk(1, &unk_1C18, 16);
 __printf_chk(1, &unk_1C38, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1740 */
int Base::virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1750 */
const char * Base::getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1760 */
void Base::~Base(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1770 */
int Derived::virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1780 */
const char * Derived::getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1790 */
int MultiDerived::funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17A0 */
int MultiDerived::funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x17B0 */
long long non_virtual_thunk_MultiDerived_funcB(MultiDerived *this)
{
 (void)this;
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x17C0 */
int MiddleA::func(MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x17E0 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr.MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1810 */
int MiddleB::func(MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1830 */
long long virtual_thunk_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr.MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr.MiddleB + *((unsigned long long *)this->_vptr.MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1860 */
int DiamondDerived::func(DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1880 */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr.MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x18A4 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x18C0 */
int RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x18D0 */
int RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x18E0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x18F0 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1900 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1904 */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1910 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1920 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1924 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1930 */
void Derived::~Derived(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1940 */
void Base::~Base(Base *const this)
{
 ::operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1950 */
void Derived::~Derived(Derived *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1960 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1970 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this)
{
 operator delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1980 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1990 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x19A0 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x19B0 */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x19C4 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x19D0 */
int template_max<int>(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x19E0 */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x19F0 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1A10 */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1A20 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1A40 */
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


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1A70 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1A80 */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1A90 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1AB0 */
double Container<double>::get(const Container<double> *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1AD0 */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x1AD8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x130A0 */

/* FAILED to decompile: strlen @ 0x130A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x130B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x130B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: __libc_start_main @ 0x130E0 */

/* FAILED to decompile: _Znwm @ 0x130E8 */

/* FAILED to decompile: _ZdlPvm @ 0x130F0 */

/* FAILED to decompile: strncpy @ 0x130F8 */

/* FAILED to decompile: __dynamic_cast @ 0x13100 */

/* FAILED to decompile: __cxa_atexit @ 0x13108 */

/* FAILED to decompile: strcmp @ 0x13118 */

/* FAILED to decompile: __cxa_rethrow @ 0x13120 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x13128 */

/* FAILED to decompile: abort @ 0x13130 */

/* FAILED to decompile: __cxa_end_catch @ 0x13138 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x13140 */

/* FAILED to decompile: __cxa_throw @ 0x13148 */

/* FAILED to decompile: _Unwind_Resume @ 0x13150 */

/* FAILED to decompile: __printf_chk @ 0x13158 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13160 */

/* FAILED to decompile: __gmon_start__ @ 0x13170 */

/* Total functions decompiled: 70, failed: 23 */
