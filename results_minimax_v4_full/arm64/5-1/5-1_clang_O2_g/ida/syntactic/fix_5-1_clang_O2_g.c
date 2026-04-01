/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O2_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// C++ typeinfo header - for C++ compilation
// For C compilation, we provide minimal definitions
#ifdef __cplusplus
#include <typeinfo>
#include <new>      // For std::nothrow
#include <ios>      // For std::ios_base::Init
#else
// Minimal type_info equivalent for C compilation
struct type_info {
    virtual ~type_info() {}
};
#endif

// Standard C++ operators declaration
void* operator new(size_t size);
void operator delete(void* ptr);
void* operator new[](size_t size);
void operator delete[](void* ptr);

// Weak function declaration for runtime linking
__attribute__((weak)) long long call_weak_fn(void);

// Standard C++ operators declaration - needed for both C and C++ modes
void* operator new(size_t size);
void operator delete(void* ptr);
void* operator new[](size_t size);
void operator delete[](void* ptr);

// type_info declaration - needed for both C and C++ modes
struct type_info {
    virtual ~type_info() {}
};

// __dynamic_cast declaration for RTTI
extern "C" void* __dynamic_cast(const void*, const type_info*, const type_info*, long);

// __cxa_exception related declarations
extern void* __cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void* thrown_exception, void* type_info, void* destructor);

// Base class - MUST be defined before use in functions
// Available in both C and C++ modes for this exercise
struct Base {
    void* _vptr$Base;  // vtable pointer
    virtual ~Base() {}
    virtual int virtFunc(int x) { return x; }
};

// LifecycleClass - MUST be defined before use in functions
// Available in both C and C++ modes for this exercise
struct LifecycleClass {
    static int instance_count;
    int value;
    
    LifecycleClass() : value(0) {}
    virtual ~LifecycleClass() {}
};

int LifecycleClass::instance_count = 0;

// LifecycleClass - MUST be defined before use in functions
// Available in both C and C++ modes for this exercise
struct LifecycleClass {
    static int instance_count;
    int value;
    
    LifecycleClass() : value(0) {}
    virtual ~LifecycleClass() {}
};

int LifecycleClass::instance_count = 0;

// std::ios_base::Init declaration for static initialization
// Only available in C++ mode
#ifdef __cplusplus
namespace std {
    struct ios_base {
        virtual ~ios_base() {}
        struct Init {
            Init();
            ~Init();
        };
    };
    static ios_base::Init __ioinit;
}
// Also define __cxa_atexit for static destructor registration
extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *_dso_handle;
#else
// In C mode, don't use std:: prefix - just declare directly
// The GLOBAL__sub_I_ function won't be called in C mode anyway
// For C compilation, provide minimal definitions
struct ios_base_Init {
    ios_base_Init() {}
    ~ios_base_Init() {}
};
static struct ios_base_Init __ioinit;

// Also declare operator new/delete for C compilation
void* operator new(size_t size);
void operator delete(void* ptr);
void* operator new[](size_t size);
void operator delete[](void* ptr);

// For C compilation, declare __cxa_atexit
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *_dso_handle;

// For C compilation, declare C++ exception handling functions
extern void* __cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void* thrown_exception, void* type_info, void* destructor);
#endif

// Missing string constant
static const unsigned long long xmmword_175B = 0x74736554_72656464ULL; // "Test" reversed + more

// String literals
static const char aCppL301D[] = "Cpp L301: %d\n";
static const char aCppL302D[] = "Cpp L302: %d\n";
static const char aCppL303D[] = "Cpp L303: %d\n";
static const char aCppL304D[] = "Cpp L304: %d\n";
static const char aCppL305D[] = "Cpp L305: %d\n";
static const char aCppL306D[] = "Cpp L306: %d\n";
static const char aCppL307D[] = "Cpp L307: %d\n";
static const char aCppL308D[] = "Cpp L308: %d\n";
static const char aCppL309D[] = "Cpp L309: %d\n";
static const char aCppL401D[] = "Cpp L401: %d\n";
static const char aCppL402D[] = "Cpp L402: %d\n";
static const char aCppL403D[] = "Cpp L403: %d\n";
static const char asc_1728[] = "Cpp Features:\n";

