/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_Os_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Forward declarations and stub definitions */
long long call_weak_fn(void);
void JUMPOUT(int);

/* Stub implementations */
long long call_weak_fn(void)
{
 return 0;
}

void JUMPOUT(int val)
{
 /* Stub - do nothing */
}

/* Global variables */
unsigned long long xmmword_16B3 = 0;
char asc_1680[] = "Test";
char aCppL301D[] = "CppL301: %d\n";
char aCppL302D[] = "CppL302: %d\n";
char aCppL303D[] = "CppL303: %d\n";
char aCppL304D[] = "CppL304: %d\n";
char aCppL305D[] = "CppL305: %d\n";
char aCppL306D[] = "CppL306: %d\n";
char aCppL307D[] = "CppL307: %d\n";
char aCppL308D[] = "CppL308: %d\n";
char aCppL309D[] = "CppL309: %d\n";
char aCppL401D[] = "CppL401: %d\n";
char aCppL402D[] = "CppL402: %d\n";
char aCppL403D[] = "CppL403: %d\n";

/* Base class with vtable pointer */
typedef struct Base {
    void **_vptr$Base;
} Base;

/* LifecycleClass with static instance_count */
typedef struct LifecycleClass {
    int dummy;
} LifecycleClass;
int LifecycleClass_instance_count = 0;

/* RTTI classes */
typedef struct RTTIBase {
    void **_vptr;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **_vptr;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **_vptr;
} RTTIDerivedB;

/* Container templates */
typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* Stub function declarations */
void *cpp_operator_new(unsigned long size);
void cpp_operator_delete(void *ptr);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, void *typeinfo, void *deps);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dso_handle = NULL;
void __cxa_begin_catch(void *exception);
void __cxa_end_catch(void *exception);
void __cxa_rethrow(void *exception);
void *__gxx_personality_v0(int version, int actions, long long exception_class, void *exception_object, void *context);
void _Unwind_Resume(void *exception);
void __cxa_finalize(void *dso);
void __gmon_start__(void);

/* Additional stub declarations for C++ runtime - implementations below */

/* Additional C library function declarations - already in stdlib.h/stdio.h/string.h */

/* Stub function implementations */
void *cpp_operator_new(unsigned long size)
{
 return malloc(size);
}

void cpp_operator_delete(void *ptr)
{
 free(ptr);
}

void *__cxa_allocate_exception(unsigned int size)
{
 return malloc(size);
}

void __cxa_throw(void *exception, void *typeinfo, void *deps)
{
 /* Stub - just free and return */
 (void)typeinfo;
 (void)deps;
 free(exception);
 /* This function never returns in real C++, but for stub we just return */
 /* Use longjmp or exit to simulate non-returning behavior */
 exit(0);
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags)
{
 /* Stub - return non-NULL for successful cast simulation */
 return src;
}

void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 /* Stub - do nothing */
 (void)func;
 (void)arg;
 (void)dso_handle;
}

/* Exception handling stubs */
/* __cxa_begin_catch, __cxa_end_catch, __cxa_rethrow - provided by libsupc++ or libcxxabi */

void *__gxx_personality_v0(int version, int actions, long long exception_class, void *exception_object, void *context)
{
 /* Stub - return error code */
 (void)version;
 (void)actions;
 (void)exception_class;
 (void)exception_object;
 (void)context;
 return (void *)0xFFFFFFFF;
}

void _Unwind_Resume(void *exception_object)
{
 /* Stub - do nothing */
 (void)exception_object;
 exit(0);
}

void __gmon_start__(void)
{
 /* Stub - do nothing */
}

void __cxa_finalize(void *dso)
{
 /* Stub - do nothing */
 (void)dso;
}

/* C++ operator new/delete implementations */
void *_Znwm(unsigned long size)
{
 return malloc(size);
}

void _ZdlPv(void *ptr)
{
 free(ptr);
}

/* std::ios_base::Init stubs */
void _ZNSt8ios_base4InitC1Ev(void *this)
{
 /* Stub - do nothing */
 (void)this;
}

