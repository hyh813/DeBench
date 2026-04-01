/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O0_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

/* Additional function declarations */
#include <stdlib.h>

#define _BOOL8 _Bool

/* Environment variable declaration */
extern char **environ;

/* Standard C library functions */
extern void _exit(int status);
extern void exit(int status);

/* External function declarations */
extern void* _gmon_start__;
extern void __cxa_atexit(void (*)(void*), void*, void*);
extern void* __dso_handle;
extern void __cxa_begin_catch(void*);
extern void __cxa_end_catch();
extern void __cxa_throw(void*, const struct type_info*, void(*)(void*));
extern void* __cxa_allocate_exception(unsigned int);
extern void __cxa_bad_typeid();
extern void __dynamic_cast(void*, const void*, const void*, int);
extern void __gxx_personality_v0(void);
extern void _Unwind_Resume(void*);
extern void __cxa_rethrow();
extern void __imp___cxa_finalize(void*);
extern void __cxa_finalize(void*);
extern void __cxa_allocate_dependent_exception();
extern void __cxa_free_dependent_exception(void*);
extern void* __cxa_get_globals();
extern void* __cxa_get_globals_fast();
extern void __cxa_current_exception_type();
extern void __clang_call_terminate(void*);
extern void _ZSt9terminatev();
extern void _ZNSt8ios_base4InitC1Ev();
extern void _ZNSt8ios_base4InitD1Ev();
extern void _Znam(unsigned long);
extern void _Znwm(unsigned long);
extern void _ZdlPv(void*);
extern void _ZdaPv(void*);
extern void operator delete(void*);
extern void operator delete[](void*);
extern void* operator new(unsigned long);
extern void* operator new[](unsigned long);
extern int printf(const char*, ...);
extern size_t strlen(const char*);
extern int strcmp(const char*, const char*);
extern void* memset(void*, int, size_t);
extern char* strncpy(char*, const char*, size_t);
extern int __libc_start_main(int (*)(int, char**, char**), int, char**, void(*)(), void(*)(), void(*)());

/* RTTI type info declarations - define std::type_info struct */
struct type_info {
    const char* _name;
};

extern const struct type_info typeinfo_for_int;
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;
extern const struct type_info typeinfo_for_RTITIBase;

/* RTTI type info definitions */
const struct type_info typeinfo_for_int = { "int" };
const struct type_info typeinfo_for_RTTIDerivedA = { "RTTIDerivedA" };
const struct type_info typeinfo_for_RTTIDerivedB = { "RTTIDerivedB" };
const struct type_info typeinfo_for_RTITIBase = { "RTTIBase" };

/* Additional RTTI type info functions */
extern long long _ZNKSt9type_infoeqERKS_(long long, long long);
extern const char* _ZNKSt9type_info4nameEv(void*);
extern long long _ZNK12RTTIDerivedA13derivedA_dataEv(void*);
extern long long _ZNK12RTTIDerivedB13derivedB_dataEv(void*);

/* C++ constructor/destructor functions */
extern void _ZN12RTTIDerivedAC2Ev(void*);
extern void _ZN12RTTIDerivedBC2Ev(void*);
extern void _ZN4BaseD0Ev(void*);
extern void _ZN7DerivedD0Ev(void*);
extern void _ZN12MultiDerivedD1Ev(void*);
extern void _ZN12MultiDerivedD0Ev(void*);
extern void _ZN5BaseAD0Ev(void*);
extern void _ZN5BaseBD0Ev(void*);
extern void _ZN7MiddleAD1Ev(void*);
extern void _ZN7MiddleAD0Ev(void*);
extern void _ZN7MiddleBD1Ev(void*);
extern void _ZN7MiddleBD0Ev(void*);
extern void _ZN14DiamondDerivedD1Ev(void*);
extern void _ZN14DiamondDerivedD0Ev(void*);
extern void _ZN12RTTIDerivedAD0Ev(void*);
extern void _ZN8RTTIBaseD0Ev(void*);
extern void _ZN12RTTIDerivedBD0Ev(void*);

/* std::unique_ptr and smart pointer functions */
extern long long _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__2E3getEv(long long);
extern long long _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__2E11get_deleterEv(long long);
extern void _ZZ18test_cpp_smart_ptrvENK3__2clEPi(long long, unsigned int*);
extern long long _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__2E6_M_ptrEv(void);
extern long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(long long, long long, long long);
extern long long _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__2EC2IRKS0_EEPiOT_(long long, long long, long long);
extern long long _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3_2EOT_RNSt16remove_referenceIS3_E4typeE(long long);
extern long long _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_(long long, long long, long long);
extern long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_void___2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_void___2_const_ref_void_(long long, long long, long long);
extern long long std_forward_int_ptr_ref_(long long);
extern long long std_forward_test_cpp_smart_ptr_void___2_const_ref_(long long);
extern long long std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref_(long long, long long);
extern long long std__Tuple_impl_1ul_test_cpp_smart_ptr_void___2__Tuple_impl_(long long, long long);
extern long long std_get_0ul_int_ptr_test_cpp_smart_ptr_void___2_(long long);
extern long long std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_void___2_(long long);
extern long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_void___2___M_head(long long);
extern long long std__Head_base_0ul_int_ptr_false__M_head(long long);
extern long long std_get_1ul_int_ptr_test_cpp_smart_ptr_void___2_(long long);
extern long long std__get_helper_1ul_test_cpp_smart_ptr_void___2_(long long);
extern long long std__Tuple_impl_1ul_test_cpp_smart_ptr_void___2___M_head(long long);
extern long long std__Head_base_1ul_test_cpp_smart_ptr_void___2_true__M_head(long long);
extern long long std_get_0ul_int_ptr_test_cpp_smart_ptr_void___2_const_(long long);
extern long long std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_void___2_const_(long long);
extern long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_void___2___M_head_const(long long);

/* std::move and std::forward functions */
extern long long _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(long long);
extern long long _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(long long);
extern long long _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(long long);

/* std::tuple and std::_Tuple_impl functions */
extern long long std_get_0ul_int_ptr_std_default_delete_int_(long long);
extern long long std__get_helper_0ul_int_ptr_std_default_delete_int_(long long);
extern long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(long long);
extern long long std__Head_base_0ul_int_ptr_false__M_head_(long long);
extern long long std_get_1ul_int_ptr_std_default_delete_int_(long long);
extern long long std__get_helper_1ul_std_default_delete_int_(long long);
extern long long std__Tuple_impl_1ul_std_default_delete_int___M_head(long long);
extern long long std__Head_base_1ul_std_default_delete_int_true__M_head(long long);

/* std::unique_ptr functions */
extern long long std_unique_ptr_int_std_default_delete_int__get(long long);
extern long long std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(long long);
extern long long std_unique_ptr_int_std_default_delete_int__get_deleter(long long);
extern long long std__uniq_ptr_impl_int_std_default_delete_int___M_deleter(long long);
extern long long std_default_delete_int_operator_paren(long long, void*);
extern long long std_unique_ptr_int_std_default_delete_int___unique_ptr(long long, long long);

/* std::default_delete functions */
extern long long std_default_delete_int_array_operator_paren(long long, void*);
extern long long std_unique_ptr_int_array_std_default_delete_int_array__get(long long);
extern long long std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(long long);
extern long long std_unique_ptr_int_array_std_default_delete_int_array__get_deleter(long long);
extern long long std__uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(long long);
extern long long std_get_0ul_int_ptr_std_default_delete_int_array_(long long);
extern long long std__get_helper_0ul_int_ptr_std_default_delete_int_array_(long long);
extern long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(long long);
extern long long std_get_1ul_int_ptr_std_default_delete_int_array_(long long);
extern long long std__get_helper_1ul_std_default_delete_int_array_(long long);
extern long long std__Tuple_impl_1ul_std_default_delete_int_array___M_head(long long);

/* Utility functions */
extern unsigned long long saturated_mul(unsigned int a, unsigned long long b)
{
    return (unsigned long long)a * b;
}

/* C++ std library functions */
extern void std_terminate(void);

/* Class forward declarations */
struct SimpleClass {
    unsigned int value;
    char name[32];
    void (*SimpleClass)(struct SimpleClass*, int, const char*);
    struct SimpleClass* (*setValue)(struct SimpleClass*, int);
    long long (*getValue)(struct SimpleClass*);
    long long (*compute)(struct SimpleClass*, int);
    long long (*getClassID)(struct SimpleClass*);
};

struct Base {
    unsigned long long* vtable;
    void (*Base)(struct Base*);
    long long (*virtual_func)(struct Base*, int);
    const char* (*getName)(struct Base*);
    void (*~Base)(struct Base*);
};

struct Derived {
    struct Base base;
    unsigned int derived_data;
    void (*Derived)(struct Derived*, int);
    long long (*virtual_func)(struct Derived*, int);
    const char* (*getName)(struct Derived*);
    void (*~Derived)(struct Derived*);
};

struct Point {
    unsigned int x;
    unsigned int y;
    void (*Point)(struct Point*, int, int);
    long long (*operator+)(unsigned int*, unsigned int*);
    _BOOL8 (*operator==)(unsigned int*, unsigned int*);
    unsigned int* (*operator++)(unsigned int*);
};

/* Container<int> definition */
struct Container_int {
    unsigned int data[10];
    unsigned int size;
};

/* Container<double> definition */
struct Container_double {
    double data[10];
    unsigned int size;
};

struct RTTIBase {
    unsigned long long* vtable;
    void (*RTTIBase)(struct RTTIBase*);
    long long (*getType)(struct RTTIBase*);
    void (*~RTTIBase)(struct RTTIBase*);
};

struct RTTIDerivedA {
    struct RTTIBase base;
    long long (*derivedA_data)(struct RTTIDerivedA*);
    void (*RTTIDerivedA)(struct RTTIDerivedA*);
    long long (*getType)(struct RTTIDerivedA*);
    void (*~RTTIDerivedA)(struct RTTIDerivedA*);
};

