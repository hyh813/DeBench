#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ullong;

/* Macro for combining two 32-bit values into a 64-bit value */
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | ((unsigned long long)(low) & 0xffffffff))

// Decompiled by BinaryAI
// SHA256: 2939969a9bdb857b5c308b77a0260c3e11673c5180656257c2fbc268fd08f1ef

// Function: call_weak_fn @ 0x10f28
void call_weak_fn(void);

// Function: _init @ 0x10d2c
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: _EXTERNAL_operator.new @ 0x10d4c
void * operator_new(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: _EXTERNAL_std_terminate @ 0x10d58
void std_terminate(void)
{
 abort();
}

// Function: _EXTERNAL___cxa_begin_catch @ 0x10d64
void __cxa_begin_catch(void)
{
 return;
}

// Function: _EXTERNAL___cxa_allocate_exception @ 0x10d70
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: _EXTERNAL_printf @ 0x10d7c
// Using standard printf from stdio.h

// Function: _EXTERNAL___libc_start_main @ 0x10d88
void __libc_start_main(int (*main_func)(), char **argv, void *init, void (*fini)(), void (*rtld_fini)(), void *stack_end)
{
 main_func();
}

// Function: _EXTERNAL_operator.new[] @ 0x10d94
void * operator_new__(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: _EXTERNAL_abort @ 0x10da0
// Using standard abort from stdlib.h

// Function: _EXTERNAL_operator.delete @ 0x10dac
void operator_delete(void *param_1)
{
 free(param_1);
}

// Function: _EXTERNAL___cxa_bad_typeid @ 0x10db8
void __cxa_bad_typeid(void)
{
 abort();
}

// Function: _EXTERNAL___cxa_end_cleanup @ 0x10dc4
void __cxa_end_cleanup(void)
{
 return;
}

// Function: _EXTERNAL___dynamic_cast @ 0x10dd0
void __dynamic_cast(void)
{
 return;
}

// Function: _EXTERNAL___cxa_atexit @ 0x10ddc
void __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle)
{
 // Stub - actual implementation would register exit handler
}

// Function: _EXTERNAL_operator.delete[] @ 0x10de8
void operator_delete__(void *param_1)
{
 free(param_1);
}

// Forward declarations for external symbols
extern void __dso_handle;
extern void std___ioinit;
typedef void Init;
extern void std__io_init(Init *this);
extern void terminate(void);
extern void __gmon_start__(void);
extern void __dynamic_cast(void *obj, void *src_type, void *dst_type, int ptr);
extern void type(void);
extern void default_delete(void);
extern void _Base(void *this);
extern void _Derived(void *this);
extern void _MultiDerived(void *this);
extern void _MiddleA(void *this);
extern void _DiamondDerived(void *this);
extern void _VirtualBase(void *this);
extern void get(void *this);
extern void get_deleter(void *this);
extern void move(void *ptr);
extern void forward(void *ptr);
extern void _Tuple_impl(void *this);
extern void _Head_base(void *this);
extern unsigned int CONCAT44(int high, int low);
extern int main(void);
extern void stack0x00000004;
extern void stack0xffffffe4;
extern void stack0xffffffe0;

/* Type info structure for RTTI */
typedef struct type_info {
    const char *name;
    int dummy;
} type_info;

/* Global type_info objects */
type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA", 0};
type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB", 0};
type_info RTTIBase_typeinfo = {"RTTIBase", 0};

/* Type definitions for C++ classes (as structs) */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct unique_ptr_int_test_cpp_smart_ptr______2_ unique_ptr_int_test_cpp_smart_ptr______2_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr unique_ptr;
typedef struct __2 __2;
typedef struct __1 __1;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ __uniq_ptr_impl_int_test_cpp_smart_ptr______2_;
typedef struct tuple_int__test_cpp_smart_ptr______2_ tuple_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_0u_int__test_cpp_smart_ptr______2_ _Tuple_impl_0u_int__test_cpp_smart_ptr______2_;
typedef struct _Head_base_0u_int__false_ _Head_base_0u_int__false_;
typedef struct _Head_base_1u_int__true_ _Head_base_1u_int__true_;
typedef struct tuple tuple;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct type_info type_info;
typedef struct type type;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct default_delete_int_ default_delete_int_;
typedef struct default_delete default_delete;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct _Tuple_impl_0u_int__std__default_delete_int__ _Tuple_impl_0u_int__std__default_delete_int__;
typedef struct _Tuple_impl_1u_std__default_delete_int__ _Tuple_impl_1u_std__default_delete_int__;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct _Tuple_impl_0u_int__std__default_delete_int____ _Tuple_impl_0u_int__std__default_delete_int____;
typedef struct _Tuple_impl_1u_std__default_delete_int____ _Tuple_impl_1u_std__default_delete_int____;
typedef struct _Head_base_1u_std__default_delete_int__true_ _Head_base_1u_std__default_delete_int__true_;
typedef struct _Head_base_1u_std__default_delete_int____true_ _Head_base_1u_std__default_delete_int____true_;

/* Lambda closure type definitions */
typedef struct __0 __0;

/* Additional missing type definitions */
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ __uniq_ptr_impl_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;

/* Function forward declarations */
void SimpleClass_SimpleClass(SimpleClass *this, int param_1, char *param_2);
void SimpleClass_setValue(SimpleClass *this, int param_1);
unsigned int SimpleClass_getValue(SimpleClass *this);
int SimpleClass_compute(SimpleClass *this, int param_1);
unsigned int SimpleClass_getClassID(void);
LifecycleClass *LifecycleClass_LifecycleClass(LifecycleClass *this, uint param_1);
unsigned int LifecycleClass_getData(LifecycleClass *this, uint param_1);
unsigned int LifecycleClass_getInstanceCount(void);
LifecycleClass *LifecycleClass__LifecycleClass(LifecycleClass *this);
void Base_Base(Base *this);
void Derived_Derived(Derived *this, int param_1);
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
Derived *Derived__Derived(Derived *this);
Base *Base__Base(Base *this);
void MultiDerived_MultiDerived(MultiDerived *this);
MultiDerived *MultiDerived__MultiDerived(MultiDerived *this);
void DiamondDerived_DiamondDerived(DiamondDerived *this);
DiamondDerived *DiamondDerived__DiamondDerived(DiamondDerived *this);
void Point_Point(Point *this, int param_1, int param_2);
void Point_operator_(Point *this, Point *param_1);
bool Point_operator__(Point *this, Point *param_1);
void Container_int_Container(Container_int_ *this);
void Container_int_push(Container_int_ *this, int param_1);
unsigned int Container_int_get(Container_int_ *this, int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Container(Container_double_ *this);
void Container_double_push(Container_double_ *this, double param_1);
unsigned long long Container_double_get(Container_double_ *this, int param_1);
unsigned int Container_double_getSize(Container_double_ *this);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
bool std_type_info_operator__(type_info *this, type_info *param_1);
unsigned int RTTIDerivedA_derivedA_data(void);
unsigned int RTTIDerivedB_derivedB_data(void);
int std_type_info_name(type_info *this);
char * Base_getName(void);
char * Derived_getName(void);
unsigned int BaseA_funcA(void);
BaseA * BaseA__BaseA(BaseA *this);
void BaseA_Destructor(BaseA *this);
unsigned int BaseB_funcB(void);
BaseB * BaseB__BaseB(BaseB *this);
void BaseB_Destructor(BaseB *this);
void __clang_call_terminate(void);
unique_ptr_int_std__default_delete_int__ * std_unique_ptr_int_std__default_delete_int__unique_ptr_std__default_delete_int__void_(unique_ptr_int_std__default_delete_int__ *this, int *param_1);
void std_unique_ptr_int_std__default_delete_int__operator_(unique_ptr_int_std__default_delete_int__ *this);
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1);
unique_ptr_int_std__default_delete_int__ * std_unique_ptr_int_std__default_delete_int__unique_ptr(unique_ptr_int_std__default_delete_int__ *this, unique_ptr *param_1);
unique_ptr_int___std__default_delete_int____ * std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(unique_ptr_int___std__default_delete_int____ *this, int *param_1);
int std_unique_ptr_int___std__default_delete_int____operator__(unique_ptr_int___std__default_delete_int____ *this, uint param_1);
unique_ptr_int___std__default_delete_int____ * std_unique_ptr_int___std__default_delete_int____unique_ptr(unique_ptr_int___std__default_delete_int____ *this);
unique_ptr_int_std__default_delete_int__ * std_unique_ptr_int_std__default_delete_int__unique_ptr_destructor(unique_ptr_int_std__default_delete_int__ *this);
unique_ptr_int_test_cpp_smart_ptr______2_ * std_unique_ptr_int_test_cpp_smart_ptr______2_unique_ptr_test_cpp_smart_ptr______2_void_(unique_ptr_int_test_cpp_smart_ptr______2_ *this, int *param_1, __2 *param_2);
void std_unique_ptr_int_test_cpp_smart_ptr______2_operator_(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
unique_ptr_int_test_cpp_smart_ptr______2_ * std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
void std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl(_Tuple_impl *param_1);
_Tuple_impl * std__Tuple_impl_1u_std_default_delete_int___Tuple_impl(_Tuple_impl *param_1);
type * std_get_0u_int__std_default_delete_int__(tuple *param_1);
type * std_get_1u_int__std_default_delete_int__(tuple *param_1);
int ** std___get_helper_0u_int__std_default_delete_int__(_Tuple_impl *param_1);
default_delete * std___get_helper_1u_std_default_delete_int__(_Tuple_impl *param_1);
void std__Tuple_impl_0u_int__std_default_delete_int___M_head(_Tuple_impl *param_1);
void std__Tuple_impl_1u_std_default_delete_int___M_head(_Tuple_impl *param_1);
type * get_0u_int__std_default_delete_int__(tuple *param_1);
type * get_1u_int__std_default_delete_int__(tuple *param_1);
type * std_get_0u_int__std_default_delete_int____(tuple *param_1);
type * std_get_1u_int__std_default_delete_int____(tuple *param_1);
int ** std___get_helper_0u_int__std_default_delete_int____(_Tuple_impl *param_1);
default_delete * std___get_helper_1u_std_default_delete_int____(_Tuple_impl *param_1);
void std__Tuple_impl_0u_int__std_default_delete_int____M_head(_Tuple_impl *param_1);
void std__Tuple_impl_1u_std_default_delete_int____M_head(_Tuple_impl *param_1);
type * get_0u_int__std_default_delete_int____(tuple *param_1);
type * get_1u_int__std_default_delete_int____(tuple *param_1);
tuple_int__std__default_delete_int__ * std_tuple_int__std_default_delete_int__tuple_true_true_(tuple_int__std__default_delete_int__ *this);
tuple_int__std__default_delete_int____ * std_tuple_int__std_default_delete_int____tuple_true_true_(tuple_int__std__default_delete_int____ *this);
tuple * std_tuple_int__std_default_delete_int__tuple(tuple *param_1);
type * std_move_std__tuple_int__std_default_delete_int____(tuple *param_1);
void std__Head_base_1u_std__default_delete_int_true__M_head(_Head_base *param_1);
void std__Head_base_1u_std__default_delete_int____true__M_head(_Head_base *param_1);
void std__Head_base_0u_int__false__M_head(_Head_base *param_1);
void std__Head_base_1u_std__default_delete_int_true__Head_base(_Head_base_1u_std__default_delete_int__true_ *this);
void std__Head_base_1u_std__default_delete_int____true__Head_base(_Head_base_1u_std__default_delete_int____true_ *this);
void std__Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *this);
_Tuple_impl_0u_int__std__default_delete_int__ * std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl(_Tuple_impl_0u_int__std__default_delete_int__ *this);
_Tuple_impl_1u_std__default_delete_int__ * std__Tuple_impl_1u_std_default_delete_int___Tuple_impl(_Tuple_impl_1u_std__default_delete_int__ *this);
_Tuple_impl_0u_int__std__default_delete_int____ * std__Tuple_impl_0u_int__std_default_delete_int____Tuple_impl(_Tuple_impl_0u_int__std__default_delete_int____ *this);
_Tuple_impl_1u_std__default_delete_int____ * std__Tuple_impl_1u_std_default_delete_int____Tuple_impl(_Tuple_impl_1u_std__default_delete_int____ *this);
void std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl(_Tuple_impl *param_1);
void std__Tuple_impl_1u_std_default_delete_int___Tuple_impl(_Tuple_impl *param_1);
void std__Head_base_0u_int__false__Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1);
int ** std_forward_int___(type *param_1);
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(unsigned int param_1, void *param_2);
void BaseA_BaseA(BaseA *this);
void BaseB_BaseB(BaseB *this);
unsigned int MultiDerived_funcA(void);
unsigned int MultiDerived_funcB(void);
void VirtualBase_VirtualBase(VirtualBase *this);
void MiddleA_MiddleA(MiddleA *this);
void MiddleB_MiddleB(MiddleB *this);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
unsigned int VirtualBase_func(void);
void RTTIBase_RTTIBase(RTTIBase *this);
unsigned int RTTIDerivedA_getType(void);
unsigned int RTTIBase_getType(void);
unsigned int RTTIDerivedB_getType(void);

