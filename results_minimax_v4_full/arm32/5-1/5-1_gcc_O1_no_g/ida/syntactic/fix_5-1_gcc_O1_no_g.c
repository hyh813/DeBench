// Missing class declarations for C++ code

// Base class declaration (needed by virtual functions)
class Base {
public:
    virtual int virtual_func(int a2);
    const char* getName();
    virtual ~Base();
};

// RTTI classes
class RTTIBase;
class LifecycleClass {
public:
    static int instance_count;
};

// RTTI classes
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

class RTTIDerivedA {
public:
    virtual ~RTTIDerivedA();
    virtual int getType();
};

class RTTIDerivedB {
public:
    virtual ~RTTIDerivedB();
    virtual int getType();
};

// Diamond inheritance classes
class Base;

class MiddleA : virtual public Base {
public:
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB : virtual public Base {
public:
    virtual int func();
    virtual ~MiddleB();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class Base {
public:
    virtual int virtual_func(int a2);
    const char* getName();
    virtual ~Base();
};

class Derived : public Base {
public:
    virtual int virtual_func(int a2) override;
    const char* getName() override;
    virtual ~Derived();
};

class MultiDerived : public Derived {
public:
    int funcA();
    int funcB();
    virtual ~MultiDerived();
};

// Additional class declarations
template<typename T>
class Container {
public:
    Container();
    int push(T value);
    T get(int index);
    int getSize();
};


#include <cstring>
#include <cstddef>
#include <typeinfo>

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
 * Binary: build/arm32/5-1/5-1_gcc_O1_no_g
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
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10C6C */
int test_cpp_constructor(void)
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


/* Function: call_virtual_func */
int call_virtual_func(int ( ***a1)(unsigned int))
{
 return (*a1[0])(a1[0]);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE4 */
int test_cpp_virtual_func(void)
{
 int v0; // r4
 int ( **v2)(unsigned int); // [sp+0h] [bp-18h] BYREF
 int ( **v3[2])(unsigned int); // [sp+4h] [bp-14h] BYREF

 v2 = (int ( **)(unsigned int))&off_1187C;
 v3[0] = (int ( **)(unsigned int))&off_11894;
 v3[1] = (int ( **)(unsigned int))3;
 v0 = call_virtual_func(&v2);
 return v0 + 21 + call_virtual_func(v3);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10D68 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10D70 */
int test_cpp_diamond_inheritance(void)
{
 int v0; // r4
 unsigned int (**v2)(DiamondDerived *__hidden); // [sp+14h] [bp-14h] BYREF
 int v3; // [sp+18h] [bp-10h]

 v2 = &off_11968;
 v3 = 50;
 v0 = virtual_thunk_DiamondDerived_func((DiamondDerived *)&v2);
 v3 = 100;
 return v0 + virtual_thunk_DiamondDerived_func((DiamondDerived *)&v2);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10DF4 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10DFC */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v3; // r4
 double v4; // r6
 int v6; // [sp+4h] [bp-1Ch] BYREF
 int v7; // [sp+8h] [bp-18h] BYREF

 v3 = template_max<int>(3, 7, a3, 0);
 v4 = COERCE_DOUBLE(template_max<double>(0, 1074003968, 0, 1073217536));
 v6 = 10;
 v7 = 20;
 template_swap<int>(&v6, &v7);
 return (int)v4 + v3 + v6 + v7;
}


/* Function: _Z23test_cpp_template_classv @ 0x10EAC */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10EB4 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10EBC */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&_type_info_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10F78 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F84 */
size_t test_cpp_rtti(void)
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
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v0 - 4), &type_info_RTTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( std::type_info::operator==(*(unsigned int *)(*(unsigned int *)v1 - 4), &type_info_RTTIDerivedB) )
 v2 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&type_info_RTTIBase,
 (const struct __class_type_info *)&type_info_RTTIDerivedA,
 0) )
 {
 v2 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&type_info_RTTIBase,
 (const struct __class_type_info *)&type_info_RTTIDerivedB,
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
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 long long v5; // r0
 int v6; // r2
 int v7; // r0

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
 v5 = _printf_chk(1, &unk_1169C, 22);
 v7 = test_cpp_template_func(v5, SHIDWORD(v5), v6);
 _printf_chk(1, &unk_116B8, v7);
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
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x111DC */
int Base::virtual_func(int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x111E4 */
const char *Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x111F0 */
Base::~Base()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x111F4 */
int Derived::virtual_func(int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x11200 */
const char *Derived::getName()
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
int non_virtual_thunk_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11224 */
int MiddleA::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1123C */
int virtual_thunk_MiddleA_func(MiddleA *t)
{
 return *(unsigned int *)((char *)t
 + *(unsigned int *)(*(unsigned int *)t - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)t + *(unsigned int *)(*(unsigned int *)t - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11260 */
int MiddleB::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11278 */
int virtual_thunk_MiddleB_func(MiddleB *t)
{
 return *(unsigned int *)((char *)t
 + *(unsigned int *)(*(unsigned int *)t - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)t + *(unsigned int *)(*(unsigned int *)t - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1129C */
int DiamondDerived::func()
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x112B4 */
int virtual_thunk_DiamondDerived_func(DiamondDerived *t)
{
 return *(unsigned int *)((char *)t
 + *(unsigned int *)(*(unsigned int *)t - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)t + *(unsigned int *)(*(unsigned int *)t - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x112D8 */
int non_virtual_thunk_DiamondDerived_func(DiamondDerived *t)
{
 return *(unsigned int *)((char *)t + *(unsigned int *)(*((unsigned int *)t - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x112F0 */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x112F8 */
int RTTIDerivedB::getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11300 */
RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11304 */
RTTIDerivedA::~RTTIDerivedA()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11308 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1130C */
void virtual_thunk_DiamondDerived_destructor(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1131C */
void non_virtual_thunk_DiamondDerived_destructor(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11324 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11328 */
void non_virtual_thunk_MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11330 */
Derived::~Derived()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x11334 */
Base::~Base()
{
 operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1134C */
void Derived::~Derived()
{
 operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11364 */
MultiDerived::~MultiDerived()
{
 operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1137C */
void non_virtual_thunk_MultiDerived_destructor(MultiDerived *this)
{
 operator delete((char *)this - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x11398 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x113B0 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x113C8 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x113E0 */
void virtual_thunk_DiamondDerived_destructor(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11404 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_S0_S0_ @ 0x11420 */
template<typename T>
T template_max(T a1, T a2, T a3, T a4)
{
 T result = a1;
 if ( a2 > result )
 result = a2;
 if ( a3 > result )
 result = a3;
 if ( a4 > result )
 result = a4;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_S0_S0_ @ 0x1142C */
template<>
long long template_max<double>(double a1, double a2, double a3, double a4)
{
 double result = a1;
 if ( a2 > result )
 result = a2;
 if ( a3 > result )
 result = a3;
 if ( a4 > result )
 result = a4;
 return *(unsigned long long *)&result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1145C */
template<typename T>
T* template_swap(T *result, T *a2)
{
 T v2; // r3

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11470 */
int Container<int>::Container(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1147C */
int Container<int>::push(int result, int a2)
{
 int v2; // r3

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11494 */
int Container<int>::get(int a1, int a2)
{
 if ( a2 < 0 )
 return 0;
 if ( *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x114C0 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x114C8 */
int Container<double>::Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x114D4 */
unsigned int * Container<double>::push(unsigned int *result, int a2, int a3, int a4)
{
 int v4; // r1

 v4 = result[20];
 if ( v4 <= 9 )
 {
 result[20] = v4 + 1;
 result += 2 * v4;
 *result = a3;
 result[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x114F0 */
long long Container<double>::get(int a1, int a2)
{
 if ( a2 < 0 )
 return 0;
 if ( *(unsigned int *)(a1 + 80) > a2 )
 return *(unsigned long long *)(a1 + 8 * a2);
 return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11528 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
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
