/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O2_no_g
 * Processor: arm
 */

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

// Standard library function implementations
int puts(const char *s) {
    return fputs(s, stdout) >= 0 ? 0 : EOF;
}

size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int ret = vprintf(format, args);
    va_end(args);
    return ret;
}

// Manual typeinfo definitions for C compilation
typedef struct type_info {
    const char* name;
} type_info;

typedef struct __class_type_info {
    const char* name;
} __class_type_info;

// RTTI class definitions
struct RTTIBase {
    void (**vptr)(void*);
};

struct RTTIDerivedA {
    void (**vptr)(void*);
};

struct RTTIDerivedB {
    void (**vptr)(void*);
};

// Forward declarations for RTTI virtual functions
void RTTIBase_dtor(struct RTTIBase *this);
long long RTTIDerivedA_getType(struct RTTIDerivedA *this);
void RTTIDerivedB_deleting_dtor(struct RTTIDerivedB *this);
long long RTTIDerivedB_getType(struct RTTIDerivedB *this);

// Forward declarations for C equivalents of std::ios_base
struct ios_base_Init {
    void (*_constructor)(struct ios_base_Init*);
    void (*_destructor)(struct ios_base_Init*);
};

// Stub implementations for std::ios_base::Init constructor/destructor
void _ZNSt8ios_base4InitC1Ev(struct ios_base_Init *this) {
    (void)this;
}

void _ZNSt8ios_base4InitD1Ev(struct ios_base_Init *this) {
    (void)this;
}

struct ios_base_Init __ioinit = {_ZNSt8ios_base4InitC1Ev, _ZNSt8ios_base4InitD1Ev};

// CRT function declarations
long long call_weak_fn(void) { return 0; }
void JUMPOUT(int x) { (void)x; }
void* _dso_handle __attribute__((weak));
int __cxa_atexit(void (*)(void*), void*, void*);

// Additional CRT function stubs
void __cxa_finalize(void* dso_handle) {
    (void)dso_handle;
}



int __libc_start_main(int (*main)(int,char**,char**), int argc, char** argv, 
                      int (*init)(void), void (*fini)(void), void* stack_end) {
    (void)init; (void)fini; (void)stack_end;
    exit(main(argc, argv, NULL));
    return 0;
}

// Exception handling stubs
void* __cxa_begin_catch(void* exception_obj) {
    (void)exception_obj;
    return NULL;
}

void __cxa_end_catch(void) {
}

void __cxa_rethrow(void) {
    exit(1);
}

int __gxx_personality_v0(int version, int actions, unsigned long long exception_class,
                         struct _Unwind_Exception* exception_header,
                         struct _Unwind_Context* context) {
    (void)version; (void)actions; (void)exception_class;
    (void)exception_header; (void)context;
    return 0;
}

// Unwind stubs
struct _Unwind_Exception;
struct _Unwind_Context;
void _Unwind_Resume(struct _Unwind_Exception* exc) {
    (void)exc;
    exit(1);
}

void* __gmon_start__(void) {
    return NULL;
}

// Data symbol declaration
const unsigned long long xmmword_175B[2] __attribute__((aligned(16))) = {0, 0};



// Class declarations
int LifecycleClass_instance_count = 0;

// C++ operator new/delete declarations
void* _Znwj(unsigned long size);
void _ZdlPv(void* ptr);

void* _Znwj(unsigned long size) {
    return malloc(size);
}

void* _Znwm(unsigned long size) {
    return malloc(size);
}

void _ZdlPv(void* ptr) {
    free(ptr);
}

#define operator_new _Znwj
#define operator_delete _ZdlPv

// Exception handling function declarations
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* exception, const struct type_info* tinfo, void (*dest)(void*));

// RTTI dynamic cast
void* __dynamic_cast(void* ptr, const struct __class_type_info* src, const struct __class_type_info* dst, int offset);

// Stub implementations for C++ runtime functions
void* __dynamic_cast(void* ptr, const struct __class_type_info* src, const struct __class_type_info* dst, int offset) {
    // Simple stub: just return the pointer for now
    (void)src; (void)dst; (void)offset;
    return ptr;
}

void* __cxa_allocate_exception(unsigned long size) {
    return malloc(size);
}

void __cxa_throw(void* exception, const struct type_info* tinfo, void (*dest)(void*)) {
    (void)tinfo; (void)dest;
    // Stub: in real implementation this would unwind the stack
    free(exception);
    exit(1);
}

