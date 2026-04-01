/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_Os_g
 * Processor: arm
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Manual declarations for exception handling (replacing <exception> header)
struct std_exception {
    void* _vptr;
    void (*destructor)(void*);
    const char* (*what)(void*);
};

struct std_bad_exception {
    void (*destructor)(void*);
};

void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, const void* type, void (*destructor)(void*)) __attribute__((noreturn));

// Manual declarations for std::type_info (replacing <typeinfo> header)
struct std_type_info {
    void* _vptr;
    void (*destructor)(void*);
    int (*equals)(void*, const void*);
    int (*not_equals)(void*, const void*);
    int (*before)(void*, const void*);
    const char* (*name)(void*);
};

// Manual declarations for operator new/delete (replacing <new> header)
void* operator_new(size_t size);
void operator_delete(void* ptr);
void* operator_new_array(size_t size);
void operator_delete_array(void* ptr);

// Null function pointer for exception throwing
static void (*null_destructor)(void*) = NULL;

// Forward declarations for C++ ABI functions
struct __class_type_info {
    void (*destructor)(void*);
};

void* __dynamic_cast(const void* src_ptr,
                     const struct __class_type_info* src_type,
                     const struct __class_type_info* dst_type,
                     ptrdiff_t src2dst_offset);

void __cxa_atexit(void (*)(void *), void *, void *);
void *__dso_handle;

struct std_ios_base_Init {
    void* _vptr;
};

extern struct std_ios_base_Init std___ioinit;

// Constructor/destructor function declarations for std_ios_base_Init
void std_ios_base_Init_Init(struct std_ios_base_Init *this);
void std_ios_base_Init_dtor(void *);

// Forward declare Base for virtual function usage
struct Base {
    void *_vptr_Base;
};

// Define LifecycleClass with its static member
struct LifecycleClass {
    int instance_count;
};

int LifecycleClass_instance_count = 0;

struct RTTIBase {
    void* _vptr;
};

struct RTTIDerivedA {
    void* _vptr;
};

struct RTTIDerivedB {
    void* _vptr;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

extern unsigned long long xmmword_16B3;
extern unsigned long long *off_11D58;
extern unsigned long long *off_11D80;
extern const char *asc_1680;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;
extern const char *aCppL401D;
extern const char *aCppL402D;
extern const char *aCppL403D;

// Define type_info objects
static struct std_type_info typeinfo_for_int = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

static struct std_type_info typeinfo_for_RT_TIBase = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

static struct std_type_info typeinfo_for_RT_TIDerivedA = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

static struct std_type_info typeinfo_for_RT_TIDerivedB = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

long long call_weak_fn(void);
#define JUMPOUT(x) __builtin_unreachable()

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
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor, &std___ioinit, &__dso_handle);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
long long call_weak_fn()
{
 return 0;
}


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
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(struct Base *obj, int x)
{
 return ((int (*)(struct Base *, int))*obj->_vptr_Base)(obj, x);
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
void test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, null_destructor);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
int test_cpp_rtti()
{
 unsigned long long **v0; // x19
 unsigned long long **v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long **)operator_new(8u);
 *v0 = off_11D58;
 v1 = (unsigned long long **)operator_new(8u);
 *v1 = off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RT_TIBase,
 (const struct __class_type_info *)&typeinfo_for_RT_TIDerivedA,
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
 (const struct __class_type_info *)&typeinfo_for_RT_TIBase,
 (const struct __class_type_info *)&typeinfo_for_RT_TIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 operator_delete(v0);
 operator_delete(v1);
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


/* Function: sub_1368 @ 0x1368 */
// positive sp value has been detected, the output may be wrong!
long long sub_1368(unsigned int a1)
{
 unsigned int v1; // w0

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = test_cpp_rtti();
 return (long long)printf(aCppL403D, v1);
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
void template_swap_int(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x13E8 */
void Container_int_ctor(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x13F0 */
void Container_int_push(struct Container_int *this, int value)
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
int Container_int_get(const struct Container_int *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x142C */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1434 */
void Container_double_ctor(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x143C */
void Container_double_push(struct Container_double *this, double value)
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
double Container_double_get(const struct Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1474 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x147C */
// attributes: thunk
void RTTIDerivedA_dtor(struct RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1480 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1488 */
void RTTIBase_dtor(struct RTTIBase *this)
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x148C */
// attributes: thunk
void RTTIDerivedB_dtor(struct RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1490 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *this)
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