// Global variables
char completed_0 = 0;
unsigned int instance_count = 0;

/* Vtable pointer definitions (stubs) */
void *PTR_virtual_func_00024c48[1];
void *PTR_virtual_func_00024c68[1];
void *PTR_funcA_00024c8c[1];
void *PTR_funcB_00024ca4[1];
void *PTR_funcA_00024ce8[1];
void *PTR_funcB_00024cfc[1];
void *PTR_func_00024d14[1];
void *PTR_func_00024d2c[1];
void *PTR_func_00024d48[1];
void *PTR_func_00024e38[1];
void *PTR__RTTIDerivedA_00024ec4[1];
void *PTR__RTTIDerivedB_00024eec[1];
void *PTR__RTTIBase_00024ed8[1];

/* Data string constants (stubs) */
char DAT_00014221[1];
char DAT_00014246[1];
char DAT_00014264[1];
char DAT_00014280[1];
char DAT_0001429c[1];
char DAT_000142b8[1];
char DAT_000142d5[1];
char DAT_000142f1[1];
char DAT_0001430d[1];
char DAT_00014329[1];
char DAT_00014345[1];
char DAT_00014362[1];
char DAT_0001437f[1];
char DAT_0001439d[1];

/* Stack data */
int stack0x00000004;
int stack0xffffffe4;
int stack0xffffffe0;

/* Missing function implementations */

void __gmon_start__(void) {
    return;
}

/* Additional helper function implementations */
type * move_int___(int **param_1) {
    return (type *)param_1;
}

type * forward_int___(type *param_1) {
    return param_1;
}

type * _M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *param_1) {
    return (type *)param_1;
}

type * _M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *param_1) {
    return (type *)param_1;
}

type * _M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *param_1) {
    return (type *)param_1;
}

void _Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *this,int **param_1) {
    if (param_1 != NULL) {
        *(int **)this = *param_1;
    } else {
        *(int **)this = NULL;
    }
}

void _Head_base_0u_int__false__M_head(_Head_base_0u_int__false_ *param_1) {
    return;
}