struct RTTIDerivedB {
    struct RTTIBase base;
    long long (*derivedB_data)(struct RTTIDerivedB*);
    void (*RTTIDerivedB)(struct RTTIDerivedB*);
    long long (*getType)(struct RTTIDerivedB*);
    void (*~RTTIDerivedB)(struct RTTIDerivedB*);
};

/* Forward declaration of VirtualBase for use in BaseA, BaseB, MultiDerived */
struct VirtualBase {
    unsigned long long* vtable;
    void (*VirtualBase)(struct VirtualBase*);
    long long (*func)(struct VirtualBase*);
    void (*~VirtualBase)(struct VirtualBase*);
};

struct BaseA {
    unsigned long long* vtable;
    void (*BaseA)(struct BaseA*);
    long long (*funcA)(struct BaseA*);
    void (*~BaseA)(struct BaseA*);
};

struct BaseB {
    unsigned long long* vtable;
    void (*BaseB)(struct BaseB*);
    long long (*funcB)(struct BaseB*);
    void (*~BaseB)(struct BaseB*);
};

struct MultiDerived {
    unsigned long long* vtable1;
    unsigned int padding1[2];
    unsigned long long* vtable2;
    void (*MultiDerived)(struct MultiDerived*);
    long long (*funcA)(struct MultiDerived*);
    long long (*funcB)(struct MultiDerived*);
    void (*~MultiDerived)(struct MultiDerived*);
};

struct MiddleA {
    unsigned long long* vtable;
    unsigned int padding[2];
    VirtualBase* virtual_base;
    void (*MiddleA)(struct MiddleA*, unsigned long long*);
    long long (*func)(struct MiddleA*);
    void (*~MiddleA)(struct MiddleA*);
};

struct MiddleB {
    unsigned long long* vtable;
    unsigned int padding[2];
    VirtualBase* virtual_base;
    void (*MiddleB)(struct MiddleB*, unsigned long long*);
    long long (*func)(struct MiddleB*);
    void (*~MiddleB)(struct MiddleB*);
};

struct DiamondDerived {
    unsigned long long* vtable1;
    unsigned long long* vtable2;
    unsigned int padding[2];
    VirtualBase virtual_base;
    void (*DiamondDerived)(struct DiamondDerived*);
    long long (*func)(struct DiamondDerived*);
    void (*~DiamondDerived)(struct DiamondDerived*);
};



/* Vtable declarations */
extern const void* off_8878;
extern const void* off_88B8;
extern const void* off_8900;
extern const void* off_8930;
extern const void* off_89B0;
extern const void* off_89D8;
extern const void* off_8A08;
extern const void* off_8A38;
extern const void* off_8A70;
extern const void* off_8C38;
extern const void* off_8D50;
extern const void* off_8DA0;
extern const void* off_8D78;

/* Vtable definitions */
const void* off_8878 = (const void*)0x8878;
const void* off_88B8 = (const void*)0x88B8;
const void* off_8900 = (const void*)0x8900;
const void* off_8930 = (const void*)0x8930;
const void* off_89B0 = (const void*)0x89B0;
const void* off_89D8 = (const void*)0x89D8;
const void* off_8A08 = (const void*)0x8A08;
const void* off_8A38 = (const void*)0x8A38;
const void* off_8A70 = (const void*)0x8A70;
const void* off_8C38 = (const void*)0x8C38;
const void* off_8D50 = (const void*)0x8D50;
const void* off_8DA0 = (const void*)0x8DA0;
const void* off_8D78 = (const void*)0x8D78;

/* String literals */
extern const char format[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* Forward declarations - C++ std::ios_base::Init */
struct ios_base_Init {
    void (*ios_base_Init)(struct ios_base_Init*);
    void (*~ios_base_Init)(struct ios_base_Init*);
};

/* Global variables */
extern struct ios_base_Init __ioinit;

/* String literal definitions */
const char format[] = "=== C++ OO Features Test ===\n";
const char aCppL301D[] = "test_cpp_member_func: %d\n";
const char aCppL302D[] = "test_cpp_constructor: %d\n";
const char aCppL303D[] = "test_cpp_virtual_func: %d\n";
const char aCppL304D[] = "test_cpp_multiple_inheritance: %d\n";
const char aCppL305D[] = "test_cpp_diamond_inheritance: %d\n";
const char aCppL306D[] = "test_cpp_operator_overload: %d\n";
const char aCppL307D[] = "test_cpp_template_func: %d\n";
const char aCppL308D[] = "test_cpp_template_class: %d\n";
const char aCppL309D[] = "test_cpp_lambda: %d\n";

/* Global variable definition */
struct ios_base_Init __ioinit;

/* Static member declarations */
struct LifecycleClass {
    unsigned long long* data;
    unsigned long long size;
    void (*LifecycleClass)(struct LifecycleClass*, unsigned long long);
    long long (*getData)(struct LifecycleClass*, unsigned long long);
    long long (*getInstanceCount)(struct LifecycleClass*);
    void (*~LifecycleClass)(struct LifecycleClass*);
};

/* Static member definition */
unsigned int LifecycleClass_instance_count = 0;

/* Function declarations that need to be visible */
extern long long test_cpp_lambda(void);
extern long long _Z12template_maxIiET_S0_S0_(int, int);
extern double _Z12template_maxIdET_S0_S0_(double, double);
extern int* _Z13template_swapIiEvRT_S1_(int*, int*);
extern long long _ZN9ContainerIiEC2Ev(void*);
extern long long _ZN9ContainerIiE4pushEi(void*, int);
extern long long _ZNK9ContainerIiE3getEi(void*, int);
extern long long _ZNK9ContainerIiE7getSizeEv(void*);
extern long long _ZN9ContainerIdEC2Ev(void*);
extern long long _ZN9ContainerIdE4pushEd(void*, double);
extern double _ZNK9ContainerIdE3getEi(void*, int);
extern long long _ZNK9ContainerIdE7getSizeEv(void*);

/* Static method function declarations */
void SimpleClass_SimpleClass(struct SimpleClass*, int, const char*);
struct SimpleClass* SimpleClass_setValue(struct SimpleClass*, int);
long long SimpleClass_getValue(struct SimpleClass*);
long long SimpleClass_compute(struct SimpleClass*, int);
long long SimpleClass_getClassID(struct SimpleClass*);

void Base_Base(struct Base*);
long long Base_virtual_func(struct Base*, int);
const char* Base_getName(struct Base*);
void Base__Base(struct Base*);

void Derived_Derived(struct Derived*, int);
long long Derived_virtual_func(struct Derived*, int);
const char* Derived_getName(struct Derived*);
void Derived__Derived(struct Derived*);

void LifecycleClass_LifecycleClass(struct LifecycleClass*, unsigned long long);
long long LifecycleClass_getData(struct LifecycleClass*, unsigned long long);
long long LifecycleClass_getInstanceCount();
void LifecycleClass__LifecycleClass(struct LifecycleClass*);

void Point_Point(struct Point*, int, int);
long long Point_operator_plus(unsigned int*, unsigned int*);
_BOOL8 Point_operator_eq(unsigned int*, unsigned int*);
unsigned int* Point_operator_inc(unsigned int*);

void RTTIBase_RTTIBase(struct RTTIBase*);
long long RTTIBase_getType(struct RTTIBase*);
void RTTIBase__RTTIBase(struct RTTIBase*);

void RTTIDerivedA_RTTIDerivedA(struct RTTIDerivedA*);
long long RTTIDerivedA_getType(struct RTTIDerivedA*);
long long RTTIDerivedA_derivedA_data(struct RTTIDerivedA*);
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA*);

void RTTIDerivedB_RTTIDerivedB(struct RTTIDerivedB*);
long long RTTIDerivedB_getType(struct RTTIDerivedB*);
long long RTTIDerivedB_derivedB_data(struct RTTIDerivedB*);
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB*);

void BaseA_BaseA(struct BaseA*);
long long BaseA_funcA(struct BaseA*);
void BaseA__BaseA(struct BaseA*);

void BaseB_BaseB(struct BaseB*);
long long BaseB_funcB(struct BaseB*);
void BaseB__BaseB(struct BaseB*);

void MultiDerived_MultiDerived(struct MultiDerived*);
long long MultiDerived_funcA(struct MultiDerived*);
long long MultiDerived_funcB(struct MultiDerived*);
void MultiDerived__MultiDerived(struct MultiDerived*);

void VirtualBase_VirtualBase(struct VirtualBase*);
long long VirtualBase_func(struct VirtualBase*);
void VirtualBase__VirtualBase(struct VirtualBase*);

void MiddleA_MiddleA(struct MiddleA*, unsigned long long*);
long long MiddleA_func(struct MiddleA*);
void MiddleA__MiddleA(struct MiddleA*);

void MiddleB_MiddleB(struct MiddleB*, unsigned long long*);
long long MiddleB_func(struct MiddleB*);
void MiddleB__MiddleB(struct MiddleB*);

void DiamondDerived_DiamondDerived(struct DiamondDerived*);
long long DiamondDerived_func(struct DiamondDerived*);
void DiamondDerived__DiamondDerived(struct DiamondDerived*);

/* Static member function pointers for C++ compatibility */
#define SimpleClass_SimpleClass SimpleClass_SimpleClass
#define SimpleClass_setValue SimpleClass_setValue
#define SimpleClass_getValue SimpleClass_getValue
#define SimpleClass_compute SimpleClass_compute
#define SimpleClass_getClassID SimpleClass_getClassID

#define Base_Base Base_Base
#define Base_virtual_func Base_virtual_func
#define Base_getName Base_getName
#define Base__Base Base__Base

#define Derived_Derived Derived_Derived
#define Derived_virtual_func Derived_virtual_func
#define Derived_getName Derived_getName
#define Derived__Derived Derived__Derived

#define LifecycleClass_LifecycleClass LifecycleClass_LifecycleClass
#define LifecycleClass_getData LifecycleClass_getData
#define LifecycleClass_getInstanceCount LifecycleClass_getInstanceCount
#define LifecycleClass__LifecycleClass LifecycleClass__LifecycleClass

