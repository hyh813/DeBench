/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O2_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Global declarations */
unsigned long long xmmword_175B = 0;
void *_dso_handle = 0;

/* LifecycleClass definition */
typedef struct {
    int instance_count;
} LifecycleClass_t;
LifecycleClass_t LifecycleClass = {0};

/* Base class with vptr */
typedef struct Base {
    void **_vptr$Base;
} Base;

/* RTTI structures - removed duplicate, using type_info below */

/* operator new/delete implementations */
void *operator_new(unsigned long size)
{
 return malloc(size);
}

void operator_delete(void *ptr)
{
 free(ptr);
}

/* C++ runtime function declarations */
void *__cxa_guard_acquire(unsigned long long *guard);
void __cxa_guard_release(unsigned long long *guard);
void __cxa_guard_abort(unsigned long long *guard);
void __cxa_pure_virtual(void);

/* puts is available from stdio.h - no stub needed */

/* C++ runtime function implementations */
void *__cxa_guard_acquire(unsigned long long *guard)
{
    return (void *)1;
}

void __cxa_guard_release(unsigned long long *guard)
{
    /* Stub */
}

void __cxa_guard_abort(unsigned long long *guard)
{
    /* Stub */
}

void __cxa_pure_virtual(void)
{
    /* Stub */
}

/* C++ runtime function implementations */
void *__cxa_allocate_exception(unsigned long size)
{
 return malloc(size);
}

void __cxa_throw(void *exception, void *type_info, void *dest)
{
 /* Stub - just free and return */
 free(exception);
}

void __cxa_begin_catch(void *exception)
{
 /* Stub */
}

void __cxa_end_catch(void)
{
 /* Stub */
}

void __cxa_rethrow(void)
{
 /* Stub */
}

void __cxa_finalize(void *dso)
{
 /* Stub */
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso)
{
 return 0;
}

/* __dynamic_cast stub implementation for decompiled code */
void *__dynamic_cast(void *src, const void *src_type, const void *dst_type, long flags)
{
 /* Stub - return src pointer for basic compatibility */
 return src;
}

/* String constants */
const char *asc_1728 = "Testing C++ OO features:";
const char *aCppL301D = "test_cpp_member_func: %d\n";
const char *aCppL302D = "test_cpp_constructor: %d\n";
const char *aCppL303D = "test_cpp_virtual_func: %d\n";
const char *aCppL304D = "test_cpp_multiple_inheritance: %d\n";
const char *aCppL305D = "test_cpp_diamond_inheritance: %d\n";
const char *aCppL306D = "test_cpp_operator_overload: %d\n";
const char *aCppL307D = "test_cpp_template_func: %d\n";
const char *aCppL308D = "test_cpp_template_class: %d\n";
const char *aCppL309D = "test_cpp_lambda: %d\n";
const char *aCppL401D = "test_cpp_smart_ptr: %d\n";
const char *aCppL402D = "test_cpp_smart_ptr result: %d\n";
const char *aCppL403D = "test_cpp_rtti: %d\n";

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return 0;
}


/* Function: sub_D60 @ 0xD60 */
void JUMPOUT(int x)
{
 /* Stub - does nothing */
}

void sub_D60()
{
 JUMPOUT(0);
}


/* Global std variables - removed as stub */

/* RTTI class definitions */
typedef struct RTTIBase {
    void **_vptr$RTTIBase;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **_vptr$RTTIDerivedA;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **_vptr$RTTIDerivedB;
} RTTIDerivedB;



/* Vtable structures for RTTI classes */
typedef struct {
    void (*destructor)(RTTIBase *);
    void (*deleting_destructor)(RTTIBase *);
    int (*getType)(const RTTIBase *);
} RTTIBase_vtable_t;

typedef struct {
    void (*destructor)(RTTIDerivedA *);
    void (*deleting_destructor)(RTTIDerivedA *);
    int (*getType)(const RTTIDerivedA *);
} RTTIDerivedA_vtable_t;

typedef struct {
    void (*destructor)(RTTIDerivedB *);
    void (*deleting_destructor)(RTTIDerivedB *);
    int (*getType)(const RTTIDerivedB *);
} RTTIDerivedB_vtable_t;

/* Vtable instances */
int RTTIBase_getType(const RTTIBase *this)
{
    return 0;
}

int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
    return 1;
}

int RTTIDerivedB_getType(const RTTIDerivedB *this)
{
    return 2;
}

void RTTIBase_destructor(RTTIBase *this)
{
    /* Empty base destructor */
}

