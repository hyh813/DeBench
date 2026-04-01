/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O3_no_g
 * Processor: pc
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cmath>
#include <typeinfo>
#include <iostream>

// CRT globals
extern void (*_gmon_start__)(void);
extern void *_dso_handle;
extern void *__cxa_allocate_exception(size_t);
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch();
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_throw(void *, const std::type_info *, void (*)(void *));
extern void *__cxa_rethrow();
extern void *_Znwm(size_t);
extern void _ZdlPv(void *);
// Define __class_type_info for RTTI
namespace __cxxabiv1 {
    struct __class_type_info {};
}
using __class_type_info = __cxxabiv1::__class_type_info;
extern void *__dynamic_cast(const void *, const __class_type_info *, const __class_type_info *, ptrdiff_t);
extern int __gxx_personality_v0(...);
extern void _Unwind_Resume(void *);

// iostream initialization
namespace std {
    ios_base::Init __ioinit;
}

// Data segment - 17 byte constant string
const char xmmword_21F8[17] = "CPP OOP Features";

// Missing string constants
const char *format = "%s\n";
const char *aCppL302D = "CPP L302: %d\n";
const char *aCppL303D = "CPP L303: %d\n";
const char *aCppL304D = "CPP L304: %d\n";
const char *aCppL305D = "CPP L305: %d\n";
const char *aCppL306D = "CPP L306: %d\n";
const char *aCppL307D = "CPP L307: %d\n";
const char *aCppL308D = "CPP L308: %d\n";
const char *aCppL309D = "CPP L309: %d\n";
const char *s = "CPP OOP Features";

// RTTI class declarations
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    virtual int getType() { return 0; }
};
class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual int getType() const { return 1; }
};
class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual int getType() override { return 2; }
};

// Helper functions to simulate virtual function calls (since member function pointers can't be cast to void*)
static int RTTIDerivedA_getType_helper() { return 1; }
static int RTTIDerivedB_getType_helper() { return 2; }

// vtable pointers for RTTI classes
void* off_3D78 = (void*)&RTTIDerivedA_getType_helper;
void* off_3DA0 = (void*)&RTTIDerivedB_getType_helper;


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
// Helper function for destructor registration
static void ioinit_destructor(void *arg) {
    ((std::ios_base::Init*)arg)->~Init();
}

int GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 return __cxa_atexit(ioinit_destructor, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Mock class used in test_cpp_constructor
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;


/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
long long test_cpp_member_func(void)
{
 char s[31]; // [rsp+4h] [rbp-24h] BYREF

 memcpy(s, xmmword_21F8, 17);
 s[17] = '\0';  // Null terminate the string
 return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
long long call_virtual_func(long long ( ***a1)(long long))
{
 return (**a1)(0);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
long long test_cpp_virtual_func(void)
{
 return 42LL;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */


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


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (const std::type_info *)&typeid(int), 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
long long test_cpp_rtti(void)
{
 void **v0; // r14
 void **v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = new void*;
 *v0 = off_3D78;
 v1 = new void*;
 *v1 = off_3DA0;
 v2 = 130;
 if ( !__dynamic_cast(
 v0,
 (const __class_type_info *)&typeid(RTTIBase),
 (const __class_type_info *)&typeid(RTTIDerivedA),
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__dynamic_cast(
 v1,
 (const __class_type_info *)&typeid(RTTIBase),
 (const __class_type_info *)&typeid(RTTIDerivedB),
 0) )
 v3 = v2;
 delete v0;
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 memcpy(s, xmmword_21F8, 17);
 s[17] = '\0';
 v2 = 0;
 v0 = strlen(s);
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


// Template class Container
template<typename T>
class Container {
public:
    T data[10];
    unsigned int size;
    Container();
    long long push(T value);
    long long get(int index);  // Changed return type to long long
    long long getSize();
};

// Primary template for template_max
template<typename T>
T template_max(T a1, T a2);

// Primary template for template_swap
template<typename T>
T template_swap(T *a1, T *a2);

// Template specialization for int
template<>
int template_max(int a1, int a2)
{
 int result; // rax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


// Template specialization for double
template<>
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


// Template specialization for template_swap
template<>
unsigned int template_swap<unsigned int>(unsigned int *a1, unsigned int *a2)
{
 unsigned int result; // rax

 result = *a1;
 *a1 = *a2;
 *a2 = result;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
Container<int>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
long long Container<int>::push(int a2)
{
 long long result; // rax

 result = size;
 if ( result <= 9 )
 {
 size = result + 1;
 data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
long long Container<int>::get(int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && size > (unsigned int)a2 )
 return data[a2];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
long long Container<int>::getSize()
{
 return size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
Container<double>::Container()
{
 size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
long long Container<double>::push(double a2)
{
 long long result; // rax

 result = size;
 if ( result <= 9 )
 {
 size = result + 1;
 data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
long long Container<double>::get(int a2)
{
 long long result; // rax

 result = 0;
 if ( a2 >= 0 && size > (unsigned int)a2 )
 return data[a2];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
long long Container<double>::getSize()
{
 return size;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
RTTIBase::~RTTIBase()
{
 ;
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
