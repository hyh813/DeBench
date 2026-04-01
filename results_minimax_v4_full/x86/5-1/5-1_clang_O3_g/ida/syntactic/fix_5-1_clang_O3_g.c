/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Windows-style macro for high byte */
#define HIBYTE(x) (*((unsigned char*)&(x) + 1))

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <new>

/* C++ headers - must be included when compiling as C++ */
#ifdef __cplusplus
#include <typeinfo>
#include <cxxabi.h>
#include <iostream>
#include <iosfwd>
#endif

/* Forward declarations for C++ runtime types */
struct __class_type_info;
struct __vmi_class_type_info;

/* Forward declaration for std::type_info - needed before extern "C" declarations */
#ifdef __cplusplus
namespace std { class type_info; }
#endif

/* Forward declarations for external C functions */
#ifdef __cplusplus
extern "C" {
#endif
void __cxa_atexit(void (*)(void *), void *, void *);
void __cxa_finalize(void *);
void *__cxa_allocate_exception(size_t);
void *__cxa_begin_catch(void *);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void *_Unwind_Resume(void *);
int __gxx_personality_v0(int, int, unsigned int, void *, void *);
size_t strlen(const char *);
int puts(const char *);
int printf(const char *, ...);
void *memset(void *, int, size_t);
void *memcpy(void *, const void *, size_t);
char *strcpy(char *, const char *);
#ifdef __cplusplus
}
#endif

/* Minimal type_info for C compilation - redeclared in each translation unit */
#ifndef __cplusplus
struct type_info {
    const char *_name;
};
#endif

/* External variables */
extern void *_dso_handle;

/* std::ios_base::Init declaration - needs C++ types */
#ifdef __cplusplus
extern std::ios_base::Init std::__ioinit;
#else
/* Stub for C compilation */
typedef struct {
    char _[sizeof(char)]; /* Placeholder - actual size unknown */
} InitStub;
extern InitStub std___ioinit;
#define std::__ioinit std___ioinit
#endif

/* Class definitions */
struct Base {
    // vtable pointer - pointer to vtable (pointer to array of virtual function pointers)
    void (**_vptr$Base)();
    virtual ~Base() {}
    virtual int virtual_func(int x) { return x; }
};

struct LifecycleClass {
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};

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

/* Global variable definition */
int LifecycleClass::instance_count = 0;

/* String literals */
const char asc_21D8[] = "C++ Features Test:\n";
const char aCppL301D[] = "Member function call: %zu\n";
const char aCppL302D[] = "Constructor call: %d\n";
const char aCppL303D[] = "Virtual function call: %d\n";
const char aCppL304D[] = "Multiple inheritance: %d\n";
const char aCppL305D[] = "Diamond inheritance: %d\n";
const char aCppL306D[] = "Operator overload: %d\n";
const char aCppL307D[] = "Template function: %d\n";
const char aCppL308D[] = "Template class: %d\n";
const char aCppL309D[] = "Lambda: %d\n";

/* vtable pointers - now properly defined in Base class */

/* RTTI type info */
extern int off_3ECC;
extern int off_3EE0;

/* RTTI class definitions */
struct RTTIBase {
    virtual ~RTTIBase() {}
    virtual int getType() const { return 0; }
};

struct RTTIDerivedA : public RTTIBase {
    virtual ~RTTIDerivedA() {}
    virtual int getType() const { return 1; }
};

struct RTTIDerivedB : public RTTIBase {
    virtual ~RTTIDerivedB() {}
    virtual int getType() const { return 2; }
};

