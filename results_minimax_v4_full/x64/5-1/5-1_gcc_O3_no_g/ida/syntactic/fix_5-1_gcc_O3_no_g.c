/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O3_no_g
 * Processor: pc
 */

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <typeinfo>
#include <new>
#include <x86intrin.h>
#include <ios>
#include <cstdlib>

// Forward declaration for type_info
namespace std { struct type_info; }

// RTTI helper functions - defined once above

// External declarations for runtime functions
extern "C" {
    void __cxa_throw(void*, const std::type_info*, void(*)());
    void* __cxa_allocate_exception(size_t);
    void* __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void __cxa_rethrow();
    int __cxa_atexit(void (*)(void*), void*, void*);
    int __gxx_personality_v0(...);
    void _Unwind_Resume();
    void* __dynamic_cast(const void*, const struct __class_type_info*, const struct __class_type_info*, ptrdiff_t);
    int strcmp(const char*, const char*);
    int __printf_chk(int, const char*, ...);
    int puts(const char*);
    void __stack_chk_fail();
    int __libc_start_main(int (*)(int, char**, char**), int, char**, void (*)(void), void (*)(void), void (*)(void), void*);
    void (*__gmon_start__) (void);
    void* __imp___cxa_finalize(void*);
    void _Znwm(size_t);
    void _ZdlPvm(void*);
}

// Template function declarations
template<typename T> T template_max(T a, T b) {
    return a > b ? a : b;
}
template<typename T> void template_swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// Explicit template instantiations are not needed - we have full definitions above

// Forward declarations for LifecycleClass
struct LifecycleClass {
    static int instance_count;
};

// RTTI type info declarations
extern "C" {
    extern const std::type_info typeinfo_RTTIBase;
    extern const std::type_info typeinfo_RTTIDerivedA;
    extern const std::type_info typeinfo_RTTIDerivedB;
}

// std::ios initialization
namespace std {
    extern ios_base::Init __ioinit;
}

// Forward declarations for classes
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// Class definitions for RTTI classes
struct RTTIBase {
    virtual ~RTTIBase();
    virtual long long getType();
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual long long getType();
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual long long getType();
};

// Class definitions for Middle classes
struct MiddleA {
    virtual ~MiddleA();
    virtual long long func();
};

struct MiddleB {
    virtual ~MiddleB();
    virtual long long func();
};

// Class definition for DiamondDerived
struct DiamondDerived : MiddleA, MiddleB {
    virtual ~DiamondDerived();
    virtual long long func();
};

// Class definitions
struct Base {
    virtual ~Base();
    virtual long long virtual_func(int);
    virtual const char* getName();
};

struct Derived : Base {
    int value;
    virtual ~Derived();
    virtual long long virtual_func(int);
    virtual const char* getName();
};

struct MultiDerived : MiddleA, MiddleB {
    virtual ~MultiDerived();
    virtual long long funcA();
    virtual long long funcB();
};

// Global variable declaration
extern const char* s;

/* Function: .init_proc @ 0x1000 */
void (**init_proc())(void)
{
 void (**result)(void); // rax

 result = &__gmon_start__;
 if ( &__gmon_start__ )
 return (void (**)(void))__gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 // Empty function - was a JUMPOUT in original binary
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1020();
}


// Type info for int - declared globally
extern "C" std::type_info const& typeid_for_int() { 
    return typeid(int); 
}

// Helper to get the typeinfo pointer
static const std::type_info* get_typeid_for_int() {
    return &typeid(int);
}

// Forward declaration for type_info
namespace std { struct type_info; }

// Helper function for RTTI
static const std::type_info* get_typeinfo_for_RTTIBase() {
    return &typeid(int);
}

static const std::type_info* get_typeinfo_for_RTTIDerivedA() {
    return &typeid(int);
}

static const std::type_info* get_typeinfo_for_RTTIDerivedB() {
    return &typeid(int);
}