// RTTI typeinfo declarations
const struct __class_type_info type_info_for_RTITIBase = {"RTTIBase"};
const struct __class_type_info type_info_for_RTITIDerivedA = {"RTTIDerivedA"};
const struct __class_type_info type_info_for_RTITIDerivedB = {"RTTIDerivedB"};
const struct type_info type_info_for_int = {"int"};

// Stub implementation for RTTIBase destructor
void RTTIBase_D2Ev(struct RTTIBase *this) {
    (void)this;
}

// Wrapper functions for vtable compatibility
static void RTTIBase_dtor_wrapper(void* this) {
    RTTIBase_dtor((struct RTTIBase*)this);
}

static void* RTTIDerivedA_getType_wrapper(void* this) {
    return (void*)RTTIDerivedA_getType((struct RTTIDerivedA*)this);
}

static void* RTTIDerivedB_getType_wrapper(void* this) {
    return (void*)RTTIDerivedB_getType((struct RTTIDerivedB*)this);
}

// Global symbols for vtables
void (*off_11D58[])(void*) = {
    (void (*)(void*))RTTIBase_dtor_wrapper,
    (void (*)(void*))RTTIDerivedA_getType_wrapper
};

void (*off_11D80[])(void*) = {
    (void (*)(void*))RTTIBase_dtor_wrapper,
    (void (*)(void*))RTTIDerivedB_getType_wrapper
};

// Forward declarations for virtual functions
long long RTTIDerivedA_getType(struct RTTIDerivedA *this);
long long RTTIDerivedB_getType(struct RTTIDerivedB *this);

// String literals
const char asc_1728[] = "Testing C++ Features:";
const char aCppL301D[] = "Member func result: %d\n";
const char aCppL302D[] = "Constructor result: %d\n";
const char aCppL303D[] = "Virtual func result: %d\n";
const char aCppL304D[] = "Multiple inheritance: %d\n";
const char aCppL305D[] = "Diamond inheritance: %d\n";
const char aCppL306D[] = "Operator overload: %d\n";
const char aCppL307D[] = "Template func: %d\n";
const char aCppL308D[] = "Template class: %d\n";
const char aCppL309D[] = "Lambda: %d\n";

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
long long GLOBAL__sub_I_5_1_cpp()
{
 __ioinit._constructor(&__ioinit);
 return __cxa_atexit((void (*)(void *))__ioinit._destructor, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = (unsigned long long)(uintptr_t)"Test";
 *(unsigned long long *)&v1[15] = xmmword_175B[0];
 return (unsigned int)strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(void *a1)
{
 long long (*vtable)(void*) = *(long long (**)(void*))a1;
 return vtable(a1);
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
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&type_info_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator_new(8u);
 *v0 = (unsigned long long)(uintptr_t)off_11D58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)(uintptr_t)off_11D80;
 if ( __dynamic_cast(
 (void*)v0,
 &type_info_for_RTITIBase,
 &type_info_for_RTITIDerivedA,
 0) != NULL )
 {
 v2 = 130;
 }
 else
 {
 v2 = 30;
 }
 if ( __dynamic_cast(
 v1,
 &type_info_for_RTITIBase,
 &type_info_for_RTITIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
operator_delete(v0);
((void (*)(void*))((void* (**)(void*))(*(void**)v1))[1])(v1);
 operator_delete(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1278 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1728);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_175B[0];
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
 test_cpp_exception();
}


/* Function: main @ 0x144C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1464 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1470 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x147C */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1490 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1498 */
long long Container_int_push(long long result, int a2)
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
long long Container_int_get(long long a1, unsigned int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > (signed int)a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14D4 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14DC */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14E4 */
long long Container_double_push(long long result, double a2)
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1500 */
double Container_double_get(long long a1, unsigned int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > (signed int)a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x151C */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1524 */
// attributes: thunk
void RTTIDerivedA_deleting_dtor(struct RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1528 */
long long RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 (void)this;
 return 0;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1530 */
void RTTIBase_dtor(struct RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1534 */
// attributes: thunk
void RTTIDerivedB_deleting_dtor(struct RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1538 */
long long RTTIDerivedB_getType(struct RTTIDerivedB *this)
{
 (void)this;
 return 0;
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

/* Total functions decompiled: 41, failed: 20 */
