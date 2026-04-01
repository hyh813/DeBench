// Force C++ compilation - MUST be at very top
#define __cplusplus 201703L

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O1_no_g
 * Processor: arm
 */

// Enable extern "C" for CRT linkage
#define EXTERN_C extern "C"

// Standard C headers
#include <stddef.h>

// CRT functions - define them as weak
EXTERN_C void* __dso_handle;
EXTERN_C int __cxa_atexit(void (*destructor)(void*), void* arg, void* dso);
EXTERN_C void __cxa_finalize(void*);
EXTERN_C void abort(void);
EXTERN_C int printf(const char* format, ...);
EXTERN_C int puts(const char* s);
EXTERN_C size_t strlen(const char* s);
EXTERN_C int strcmp(const char* s1, const char* s2);
EXTERN_C void* __cxa_allocate_exception(size_t size);
EXTERN_C void __cxa_throw(void* thrown_exception, const void* info, void (*dest)(void*));
EXTERN_C void* __cxa_begin_catch(void* exc);
EXTERN_C void __cxa_end_catch(void);
EXTERN_C void __cxa_rethrow(void);

// Memory operators
EXTERN_C void* operator new(size_t size);
EXTERN_C void* operator new[](size_t size);
EXTERN_C void operator delete(void* ptr);
EXTERN_C void operator delete[](void* ptr);

// C++ RTTI type info (simplified)
struct __class_type_info {
    virtual ~__class_type_info() {}
};

// std::ios_base::Init for iostream initialization
namespace std {
    struct ios_base {
        struct Init {
            void Init() {}
            void ~Init() {}
        };
    };
}
EXTERN_C std::ios_base::Init __ioinit;

// Forward class declarations - MUST be before vtable structures that reference them
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Virtual table structures - full definitions (MUST be before class definitions that use them)
// Using void* pointers to avoid needing complete types in function signatures
struct vtable_Base { void* (*virtual_func)(void*, int); };
struct vtable_Derived { void* (*virtual_func)(void*, int); };
struct vtable_BaseA { void* (*funcA)(void*); };
struct vtable_BaseB { void* (*funcB)(void*); };
struct vtable_MiddleA { void* (*func)(void*); };
struct vtable_MiddleB { void* (*func)(void*); };
struct vtable_VirtualBase { void* (*func)(void*); };
struct vtable_RTTIBase { void (*dtor)(void*); };
struct vtable_RTTIDerivedA { void (*dtor)(void*); long long (*getType)(void*); };
struct vtable_RTTIDerivedB { void (*dtor)(void*); long long (*getType)(void*); };
struct vtable_MultiDerived { void* (*funcA)(void*); unsigned int (*funcB)(void*); void (*dtor)(void*); };
struct vtable_DiamondDerived { void* (*func)(void*); void (*dtor)(void*); };

// Full class definitions

struct Base {
    struct vtable_Base* __vptr;
    virtual long long virtual_func(int a2);
    virtual ~Base();
    const char* getName();
};

struct Derived {
    struct vtable_Derived* __vptr;
    unsigned int field0;
    unsigned int field4;
    unsigned int field8;
    virtual long long virtual_func(int a2);
    virtual ~Derived();
    const char* getName();
};

struct MultiDerived {
    vtable_MultiDerived* __vptr;
    unsigned int field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    virtual ~MultiDerived();
    long long funcA();
    unsigned int funcB();
};

struct DiamondDerived {
    vtable_DiamondDerived* __vptr;
    unsigned int field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    virtual ~DiamondDerived();
    long long func();
};

struct LifecycleClass {
    static int instance_count;
};

struct BaseA {
    virtual long long funcA();
    virtual ~BaseA();
};

struct BaseB {
    virtual long long funcB();
    virtual ~BaseB();
};

struct MiddleA {
    virtual long long func();
    virtual ~MiddleA();
};

struct MiddleB {
    virtual long long func();
    virtual ~MiddleB();
};

