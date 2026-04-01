/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O1_g
 * Processor: pc
 */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

// Forward declarations
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
template<typename T> struct Container;

// Virtual table types
typedef int (**vtable_Base)(...);
typedef int (**vtable_MiddleA)(...);
typedef int (**vtable_MiddleB)(...);

// SimpleClass
struct SimpleClass {
    char name[32];
};

// LifecycleClass  
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class
struct Base {
    vtable_Base _vptr_Base;
    virtual int virtual_func(int x);
    virtual const char *getName() const;
    virtual ~Base();
};

// Derived class
struct Derived {
    vtable_Base _vptr_Base;
    int multiplier;
};

// MultiDerived class
struct MultiDerived {
    vtable_Base _vptr_Base;
    vtable_MiddleA _vptr_MiddleA;
    int dataA;
    int dataB;
};

// MiddleA class
struct MiddleA {
    vtable_MiddleA _vptr_MiddleA;
    int dataA;
};

// MiddleB class
struct MiddleB {
    vtable_MiddleB _vptr_MiddleB;
    int dataB;
};

// DiamondDerived class
struct DiamondDerived : MiddleA, MiddleB {
    int dataA;
    int dataB;
};

// RTTI types
struct RTTIBase {
    vtable_Base _vptr_Base;
};

struct RTTIDerivedA : RTTIBase {
};

struct RTTIDerivedB : RTTIBase {
};

// Template functions
template<typename T>
T template_max(T a, T b) {
    return (a >= b) ? a : b;
}

template<>
double template_max<double>(double a, double b) {
    return fmax(a, b);
}