/* Function: test_cpp_exception @ 0x1240 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (std::type_info*)&typeid(int), 0);
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
long long test_cpp_member_func(void)
{
 char s[8]; // [rsp+4h] [rbp-34h] BYREF
 long long v2; // [rsp+Ch] [rbp-2Ch]
 long long v3; // [rsp+14h] [rbp-24h]
 int v4; // [rsp+1Ch] [rbp-1Ch]
 short v5; // [rsp+20h] [rbp-18h]
 char v6; // [rsp+22h] [rbp-16h]
 char v7; // [rsp+23h] [rbp-15h]
 unsigned long long v8 = __readfsqword(0x28u); // [rsp+28h] [rbp-10h]

 v6 = 0;
 *(unsigned long long *)s = 1953719636;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v7 = 0;
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
long long call_virtual_func(Base *a1)
{
 return (**(long long ( ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
long long test_cpp_template_func(void)
{
 int v0; // ebx
 double v2; // [rsp+8h] [rbp-20h]
 int v3; // [rsp+10h] [rbp-18h] BYREF
 int v4; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = template_max<int>(3, 7);
 v3 = 10;
 v2 = template_max<double>(2.5, 1.5);
 v4 = 20;
 template_swap<int>(&v3, &v4);
 return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
long long test_cpp_rtti(void)
{
 long long *v0; // r13
 unsigned long long *v1; // rax
 long long v2; // r15
 const void *v3; // rbp
 long long v4; // rax
 const char *v5; // r12
 int v6; // r14d
 unsigned int v7; // r12d
 int v9; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_3C70;
 v1 = (unsigned long long *)operator new(8u);
 v2 = *v0;
 v3 = v1;
 *v1 = off_3C98;
 v4 = *(unsigned long long *)(v2 - 8);
 v5 = *(const char **)(v4 + 8);
 if ( v5 == "12RTTIDerivedA" )
 {
 v6 = 30;
 }
 else if ( *v5 == 42 )
 {
 v6 = 20;
 }
 else
 {
 v6 = strcmp(*(const char **)(v4 + 8), "12RTTIDerivedA") == 0 ? 30 : 20;
 }
 v9 = v6;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_RTTIBase,
 (const struct __class_type_info *)&typeinfo_RTTIDerivedA,
 0) )
 {
 v9 = v6 + 100;
 }
 if ( __dynamic_cast(
 v3,
 (const struct __class_type_info *)&typeinfo_RTTIBase,
 (const struct __class_type_info *)&typeinfo_RTTIDerivedB,
 0) )
 {
 v9 += 200;
 }
 v7 = v9 + strlen(&v5[*v5 == 42]);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1780 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 int v1; // ebx
 double v2; // [rsp+8h] [rbp-50h]
 int v3; // [rsp+18h] [rbp-40h] BYREF
 int v4; // [rsp+1Ch] [rbp-3Ch] BYREF
 char s[8]; // [rsp+24h] [rbp-34h] BYREF
 long long v6; // [rsp+2Ch] [rbp-2Ch]
 long long v7; // [rsp+34h] [rbp-24h]
 int v8; // [rsp+3Ch] [rbp-1Ch]
 short v9; // [rsp+40h] [rbp-18h]
 char v10; // [rsp+42h] [rbp-16h]
 char v11; // [rsp+43h] [rbp-15h]
 unsigned long long v12; // [rsp+48h] [rbp-10h]

 v12 = __readfsqword(0x28u);
 puts(::s);
 *(unsigned long long *)s = 1953719636;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v11 = 0;
 v0 = strlen(s);
 __printf_chk(1, &unk_203C, (unsigned int)(v0 + 4700));
 __printf_chk(1, &unk_205A, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 __printf_chk(1, &unk_2076, 42);
 __printf_chk(1, &unk_2092, 71);
 __printf_chk(1, &unk_20AE, 650);
 __printf_chk(1, &unk_20CB, 22);
 v1 = template_max<int>(3, 7);
 v3 = 10;
 v2 = template_max<double>(2.5, 1.5);
 v4 = 20;
 template_swap<int>(&v3, &v4);
 __printf_chk(1, &unk_20E7, (unsigned int)(v4 + v3 + v1 + (int)v2));
 __printf_chk(1, &unk_2103, 16);
 __printf_chk(1, &unk_211F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1990 */
long long Base::virtual_func(int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x19A0 */
const char * Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x19B0 */
void Base::~Base()
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x19C0 */
long long Derived::virtual_func(int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x19D0 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x19E0 */
long long MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x19F0 */
long long MultiDerived::funcB()
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1A00 */
// non-virtual thunk to MultiDerived::funcB
long long thunk_MultiDerived_funcB(char *this_ptr)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1A10 */
long long MiddleA::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


// Virtual thunk to MiddleA::func
long long thunk_vtable_MiddleA_func(char *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr
 + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1A50 */
long long MiddleB::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


// Virtual thunk to MiddleB::func
long long thunk_MiddleB_func(char *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr
 + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1A90 */
long long DiamondDerived::func()
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1AB0 */
// virtual thunk to DiamondDerived::func
long long DiamondDerived_func_virtual_thunk(char *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr
 + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1AD0 */
// non-virtual thunk to DiamondDerived::func
long long thunk_nonvirtual_DiamondDerived_func(char *this_ptr)
{
 return (unsigned int)(*(unsigned int *)((char *)this_ptr + *(unsigned long long *)(*((unsigned long long *)this_ptr - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1AF0 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1B00 */
long long RTTIDerivedB::getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1B10 */
RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1B20 */
RTTIDerivedA::~RTTIDerivedA()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B30 */
DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1B40 */
// virtual thunk to DiamondDerived::~DiamondDerived
void virtual_thunk_DiamondDerived_dtor(char *this_ptr)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1B50 */
void nonvirtual_thunk_DiamondDerived_dtor(char *this_ptr)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B60 */
MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1B70 */
void nonvirtual_thunk_MultiDerived_dtor(char *this_ptr)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1B80 */
Derived::~Derived()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1B90 */
Base::~Base()
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1BA0 */
Derived::~Derived()
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1BB0 */
MultiDerived::~MultiDerived()
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1BC0 */
// non-virtual thunk to MultiDerived::~MultiDerived
void nonvirtual_thunk_MultiDerived_dtor(char *this_ptr)
{
 operator delete(this_ptr - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1BE0 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1BF0 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1C00 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1C10 */
// virtual thunk to DiamondDerived::~DiamondDerived
void virtual_thunk_DiamondDerived_dtor(char *this_ptr)
{
 operator delete(this_ptr + *(unsigned long long *)(*(unsigned long long *)this_ptr - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1C30 */
// non-virtual thunk to DiamondDerived::~DiamondDerived
void nonvirtual_thunk_DiamondDerived_dtor_v2(char *this_ptr)
{
 operator delete(this_ptr - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1C50 */
long long template_max_int(int a1, int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 >= a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1C60 */
double template_max_double(double a1, double a2)
{
 return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1C70 */
long long template_swap_int(int *a1, int *a2)
{
 long long result; // rax

 result = *a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1C80 */
void Container<int>::Container(long long a1)
{
 *(unsigned int *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1C90 */
long long Container<int>::push(long long a1, int a2)
{
 long long result; // rax

 result = *(int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 40) = result + 1;
 *(unsigned int *)(a1 + 4 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1CB0 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1CD0 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1CE0 */
void Container<double>::Container(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1CF0 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1D10 */
double Container<double>::get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1D40 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1D48 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