void _Head_base_1u_int__true__Head_base(_Head_base_1u_int__true_ *this) {
    return;
}

void _Head_base_1u_int__true__M_head(_Head_base_1u_int__true_ *param_1) {
    return;
}

void _Head_base_1u_std__default_delete_int__true__Head_base(_Head_base_1u_std__default_delete_int__true_ *this) {
    return;
}

void _Head_base_1u_std__default_delete_int__true__M_head(_Head_base *param_1) {
    return;
}

void _Head_base_1u_std__default_delete_int____true__Head_base(_Head_base_1u_std__default_delete_int____true_ *this) {
    return;
}

void _Head_base_1u_std__default_delete_int____true__M_head(_Head_base *param_1) {
    return;
}

void _Head_base_1u_test_cpp_smart_ptr______2_true__M_head(_Head_base *param_1) {
    return;
}

void _Head_base_0u_int__test_cpp_smart_ptr______2__M_head(_Head_base_0u_int__false_ *param_1) {
    return;
}

void _Head_base_0u_int__std__default_delete_int__M_head(_Head_base_0u_int__false_ *param_1) {
    return;
}

void _Head_base_0u_int__std__default_delete_int____M_head(_Head_base_0u_int__false_ *param_1) {
    return;
}

type * _Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head(_Tuple_impl *param_1) {
    return (type *)_Head_base_0u_int__false__M_head((_Head_base_0u_int__false_ *)param_1);
}

type * _Tuple_impl_1u_test_cpp_smart_ptr______2__M_head(_Tuple_impl *param_1) {
    return (type *)param_1;
}

void _Tuple_impl_1u_std__default_delete_int__M_head(_Tuple_impl *param_1) {
    _Head_base_1u_std__default_delete_int__true__M_head((_Head_base *)param_1);
}

void _Tuple_impl_1u_std__default_delete_int____M_head(_Tuple_impl *param_1) {
    _Head_base_1u_std__default_delete_int____true__M_head((_Head_base *)param_1);
}

void _Tuple_impl_0u_int__std__default_delete_int____M_head(_Tuple_impl *param_1) {
    _Head_base_0u_int__false__M_head((_Head_base *)param_1);
}

void std__io_init(Init *this) {
    return;
}

void get(void *this) {
    return;
}

void get_deleter(void *this) {
    return;
}

void move(void *ptr) {
    return;
}

void forward(void *ptr) {
    return;
}

void _Tuple_impl(void *this) {
    return;
}

void _Head_base(void *this) {
    return;
}

void _Base(void *this) {
    return;
}

void _Derived(void *this) {
    return;
}

void _MultiDerived(void *this) {
    return;
}

void _MiddleA(void *this) {
    return;
}

void _DiamondDerived(void *this) {
    return;
}

void _VirtualBase(void *this) {
    return;
}

void type(void) {
    return;
}

void default_delete(void) {
    return;
}

void _M_ptr(void *this) {
    return;
}

void _M_head(void *this) {
    return;
}

void func(void) {
    return;
}

void funcA(void) {
    return;
}

void funcB(void) {
    return;
}

// Function: _EXTERNAL___cxa_rethrow @ 0x10df4
void __cxa_rethrow(void)
{
 abort();
}

// Function: _EXTERNAL_strlen @ 0x10e00
// Using standard strlen from string.h

// Function: _EXTERNAL_std_ios_base_Init_Init @ 0x10e0c
void __thiscall std_ios_base_Init_Init(Init *this)
{
 return;
}

// Function: _EXTERNAL___aeabi_d2iz @ 0x10e18
int __aeabi_d2iz(double param_1)
{
 return (int)param_1;
}

// Function: _EXTERNAL___cxa_end_catch @ 0x10e24
void __cxa_end_catch(void)
{
 return;
}

// Function: _EXTERNAL___gxx_personality_v0 @ 0x10e30
void __gxx_personality_v0(void)
{
 return;
}

// Function: _EXTERNAL_strcmp @ 0x10e3c
// Using standard strcmp from string.h

// Function: _EXTERNAL___cxa_throw @ 0x10e48
void __cxa_throw(void *obj, void *type, void *destructor)
{
 // Stub - actual implementation would throw exception
 abort();
}

// Function: _EXTERNAL___aeabi_dcmpgt @ 0x10e54
void __aeabi_dcmpgt(void)
{
 return;
}

// Function: _EXTERNAL_strncpy @ 0x10e60
// Using standard strncpy from string.h

// Function: _EXTERNAL___cxa_finalize @ 0x10e78
void __cxa_finalize(void *dso_handle)
{
 // Stub - actual implementation would run finalizers
}