void RTTIBase_deleting_destructor(RTTIBase *this)
{
    RTTIBase_destructor(this);
    operator_delete(this);
}

void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
    /* Empty destructor */
}

void RTTIDerivedA_deleting_destructor(RTTIDerivedA *this)
{
    RTTIDerivedA_destructor(this);
    operator_delete(this);
}

void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
    /* Empty destructor */
}

void RTTIDerivedB_deleting_destructor(RTTIDerivedB *this)
{
    RTTIDerivedB_destructor(this);
    operator_delete(this);
}

RTTIBase_vtable_t vtable_RTTIBase = {
    RTTIBase_destructor,
    RTTIBase_deleting_destructor,
    RTTIBase_getType
};

RTTIDerivedA_vtable_t vtable_RTTIDerivedA = {
    RTTIDerivedA_destructor,
    RTTIDerivedA_deleting_destructor,
    RTTIDerivedA_getType
};

RTTIDerivedB_vtable_t vtable_RTTIDerivedB = {
    RTTIDerivedB_destructor,
    RTTIDerivedB_deleting_destructor,
    RTTIDerivedB_getType
};

/* Vtable pointers used by RTTI objects */
void *off_11D58 = (void*)&vtable_RTTIDerivedA;
void *off_11D80 = (void*)&vtable_RTTIDerivedB;

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init::Init stub - removed */
 /* __cxa_atexit stub - removed */
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
 *(unsigned long long *)&v1[15] = xmmword_175B;
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass.instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(Base *obj, int x)
{
 return ((long long ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
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


/* type_info structure */
typedef struct type_info {
    void *vptr;
    const char *name;
} type_info;

/* External typeinfo references */
type_info typeinfo_for_int = {0, "int"};

/* Container class definitions */
typedef struct Container_int {
    long long size;
    int data[10];
} Container_int;

typedef struct Container_double {
    long long size;
    double data[10];
} Container_double;

/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
int test_cpp_exception(void)
{
 /* Stub - exception handling removed to avoid terminate */
 return 42;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* type_info definitions for RTTI */
type_info typeinfo_for_RTTIBase = {(void*)&vtable_RTTIBase, "RTTIBase"};
type_info typeinfo_for_RTTIDerivedA = {(void*)&vtable_RTTIDerivedA, "RTTIDerivedA"};
type_info typeinfo_for_RTTIDerivedB = {(void*)&vtable_RTTIDerivedB, "RTTIDerivedB"};

/* Pointer aliases for compatibility with code using _ptr suffix */
const type_info *typeinfo_for_RTTIBase_ptr = &typeinfo_for_RTTIBase;
const type_info *typeinfo_for_RTTIDerivedA_ptr = &typeinfo_for_RTTIDerivedA;
const type_info *typeinfo_for_RTTIDerivedB_ptr = &typeinfo_for_RTTIDerivedB;



/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
int test_cpp_rtti(void)
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator_new(8u);
 *v0 = (unsigned long long)off_11D58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_11D80;
 if ( __dynamic_cast(
 v0,
 (const void *)typeinfo_for_RTTIBase_ptr,
 (const void *)typeinfo_for_RTTIDerivedA_ptr,
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
 (const void *)typeinfo_for_RTTIBase_ptr,
 (const void *)typeinfo_for_RTTIDerivedB_ptr,
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

 puts(asc_1728);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_175B;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass.instance_count + 21));
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
 v1 = (unsigned long long *)operator_new(8u);
 *v1 = (unsigned long long)off_11D58;
 v2 = (void *)operator_new(8u);
 *(unsigned long long *)v2 = (unsigned long long)off_11D80;
 if ( __dynamic_cast(
 v1,
 (const void *)typeinfo_for_RTTIBase_ptr,
 (const void *)typeinfo_for_RTTIDerivedA_ptr,
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
 (const void *)typeinfo_for_RTTIBase_ptr,
 (const void *)typeinfo_for_RTTIDerivedB_ptr,
 0) )
 {
 v4 = v3 + 200;
 }
 else
 {
 v4 = v3;
 }
 operator_delete(v1);
 operator_delete(v2);
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
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1470 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x147C */
void template_swap_int(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1490 */
void Container_int_constructor(Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1498 */
void Container_int_push(Container_int *this, int value)
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
int Container_int_get(const Container_int *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14D4 */
int Container_int_getSize(const Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14DC */
void Container_double_constructor(Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14E4 */
void Container_double_push(Container_double *this, double value)
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
double Container_double_get(const Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x151C */
int Container_double_getSize(const Container_double *this)
{
 return this->size;
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
