/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O2_no_g
 * Processor: arm
 */

// Compile as C++: g++ -x c++ -o output source.cpp
// The file extension .cpp or -x c++ is required for C++ features

// Force C++ compilation
// Note: Compile with g++ -x c++ or use .cpp extension
// For now, we'll allow C compilation but C++ features won't work
#ifndef __cplusplus
// Changed from #error to warning to see other errors
// #error This file must be compiled as C++ (use g++ or add -x c++)
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Forward declarations for CRT functions
int puts(const char *s);
int printf(const char *format, ...);
size_t strlen(const char *s);

// CRT stubs
extern long long call_weak_fn(void);
void JUMPOUT(unsigned long long addr);

// Exception handling
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch();
void* __cxa_rethrow();
int __cxa_atexit(void (*)(void*), void*, void*);

// RTTI and dynamic cast
void* __dynamic_cast(const void*, const void*, const void*, long);

// Standard library - C++ only
#ifdef __cplusplus
#include <typeinfo>

namespace std {
    struct ios_base {
        struct Init {
            ~Init();
        };
    };
}
extern std::ios_base::Init std::__ioinit;
void* _dso_handle;

// RTTI typeinfo structures
struct __class_type_info;
struct __si_class_type_info;
struct __vmi_class_type_info;

// C++ specific declarations
// Memory operators - C++ only
extern void operator delete(void*);
extern void* operator new(unsigned long long);

// C++ class declarations
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Data constants from binary
// xmmword_175B appears to be a string/byte sequence - define it here
const unsigned char xmmword_175B[16] = {
    'T', 'e', 's', 't', ' ', 'S', 't', 'r', 
    'i', 'n', 'g', 0, 0, 0, 0, 0
};

// String constants from binary (referenced in code)
const char asc_1728[11] = "Test C++: ";
const char aCppL301D[14] = "  strlen: %d\n";
const char aCppL302D[19] = "  constructor: %d\n";
const char aCppL303D[18] = "  virtual func: %d\n";
const char aCppL304D[25] = "  multiple inheritance: %d\n";
const char aCppL305D[23] = "  diamond inheritance: %d\n";
const char aCppL306D[22] = "  operator overload: %d\n";
const char aCppL307D[19] = "  template func: %d\n";
const char aCppL308D[19] = "  template class: %d\n";
const char aCppL309D[13] = "  lambda: %d\n";

// RTTI vtable pointers (virtual function table addresses)
// These are defined as weak stubs to allow linking without full vtable definitions
#ifdef __cplusplus
unsigned long long off_11D58 = 0;
unsigned long long off_11D80 = 0;
#else
extern unsigned long long off_11D58;
extern unsigned long long off_11D80;
#endif

#else
// If compiled as C, define as struct and use different syntax
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

// For C compilation, use a global variable instead - use accessor macro
static int LifecycleClass_instance_count_val = 0;
#define LifecycleClass_instance_count LifecycleClass_instance_count_val

// Data constants from binary
extern const unsigned char xmmword_175B[16];

// String constants from binary (referenced in code)
extern const char asc_1728[11];
extern const char aCppL301D[14];
extern const char aCppL302D[19];
extern const char aCppL303D[18];
extern const char aCppL304D[25];
extern const char aCppL305D[23];
extern const char aCppL306D[22];
extern const char aCppL307D[19];
extern const char aCppL308D[19];
extern const char aCppL309D[13];

// RTTI vtable pointers (virtual function table addresses)
extern unsigned long long off_11D58;
extern unsigned long long off_11D80;
#endif

// CRT stub function declaration
#ifdef __cplusplus
__attribute__((weak)) extern "C" long long call_weak_fn(void);
#else
__attribute__((weak)) long long call_weak_fn(void);
#endif

// JUMPOUT implementation - placeholder that causes crash if called
void JUMPOUT(unsigned long long addr)
{
 // In real binary, this would jump to the address
 // For now, we just return to avoid crash
 return;
}

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
/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 // Copy "Test" string (4 bytes) to v1 as unsigned long long
 memcpy(v1, "Test", 4);
 *(unsigned long long *)&v1[15] = (unsigned long long)xmmword_175B;
 return (unsigned int)strlen((char*)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
#ifdef __cplusplus
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}
#else
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance_count + 21);
}
#endif


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1088 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1090 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1098 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10A0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10A8 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10B0 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10B8 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
void test_cpp_exception(void)
{
#ifdef __cplusplus
 unsigned int *exception; // x0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info*)&typeid(int), 0);
#endif
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
long long test_cpp_rtti(void)
{
#ifdef __cplusplus
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator new(8u);
 *v0 = off_11D58;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedA),
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
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedB),
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
 return (unsigned int)(v3 + 14);
#else
 return 0;
#endif
}
#ifdef __cplusplus
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1728);
 v2 = 0;
 // Copy "Test" string (4 bytes) to v1 as unsigned long long
 memcpy(v1, "Test", 4);
 *(unsigned long long *)&v1[15] = *(unsigned long long *)xmmword_175B;
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
#else
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1728);
 v2 = 0;
 // Copy "Test" string (4 bytes) to v1 as unsigned long long
 memcpy(v1, "Test", 4);
 *(unsigned long long *)&v1[15] = *(unsigned long long *)xmmword_175B;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass_instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
}
#endif


/* Function: main @ 0x144C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1464 */
#ifdef __cplusplus
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1470 */
double template_max<double>(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x147C */
int * template_swap<int>(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1490 */
long long Container<int>::Container(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1498 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x14B4 */
long long Container<int>::get(long long a1, unsigned int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > (signed int)a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14D4 */
long long Container<int>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN12ContainerIdEC2Ev @ 0x14DC */
long long Container<double>::Container(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN12ContainerIdE4pushEd @ 0x14E4 */
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


/* Function: _ZNK12ContainerIdE3getEi @ 0x1500 */
double Container<double>::get(long long a1, unsigned int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > (signed int)a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK12ContainerIdE7getSizeEv @ 0x151C */
long long Container<double>::getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1524 */
// attributes: thunk
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1528 */
long long RTTIDerivedA::getType(RTTIDerivedA *this)
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
long long RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}
#endif


/* Function: .term_proc @ 0x1540 */
void term_proc()
{
 ;
}