// Function: __cxx_global_var_init @ 0x10e84
void __cxx_global_var_init(void)
{
 std__io_init(&std___ioinit);
 __cxa_atexit(std__io_init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10ed0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 __cxx_global_var_init();
 return;
}

// Function: _start @ 0x10ee4
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10f28
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10f4c
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10f90
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10fe0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x1104c
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_2c [36];
 SimpleClass_SimpleClass(aSStack_2c,5,"Test");
 SimpleClass_setValue(aSStack_2c,10);
 iVar1 = SimpleClass_getValue(aSStack_2c);
 iVar2 = SimpleClass_compute(aSStack_2c,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x110c8
int test_cpp_constructor(void)
{
 int iVar1;
 LifecycleClass aLStack_14 [8];
 int local_c;
 local_c = 0;
 LifecycleClass_LifecycleClass(aLStack_14,5);
 iVar1 = LifecycleClass_getData(aLStack_14,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = local_c + iVar1;
 LifecycleClass__LifecycleClass(aLStack_14);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x11174
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x111ac
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived aDStack_14 [8];
 Base aBStack_c [4];
 Base_Base(aBStack_c);
 Derived_Derived(aDStack_14,3);
 iVar1 = Base_virtual_func(aBStack_c,5);
 iVar2 = Derived_virtual_func(aDStack_14,5);
 iVar3 = call_virtual_func(aBStack_c,5);
 iVar4 = call_virtual_func((Base *)aDStack_14,5);
 Derived__Derived(aDStack_14);
 Base__Base(aBStack_c);
 return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x112c0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 void ***local_38;
 void **local_18 [4];
 MultiDerived_MultiDerived((MultiDerived *)local_18);
 local_18[1] = (void **)0x64;
 local_18[3] = (void **)0xc8;
 local_38 = (void ***)0x0;
 if (local_18 != (void ***)0x0) {
 local_38 = local_18 + 2;
 }
 iVar1 = (**local_18[0])();
 iVar2 = (***local_38)();
 iVar3 = (int)local_18 - (int)local_38;
 if (iVar3 != 0) {
 iVar3 = 1;
 }
 MultiDerived__MultiDerived((MultiDerived *)local_18);
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_diamond_inheritance @ 0x113c0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned int *local_38;
 int local_20 [6];
 DiamondDerived_DiamondDerived((DiamondDerived *)local_20);
 *(unsigned int *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 0x32;
 local_38 = (unsigned int *)0x0;
 if (local_20 != (int *)0x0) {
 local_38 = (unsigned int *)((int)local_20 + *(int *)(local_20[0] + -0xc));
 }
 iVar1 = (**(void **)*local_38)();
 *(unsigned int *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 100;
 iVar2 = (**(void **)*local_38)();
 DiamondDerived__DiamondDerived((DiamondDerived *)local_20);
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x114c4
int test_cpp_operator_overload(void)
{
 byte bVar1;
 int iVar2;
 int local_20;
 int local_1c;
 Point aPStack_18 [8];
 Point aPStack_10 [8];
 Point_Point(aPStack_10,1,2);
 Point_Point(aPStack_18,3,4);
 Point_operator_((Point *)&local_20,aPStack_10);
 bVar1 = Point_operator__(aPStack_10,aPStack_18);
 Point_operator__((Point *)&local_20);
 iVar2 = local_20 + local_1c + 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = local_20 + local_1c;
 }
 return iVar2;
}

// Function: test_cpp_template_func @ 0x11550
int test_cpp_template_func(void)
{
 int iVar1;
 int iVar3;
 int iVar4;
 int iVar5;
 double dVar1;
 iVar1 = template_max_int_(3,7);
 dVar1 = template_max_double_(3.5, 7.5);
 iVar5 = 10;
 iVar4 = 0x14;
 template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe0);
 iVar3 = (int)dVar1;
 return iVar1 + iVar3 + iVar5 + iVar4;
}

// Function: test_cpp_template_class @ 0x115e8
int test_cpp_template_class(void)
{
 int iVar1;
 int iVar2;
 unsigned long long uVar3;
 Container_int_ *this;
 Container_double_ *this_00;
 Container_double_ aCStack_98 [92];
 int local_3c;
 int local_38;
 Container_int_ aCStack_34 [44];
 this = aCStack_34;
 Container_int_Container(this);
 Container_int_push(this,10);
 Container_int_push(this,0x14);
 Container_int_push(this,0x1e);
 local_38 = Container_int_get(this,0);
 local_3c = Container_int_getSize(this);
 this_00 = aCStack_98;
 Container_double_Container(this_00);
 Container_double_push((double)CONCAT44(this_00,this));
 uVar3 = Container_double_get(this_00,0);
 iVar1 = local_38 + local_3c;
 iVar2 = __aeabi_d2iz((int)uVar3,(int)((ulonglong)uVar3  0x20));
 return iVar1 + iVar2;
}

// Function: test_cpp_lambda @ 0x116b4
int test_cpp_lambda(void)
{
 int iVar1;
 int aVar2;
 __0 a_Stack_1c [4];
 unsigned int local_18;
 unsigned int *local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_c = 10;
 local_10 = 0x14;
 local_18 = 10;
 local_14 = &local_10;
 iVar1 = test_cpp_lambda()_$_1_operator__((__1 *)&local_18,3);
 aVar2 = test_cpp_lambda()_$_0_operator__(a_Stack_1c,10,0x14);
 return iVar1 + aVar2;
}

// Function: test_cpp_lambda()_$_1_operator() @ 0x11724
int __thiscall test_cpp_lambda()_$_1_operator__(__1 *this,int param_1)
{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return param_1 * *(int *)this + **(int **)(this + 4);
}

// Function: test_cpp_lambda()_$_0_operator() @ 0x11760
int __thiscall test_cpp_lambda()_$_0_operator__(__0 *this,int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x11784
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

// Function: test_cpp_smart_ptr @ 0x118f4
int test_cpp_smart_ptr(void)
{
 int *piVar1;
 unsigned int *puVar2;
 type *ptVar3;
 int iVar4;
 int iVar5;
 unique_ptr_int_test_cpp_smart_ptr______2_ auStack_2c [4];
 __2 a_Stack_28 [4];
 int local_24;
 unique_ptr_int___std__default_delete_int____ auStack_20 [4];
 int local_1c;
 unique_ptr_int_std__default_delete_int__ auStack_18 [12];
 unique_ptr_int_std__default_delete_int__ auStack_c [4];
 piVar1 = (int *)operator_new(4);
 *piVar1 = 100;
 std_unique_ptr_int_std__default_delete_int__unique_ptr_std__default_delete_int__void_(auStack_c,piVar1);
 puVar2 = (unsigned int *)std_unique_ptr_int_std__default_delete_int__operator_(auStack_c);
 *puVar2 = 200;
 ptVar3 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_c);
 std_unique_ptr_int_std__default_delete_int__unique_ptr(auStack_18,(unique_ptr *)ptVar3);
 piVar1 = (int *)std_unique_ptr_int_std__default_delete_int__operator_(auStack_18);
 local_1c = *piVar1;
 piVar1 = (int *)operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(auStack_20,piVar1);
 piVar1 = (int *)std_unique_ptr_int___std__default_delete_int____operator__(auStack_20,2);
 local_24 = *piVar1;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr______2_unique_ptr_test_cpp_smart_ptr______2_void_(auStack_2c,piVar1,a_Stack_28);
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr______2_operator_(auStack_2c);
 iVar4 = *piVar1;
 iVar5 = local_1c + local_24;
 std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr(auStack_2c);
 std_unique_ptr_int___std__default_delete_int____unique_ptr(auStack_20);
 std_unique_ptr_int_std__default_delete_int__unique_ptr(auStack_18);
 std_unique_ptr_int_std__default_delete_int__unique_ptr(auStack_c);
 return iVar5 + iVar4;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr()_$_2_unique_ptr_test_cpp_smart_ptr()_$_2,void @ 0x11acc
unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2_unique_ptr_test_cpp_smart_ptr______2_void_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_
 __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
 return this;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr()_$_2_operator* @ 0x11b10
void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2_operator_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 get(this);
 return;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr()_$_2_~unique_ptr @ 0x11b44
unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 int **ppiVar1;
 __2 *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 test_cpp_smart_ptr()_$_2_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}

// Function: test_cpp_rtti @ 0x11bd4
int test_cpp_rtti(void)
{
 int *this;
 int *this_00;
 int iVar1;
 char *__s;
 size_t sVar2;
 int local_44;
 int local_3c;
 int local_14;
 this = (int *)operator_new(4);
 *this = 0;
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (int *)operator_new(4);
 *this_00 = 0;
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_14 = 0;
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
 }
 iVar1 = std_type_info_operator__
 (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar1 != 0) {
 local_14 = 10;
 }
 if (this_00 == (int *)0x0) {
 __cxa_bad_typeid();
 }
 iVar1 = std_type_info_operator__
 (*(type_info **)(*this_00 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar1 != 0) {
 local_14 = local_14 + 0x14;
 }
 if (this == (int *)0x0) {
 local_3c = 0;
 }
 else {
 local_3c = __dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (local_3c != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_14 = local_14 + iVar1;
 }
 if (this_00 == (int *)0x0) {
 local_44 = 0;
 }
 else {
 local_44 = __dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (local_44 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_14 = local_14 + iVar1;
 }
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std_type_info_name(*(type_info **)(*this + -4));
 sVar2 = strlen(__s);
 if (this != (int *)0x0) {
 (**(void **)(*this + 4))();
 }
 if (this_00 != (int *)0x0) {
 (**(void **)(*this_00 + 4))();
 }
 return local_14 + sVar2;
}

// Function: test_cpp_oo_features @ 0x11e74
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00014221);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00014246,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00014264,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_00014280,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_0001429c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000142b8,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_000142d5,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_000142f1,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0001430d,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00014329,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00014345,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00014362,uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0001437f,uVar1);
 return;
}

// Function: main @ 0x11fb4
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std___uniq_ptr_data_int_test_cpp_smart_ptr()_$_2,true,false___uniq_ptr_impl_test_cpp_smart_ptr()_$_2_const& @ 0x11fe0
__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ * __thiscall
std___uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
 )
{
 __uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
 return this;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr()_$_2___uniq_ptr_impl_test_cpp_smart_ptr()_$_2_const& @ 0x1201c
__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2_
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __2 *p_Var1;
 int *local_10;
 __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_c;
 local_10 = param_1;
 local_c = this;
 p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 tuple_int__test_cpp_smart_ptr______2_tuple_int___test_cpp_smart_ptr______2_const__true_
 ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_10,p_Var1);
 return this;
}

// Function: std_forward_test_cpp_smart_ptr()_$_2_const& @ 0x12064
__2 * std_forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
 return (__2 *)param_1;
}