/* Function declarations */
void _do_global_dtors_aux(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O3_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 return 0;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *(%ebx,8)");
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
void GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11AC @ 0x11AC */
void sub_11AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func()
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 memset(v6, 0, sizeof(v6));
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 s[2] = (unsigned short)((s[2] & 0x00FF) | (((unsigned short)0) << 8));
 s[3] = 0;
 strcpy((char *)s, "Test");
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13D0 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13E0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13F0 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1400 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1410 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1440 */
#ifdef __cplusplus
__attribute__((noreturn)) void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (const std::type_info*)&typeid(int), 0);
 while(1); // unreachable, but prevents warnings
}
#else
/* Stub for C compilation - C++ exceptions not supported */
void test_cpp_exception()
{
 /* Exceptions not available in C mode */
}
#endif


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1540 */
int test_cpp_rtti()
{
 RTTIBase *v0; // eax
 const void *v1; // esi
 RTTIBase *v2; // edi
 void *v3; // eax
 int v4; // esi
 int v5; // ebp
 RTTIBase *v7; // [esp+8h] [ebp-14h]

 v0 = new RTTIDerivedA();
 v1 = v0;
 v7 = v0;
 v2 = new RTTIDerivedB();
 v3 = __dynamic_cast(v1, (const __class_type_info*)&typeid(RTTIBase), (const __class_type_info*)&typeid(RTTIDerivedA), 0);
 v4 = 130;
 if ( !v3 )
 v4 = 30;
 v5 = v4 + 200;
 if ( !__dynamic_cast(v2, (const __class_type_info*)&typeid(RTTIBase), (const __class_type_info*)&typeid(RTTIDerivedB), 0) )
 v5 = v4;
 delete v7;
 delete v2;
 return v5 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 unsigned char v7[8]; // [esp+24h] [ebp-18h] BYREF

 puts(asc_21D8);
 memset(v7, 0, sizeof(v7));
 v6 = 0;
 v5 = 0;
 v4 = 0;
 v3 = 0;
 s[5] = 0;
 v2 = 0;
 strcpy(s, "Test");
 v0 = strlen(s);
 printf(aCppL301D, v0 + 4700);
 printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* The main function must be compiled as C++ to support C++ features */
#ifdef __cplusplus

/* C++ type_info - properly defined */
#ifdef __GNUC__
#pragma GCC system_header
#endif
namespace std {
    class type_info {
    public:
        virtual ~type_info() {}
        bool operator==(const type_info& rhs) const { return this == &rhs; }
        bool operator!=(const type_info& rhs) const { return !(*this == rhs); }
        int before(const type_info& rhs) const { return this < &rhs; }
        const char* name() const { return _name; }
    private:
        const char *_name;
        type_info(const type_info&);
    };
}

/* C++ runtime functions - extern "C" linkage */
extern "C" {
void __cxa_atexit(void (*)(void *), void *, void *);
void __cxa_finalize(void *);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, const std::type_info *, void *);
void *__cxa_begin_catch(void *);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void *_Unwind_Resume(void *);
int __gxx_personality_v0(int, int, unsigned int, void *, void *);
}

/* C++ operators */
void *operator new(size_t size);
void operator delete(void *ptr);
void *operator new[](size_t size);
void operator delete[](void *ptr);

/* C++ runtime function - uses C++ types, not extern "C" */
void *__dynamic_cast(const void *, const __class_type_info *, const __class_type_info *, long);

/* Forward declarations for C++ runtime types */
struct __class_type_info {
    virtual ~__class_type_info() {}
};
struct __vmi_class_type_info : public __class_type_info {
    virtual ~__vmi_class_type_info() {}
};

/* std::ios_base::Init */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}

extern std::ios_base::Init __ioinit;

/* Main function - C++ */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}

#else

/* C compilation path - stub main */
int main(int argc, const char **argv, const char **envp)
{
 /* Cannot run C++ features in C mode - just return */
 (void)argc; (void)argv; (void)envp;
 return 0;
}

#endif


/* Template function: template_max<int> */
template<typename T>
T template_max(T a, T b)
{
 if ( a > b )
 return a;
 return b;
}

template<>
int template_max<int>(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Template function: template_max<double> */
template<>
double template_max<double>(double a, double b)
{
 long double v2; // fst6

 v2 = b;
 if ( a > (long double)b )
 return a;
 return v2;
}


/* Template function: template_swap<int> */
template<typename T>
void template_swap(T *a, T *b)
{
 T v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Template member function definitions for Container<int> */

/* Constructor for Container<int> */
Container<int>::Container()
{
 this->size = 0;
}

/* push method for Container<int> */
void Container<int>::push(int value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}

/* get method for Container<int> */
int Container<int>::get(int idx) const
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}

/* getSize method for Container<int> */
int Container<int>::getSize() const
{
 return this->size;
}

/* Template member function definitions for Container<double> */

/* Constructor for Container<double> */
Container<double>::Container()
{
 this->size = 0;
}

/* push method for Container<double> */
void Container<double>::push(double value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}

/* get method for Container<double> */
double Container<double>::get(int idx) const
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}

/* getSize method for Container<double> */
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
void RTTIDerivedA::~RTTIDerivedA()
{
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A1C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x4078 */

/* FAILED to decompile: __cxa_finalize @ 0x407C */

/* FAILED to decompile: __cxa_begin_catch @ 0x4080 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4084 */

/* FAILED to decompile: strlen @ 0x4088 */

/* FAILED to decompile: __cxa_atexit @ 0x408C */

/* FAILED to decompile: __libc_start_main @ 0x4094 */

/* FAILED to decompile: _ZdlPv @ 0x4098 */

/* FAILED to decompile: __dynamic_cast @ 0x409C */

/* FAILED to decompile: printf @ 0x40A4 */

/* FAILED to decompile: __cxa_rethrow @ 0x40A8 */

/* FAILED to decompile: puts @ 0x40AC */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40B4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40B8 */

/* FAILED to decompile: __cxa_throw @ 0x40BC */

/* FAILED to decompile: _Unwind_Resume @ 0x40C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40C4 */

/* Total functions decompiled: 46, failed: 18 */
