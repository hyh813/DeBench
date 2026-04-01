/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O2_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <math.h>

/* Forward declarations and stubs for C++ runtime */
extern void *_dso_handle;

/* __gmon_start__ stub function */
static inline void *__gmon_start__(void) {
    return NULL;
}

/* Forward declaration of std::ios_base::Init */
struct std_ios_base_Init;

/* Typeinfo structure - minimal definition needed for compilation */
struct __class_type_info {
    const char *name;
    void **vtable;  /* Use vtable pointer for C++ compatibility */
};

/* Global variables */
extern int LifecycleClass_instance_count;

/* Forward declarations for vtable types */
struct Base;
typedef int (*BaseVirtualFunc)(struct Base *, int);

/* C++ class definitions - with explicit vtable function pointers */
struct Base {
    BaseVirtualFunc *vtable;
};

struct RTTIBase;
/* Use void* for flexible function pointer compatibility */
typedef void (*RTTIBaseDestructor)(void *);
typedef int (*RTTIBaseGetType)(const void *);

/* Vtable structure for RTTI classes */
struct RTTIBase_vtable {
    const struct __class_type_info *type_info;
    RTTIBaseDestructor D0;  /* deleting destructor */
    RTTIBaseDestructor D1;  /* regular destructor */
    RTTIBaseGetType getType;
};

struct RTTIBase {
    struct RTTIBase_vtable *vtable;
};

struct RTTIDerivedA {
    struct RTTIBase_vtable *vtable;
};

struct RTTIDerivedB {
    struct RTTIBase_vtable *vtable;
};

/* LifecycleClass - static member moved to global variable */
struct LifecycleClass {
    int dummy;
};

/* Template containers - template removed for C compatibility */
/* Specializations */
typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

/* C++ runtime stub functions */
inline void *cpp_operator_new(size_t size) {
    return malloc(size);
}

inline void cpp_operator_delete(void *ptr) {
    free(ptr);
}

/* Operator new and delete - C-compatible wrappers */
inline void *operator_new_wrapper(size_t size) {
    return cpp_operator_new(size);
}

inline void operator_delete_wrapper(void *ptr) {
    return cpp_operator_delete(ptr);
}

inline void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

inline void __cxa_throw(void *ex, struct __class_type_info *tinfo, void *dest) {
    fprintf(stderr, "Exception thrown\n");
    exit(1);
}

inline void *__cxa_begin_catch(void *ex) {
    return ex;
}

inline void __cxa_end_catch(void) {
}

inline void __cxa_rethrow(void) {
    fprintf(stderr, "Exception rethrown\n");
    exit(1);
}

inline int __cxa_atexit(void (*func)(void *), void *arg, void *dso) {
    return 0;
}

inline void *__dynamic_cast(void *src, const struct __class_type_info *src_type,
                                    const struct __class_type_info *dst_type, int src2dst) {
    return (void *)1;  /* Return non-NULL to simulate success */
}

inline void __cxa_pure_virtual(void) {
    fprintf(stderr, "Pure virtual function called\n");
    exit(1);
}

/* IO stream stubs */
struct std_ios_base_Init {
    int dummy;
};

inline void std_ios_base_Init_Init(struct std_ios_base_Init *this) {
}

inline void std_ios_base_Init_dtor(struct std_ios_base_Init *this) {
}

/* Inline implementations for missing functions */
inline int LifecycleClass_get_instance_count(void) {
    return LifecycleClass_instance_count;
}

int RTTIBase_getType(const void *this) {
    return 0;
}


/* Container implementations */

/* Test function implementations */

/* Define missing C++ runtime functions */
inline void __cxa_finalize(void *dso) {
}

inline void _Unwind_Resume(void) {
    exit(1);
}

inline int __gxx_personality_v0(void) {
    return 0;
}

/* Forward declarations for RTTI functions used in vtables */
void RTTIDerivedA_D0(void *);
void RTTIBase_dtor(void *);
int RTTIDerivedA_getType(const void *);
void RTTIDerivedB_D0(void *);
int RTTIDerivedB_getType(const void *);

/* Define static members */
int LifecycleClass_instance_count = 0;

/* Typeinfo stubs - must be defined before vtables that reference them */
struct __class_type_info typeinfo_for_Base = {"Base", NULL};
struct __class_type_info typeinfo_for_RTTIBase = {"RTTIBase", NULL};
struct __class_type_info typeinfo_for_RTTIDerivedA = {"RTTIDerivedA", NULL};
struct __class_type_info typeinfo_for_RTTIDerivedB = {"RTTIDerivedB", NULL};