// Function: std_tuple_int__test_cpp_smart_ptr()_$_2_tuple_int*&,test_cpp_smart_ptr()_$_2_const&,true @ 0x12078
tuple_int__test_cpp_smart_ptr______2_ * __thiscall
std_tuple_int__test_cpp_smart_ptr______2_tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 __2 *p_Var2;
 ppiVar1 = forward_int___((type *)param_1);
 p_Var2 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 _Tuple_impl_0u_int__test_cpp_smart_ptr______2_
 _Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
 return this;
}

// Function: std__Tuple_impl_0u_int__test_cpp_smart_ptr()_$_2__Tuple_impl_int*&,test_cpp_smart_ptr()_$_2_const&,void @ 0x120d4
_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ * __thiscall
std__Tuple_impl_0u_int__test_cpp_smart_ptr______2_
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 _Tuple_impl_1u_test_cpp_smart_ptr______2__Tuple_impl((__2 *)this);
 ppiVar1 = forward_int___((type *)param_1);
 _Head_base_0u_int__false__Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
 return this;
}

// Function: std__Tuple_impl_1u_test_cpp_smart_ptr()_$_2__Tuple_impl @ 0x1212c
__2 * std__Tuple_impl_1u_test_cpp_smart_ptr______2__Tuple_impl(__2 *param_1)
{
 _Head_base_1u_test_cpp_smart_ptr______2_true__Head_base(param_1);
 return param_1;
}

// Function: std__Head_base_1u_test_cpp_smart_ptr______2_true__Head_base @ 0x12160
__2 * std__Head_base_1u_test_cpp_smart_ptr______2_true__Head_base(__2 *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr()_$_2__M_ptr @ 0x12178
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
 return;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr()_$_2_get_deleter @ 0x1219c
unsigned int __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: test_cpp_smart_ptr()_$_2_operator() @ 0x121d0
void __thiscall test_cpp_smart_ptr()_$_2_operator__(__2 *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_get_0u_int__test_cpp_smart_ptr()_$_2 @ 0x1221c
type * std_get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0u_int__test_cpp_smart_ptr()_$_2 @ 0x12240
int ** std___get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head @ 0x12264
void std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr()_$_2__M_deleter @ 0x12288
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 get_1u_int__test_cpp_smart_ptr______2_((tuple *)this);
 return;
}

// Function: std_get_1u_int__test_cpp_smart_ptr()_$_2 @ 0x122ac
type * std_get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 __2 *p_Var1;
 p_Var1 = __get_helper_1u_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std___get_helper_1u_test_cpp_smart_ptr()_$_2 @ 0x122d0
__2 * std___get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)_Tuple_impl_1u_test_cpp_smart_ptr______2__M_head(param_1);
 return p_Var1;
}

// Function: std__Tuple_impl_1u_test_cpp_smart_ptr()_$_2__M_head @ 0x122f4
void std__Tuple_impl_1u_test_cpp_smart_ptr______2__M_head(_Tuple_impl *param_1)
{
 _Head_base_1u_test_cpp_smart_ptr______2_true__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_1u_test_cpp_smart_ptr()_$_2,true__M_head @ 0x12318
_Head_base * std__Head_base_1u_test_cpp_smart_ptr______2_true__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr()_$_2_get @ 0x1232c
unsigned int __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2_get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr()_$_2__M_ptr @ 0x12360
unsigned int __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *puVar1;
}

// Function: std_get_0u,int*,test_cpp_smart_ptr()_$_2 @ 0x12388
type * std_get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0u,int*,test_cpp_smart_ptr()_$_2 @ 0x123ac
int ** std___get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head @ 0x123d0
void std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: SimpleClass_SimpleClass @ 0x123f4
void SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass_setValue @ 0x12444
void SimpleClass_setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass_getValue @ 0x12464
unsigned int SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass_compute @ 0x1247c
int SimpleClass_compute(SimpleClass *this,int param_1)
{
 size_t sVar1;
 int iVar2;
 iVar2 = *(int *)this;
 sVar1 = strlen((char *)(this + 4));
 return iVar2 * param_1 + sVar1;
}

// Function: SimpleClass_getClassID @ 0x124c4
unsigned int SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x124d0
LifecycleClass * LifecycleClass_LifecycleClass(LifecycleClass *this,uint param_1)
{
 uint uVar1;
 void *pvVar2;
 int iVar3;
 uint local_18;
 *(uint *)(this + 4) = param_1;
 iVar3 = param_1 - (param_1 & 0x3fffffff);
 if (iVar3 != 0) {
 iVar3 = 1;
 }
 uVar1 = param_1 << 2;
 if (iVar3 != 0) {
 uVar1 = 0xffffffff;
 }
 pvVar2 = operator_new__(uVar1);
 *(void **)this = pvVar2;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(uint *)(*(int *)this + local_18 * 4) = local_18 * 10;
 }
 instance_count = instance_count + 1;
 return this;
}

// Function: LifecycleClass_getData @ 0x1259c
unsigned int LifecycleClass_getData(LifecycleClass *this,uint param_1)
{
 unsigned int local_10;
 if (param_1 < *(uint *)(this + 4)) {
 local_10 = *(unsigned int *)(*(int *)this + param_1 * 4);
 }
 else {
 local_10 = 0xffffffff;
 }
 return local_10;
}

// Function: LifecycleClass_getInstanceCount @ 0x125f4
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: LifecycleClass_~LifecycleClass @ 0x12604
LifecycleClass * LifecycleClass__LifecycleClass(LifecycleClass *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return this;
}

// Function: Base_Base @ 0x1266c
void __thiscall Base_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00024c48;
 return;
}

// Function: Derived_Derived @ 0x12694
void __thiscall Derived_Derived(Derived *this,int param_1)
{
 Base_Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_00024c68;
 *(int *)(this + 4) = param_1;
 return;
}

// Function: Base_virtual_func @ 0x126e0
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x126fc
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived_~Derived @ 0x12720
Derived * __thiscall Derived__Derived(Derived *this)
{
 Base__Base((Base *)this);
 return this;
}

// Function: Base_~Base @ 0x1274c
Base * __thiscall Base__Base(Base *this)
{
 return this;
}

// Function: MultiDerived_MultiDerived @ 0x12760
void __thiscall MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 8));
 *(char ***)this = &PTR_funcA_00024c8c;
 *(char ***)(this + 8) = &PTR_funcB_00024ca4;
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x127b4
MultiDerived * __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 BaseB__BaseB((BaseB *)(this + 8));
 BaseA__BaseA((BaseA *)this);
 return this;
}

// Function: DiamondDerived_DiamondDerived @ 0x127ec
void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 8));
 *(char ***)this = &PTR_func_00024d14;
 *(char ***)(this + 0x10) = &PTR_func_00024d48;
 *(char ***)(this + 8) = &PTR_func_00024d2c;
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x12870
DiamondDerived * __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 return this;
}

// Function: Point_Point @ 0x128b4
void __thiscall Point_Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point_operator+ @ 0x128e0
void __thiscall Point_operator_(Point *this,Point *param_1)
{
 Point_Point(this,*(int *)param_1 + *(int *)this,*(int *)(param_1 + 4) + *(int *)(this + 4));
 return;
}

