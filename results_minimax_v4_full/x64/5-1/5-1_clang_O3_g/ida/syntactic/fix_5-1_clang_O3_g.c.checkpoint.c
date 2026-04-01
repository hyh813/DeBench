/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O3_g
 * Processor: pc
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <typeinfo>
#include <new>

// External runtime symbols
extern "C" void (*_gmon_start__)(void);

// JUMPOUT macro - used for unreachable code in decompiled output
#define JUMPOUT(addr) ((void)0)

// Data constants
extern "C" {
extern const char xmmword_21F8[17];
}

// External CRT symbols
extern "C" {
void *_dso_handle;
void *__cxa_allocate_exception(unsigned long);
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
void __cxa_throw(void *exception, void *type_info, void *dest);
}

// Type info for int (used by exception handling)
extern "C" {
struct type_info {
    virtual ~type_info() {}
    const char *name() const { return "int"; }
};
const type_info type_info_for_int;
}

// Vtable pointers for RTTI classes
extern "C" {
extern const void *off_3D78;
extern const void *off_3DA0;
}

// Global string for puts
extern "C" const char s[] = "C++ features demo";

// Forward declarations and class definitions
// Forward declarations for RTTI classes
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

class Base {
public:
    virtual int virtual_func(int x);
    int (*_vptr$Base)(Base *, int);
};

int Base::virtual_func(int x) {
    return x;
}

class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Container template class definition
template<typename T>
class Container {
public:
    T data[10];
    int size;
    
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

template<typename T>
Container<T>::Container() : size(0) {}

template<typename T>
void Container<T>::push(T value) {
    if (size <= 9) {
        data[size] = value;
        size = size + 1;
    }
}

template<typename T>
T Container<T>::get(int idx) const {
    if (idx >= 0 && size > idx) {
        return data[idx];
    }
    return T();
}

template<typename T>
int Container<T>::getSize() const {
    return size;
}

// Format strings
const char* format = "%d\n";
const char* aCppL302D = "Cpp L302: %d\n";
const char* aCppL303D = "Cpp L303: %d\n";
const char* aCppL304D = "Cpp L304: %d\n";
const char* aCppL305D = "Cpp L305: %d\n";
const char* aCppL306D = "Cpp L306: %d\n";
const char* aCppL307D = "Cpp L307: %d\n";
const char* aCppL308D = "Cpp L308: %d\n";
const char* aCppL309D = "Cpp L309: %d\n";

// Namespace std
namespace std {
    struct ios_base {
        struct Init {
            ~Init() {}
        };
    };
    ios_base::Init __ioinit;
}

// Definition for xmmword_21F8 (likely string data)
extern "C" const char xmmword_21F8[17] = "test_string_data";

/* Function: .init_proc @ 0x1000 - CRT stub removed */



/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


// Helper function to call the std::ios_base::Init destructor
extern "C" void __ios_base_Init_destructor(void* ptr) {
    ((std::ios_base::Init*)ptr)->~Init();
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
void GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit(&__ios_base_Init_destructor, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
int test_cpp_member_func()
{
 char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 // Copy the string from xmmword_21F8
 strncpy(s, xmmword_21F8, sizeof(s) - 1);
 s[sizeof(s) - 1] = '\0';
 v2 = 0;
 return strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
int call_virtual_func(Base *obj, int x)
{
 return obj->_vptr$Base(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
int test_cpp_exception()
{
 void *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 __cxa_throw(exception, (struct type_info *)&type_info_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
int test_cpp_smart_ptr()
{
 return 703;
}


// RTTI classes for dynamic_cast test
class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType() const = 0;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    int getType() const override;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    int getType() const override;
};

/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // r14
 RTTIDerivedB *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = new RTTIDerivedA();
 v1 = new RTTIDerivedB();
 v2 = 130;
 if ( !dynamic_cast<RTTIBase*>(v0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !dynamic_cast<RTTIBase*>(v1) )
 v3 = v2;
 delete v0;
 delete v1;
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 memcpy(s, xmmword_21F8, 16);
 v2 = 0;
 v0 = strlen((const char*)s);
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
T template_max(T a, T b);

// Template function declaration
template<typename T>
T template_max(T a, T b);

// Template specialization for int
template<>
int template_max<int>(int a, int b)
{
 return a > b ? a : b;
}


// Template function declaration
template<typename T>
void template_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template specialization for int
template<>
void template_swap<int>(int &a, int &b)
{
 int v2; // eax

 v2 = a;
 a = b;
 b = v2;
}

// Explicit specialization for Container<int>::getSize
template<>
int Container<int>::getSize() const
{
 return size;
}


// Explicit specialization for Container<double>::Container
template<>
Container<double>::Container()
{
 this->size = 0;
}


// Explicit specialization for Container<double>::push
template<>
void Container<double>::push(double value)
{
 unsigned long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


// Explicit specialization for Container<double>::get
template<>
double Container<double>::get(int idx) const
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


// Explicit specialization for Container<double>::getSize
template<>
int Container<double>::getSize() const
{
 return this->size;
}


// RTTIDerivedA destructor
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


// RTTIDerivedA::getType
int RTTIDerivedA::getType() const
{
 return 1;
}


// RTTIBase destructor
RTTIBase::~RTTIBase()
{
 ;
}


// RTTIDerivedB destructor
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


// RTTIDerivedB::getType
int RTTIDerivedB::getType() const
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