#define Point_Point Point_Point
#define Point_operator_plus Point_operator_plus
#define Point_operator_eq Point_operator_eq
#define Point_operator_inc Point_operator_inc

#define RTTIBase_RTTIBase RTTIBase_RTTIBase
#define RTTIBase_getType RTTIBase_getType
#define RTTIBase__RTTIBase RTTIBase__RTTIBase

#define RTTIDerivedA_RTTIDerivedA RTTIDerivedA_RTTIDerivedA
#define RTTIDerivedA_getType RTTIDerivedA_getType
#define RTTIDerivedA_derivedA_data RTTIDerivedA_derivedA_data
#define RTTIDerivedA__RTTIDerivedA RTTIDerivedA__RTTIDerivedA

#define RTTIDerivedB_RTTIDerivedB RTTIDerivedB_RTTIDerivedB
#define RTTIDerivedB_getType RTTIDerivedB_getType
#define RTTIDerivedB_derivedB_data RTTIDerivedB_derivedB_data
#define RTTIDerivedB__RTTIDerivedB RTTIDerivedB__RTTIDerivedB

#define BaseA_BaseA BaseA_BaseA
#define BaseA_funcA BaseA_funcA
#define BaseA__BaseA BaseA__BaseA

#define BaseB_BaseB BaseB_BaseB
#define BaseB_funcB BaseB_funcB
#define BaseB__BaseB BaseB__BaseB

#define MultiDerived_MultiDerived MultiDerived_MultiDerived
#define MultiDerived_funcA MultiDerived_funcA
#define MultiDerived_funcB MultiDerived_funcB
#define MultiDerived__MultiDerived MultiDerived__MultiDerived

#define VirtualBase_VirtualBase VirtualBase_VirtualBase
#define VirtualBase_func VirtualBase_func
#define VirtualBase__VirtualBase VirtualBase__VirtualBase

#define MiddleA_MiddleA MiddleA_MiddleA
#define MiddleA_func MiddleA_func
#define MiddleA__MiddleA MiddleA__MiddleA

#define MiddleB_MiddleB MiddleB_MiddleB
#define MiddleB_func MiddleB_func
#define MiddleB__MiddleB MiddleB__MiddleB

#define DiamondDerived_DiamondDerived DiamondDerived_DiamondDerived
#define DiamondDerived_func DiamondDerived_func
#define DiamondDerived__DiamondDerived DiamondDerived__DiamondDerived

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
}


/* Function: __cxx_global_var_init @ 0x2180 */
int _cxx_global_var_init()
{
 _ZNSt8ios_base4InitC1Ev(&__ioinit);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &__ioinit, &__dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x21B0 */
int GLOBAL__sub_I_5_1_cpp()
{
 return _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x22B0 */
long long test_cpp_member_func(void)
{
 int v1; // [rsp+10h] [rbp-30h]
 int Value; // [rsp+14h] [rbp-2Ch]
 unsigned char v3[40]; // [rsp+18h] [rbp-28h] BYREF

 SimpleClass_SimpleClass((SimpleClass *)v3, 5, "Test");
 SimpleClass_setValue((SimpleClass *)v3, 10);
 Value = SimpleClass_getValue((SimpleClass *)v3);
 v1 = SimpleClass_compute((SimpleClass *)v3, 3);
 return (unsigned int)SimpleClass_getClassID((SimpleClass *)v3) + v1 + Value;
}


/* Function: _Z20test_cpp_constructorv @ 0x2310 */
long long test_cpp_constructor(void)
{
 int v0; // eax
 int InstanceCount; // [rsp+Ch] [rbp-34h]
 int Data; // [rsp+18h] [rbp-28h]
 unsigned char v4[20]; // [rsp+28h] [rbp-18h] BYREF
 int v5; // [rsp+3Ch] [rbp-4h]

 v5 = 0;
 LifecycleClass_LifecycleClass((LifecycleClass *)v4, 5u);
 Data = LifecycleClass_getData((LifecycleClass *)v4, 2u);
 v5 += Data;
 InstanceCount = LifecycleClass_getInstanceCount();
 v5 += InstanceCount;
 LifecycleClass__LifecycleClass((LifecycleClass *)v4);
 v0 = LifecycleClass_getInstanceCount();
 return (unsigned int)(v5 + 1000 * v0);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x23B0 */
long long call_virtual_func(Base *a1, unsigned int a2)
{
 return (**(long long ( ***)(Base *, unsigned long long))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x23E0 */
long long test_cpp_virtual_func(void)
{
 unsigned int v1; // [rsp+4h] [rbp-5Ch]
 int v2; // [rsp+1Ch] [rbp-44h]
 int v3; // [rsp+34h] [rbp-2Ch]
 int v4; // [rsp+38h] [rbp-28h]
 unsigned char v5[16]; // [rsp+48h] [rbp-18h] BYREF
 unsigned char v6[8]; // [rsp+58h] [rbp-8h] BYREF

 Base_Base((Base *)v6);
 Derived_Derived((Derived *)v5, 3);
 v4 = Base_virtual_func((Base *)v6, 5);
 v3 = Derived_virtual_func((Derived *)v5, 5);
 v2 = call_virtual_func((Base *)v6, 5u);
 v1 = call_virtual_func((Base *)v5, 5u) + v2 + v3 + v4;
 Derived__Derived((Derived *)v5);
 Base__Base((Base *)v6);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24F0 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned long long *v1; // [rsp+18h] [rbp-58h]
 int v2; // [rsp+28h] [rbp-48h]
 int v3; // [rsp+3Ch] [rbp-34h]
 long long ( **v4)(unsigned long long); // [rsp+50h] [rbp-20h] BYREF
 int v5; // [rsp+58h] [rbp-18h]
 unsigned int v6[4]; // [rsp+60h] [rbp-10h] BYREF

 MultiDerived_MultiDerived((MultiDerived *)&v4);
 v5 = 100;
 v6[2] = 200;
 v1 = 0;
 if ( &v4 )
 v1 = v6;
 v3 = (*v4)(&v4);
 v2 = (*(long long ( **)(unsigned long long *))*v1)(v1);
 MultiDerived__MultiDerived((MultiDerived *)&v4);
 return (unsigned int)(&v4 != v1) + v2 + v3;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x25D0 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v1; // [rsp+Ch] [rbp-64h]
 long long ( ***v2)(unsigned long long); // [rsp+18h] [rbp-58h]
 int v3; // [rsp+34h] [rbp-3Ch]
 unsigned long long v4[6]; // [rsp+40h] [rbp-30h] BYREF

 DiamondDerived_DiamondDerived((DiamondDerived *)v4);
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 50;
 v2 = 0;
 if ( v4 )
 v2 = (long long ( ***)(unsigned long long))((char *)v4 + *(unsigned long long *)(v4[0] - 24LL));
 v3 = (**v2)(v2);
 *(unsigned int *)((char *)&v4[1] + *(unsigned long long *)(v4[0] - 24LL)) = 100;
 v1 = (**v2)(v2) + v3;
 DiamondDerived__DiamondDerived((DiamondDerived *)v4);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x26A0 */
long long test_cpp_operator_overload(void)
{
 int v0; // ecx
 char v2; // [rsp+7h] [rbp-19h]
 long long v3; // [rsp+8h] [rbp-18h] BYREF
 unsigned char v4[8]; // [rsp+10h] [rbp-10h] BYREF
 unsigned char v5[8]; // [rsp+18h] [rbp-8h] BYREF

 Point_Point((Point *)v5, 1, 2);
 Point_Point((Point *)v4, 3, 4);
 v3 = Point_operator_plus(v5, v4);
 v2 = Point_operator_eq(v5, v4) & 1;
 Point_operator_inc(&v3);
 v0 = 10;
 if ( (v2 & 1) != 0 )
 v0 = 0;
 return (unsigned int)(v0 + HIDWORD(v3) + v3);
}


/* Function: _Z22test_cpp_template_funcv @ 0x2720 */
long long test_cpp_template_func(void)
{
 int v1; // [rsp+8h] [rbp-18h] BYREF
 int v2; // [rsp+Ch] [rbp-14h] BYREF
 double v3; // [rsp+10h] [rbp-10h]
 int v4; // [rsp+1Ch] [rbp-4h]

 v4 = _Z12template_maxIiET_S0_S0_(3, 7);
 v3 = _Z12template_maxIdET_S0_S0_(2.5, 1.5);
 v2 = 10;
 v1 = 20;
 _Z13template_swapIiEvRT_S1_(&v2, &v1);
 return (unsigned int)(v1 + v2 + (int)v3 + v4);
}


/* Function: _Z23test_cpp_template_classv @ 0x2790 */
long long test_cpp_template_class(void)
{
 double v1; // [rsp+8h] [rbp-98h]
 unsigned char v2[88]; // [rsp+10h] [rbp-90h] BYREF
 int Size; // [rsp+68h] [rbp-38h]
 int v4; // [rsp+6Ch] [rbp-34h]
 unsigned char v5[48]; // [rsp+70h] [rbp-30h] BYREF

 _ZN9ContainerIiEC2Ev(v5);
 _ZN9ContainerIiE4pushEi(v5, 10);
 _ZN9ContainerIiE4pushEi(v5, 20);
 _ZN9ContainerIiE4pushEi(v5, 30);
 v4 = _ZNK9ContainerIiE3getEi(v5, 0);
 Size = _ZNK9ContainerIiE7getSizeEv(v5);
 _ZN9ContainerIdEC2Ev(v2);
 _ZN9ContainerIdE4pushEd(v2, 3.14);
 v1 = _ZNK9ContainerIdE3getEi(v2, 0);
 return (unsigned int)((int)v1 + Size + v4);
}


/* Function: _Z15test_cpp_lambdav @ 0x2840 */
long long test_cpp_lambda(void)
{
 int v1;
 int v3;
 unsigned int v5[2];

 v5[1] = 10;
 v5[0] = 20;
 v3 = 10;
 v1 = v3 * 3 + v5[0] + 5;
 return v1 + 30;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x28A0 */
long long _ZZ15test_cpp_lambdavENK3$_1clEi(long long a1, int a2)
{
 **(unsigned int **)(a1 + 8) += 5;
 return (unsigned int)(**(unsigned int **)(a1 + 8) + *(unsigned int *)a1 * a2);
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x28D0 */
long long _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_(long long a1, int a2, int a3)
{
 return (unsigned int)(a3 + a2);
}


/* Function: _Z18test_cpp_exceptionv @ 0x28F0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rdi

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2A50 */
long long test_cpp_smart_ptr(void)
{
 unsigned int v3;
 unsigned int *v4;
 unsigned int *v5;
 int v8;
 int v10;

 v10 = 200;
 v8 = 3;
 v5 = (unsigned int *)operator new(4u);
 *v5 = 500;
 v4 = v5;
 v3 = *v4 + v8 + v10;
 operator delete(v5);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2EC2IS0_vEEPiRKS0_ @ 0x2C40 */
long long _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2EC2IS0_vEEPiRKS0_()
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_();
}

/* Static method implementations for SimpleClass */
void SimpleClass_SimpleClass(SimpleClass *this, int a2, const char *a3)
{
 this->value = a2;
 strncpy(this->name, a3, 31);
 this->name[31] = '\0';
}

SimpleClass* SimpleClass_setValue(SimpleClass *this, int a2)
{
 this->value = a2;
 return this;
}

long long SimpleClass_getValue(SimpleClass *this)
{
 return this->value;
}

long long SimpleClass_compute(SimpleClass *this, int a2)
{
 return a2 * this->value + strlen(this->name);
}

long long SimpleClass_getClassID(SimpleClass *this)
{
 return 4660;
}

/* Static method implementations for Base */
void Base_Base(Base *this)
{
 this->vtable = (unsigned long long*)&off_8878;
}

long long Base_virtual_func(Base *this, int a2)
{
 return a2 + 1;
}

const char* Base_getName(Base *this)
{
 return "Base";
}

void Base__Base(Base *this)
{
}

/* Static method implementations for Derived */
void Derived_Derived(Derived *this, int a2)
{
 Base_Base(&this->base);
 this->base.vtable = (unsigned long long*)&off_88B8;
 this->derived_data = a2;
}

long long Derived_virtual_func(Derived *this, int a2)
{
 return this->derived_data * a2;
}

const char* Derived_getName(Derived *this)
{
 return "Derived";
}

void Derived__Derived(Derived *this)
{
 Base__Base(&this->base);
}

/* Static method implementations for LifecycleClass */
void LifecycleClass_LifecycleClass(LifecycleClass *this, unsigned long long a2)
{
 unsigned long long i;
 this->size = a2;
 this->data = (unsigned long long*)operator new[](a2 * 4);
 for (i = 0; i < a2; ++i)
 ((unsigned int*)this->data)[i] = 10 * i;
 ++LifecycleClass_instance_count;
}

long long LifecycleClass_getData(LifecycleClass *this, unsigned long long a2)
{
 if (a2 >= this->size)
 return -1;
 return ((unsigned int*)this->data)[a2];
}

long long LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}

void LifecycleClass__LifecycleClass(LifecycleClass *this)
{
 if (this->data)
 operator delete[](this->data);
 --LifecycleClass_instance_count;
}

/* Static method implementations for Point */
void Point_Point(Point *this, int a2, int a3)
{
 this->x = a2;
 this->y = a3;
}

long long Point_operator_plus(unsigned int *a1, unsigned int *a2)
{
 Point result;
 result.x = a2[0] + a1[0];
 result.y = a2[1] + a1[1];
 return *(unsigned long long*)&result;
}

_BOOL8 Point_operator_eq(unsigned int *a1, unsigned int *a2)
{
 return (a1[0] == a2[0] && a1[1] == a2[1]) ? 1 : 0;
}

unsigned int* Point_operator_inc(unsigned int *a1)
{
 ++a1[0];
 ++a1[1];
 return a1;
}

/* Static method implementations for RTTI classes */
void RTTIBase_RTTIBase(RTTIBase *this)
{
 this->vtable = (unsigned long long*)&off_8D78;
}

long long RTTIBase_getType(RTTIBase *this)
{
 return 0;
}

void RTTIBase__RTTIBase(RTTIBase *this)
{
}

void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase(&this->base);
 this->base.vtable = (unsigned long long*)off_8D50;
}

long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}

long long RTTIDerivedA_derivedA_data(RTTIDerivedA *this)
{
 return 100;
}

void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase__RTTIBase(&this->base);
}

void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase(&this->base);
 this->base.vtable = (unsigned long long*)off_8DA0;
}

long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}

long long RTTIDerivedB_derivedB_data(RTTIDerivedB *this)
{
 return 200;
}

void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase__RTTIBase(&this->base);
}

/* Static method implementations for BaseA and BaseB */
void BaseA_BaseA(BaseA *this)
{
 this->vtable = (unsigned long long*)&off_89B0;
}

long long BaseA_funcA(BaseA *this)
{
 return 10;
}

void BaseA__BaseA(BaseA *this)
{
}

void BaseB_BaseB(BaseB *this)
{
 this->vtable = (unsigned long long*)&off_89D8;
}

long long BaseB_funcB(BaseB *this)
{
 return 20;
}

void BaseB__BaseB(BaseB *this)
{
}

/* Static method implementations for MultiDerived */
void MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA*)this);
 BaseB_BaseB((BaseB*)((char*)this + 16));
 this->vtable1 = (unsigned long long*)&off_8900;
 this->vtable2 = (unsigned long long*)&off_8930;
}