// Function: Point_operator== @ 0x12924
bool __thiscall Point_operator__(Point *this,Point *param_1)
{
 bool bVar1;
 bVar1 = false;
 if (*(int *)this == *(int *)param_1) {
 bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return bVar1;
}

// Function: Point_operator++ @ 0x1298c
void __thiscall Point_operator__(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}

// Function: template_max_int @ 0x129b8
int template_max_int_(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}

// Function: template_max_double @ 0x129fc
double template_max_double_(double param_1,double param_2)
{
 if (param_1 > param_2) {
 return param_1;
 }
 return param_2;
}

// Function: template_swap_int @ 0x12a74
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x12ab0
void __thiscall Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x12acc
void __thiscall Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x12b14
unsigned int __thiscall Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int local_4;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_4 = 0;
 }
 else {
 local_4 = *(unsigned int *)(this + param_1 * 4);
 }
 return local_4;
}

// Function: Container_int_getSize @ 0x12b7c
unsigned int __thiscall Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Container @ 0x12b94
void __thiscall Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x12bb0
void Container_double_push(double param_1)
{
 /* stub implementation */
 return;
}

// Function: Container_double_get @ 0x12c04
unsigned long long __thiscall Container_double_get(Container_double_ *this,int param_1)
{
 unsigned int local_8;
 unsigned int local_4;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_4 = 0;
 local_8 = 0;
 }
 else {
 local_8 = *(unsigned int *)(this + param_1 * 8);
 local_4 = *(unsigned int *)((int)(this + param_1 * 8) + 4);
 }
 return CONCAT44(local_4,local_8);
}

// Function: Container_double_getSize @ 0x12c7c
unsigned int __thiscall Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std_unique_ptr_int_std__default_delete_int_unique_ptr_std__default_delete_int__void_ @ 0x12c94
unique_ptr_int_std__default_delete_int__ * __thiscall
std_unique_ptr_int_std__default_delete_int_unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return this;
}

// Function: std_unique_ptr_int_std__default_delete_int_operator_ @ 0x12cd0
void __thiscall
std_unique_ptr_int_std__default_delete_int_operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 get(this);
 return;
}

// Function: std_move_std_unique_ptr_int,std_default_delete_int& @ 0x12d04
type * std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std_unique_ptr_int_std__default_delete_int_unique_ptr @ 0x12d18
unique_ptr_int_std__default_delete_int__ * __thiscall
std_unique_ptr_int_std__default_delete_int_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return this;
}

// Function: std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_ @ 0x12d4c
unique_ptr_int___std__default_delete_int____ * __thiscall
std_unique_ptr_int___std__default_delete_int____
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return this;
}

// Function: std_unique_ptr_int___std__default_delete_int____operator__ @ 0x12d88
int __thiscall
std_unique_ptr_int___std__default_delete_int____operator__
 (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
 int iVar1;
 iVar1 = get(this);
 return iVar1 + param_1 * 4;
}

// Function: std_unique_ptr_int___std__default_delete_int____unique_ptr @ 0x12dc8
unique_ptr_int___std__default_delete_int____ * __thiscall
std_unique_ptr_int___std__default_delete_int____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int *piVar1;
 unsigned int uVar2;
 piVar1 = (int *)__uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*piVar1 != 0) {
 uVar2 = get_deleter(this);
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (uVar2,*piVar1);
 }
 *piVar1 = 0;
 return this;
}

// Function: std_unique_ptr_int_std__default_delete_int__unique_ptr @ 0x12e3c
unique_ptr_int_std__default_delete_int__ * __thiscall
std_unique_ptr_int_std__default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)get_deleter(this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 std_default_delete_int_operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x12ec0
void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00024ec4;
 return;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x12f00
void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00024eec;
 return;
}

// Function: std_type_info_operator== @ 0x12f40
bool __thiscall std_type_info_operator__(type_info *this,type_info *param_1)
{
 int iVar1;
 bool bVar2;
 bVar2 = true;
 if ((*(int *)(this + 4) != *(int *)(param_1 + 4)) && (bVar2 = false, **(char **)(this + 4) != '*')
 ) {
 iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
 bVar2 = iVar1 == 0;
 }
 return bVar2;
}

// Function: RTTIDerivedA_derivedA_data @ 0x12fe0
unsigned int RTTIDerivedA_derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_derivedB_data @ 0x12ff4
unsigned int RTTIDerivedB_derivedB_data(void)
{
 return 200;
}

// Function: std_type_info_name @ 0x13008
int __thiscall std_type_info_name(type_info *this)
{
 int local_c;
 if (**(char **)(this + 4) == '*') {
 local_c = *(int *)(this + 4) + 1;
 }
 else {
 local_c = *(int *)(this + 4);
 }
 return local_c;
}

// Function: Base_getName @ 0x1305c
char * Base_getName(void)
{
 return &DAT_0001439d;
}

// Function: Base_~Base @ 0x13078
void __thiscall Base__Base(Base *this)
{
 _Base(this);
 operator_delete(this);
 return;
}

// Function: Derived_getName @ 0x130a8
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived_~Derived @ 0x130c4
void __thiscall Derived__Derived(Derived *this)
{
 _Derived(this);
 operator_delete(this);
 return;
}

// Function: BaseA_BaseA @ 0x130f4
void __thiscall BaseA_BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_00024ce8;
 return;
}

// Function: BaseB_BaseB @ 0x1311c
void __thiscall BaseB_BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_00024cfc;
 return;
}

// Function: MultiDerived_funcA @ 0x13144
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_~MultiDerived @ 0x13158
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this);
 operator_delete(this);
 return;
}

// Function: MultiDerived_funcB @ 0x13188
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x1319c
void __thiscall MultiDerived_funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x131b4
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: MultiDerived_~MultiDerived @ 0x131d0
void __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: BaseA_funcA @ 0x131e8
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA_~BaseA @ 0x131fc
BaseA * __thiscall BaseA__BaseA(BaseA *this)
{
 return this;
}

// Function: BaseA_Destructor @ 0x13210
void __thiscall BaseA_Destructor(BaseA *this)
{
 _BaseA(this);
 operator_delete(this);
 return;
}

// Function: BaseB_funcB @ 0x13240
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB_~BaseB @ 0x13254
BaseB * __thiscall BaseB__BaseB(BaseB *this)
{
 return this;
}

// Function: BaseB_Destructor @ 0x13268
void __thiscall BaseB_Destructor(BaseB *this)
{
 _BaseB(this);
 operator_delete(this);
 return;
}

// Function: VirtualBase_VirtualBase @ 0x13298
void __thiscall VirtualBase_VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00024e38;
 return;
}

// Function: MiddleA_MiddleA @ 0x132c0
void __thiscall MiddleA_MiddleA(MiddleA *this)
{
 /* stub implementation */
 return;
}

// Function: MiddleB_MiddleB @ 0x132f4
void __thiscall MiddleB_MiddleB(MiddleB *this)
{
 /* stub implementation */
 return;
}

// Function: MiddleA_func @ 0x13328
int __thiscall MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA_~MiddleA @ 0x13350
MiddleA * __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 8));
 return this;
}

// Function: MiddleA_~MiddleA @ 0x13394
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_func @ 0x133c4
void __thiscall MiddleA_func(MiddleA *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleA_~MiddleA @ 0x133e4
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleA_~MiddleA @ 0x13408
void __thiscall MiddleA__MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB_func @ 0x13428
int __thiscall MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB_~MiddleB @ 0x13450
MiddleB * __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 8));
 return this;
}

// Function: MiddleB_~MiddleB @ 0x13494
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this);
 operator_delete(this);
 return;
}

// Function: MiddleB_func @ 0x134c4
void __thiscall MiddleB_func(MiddleB *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleB_~MiddleB @ 0x134e4
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB_~MiddleB @ 0x13508
void __thiscall MiddleB__MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived_func @ 0x13528
int __thiscall DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13550
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 operator_delete(this);
 return;
}

