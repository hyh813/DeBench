/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_Os_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#ifdef __cplusplus
#include <new>
#include <typeinfo>
#include <exception>
#include <cmath>
#include <iostream>
extern "C" {
#else
#include <stddef.h>
#endif

/* Forward declarations for C++ runtime symbols */
extern void *__dso_handle;
extern void _gmon_start__(void);

/* JUMPOUT macro for stub functions */
#define JUMPOUT(x) do { } while(0)

/* Typeinfo placeholders */
const struct type_info {
    const char *name;
};

static const char type_int_name[] = "int";
static const char type_RTITIBase_name[] = "RTTIBase";
static const char type_RTITIDerivedA_name[] = "RTTIDerivedA";
static const char type_RTITIDerivedB_name[] = "RTTIDerivedB";

static const struct type_info typeinfo_for_int = { type_int_name };
static const struct type_info typeinfo_for_RTITIBase = { type_RTITIBase_name };
static const struct type_info typeinfo_for_RTITIDerivedA = { type_RTITIDerivedA_name };
static const struct type_info typeinfo_for_RTITIDerivedB = { type_RTITIDerivedB_name };

/* C++ ABI functions */
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void *__dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, ptrdiff_t);
extern void __cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *);
extern int __gxx_personality_v0(int, int, int, void *, void *);

/* Standard library functions */
extern int puts(const char *);
extern int printf(const char *, ...);
extern size_t strlen(const char *);
extern void *memset(void *, int, size_t);
extern double fmax(double, double);

/* Missing data declarations */
static const unsigned long long xmmword_21F8 = 0x0000000000000000ULL;
static const char s[] = "Test string data\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
static const char format[] = "result: %u\n";
static const char aCppL302D[] = "C++ constructor: %u\n";
static const char aCppL303D[] = "C++ virtual func: %u\n";
static const char aCppL304D[] = "C++ multiple inheritance: %u\n";
static const char aCppL305D[] = "C++ diamond inheritance: %u\n";
static const char aCppL306D[] = "C++ operator overload: %u\n";
static const char aCppL307D[] = "C++ template func: %u\n";
static const char aCppL308D[] = "C++ template class: %u\n";
static const char aCppL309D[] = "C++ lambda: %u\n";
extern const void *off_3D78;
extern const void *off_3DA0;

/* C++ class definitions */
struct Base {
    void **_vptr$Base;
};

struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() const;
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

/* Template class Container (int specialization) */
struct Container_int {
    int size;
    int data[10];
    Container_int();
    void push(int value);
    int get(int idx);
    int getSize();
};

/* Template class Container (double specialization) */
struct Container_double {
    int size;
    double data[10];
    Container_double();
    void push(double value);
    double get(int idx);
    int getSize();
};

/* std::ios_base::Init placeholder */
struct std_ios_base_Init {
    void std_ios_base_Init_Init();
    void std_ios_base_Init_dtor();
};
extern struct std_ios_base_Init std___ioinit;

#ifdef __cplusplus
}
#endif





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
 *(unsigned long long *)s = xmmword_21F8;
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
 return ((long long ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
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
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13D7 */
int test_cpp_smart_ptr()
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x147F */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned int v1; // eax
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 puts(::s);
 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8;
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
 T result;

 result = b;
 if ( a > b )
 return a;
 return result;
}

/* Function: _Z12template_maxIdET_S0_S0_ @ 0x15BA */
template<>
double template_max<double>(double a1, double a)
{
 return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x15BF */
template<typename T>
void template_swap(T *a, T *b)
{
 T v2;

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x15C8 */
Container_int::Container_int()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x15D0 */
void Container_int::push(int value)
{
 long long size;

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x15E4 */
int Container_int::get(int idx)
{
 int result;

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x15F6 */
int Container_int::getSize()
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x15FA */
Container_double::Container_double()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1602 */
void Container_double::push(double value)
{
 long long size;

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1618 */
double Container_double::get(int idx)
{
 double result;

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x162C */
int Container_double::getSize()
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1630 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1636 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x1638 */
int RTTIBase::getType() const
{
 return 0;
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


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1644 */
int RTTIDerivedB::getType() const
{
 return 2;
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

/* FAILED to decompile: __dynamic_cast @ 0x4138 */

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
