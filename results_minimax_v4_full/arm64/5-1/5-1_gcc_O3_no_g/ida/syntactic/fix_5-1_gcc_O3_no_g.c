/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O3_no_g
 * Processor: arm
 */

// Forward declarations for classes (C compatible using struct)
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct Container_int;
struct Container_double;

// Forward declarations for template functions (C-compatible)
long long template_max(long long a, long long b);
double template_max(double a, double b);
void template_swap(int *a, int *b);

// typeinfo structures (forward declarations for RTTI)
struct type_info {
    const char* _m_name;
};

// Type info for int (used in exception handling)
struct type_info type_info_for_int = { "int" };

// Forward declare type_info structures
struct type_info;
struct __class_type_info;

// Forward declare std namespace types
struct std__ios_base;
struct std__ios_base__Init;

// Forward declare std::ios_base::Init properly
typedef struct std__ios_base__Init std__ios_base__Init;
// Use proper namespace separator for C
struct std__ios_base__Init_ {
    // Empty init struct
};
typedef struct std__ios_base__Init_ std_ios_base_Init;

// Forward declare operators (needed for C compilation)
void* operator new(unsigned long long size);
void operator delete(void* ptr, unsigned long long size);
void operator delete(void* ptr);

// Needed includes
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Standard C++ runtime functions - declare them here
// These would normally come from <cxxabi.h> or similar
// Only declare these when compiling as C++ (not needed for C compilation)
#ifndef __cplusplus
// Stub declarations for C compilation - actual functions come from libstdc++
void* __cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void* a, void* b, void* c) { abort(); }
void* __cxa_begin_catch(void* a) { return a; }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { abort(); }
void* __dynamic_cast(const void* a, const void* b, const void* c, long d, long e) { return 0; }
int __gxx_personality_v0(int a, int b, void* c, void* d) { return 0; }
#endif
void call_weak_fn(void);
void JUMPOUT(unsigned long long addr);

// Complete struct definitions (must come before any code using these types)
struct Base {
    long long ( *virtual_func )(struct Base *this, int a2);
    const char* (*getName)(struct Base *this);
};

struct Derived {
    long long ( *virtual_func )(struct Derived *this, int a2);
    const char* (*getName)(struct Derived *this);
    unsigned int field_10;
    unsigned int field_14;
};

struct MiddleA {
    unsigned long long vtable;
    long long (*func)(struct MiddleA *this);
    unsigned int field_8;
};

struct MiddleB {
    unsigned long long vtable;
    long long (*func)(struct MiddleB *this);
    unsigned int field_8;
};

struct DiamondDerived {
    unsigned long long vtable;
    long long (*func)(struct DiamondDerived *this);
    unsigned int field_8;
    unsigned int field_C;
};

struct MultiDerived {
    unsigned long long vtable;
    long long (*funcA)(struct MultiDerived *this);
    long long (*funcB)(struct MultiDerived *this);
    unsigned int field_10;
};

struct RTTIBase {
    unsigned long long vtable;
};

struct RTTIDerivedA {
    unsigned long long vtable;
    long long (*getType)(struct RTTIDerivedA *this);
};

struct RTTIDerivedB {
    unsigned long long vtable;
    long long (*getType)(struct RTTIDerivedB *this);
};

struct LifecycleClass {
    int field_0;
};

// Static member definition (must come AFTER struct definition)
int instance_count = 0;

struct Container_int {
    unsigned int size;
    int data[10];
};

struct Container_double {
    unsigned int size;
    double data[10];
};

// Template function forward declarations (C-compatible - these are actually implemented as regular functions)
long long template_max_int(long long a, long long b);
double template_max_double(double a, double b);
int* template_swap_int(int* a, int* b);

// Forward declarations for test functions
void test_cpp_oo_features(void);

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
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&type_info_for_int, 0);
}


/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