// Function: DiamondDerived_func @ 0x13580
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + -8);
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13598
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x135b4
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived_func @ 0x135cc
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x135ec
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived_~DiamondDerived @ 0x13610
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase_func @ 0x13630
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase_~VirtualBase @ 0x13644
VirtualBase * __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 return this;
}

// Function: VirtualBase_~VirtualBase @ 0x13658
void __thiscall VirtualBase__VirtualBase(VirtualBase *this)
{
 _VirtualBase(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_~MiddleA @ 0x13688
MiddleA * __thiscall MiddleA__MiddleA(MiddleA *this)
{
 return this;
}

// Function: MiddleB_~MiddleB @ 0x136a0
MiddleB * __thiscall MiddleB__MiddleB(MiddleB *this)
{
 return this;
}

// Function: DiamondDerived_~DiamondDerived @ 0x136b8
DiamondDerived * __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 MiddleB__MiddleB((MiddleB *)(this + 8));
 MiddleA__MiddleA((MiddleA *)this);
 return this;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data @ 0x13708
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return this;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x1373c
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 unsigned int *puVar1;
 move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple_int__std__default_delete_int__tuple((tuple *)this);
 puVar1 = (unsigned int *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar1 = 0;
 return this;
}

// Function: std_move_std_tuple_int*,std_default_delete_int& @ 0x1379c
type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std_tuple_int__std__default_delete_int__tuple @ 0x137b0
tuple * std_tuple_int__std__default_delete_int__tuple(tuple *param_1)
{
 _Tuple_impl_0u_int__std__default_delete_int__Tuple_impl((_Tuple_impl *)param_1);
 return param_1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_ptr @ 0x137e4
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 get_0u_int__std__default_delete_int__((tuple *)this);
 return;
}

// Function: __clang_call_terminate @ 0x13808
void __clang_call_terminate(void)
{
 __cxa_begin_catch();
 std_terminate();
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int__Tuple_impl @ 0x13810
void std__Tuple_impl_0u_int__std__default_delete_int__Tuple_impl(_Tuple_impl *param_1)
{
 _Tuple_impl_1u_std__default_delete_int__Tuple_impl(param_1);
 *(unsigned int *)param_1 = 0;
 return;
}

// Function: std__Tuple_impl_1u_std__default_delete_int__Tuple_impl @ 0x13850
_Tuple_impl * std__Tuple_impl_1u_std__default_delete_int__Tuple_impl(_Tuple_impl *param_1)
{
 return param_1;
}

// Function: std_get_0u_int__std__default_delete_int__ @ 0x13868
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0u_int__std__default_delete_int__ @ 0x1388c
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int__M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int__M_head @ 0x138b0
void std__Tuple_impl_0u_int__std__default_delete_int__M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_0u_int__false__M_head @ 0x138d4
_Head_base * std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIBase_RTTIBase @ 0x138e8
void __thiscall RTTIBase_RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00024ed8;
 return;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x13910
RTTIDerivedA * __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return this;
}

// Function: RTTIDerivedA_~RTTIDerivedA @ 0x1393c
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 _RTTIDerivedA(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x1396c
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_~RTTIBase @ 0x13980
RTTIBase * __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 return this;
}

// Function: RTTIBase_~RTTIBase @ 0x13994
void __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 _RTTIBase(this);
 operator_delete(this);
 return;
}

// Function: RTTIBase_getType @ 0x139c4
unsigned int RTTIBase_getType(void)
{
 return 0;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x139d8
RTTIDerivedB * __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return this;
}

// Function: RTTIDerivedB_~RTTIDerivedB @ 0x13a04
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 _RTTIDerivedB(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x13a34
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl @ 0x13a48
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return this;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl @ 0x13a7c
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 tuple_int__std__default_delete_int__tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return this;
}

// Function: std_tuple_int__std__default_delete_int__tuple_true_true_ @ 0x13ac8
tuple_int__std__default_delete_int__ * __thiscall
std_tuple_int__std__default_delete_int__tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 _Tuple_impl_0u_int__std__default_delete_int__Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
 return this;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int__Tuple_impl @ 0x13afc
_Tuple_impl_0u_int__std__default_delete_int__ * __thiscall
std__Tuple_impl_0u_int__std__default_delete_int__Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
 _Tuple_impl_1u_std__default_delete_int__Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int__ *)this);
 _Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)this);
 return this;
}

// Function: std__Tuple_impl_1u_std__default_delete_int__Tuple_impl @ 0x13b30
_Tuple_impl_1u_std__default_delete_int__ * __thiscall
std__Tuple_impl_1u_std__default_delete_int__Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int__ *this)
{
 _Head_base_1u_std__default_delete_int__true__Head_base
 ((_Head_base_1u_std__default_delete_int__true_ *)this);
 return this;
}

// Function: std__Head_base_0u_int__false__Head_base @ 0x13b5c
void __thiscall std__Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *this)
{
 *(unsigned int *)this = 0;
 return;
}

// Function: std__Head_base_1u_std__default_delete_int__true__Head_base @ 0x13b78
_Head_base_1u_std__default_delete_int__true_ * __thiscall
std__Head_base_1u_std__default_delete_int__true__Head_base
 (_Head_base_1u_std__default_delete_int__true_ *this)
{
 return this;
}

// Function: std_unique_ptr_int_std__default_delete_int__get_deleter @ 0x13b8c
unsigned int __thiscall
std_unique_ptr_int_std__default_delete_int__get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int____M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_default_delete_int_operator() @ 0x13bc0
void __thiscall std_default_delete_int_operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_move_int___ @ 0x13c00
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_deleter @ 0x13c14
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 get_1u_int__std__default_delete_int__((tuple *)this);
 return;
}

// Function: std_get_1u_int__std__default_delete_int__ @ 0x13c38
type * std_get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1u_std__default_delete_int__ @ 0x13c5c
default_delete * std___get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std__default_delete_int__M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl_1u_std__default_delete_int__M_head @ 0x13c80
void std__Tuple_impl_1u_std__default_delete_int__M_head(_Tuple_impl *param_1)
{
 _Head_base_1u_std__default_delete_int__true__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_1u_std__default_delete_int__true__M_head @ 0x13ca4
_Head_base * std__Head_base_1u_std__default_delete_int__true__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_std__default_delete_int__get @ 0x13cb8
unsigned int __thiscall
std_unique_ptr_int_std__default_delete_int__get(unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_ptr @ 0x13cec
unsigned int __thiscall
std___uniq_ptr_impl_int_std__default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_get_0u_int__std__default_delete_int__ @ 0x13d14
type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0u_int__std__default_delete_int__ @ 0x13d38
int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int__M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int__M_head @ 0x13d5c
void std__Tuple_impl_0u_int__std__default_delete_int__M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_0u_int__false__M_head @ 0x13d80
_Head_base * std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl @ 0x13d94
__uniq_ptr_data_int_std__default_delete_int____true_true_ * __thiscall
std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return this;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl @ 0x13dc8
__uniq_ptr_impl_int_std__default_delete_int____ * __thiscall
std___uniq_ptr_impl_int_std__default_delete_int_______uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 tuple_int__std__default_delete_int____tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return this;
}

// Function: std_tuple_int__std__default_delete_int____tuple_true_true_ @ 0x13e14
tuple_int__std__default_delete_int____ * __thiscall
std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 _Tuple_impl_0u_int__std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
 return this;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______M_ptr @ 0x13e48
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 get_0u_int__std__default_delete_int____((tuple *)this);
 return;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int____Tuple_impl @ 0x13e6c
_Tuple_impl_0u_int__std__default_delete_int____ * __thiscall
std__Tuple_impl_0u_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
 _Tuple_impl_1u_std__default_delete_int____Tuple_impl
 ((_Tuple_impl_1u_std__default_delete_int____ *)this);
 _Head_base_0u_int__false__Head_base((_Head_base_0u_int__false_ *)this);
 return this;
}

