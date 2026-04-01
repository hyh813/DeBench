/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

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

/* Forward declarations for C++ classes */
struct SimpleClass;
struct LifecycleClass;
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Struct definitions for C++ classes */
struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    size_t size;
    int *data;
    int instance_count;
};

/* Static member access helper */
#define LifecycleClass_instance_count LifecycleClass_instance_count

struct Base {
    int (**_vptr$Base)(void);
};

struct Derived {
    int (**_vptr$Base)(void);
    int multiplier;
};

struct BaseA {
    int (**_vptr$BaseA)(void);
};

struct BaseB {
    int (**_vptr$BaseB)(void);
};

struct MultiDerived {
    int (**_vptr$BaseA)(void);
    BaseA BaseA;
    int (**_vptr$BaseB)(void);
    BaseB BaseB;
    int dataA;
    int dataB;
};

struct VirtualBase {
    int (**_vptr$VirtualBase)(void);
    int data;
};

struct MiddleA {
    int (**_vptr$MiddleA)(void);
    VirtualBase virtual_base;
    int dataA;
};

struct MiddleB {
    int (**_vptr$MiddleB)(void);
    VirtualBase virtual_base;
    int dataB;
};

struct DiamondDerived {
    int (**_vptr$MiddleA)(void);
    MiddleA MiddleA;
    int (**_vptr$MiddleB)(void);
    MiddleB MiddleB;
    int dataA;
};

struct Point {
    int x;
    int y;
};

struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
};

/* Container template struct */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* std::unique_ptr structs */
struct std_unique_ptr_int {
    int *_M_t;
};

struct std_unique_ptr_int_array {
    struct {
        struct {
            int *_M_head_impl;
        } _M_t;
    } _M_t;
};

/* std::type_info struct */
struct std_type_info {
    const void *_vptr;
    const char *name;
};

/* Helper struct for tuple/impl types */
struct std_tuple_impl_data {
    size_t _M_t;
};

struct std_head_base_data {
    size_t _M_t;
};

/* Typedefs for anonymous struct types used in function signatures */
typedef struct { size_t _M_t; } std_tuple_impl_t;
typedef struct {unsigned char gap0;} std_deleter_t;

/* Template class forward declarations - removed (C++ only) */

/* Lambda struct definitions */
struct $44B1EA910F358000232221CCB0AF3F67 { int capture_by_value; int *capture_by_ref; };
struct $53A263AF813E6A51E9D2036C8CF165B2 { int capture_by_value; int *capture_by_ref; };

/* External declarations for CRT functions */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern int _do_global_dtors_aux(void);

/* Missing external declarations */
extern int LifecycleClass_instance_count;
extern void *std___ioinit;
extern char asc_500D[];
extern char aCppL301D[];
extern char aCppL302D[];
extern char aCppL303D[];
extern char aCppL304D[];
extern char aCppL305D[];
extern char aCppL306D[];
extern char aCppL307D[];
extern char aCppL308D[];
extern char aCppL309D[];
extern int off_8C3C;
extern int off_8CDC;
extern int off_8CF0;
extern int off_8D4C;
extern int off_8D54;
extern int off_8E2C;
extern int off_8ECC;
extern unsigned int saturated_mul(unsigned int a, unsigned int b);
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern void *typeinfo_for_RTTIBase;
extern void *VTT_for_DiamondDerived;
extern void *VTT_for_MiddleA;
extern void *VTT_for_MiddleB;

/* Missing helper function declarations */
extern int **std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} * std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(struct { size_t _M_t; } *this);