/* Global data definitions */
long long xmmword_21F8[2] = {0, 0};
const char *global_s = "Test string";
const char *format = "Test: %u\n";
const char *aCppL302D = "Cpp L302: %u\n";
const char *aCppL303D = "Cpp L303: %u\n";
const char *aCppL304D = "Cpp L304: %u\n";
const char *aCppL305D = "Cpp L305: %u\n";
const char *aCppL306D = "Cpp L306: %u\n";
const char *aCppL307D = "Cpp L307: %u\n";
const char *aCppL308D = "Cpp L308: %u\n";
const char *aCppL309D = "Cpp L309: %u\n";

/* Vtable instances for RTTI classes */
struct RTTIBase_vtable vtable_for_RTTIDerivedA = {
    &typeinfo_for_RTTIDerivedA,
    (RTTIBaseDestructor)RTTIDerivedA_D0,
    (RTTIBaseDestructor)RTTIBase_dtor,
    (RTTIBaseGetType)RTTIDerivedA_getType
};

struct RTTIBase_vtable vtable_for_RTTIDerivedB = {
    &typeinfo_for_RTTIDerivedB,
    (RTTIBaseDestructor)RTTIDerivedB_D0,
    (RTTIBaseDestructor)RTTIBase_dtor,
    (RTTIBaseGetType)RTTIDerivedB_getType
};

struct RTTIBase_vtable vtable_for_RTTIBase = {
    &typeinfo_for_RTTIBase,
    (RTTIBaseDestructor)RTTIBase_dtor,
    (RTTIBaseDestructor)RTTIBase_dtor,
    (RTTIBaseGetType)RTTIBase_getType
};

/* Global vtable pointer definitions */
struct RTTIBase_vtable *off_3D78 = &vtable_for_RTTIDerivedA;
struct RTTIBase_vtable *off_3DA0 = &vtable_for_RTTIBase;

struct std_ios_base_Init std___ioinit;
void *_dso_handle = NULL;

/* Forward declarations for all functions */
void sub_1020(void);
void GLOBAL__sub_I_5_1_cpp(void);

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&__gmon_start__;
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Empty function - stub */
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
void GLOBAL__sub_I_5_1_cpp()
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
int test_cpp_member_func()
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 memcpy(&s[0], xmmword_21F8, 16);
 v2 = 0;
 return strlen((char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
int call_virtual_func(struct Base *obj, int x)
{
 int (*vfunc)(struct Base *, int) = (int (*)(struct Base *, int))(void *)*obj->vtable;
 return vfunc(obj, x);
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
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct __class_type_info *)&typeinfo_for_Base, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
int test_cpp_rtti()
{
 void **v0; // r14
 void *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = (void **)cpp_operator_new(8u);
 *v0 = (void *)off_3D78;
 v1 = (void *)cpp_operator_new(8u);
 *(void **)v1 = (void *)off_3DA0;
 v2 = 130;
 if ( !__dynamic_cast(
 v0,
 &typeinfo_for_RTTIBase,
 &typeinfo_for_RTTIDerivedA,
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__dynamic_cast(
 v1,
 &typeinfo_for_RTTIBase,
 &typeinfo_for_RTTIDerivedB,
 0) )
 v3 = v2;
 cpp_operator_delete(v0);
 {
 void **vtable = (void **)v1;
 void (*dtor)(void *) = (void (*)(void *))vtable[1];
 dtor(v1);
 }
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(global_s);
 memcpy(&s[0], xmmword_21F8, 16);
 v2 = 0;
 v0 = strlen((char *)s);
 printf(format, (unsigned int)(v0 + 4700));
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


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
void Container_int_Constructor(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
void Container_int_push(struct Container_int *this, int value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
int Container_int_get(const struct Container_int *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
void Container_double_Constructor(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
void Container_double_push(struct Container_double *this, double value)
{
 long long size; // rax

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
double Container_double_get(const struct Container_double *this, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
void RTTIDerivedA_D0(void *_this)
{
 RTTIBase_dtor(_this);
 cpp_operator_delete(_this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
int RTTIDerivedA_getType(const void *_this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
void RTTIBase_dtor(void *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
void RTTIDerivedB_D0(void *_this)
{
 RTTIBase_dtor(_this);
 cpp_operator_delete(_this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
int RTTIDerivedB_getType(const void *_this)
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