// Global initialization stub - C compatible version
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 // In C, we don't have std::ios_base::Init, so this is a no-op stub
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
long long test_cpp_member_func(void)
{
 char *v0; // x0
 char dest[36]; // [xsp+14h] [xbp+14h] BYREF

 v0 = strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(instance_count + 21 + 1000 * instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z20test_cpp_template_funcv @ 0x1380 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int v4; // [xsp+20h] [xbp+20h] BYREF
 int v5; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max(3, 7);
 v1 = v0;
 v2 = template_max(2.5, 1.5);
 v4 = 10;
 v5 = 20;
 template_swap(&v4, &v5);
 return (unsigned int)((int)v2 + v1 + v4 + v5);
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
long long test_cpp_rtti(void)
{
 struct long long *v0; // x21
 void *v1; // x20
 long long v2; // x24
 const char *v3; // x23
 int v4; // w25
 int v5; // w22
 int v6; // w19
 const char *v7; // x0
 unsigned int v8; // w19

 v0 = (struct long long *)operator new(8u);
 *v0 = (long long)off_12C28;
 v1 = (void *)operator new(8u);
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 *(unsigned long long *)v1 = off_12C50;
 if ( v3 == "12RTTIDerivedA" )
 {
 v4 = *(unsigned char *)v3;
 v5 = 30;
 }
 else
 {
 v4 = *(unsigned char *)v3;
 if ( v4 == 42 )
 {
 v5 = 20;
 }
 else if ( !strcmp(v3, "12RTTIDerivedA") )
 {
 v5 = 30;
 }
 else
 {
 v5 = 20;
 }
 }
 v6 = v5;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v6 = v5 + 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 v7 = v3 + 1;
 else
 v7 = v3;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15F0 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 long long v1; // x2
 long long v2; // x3
 int v3; // w0
 int v4; // w19
 double v5; // d8
 int v6; // [xsp+28h] [xbp+28h] BYREF
 int v7; // [xsp+2Ch] [xbp+2Ch] BYREF
 char v8[36]; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_1BA0);
 strncpy(v8, "Test", 0x1Fu);
 v8[31] = 0;
 v0 = strlen(v8);
 __printf_chk(1, &unk_1BC8, (unsigned int)(v0 + 4700));
 __printf_chk(
 1,
 &unk_1BE8,
 (unsigned int)(instance_count + 21 + 1000 * instance_count));
 __printf_chk(1, &unk_1C08, 42);
 __printf_chk(1, &unk_1C28, 71);
 __printf_chk(1, &unk_1C48, 650);
 __printf_chk(1, &unk_1C68, 22);
 v0 = template_max(3, 7);
 v4 = v0;
 v5 = template_max(2.5, 1.5);
 v6 = 10;
 v7 = 20;
 template_swap(&v6, &v7);
 __printf_chk(1, &unk_1C88, (unsigned int)((int)v5 + v4 + v6 + v7));
 __printf_chk(1, &unk_1CA8, 16);
 __printf_chk(1, &unk_1CC8, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x17D0 */
long long Base::virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x17E0 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x17F0 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1800 */
long long Derived::virtual_func(Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1810 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1820 */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1830 */
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1840 */
long long nonvirtual_thunk_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1850 */
long long MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1870 */
long long virtual_thunk_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A0 */
long long MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x18C0 */
long long virtual_thunk_MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x18F0 */
long long struct_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1910 */
long long virtual_thunk_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1934 */
long long nonvirtual_thunk_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1870 */
long long virtual_thunk_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A0 */
long long MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x18C0 */
long long virtual_thunk_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x18F0 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1910 */
long long virtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1934 */
long long nonvirtual_thunk_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1950 */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1960 */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1970 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1980 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1990 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1994 */
void virtual_thunk_DiamondDerived_d1(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x19A0 */
void nonvirtual_thunk_DiamondDerived_d1(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x19B0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x19B4 */
void nonvirtual_thunk_MultiDerived_d1(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x19C0 */
void Derived::~Derived(Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x19D0 */
void Base::~Base(Base *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x19E0 */
void Derived::~Derived(Derived *this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x19F0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1A00 */
void nonvirtual_thunk_MultiDerived_d0(MultiDerived *this)
{
 operator delete((char *)this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1A10 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1A20 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1A30 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1A40 */
void virtual_thunk_DiamondDerived_d0(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1A54 */
void nonvirtual_thunk_DiamondDerived_d0(DiamondDerived *this)
{
 operator delete((char *)this - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1A60 */
long long template_max<int>(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1A70 */
double template_max<double>(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1A80 */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1AA0 */
long long Container<int>::Container(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1AB0 */
long long Container<int>::push(long long result, int a2)
{
 int v2; // w2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1AD0 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 )
 {
 result = 0;
 if ( *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1B00 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1B10 */
long long Container<double>::Container(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1B20 */
long long Container<double>::push(long long result, double a2)
{
 int v2; // w1

 v2 = *(unsigned int *)(result + 80);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 80) = v2 + 1;
 *(double *)(result + 8LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1B40 */
double Container<double>::get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1B60 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1B68 */
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