long long MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}

long long MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}

void MultiDerived__MultiDerived(MultiDerived *this)
{
 BaseB__BaseB((BaseB*)((char*)this + 16));
 BaseA__BaseA((BaseA*)this);
}

/* Static method implementations for VirtualBase */
void VirtualBase_VirtualBase(VirtualBase *this)
{
 this->vtable = (unsigned long long*)&off_8C38;
}

long long VirtualBase_func(VirtualBase *this)
{
 return 100;
}

void VirtualBase__VirtualBase(VirtualBase *this)
{
}

/* Static method implementations for MiddleA */
void MiddleA_MiddleA(MiddleA *this, unsigned long long *a2)
{
 this->vtable = a2[0];
 this->virtual_base = (VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable - 3));
 ((VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable - 3)))->vtable = a2[1];
}

long long MiddleA_func(MiddleA *this)
{
 VirtualBase* vb = (VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable - 3));
 return ((unsigned int*)vb)[2] + 150;
}

void MiddleA__MiddleA(MiddleA *this)
{
 VirtualBase__VirtualBase((VirtualBase*)((char*)this + 16));
}

/* Static method implementations for MiddleB */
void MiddleB_MiddleB(MiddleB *this, unsigned long long *a2)
{
 this->vtable = a2[0];
 this->virtual_base = (VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable - 3));
 ((VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable - 3)))->vtable = a2[1];
}

long long MiddleB_func(MiddleB *this)
{
 VirtualBase* vb = (VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable - 3));
 return ((unsigned int*)vb)[2] + 200;
}

void MiddleB__MiddleB(MiddleB *this)
{
 VirtualBase__VirtualBase((VirtualBase*)((char*)this + 16));
}

/* Static method implementations for DiamondDerived */
void DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase(&this->virtual_base);
 MiddleA_MiddleA((MiddleA*)this, this->vtable1);
 MiddleB_MiddleB((MiddleB*)((char*)this + 16), this->vtable2);
 this->vtable1 = (unsigned long long*)&off_8A08;
 this->vtable2 = (unsigned long long*)&off_8A70;
}

long long DiamondDerived_func(DiamondDerived *this)
{
 VirtualBase* vb = (VirtualBase*)((char*)this + *(unsigned long long*)(this->vtable1 - 3));
 return ((unsigned int*)vb)[2] + 250;
}

void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 MiddleB__MiddleB((MiddleB*)((char*)this + 16));
 MiddleA__MiddleA((MiddleA*)this);
}

/* std library forward and move implementations */
long long std_forward_ref_int_star(long long a1)
{
 return a1;
}

long long std_move_int_star_ref(long long a1)
{
 return a1;
}

long long std_move_int_smart_ptr_ref(long long a1)
{
 return a1;
}

long long std_move_tuple_int_ptr_deleter_ref(long long a1)
{
 return a1;
}

/* Missing std::forward and tuple implementations */
long long std_forward_test_cpp_smart_ptr_void___2_const_ref_(long long a1)
{
 return a1;
}

long long std_forward_int_ptr_ref_(long long a1)
{
 return a1;
}

long long std__Head_base_0ul_int_ptr_false__Head_base_(long long a1, long long a2)
{
 *(unsigned long long *)a1 = a2;
 return a1;
}