struct VirtualBase {
    virtual long long func();
    virtual ~VirtualBase();
};

struct RTTIBase {
    virtual ~RTTIBase();
};

struct RTTIDerivedA {
    virtual ~RTTIDerivedA();
    virtual long long getType();
};

struct RTTIDerivedB {
    virtual ~RTTIDerivedB();
    virtual long long getType();
};
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1630 @ 0x1630 */
void sub_1630()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x17C0 */
long long GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1914 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_2689;
 return (unsigned int)strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1964 */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // x0
 int v1; // w8
 long long i; // x9
 int v3; // w20

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v0[i] = v1;
 v1 += 10;
 }
 v3 = v0[2] + ++LifecycleClass::instance_count;
 operator delete[](v0);
 return (unsigned int)(v3 + 1000 * --LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x19D0 */
long long call_virtual_func(long long ( ***a1)(Base*, int))
{
 return (**a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x19EC */
long long test_cpp_virtual_func(void)
{
 int v0; // w19
 long long v2; // [xsp+0h] [xbp-10h] BYREF
 int v3; // [xsp+8h] [xbp-8h]
 long long ( **v4)(Base *__hidden, int); // [xsp+28h] [xbp+18h] BYREF

 v4 = &off_139A8;
 v3 = 3;
 v0 = Base::virtual_func((Base *)&v4, 5);
 return v0 + (unsigned int)Derived::virtual_func((Derived *)&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1A5C */
long long test_cpp_multiple_inheritance(void)
{
 int v0; // w20
 long long ( **v2)(MultiDerived *__hidden); // [xsp+0h] [xbp-20h] BYREF
 int v3; // [xsp+8h] [xbp-18h]
 unsigned int ( **v4)(MultiDerived *__hidden); // [xsp+10h] [xbp-10h] BYREF
 int v5; // [xsp+18h] [xbp-8h]

 v2 = &off_13A30;
 v4 = (unsigned int ( **)(MultiDerived *__hidden))&off_13A60;
 v3 = 100;
 v5 = 200;
 v0 = MultiDerived::funcA((MultiDerived *)&v2);
 return v0 + (*v4)((MultiDerived *)&v4) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1ACC */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // w0
 long long ( **v2)(DiamondDerived *__hidden); // [xsp+0h] [xbp-30h]
 long long ( **v3)(DiamondDerived *__hidden); // [xsp+10h] [xbp-20h]
 unsigned int ( **v4)(DiamondDerived *__hidden); // [xsp+20h] [xbp-10h] BYREF
 int v5; // [xsp+28h] [xbp-8h]

 v2 = &off_13B38;
 v4 = (unsigned int ( **)(DiamondDerived *__hidden))&off_13BA0;
 v3 = &off_13B68;
 v5 = 50;
 v0 = thunk_v_DiamondDerived_func((DiamondDerived *)&v4);
 v5 = 100;
 return (*v4)((DiamondDerived *)&v4) + v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B54 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B5C */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1B64 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6C */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1B74 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1C64 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1C6C */
long long test_cpp_rtti(void)
{
 long long *v0; // x19
 unsigned long long *v1; // x0
 long long v2; // x8
 const void *v3; // x20
 const char *v4; // x21
 int v5; // w22
 const char *v6; // x0
 int v7; // w8
 int v8; // w23
 int v9; // w22
 const char *v10; // x0
 int v11; // w21

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_13D58;
 v1 = (unsigned long long *)operator new(8u);
 v2 = *v0;
 *v1 = 0;
 v3 = v1;
 *v1 = off_13D80;
 v4 = *(const char **)(*(unsigned long long *)(v2 - 8) + 8LL);
 if ( v4 == "12RTTIDerivedA" )
 {
 v5 = 10;
 }
 else if ( *v4 == 42 )
 {
 v5 = 0;
 }
 else if ( !strcmp(v4, "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else
 {
 v5 = 0;
 }
 v6 = *(const char **)(*(unsigned long long *)(*(unsigned long long *)v3 - 8LL) + 8LL);
 if ( v6 == "12RTTIDerivedB" )
 v7 = 1;
 else
 v7 = *v6 != 42 && strcmp(v6, "12RTTIDerivedB") == 0;
 if ( v7 )
 v8 = v5 | 0x14;
 else
 v8 = v5;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v8 += 100;
 }
 if ( __dynamic_cast(
 v3,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v9 = v8 + 200;
 }
 else
 {
 v9 = v8;
 }
 if ( *v4 == 42 )
 v10 = v4 + 1;
 else
 v10 = v4;
 v11 = strlen(v10);
 (*(void ( **)(long long *))(*v0 + 8))(v0);
 (*(void ( **)(const void *))(*(unsigned long long *)v3 + 8LL))(v3);
 return (unsigned int)(v9 + v11);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1E04 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned int *v1; // x0
 int v2; // w8
 long long i; // x9
 int v4; // w20
 long long v5; // x1
 int v6; // w19
 int v7; // w0
 int v8; // w0
 int v9; // w20
 int v10; // w0
 long long ( **v11)(Base *__hidden, int); // [xsp+8h] [xbp-38h] BYREF
 unsigned char v12[40]; // [xsp+10h] [xbp-30h] BYREF
 int v13; // [xsp+38h] [xbp-8h]

 puts(asc_25F9);
 *(unsigned int *)v12 = 10;
 *(unsigned long long *)&v12[4] = *(unsigned long long *)"Test";
 memset(&v12[19], 0, 17);
 v0 = strlen(&v12[4]);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 v1 = (unsigned int *)operator new[](0x14u);
 v2 = 0;
 for ( i = 0; i != 5; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 v4 = v1[2] + ++LifecycleClass::instance_count;
 operator delete[](v1);
 v5 = (unsigned int)(v4 + 1000 * --LifecycleClass::instance_count);
 printf(aCppL302D, v5);
 *(unsigned int *)&v12[8] = 3;
 v11 = &off_139A8;
 *(unsigned long long *)v12 = &off_139E8;
 v6 = Base::virtual_func((Base *)&v11, 5);
 v7 = (**(long long ( ***)(unsigned char *, long long))v12)(v12, 5);
 printf(aCppL303D, (unsigned int)(v6 + v7 + 21));
 *(unsigned long long *)v12 = &off_13A30;
 *(unsigned long long *)&v12[16] = &off_13A60;
 *(unsigned int *)&v12[8] = 100;
 *(unsigned int *)&v12[24] = 200;
 v8 = thunk_nv_MultiDerived_funcB((MultiDerived *)&v12[16]);
 printf(aCppL304D, (unsigned int)(v8 + 31));
 *(unsigned long long *)v12 = &off_13B38;
 *(unsigned long long *)&v12[32] = &off_13BA0;
 *(unsigned long long *)&v12[16] = &off_13B68;
 v13 = 50;
 v9 = thunk_v_DiamondDerived_func((DiamondDerived *)&v12[32]);
 *(unsigned int *)&v12[*(unsigned long long *)(*(unsigned long long *)v12 + 0xFFFFFFFFFFFFFFE8LL) + 8] = 100;
 v10 = (**(long long ( ***)(DiamondDerived *__hidden))&v12[32])((DiamondDerived *)&v12[32]);
 printf(aCppL305D, (unsigned int)(v10 + v9));
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x2050 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2068 */
long long Base::virtual_func(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2070 */
long long Derived::virtual_func(Derived *this, int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZN4BaseD2Ev @ 0x207C */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2080 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2084 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2088 */
long long template_max<int>(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2094 */
double template_max<double>(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x20A0 */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x20B4 */
long long Container<int>::Container(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x20BC */
long long Container<int>::push(long long result, int a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 40);
 if ( (int)v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x20D8 */
long long Container<int>::get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20F8 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2100 */
long long Container<double>::Container(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2108 */
long long Container<double>::push(long long result, double a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 80);
 if ( (int)v2 <= 9 )
 {
 *(double *)(result + 8 * v2) = a2;
 *(unsigned int *)(result + 80) = v2 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2124 */
double Container<double>::get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2140 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x2148 */
const char * Base::getName(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2154 */
void Base::~Base(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2168 */
const char * Derived::getName(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2174 */
void Derived::~Derived(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2188 */
long long MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2190 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x21A4 */
long long MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


// non-virtual thunk to MultiDerived::funcB
long long thunk_nv_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


// non-virtual thunk to MultiDerived::~MultiDerived (deleting destructor)
void thunk_nv_MultiDerived_d1(MultiDerived *this)
{
 ;
}


// non-virtual thunk to MultiDerived::~MultiDerived (virtual destructor)
void thunk_nv_MultiDerived_d0(MultiDerived *this)
{
 operator delete((char *)this - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x21D0 */
long long BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x21D8 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x21DC */
void BaseA::~BaseA(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x21F0 */
long long BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x21F8 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x21FC */
void BaseB::~BaseB(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2210 */
long long MiddleA::func(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2228 */
void MiddleA::~MiddleA(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x222C */
void MiddleA::~MiddleA(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2240 */
// virtual thunk to MiddleA::func
long long thunk_v_MiddleA_func_(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2264 */
// virtual thunk to MiddleA::~MiddleA (deleting destructor)
void thunk_v_MiddleA_d1(MiddleA *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2268 */
// virtual thunk to MiddleA::~MiddleA (virtual destructor)
void thunk_v_MiddleA_d0(MiddleA *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2288 */
long long MiddleB::func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x22A0 */
void MiddleB::~MiddleB(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x22A4 */
void MiddleB::~MiddleB(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x22B8 */
// virtual thunk to MiddleB::func
long long thunk_v_MiddleB_func(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x22DC */
// virtual thunk to MiddleB::~MiddleB (deleting destructor)
void thunk_v_MiddleB_d1(MiddleB *this)
{
 ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2300 */
long long DiamondDerived::func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2318 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x232C */
// non-virtual thunk to DiamondDerived::func
long long thunk_nv_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2344 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2348 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 operator delete((char *)this - 16);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2360 */
// virtual thunk to DiamondDerived::func
long long thunk_v_DiamondDerived_func(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2384 */
// virtual thunk to DiamondDerived::~DiamondDerived (deleting destructor)
void thunk_v_DiamondDerived_d0(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2388 */
// virtual thunk to DiamondDerived::~DiamondDerived (deleting destructor)
void thunk_v_DiamondDerived_d0(DiamondDerived *this)
{
 operator delete((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x23A8 */
long long VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x23B0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x23B4 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x23C8 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x23DC */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x23E4 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x23E8 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x23FC */
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x2404 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14140 */

/* FAILED to decompile: puts @ 0x14150 */

/* FAILED to decompile: strlen @ 0x14158 */

/* FAILED to decompile: __cxa_begin_catch @ 0x14160 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x14168 */

/* FAILED to decompile: __cxa_finalize @ 0x14170 */

/* FAILED to decompile: __libc_start_main @ 0x14180 */

/* FAILED to decompile: _ZdlPv @ 0x14188 */

/* FAILED to decompile: _Znwm @ 0x14190 */

/* FAILED to decompile: __dynamic_cast @ 0x14198 */

/* FAILED to decompile: __cxa_atexit @ 0x141A0 */

/* FAILED to decompile: _ZdaPv @ 0x141A8 */

/* FAILED to decompile: strcmp @ 0x141B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x141C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x141C8 */

/* FAILED to decompile: abort @ 0x141D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x141D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x141E0 */

/* FAILED to decompile: __cxa_throw @ 0x141E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x141F8 */

/* FAILED to decompile: printf @ 0x14200 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14208 */

/* FAILED to decompile: __gmon_start__ @ 0x14218 */

/* Total functions decompiled: 85, failed: 23 */