// Function: std__Tuple_impl_1u_std__default_delete_int____Tuple_impl @ 0x13ea0
_Tuple_impl_1u_std__default_delete_int____ * __thiscall
std__Tuple_impl_1u_std__default_delete_int____Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int____ *this)
{
 _Head_base_1u_std__default_delete_int____true__Head_base
 ((_Head_base_1u_std__default_delete_int____true_ *)this);
 return this;
}

// Function: std__Head_base_1u_std__default_delete_int____true__Head_base @ 0x13ecc
_Head_base_1u_std__default_delete_int____true_ * __thiscall
std__Head_base_1u_std__default_delete_int____true__Head_base
 (_Head_base_1u_std__default_delete_int____true_ *this)
{
 return this;
}

// Function: std_get_0u_int__std__default_delete_int____ @ 0x13ee0
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0u_int__std__default_delete_int____ @ 0x13f04
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int____M_head @ 0x13f28
void std__Tuple_impl_0u_int__std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std_unique_ptr_int___std__default_delete_int____get_deleter @ 0x13f4c
unsigned int __thiscall
std_unique_ptr_int___std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int______M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x13f80
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (unsigned int param_1,void *param_2)
{
 if (param_2 != (void *)0x0) {
 operator_delete__(param_2);
 }
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______M_deleter @ 0x13fc0
void __thiscall
std___uniq_ptr_impl_int_std__default_delete_int______M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 get_1u_int__std__default_delete_int____((tuple *)this);
 return;
}

// Function: std_get_1u_int__std__default_delete_int____ @ 0x13fe4
type * std_get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1u_std__default_delete_int____ @ 0x14008
default_delete * std___get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std__default_delete_int____M_head(param_1);
 return pdVar1;
}

// Function: std__Tuple_impl_1u_std__default_delete_int____M_head @ 0x1402c
void std__Tuple_impl_1u_std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 _Head_base_1u_std__default_delete_int____true__M_head((_Head_base *)param_1);
 return;
}

// Function: std__Head_base_1u_std__default_delete_int____true__M_head @ 0x14050
_Head_base * std__Head_base_1u_std__default_delete_int____true__M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int___std__default_delete_int____get @ 0x14064
unsigned int __thiscall
std_unique_ptr_int___std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned int uVar1;
 uVar1 = __uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int______M_ptr @ 0x14098
unsigned int __thiscall
std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)get_0u_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std_get_0u_int__std__default_delete_int____ @ 0x140c0
type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0u_int__std__default_delete_int____ @ 0x140e4
int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std__Tuple_impl_0u_int__std__default_delete_int____M_head @ 0x14108
void std__Tuple_impl_0u_int__std__default_delete_int____M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false__M_head((_Head_base *)param_1);
 return;
}

// Function: std_forward_int___ @ 0x1412c
int ** std_forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std__Head_base_0u_int__false__Head_base_int___ @ 0x14140
void __thiscall
std__Head_base_0u_int__false__Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

// Function: _fini @ 0x14180
void _fini(void)
{
 return;
}

/* Missing helper function implementations for tuple and smart pointer operations */

__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ * __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 return this;
}

tuple_int__test_cpp_smart_ptr______2_ * __thiscall
std_tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 return this;
}

_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ * __thiscall
std__Tuple_impl_0u_int__test_cpp_smart_ptr______2__Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 return this;
}

void _Tuple_impl_1u_test_cpp_smart_ptr______2__Tuple_impl(__2 *param_1)
{
 return;
}

void _Head_base_1u_test_cpp_smart_ptr______2_true__Head_base(__2 *param_1)
{
 return;
}

type * __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 return (type *)this;
}

unsigned int __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr______2__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 return 0;
}

type * std_get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 return (type *)param_1;
}

type * std_get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 return (type *)param_1;
}

type * get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 return (type *)param_1;
}

type * get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 return (type *)param_1;
}

void std__Head_base_1u_std__default_delete_int__true__M_head(_Head_base *param_1)
{
 return;
}

void std__Head_base_1u_std__default_delete_int____true__M_head(_Head_base *param_1)
{
 return;
}

void std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return;
}

void std__Head_base_1u_std__default_delete_int__true__Head_base(_Head_base_1u_std__default_delete_int__true_ *this)
{
 return;
}

void std__Head_base_1u_std__default_delete_int____true__Head_base(_Head_base_1u_std__default_delete_int____true_ *this)
{
 return;
}

void std__Head_base_0u_int__false__Head_base(_Head_base_0u_int__false_ *this)
{
 return;
}

_Tuple_impl_0u_int__std__default_delete_int__ * __thiscall
std__Tuple_impl_0u_int__std_default_delete_int__Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
 return this;
}

_Tuple_impl_1u_std__default_delete_int__ * __thiscall
std__Tuple_impl_1u_std_default_delete_int__Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int__ *this)
{
 return this;
}

_Tuple_impl_0u_int__std__default_delete_int____ * __thiscall
std__Tuple_impl_0u_int__std_default_delete_int____Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
 return this;
}

_Tuple_impl_1u_std__default_delete_int____ * __thiscall
std__Tuple_impl_1u_std_default_delete_int____Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int____ *this)
{
 return this;
}

void std__Tuple_impl_0u_int__std_default_delete_int__Tuple_impl(_Tuple_impl *param_1)
{
 return;
}

void std__Tuple_impl_1u_std_default_delete_int__Tuple_impl(_Tuple_impl *param_1)
{
 return;
}

type * std_get_0u_int__std__default_delete_int__(tuple *param_1)
{
 return (type *)param_1;
}

type * std_get_1u_int__std__default_delete_int__(tuple *param_1)
{
 return (type *)param_1;
}

int ** std___get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 return (int **)param_1;
}

default_delete * std___get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 return (default_delete *)param_1;
}

void std__Tuple_impl_0u_int__std_default_delete_int__M_head(_Tuple_impl *param_1)
{
 return;
}

void std__Tuple_impl_1u_std_default_delete_int__M_head(_Tuple_impl *param_1)
{
 return;
}

type * get_0u_int__std__default_delete_int__(tuple *param_1)
{
    return (type *)param_1;
}

type * get_1u_int__std__default_delete_int__(tuple *param_1)
{
    return (type *)param_1;
}

type * std_get_0u_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

type * std_get_1u_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

int ** std___get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 return (int **)param_1;
}

default_delete * std___get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 return (default_delete *)param_1;
}

void std__Tuple_impl_0u_int__std_default_delete_int____M_head(_Tuple_impl *param_1)
{
 return;
}

void std__Tuple_impl_1u_std_default_delete_int____M_head(_Tuple_impl *param_1)
{
 return;
}

type * get_0u_int__std__default_delete_int____(tuple *param_1)
{
    return (type *)param_1;
}

type * get_1u_int__std__default_delete_int____(tuple *param_1)
{
    return (type *)param_1;
}

tuple_int__std__default_delete_int__ * __thiscall
std_tuple_int__std_default_delete_int__tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 return this;
}

tuple_int__std__default_delete_int____ * __thiscall
std_tuple_int__std_default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 return this;
}

tuple * std_tuple_int__std_default_delete_int__tuple(tuple *param_1)
{
 return param_1;
}

type * std_move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 return;
}

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int____M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 return;
}

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 return;
}

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int____M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 return;
}

void _Head_base_0u_int__false__Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

void std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return;
}

_Head_base * std__Head_base_0u_int__false__M_head(_Head_base *param_1)
{
 return param_1;
}