// Template class forward declaration
template<typename T> struct Container;

// RTTI classes forward declaration
struct RTTIBase {
    virtual ~RTTIBase() {}
};

struct RTTIDerivedA : public RTTIBase {
    virtual ~RTTIDerivedA() {}
    int getType() { return 1; }
};

struct RTTIDerivedB : public RTTIBase {
    virtual ~RTTIDerivedB() {}
    int getType() { return 2; }
};

// External vtable pointers (for RTTI)
void* off_11D58 = nullptr;
void* off_11D80 = nullptr;

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 return;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
// This function is only compiled in C++ mode
#ifdef __cplusplus
void GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}
#else
void GLOBAL__sub_I_5_1_cpp()
{
 // No initialization needed in C mode
}
#endif



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
int test_cpp_member_func()
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_175B;
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


// Base class - MUST be defined before use in functions
// Available in both C and C++ modes for this exercise
struct Base {
    void* _vptr$Base;  // vtable pointer
    virtual ~Base() {}
    virtual int virtFunc(int x) { return x; }
};

/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(struct Base *obj, int x)
{
 return ((long long ( *)(struct Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1088 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1090 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1098 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10A0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10A8 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10B0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10B8 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&`type_info for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
int test_cpp_rtti()
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator new(8u);
 *v0 = &off_11D58;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = &off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v2 = 130;
 }
 else
 {
 v2 = 30;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1278 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1728);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_175B;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
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


/* Function: sub_1370 @ 0x1370 */
// positive sp value has been detected, the output may be wrong!
long long sub_1370(unsigned int a1)
{
 unsigned long long *v1; // x19
 void *v2; // x20
 int v3; // w22
 int v4; // w21

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = (unsigned long long *)operator new(8u);
 *v1 = &off_11D58;
 v2 = (void *)operator new(8u);
 *(unsigned long long *)v2 = &off_11D80;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v3 = 130;
 }
 else
 {
 v3 = 30;
 }
 if ( __dynamic_cast(
 v2,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v4 = v3 + 200;
 }
 else
 {
 v4 = v3;
 }
 operator delete(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v2 + 8LL))(v2);
 return printf(aCppL403D, (unsigned int)(v4 + 14));
}


/* Function: main @ 0x144C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_1458 @ 0x1458 */
// positive sp value has been detected, the output may be wrong!
long long sub_1458()
{
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1464 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1470 */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x147C */
void template_swap<int>(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1490 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1498 */
void Container<int>::push(Container<int> *this, int value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x14B4 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14D4 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14DC */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14E4 */
void Container<double>::push(Container<double> *this, double value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1500 */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x151C */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1524 */
// attributes: thunk
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1528 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1530 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1534 */
// attributes: thunk
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1538 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x1540 */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x12130 */

/* FAILED to decompile: strlen @ 0x12138 */

/* FAILED to decompile: __cxa_begin_catch @ 0x12140 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x12148 */

/* FAILED to decompile: __cxa_finalize @ 0x12150 */

/* FAILED to decompile: __libc_start_main @ 0x12160 */

/* FAILED to decompile: _ZdlPv @ 0x12168 */

/* FAILED to decompile: _Znwm @ 0x12170 */

/* FAILED to decompile: __dynamic_cast @ 0x12178 */

/* FAILED to decompile: __cxa_atexit @ 0x12180 */

/* FAILED to decompile: __cxa_rethrow @ 0x12190 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x12198 */

/* FAILED to decompile: abort @ 0x121A0 */

/* FAILED to decompile: __cxa_end_catch @ 0x121A8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x121B0 */

/* FAILED to decompile: __cxa_throw @ 0x121B8 */

/* FAILED to decompile: _Unwind_Resume @ 0x121C0 */

/* FAILED to decompile: printf @ 0x121C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x121D0 */

/* FAILED to decompile: __gmon_start__ @ 0x121E0 */

/* Total functions decompiled: 43, failed: 20 */