extern int **std_move_int_ptr_ref(int **__t);
extern void test_cpp_smart_ptr_lambda_2_operator(const struct {unsigned char gap0;} *this, int *p);
extern int **std__uniq_ptr_impl_int_default_delete_int_array__M_ptr(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std_unique_ptr_int_array_default_delete_get_deleter_2(struct std_unique_ptr_int_array *this);
extern struct {unsigned char gap0;} *std_unique_ptr_int_array_default_delete_get_deleter(struct std_unique_ptr_int_array *this);
extern void std_default_delete_int_array_operator_int_2(const struct {unsigned char gap0;} *this, int **__ptr);
extern void std_default_delete_int_array_operator_int_3(const struct {unsigned char gap0;} *this, int **__ptr);
extern int **std__uniq_ptr_impl_int_default_delete_int__M_ptr_3(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std_unique_ptr_int_default_delete_get_deleter_2(struct std_unique_ptr_int *this);
extern struct {unsigned char gap0;} *std_unique_ptr_int_default_delete_get_deleter(struct std_unique_ptr_int *this);
extern void std_default_delete_int_operator_2(const struct {unsigned char gap0;} *this, int *__ptr);
extern void std_default_delete_int_operator(const struct {unsigned char gap0;} *this, int *__ptr);
extern void std__uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(struct { size_t _M_t; } *this, struct { size_t _M_t; } *a2);
extern void std__uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(struct { size_t _M_t; } *this, int *__p);
extern struct {unsigned char gap0;} * std__uniq_ptr_impl_int_default_delete_int_array__M_deleter(struct { size_t _M_t; } *this);
extern void std__uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(struct { size_t _M_t; } *this, int *__p);
extern int **std__uniq_ptr_impl_int_default_delete_int__M_ptr(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} * std__uniq_ptr_impl_int_default_delete_int__M_deleter(struct { size_t _M_t; } *this);
extern int *std_unique_ptr_int_array_default_delete_get(const struct std_unique_ptr_int_array *this);
extern int *std_unique_ptr_int_default_delete_get(const struct std_unique_ptr_int *this);
extern void std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_test_cpp_smart_ptr_lambda_const(struct { size_t _M_t; } *this, int *__p, const struct {unsigned char gap0;} *__d);
extern void std__tuple_int_ptr_test_cpp_smart_ptr_lambda__tuple_int_ptr_ref_lambda_const_true(struct { size_t _M_t; } *this, int **__a1, const struct {unsigned char gap0;} *__a2);
extern void std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_lambda_const_void(struct { size_t _M_t; } *this, int **__head, const struct {unsigned char gap0;} *__tail);
extern void std__Tuple_impl_1u_test_cpp_smart_ptr_lambda__Tuple_impl(struct { size_t _M_t; } *this, const struct {unsigned char gap0;} *__head);
extern void std__Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(struct { size_t _M_t; } *this, int **__h);
extern void std__Head_base_1u_test_cpp_smart_ptr_lambda_true__Head_base(struct { size_t _M_t; } *this, const struct {unsigned char gap0;} *__h);
extern int **std__get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std__get_helper_1u_test_cpp_smart_ptr_lambda(struct { size_t _M_t; } *this);
extern int **std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__M_head(struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__Tuple_impl_1u_test_cpp_smart_ptr_lambda__M_head(struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__Head_base_1u_test_cpp_smart_ptr_lambda_true__M_head(struct { size_t _M_t; } *__b);
extern int **std_forward_int_ptr_ref(int **__t);
extern const struct {unsigned char gap0;} *std_forward_test_cpp_smart_ptr_lambda_const(const struct {unsigned char gap0;} *__t);
extern void *std_move_tuple_int_ptr_deleter(void *__t);
extern int **std__Tuple_impl_0u_int_ptr_default_delete_int__M_head(struct { size_t _M_t; } *__t);
extern int **std__Head_base_0u_int_ptr_false__M_head(struct { size_t _M_t; } *__b);
extern void std__Tuple_impl_1u_default_delete_int__Tuple_impl(struct { size_t _M_t; } *this, struct { size_t _M_t; } *__in);
extern void std__Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(struct { size_t _M_t; } *this, int **__h);
extern void std__Tuple_impl_0u_int_ptr_default_delete_int__Tuple_impl(struct { size_t _M_t; } *this, struct { size_t _M_t; } *a2);
extern struct {unsigned char gap0;} *std__Head_base_1u_default_delete_int_true__M_head(struct { size_t _M_t; } *__b);
extern void std__Head_base_1u_default_delete_int_array_true__Head_base(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std__Head_base_1u_default_delete_int_array_true__M_head(struct { size_t _M_t; } *__b);
extern void std__Tuple_impl_1u_default_delete_int__Tuple_impl(struct { size_t _M_t; } *this, struct { size_t _M_t; } *__in);
extern void std__Tuple_impl_1u_default_delete_int_array__Tuple_impl(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std__Tuple_impl_1u_default_delete_int__M_head(struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__Tuple_impl_1u_default_delete_int_array__M_head(struct { size_t _M_t; } *__t);
extern int **std__get_helper_0u_int_ptr_default_delete_int(struct { size_t _M_t; } *__t);
extern int *const *std__get_helper_0u_int_ptr_default_delete_int_3(const struct { size_t _M_t; } *__t);
extern int **std__get_helper_0u_int_ptr_default_delete_int_array(struct { size_t _M_t; } *__t);
extern int *const *std__get_helper_0u_int_ptr_default_delete_int_array_3(const struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__get_helper_1u_int_ptr_default_delete_int(struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__get_helper_1u_default_delete_int(struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__get_helper_1u_int_ptr_default_delete_int_array(struct { size_t _M_t; } *__t);
extern struct {unsigned char gap0;} *std__get_helper_1u_default_delete_int_array(struct { size_t _M_t; } *__t);
extern int **std__Tuple_impl_0u_int_ptr_default_delete_int__M_head(struct { size_t _M_t; } *__t);
extern int **std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head(struct { size_t _M_t; } *__t);
extern int *const *std__Tuple_impl_0u_int_ptr_default_delete_int__M_head_2(const struct { size_t _M_t; } *__t);
extern int *const *std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head_2(const struct { size_t _M_t; } *__t);
extern int *const *std__Head_base_0u_int_ptr_false__M_head_2(const struct { size_t _M_t; } *__b);
extern int **std__Head_base_0u_int_ptr_false__M_head(struct { size_t _M_t; } *__b);
extern void std__tuple_int_ptr_default_delete_int__tuple(struct { size_t _M_t; } *this, struct { size_t _M_t; } *a2);
extern void std__tuple_int_ptr_default_delete_int__tuple(struct { size_t _M_t; } *this);
extern void std__tuple_int_ptr_default_delete_int_array__tuple(struct { size_t _M_t; } *this);
extern void std__uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_2(struct { size_t _M_t; } *this, int *__p);
extern void std__uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_2(struct { size_t _M_t; } *this, int *__p);
extern int **std__uniq_ptr_impl_int_default_delete_int__M_ptr_2(struct { size_t _M_t; } *this);
extern int **std__uniq_ptr_impl_int_default_delete_int_array__M_ptr_2(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std__uniq_ptr_impl_int_default_delete_int__M_deleter_2(struct { size_t _M_t; } *this);
extern struct {unsigned char gap0;} *std__uniq_ptr_impl_int_default_delete_int_array__M_deleter_2(struct { size_t _M_t; } *this);
extern void std_default_delete_int_operator_3(const struct {unsigned char gap0;} *this, int *__ptr);

/* Missing C++ mangled function declarations */
extern void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 struct { size_t _M_t; } *this,
 int *__p,
 const struct {unsigned char gap0;} *a3);
extern void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 struct { size_t _M_t; } *this,
 int *__p);
extern void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 struct { size_t _M_t; } *this,
 int *__p);

/* Missing function declarations for smart ptr lambda */
extern struct {unsigned char gap0;} *std_get_1u_test_cpp_smart_ptr_lambda(struct { size_t _M_t; } *__t);
extern int *const *std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__M_head_const(const struct { size_t _M_t; } *__t);
extern int *const *std__Head_base_0u_int_ptr_false__M_head_const(const struct { size_t _M_t; } *__b);
extern void std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_test_cpp_smart_ptr_lambda_const(
 struct { size_t _M_t; } *this,
 int *__p,
 const struct {unsigned char gap0;} *__d);

/* External C++ runtime functions */
extern void *operator new(unsigned int size);
extern void *operator new[](unsigned int size);
extern void operator delete(void *p);
extern void operator delete[](void *p);
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exc, void *type_info, void *dest);
extern void __cxa_begin_catch(void *exc);
extern void __cxa_end_catch(void);
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void __cxa_bad_typeid(void);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ref);
extern void std_terminate(void);
extern int strcmp(const char *s1, const char *s2);
extern size_t strlen(const char *s);
extern void *memset(void *s, int c, size_t n);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int printf(const char *format, ...);

/* External C++ stdlib functions */
extern void std_type_info_operator_eq(void);
extern const char *std_type_info_name(void);

/* C++ Class method declarations */
extern void SimpleClass_SimpleClass(SimpleClass *this, int v, const char *n);
extern void SimpleClass_setValue(SimpleClass *this, int v);
extern int SimpleClass_getValue(const SimpleClass *this);
extern int SimpleClass_compute(const SimpleClass *this, int x);
extern int SimpleClass_getClassID(void);

extern void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s);
extern int LifecycleClass_getData(const LifecycleClass *this, size_t idx);
extern int LifecycleClass_getInstanceCount(void);
extern void LifecycleClass_LifecycleClass_dtor(LifecycleClass *this);

extern void Base_Base(Base *this);
extern int Base_virtual_func(Base *this, int x);
extern void Base_Base_dtor(Base *this);
extern const char *Base_getName(const Base *this);
extern void Base_Base_dtor0(Base *this);

extern void Derived_Derived(Derived *this, int m);
extern int Derived_virtual_func(Derived *this, int x);
extern void Derived_Derived_dtor(Derived *this);
extern const char *Derived_getName(const Derived *this);
extern void Derived_Derived_dtor0(Derived *this);

extern void BaseA_BaseA(BaseA *this);
extern int BaseA_funcA(BaseA *this);
extern void BaseA_BaseA_dtor(BaseA *this);
extern void BaseA_BaseA_dtor0(BaseA *this);

extern void BaseB_BaseB(BaseB *this);
extern int BaseB_funcB(BaseB *this);
extern void BaseB_BaseB_dtor(BaseB *this);
extern void BaseB_BaseB_dtor0(BaseB *this);

extern void MultiDerived_MultiDerived(MultiDerived *this);
extern int MultiDerived_funcA(MultiDerived *this);
extern int MultiDerived_funcB(MultiDerived *this);
extern void MultiDerived_MultiDerived_dtor(MultiDerived *this);
extern void MultiDerived_MultiDerived_dtor0(MultiDerived *this);

extern void VirtualBase_VirtualBase(VirtualBase *this);
extern int VirtualBase_func(VirtualBase *this);
extern void VirtualBase_VirtualBase_dtor(VirtualBase *this);
extern void VirtualBase_VirtualBase_dtor0(VirtualBase *this);

extern void MiddleA_MiddleA(MiddleA *this, void **vtt);
extern int MiddleA_func(MiddleA *this);
extern void MiddleA_MiddleA_dtor(MiddleA *this);
extern void MiddleA_MiddleA_dtor0(MiddleA *this);
extern void MiddleA_MiddleA_dtor1(MiddleA *this, void **vtt);

extern void MiddleB_MiddleB(MiddleB *this, void **vtt);
extern int MiddleB_func(MiddleB *this);
extern void MiddleB_MiddleB_dtor(MiddleB *this);
extern void MiddleB_MiddleB_dtor0(MiddleB *this);
extern void MiddleB_MiddleB_dtor1(MiddleB *this, void **vtt);

extern void DiamondDerived_DiamondDerived(DiamondDerived *this);
extern int DiamondDerived_func(DiamondDerived *this);
extern void DiamondDerived_DiamondDerived_dtor(DiamondDerived *this);
extern void DiamondDerived_DiamondDerived_dtor0(DiamondDerived *this);
extern void DiamondDerived_DiamondDerived_dtor1(DiamondDerived *this, void **vtt);

extern void Point_Point(Point *this, int _x, int _y);
extern Point *Point_operator_add(Point *retstr, const Point *this, const Point *other);
extern bool Point_operator_eq(const Point *this, const Point *other);
extern Point *Point_operator_inc(Point *this);

extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

extern void Container_int_Container(struct Container_int *this);
extern void Container_int_push(struct Container_int *this, int value);
extern int Container_int_get(const struct Container_int *this, int idx);
extern int Container_int_getSize(const struct Container_int *this);

extern void Container_double_Container(struct Container_double *this);
extern void Container_double_push(struct Container_double *this, double value);
extern double Container_double_get(const struct Container_double *this, int idx);
extern int Container_double_getSize(const struct Container_double *this);

extern void std_unique_ptr_int_unique_ptr(struct std_unique_ptr_int *this, int *__p);
extern int *std_unique_ptr_int_operator_deref(struct std_unique_ptr_int *this);
extern struct std_unique_ptr_int *std_move_unique_ptr_int(struct std_unique_ptr_int *this);
extern void std_unique_ptr_int_unique_ptr_copy(struct std_unique_ptr_int *this, struct std_unique_ptr_int *a2);
extern void std_unique_ptr_int_destructor(struct std_unique_ptr_int *this);

extern void std_unique_ptr_int_array_unique_ptr(struct std_unique_ptr_int_array *this, int *__p);
extern int *std_unique_ptr_int_array_operator_index(struct std_unique_ptr_int_array *this, unsigned int __i);
extern void std_unique_ptr_int_array_destructor(struct std_unique_ptr_int_array *this);

extern void std_unique_ptr_int_deleter_unique_ptr(struct std_unique_ptr_int *this, int *__p, const struct {unsigned char gap0;} *__d);
extern int *std_unique_ptr_int_deleter_operator_deref(struct std_unique_ptr_int *this);
extern void std_unique_ptr_int_deleter_destructor(struct std_unique_ptr_int *this);

extern void RTTIBase_RTTIBase(RTTIBase *this);
extern void RTTIBase_RTTIBase_dtor(RTTIBase *this);
extern void RTTIBase_RTTIBase_dtor0(RTTIBase *this);
extern int RTTIBase_getType(const RTTIBase *this);

extern void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedA_RTTIDerivedA_dtor(RTTIDerivedA *this);
extern void RTTIDerivedA_RTTIDerivedA_dtor0(RTTIDerivedA *this);
extern int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this);
extern int RTTIDerivedA_getType(const RTTIDerivedA *this);

extern void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
extern void RTTIDerivedB_RTTIDerivedB_dtor(RTTIDerivedB *this);
extern void RTTIDerivedB_RTTIDerivedB_dtor0(RTTIDerivedB *this);
extern int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this);
extern int RTTIDerivedB_getType(const RTTIDerivedB *this);

extern bool std_type_info_operator_eq(const struct std_type_info *this, const struct std_type_info *__arg);
extern const char *std_type_info_name(const struct std_type_info *this);

extern int test_cpp_lambda_void___1_operator_(const struct {int capture_by_value;int *capture_by_ref;} *this, int x);
extern void test_cpp_lambda_void___0_operator_int_int(const struct {unsigned char gap0;} *this, int a, int b);

/* Global variables */
extern void *_dso_handle;
extern void *GLOBAL_OFFSET_TABLE_;
extern int GLOBAL__sub_I_5_1_cpp(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( _gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
}


/* Function: sub_1190 @ 0x1190 */
int sub_1190(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: __cxx_global_var_init @ 0x11A0 */
void _cxx_global_var_init()
{
 ;
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x11F0 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_123C @ 0x123C */
void sub_123C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1240 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1379 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x137D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1390 */
int test_cpp_member_func()
{
 int r2; // [esp+18h] [ebp-30h]
 int r1; // [esp+1Ch] [ebp-2Ch]
 SimpleClass obj; // [esp+20h] [ebp-28h] BYREF

 SimpleClass_SimpleClass(&obj, 5, "Test");
 SimpleClass_setValue(&obj, 10);
 r1 = SimpleClass_getValue(&obj);
 r2 = SimpleClass_compute(&obj, 3);
 return SimpleClass_getClassID() + r2 + r1;
}


/* Function: _Z20test_cpp_constructorv @ 0x1420 */
int test_cpp_constructor()
{
 int Data; // [esp+1Ch] [ebp-1Ch]
 LifecycleClass obj; // [esp+28h] [ebp-10h] BYREF
 int result; // [esp+30h] [ebp-8h]

 result = 0;
 LifecycleClass_LifecycleClass(&obj, 5u);
 Data = LifecycleClass_getData(&obj, 2u);
 result += Data;
 result += LifecycleClass_getInstanceCount();
 LifecycleClass_LifecycleClass_dtor(&obj);
 return result + 1000 * LifecycleClass_getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1520 */
int test_cpp_virtual_func()
{
 int v1; // [esp+10h] [ebp-48h]
 int r3; // [esp+2Ch] [ebp-2Ch]
 int r2; // [esp+38h] [ebp-20h]
 int r1; // [esp+3Ch] [ebp-1Ch]
 Derived derived; // [esp+48h] [ebp-10h] BYREF
 Base base; // [esp+50h] [ebp-8h] BYREF

 Base_Base(&base);
 Derived_Derived(&derived, 3);
 r1 = Base_virtual_func(&base, 5);
 r2 = Derived_virtual_func(&derived, 5);
 r3 = call_virtual_func(&base, 5);
 v1 = call_virtual_func(&derived, 5) + r3 + r2 + r1;
 Derived_Derived_dtor(&derived);
 Base_Base_dtor(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1670 */
int test_cpp_multiple_inheritance()
{
 MultiDerived *v1; // [esp+20h] [ebp-38h]
 int r2; // [esp+28h] [ebp-30h]
 int r1; // [esp+34h] [ebp-24h]
 MultiDerived obj; // [esp+40h] [ebp-18h] BYREF

 MultiDerived_MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v1 = 0;
 if ( &obj )
 v1 = (MultiDerived *)&obj.BaseB;
 r1 = ((int ( *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
 r2 = (*(int ( **)(MultiDerived *))v1->_vptr$BaseA)(v1);
 MultiDerived_MultiDerived_dtor(&obj);
 return (&obj != v1) + r2 + r1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1760 */
int test_cpp_diamond_inheritance()
{
 int v1; // [esp+10h] [ebp-48h]
 int ( ***v2)(unsigned int); // [esp+20h] [ebp-38h]
 int r1; // [esp+30h] [ebp-28h]
 DiamondDerived obj; // [esp+38h] [ebp-20h] BYREF

 DiamondDerived_DiamondDerived(&obj);
 *(int *)((char *)&obj.dataA + *((unsigned int *)obj._vptr$MiddleA - 3)) = 50;
 v2 = 0;
 if ( &obj )
 v2 = (int ( ***)(unsigned int))((char *)&obj + *((unsigned int *)obj._vptr$MiddleA - 3));
 r1 = (**v2)(v2);
 *(int *)((char *)&obj.dataA + *((unsigned int *)obj._vptr$MiddleA - 3)) = 100;
 v1 = (**v2)(v2) + r1;
 DiamondDerived_DiamondDerived_dtor(&obj);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1840 */
int test_cpp_operator_overload()
{
 int v0; // ecx
 bool eq; // [esp+17h] [ebp-21h]
 Point p3; // [esp+18h] [ebp-20h] BYREF
 Point p2; // [esp+20h] [ebp-18h] BYREF
 Point p1; // [esp+28h] [ebp-10h] BYREF

 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 Point_operator_add(&p3, &p1, &p2);
 eq = Point_operator_eq(&p1, &p2);
 Point_operator_inc(&p3);
 v0 = 10;
 if ( eq )
 v0 = 0;
 return v0 + p3.y + p3.x;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1900 */
int test_cpp_template_func()
{
 int b; // [esp+20h] [ebp-18h] BYREF
 int a; // [esp+24h] [ebp-14h] BYREF
 double r2; // [esp+28h] [ebp-10h]
 int r1; // [esp+30h] [ebp-8h]

 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return b + a + (int)r2 + r1;
}


/* Function: _Z23test_cpp_template_classv @ 0x19B0 */
int test_cpp_template_class()
{
 double r3; // [esp+20h] [ebp-98h]
 struct Container_double double_container; // [esp+28h] [ebp-90h] BYREF
 int r2; // [esp+80h] [ebp-38h]
 int r1; // [esp+84h] [ebp-34h]
 struct Container_int int_container; // [esp+88h] [ebp-30h] BYREF

 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container, 3.14);
 r3 = Container_double_get(&double_container, 0);
 return (int)r3 + r2 + r1;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B20 */
int test_cpp_lambda()
{
 int v0; // eax
 int r1; // [esp+14h] [ebp-24h]
 $44B1EA910F358000232221CCB0AF3F67 lambda2; // [esp+18h] [ebp-20h] BYREF
 $53A263AF813E6A51E9D2036C8CF165B2 lambda1; // [esp+20h] [ebp-18h] BYREF
 int capture_by_ref; // [esp+2Ch] [ebp-Ch] BYREF
 int capture_by_value; // [esp+30h] [ebp-8h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda1.capture_by_value = 10;
 lambda1.capture_by_ref = &capture_by_ref;
 r1 = test_cpp_lambda_void___1_operator_(
 (const struct $44B1EA910F358000232221CCB0AF3F67 *)&lambda1,
 3);
 test_cpp_lambda_void___0_operator_int_int(&lambda2, 10, 20);
 v0 = 0;
 return v0 + r1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x1BA0 */
int test_cpp_lambda_void___1_operator_(
 const struct $44B1EA910F358000232221CCB0AF3F67 *this,
 int x)
{
 *this->capture_by_ref += 5;
 return *this->capture_by_ref + this->capture_by_value * x;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x1BD0 */
void test_cpp_lambda_void___0_operator_int_int(const struct $53A263AF813E6A51E9D2036C8CF165B2 *this, int a, int b)
{
 ;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BF0 */
void test_cpp_exception()
{
 unsigned int *exception; // ecx

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D90 */
char *test_cpp_smart_ptr()
{
 int *v0; // eax
 struct std_unique_ptr_int *v1; // eax
 char *v3; // [esp+14h] [ebp-64h]
 int *v4; // [esp+1Ch] [ebp-5Ch]
 int *v5; // [esp+20h] [ebp-58h]
 int *v6; // [esp+2Ch] [ebp-4Ch]
 struct std_unique_ptr_int ptr3; // [esp+48h] [ebp-30h] BYREF
 $44B1EA910F358000232221CCB0AF3F67 deleter; // [esp+50h] [ebp-28h] BYREF
 int r2; // [esp+54h] [ebp-24h]
 struct std_unique_ptr_int_array v10; // [esp+58h] [ebp-20h] BYREF
 struct std_unique_ptr_int ptr2; // [esp+60h] [ebp-18h] BYREF
 struct std_unique_ptr_int ptr1; // [esp+70h] [ebp-8h] BYREF

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr(&ptr1, v0);
 *std_unique_ptr_int_operator_deref(&ptr1) = 200;
 v1 = std_move_unique_ptr_int(&ptr1);
 std_unique_ptr_int_unique_ptr_copy(&ptr2, v1);
 v10._M_t._M_t._M_head_impl = (int *)*std_unique_ptr_int_operator_deref(&ptr2);
 v6 = (int *)operator new[](0x14u);
 *v6 = 1;
 v6[1] = 2;
 v6[2] = 3;
 v6[3] = 4;
 v6[4] = 5;
 std_unique_ptr_int_array_unique_ptr(&v10, v6);
 r2 = *std_unique_ptr_int_array_operator_index(&v10, 2u);
 v5 = (int *)operator new(4u);
 *v5 = 500;
 std_unique_ptr_int_deleter_unique_ptr(
 &ptr3,
 v5,
 (const struct {unsigned char gap0;} *)&deleter);
 v4 = std_unique_ptr_int_deleter_operator_deref(&ptr3);
 v3 = (char *)v10._M_t._M_t._M_head_impl + r2 + *v4;
 std_unique_ptr_int_deleter_destructor(&ptr3);
 std_unique_ptr_int_array_destructor(&v10);
 std_unique_ptr_int_destructor(&ptr2);
 std_unique_ptr_int_destructor(&ptr1);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1FD0 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_2_unique_ptr(
 struct std_unique_ptr_int *this,
 int *__p,
 const struct {unsigned char gap0;} *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2020 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_2_operator_deref(
 const struct std_unique_ptr_int *this)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_2_get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2060 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_2_destructor(
 struct std_unique_ptr_int *this)
{
 int **v1; // eax
 struct {unsigned char gap0;} *deleter; // [esp+10h] [ebp-18h]
 int **__ptr; // [esp+20h] [ebp-8h]

 __ptr = std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(&this->_M_t);
 v1 = std_move_int_ptr_ref(__ptr);
 test_cpp_smart_ptr_lambda_2_operator(deleter, *v1);
 }
 *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x2100 */
int test_cpp_rtti()
{
 const char *v0; // eax
 const RTTIDerivedB *v2; // [esp+28h] [ebp-40h]
 const RTTIDerivedA *v3; // [esp+30h] [ebp-38h]
 RTTIDerivedA *v4; // [esp+3Ch] [ebp-2Ch]
 RTTIDerivedB *v5; // [esp+44h] [ebp-24h]
 int result; // [esp+54h] [ebp-14h]
 int resulta; // [esp+54h] [ebp-14h]

 v4 = (RTTIDerivedA *)operator new(4u);
 memset(v4, 0, sizeof(RTTIDerivedA));
 RTTIDerivedA_RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 memset(v5, 0, sizeof(RTTIDerivedB));
 RTTIDerivedB_RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const struct std_type_info **)v4->_vptr$RTTIBase - 1),
 (const struct std_type_info *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const struct std_type_info **)v5->_vptr$RTTIBase - 1),
 (const struct std_type_info *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const RTTIDerivedA *)__dynamic_cast(
 v4,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA_derivedA_data(v3);
 v2 = (const RTTIDerivedB *)__dynamic_cast(
 v5,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 result += RTTIDerivedB_derivedB_data(v2);
 v0 = std_type_info_name(*((const struct std_type_info **)v4->_vptr$RTTIBase - 1));
 resulta = result + strlen(v0);
 (*((void ( **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x23A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 printf(asc_500D);
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


/* Function: main @ 0x2530 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2560 */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 struct { size_t _M_t; } *this,
 int *__p,
 const struct {unsigned char gap0;} *a3)
{
 std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl_test_cpp_smart_ptr_lambda_const(
 (struct { size_t _M_t; } *)this,
 __p,
 a3);
}





/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x25F0 */
const struct {unsigned char gap0;} * std_forward_test_cpp_smart_ptr_lambda_const(
 const struct {unsigned char gap0;} *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2600 */
void std__tuple_int_ptr_test_cpp_smart_ptr_lambda__tuple_int_ptr_ref_lambda_const_true(
 struct { size_t _M_t; } *this,
 int **__a1,
 const struct {unsigned char gap0;} *__a2)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2680 */
void std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__Tuple_impl_int_ptr_ref_lambda_const_void(
 struct { size_t _M_t; } *this,
 int **__head,
 const struct {unsigned char gap0;} *__tail)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2700 */
void std__Tuple_impl_1u_test_cpp_smart_ptr_lambda__Tuple_impl(
 struct { size_t _M_t; } *this,
 const struct {unsigned char gap0;} *__head)
{
 ;
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2740 */
void std__Head_base_1u_test_cpp_smart_ptr_lambda_true__Head_base(
 struct { size_t _M_t; } *this,
 const struct {unsigned char gap0;} *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2750 */
int ** std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(
 struct { size_t _M_t; } *this)
{
 return std__get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2780 */
struct {unsigned char gap0;} * std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(
 struct { size_t _M_t; } *this)
{
 return (struct {unsigned char gap0;} *)std__get_helper_1u_test_cpp_smart_ptr_lambda((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x27D0 */
void test_cpp_smart_ptr_lambda_2_operator(const struct {unsigned char gap0;} *this, int *p)
{
 *p = -1;
 if ( p )
 operator delete(p);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2820 */
int ** std_get_0u_int_ptr_test_cpp_smart_ptr_lambda(
 struct { size_t _M_t; } *__t)
{
 return std__get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2850 */
int ** std__get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2880 */
int ** std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__M_head(
 struct { size_t _M_t; } *__t)
{
 return std__Head_base_0u_int_ptr_false__M_head((struct { size_t _M_t; } *)__t);
}





/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x28E0 */
struct {unsigned char gap0;} * std_get_1u_test_cpp_smart_ptr_lambda(
 struct { size_t _M_t; } *__t)
{
 return (struct {unsigned char gap0;} *)std__get_helper_1u_test_cpp_smart_ptr_lambda(__t);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2910 */
struct {unsigned char gap0;} * std__get_helper_1u_test_cpp_smart_ptr_lambda(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_1u_test_cpp_smart_ptr_lambda__M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2940 */
struct {unsigned char gap0;} * std__Tuple_impl_1u_test_cpp_smart_ptr_lambda__M_head(
 struct { size_t _M_t; } *__t)
{
 return std__Head_base_1u_test_cpp_smart_ptr_lambda_true__M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2970 */
struct {unsigned char gap0;} * std__Head_base_1u_test_cpp_smart_ptr_lambda_true__M_head(
 struct { size_t _M_t; } *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2980 */
int * std_unique_ptr_int_test_cpp_smart_ptr_lambda_2_get(
 const struct std_unique_ptr_int *this)
{
 return std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x29D0 */
int * std__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(
 const struct { size_t _M_t; } *this)
{
 return *std_get_0u_int_ptr_test_cpp_smart_ptr_lambda(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2A00 */
int *const * std_get_0u_int_ptr_test_cpp_smart_ptr_lambda_const(
 const struct { size_t _M_t; } *__t)
{
 return std__get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_const(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2A30 */
int *const * std__get_helper_0u_int_ptr_test_cpp_smart_ptr_lambda_const(
 const struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__M_head_const(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2A60 */
int *const * std__Tuple_impl_0u_int_ptr_test_cpp_smart_ptr_lambda__M_head_const(
 const struct { size_t _M_t; } *__t)
{
 return std__Head_base_0u_int_ptr_false__M_head_const((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2A90 */
void SimpleClass_SimpleClass(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2AE0 */
void SimpleClass_setValue(SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2B00 */
int SimpleClass_getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2B10 */
int SimpleClass_compute(const SimpleClass *this, int x)
{
 int v3; // [esp+10h] [ebp-8h]

 v3 = x * this->value;
 return strlen(this->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2B50 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2B60 */
void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s)
{
 size_t i; // [esp+10h] [ebp-8h]

 this->size = s;
 this->data = (int *)operator new[](saturated_mul(4u, s));
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x2C00 */
int LifecycleClass_getData(const LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2C50 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2C70 */
void LifecycleClass_LifecycleClass_dtor(LifecycleClass *this)
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x2CC0 */
void Base_Base(Base *this)
{
 this->_vptr$Base = (int (**)(void))&off_8C3C;
}


/* Function: _ZN7DerivedC2Ei @ 0x2CF0 */
void Derived_Derived(Derived *this, int m)
{
 Base_Base(this);
 this->_vptr$Base = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 233);
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2D40 */
int Base_virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2D60 */
int Derived_virtual_func(Derived *this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZN7DerivedD2Ev @ 0x2D80 */
void Derived_Derived_dtor(Derived *this)
{
 Base_Base_dtor(this);
}


/* Function: _ZN4BaseD2Ev @ 0x2DB0 */
void Base_Base_dtor(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2DC0 */
void MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA(this);
 BaseB_BaseB(&this->BaseB);
 this->_vptr$BaseA = (int (**)(void))&(&GLOBAL_OFFSET_TABLE_)[-28];
 this->_vptr$BaseB = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 218);
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2E20 */
void MultiDerived_MultiDerived_dtor(MultiDerived *this)
{
 BaseB_BaseB_dtor(&this->BaseB);
 BaseA_BaseA_dtor(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E60 */
void DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)&this->MiddleB);
 MiddleA_MiddleA(this, (void **)&off_8D4C);
 MiddleB_MiddleB((MiddleB *)(&this->dataA + 1), (void **)&off_8D54);
 this->_vptr$MiddleA = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 190);
 this->_vptr$MiddleB = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 177);
 *(&this->dataA + 1) = (int)(&GLOBAL_OFFSET_TABLE_ - 184);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2F00 */
void DiamondDerived_DiamondDerived_dtor(DiamondDerived *this)
{
 DiamondDerived_DiamondDerived_dtor(this, (void **)&VTT_for_DiamondDerived);
 VirtualBase_VirtualBase_dtor((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x2F50 */
void Point_Point(Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x2F70 */
Point * Point_operator_add(Point *retstr, const Point *this, const Point *other)
{
 Point_Point(retstr, other->x + this->x, other->y + this->y);
 return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2FD0 */
bool Point_operator_eq(const Point *this, const Point *other)
{
 bool v3; // [esp+7h] [ebp-1h]

 v3 = 0;
 if ( this->x == other->x )
 return this->y == other->y;
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3020 */
Point * Point_operator_inc(Point *this)
{
 Point *result; // eax

 result = this;
 ++this->x;
 ++this->y;
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3040 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3070 */
double template_max<double>(double a, double b)
{
 if ( a <= (long double)b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x30B0 */
void template_swap<int>(int *a, int *b)
{
 int temp; // [esp+0h] [ebp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x30E0 */
void Container_int_Container(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3100 */
void Container_int_push(struct Container_int *this, int value)
{
 int size; // ecx

 if ( this->size < 10 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3140 */
int Container_int_get(const struct Container_int *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3190 */
int Container_int_getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x31A0 */
void Container_double_Container(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x31C0 */
void Container_double_push(struct Container_double *this, double value)
{
 int size; // ecx

 if ( this->size < 10 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3200 */
double Container_double_get(const struct Container_double *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3260 */
int Container_double_getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3270 */
void std_unique_ptr_int_unique_ptr_default_delete(
 struct std_unique_ptr_int *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x32C0 */
int std_unique_ptr_int_default_delete_operator_deref(
 const struct std_unique_ptr_int *this)
{
 return std_unique_ptr_int_get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3300 */
struct std_unique_ptr_int * std_move_unique_ptr_int_std(struct std_unique_ptr_int *__t)
{
 return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3310 */
void std_unique_ptr_int_unique_ptr_copy_default_delete(struct std_unique_ptr_int *this, struct std_unique_ptr_int *a2)
{
 std__uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3350 */
void std_unique_ptr_int_array_unique_ptr_default_delete(
 struct std_unique_ptr_int_array *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x33A0 */
int *std_unique_ptr_int_array_default_delete_operator_index(
 const struct std_unique_ptr_int_array *this,
 size_t __i)
{
 return &std_unique_ptr_int_array_get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x33F0 */
void std_unique_ptr_int_array_default_delete_destructor(struct std_unique_ptr_int_array *this)
{
 struct {unsigned char gap0;} *deleter; // ecx
 int **__ptr; // [esp+10h] [ebp-8h]

 __ptr = std__uniq_ptr_impl_int_default_delete_int_array__M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_default_delete_get_deleter(this);
 std_default_delete_int_array_operator_int(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3470 */
void std_unique_ptr_int_default_delete_destructor(struct std_unique_ptr_int *this)
{
 int *v1; // edx
 struct {unsigned char gap0;} *deleter; // [esp+14h] [ebp-14h]
 int **__ptr; // [esp+20h] [ebp-8h]

 __ptr = std__uniq_ptr_impl_int_default_delete_int__M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_default_delete_get_deleter(this);
 v1 = *std_move_int_ptr_ref(__ptr);
 std_default_delete_int_operator(deleter, v1);
 }
 *__ptr = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3500 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 82);
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3540 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))&(&GLOBAL_OFFSET_TABLE_)[-9];
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3580 */
bool std_type_info_operator_eq(const struct std_type_info *this, const struct std_type_info *__arg)
{
 bool v3; // [esp+17h] [ebp-11h]
 char v4; // [esp+23h] [ebp-5h]

 v4 = 1;
 if ( *((unsigned int *)this + 1) != *((unsigned int *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this + 1) != 42 )
 v3 = strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3610 */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3620 */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3630 */
const char * std_type_info_name(const struct std_type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned int *)this + 1) + 1);
 else
 return (const char *)*((unsigned int *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3670 */
const char * Base_getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3690 */
void Base_Base_dtor(Base *this)
{
 Base_Base_dtor(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x36D0 */
const char * Derived_getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x36F0 */
void Derived_Derived_dtor(Derived *this)
{
 Derived_Derived_dtor(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3730 */
void BaseA_BaseA(BaseA *this)
{
 this->_vptr$BaseA = (int (**)(void))&off_8CDC;
}


/* Function: _ZN5BaseBC2Ev @ 0x3760 */
void BaseB_BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_8CF0;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3790 */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x37A0 */
void MultiDerived_MultiDerived_dtor(MultiDerived *this)
{
 MultiDerived_MultiDerived_dtor(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x37E0 */
int MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x37F0 */
void `non-virtual thunk to'MultiDerived_funcB(int a1)
{
 MultiDerived_funcB((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3820 */
void `non-virtual thunk to'MultiDerived_MultiDerived_dtor(int a1)
{
 MultiDerived_MultiDerived_dtor((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3850 */
void `non-virtual thunk to'MultiDerived_MultiDerived_dtor(int a1)
{
 MultiDerived_MultiDerived_dtor((MultiDerived *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3880 */
int BaseA_funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3890 */
void BaseA_BaseA_dtor(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x38A0 */
void BaseA_BaseA_dtor(BaseA *this)
{
 BaseA_BaseA_dtor(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38E0 */
int BaseB_funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38F0 */
void BaseB_BaseB_dtor(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3900 */
void BaseB_BaseB_dtor(BaseB *this)
{
 BaseB_BaseB_dtor(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3940 */
void VirtualBase_VirtualBase(VirtualBase *this)
{
 this->_vptr$VirtualBase = (int (**)(void))&off_8E2C;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3970 */
void MiddleA_MiddleA(MiddleA *this, void **vtt)
{
 this->_vptr$MiddleA = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned int *)this->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3990 */
void MiddleB_MiddleB(MiddleB *this, void **vtt)
{
 this->_vptr$MiddleB = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned int *)this->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x39B0 */
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x39D0 */
void MiddleA_MiddleA_dtor(MiddleA *this)
{
 MiddleA_MiddleA_dtor(this, (void **)&VTT_for_MiddleA);
 VirtualBase_VirtualBase_dtor((VirtualBase *)(&this->dataA + 1));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3A20 */
void MiddleA_MiddleA_dtor(MiddleA *this)
{
 MiddleA_MiddleA_dtor(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x3A60 */
void `virtual thunk to'MiddleA_func(unsigned int *a1)
{
 MiddleA_func((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x3A90 */
void `virtual thunk to'MiddleA_MiddleA_dtor(unsigned int *a1)
{
 MiddleA_MiddleA_dtor((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3AC0 */
void `virtual thunk to'MiddleA_MiddleA_dtor(unsigned int *a1)
{
 MiddleA_MiddleA_dtor((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3AF0 */
int MiddleB_func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3B10 */
void MiddleB_MiddleB_dtor(MiddleB *this)
{
 MiddleB_MiddleB_dtor(this, (void **)&VTT_for_MiddleB);
 VirtualBase_VirtualBase_dtor((VirtualBase *)(&this->dataB + 1));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3B60 */
void MiddleB_MiddleB_dtor(MiddleB *this)
{
 MiddleB_MiddleB_dtor(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x3BA0 */
void `virtual thunk to'MiddleB_func(unsigned int *a1)
{
 MiddleB_func((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x3BD0 */
void `virtual thunk to'MiddleB_MiddleB_dtor(unsigned int *a1)
{
 MiddleB_MiddleB_dtor((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3C00 */
void `virtual thunk to'MiddleB_MiddleB_dtor(unsigned int *a1)
{
 MiddleB_MiddleB_dtor((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3C30 */
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3C50 */
void DiamondDerived_DiamondDerived_dtor(DiamondDerived *this)
{
 DiamondDerived_DiamondDerived_dtor(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3C90 */
void `non-virtual thunk to'DiamondDerived_func(int a1)
{
 DiamondDerived_func((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3CC0 */
void `non-virtual thunk to'DiamondDerived_DiamondDerived_dtor(int a1)
{
 DiamondDerived_DiamondDerived_dtor((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3CF0 */
void `non-virtual thunk to'DiamondDerived_DiamondDerived_dtor(int a1)
{
 DiamondDerived_DiamondDerived_dtor((DiamondDerived *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x3D20 */
void `virtual thunk to'DiamondDerived_func(unsigned int *a1)
{
 DiamondDerived_func((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3D50 */
void `virtual thunk to'DiamondDerived_DiamondDerived_dtor(unsigned int *a1)
{
 DiamondDerived_DiamondDerived_dtor((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3D80 */
void `virtual thunk to'DiamondDerived_DiamondDerived_dtor(unsigned int *a1)
{
 DiamondDerived_DiamondDerived_dtor((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x3DB0 */
int VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x3DC0 */
void VirtualBase_VirtualBase_dtor(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3DD0 */
void VirtualBase_VirtualBase_dtor(VirtualBase *this)
{
 VirtualBase_VirtualBase_dtor(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3E10 */
void MiddleA_MiddleA_dtor(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x3E20 */
void MiddleB_MiddleB_dtor(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x3E30 */
void DiamondDerived_DiamondDerived_dtor(DiamondDerived *this, void **vtt)
{
 MiddleB_MiddleB_dtor((MiddleB *)(&this->dataA + 1), vtt + 3);
 MiddleA_MiddleA_dtor(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3E90 */
void std__uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data(
 struct { size_t _M_t; } *this,
 struct { size_t _M_t; } *a2)
{
 std__uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl((struct { size_t _M_t; } *)this, (struct { size_t _M_t; } *)a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3ED0 */
void std__uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(
 struct { size_t _M_t; } *this,
 struct { size_t _M_t; } *__u)
{
 struct { size_t _M_t; } *v2; // eax

 v2 = std_move_tuple_int_ptr_deleter(&__u->_M_t);
 std__tuple_int_ptr_default_delete_int__tuple((struct { size_t _M_t; } *)&this->_M_t, v2);
 *std__uniq_ptr_impl_int_default_delete_int__M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3F50 */
void * std_move_tuple_int_ptr_deleter(void *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3F60 */
void std__tuple_int_ptr_default_delete_int__tuple(
 struct { size_t _M_t; } *this,
 struct { size_t _M_t; } *a2)
{
 std__Tuple_impl_0u_int_ptr_default_delete_int__Tuple_impl((struct { size_t _M_t; } *)this, (struct { size_t _M_t; } *)a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3FA0 */
int ** std__uniq_ptr_impl_int_default_delete_int__M_ptr(
 struct { size_t _M_t; } *this)
{
 return std__get_helper_0u_int_ptr_default_delete_int((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x3FD0 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std_terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4000 */
void std__Tuple_impl_0u_int_ptr_default_delete_int__Tuple_impl(
 struct { size_t _M_t; } *this,
 struct { size_t _M_t; } *a2)
{
 std__Tuple_impl_1u_default_delete_int__Tuple_impl((struct { size_t _M_t; } *)this, (struct { size_t _M_t; } *)a2);
 *(unsigned int *)&this->gap0 = *(unsigned int *)&a2->gap0;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4040 */
void std__Tuple_impl_1u_default_delete_int__Tuple_impl(
 struct { size_t _M_t; } *this,
 struct { size_t _M_t; } *__in)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4050 */
int ** std__get_helper_0u_int_ptr_default_delete_int(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4080 */
int ** std__get_helper_0u_int_ptr_default_delete_int_2(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x40B0 */
int ** std__Tuple_impl_0u_int_ptr_default_delete_int__M_head(
 struct { size_t _M_t; } *__t)
{
 return std__Head_base_0u_int_ptr_false__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x40E0 */
int ** std__Head_base_0u_int_ptr_false__M_head(struct { size_t _M_t; } *__b)
{
 return (int **)&__b->_M_t;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x40F0 */
void RTTIBase_RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_8ECC;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4120 */
void RTTIDerivedA_RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase_dtor(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4150 */
void RTTIDerivedA_RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 RTTIDerivedA_RTTIDerivedA_dtor(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4190 */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x41A0 */
void RTTIBase_RTTIBase_dtor(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x41B0 */
void RTTIBase_RTTIBase_dtor(RTTIBase *this)
{
 RTTIBase_RTTIBase_dtor(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x41F0 */
int RTTIBase_getType(const RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4200 */
void RTTIDerivedB_RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase_dtor(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4230 */
void RTTIDerivedB_RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 RTTIDerivedB_RTTIDerivedB_dtor(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4270 */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4280 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 struct { size_t _M_t; } *this,
 int *__p)
{
 std__uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl((struct { size_t _M_t; } *)this, __p);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x42C0 */
void std__uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(
 struct { size_t _M_t; } *this,
 int *__p)
{
 std__tuple_int_ptr_default_delete_int__tuple((struct { size_t _M_t; } *)&this->_M_t);
 *std__uniq_ptr_impl_int_default_delete_int__M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4310 */
void std__tuple_int_ptr_default_delete_int__tuple(
 struct { size_t _M_t; } *this)
{
 std__Tuple_impl_0u_int_ptr_default_delete_int__Tuple_impl((struct { size_t _M_t; } *)this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x4350 */
void std__Tuple_impl_0u_int_ptr_default_delete_int__Tuple_impl(
 struct { size_t _M_t; } *this)
{
 std__Tuple_impl_1u_default_delete_int__Tuple_impl((struct { size_t _M_t; } *)this);
 std__Head_base_0u_int_ptr_false__Head_base((struct { size_t _M_t; } *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x4390 */
void std__Tuple_impl_1u_default_delete_int__Tuple_impl(
 struct { size_t _M_t; } *this)
{
 std__Head_base_1u_default_delete_int_true__Head_base((struct { size_t _M_t; } *)this);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x43C0 */
void std__Head_base_0u_int_ptr_false__Head_base(struct { size_t _M_t; } *this)
{
 *(int **)&this->_M_t = 0;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x43E0 */
void std__Head_base_1u_default_delete_int_true__Head_base(
 struct { size_t _M_t; } *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F0 */
struct {unsigned char gap0;} * std_unique_ptr_int_default_delete_get_deleter_2(struct std_unique_ptr_int *this)
{
 return std__uniq_ptr_impl_int_default_delete_int__M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4440 */
void std_default_delete_int_operator_2(const struct {unsigned char gap0;} *this, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4480 */
int ** std_move_int_ptr_ref(int **__t)
{
 return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4490 */
struct {unsigned char gap0;} * std__uniq_ptr_impl_int_default_delete_int__M_deleter(
 struct { size_t _M_t; } *this)
{
 return std__get_helper_1u_int_ptr_default_delete_int((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x44C0 */
struct {unsigned char gap0;} * std__get_helper_1u_int_ptr_default_delete_int(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_1u_default_delete_int__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x44F0 */
struct {unsigned char gap0;} * std__get_helper_1u_default_delete_int(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_1u_default_delete_int__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4520 */
struct {unsigned char gap0;} * std__Tuple_impl_1u_default_delete_int__M_head(
 struct { size_t _M_t; } *__t)
{
 return std__Head_base_1u_default_delete_int_true__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4550 */
struct {unsigned char gap0;} * std__Head_base_1u_default_delete_int_true__M_head(
 struct { size_t _M_t; } *__b)
{
 return (struct {unsigned char gap0;} *)&__b->_M_t;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4560 */
int * std_unique_ptr_int_default_delete_get(const struct std_unique_ptr_int *this)
{
 return std__uniq_ptr_impl_int_default_delete_int__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B0 */
int * std__uniq_ptr_impl_int_default_delete_int__M_ptr_2(
 const struct { size_t _M_t; } *this)
{
 return *std__get_helper_0u_int_ptr_default_delete_int_3((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x45E0 */
int *const * std__get_helper_0u_int_ptr_default_delete_int_3(
 const struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int__M_head_2((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4610 */
int *const * std__get_helper_0u_int_ptr_default_delete_int_4(
 const struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int__M_head_2((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4640 */
int *const * std__Tuple_impl_0u_int_ptr_default_delete_int__M_head_2(
 const struct { size_t _M_t; } *__t)
{
 return std__Head_base_0u_int_ptr_false__M_head_2((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x4670 */
int *const * std__Head_base_0u_int_ptr_false__M_head_2(const struct { size_t _M_t; } *__b)
{
 return (int *const *)&__b->_M_t;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4680 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 struct { size_t _M_t; } *this,
 int *__p)
{
 std__uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl((struct { size_t _M_t; } *)this, __p);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x46C0 */
void std__uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(
 struct { size_t _M_t; } *this,
 int *__p)
{
 std__tuple_int_ptr_default_delete_int_array__tuple((struct { size_t _M_t; } *)&this->_M_t);
 *std__uniq_ptr_impl_int_default_delete_int_array__M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4710 */
void std__tuple_int_ptr_default_delete_int_array__tuple(
 struct { size_t _M_t; } *this)
{
 std__Tuple_impl_0u_int_ptr_default_delete_int_array__Tuple_impl((struct { size_t _M_t; } *)this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4750 */
int ** std__uniq_ptr_impl_int_default_delete_int_array__M_ptr(
 struct { size_t _M_t; } *this)
{
 return std__get_helper_0u_int_ptr_default_delete_int_array((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4780 */
void std__Tuple_impl_0u_int_ptr_default_delete_int_array__Tuple_impl(
 struct { size_t _M_t; } *this)
{
 std__Tuple_impl_1u_default_delete_int_array__Tuple_impl((struct { size_t _M_t; } *)this);
 std__Head_base_0u_int_ptr_false__Head_base((struct { size_t _M_t; } *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x47C0 */
void std__Tuple_impl_1u_default_delete_int_array__Tuple_impl(
 struct { size_t _M_t; } *this)
{
 std__Head_base_1u_default_delete_int_array_true__Head_base((struct { size_t _M_t; } *)this);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x47F0 */
void std__Head_base_1u_default_delete_int_array_true__Head_base(
 struct { size_t _M_t; } *this)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4800 */
int ** std__get_helper_0u_int_ptr_default_delete_int_array(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4830 */
int ** std__get_helper_0u_int_ptr_default_delete_int_array_2(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4860 */
int ** std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head(
 struct { size_t _M_t; } *__t)
{
 return std__Head_base_0u_int_ptr_false__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4890 */
struct {unsigned char gap0;} * std_unique_ptr_int_array_default_delete_get_deleter_2(struct std_unique_ptr_int_array *this)
{
 return std__uniq_ptr_impl_int_default_delete_int_array__M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x48E0 */
void std_default_delete_int_array_operator_int_2(const struct {unsigned char gap0;} *this, int **__ptr)
{
 if ( *__ptr )
 operator delete[](*__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4920 */
struct {unsigned char gap0;} * std__uniq_ptr_impl_int_default_delete_int_array__M_deleter(
 struct { size_t _M_t; } *this)
{
 return std__get_helper_1u_int_ptr_default_delete_int_array((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4950 */
struct {unsigned char gap0;} * std__get_helper_1u_int_ptr_default_delete_int_array(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_1u_default_delete_int_array__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4980 */
struct {unsigned char gap0;} * std__get_helper_1u_default_delete_int_array(
 struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_1u_default_delete_int_array__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x49B0 */
struct {unsigned char gap0;} * std__Tuple_impl_1u_default_delete_int_array__M_head(
 struct { size_t _M_t; } *__t)
{
 return std__Head_base_1u_default_delete_int_array_true__M_head((struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x49E0 */
struct {unsigned char gap0;} * std__Head_base_1u_default_delete_int_array_true__M_head(
 struct { size_t _M_t; } *__b)
{
 return (struct {unsigned char gap0;} *)&__b->_M_t;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x49F0 */
int * std_unique_ptr_int_array_default_delete_get(const struct std_unique_ptr_int_array *this)
{
 return std__uniq_ptr_impl_int_default_delete_int_array__M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4A40 */
int * std__uniq_ptr_impl_int_default_delete_int_array__M_ptr_2(
 const struct { size_t _M_t; } *this)
{
 return *std__get_helper_0u_int_ptr_default_delete_int_array_3((struct { size_t _M_t; } *)&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4A70 */
int *const * std__get_helper_0u_int_ptr_default_delete_int_array_3(
 const struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head_2((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4AA0 */
int *const * std__get_helper_0u_int_ptr_default_delete_int_array_4(
 const struct { size_t _M_t; } *__t)
{
 return std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head_2((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4AD0 */
int *const * std__Tuple_impl_0u_int_ptr_default_delete_int_array__M_head_2(
 const struct { size_t _M_t; } *__t)
{
 return std__Head_base_0u_int_ptr_false__M_head_2((const struct { size_t _M_t; } *)__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B00 */
int ** std_forward_int_ptr_ref(int **__t)
{
 return __t;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4B10 */
void std__Head_base_0u_int_ptr_false__Head_base_int_ptr_ref(struct { size_t _M_t; } *this, int **__h)
{
 *(int **)&this->_M_t = *__h;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x4B9C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9090 */

/* FAILED to decompile: __cxa_finalize @ 0x9094 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9098 */

/* FAILED to decompile: __cxa_begin_catch @ 0x909C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x90A0 */

/* FAILED to decompile: strlen @ 0x90A4 */

/* FAILED to decompile: __cxa_atexit @ 0x90A8 */

/* FAILED to decompile: strcmp @ 0x90B0 */

/* FAILED to decompile: __libc_start_main @ 0x90B4 */

/* FAILED to decompile: _Znaj @ 0x90B8 */

/* FAILED to decompile: strncpy @ 0x90BC */

/* FAILED to decompile: _ZdlPv @ 0x90C0 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90C4 */

/* FAILED to decompile: __dynamic_cast @ 0x90C8 */

/* FAILED to decompile: _ZdaPv @ 0x90CC */

/* FAILED to decompile: printf @ 0x90D4 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90DC */

/* FAILED to decompile: __cxa_end_catch @ 0x90E0 */

/* FAILED to decompile: memset @ 0x90E4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90E8 */

/* FAILED to decompile: __cxa_throw @ 0x90EC */

/* FAILED to decompile: _Unwind_Resume @ 0x90F4 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x90F8 */

/* Total functions decompiled: 221, failed: 24 */
