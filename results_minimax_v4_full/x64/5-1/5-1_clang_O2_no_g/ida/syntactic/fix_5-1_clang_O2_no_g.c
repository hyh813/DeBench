/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O2_no_g
 * Processor: pc
 */

#include <cstddef>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <typeinfo>
#include <cstdlib>
#include <ios>

// External declarations for CRT symbols
extern void (*_gmon_start__)(void);
extern void *_dso_handle;

// strlen and strcpy declarations
extern "C" size_t strlen(const char *s);
extern "C" char *strcpy(char *dest, const char *src);

static const char xmmword_21F8[16] = "Hello, World!";

// Format strings
static const char *format = "%d\n";
static const char *aCppL302D = "CppL30: %d\n";
static const char *aCppL303D = "CppL30: %d\n";
static const char *aCppL304D = "CppL30: %d\n";
static const char *aCppL305D = "CppL30: %d\n";
static const char *aCppL306D = "CppL30: %d\n";
static const char *aCppL307D = "CppL30: %d\n";
static const char *aCppL308D = "CppL30: %d\n";
static const char *aCppL309D = "CppL30: %d\n";

// Global string - non-const for strcpy operations
static char s[] = "Hello from C++!";

// Type info for RTTI
extern "C" {
    extern void *RTTIBase__typeinfo;
    extern void *RTTIDerivedA__typeinfo;
    extern void *RTTIDerivedB__typeinfo;
}

// __dynamic_cast intrinsic declaration
extern "C" void *__dynamic_cast(
    const void *src_ptr,
    const struct __class_type_info *src_type,
    const struct __class_type_info *dst_type,
    ptrdiff_t src2dst);

// Declare __cxa_atexit
extern "C" int __cxa_atexit(void (*)(void *), void *, void *);

// Forward declarations
struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

struct Base;

struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() = 0;
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() override;
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType() override;
};

namespace std {
    static ios_base::Init __ioinit;
}

template<typename T>
struct Container {
    int size;
    T data[10];
    int count;
};

// Template specializations for Container<int>
template<>
struct Container<int> {
    int size;
    int data[10];
    int count;
    
    Container() : count(0) {}
    long long push(int a2);
    long long get(long long a1, int a2);
    long long getSize(long long a1);
};

long long Container<int>::push(int a2)
{
    long long result = count;
    if ( result <= 9 )
    {
        count = result + 1;
        data[result] = a2;
    }
    return result;
}

// Template specializations for Container<double>
template<>
struct Container<double> {
    int size;
    double data[10];
    int count;
    
    Container();
    long long push(long long a1, double a2);
    double get(long long a1, int a2);
    long long getSize(long long a1);
};

long long Container<double>::push(long long a1, double a2)
{
    long long result = *(int *)(a1 + 80);
    if ( result <= 9 )
    {
        *(unsigned int *)(a1 + 80) = result + 1;
        *(double *)(a1 + 8 * result) = a2;
    }
    return result;
}

double Container<double>::get(long long a1, int a2)
{
    double result = 0.0;
    if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
        return *(double *)(a1 + 8LL * (unsigned int)a2);
    return result;
}

long long Container<double>::getSize(long long a1)
{
    return *(unsigned int *)(a1 + 80);
}

/* Function: .init_proc @ 0x1000 */
void (*init_proc(void))(void)
{
    if (&_gmon_start__)
        _gmon_start__();
    return NULL;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 // Empty function - was likely a jump stub in original binary
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
int GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 // Use a wrapper to properly call the destructor
 auto destroy_ioinit = [](void *ptr) {
     ((std::ios_base::Init *)ptr)->~Init();
 };
 return __cxa_atexit(destroy_ioinit, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
long long test_cpp_member_func(void)
{
 // Copy string from global data (which contains "Hello, World!")
 strcpy(s, (const char *)xmmword_21F8);
 return strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
long long call_virtual_func(long long (*a1)(unsigned long long))
{
 return a1(0ULL);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
long long test_cpp_lambda(void)
{
 return 85;
}


// Include the C++ exception header
#include <exception>

// Declare __cxa_allocate_exception and __cxa_throw
extern "C" void *__cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void *, const std::type_info *, void *);

/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
void test_cpp_exception(void)
{
 void *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *(int *)exception = 42;
 __cxa_throw(exception, &typeid(int), 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


// Vtable pointers for RTTI test - these would normally be in the binary's data section
// Vtable pointers for RTTI test - these would normally be in the binary's data section
// Using function addresses as stand-ins for vtable addresses
static const unsigned long long vtable_RTTIDerivedA = 0x3D78;
static const unsigned long long vtable_RTTIDerivedB = 0x3DA0;

/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // r14
 void *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = (unsigned long long *)operator new(8u);
 *v0 = vtable_RTTIDerivedA;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = vtable_RTTIDerivedB;
 v2 = 130;
 if ( !__dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedA),
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedB),
 0) )
 v3 = v2;
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 // Copy 16 bytes from xmmword_21F8 to s - using memcpy approach
 memcpy(s, xmmword_21F8, 16);
 v2 = 0;
 v0 = strlen((const char *)s);
 printf(format, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


// Template function declaration
template<typename T>
T template_max(T a1, T a2);

/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
template<>
long long template_max<long long>(long long a1, long long a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
template<>
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


// Template function declaration
template<typename T>
void template_swap(T &a1, T &a2);

/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
template<>
void template_swap<int>(int &a1, int &a2)
{
 int result = a1;
 a1 = a2;
 a2 = result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
Container<int>::Container() : count(0) {}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
long long Container<int>::get(long long a1, int a2)
{
 long long result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * (unsigned int)a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
void Container<double>::Container(long long a1)
{
 *(unsigned int *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
long long Container<double>::push(long long a1, double a2)
{
 long long result; // rax

 result = *(int *)(a1 + 80);
 if ( result <= 9 )
 {
 *(unsigned int *)(a1 + 80) = result + 1;
 *(double *)(a1 + 8 * result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
double Container<double>::get(long long a1, int a2)
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * (unsigned int)a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
long long RTTIDerivedB::getType()
{
 return 2;
}


/* Function: .term_proc @ 0x17C8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: printf @ 0x40D8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40E0 */

/* FAILED to decompile: strlen @ 0x40E8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x40F0 */

/* FAILED to decompile: __libc_start_main @ 0x4100 */

/* FAILED to decompile: __cxa_atexit @ 0x4108 */

/* FAILED to decompile: _ZdlPv @ 0x4110 */

/* FAILED to decompile: _Znwm @ 0x4118 */

/* FAILED to decompile: __dynamic_cast @ 0x4120 */

/* FAILED to decompile: __cxa_rethrow @ 0x4130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4138 */

/* FAILED to decompile: puts @ 0x4140 */

/* FAILED to decompile: __cxa_end_catch @ 0x4148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4150 */

/* FAILED to decompile: __cxa_throw @ 0x4158 */

/* FAILED to decompile: _Unwind_Resume @ 0x4160 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4168 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4170 */

/* FAILED to decompile: __gmon_start__ @ 0x4180 */

/* Total functions decompiled: 40, failed: 19 */
