// Compile as C++
// This file must be compiled with a C++ compiler (e.g., g++, clang++)
// The following ensures this is treated as C++ code
#ifndef __cplusplus
#error "This file must be compiled with a C++ compiler"
#endif

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_Os_g
 * Processor: arm
 */

// Forward declarations for CRT stub functions
void *call_weak_fn(void);
#define JUMPOUT(addr) goto *addr

// Forward declarations for C++ exception handling and runtime functions
void __cxa_atexit(void (*)(void *), void *, void *);
void *__cxa_allocate_exception(unsigned int);
void __cxa_throw(void *, void *, void *);
void *__cxa_begin_catch(void *);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void *_Unwind_Resume(void *);
void abort(void);
int __dynamic_cast(const void *, const void *, const void *, long);

// operator new and delete declarations
void *operator new(unsigned long);
void operator delete(void *);
void *operator new[](unsigned long);
void operator delete[](void *);

// typeinfo declaration - simplified for C++
struct type_info {};

// C++ typeinfo structures for RTTI
struct __class_type_info {
    virtual ~__class_type_info() {}
};
struct __si_class_type_info : __class_type_info {
    const __class_type_info *__base_type;
};
struct __vmi_class_type_info : __class_type_info {
    unsigned int __flags;
};

// Typeinfo name strings (mangled)
extern const char _ZTIi[];  // typeinfo for int
extern const char _ZTIP4Base[];  // typeinfo for Base
extern const char _ZTI11RTTIBase[];  // typeinfo for RTTIBase
extern const char _ZTI13RTTIDerivedA[];  // typeinfo for RTTIDerivedA
extern const char _ZTI13RTTIDerivedB[];  // typeinfo for RTTIDerivedB

// Forward declarations for missing types
struct Base {
    void **_vptr$Base;
};

// Container template class
template<typename T>
struct Container {
    int size;
    T data[10];
};

// RTTI classes
struct RTTIBase {
    virtual ~RTTIBase() {}
    virtual int getType() const = 0;
};

struct RTTIDerivedA : public RTTIBase {
    ~RTTIDerivedA() override;
    int getType() const override;
};

struct RTTIDerivedB : public RTTIBase {
    ~RTTIDerivedB() override;
    int getType() const override;
};

// String literals
extern const unsigned long long xmmword_16B3[2];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];
extern const char aCppL401D[];
extern const char aCppL402D[];
extern const char aCppL403D[];
extern const char asc_1680[];
extern void *_dso_handle;
extern const void *off_11D58;
extern const void *off_11D80;

// Note: typeinfo is manually defined below as struct type_info {}
// The #include <typeinfo> is not needed since we have a manual definition

// Include necessary headers
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Define LifecycleClass before use
struct LifecycleClass {
    static int instance_count;
};

// Define static member of LifecycleClass
int LifecycleClass::instance_count = 0;

// Define std namespace for iostream initialization
struct std_ios_base_Init {
    void *vtable;
};

namespace std {
    struct ios_base {
        struct Init : std_ios_base_Init {
            Init();
            ~Init();
        };
    };
}
::std::ios_base::Init __ioinit;

// External data
extern const unsigned long long xmmword_16B3[2];

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
void GLOBAL__sub_I_5_1_cpp()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



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
 *(unsigned long long *)&v1[15] = xmmword_16B3;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


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
 __cxa_throw(exception, (struct type_info *)&_ZTIi, (void (*)(void *))0);
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

 puts(asc_1680);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_16B3;
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


/* Function: sub_1368 @ 0x1368 */
// positive sp value has been detected, the output may be wrong!
long long sub_1368(unsigned int a1)
{
 unsigned int v1; // w0

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = test_cpp_rtti();
 return printf(aCppL403D, v1);
}


/* Function: main @ 0x13A4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_13B0 @ 0x13B0 */
// positive sp value has been detected, the output may be wrong!
long long sub_13B0()
{
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x13BC */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x13C8 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x13D4 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x13E8 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x13F0 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x140C */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x142C */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1434 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x143C */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1458 */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1474 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x147C */
// attributes: thunk
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1480 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1488 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x148C */
// attributes: thunk
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1490 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x1498 */
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