long long std__Head_base_0ul_int_ptr_false__M_head_const(long long a1)
{
 return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(long long a1, long long a2)
{
 return a1;
}

long long std__Head_base_1ul_std_default_delete_int_true__Head_base(long long a1)
{
 return a1;
}

long long std__Head_base_1ul_std_default_delete_int_array_true__Head_base(long long a1)
{
 return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(long long a1, long long a2)
{
 return a1;
}

long long std__Tuple_impl_1ul_test_cpp_smart_ptr_void___2__Tuple_impl_(long long a1, long long a2)
{
 return a1;
}

long long std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref_(long long a1, long long a2)
{
 *(unsigned long long *)a1 = a2;
 return a1;
}

long long std__Head_base_0ul_int_ptr_false__M_head(long long a1)
{
 return a1;
}

long long std_get_1ul_int_ptr_test_cpp_smart_ptr_void___2_(long long a1)
{
 return a1;
}

long long std__get_helper_1ul_test_cpp_smart_ptr_void___2_(long long a1)
{
 return a1;
}

long long std__Tuple_impl_1ul_test_cpp_smart_ptr_void___2___M_head(long long a1)
{
 return a1;
}

long long std__Head_base_1ul_test_cpp_smart_ptr_void___2_true__M_head(long long a1)
{
 return a1;
}

long long std_get_0ul_int_ptr_test_cpp_smart_ptr_void___2_const_(long long a1)
{
 return a1;
}

long long std__get_helper_0ul_int_ptr_test_cpp_smart_ptr_void___2_const_(long long a1)
{
 return a1;
}

long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_void___2___M_head_const(long long a1)
{
 return a1;
}

long long std__Head_base_0ul_int_ptr_false__M_head_const(long long a1)
{
 return a1;
}

/* Additional std::get and tuple helpers */
long long std_get_0ul_int_ptr_std_default_delete_int_(long long a1)
{
 return a1;
}

long long std__get_helper_0ul_int_ptr_std_default_delete_int_(long long a1)
{
 return a1;
}

long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(long long a1)
{
 return a1;
}

long long std__Head_base_0ul_int_ptr_false__M_head_(long long a1)
{
 return a1;
}

long long std_get_1ul_int_ptr_std_default_delete_int_(long long a1)
{
 return a1;
}

long long std__get_helper_1ul_std_default_delete_int_(long long a1)
{
 return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int___M_head(long long a1)
{
 return a1;
}

long long std__Head_base_1ul_std_default_delete_int_true__M_head(long long a1)
{
 return a1;
}

long long std_unique_ptr_int_std_default_delete_int__get(long long a1)
{
 return a1;
}

long long std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(long long a1)
{
 return a1;
}

long long std_unique_ptr_int_std_default_delete_int__get_deleter(long long a1)
{
 return a1;
}

long long std__uniq_ptr_impl_int_std_default_delete_int___M_deleter(long long a1)
{
 return a1;
}

long long std_default_delete_int_operator_paren(long long a1, void *a2)
{
 if (a2)
 operator delete(a2);
 return 0;
}

long long std_unique_ptr_int_std_default_delete_int___unique_ptr(long long a1, long long a2)
{
 return a1;
}

/* std::default_delete<int[]> implementations */
long long std_default_delete_int_array_operator_paren(long long a1, void *a2)
{
 if (a2)
 operator delete[](a2);
 return 0;
}

long long std_unique_ptr_int_array_std_default_delete_int_array__get(long long a1)
{
 return a1;
}

long long std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(long long a1)
{
 return a1;
}

long long std_unique_ptr_int_array_std_default_delete_int_array__get_deleter(long long a1)
{
 return a1;
}

long long std__uniq_ptr_impl_int_std_default_delete_int_array___M_deleter(long long a1)
{
 return a1;
}

long long std_get_0ul_int_ptr_std_default_delete_int_array_(long long a1)
{
 return a1;
}

long long std__get_helper_0ul_int_ptr_std_default_delete_int_array_(long long a1)
{
 return a1;
}

long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(long long a1)
{
 return a1;
}

long long std_get_1ul_int_ptr_std_default_delete_int_array_(long long a1)
{
 return a1;
}

long long std__get_helper_1ul_std_default_delete_int_array_(long long a1)
{
 return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int_array___M_head(long long a1)
{
 return a1;
}

long long _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(long long a1)
{
 return a1;
}

long long std_terminate(void)
{
 return 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2EdeEv @ 0x2C80 */
long long _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2EdeEv(long long a1)
{
 return _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2E3getEv(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2ED2Ev @ 0x2CB0 */
unsigned long long * _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2ED2Ev(long long a1)
{
 unsigned long long *v1; // rax
 unsigned long long *result; // rax
 long long deleter; // [rsp+8h] [rbp-28h]
 unsigned long long *v4; // [rsp+20h] [rbp-10h]

 v4 = (unsigned long long *)_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E6_M_ptrEv();
 if ( *v4 )
 {
 deleter = _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2E11get_deleterEv(a1);
 v1 = (unsigned long long *)_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(v4);
 _ZZ18test_cpp_smart_ptrvENK3_2clEPi(deleter, *v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x2D30 */
long long test_cpp_rtti(void)
{
 const char *v0; // rax
 RTTIDerivedB *v2; // [rsp+18h] [rbp-68h]
 RTTIDerivedA *v3; // [rsp+28h] [rbp-58h]
 RTTIDerivedA *v4; // [rsp+40h] [rbp-40h]
 RTTIDerivedB *v5; // [rsp+48h] [rbp-38h]
 int v6; // [rsp+6Ch] [rbp-14h]
 unsigned int v7; // [rsp+6Ch] [rbp-14h]

 v4 = (RTTIDerivedA *)operator new(8u);
 memset(v4, 0, 8u);
 _ZN12RTTIDerivedAC2Ev(v4);
 v5 = (RTTIDerivedB *)operator new(8u);
 memset(v5, 0, 8u);
 _ZN12RTTIDerivedBC2Ev(v5);
 v6 = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( (_ZNKSt9type_infoeqERKS_(*(unsigned long long *)(*(unsigned long long *)v4 - 8LL), &typeinfo_for_RTTIDerivedA) & 1) != 0 )
 v6 = 10;
 if ( !v5 )
 __cxa_bad_typeid();
 if ( (_ZNKSt9type_infoeqERKS_(*(unsigned long long *)(*(unsigned long long *)v5 - 8LL), &typeinfo_for_RTTIDerivedB) & 1) != 0 )
 v6 += 20;
 v3 = (RTTIDerivedA *)__dynamic_cast(
 v4,
 (const void *)&typeinfo_for_RTITIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 v6 += _ZNK12RTTIDerivedA13derivedA_dataEv(v3);
 v2 = (RTTIDerivedB *)__dynamic_cast(
 v5,
 (const void *)&typeinfo_for_RTITIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 v6 += RTTIDerivedB_derivedB_data(v2);
 v0 = _ZNKSt9type_info4nameEv(*(struct type_info **)(*(unsigned long long *)v4 - 8LL));
 v7 = strlen(v0) + v6;
 (*(void ( **)(RTTIDerivedA *))(*(unsigned long long *)v4 + 8LL))(v4);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned long long *)v5 + 8LL))(v5);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F70 */
void test_cpp_oo_features(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 printf(format);
 v0 = test_cpp_member_func();
 printf(aCppL301D, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 printf(aCppL306D, v5);
 v6 = test_cpp_template_func();
 printf(aCppL307D, v6);
 v7 = test_cpp_template_class();
 printf(aCppL308D, v7);
 v8 = test_cpp_lambda();
 printf(aCppL309D, v8);
 test_cpp_exception();
}


/* Function: main @ 0x3080 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x30A0 */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 long long a1,
 long long a2,
 long long a3)
{
 return _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2EC2IRKS0_EEPiOT_(a1, a2, a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2EC2IRKS0_EEPiOT_ @ 0x30D0 */
long long _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2EC2IRKS0_EEPiOT_(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 unsigned long long v5[2]; // [rsp+10h] [rbp-10h] BYREF

 v5[1] = a1;
 v5[0] = a2;
 v3 = _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3_2EOT_RNSt16remove_referenceIS3_E4typeE(a3);
 return _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_(a1, v5, v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x3110 */
long long _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3_2EOT_RNSt16remove_referenceIS3_E4typeE(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x3120 */
long long _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rdx
 long long v5; // [rsp+10h] [rbp-20h]

 v5 = _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(a2);
 v3 = _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3_2EOT_RNSt16remove_referenceIS3_E4typeE(a3);
 return _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_(a1, v5, v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x3180 */
long long std__Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_void___2__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_void___2_const_ref_void_(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 long long v4; // rax

 v3 = std_forward_test_cpp_smart_ptr_void___2_const_ref_(a3);
 std__Tuple_impl_1ul_test_cpp_smart_ptr_void___2__Tuple_impl_(a1, v3);
 v4 = std_forward_int_ptr_ref_(a2);
 return std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref_(a1, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3_2EEC2ERKS0_ @ 0x31E0 */
long long _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3_2EEC2ERKS0_(long long a1, long long a2)
{
 return _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3_2Lb1EEC2ERKS0_(a1, a2);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3_2Lb1EEC2ERKS0_ @ 0x3210 */
void _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3_2Lb1EEC2ERKS0_()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E6_M_ptrEv @ 0x3220 */
long long _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E6_M_ptrEv(long long a1)
{
 return _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2E11get_deleterEv @ 0x3240 */
long long _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2E11get_deleterEv(long long a1)
{
 return _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E10_M_deleterEv(a1);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3_2clEPi @ 0x3270 */
void _ZZ18test_cpp_smart_ptrvENK3_2clEPi(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32B0 */
long long _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(long long a1)
{
 return _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x32D0 */
long long _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(long long a1)
{
 return _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EE7_M_headERS2_(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EE7_M_headERS2_ @ 0x32F0 */
long long _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EE7_M_headERS2_(long long a1)
{
 return _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E10_M_deleterEv @ 0x3310 */
long long _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E10_M_deleterEv(long long a1)
{
 return _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x3330 */
long long _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(long long a1)
{
 return _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x3350 */
long long _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE(long long a1)
{
 return _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3_2EE7_M_headERS1_(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3_2EE7_M_headERS1_ @ 0x3370 */
long long _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3_2EE7_M_headERS1_(long long a1)
{
 return _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3_2Lb1EE7_M_headERS1_(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3_2Lb1EE7_M_headERS1_ @ 0x3390 */
long long _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3_2Lb1EE7_M_headERS1_(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2E3getEv @ 0x33A0 */
long long _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3_2E3getEv(long long a1)
{
 return _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E6_M_ptrEv(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E6_M_ptrEv @ 0x33D0 */
long long _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3_2E6_M_ptrEv(long long a1)
{
 return *(unsigned long long *)_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x33F0 */
long long _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(long long a1)
{
 return _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3410 */
long long _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(long long a1)
{
 return _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EE7_M_headERKS2_(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EE7_M_headERKS2_ @ 0x3430 */
long long _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3_2EE7_M_headERKS2_(long long a1)
{
 return _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3450 */
void _ZN11SimpleClassC2EiPKc(SimpleClass *this, int a2, const char *a3)
{
 *(unsigned int *)this = a2;
 strncpy((char *)this + 4, a3, 0x1Fu);
 *((unsigned char *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3490 */
SimpleClass * _ZN11SimpleClass8setValueEi(SimpleClass *this, int a2)
{
 SimpleClass *result; // rax

 result = this;
 *(unsigned int *)this = a2;
 return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x34B0 */
long long _ZNK11SimpleClass8getValueEv(SimpleClass *this)
{
 return *(unsigned int *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x34C0 */
long long _ZNK11SimpleClass7computeEi(SimpleClass *this, int a2)
{
 long long v3; // [rsp+8h] [rbp-18h]

 v3 = a2 * *(unsigned int *)this;
 return strlen((const char *)this + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3500 */
long long _ZN11SimpleClass10getClassIDEv(SimpleClass *this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3510 */
void _ZN14LifecycleClassC2Em(LifecycleClass *this, unsigned long long a2)
{
 unsigned long long i; // [rsp+8h] [rbp-18h]

 *((unsigned long long *)this + 1) = a2;
 *(unsigned long long *)this = operator new[](saturated_mul(4u, a2));
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)this + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x35B0 */
long long _ZNK14LifecycleClass7getDataEm(LifecycleClass *this, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)this + 1) )
 return (unsigned int)-1;
 else
 return *(unsigned int *)(*(unsigned long long *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3600 */
long long _ZN14LifecycleClass16getInstanceCountEv(LifecycleClass *this)
{
 return (unsigned int)LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x3610 */
void _ZN14LifecycleClassD2Ev(void **this)
{
 if ( *this )
 operator delete[](*this);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x3650 */
void _ZN4BaseC2Ev(Base *this)
{
 *(unsigned long long *)this = &off_8878;
}


/* Function: _ZN7DerivedC2Ei @ 0x3670 */
void _ZN7DerivedC2Ei(Derived *this, int a2)
{
 _ZN4BaseC2Ev(this);
 *(unsigned long long *)this = &off_88B8;
 *((unsigned int *)this + 2) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x36B0 */
long long _ZN4Base12virtual_funcEi(Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x36D0 */
long long _ZN7Derived12virtual_funcEi(Derived *this, int a2)
{
 return (unsigned int)(*((unsigned int *)this + 2) * a2);
}


/* Function: _ZN7DerivedD2Ev @ 0x36F0 */
void _ZN7DerivedD2Ev(Derived *this)
{
 _ZN4BaseD2Ev(this);
}


/* Function: _ZN4BaseD2Ev @ 0x3710 */
void _ZN4BaseD2Ev(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3720 */
void MultiDerived_MultiDerived_C2(MultiDerived *this)
{
 BaseA_BaseA((BaseA*)this);
 BaseB_BaseB((BaseB*)((char *)this + 16));
 *(unsigned long long *)this = &off_8900;
 *((unsigned long long *)this + 2) = &off_8930;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3770 */
void MultiDerived_MultiDerived_D2(MultiDerived *this)
{
 BaseB__BaseB((BaseB*)((char *)this + 16));
 BaseA__BaseA((BaseA*)this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x37A0 */
void DiamondDerived_DiamondDerived_C1(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase*)((char *)this + 32));
 MiddleA_MiddleA((MiddleA*)this, 0);
 MiddleB_MiddleB((MiddleB*)((char *)this + 16), 0);
 *(unsigned long long *)this = &off_8A08;
 *((unsigned long long *)this + 4) = &off_8A70;
 *((unsigned long long *)this + 2) = &off_8A38;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3830 */
void DiamondDerived_DiamondDerived_D1(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this);
 VirtualBase__VirtualBase((VirtualBase*)((char *)this + 32));
}


/* Function: _ZN5PointC2Eii @ 0x3870 */
void Point_Point_C2(Point *this, int a2, int a3)
{
 *(unsigned int *)this = a2;
 *((unsigned int *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3890 */
long long Point_operator_plus_C2(unsigned int *a1, unsigned int *a2)
{
 long long v3; // [rsp+18h] [rbp-8h] BYREF

 Point_Point_C2((Point *)&v3, *a2 + *a1, a2[1] + a1[1]);
 return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x38D0 */
_BOOL8 Point_operator_eq_C2(unsigned int *a1, unsigned int *a2)
{
 bool v3; // [rsp+Fh] [rbp-11h]

 v3 = 0;
 if ( *a1 == *a2 )
 return a1[1] == a2[1];
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3920 */
unsigned int * Point_operator_inc_C2(unsigned int *a1)
{
 unsigned int *result; // rax

 result = a1;
 ++*a1;
 ++a1[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3940 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 if ( (int)a1 <= (int)a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3970 */
double template_max_double(double a1, double a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x39B0 */
int * template_swap_int(int *a1, int *a2)
{
 int *result; // rax
 int v3; // [rsp+0h] [rbp-14h]

 v3 = *a1;
 *a1 = *a2;
 result = a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x39E0 */
long long Container_int_Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3A00 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 40) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4LL * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3A40 */
long long Container_int_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3A90 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3AB0 */
long long Container_double_Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3AD0 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax
 int v3; // ecx

 result = a1;
 if ( *(int *)(a1 + 80) < 10 )
 {
 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8LL * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3B10 */
double Container_double_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0.0;
 else
 return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3B70 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3B90 */
long long std_unique_ptr_int_std_default_delete_int__unique_ptr(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3BC0 */
long long std_unique_ptr_int_std_default_delete_int__operator_star(long long a1)
{
 return std_unique_ptr_int_std_default_delete_int__get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BF0 */
long long std_move_std_unique_ptr_int_std_default_delete_int_ref_(long long a1)
{
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3C00 */
long long std_unique_ptr_int_std_default_delete_int__unique_ptr_move(long long a1, long long a2)
{
 return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C30 */
long long std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr(
 long long a1,
 long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3C60 */
long long std_unique_ptr_int_array_std_default_delete_int_array__operator_subscript(long long a1, long long a2)
{
 return 4 * a2 + std::unique_ptr<int []>::get(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CA0 */
unsigned long long * std_unique_ptr_int_array_std_default_delete_int_array__destructor(long long a1)
{
 long long deleter; // rdi
 unsigned long long *result; // rax
 unsigned long long *v3; // [rsp+10h] [rbp-10h]

 v3 = (unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(a1);
 if ( *v3 )
 {
 deleter = std_unique_ptr_int_array_std_default_delete_int_array__get_deleter(a1);
 std_default_delete_int_array_operator_paren(deleter, (void*)*v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3D10 */
unsigned long long * std_unique_ptr_int_std_default_delete_int__destructor(long long a1)
{
 long long v1; // rsi
 unsigned long long *result; // rax
 long long deleter; // [rsp+0h] [rbp-20h]
 unsigned long long *v4; // [rsp+10h] [rbp-10h]

 v4 = (unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(a1);
 if ( *v4 )
 {
 deleter = std_unique_ptr_int_std_default_delete_int__get_deleter(a1);
 v1 = *(unsigned long long *)std_move_int_star_ref((long long)v4);
 std_default_delete_int_operator_paren(deleter, (void*)v1);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3D80 */
void RTTIDerivedA_RTTIDerivedA_C2(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase(this);
 *(unsigned long long *)this = off_8D50;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3DC0 */
void RTTIDerivedB_RTTIDerivedB_C2(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase(this);
 *(unsigned long long *)this = off_8DA0;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3E00 */
long long std_type_info_operator_eq(long long a1, long long a2)
{
 bool v3; // [rsp+Fh] [rbp-21h]
 char v4; // [rsp+1Fh] [rbp-11h]

 v4 = 1;
 if ( *(unsigned long long *)(a1 + 8) != *(unsigned long long *)(a2 + 8) )
 {
 v3 = 0;
 if ( **(unsigned char **)(a1 + 8) != 42 )
 v3 = strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3E80 */
long long RTTIDerivedA_derivedA_data_C2(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3E90 */
long long RTTIDerivedB_derivedB_data_C2(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3EA0 */
const char* std_type_info_name(std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char*)(*((unsigned long long *)this + 1) + 1LL);
 else
 return (const char*)*((unsigned long long *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3EF0 */
const char * Base_getName_C2(Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3F10 */
void Base_D0(Base *this)
{
 Base__Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3F40 */
const char * Derived_getName_C2(Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3F60 */
void Derived_D0_C2(Derived *this)
{
 Derived__Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3F90 */
void BaseA_BaseA_C2(BaseA *this)
{
 *(unsigned long long *)this = &off_89B0;
}


/* Function: _ZN5BaseBC2Ev @ 0x3FB0 */
void BaseB_BaseB_C2(BaseB *this)
{
 *(unsigned long long *)this = &off_89D8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3FD0 */
long long MultiDerived_funcA_C2(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3FE0 */
void MultiDerived_D0_C2(MultiDerived *this)
{
 MultiDerived__MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x4010 */
long long MultiDerived_funcB_C2(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x4020 */
long long _ZThn16_N12MultiDerived5funcBEv(MultiDerived *this)
{
 return _ZN12MultiDerived5funcBEv((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4040 */
void _ZThn16_N12MultiDerivedD1Ev(MultiDerived *this)
{
 _ZN12MultiDerivedD1Ev((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4060 */
void _ZThn16_N12MultiDerivedD0Ev(MultiDerived *this)
{
 _ZN12MultiDerivedD0Ev((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x4080 */
long long BaseA_funcA_C2(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x4090 */
void BaseA__BaseA_C2(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x40A0 */
void BaseA_D0_C2(BaseA *this)
{
 BaseA__BaseA_C2(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x40D0 */
long long BaseB_funcB_C2(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x40E0 */
void BaseB__BaseB_C2(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x40F0 */
void BaseB_D0_C2(BaseB *this)
{
 BaseB__BaseB_C2(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x4120 */
void VirtualBase_VirtualBase_C2(VirtualBase *this)
{
 *(unsigned long long *)this = &off_8C38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x4140 */
void MiddleA_MiddleA_C2(MiddleA *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x4170 */
void MiddleB_MiddleB_C2(MiddleB *this, unsigned long long *a2)
{
 *(unsigned long long *)this = *a2;
 *(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x41A0 */
long long MiddleA_func_C2(MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x41C0 */
void MiddleA__MiddleA_C2(MiddleA *this)
{
 MiddleA__MiddleA_C2(this);
 VirtualBase__VirtualBase((MiddleA *)((char *)this + 16));
}


/* Function: _ZN7MiddleAD0Ev @ 0x4200 */
void MiddleA_D0_C2(MiddleA *this)
{
 MiddleA__MiddleA_C2(this);
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x4230 */
long long _ZTv0_n24_N7MiddleA4funcEv(MiddleA *this)
{
 return _ZN7MiddleA4funcEv((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x4250 */
void _ZTv0_n32_N7MiddleAD1Ev(MiddleA *this)
{
 _ZN7MiddleAD1Ev((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x4270 */
void _ZTv0_n32_N7MiddleAD0Ev(MiddleA *this)
{
 _ZN7MiddleAD0Ev((MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x4290 */
long long MiddleB_func_C2(MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x42B0 */
void MiddleB__MiddleB_C2(MiddleB *this)
{
 MiddleB__MiddleB_C2(this);
 VirtualBase__VirtualBase((MiddleB *)((char *)this + 16));
}


/* Function: _ZN7MiddleBD0Ev @ 0x42F0 */
void MiddleB_D0_C2(MiddleB *this)
{
 MiddleB__MiddleB_C2(this);
 operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x4320 */
long long _ZTv0_n24_N7MiddleB4funcEv(MiddleB *this)
{
 return _ZN7MiddleB4funcEv((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x4340 */
void _ZTv0_n32_N7MiddleBD1Ev(MiddleB *this)
{
 _ZN7MiddleBD1Ev((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x4360 */
void _ZTv0_n32_N7MiddleBD0Ev(MiddleB *this)
{
 _ZN7MiddleBD0Ev((MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x4380 */
long long DiamondDerived_func_C2(DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x43A0 */
void DiamondDerived_D0_C2(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x43D0 */
long long _ZThn16_N14DiamondDerived4funcEv(DiamondDerived *this)
{
 return _ZN14DiamondDerived4funcEv((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x43F0 */
void _ZThn16_N14DiamondDerivedD1Ev(DiamondDerived *this)
{
 _ZN14DiamondDerivedD1Ev((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4410 */
void _ZThn16_N14DiamondDerivedD0Ev(DiamondDerived *this)
{
 _ZN14DiamondDerivedD0Ev((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4430 */
long long _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this)
{
 return _ZN14DiamondDerived4funcEv((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4450 */
void _ZTv0_n32_N14DiamondDerivedD1Ev(DiamondDerived *this)
{
 _ZN14DiamondDerivedD1Ev((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4470 */
void _ZTv0_n32_N14DiamondDerivedD0Ev(DiamondDerived *this)
{
 _ZN14DiamondDerivedD0Ev((DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x4490 */
long long VirtualBase_func_C2(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x44A0 */
void VirtualBase__VirtualBase_C2(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x44B0 */
void VirtualBase_D0_C2(VirtualBase *this)
{
 VirtualBase__VirtualBase_C2(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x44E0 */
void MiddleA_Destructor_C2(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x44F0 */
void MiddleB_Destructor_C2(MiddleB *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4500 */
void DiamondDerived_Destructor_C2(DiamondDerived *this)
{
 MiddleB_Destructor_C2((DiamondDerived *)((char *)this + 16));
 MiddleA_Destructor_C2(this);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x4550 */
long long std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4580 */
unsigned long long * std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl(long long a1, long long a2)
{
 long long v2; // rax
 unsigned long long *result; // rax

 v2 = std_move_tuple_int_ptr_deleter_ref(a2);
 std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(a1, v2);
 result = (unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x45E0 */
long long std_move_tuple_int_ptr_deleter_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x45F0 */
long long std__tuple_int_ptr_std_default_delete_int__tuple(long long a1, long long a2)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4620 */
long long std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(long long a1)
{
 return std_get_0ul_int_ptr_std_default_delete_int_(a1);
}


/* Function: __clang_call_terminate @ 0x4640 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std_terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4650 */
unsigned long long * std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl_2(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *result; // rax

 std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4690 */
void std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl()
{
 ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x46A0 */
long long std__get_0ul_int_ptr_std_default_delete_int_2(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x46C0 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int__2(long long a1)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x46E0 */
long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_2(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head_(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4700 */
long long std__Head_base_0ul_int_ptr_false__M_head__2(long long a1)
{
 return a1;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4710 */
void RTTIBase_RTTIBase_C3(RTTIBase *this)
{
 *(unsigned long long *)this = off_8D78;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4730 */
void RTTIDerivedA_Destructor_D2(RTTIDerivedA *this)
{
 RTTIBase_Destructor_D2((RTTIBase*)this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4750 */
void RTTIDerivedA_Destructor_D0(RTTIDerivedA *this)
{
 RTTIDerivedA_Destructor_D2(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4780 */
long long RTTIDerivedA_getType_const(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4790 */
void RTTIBase_Destructor_D2(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x47A0 */
void RTTIBase_Destructor_D0(RTTIBase *this)
{
 RTTIBase_Destructor_D2(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x47D0 */
long long RTTIBase_getType_const(RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x47E0 */
void RTTIDerivedB_Destructor_D2(RTTIDerivedB *this)
{
 RTTIBase_Destructor_D2((RTTIBase*)this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4800 */
void RTTIDerivedB_Destructor_D0(RTTIDerivedB *this)
{
 RTTIDerivedB_Destructor_D2(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4830 */
long long RTTIDerivedB_getType_const(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4840 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x4870 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(long long a1, long long a2)
{
 std__tuple_int_ptr_std_default_delete_int__tuple_init();
 std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(a1);
 *(unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(a1) = a2;
 return (unsigned long long *)a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x48B0 */
long long std__tuple_int_ptr_std_default_delete_int__tuple_init()
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(0);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x48E0 */
long long std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(long long a1)
{
 std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(a1);
 std__Head_base_0ul_int_ptr_false__Head_base_(a1);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4910 */
long long std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(long long a1)
{
 std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(a1);
 return std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4930 */
unsigned long long * std::_Head_base<0ul,int *,false>::_Head_base(unsigned long long *a1)
{
 std__Head_base_0ul_int_ptr_false__Head_base_(a1);
 return a1;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4950 */
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(long long a1)
{
 std__Head_base_1ul_std_default_delete_int_true__Head_base(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x4960 */
long long std_unique_ptr_int_std_default_delete_int_get_deleter(long long a1)
{
 return std__uniq_ptr_impl_int_std_default_delete_int___M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4990 */
void std_default_delete_int_operator_paren_C2(long long a1, void *a2)
{
 if ( a2 )
 operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x49D0 */
long long std_move_int_ptr_ref_2(long long a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x49E0 */
long long std___uniq_ptr_impl_int_std_default_delete_int___M_deleter_2(long long a1)
{
 return std_get_1ul_int_ptr_std_default_delete_int_(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4A00 */
long long std_get_1ul_int_ptr_std_default_delete_int_2(long long a1)
{
 return std__get_helper_1ul_std_default_delete_int_(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4A20 */
long long std__get_helper_1ul_std_default_delete_int__2(long long a1)
{
 return std__Tuple_impl_1ul_std_default_delete_int___M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4A40 */
long long std__Tuple_impl_1ul_std_default_delete_int___M_head_2(long long a1)
{
 return std__Head_base_1ul_std_default_delete_int_true__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4A60 */
long long std__Head_base_1ul_std_default_delete_int_true__M_head_2(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4A70 */
long long std_unique_ptr_int_std_default_delete_int_get(long long a1)
{
 return std___uniq_ptr_impl_int_std_default_delete_int___M_ptr_2(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4AA0 */
long long std___uniq_ptr_impl_int_std_default_delete_int___M_ptr_2(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_std_default_delete_int_(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4AC0 */
long long std_get_0ul_int_ptr_std_default_delete_int__2(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int__2(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4AE0 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int__3(long long a1)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_2(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4B00 */
long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_3(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head__2(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4B20 */
long long std__Head_base_0ul_int_ptr_false__M_head__3(long long a1)
{
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4B30 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4B60 */
unsigned long long * std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(long long a1, long long a2)
{
 std__tuple_int_ptr_std_default_delete_int_array__tuple_init();
 std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(a1);
 *(unsigned long long *)std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(a1) = a2;
 return (unsigned long long *)a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4BA0 */
long long std__tuple_int_ptr_std_default_delete_int_array__tuple_init()
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl(0);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4BD0 */
long long std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(long long a1)
{
 return std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4BF0 */
unsigned long long * std_Tuple_impl_0ul_int_ptr_std_default_delete_int_array___Tuple_impl(unsigned long long *a1)
{
 std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(a1);
 return std__Head_base_0ul_int_ptr_false__Head_base_(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4C20 */
long long std_Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(long long a1)
{
 std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(a1);
 return std__Head_base_1ul_std_default_delete_int_array_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4C40 */
void std_Head_base_1ul_std_default_delete_int_array_true__Head_base(long long a1)
{
 std__Head_base_1ul_std_default_delete_int_array_true__Head_base(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4C50 */
long long std_get_0ul_int_ptr_std_default_delete_int_array__(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array__(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4C70 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int_array__2(long long a1)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4C90 */
long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head_(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4CB0 */
long long std_unique_ptr_int_array_std_default_delete_int_array_get_deleter(long long a1)
{
 return std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter_2(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x4CE0 */
void std_default_delete_int_array_operator_paren_int(long long a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4D20 */
long long std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter_2(long long a1)
{
 return std_get_1ul_int_ptr_std_default_delete_int_array_(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4D40 */
long long std_get_1ul_int_ptr_std_default_delete_int_array__2(long long a1)
{
 return std__get_helper_1ul_std_default_delete_int_array__(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4D60 */
long long std__get_helper_1ul_std_default_delete_int_array__(long long a1)
{
 return std__Tuple_impl_1ul_std_default_delete_int_array___M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4D80 */
long long std__Tuple_impl_1ul_std_default_delete_int_array___M_head_2(long long a1)
{
 return std__Head_base_1ul_std_default_delete_int_array_true__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4DA0 */
long long std__Head_base_1ul_std_default_delete_int_array_true__M_head_2(long long a1)
{
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4DB0 */
long long std_unique_ptr_int_array_std_default_delete_int_array_get(long long a1)
{
 return std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr_2(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4DE0 */
long long std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr_2(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_std_default_delete_int_array_(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4E00 */
long long std_get_0ul_int_ptr_std_default_delete_int_array__2(long long a1)
{
 return std__get_helper_0ul_int_ptr_std_default_delete_int_array__(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4E20 */
long long std__get_helper_0ul_int_ptr_std_default_delete_int_array__(long long a1)
{
 return std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4E40 */
long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_2(long long a1)
{
 return std__Head_base_0ul_int_ptr_false__M_head_(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4E60 */
long long std_forward_int_ptr_ref__2(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4E70 */
unsigned long long * std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref_2(unsigned long long *a1, long long a2)
{
 unsigned long long *v2; // rcx
 unsigned long long *result; // rax

 v2 = (unsigned long long *)std_forward_int_ptr_ref__2(a2);
 result = a1;
 *a1 = *v2;
 return result;
}


/* Function: .term_proc @ 0x4EA4 */
void term_proc()
{
 ;
}


/* Function: _Znam @ 0x9100 */
void* _Znam(unsigned long size)
{
    return operator new[](size);
}

/* Function: printf @ 0x9110 */
int printf(const char* format, ...)
{
    return 0;
}

/* Function: _ZSt9terminatev @ 0x9118 */
void _ZSt9terminatev()
{
    _exit(1);
}

/* Function: __cxa_begin_catch @ 0x9120 */
void* __cxa_begin_catch(void* exception)
{
    (void)exception;
    return exception;
}

/* Function: strlen @ 0x9128 */
size_t strlen(const char* s)
{
    const char* p = s;
    while (*p)
        p++;
    return p - s;
}

/* Function: __cxa_allocate_exception @ 0x9130 */
void* __cxa_allocate_exception(unsigned int size)
{
    return operator new(size);
}

/* Function: strncpy @ 0x9138 */
char* strncpy(char* dest, const char* src, size_t n)
{
    char* ret = dest;
    while (n && (*dest++ = *src++))
        n--;
    while (n--)
        *dest++ = '\0';
    return ret;
}

/* Function: memset @ 0x9140 */
void* memset(void* ptr, int value, size_t num)
{
    unsigned char* p = (unsigned char*)ptr;
    while (num--)
        *p++ = (unsigned char)value;
    return ptr;
}

/* Function: __libc_start_main @ 0x9150 */
int __libc_start_main(int (*main)(int, char**, char**), int argc, char** argv, 
                      void (*init)(), void (*fini)(), void (*rtld_fini)())
{
    (void)init;
    (void)fini;
    (void)rtld_fini;
    exit(main(argc, argv, environ));
    return 0;
}

/* Function: __cxa_atexit @ 0x9158 */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle)
{
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* Function: _ZdlPv @ 0x9160 */
void _ZdlPv(void* ptr)
{
    operator delete(ptr);
}

/* Function: _Znwm @ 0x9168 */
void* _Znwm(unsigned long size)
{
    return operator new(size);
}

/* Function: __cxa_bad_typeid @ 0x9170 */
void __cxa_bad_typeid()
{
    _ZSt9terminatev();
}

/* Function: __dynamic_cast @ 0x9178 */
void* __dynamic_cast(void* src, const void* src_type, const void* dst_type, int src2dst_offset)
{
    (void)src_type;
    (void)dst_type;
    (void)src2dst_offset;
    return src;
}

/* Function: _ZdaPv @ 0x9180 */
void _ZdaPv(void* ptr)
{
    operator delete[](ptr);
}

int strcmp(const char* s1, const char* s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

long long std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(long long a1, long long a2)
{
    return a1;
}

long long std__Head_base_1ul_std_default_delete_int_true__Head_base(long long a1)
{
    return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int_array___Tuple_impl(long long a1, long long a2)
{
    return a1;
}

long long std__Head_base_1ul_std_default_delete_int_array_true__Head_base(long long a1)
{
    return a1;
}

long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___Tuple_impl(long long a1, long long a2)
{
    return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int___Tuple_impl(long long a1, long long a2)
{
    return a1;
}

long long std__Head_base_0ul_int_ptr_false__Head_base_(long long a1, long long a2)
{
    *(unsigned long long *)a1 = a2;
    return a1;
}

long long std__Head_base_1ul_std_default_delete_int_true__Head_base(long long a1)
{
    return a1;
}

long long std_get_0ul_int_ptr_std_default_delete_int_2(long long a1)
{
    return a1;
}

long long std__get_helper_0ul_int_ptr_std_default_delete_int__2(long long a1)
{
    return a1;
}

long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_2(long long a1)
{
    return a1;
}

long long std__Head_base_0ul_int_ptr_false__M_head__2(long long a1)
{
    return a1;
}

long long std_get_1ul_int_ptr_std_default_delete_int_2(long long a1)
{
    return a1;
}

long long std__get_helper_1ul_std_default_delete_int__2(long long a1)
{
    return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int___M_head_2(long long a1)
{
    return a1;
}

long long std__Head_base_1ul_std_default_delete_int_true__M_head_2(long long a1)
{
    return a1;
}

long long std_unique_ptr_int_std_default_delete_int_get(long long a1)
{
    return a1;
}

long long std___uniq_ptr_impl_int_std_default_delete_int___M_ptr_2(long long a1)
{
    return a1;
}

long long std_get_0ul_int_ptr_std_default_delete_int__2(long long a1)
{
    return a1;
}

long long std__get_helper_0ul_int_ptr_std_default_delete_int__3(long long a1)
{
    return a1;
}

long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int___M_head_3(long long a1)
{
    return a1;
}

long long std__Head_base_0ul_int_ptr_false__M_head__3(long long a1)
{
    return a1;
}

long long std_unique_ptr_int_array_std_default_delete_int_array_get(long long a1)
{
    return a1;
}

long long std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr_2(long long a1)
{
    return a1;
}

long long std_get_0ul_int_ptr_std_default_delete_int_array__2(long long a1)
{
    return a1;
}

long long std__get_helper_0ul_int_ptr_std_default_delete_int_array__(long long a1)
{
    return a1;
}

long long std__Tuple_impl_0ul_int_ptr_std_default_delete_int_array___M_head_2(long long a1)
{
    return a1;
}

long long std_unique_ptr_int_array_std_default_delete_int_array_get_deleter(long long a1)
{
    return a1;
}

long long std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter_2(long long a1)
{
    return a1;
}

long long std_get_1ul_int_ptr_std_default_delete_int_array__2(long long a1)
{
    return a1;
}

long long std__get_helper_1ul_std_default_delete_int_array__(long long a1)
{
    return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int_array___M_head_2(long long a1)
{
    return a1;
}

long long std__Head_base_1ul_std_default_delete_int_array_true__M_head_2(long long a1)
{
    return a1;
}

long long std_unique_ptr_int_std_default_delete_int_get_deleter(long long a1)
{
    return a1;
}

long long std___uniq_ptr_impl_int_std_default_delete_int___M_deleter_2(long long a1)
{
    return a1;
}

long long std_get_1ul_int_ptr_std_default_delete_int_2(long long a1)
{
    return a1;
}

long long std__get_helper_1ul_std_default_delete_int__2(long long a1)
{
    return a1;
}

long long std__Tuple_impl_1ul_std_default_delete_int___M_head_2(long long a1)
{
    return a1;
}

long long std__Head_base_1ul_std_default_delete_int_true__M_head_2(long long a1)
{
    return a1;
}

long long std_forward_int_ptr_ref__2(long long a1)
{
    return a1;
}

unsigned long long* std__Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref_2(unsigned long long* a1, long long a2)
{
    unsigned long long* v2 = (unsigned long long*)std_forward_int_ptr_ref__2(a2);
    *a1 = *v2;
    return a1;
}

/* Function: _ZNSt8ios_base4InitC1Ev @ 0x91A0 */
void _ZNSt8ios_base4InitC1Ev(struct ios_base_Init *this)
{
    (void)this;
}

/* Function: __cxa_end_catch @ 0x91A8 */
void __cxa_end_catch()
{
}

/* Function: __gxx_personality_v0 @ 0x91B0 */
void __gxx_personality_v0(void)
{
}

/* Function: __cxa_throw @ 0x91B8 */
void __cxa_throw(void* exception, const struct type_info* type, void (*destructor)(void*))
{
    (void)exception;
    (void)type;
    (void)destructor;
    _ZSt9terminatev();
}

/* Function: _Unwind_Resume @ 0x91C8 */
void _Unwind_Resume(void* exception)
{
    (void)exception;
    _ZSt9terminatev();
}

/* Function: _ZNSt8ios_base4InitD1Ev @ 0x91D0 */
void _ZNSt8ios_base4InitD1Ev(struct ios_base_Init *this)
{
    (void)this;
}

/* Function: __imp___cxa_finalize @ 0x91D8 */
void __imp___cxa_finalize(void* dso_handle)
{
    (void)dso_handle;
}

/* Function: __gmon_start__ @ 0x91E8 */
void __gmon_start__(void)
{
}

/* Total functions decompiled: 215, failed: 25 */