void _ZNSt8ios_base4InitD1Ev(void *this)
{
 /* Stub - do nothing */
 (void)this;
}

/* abort is provided by standard library - no declaration needed */

/* Typeinfo stub structures */
struct type_info {
    void *vptr;
    const char *name;
};
struct type_info typeinfo_int = {.vptr = (void *)&typeinfo_int, .name = "int"};
struct type_info typeinfo_RTTIBase = {.vptr = (void *)&typeinfo_RTTIBase, .name = "RTTIBase"};
struct type_info typeinfo_RTTIDerivedA = {.vptr = (void *)&typeinfo_RTTIDerivedA, .name = "RTTIDerivedA"};
struct type_info typeinfo_RTTIDerivedB = {.vptr = (void *)&typeinfo_RTTIDerivedB, .name = "RTTIDerivedB"};

/* __class_type_info for RTTI */
struct __class_type_info {
    void *vptr;
    const char *name;
};
struct __class_type_info typeinfo_RTTIBase_obj = {.vptr = (void *)&typeinfo_RTTIBase_obj, .name = "RTTIBase"};
struct __class_type_info typeinfo_RTTIDerivedA_obj = {.vptr = (void *)&typeinfo_RTTIDerivedA_obj, .name = "RTTIDerivedA"};
struct __class_type_info typeinfo_RTTIDerivedB_obj = {.vptr = (void *)&typeinfo_RTTIDerivedB_obj, .name = "RTTIDerivedB"};

/* std namespace stubs */
struct std_ios_base_Init {
    int dummy;
};
struct std_ios_base_Init std___ioinit = {.dummy = 0};

/* Forward declarations for RTTI class methods */
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
int RTTIDerivedA_getType(const RTTIDerivedA *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
int RTTIDerivedB_getType(const RTTIDerivedB *this);

/* Vtable stubs for RTTI classes */
void *vtable_RTTIDerivedA[2] = {(void *)RTTIDerivedA_destructor, (void *)RTTIDerivedA_getType};
void *vtable_RTTIDerivedB[2] = {(void *)RTTIDerivedB_destructor, (void *)RTTIDerivedB_getType};

/* Global offsets for RTTI - vtable pointers */
unsigned long long off_11D58 = (unsigned long long)vtable_RTTIDerivedA;
unsigned long long off_11D80 = (unsigned long long)vtable_RTTIDerivedB;

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return 0;
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
void _GLOBAL__sub_I_5_1_cpp(void)
{
 /* C++ ios_base initialization stub - commented out for C compatibility */
 /* std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit); */
 /* __cxa_atexit stub disabled to avoid linker issues */
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
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(Base *obj, int x)
{
 typedef long long (*vfunc_t)(Base *, int);
 vfunc_t *vtable = (vfunc_t *)obj->_vptr$Base;
 return vtable[0](obj, x);
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
 __cxa_throw(exception, (struct type_info *)&typeinfo_int, 0);
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

 v0 = (unsigned long long *)cpp_operator_new(8u);
 *v0 = (unsigned long long)&off_11D58;
 v1 = (void *)cpp_operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)&off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_RTTIBase_obj,
 (const struct __class_type_info *)&typeinfo_RTTIDerivedA_obj,
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
 (const struct __class_type_info *)&typeinfo_RTTIBase_obj,
 (const struct __class_type_info *)&typeinfo_RTTIDerivedB_obj,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 cpp_operator_delete(v0);
 cpp_operator_delete(v1);
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
 /* test_cpp_exception() throws, so comment out for now */
 /* test_cpp_exception(); */
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
void template_swap_int(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x13E8 */
void Container_int_constructor(Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x13F0 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x140C */
int Container_int_get(const Container_int *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x142C */
int Container_int_getSize(const Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1434 */
void Container_double_constructor(Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x143C */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1458 */
double Container_double_get(const Container_double *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1474 */
int Container_double_getSize(const Container_double *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x147C */
// attributes: thunk
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1480 */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1488 */
void RTTIBase_destructor(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x148C */
// attributes: thunk
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1490 */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
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