template<typename T>
void template_swap(T *a, T *b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

unsigned long long __readfsqword(unsigned long long offset);
template<typename T>
struct Container {
    T data[10];
    int size;
};

// External declarations for runtime functions
void *operator new(size_t size);
void operator delete(void *ptr);
void *operator new[](size_t size);
void operator delete[](void *ptr);

// Type info structures
struct type_info;
struct __class_type_info;
struct __pbase_type_info;

extern "C" {
void __cxa_throw(void *exception, struct type_info *info, void (*dest)(void *));
void *__cxa_allocate_exception(size_t size);
void *__cxa_begin_catch(void *exception);
void __cxa_end_catch();
void __cxa_rethrow();
int __gxx_personality_v0(...);
void *__dynamic_cast(const void *src, const struct __class_type_info *src_type, 
                     const struct __class_type_info *dst_type, ptrdiff_t src2dst);
}

// Type info variables
extern struct type_info typeinfo_for_int;
extern struct __class_type_info typeinfo_for_RTTIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* Function: .init_proc @ 0x2000 */
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



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2369 */
int test_cpp_member_func()
{
 SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 *(unsigned long long *)obj.name = 1953719636;
 memset(&obj.name[8], 0, 24);
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x23DE */
int test_cpp_constructor()
{
 unsigned int *v0; // rdi
 int v1; // eax
 int v2; // ebx

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


/* Function: _Z17call_virtual_funcP4Basei @ 0x243C */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x244E */
int test_cpp_virtual_func()
{
 int v0; // ebx
 Base base; // [rsp+8h] [rbp-30h] BYREF
 Derived derived; // [rsp+10h] [rbp-28h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 base._vptr_Base = (int (**)(...))&off_59A0;
 derived._vptr_Base = (int (**)(...))&off_59D0;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + call_virtual_func(&derived, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24C6 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x24D0 */
int test_cpp_diamond_inheritance()
{
 int v0; // ebx
 DiamondDerived obj; // [rsp+0h] [rbp-58h] BYREF

 *((unsigned long long *)&obj.dataB + 2) = __readfsqword(0x28u);
 obj._vptr_MiddleB = (int (**)(...))&off_5B78;
 obj.dataB = 50;
 v0 = _ZTv0_n24_N14DiamondDerived4funcEv((DiamondDerived *)&obj.MiddleB);
 obj.dataB = 100;
 return v0 + _ZTv0_n24_N14DiamondDerived4funcEv((DiamondDerived *)&obj.MiddleB);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x254C */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2556 */
int test_cpp_template_func()
{
 double v0; // xmm2_8
 int v1; // ebx
 double r2; // [rsp+8h] [rbp-20h]
 int a; // [rsp+10h] [rbp-18h] BYREF
 int b; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v6; // [rsp+18h] [rbp-10h]

 v6 = __readfsqword(0x28u);
 v1 = template_max<int>(3, 7);
 r2 = template_max<double>(1.5, v0);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x25E5 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x25EF */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x25F9 */
int test_cpp_exception()
{
 unsigned int *exception; // rdi

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x26D1 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x26DB */
int test_cpp_rtti()
{
 long long *v0; // r12
 void *v1; // r13
 long long v2; // r14
 const char *v3; // rbp
 int v4; // ebx
 int v5; // ebx
 int v6; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_5BA0;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = off_5BC8;
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 v4 = strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v5 += 200;
 }
 v6 = strlen(&v3[*v3 == 42]) + v5;
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2801 */
void test_cpp_oo_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(s);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_303C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_305A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_3076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_3092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_30AE, v4);
 __printf_chk(1, &unk_30CB, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, &unk_30E7, v5);
 __printf_chk(1, &unk_3103, 16);
 __printf_chk(1, &unk_311F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x2970 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2987 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
int Base::virtual_func(int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char *Base::getName() const
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
Base::~Base()
{
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
int MiddleA::func()
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
long long virtual_thunk_to_MiddleA_func(MiddleA *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
int MiddleB::func()
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
long long virtual_thunk_to_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataB
 + *((unsigned long long *)this->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
int DiamondDerived::func()
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
long long _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this)
{
 return (unsigned int)(*(int *)((char *)&this->dataA
 + *((unsigned long long *)this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZN12RTTIDerivedA7getTypeEv @ 0x2AB0 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
int RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
RTTIDerivedB::~RTTIDerivedB()
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
DiamondDerived::~DiamondDerived()
{
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void non_virtual_thunk_to_DiamondDerived_Destructor(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void virtual_thunk_to_DiamondDerived_Destructor(DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2AE0 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void non_virtual_thunk_to_MultiDerived_Destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
void Derived::~Derived(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
Base::~Base()
{
 operator delete(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
void Derived::~Derived(Derived *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void non_virtual_thunk_to_MultiDerived_Destructor_v2(MultiDerived *this)
{
 operator delete((char*)this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void virtual_thunk_to_DiamondDerived_Destructor(DiamondDerived *this)
{
 operator delete((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void non_virtual_thunk_to_DiamondDerived_Destructor_v2(DiamondDerived *this)
{
 operator delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2BD2 */
int template_max<int>(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2BDE */
double template_max<double>(double a1, double a, double b)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2BE7 */
void template_swap<int>(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2BF4 */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2C00 */
void Container<int>::push(Container<int> *const this, int value)
{
 int size; // eax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2C18 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2C34 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2C3C */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2C48 */
void Container<double>::push(Container<double> *const this, double a2, double value)
{
 int size; // eax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C62 */
double Container<double>::get(const Container<double> *const this, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7E */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x2C88 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: __cxa_atexit @ 0x6080 */

/* FAILED to decompile: _Znwm @ 0x6088 */

/* FAILED to decompile: _ZdlPvm @ 0x6090 */

/* FAILED to decompile: __stack_chk_fail @ 0x6098 */

/* FAILED to decompile: __dynamic_cast @ 0x60A0 */

/* FAILED to decompile: _ZdaPv @ 0x60A8 */

/* FAILED to decompile: strcmp @ 0x60B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: puts @ 0x60D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x60D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E0 */

/* FAILED to decompile: __cxa_throw @ 0x60E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x60F8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6100 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6108 */

/* FAILED to decompile: __gmon_start__ @ 0x6118 */

/* Total functions decompiled: 87, failed: 23 */
