/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_Os_g
 * Processor: pc
 */

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <new>
#include <typeinfo>
#include <cmath>
#include <iostream>

// External declarations
extern "C" {
    void (*_gmon_start__)(void);
    void *__dso_handle;
    void* __cxa_allocate_exception(unsigned long);
    void __cxa_throw(void*, void*, void*);
    void* __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void __cxa_rethrow();
}

// __cxa_dynamic_cast should be provided by the C++ runtime library (-lstdc++)
// The implementation is in libstdc++/libc++. No local definition needed.
// Link with -lstdc++ to resolve this symbol

// __cxa_dynamic_cast - provided by C++ runtime library (libstdc++)
// We don't define it here - link with -lstdc++ to get the real implementation
// If the library doesn't provide it, the linker will tell us

// LifecycleClass definition
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Base class for virtual function test
class Base {
public:
    virtual int virtual_func(int x) { return x; }
};

// Global constants from the binary
unsigned long long xmmword_21F8[2] = {0, 0};

// Global string constants
const char* s = "C++";
const char* format = "%d\n";
const char* aCppL302D = "cpp constructor: %d\n";
const char* aCppL303D = "cpp virtual func: %d\n";
const char* aCppL304D = "cpp multiple inheritance: %d\n";
const char* aCppL305D = "cpp diamond inheritance: %d\n";
const char* aCppL306D = "cpp operator overload: %d\n";
const char* aCppL307D = "cpp template func: %d\n";
const char* aCppL308D = "cpp template class: %d\n";
const char* aCppL309D = "cpp lambda: %d\n";

// RTTI classes
class RTTIBase {
public:
    virtual ~RTTIBase();
};
class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    inline virtual int getType() const { return 1; }
};
class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    inline virtual int getType() const { return 2; }
};

// Forward declarations for vtable pointers
extern "C" {
    void* off_3D78;
    void* off_3DA0;
}

/* Function: .init_proc @ 0x1000 */
void (**init_proc())(void)
{
 void (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 _gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 // Empty function - was a jump target in original binary
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
// Note: iostream initialization is handled automatically when including <iostream>
void GLOBAL__sub_I_5_1_cpp()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x125C */
int test_cpp_member_func()
{
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8[0];
 return strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1294 */
int test_cpp_constructor()
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v0[2] + LifecycleClass::instance_count;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12E5 */
int call_virtual_func(Base *obj, int x)
{
 return obj->virtual_func(x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12ED */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12F3 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12F9 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12FF */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1305 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x130B */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1311 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1317 */
int test_cpp_exception()
{
 void *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *(int *)exception = 42;
 __cxa_throw(exception, (void*)&typeid(int), 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13D7 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13DD */
int test_cpp_rtti()
{
 unsigned long long *v0; // r14
 unsigned long long *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = (unsigned long long *)operator new(8u);
 *v0 = (unsigned long long)&off_3D78;
 v1 = (unsigned long long *)operator new(8u);
 *v1 = (unsigned long long)&off_3DA0;
 v2 = 130;
 if ( !__cxa_dynamic_cast(
 (const void *)*v0,
 (const std::type_info *)&typeid(RTTIBase),
 (const std::type_info *)&typeid(RTTIDerivedA),
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__cxa_dynamic_cast(
 (const void *)*v1,
 (const std::type_info *)&typeid(RTTIBase),
 (const std::type_info *)&typeid(RTTIDerivedB),
 0) )
 v3 = v2;
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x147F */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned int v1; // eax
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 puts(::s);
 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8[0];
 v0 = strlen(s);
 printf(format, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x15A8 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x15B2 */
template<typename T>
T template_max(T a, T b)
{
 return (a > b) ? a : b;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x15BF */
template<typename T>
void template_swap(T *a, T *b)
{
 T v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


// Container template class
template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container() : size(0) {}
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};


/* Function: _ZN9ContainerIiEC2Ev @ 0x15C8 */
template<>
Container<int>::Container() : size(0) {
}

/* Function: _ZN9ContainerIiE4pushEi @ 0x15D0 */
template<>
void Container<int>::push(int value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x15E4 */
template<>
int Container<int>::get(int idx) const
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x15F6 */
template<>
int Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x15FA */
template<>
Container<double>::Container() : size(0) {
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1602 */
template<>
void Container<double>::push(double value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1618 */
template<>
double Container<double>::get(int idx) const
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x162C */
template<>
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1630 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}





/* Function: _ZN8RTTIBaseD2Ev @ 0x163C */
RTTIBase::~RTTIBase()
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x163E */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}





/* Function: .term_proc @ 0x164C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x40E0 */

/* FAILED to decompile: printf @ 0x40F0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40F8 */

/* FAILED to decompile: strlen @ 0x4100 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4108 */

/* FAILED to decompile: __libc_start_main @ 0x4118 */

/* FAILED to decompile: __cxa_atexit @ 0x4120 */

/* FAILED to decompile: _ZdlPv @ 0x4128 */

/* FAILED to decompile: _Znwm @ 0x4130 */

/* FAILED to decompile: __cxa_dynamic_cast @ 0x4138 */

/* FAILED to decompile: _ZdaPv @ 0x4140 */

/* FAILED to decompile: __cxa_rethrow @ 0x4150 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4158 */

/* FAILED to decompile: puts @ 0x4160 */

/* FAILED to decompile: __cxa_end_catch @ 0x4168 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4170 */

/* FAILED to decompile: __cxa_throw @ 0x4178 */

/* FAILED to decompile: _Unwind_Resume @ 0x4180 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4188 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4190 */

/* FAILED to decompile: __gmon_start__ @ 0x41A0 */

/* Total functions decompiled: 40, failed: 21 */
