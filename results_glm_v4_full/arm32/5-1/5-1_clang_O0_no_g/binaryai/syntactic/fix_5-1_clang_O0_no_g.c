/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;
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
typedef unsigned int uint;
typedef unsigned int bool;
#define true 1
#define false 0

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Utility macros */
#define CONCAT44(high, low) ((uint32_t)(((uint32_t)(high) << 16) | ((uint32_t)(low) & 0xFFFF)))

/* Forward declarations */
extern int call_weak_fn(void);
extern void terminate(void);
extern void abort(void);
extern void __cxa_begin_catch(void);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type, void *dest);
extern void __cxa_atexit(void (*func)(void *), void *obj, void *dso);
extern void __cxa_finalize(void *dso);
extern void __gmon_start__(void);
extern void __cxa_bad_typeid(void);
extern void __aeabi_d2iz(void);
extern void __aeabi_dcmpgt(void);
extern void __dynamic_cast(void);
extern void __gxx_personality_v0(void);
extern void *operator_new__(size_t size);
extern void operator_delete__(void *ptr);
extern void ios_base_Init_Init(Init *init);
extern const char *type_info_name(type_info *this);
extern bool type_info_operator_equals(type_info *this, type_info *other);
extern void *unique_ptr_operator_dereference(unique_ptr *this);
extern int **forward_int___(int **param);
extern __2 *forward_test_cpp_smart_ptr______2_const__(__2 *param);
extern int **std_forward_int___(int **param);
extern __2 *std_forward_test_cpp_smart_ptr______2_const__(__2 *param);
extern void *_M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern void *_M_ptr_array(__uniq_ptr_impl_int_std__default_delete_int____ *this);
extern int **std__get_0u_int__std__default_delete_int__(tuple *param);
extern int **std__get_0u_int__std__default_delete_int____(tuple *param);
extern int **std__get_0u_int__test_cpp_smart_ptr______2_(tuple *param);
extern default_delete *std__get_1u_int__std__default_delete_int__(tuple *param);
extern default_delete *std__get_1u_int__std__default_delete_int____(tuple *param);
extern __2 *std__get_1u_int__test_cpp_smart_ptr______2_(tuple *param);
extern int **__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param);
extern int **__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param);
extern int **__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param);
extern default_delete *__get_helper_1u_std__default_delete_int__(_Tuple_impl *param);
extern default_delete *__get_helper_1u_std__default_delete_int____(_Tuple_impl *param);
extern __2 *__get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param);
extern unique_ptr_int_std__default_delete_int__ *move_std__unique_ptr_int_std__default_delete_int____(unique_ptr_int_std__default_delete_int__ *param);
extern tuple *move_std__tuple_int__std__default_delete_int____(tuple *param);
extern int **move_int___(int **param);
extern void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(unsigned int param, void *param_2);
extern void _M_head_int___(_Head_base *param);
extern void _M_head_int__std__default_delete_int__(_Head_base *param);
extern void _M_head_int__std__default_delete_int____(_Head_base *param);
extern void _M_head_int__test_cpp_smart_ptr______2_(_Head_base *param);
extern void _M_head_test_cpp_smart_ptr______2_(_Head_base *param);
extern void *operator_new(uint param);
extern void operator_delete(void *param);
extern void __libc_start_main(int (*main)(void), int argc, char **argv, int (*init)(void), void (*fini)(void), void (*rtld_fini)(void));
extern void __cxa_rethrow(void);
extern void __cxx_global_var_init(void);
extern void _GLOBAL__sub_I_5_1_cpp(void);
extern void _start(unsigned int param_1, unsigned int param_2);
extern void call_weak_fn(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern int test_cpp_member_func(void);
extern void SimpleClass_SimpleClass(SimpleClass *this, int param_1, char *param_2);
extern void SimpleClass_setValue(SimpleClass *this, int param_1);
extern unsigned int SimpleClass_getValue(SimpleClass *this);
extern int SimpleClass_compute(SimpleClass *this, int param_1);
extern unsigned int SimpleClass_getClassID(void);
extern int test_cpp_constructor(void);
extern LifecycleClass *LifecycleClass_LifecycleClass(LifecycleClass *this, uint param_1);
extern unsigned int LifecycleClass_getData(LifecycleClass *this, uint param_1);
extern unsigned int LifecycleClass_getInstanceCount(void);
extern LifecycleClass *LifecycleClass__LifecycleClass(LifecycleClass *this);
extern void call_virtual_func(Base *param_1, int param_2);
extern int test_cpp_virtual_func(void);
extern void Base_Base(Base *this);
extern void Derived_Derived(Derived *this, int param_1);
extern int Base_virtual_func(Base *this, int param_1);
extern int Derived_virtual_func(Derived *this, int param_1);
extern Derived *Derived__Derived(Derived *this);
extern Base *Base__Base(Base *this);
extern int test_cpp_multiple_inheritance(void);
extern void MultiDerived_MultiDerived(MultiDerived *this);
extern MultiDerived *MultiDerived__MultiDerived(MultiDerived *this);
extern int test_cpp_diamond_inheritance(void);
extern void DiamondDerived_DiamondDerived(DiamondDerived *this);
extern DiamondDerived *DiamondDerived__DiamondDerived(DiamondDerived *this);
extern int test_cpp_operator_overload(void);
extern void Point_Point(Point *this, int param_1, int param_2);
extern void Point_operator_plus(Point *this, Point *param_1);
extern bool Point_operator_equals(Point *this, Point *param_1);
extern void Point_operator_increment(Point *this);
extern int test_cpp_template_func(void);
extern int template_max_int_(int param_1, int param_2);
extern double template_max_double_(double param_1, double param_2);
extern void template_swap_int_(int *param_1, int *param_2);
extern int test_cpp_template_class(void);
extern void Container_int__Container(Container_int_ *this);
extern void Container_int__push(Container_int_ *this, int param_1);
extern unsigned int Container_int__get(Container_int_ *this, int param_1);
extern unsigned int Container_int__getSize(Container_int_ *this);
extern void Container_double__Container(Container_double_ *this);
extern void Container_double_push(Container_double_ *this, double param_1);
extern unsigned long long Container_double__get(Container_double_ *this, int param_1);
extern unsigned int Container_double__getSize(Container_double_ *this);
extern int test_cpp_lambda(void);
extern int test_cpp_lambda___1__operator__(__1 *this, int param_1);
extern int test_cpp_lambda___0__operator__(__0 *this, int param_1, int param_2);
extern void test_cpp_exception(void);
extern int test_cpp_smart_ptr(void);
extern unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall std__unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr_test_cpp_smart_ptr______2_void_(unique_ptr_int_test_cpp_smart_ptr______2_ *this, int *param_1, __2 *param_2);
extern unique_ptr_int_test_cpp_smart_ptr______2_ *std__unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
extern void __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false___uniq_ptr_impl_test_cpp_smart_ptr______2_const__(__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this, int *param_1, __2 *param_2);
extern __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this, int *param_1, __2 *param_2);
extern __2 *std_forward_test_cpp_smart_ptr______2_const__(type *param);
extern tuple_int__test_cpp_smart_ptr______2_ *std__tuple_int___test_cpp_smart_ptr______2___tuple_int___test_cpp_smart_ptr______2_const__true_(tuple_int__test_cpp_smart_ptr______2_ *this, int **param_1, __2 *param_2);
extern _Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_(_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this, int **param_1, __2 *param_2);
extern __2 *std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl(__2 *param_1);
extern __2 *std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base(__2 *param_1);
extern void std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
extern unsigned int std__unique_ptr_int_test_cpp_smart_ptr______2___get_deleter(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
extern void test_cpp_smart_ptr______2___operator__(__2 *this, int *param_1);
extern int **std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *param_1);
extern __2 *std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
extern __2 *std__Tuple_impl_1u_test_cpp_smart_ptr______2___M_head(_Tuple_impl_1u_test_cpp_smart_ptr______2_ *param_1);
extern _Head_base *std__Head_base_1u_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1);
extern unsigned int std__unique_ptr_int_test_cpp_smart_ptr______2___get(unique_ptr_int_test_cpp_smart_ptr______2_ *this);
extern unsigned int std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
extern void _M_head_int__test_cpp_smart_ptr______2_(_Head_base *param_1);
extern int test_cpp_rtti(void);
extern void test_cpp_oo_features(void);
extern int main(void);
extern unique_ptr_int_std__default_delete_int__ *std__unique_ptr_int_std__default_delete_int___unique_ptr(unique_ptr_int_std__default_delete_int__ *this, int *param_1);
extern unique_ptr_int_std__default_delete_int__ *std__unique_ptr_int_std__default_delete_int___unique_ptr_1(unique_ptr_int_std__default_delete_int__ *this, unique_ptr_int_std__default_delete_int__ *param_1);
extern unique_ptr_int_std__default_delete_int__ *std__move_std__unique_ptr_int_std__default_delete_int____(unique_ptr_int_std__default_delete_int__ *param_1);
extern unique_ptr_int___std__default_delete_int____ *std__unique_ptr_int____std__default_delete_int______unique_ptr_int__std__default_delete_int____void_bool_(unique_ptr_int___std__default_delete_int____ *this, int *param_1);
extern int std__unique_ptr_int____std__default_delete_int______operator_brackets(unique_ptr_int___std__default_delete_int____ *this, uint param_1);
extern unique_ptr_int___std__default_delete_int____ *std__unique_ptr_int____std__default_delete_int______unique_ptr(unique_ptr_int___std__default_delete_int____ *this);
extern unique_ptr_int_std__default_delete_int__ *std__unique_ptr_int_std__default_delete_int___unique_ptr_2(unique_ptr_int_std__default_delete_int__ *this);
extern void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
extern bool std__type_info__operator__(type_info *this, type_info *param_1);
extern unsigned int RTTIDerivedA_derivedA_data(void);
extern unsigned int RTTIDerivedB_derivedB_data(void);
extern char *Base_getName(void);
extern void Base__Base_1(Base *this);
extern char *Derived_getName(void);
extern void Derived__Derived_1(Derived *this);
extern void BaseA_BaseA(BaseA *this);
extern void BaseB_BaseB(BaseB *this);
extern unsigned int MultiDerived_funcA(void);
extern void MultiDerived__MultiDerived_1(MultiDerived *this);
extern unsigned int MultiDerived_funcB(void);
extern void MultiDerived_funcB_1(MultiDerived *this);
extern void MultiDerived__MultiDerived_2(MultiDerived *this);
extern unsigned int BaseA_funcA(void);
extern BaseA *BaseA__BaseA_1(BaseA *this);
extern void BaseA__BaseA_2(BaseA *this);
extern unsigned int BaseB_funcB(void);
extern BaseB *BaseB__BaseB_1(BaseB *this);
extern void BaseB__BaseB_2(BaseB *this);
extern void VirtualBase_VirtualBase(VirtualBase *this);
extern void MiddleA_MiddleA(MiddleA *this);
extern void MiddleB_MiddleB(MiddleB *this);
extern int MiddleA_func(MiddleA *this);
extern MiddleA *MiddleA__MiddleA_1(MiddleA *this);
extern void MiddleA__MiddleA_2(MiddleA *this);
extern void MiddleA__MiddleA_3(MiddleA *this);
extern void MiddleA__MiddleA_4(MiddleA *this);
extern int MiddleB_func(MiddleB *this);
extern MiddleB *MiddleB__MiddleB_1(MiddleB *this);
extern void MiddleB__MiddleB_2(MiddleB *this);
extern void MiddleB__MiddleB_3(MiddleB *this);
extern void MiddleB__MiddleB_4(MiddleB *this);
extern int DiamondDerived_func(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_1(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_2(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_3(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_4(DiamondDerived *this);
extern unsigned int VirtualBase_func(void);
extern VirtualBase *VirtualBase__VirtualBase_1(VirtualBase *this);
extern void VirtualBase__VirtualBase_2(VirtualBase *this);
extern MiddleA *MiddleA__MiddleA_5(MiddleA *this);
extern MiddleB *MiddleB__MiddleB_5(MiddleB *this);
extern DiamondDerived *DiamondDerived__DiamondDerived_5(DiamondDerived *this);
extern __uniq_ptr_data_int_std__default_delete_int__true_true_ *std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data(__uniq_ptr_data_int_std__default_delete_int__true_true_ *this, __uniq_ptr_data *param_1);
extern __uniq_ptr_impl_int_std__default_delete_int__ *std___uniq_ptr_impl_int_std__default_delete_int___uniq_ptr_impl_1(__uniq_ptr_impl_int_std__default_delete_int__ *this, __uniq_ptr_impl *param_1);
extern tuple *std__move_std__tuple_int__std__default_delete_int____(tuple *param_1);
extern tuple_int__std__default_delete_int__ *std__tuple_int___std__default_delete_int___tuple(tuple_int__std__default_delete_int__ *this, tuple *param_1);
extern void std___uniq_ptr_impl_int_std__default_delete_int___M_ptr_1(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern void __clang_call_terminate(void);
extern void std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl_1(_Tuple_impl_0u_int__std__default_delete_int__ *this, _Tuple_impl *param_1);
extern _Tuple_impl *std__Tuple_impl_1u_std__default_delete_int___Tuple_impl_1(_Tuple_impl *param_1);
extern void std__Tuple_impl_0u_int__std__default_delete_int___M_head_1(_Tuple_impl *param_1);
extern _Head_base *std__Head_base_0u_int__false___M_head_1(_Head_base *param_1);
extern void RTTIBase_RTTIBase(RTTIBase *this);
extern RTTIDerivedA *RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedA__RTTIDerivedA_1(RTTIDerivedA *this);
extern unsigned int RTTIDerivedA_getType(void);
extern RTTIBase *RTTIBase__RTTIBase(RTTIBase *this);
extern void RTTIBase__RTTIBase_1(RTTIBase *this);
extern unsigned int RTTIBase_getType(void);
extern RTTIDerivedB *RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
extern void RTTIDerivedB__RTTIDerivedB_1(RTTIDerivedB *this);
extern unsigned int RTTIDerivedB_getType(void);
extern __uniq_ptr_data_int_std__default_delete_int__true_true_ *std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl_2(__uniq_ptr_data_int_std__default_delete_int__true_true_ *this, int *param_1);
extern __uniq_ptr_impl_int_std__default_delete_int__ *std___uniq_ptr_impl_int_std__default_delete_int___uniq_ptr_impl_2(__uniq_ptr_impl_int_std__default_delete_int__ *this, int *param_1);
extern tuple_int__std__default_delete_int__ *std__tuple_int___std__default_delete_int___tuple_true_true_(tuple_int__std__default_delete_int__ *this);
extern _Tuple_impl_0u_int__std__default_delete_int__ *std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl_2(_Tuple_impl_0u_int__default_delete_int__ *this);
extern _Tuple_impl_1u_std__default_delete_int__ *std__Tuple_impl_1u_std__default_delete_int___Tuple_impl_2(_Tuple_impl_1u_std__default_delete_int__ *this);
extern void std__Head_base_0u_int__false___Head_base_1(_Head_base_0u_int__false_ *this);
extern _Head_base_1u_std__default_delete_int__true_ *std__Head_base_1u_std__default_delete_int__true___Head_base_1(_Head_base_1u_std__default_delete_int__true_ *this);
extern unsigned int std__unique_ptr_int_std__default_delete_int___get_deleter(unique_ptr_int_std__default_delete_int__ *this);
extern void std__default_delete_int___operator__(default_delete_int_ *this, int *param_1);
extern void std__Tuple_impl_1u_std__default_delete_int___M_head_1(_Tuple_impl *param_1);
extern _Head_base *std__Head_base_1u_std__default_delete_int__true___M_head_1(_Head_base *param_1);
extern unsigned int std__unique_ptr_int_std__default_delete_int___get(unique_ptr_int_std__default_delete_int__ *this);
extern __uniq_ptr_data_int_std__default_delete_int____true_true_ *std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl(__uniq_ptr_data_int_std__default_delete_int____true_true_ *this, int *param_1);
extern __uniq_ptr_impl_int_std__default_delete_int____ *std___uniq_ptr_impl_int_std__default_delete_int______uniq_ptr_impl(__uniq_ptr_impl_int_std__default_delete_int____ *this, int *param_1);
extern tuple_int__std__default_delete_int____ *std__tuple_int___std__default_delete_int______tuple_true_true_(tuple_int__std__default_delete_int____ *this);
extern int **std___uniq_ptr_impl_int_std__default_delete_int______M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *this);
extern _Tuple_impl_0u_int__std__default_delete_int____ *std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl_2(_Tuple_impl_0u_int__std__default_delete_int____ *this);
extern _Tuple_impl_1u_std__default_delete_int____ *std__Tuple_impl_1u_std__default_delete_int______Tuple_impl_2(_Tuple_impl_1u_std__default_delete_int____ *this);
extern _Head_base_1u_std__default_delete_int____true_ *std__Head_base_1u_std__default_delete_int____true___Head_base_1(_Head_base_1u_std__default_delete_int____true_ *this);
extern int **std__Tuple_impl_0u_int__std__default_delete_int______M_head(_Tuple_impl_0u_int__std__default_delete_int____ *param_1);
extern default_delete *std__unique_ptr_int____std__default_delete_int______get_deleter(unique_ptr_int___std__default_delete_int____ *this);
extern default_delete *std___uniq_ptr_impl_int_std__default_delete_int______M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *this);
extern default_delete *std__Tuple_impl_1u_std__default_delete_int______M_head(_Tuple_impl_1u_std__default_delete_int____ *param_1);
extern default_delete *std__Head_base_1u_std__default_delete_int____true___M_head_1(_Head_base_1u_std__default_delete_int____true_ *param_1);
extern int *std__unique_ptr_int____std__default_delete_int______get(unique_ptr_int___std__default_delete_int____ *this);
extern void std__Head_base_0u_int__false___Head_base_2(_Head_base_0u_int__false_ *this, int **param_1);
extern int **_M_ptr_int_test_cpp_smart_ptr______2_(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
extern __2 *_M_deleter_test_cpp_smart_ptr______2_(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this);
extern default_delete_int_ *_M_deleter_int(__uniq_ptr_impl_int_std__default_delete_int__ *this);
extern default_delete *_M_deleter_array(__uniq_ptr_impl_int_std__default_delete_int____ *this);

/* Global variables */
extern void *__dso_handle;
extern char std___ioinit[4];
extern char completed_0;
extern uint instance_count;

/* String data tables */
extern const char DAT_00014221[];
extern const char DAT_00014246[];
extern const char DAT_00014264[];
extern const char DAT_00014280[];
extern const char DAT_0001429c[];
extern const char DAT_000142b8[];
extern const char DAT_000142d5[];
extern const char DAT_000142f1[];
extern const char DAT_0001430d[];
extern const char DAT_00014329[];
extern const char DAT_00014345[];
extern const char DAT_00014362[];
extern const char DAT_0001437f[];
extern const char DAT_0001439d[];

/* Virtual function table pointers */
extern const void *PTR_virtual_func_00024c48;
extern const void *PTR_virtual_func_00024c68;
extern const void *PTR_funcA_00024c8c;
extern const void *PTR_funcB_00024ca4;
extern const void *PTR_func_00024d14;
extern const void *PTR_func_00024d2c;
extern const void *PTR_func_00024d48;
extern const void *PTR__RTTIBase_00024ed8;
extern const void *PTR__RTTIDerivedA_00024ec4;
extern const void *PTR__RTTIDerivedB_00024eec;
extern const void *PTR_funcA_00024ce8;
extern const void *PTR_funcB_00024cfc;
extern const void *PTR_func_00024e38;

/* Stack pointer reference */
extern unsigned long stack0x00000004;

/* Type forward declarations */
typedef struct Init Init;
typedef struct Base Base;
typedef struct Derived Derived;

/* Struct definitions */
struct Init {
    int _placeholder;
};

struct SimpleClass {
    int value;
    char name[32];
};

struct LifecycleClass {
    void *data;
    uint size;
};

struct Base {
    void **vptr;
};

struct Derived {
    void **vptr;
    int value;
};

struct Point {
    int x;
    int y;
};

struct Container_int_ {
    int data[10];
    uint size;
};

struct Container_double_ {
    double data[10];
    uint size;
};

struct RTTIBase {
    void **vptr;
};

struct RTTIDerivedA {
    void **vptr;
};

struct RTTIDerivedB {
    void **vptr;
};

struct BaseA {
    void **vptr;
};

struct BaseB {
    void **vptr;
};

struct MultiDerived {
    void **vptr_a;
    int padding1[2];
    void **vptr_b;
    int padding2[2];
};

struct VirtualBase {
    void **vptr;
};

struct MiddleA {
    void **vptr;
    int data[2];
};

struct MiddleB {
    void **vptr;
    int data[2];
};

struct DiamondDerived {
    void **vptr_a;
    int data1[2];
    void **vptr_b;
    int data2[2];
    void **vptr_v;
    int data3[2];
};

struct type {
    void *_placeholder;
};

struct type_info {
    void **vptr;
    const char *name;
};
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct type_info type_info;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct tuple tuple;
typedef struct _Head_base _Head_base;
typedef struct unique_ptr unique_ptr;
typedef struct default_delete default_delete;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;

struct __uniq_ptr_data {
    void *_placeholder;
};

struct _Tuple_impl {
    void *_placeholder;
};

struct tuple {
    void *_placeholder;
};

struct _Head_base {
    void *_placeholder;
};

struct unique_ptr {
    void *_placeholder;
};

struct default_delete {
    void *_placeholder;
};

struct __uniq_ptr_impl {
    void *_placeholder;
};

struct __0 {
    void *_placeholder;
};

struct __1 {
    void *_placeholder;
};

struct __2 {
    void *_placeholder;
};

struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ {
    void *_placeholder;
};

struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ {
    void *_placeholder;
};

struct unique_ptr_int_test_cpp_smart_ptr______2_ {
    void *_placeholder;
};

struct _Tuple_impl_0u_int__test_cpp_smart_ptr______2_ {
    void *_placeholder;
};

struct _Tuple_impl_1u_test_cpp_smart_ptr______2_ {
    void *_placeholder;
};

struct _Head_base_0u_int__false_ {
    int *_M_head;
};

struct _Head_base_1u_test_cpp_smart_ptr______2_true_ {
    __2 _M_head;
};

struct tuple_int__test_cpp_smart_ptr______2_ {
    void *_placeholder;
};

struct _Tuple_impl_0u_int__std__default_delete_int__ {
    void *_placeholder;
};

struct _Tuple_impl_1u_std__default_delete_int__ {
    void *_placeholder;
};

struct _Head_base_1u_std__default_delete_int__true_ {
    default_delete _M_head;
};

struct tuple_int__std__default_delete_int__ {
    void *_placeholder;
};

struct __uniq_ptr_impl_int_std__default_delete_int__ {
    void *_placeholder;
};

struct __uniq_ptr_data_int_std__default_delete_int__true_true_ {
    void *_placeholder;
};

struct unique_ptr_int_std__default_delete_int__ {
    void *_placeholder;
};

struct default_delete_int_ {
    void *_placeholder;
};

struct _Tuple_impl_0u_int__std__default_delete_int____ {
    void *_placeholder;
};

struct _Tuple_impl_1u_std__default_delete_int____ {
    void *_placeholder;
};

struct _Head_base_1u_std__default_delete_int____true_ {
    default_delete _M_head;
};

struct tuple_int__std__default_delete_int____ {
    void *_placeholder;
};

struct __uniq_ptr_impl_int_std__default_delete_int____ {
    void *_placeholder;
};

struct __uniq_ptr_data_int_std__default_delete_int____true_true_ {
    void *_placeholder;
};

struct unique_ptr_int___std__default_delete_int____ {
    void *_placeholder;
};

typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct _Tuple_impl_0u_int__test_cpp_smart_ptr______2_ _Tuple_impl_0u_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_1u_test_cpp_smart_ptr______2_ _Tuple_impl_1u_test_cpp_smart_ptr______2_;
typedef struct _Head_base_0u_int__false_ _Head_base_0u_int__false_;
typedef struct _Head_base_1u_test_cpp_smart_ptr______2_true_ _Head_base_1u_test_cpp_smart_ptr______2_true_;
typedef struct tuple_int__test_cpp_smart_ptr______2_ tuple_int__test_cpp_smart_ptr______2_;
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct tuple tuple;
typedef struct _Head_base _Head_base;
typedef struct default_delete default_delete;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ __uniq_ptr_impl_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_;
typedef struct unique_ptr_int_test_cpp_smart_ptr______2_ unique_ptr_int_test_cpp_smart_ptr______2_;
typedef struct __2 __2;
typedef struct __1 __1;
typedef struct _Tuple_impl_0u_int__std__default_delete_int__ _Tuple_impl_0u_int__std__default_delete_int__;
typedef struct _Tuple_impl_1u_std__default_delete_int__ _Tuple_impl_1u_std__default_delete_int__;
typedef struct _Head_base_1u_std__default_delete_int__true_ _Head_base_1u_std__default_delete_int__true_;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct default_delete_int_ default_delete_int_;
typedef struct _Tuple_impl_0u_int__std__default_delete_int____ _Tuple_impl_0u_int__std__default_delete_int____;
typedef struct _Tuple_impl_1u_std__default_delete_int____ _Tuple_impl_1u_std__default_delete_int____;
typedef struct _Head_base_1u_std__default_delete_int____true_ _Head_base_1u_std__default_delete_int____true_;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
struct type;


// Decompiled by BinaryAI
// SHA256: b9bf5b032fa75a4ab174985a5cd989a43bf58567eeeb090ef0d145ccd3a9a42b

// Function: _init @ 0x10d2c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10d4c
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: ios_base_Init_Init
void ios_base_Init_Init(Init *init)
{
}

// Function: template_max_double_
double template_max_double_(double param_1, double param_2)
{
 if (param_1 > param_2) return param_1;
 return param_2;
}

// Function: Container<double>::push
void Container_double_push(Container_double_ *this, double param_1)
{
 int iVar2;
 if (*(int *)(this + 0x50) < 10) {
 iVar2 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar2 + 1;
 *(double *)(this + iVar2 * 8) = param_1;
 }
}

// Function: get
int *get(unique_ptr_int___std__default_delete_int____ *this)
{
 int **ppiVar1;
 ppiVar1 = (int **)_M_ptr_array((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return *ppiVar1;
}

// Function: get_deleter
default_delete *get_deleter(unique_ptr_int___std__default_delete_int____ *this)
{
 default_delete *pdVar1;
 pdVar1 = _M_deleter_array((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return pdVar1;
}

// Function: get_deleter
default_delete_int_ *get_deleter_int(unique_ptr_int_std__default_delete_int__ *this)
{
 default_delete_int_ *pdVar1;
 pdVar1 = _M_deleter_int((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return pdVar1;
}

// Function: _M_ptr
void *_M_ptr_int(__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__get_0u_int__std__default_delete_int__((tuple *)this);
 return *ppiVar1;
}

// Function: _M_ptr
void *_M_ptr_array(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 int **ppiVar1;
 ppiVar1 = (int **)get_0u_int__std__default_delete_int____((tuple *)this);
 return *ppiVar1;
}









// Function: <EXTERNAL>::__libc_start_main @ 0x10d88
void __libc_start_main(int (*main)(void), int argc, char **argv, int (*init)(void), void (*fini)(void), void (*rtld_fini)(void))
{
}





// Function: <EXTERNAL>::operator.delete @ 0x10dac
void operator_delete(void *param_1)
{
}











// Function: <EXTERNAL>::__cxa_rethrow @ 0x10df4
void __cxa_rethrow(void)
{
}





















// Function: __cxx_global_var_init @ 0x10e84
void __cxx_global_var_init(void)
{
 ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit(0,&std___ioinit,&__dso_handle);
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
 SimpleClass::SimpleClass(aSStack_2c,5,"Test");
 SimpleClass::setValue(aSStack_2c,10);
 iVar1 = SimpleClass::getValue(aSStack_2c);
 iVar2 = SimpleClass::compute(aSStack_2c,3);
 iVar3 = SimpleClass::getClassID();
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x110c8
int test_cpp_constructor(void)
{
 int iVar1;
 LifecycleClass aLStack_14 [8];
 int local_c;
 local_c = 0;
 LifecycleClass::LifecycleClass(aLStack_14,5);
 iVar1 = LifecycleClass::getData(aLStack_14,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass::getInstanceCount();
 local_c = local_c + iVar1;
 LifecycleClass::_LifecycleClass(aLStack_14);
 iVar1 = LifecycleClass::getInstanceCount();
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
 Base::Base(aBStack_c);
 Derived::Derived(aDStack_14,3);
 iVar1 = Base::virtual_func(aBStack_c,5);
 iVar2 = Derived::virtual_func(aDStack_14,5);
 iVar3 = call_virtual_func(aBStack_c,5);
 iVar4 = call_virtual_func((Base *)aDStack_14,5);
 Derived::_Derived(aDStack_14);
 Base::_Base(aBStack_c);
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
 MultiDerived::MultiDerived((MultiDerived *)local_18);
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
 MultiDerived::_MultiDerived((MultiDerived *)local_18);
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_diamond_inheritance @ 0x113c0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned int *local_38;
 int local_20 [6];
 DiamondDerived::DiamondDerived((DiamondDerived *)local_20);
 *(unsigned int *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 0x32;
 local_38 = (unsigned int *)0x0;
 if (local_20 != (int *)0x0) {
 local_38 = (unsigned int *)((int)local_20 + *(int *)(local_20[0] + -0xc));
 }
 iVar1 = (**(void **)*local_38)();
 *(unsigned int *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 100;
 iVar2 = (**(void **)*local_38)();
 DiamondDerived::_DiamondDerived((DiamondDerived *)local_20);
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
 Point::Point(aPStack_10,1,2);
 Point::Point(aPStack_18,3,4);
 Point::operator_plus((Point *)&local_20,aPStack_10);
 bVar1 = Point::operator_equals(aPStack_10,aPStack_18);
 Point::operator_increment((Point *)&local_20);
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
 unsigned int uVar2;
 int iVar3;
 unsigned int extraout_r1;
 unsigned int in_stack_ffffffd8;
 unsigned int in_stack_ffffffdc;
 int in_stack_ffffffe0;
 int iVar4;
 int in_stack_ffffffe4;
 int iVar5;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8),
 (double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0));
 iVar5 = 10;
 iVar4 = 0x14;
 template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe0);
 iVar3 = __aeabi_d2iz(uVar2,extraout_r1);
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
 Container<int>::Container(this);
 Container<int>::push(this,10);
 Container<int>::push(this,0x14);
 Container<int>::push(this,0x1e);
 local_38 = Container<int>::get(this,0);
 local_3c = Container<int>::getSize(this);
 this_00 = aCStack_98;
 Container<double>::Container(this_00);
 Container<double>::push((double)CONCAT44(this_00,this));
 uVar3 = Container<double>::get(this_00,0);
 iVar1 = local_38 + local_3c;
 iVar2 = __aeabi_d2iz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
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
 iVar1 = test_cpp_lambda___1__operator__((__1 *)&local_18,3);
 aVar2 = test_cpp_lambda___0__operator__(a_Stack_1c,10,0x14);
 return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x11724
int __thiscall test_cpp_lambda()::$_1::operator__(__1 *this,int param_1)
{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return param_1 * *(int *)this + **(int **)(this + 4);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x11760
int __thiscall test_cpp_lambda()::$_0::operator__(__0 *this,int param_1,int param_2)
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
 std__unique_ptr_int_std__default_delete_int___unique_ptr(auStack_c,piVar1);
 puVar2 = (unsigned int *)unique_ptr_operator_dereference((unique_ptr *)auStack_c);
 *puVar2 = 200;
 ptVar3 = move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_c);
 unique_ptr_int_std__default_delete_int___unique_ptr(auStack_18,(unique_ptr *)ptVar3);
 piVar1 = (int *)unique_ptr_operator_dereference((unique_ptr *)auStack_18);
 local_1c = *piVar1;
 piVar1 = (int *)operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std__unique_ptr_int____std__default_delete_int______unique_ptr_int__std__default_delete_int____void_bool_(auStack_20,piVar1);
 piVar1 = (int *)std__unique_ptr_int____std__default_delete_int______operator_brackets(auStack_20,2);
 local_24 = *piVar1;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 500;
 std__unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr_test_cpp_smart_ptr______2_void_(auStack_2c,piVar1,a_Stack_28);
 piVar1 = (int *)unique_ptr_operator_dereference((unique_ptr *)auStack_2c);
 iVar4 = *piVar1;
 iVar5 = local_1c + local_24;
 std__unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr(auStack_2c);
 std__unique_ptr_int___std__default_delete_int______unique_ptr(auStack_20);
 std__unique_ptr_int_std__default_delete_int___unique_ptr_2(auStack_18);
 std__unique_ptr_int_std__default_delete_int___unique_ptr_2(auStack_c);
 return iVar5 + iVar4;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0x11acc
unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall
std__unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr_test_cpp_smart_ptr______2_void_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 std___uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
 return this;
}



// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr @ 0x11b44
unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall
std__unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 int **ppiVar1;
 __2 *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 ppiVar2 = (int **)std__move_int___(ppiVar1);
 test_cpp_smart_ptr______2___operator__(this_00,*ppiVar2);
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
 RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (int *)operator_new(4);
 *this_00 = 0;
 RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
 local_14 = 0;
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
 }
 iVar1 = type_info_operator_equals(*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar1 != 0) {
 local_14 = 10;
 }
 if (this_00 == (int *)0x0) {
 __cxa_bad_typeid();
 }
 iVar1 = type_info_operator_equals(*(type_info **)(*this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar1 != 0) {
 local_14 = local_14 + 0x14;
 }
 if (this == (int *)0x0) {
 local_3c = 0;
 }
 else {
 local_3c = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_3c != 0) {
 iVar1 = RTTIDerivedA::derivedA_data();
 local_14 = local_14 + iVar1;
 }
 if (this_00 == (int *)0x0) {
 local_44 = 0;
 }
 else {
 local_44 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (local_44 != 0) {
 iVar1 = RTTIDerivedB::derivedB_data();
 local_14 = local_14 + iVar1;
 }
 if (this == (int *)0x0) {
 __cxa_bad_typeid();
 }
 __s = type_info_name(*(type_info **)(*this + -4));
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
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x11fe0
__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ * __thiscall
std___uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
 )
{
 std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
 return this;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x1201c
__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __2 *p_Var1;
 int *local_10;
 __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_c;
 local_10 = param_1;
 local_c = this;
 p_Var1 = std_forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std__tuple_int___test_cpp_smart_ptr______2___tuple_int___test_cpp_smart_ptr______2_const__true_
 ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_10,p_Var1);
 return this;
}

// Function: std::forward<test_cpp_smart_ptr()::$_2_const&> @ 0x12064
__2 * std::forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
 return (__2 *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 0x12078
tuple_int__test_cpp_smart_ptr______2_ * __thiscall
std__tuple_int___test_cpp_smart_ptr______2___tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 __2 *p_Var2;
 ppiVar1 = std_forward_int___((type *)param_1);
 p_Var2 = std_forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 ((_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
 return this;
}

// Function: std::_Tuple_impl_0u_int__test_cpp_smart_ptr______2_::_Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 0x120d4
_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ * __thiscall
std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 std_forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl((__2 *)this);
 ppiVar1 = std_forward_int___((type *)param_1);
 std__Head_base_0u_int__false___Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
 return this;
}

// Function: std::_Tuple_impl_1u_test_cpp_smart_ptr______2_::_Tuple_impl @ 0x1212c
__2 * std__Tuple_impl_1u_test_cpp_smart_ptr______2___Tuple_impl(__2 *param_1)
{
 std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base(param_1);
 return param_1;
}

// Function: std::_Head_base_1u_test_cpp_smart_ptr______2_true_::_Head_base @ 0x12160
__2 * std__Head_base_1u_test_cpp_smart_ptr______2_true___Head_base(__2 *param_1)
{
 return param_1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x12178
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 _M_ptr_int_test_cpp_smart_ptr______2_((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter @ 0x1219c
__2 * __thiscall
std__unique_ptr_int_test_cpp_smart_ptr______2___get_deleter
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 __2 *p_Var1;
 p_Var1 = std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return p_Var1;
}

// Function: test_cpp_smart_ptr()::$_2::operator() @ 0x121d0
void __thiscall test_cpp_smart_ptr______2___operator__(__2 *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x1221c
type * std__get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std__get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12240
int ** std__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl_0u_int__test_cpp_smart_ptr______2_::_M_head @ 0x12264
void std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter @ 0x12288
void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 _M_deleter_test_cpp_smart_ptr______2_((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return;
}

// Function: std::get<1u,int*,test_cpp_smart_ptr()::$_2> @ 0x122ac
type * std__get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 __2 *p_Var1;
 p_Var1 = std__get_helper_1u_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std::__get_helper<1u,test_cpp_smart_ptr()::$_2> @ 0x122d0
__2 * std__get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)std__Tuple_impl_1u_test_cpp_smart_ptr______2___M_head(param_1);
 return p_Var1;
}

// Function: std::_Tuple_impl_1u_test_cpp_smart_ptr______2_::_M_head @ 0x122f4
void std__Tuple_impl_1u_test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1)
{
 std__Head_base_1u_test_cpp_smart_ptr______2_true___M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head @ 0x12318
_Head_base * std__Head_base_1u_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get @ 0x1232c
int * __thiscall
std__unique_ptr_int_test_cpp_smart_ptr______2___get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 int *piVar1;
 piVar1 = (int *)std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return piVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x12360
unsigned int __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)_M_ptr_int_test_cpp_smart_ptr______2_((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return *puVar1;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12388
type * std__get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = std__get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x123ac
int ** std__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl_0u_int__test_cpp_smart_ptr______2_::_M_head @ 0x123d0
void std__Tuple_impl_0u_int__test_cpp_smart_ptr______2___M_head(_Tuple_impl *param_1)
{
 std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return;
}

// Function: SimpleClass::SimpleClass @ 0x123f4
void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass::setValue @ 0x12444
void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass::getValue @ 0x12464
unsigned int __thiscall SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass::compute @ 0x1247c
int __thiscall SimpleClass_compute(SimpleClass *this,int param_1)
{
 size_t sVar1;
 int iVar2;
 iVar2 = *(int *)this;
 sVar1 = strlen((char *)(this + 4));
 return iVar2 * param_1 + sVar1;
}

// Function: SimpleClass::getClassID @ 0x124c4
unsigned int SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x124d0
LifecycleClass * __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,uint param_1)
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

// Function: LifecycleClass::getData @ 0x1259c
unsigned int __thiscall LifecycleClass_getData(LifecycleClass *this,uint param_1)
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

// Function: LifecycleClass::getInstanceCount @ 0x125f4
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: LifecycleClass::~LifecycleClass @ 0x12604
LifecycleClass * __thiscall LifecycleClass__LifecycleClass(LifecycleClass *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return this;
}

// Function: Base::Base @ 0x1266c
void __thiscall Base_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00024c48;
 return;
}

// Function: Derived::Derived @ 0x12694
void __thiscall Derived_Derived(Derived *this,int param_1)
{
 Base_Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_00024c68;
 *(int *)(this + 4) = param_1;
 return;
}

// Function: Base::virtual_func @ 0x126e0
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x126fc
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::~Derived @ 0x12720
Derived * __thiscall Derived__Derived(Derived *this)
{
 Base__Base((Base *)this);
 return this;
}

// Function: Base::~Base @ 0x1274c
Base * __thiscall Base__Base(Base *this)
{
 return this;
}

// Function: MultiDerived::MultiDerived @ 0x12760
void __thiscall MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 8));
 *(char ***)this = &PTR_funcA_00024c8c;
 *(char ***)(this + 8) = &PTR_funcB_00024ca4;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x127b4
MultiDerived * __thiscall MultiDerived__MultiDerived(MultiDerived *this)
{
 BaseB__BaseB((BaseB *)(this + 8));
 BaseA__BaseA((BaseA *)this);
 return this;
}

// Function: DiamondDerived::DiamondDerived @ 0x127ec
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

// Function: DiamondDerived::~DiamondDerived @ 0x12870
DiamondDerived * __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x10));
 return this;
}

// Function: Point::Point @ 0x128b4
void __thiscall Point_Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point::operator+ @ 0x128e0
void __thiscall Point_operator_plus(Point *this,Point *param_1)
{
 Point_Point(this,*(int *)param_1 + *(int *)this,*(int *)(param_1 + 4) + *(int *)(this + 4));
 return;
}

// Function: Point::operator== @ 0x12924
bool __thiscall Point_operator_equals(Point *this,Point *param_1)
{
 bool bVar1;
 bVar1 = false;
 if (*(int *)this == *(int *)param_1) {
 bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return bVar1;
}

// Function: Point::operator++ @ 0x1298c
void __thiscall Point_operator_increment(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}

// Function: template_max<int> @ 0x129b8
int template_max_int_(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}

// Function: template_max<double> @ 0x129fc
double template_max_double_(double param_1,double param_2)
{
 unsigned int in_r0;
 unsigned int in_r1;
 unsigned int in_r2;
 unsigned int in_r3;
 double extraout_d0;
 __aeabi_dcmpgt(in_r0,in_r1,in_r2,in_r3);
 return extraout_d0;
}

// Function: template_swap<int> @ 0x12a74
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x12ab0
void __thiscall Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x12acc
void __thiscall Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x12b14
unsigned int __thiscall Container_int__get(Container_int_ *this,int param_1)
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

// Function: Container<int>::getSize @ 0x12b7c
unsigned int __thiscall Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x12b94
void __thiscall Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x12bb0
void Container_double__push(double param_1)
{
 int in_r0;
 unsigned int *puVar1;
 unsigned int in_r2;
 unsigned int in_r3;
 int iVar2;
 if (*(int *)(in_r0 + 0x50) < 10) {
 iVar2 = *(int *)(in_r0 + 0x50);
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 }
 return;
}

// Function: Container<double>::get @ 0x12c04
unsigned long long __thiscall Container_double__get(Container_double_ *this,int param_1)
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

// Function: Container<double>::getSize @ 0x12c7c
unsigned int __thiscall Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std::unique_ptr_int_std__default_delete_int__::unique_ptr @ 0x12c94
unique_ptr_int_std__default_delete_int__ * __thiscall
std::unique_ptr_int_std__default_delete_int__::unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_impl_2
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return this;
}



// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x12d04
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr_int_std__default_delete_int__ *param_1)
{
 return (type *)param_1;
}

// Function: std::unique_ptr_int_std__default_delete_int__::unique_ptr @ 0x12d18
unique_ptr_int_std__default_delete_int__ * __thiscall
std::unique_ptr_int_std__default_delete_int__::unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr_int_std__default_delete_int__ *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int__true_true_::__uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return this;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x12d4c
unique_ptr_int___std__default_delete_int____ * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data_int_std__default_delete_int____true_true_::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return this;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x12d88
int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator_brackets
 (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
 int iVar1;
 iVar1 = get(this);
 return iVar1 + param_1 * 4;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x12dc8
unique_ptr_int___std__default_delete_int____ * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int *piVar1;
 unsigned int uVar2;
 piVar1 = (int *)__uniq_ptr_impl_int_std__default_delete_int____::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 if (*piVar1 != 0) {
 uVar2 = std__unique_ptr_int____std__default_delete_int______get_deleter(this);
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (uVar2,*piVar1);
 }
 *piVar1 = 0;
 return this;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x12e3c
unique_ptr_int_std__default_delete_int__ * __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std__default_delete_int___M_ptr_1
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)std___uniq_ptr_impl_int_std__default_delete_int___M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 ppiVar2 = (int **)move_int___(ppiVar1);
 std__default_delete_int___operator__(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x12ec0
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00024ec4;
 return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x12f00
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00024eec;
 return;
}

// Function: std::type_info::operator== @ 0x12f40
bool __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
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

// Function: RTTIDerivedA::derivedA_data @ 0x12fe0
unsigned int RTTIDerivedA::derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB::derivedB_data @ 0x12ff4
unsigned int RTTIDerivedB::derivedB_data(void)
{
 return 200;
}



// Function: Base::getName @ 0x1305c
char * Base::getName(void)
{
 return &DAT_0001439d;
}

// Function: Base::~Base @ 0x13078
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::getName @ 0x130a8
char * Derived::getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x130c4
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this);
 return;
}

// Function: BaseA::BaseA @ 0x130f4
void __thiscall BaseA::BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_00024ce8;
 return;
}

// Function: BaseB::BaseB @ 0x1311c
void __thiscall BaseB::BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_00024cfc;
 return;
}

// Function: MultiDerived::funcA @ 0x13144
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x13158
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcB @ 0x13188
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1319c
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x131b4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x131d0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: BaseA::funcA @ 0x131e8
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x131fc
BaseA * __thiscall BaseA::_BaseA(BaseA *this)
{
 return this;
}

// Function: BaseA::~BaseA @ 0x13210
void __thiscall BaseA::_BaseA(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x13240
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x13254
BaseB * __thiscall BaseB::_BaseB(BaseB *this)
{
 return this;
}

// Function: BaseB::~BaseB @ 0x13268
void __thiscall BaseB::_BaseB(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: VirtualBase::VirtualBase @ 0x13298
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00024e38;
 return;
}

// Function: MiddleA::MiddleA @ 0x132c0
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
 unsigned int *in_r1;
 *(unsigned int *)this = *in_r1;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return;
}

// Function: MiddleB::MiddleB @ 0x132f4
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
 unsigned int *in_r1;
 *(unsigned int *)this = *in_r1;
 *(unsigned int *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return;
}

// Function: MiddleA::func @ 0x13328
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x13350
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 8));
 return this;
}

// Function: MiddleA::~MiddleA @ 0x13394
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator_delete(this);
 return;
}



// Function: MiddleA::~MiddleA @ 0x133e4
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleA::~MiddleA @ 0x13408
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB::func @ 0x13428
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x13450
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 8));
 return this;
}

// Function: MiddleB::~MiddleB @ 0x13494
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator_delete(this);
 return;
}



// Function: MiddleB::~MiddleB @ 0x134e4
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB::~MiddleB @ 0x13508
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::func @ 0x13528
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13550
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this);
 return;
}



// Function: DiamondDerived::~DiamondDerived @ 0x13598
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x135b4
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}



// Function: DiamondDerived::~DiamondDerived @ 0x135ec
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13610
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase::func @ 0x13630
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x13644
VirtualBase * __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return this;
}

// Function: VirtualBase::~VirtualBase @ 0x13658
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::~MiddleA @ 0x13688
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return this;
}

// Function: MiddleB::~MiddleB @ 0x136a0
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x136b8
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 MiddleB::_MiddleB((MiddleB *)(this + 8));
 MiddleA::_MiddleA((MiddleA *)this);
 return this;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x13708
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int__::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x1373c
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned int *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple_int__std__default_delete_int__::tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned int *)std___uniq_ptr_impl_int_std__default_delete_int___M_ptr_1((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return this;
}

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x1379c
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x137b0
tuple_int__std__default_delete_int__ * __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 _Tuple_impl_0u_int__std__default_delete_int__::_Tuple_impl
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x137e4
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 _M_ptr_int((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return;
}

// Function: __clang_call_terminate @ 0x13808
void __clang_call_terminate(void)
{
 __cxa_begin_catch();
 terminate();
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int__::_Tuple_impl @ 0x13810
void __thiscall
std::_Tuple_impl_0u_int__std__default_delete_int__::_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
 _Tuple_impl_1u_std__default_delete_int__::_Tuple_impl((_Tuple_impl *)this);
 *(unsigned int *)this = *(unsigned int *)param_1;
 return;
}

// Function: std::_Tuple_impl_1u_std__default_delete_int__::_Tuple_impl @ 0x13850
_Tuple_impl * std::_Tuple_impl_1u_std__default_delete_int__::_Tuple_impl(_Tuple_impl *param_1)
{
 return param_1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x13868
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x1388c
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int__::_M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int__::_M_head @ 0x138b0
void std::_Tuple_impl_0u_int__std__default_delete_int__::_M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false_::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base_0u_int__false_::_M_head @ 0x138d4
_Head_base * std::_Head_base_0u_int__false_::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIBase::RTTIBase @ 0x138e8
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00024ed8;
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x13910
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1393c
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x1396c
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x13980
RTTIBase * __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return this;
}

// Function: RTTIBase::~RTTIBase @ 0x13994
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIBase::getType @ 0x139c4
unsigned int RTTIBase::getType(void)
{
 return 0;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x139d8
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x13a04
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x13a34
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x13a48
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 std___uniq_ptr_impl_int_std__default_delete_int___uniq_ptr_impl_2
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x13a7c
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 std__tuple_int___std__default_delete_int___tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return this;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x13ac8
tuple_int__std__default_delete_int__ * __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 std__Tuple_impl_0u_int__std__default_delete_int___Tuple_impl_2
 ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
 return this;
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int__::_Tuple_impl @ 0x13afc
_Tuple_impl_0u_int__std__default_delete_int__ * __thiscall
std::_Tuple_impl_0u_int__std__default_delete_int__::_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
 std__Tuple_impl_1u_std__default_delete_int___Tuple_impl_2
 ((_Tuple_impl_1u_std__default_delete_int__ *)this);
 _Head_base_0u_int__false_::_Head_base((_Head_base_0u_int__false_ *)this);
 return this;
}

// Function: std::_Tuple_impl_1u_std__default_delete_int__::_Tuple_impl @ 0x13b30
_Tuple_impl_1u_std__default_delete_int__ * __thiscall
std::_Tuple_impl_1u_std__default_delete_int__::_Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int__ *this)
{
 std__Head_base_1u_std__default_delete_int__true___Head_base_1
 ((_Head_base_1u_std__default_delete_int__true_ *)this);
 return this;
}

// Function: std::_Head_base_0u_int__false_::_Head_base @ 0x13b5c
void __thiscall std::_Head_base_0u_int__false_::_Head_base(_Head_base_0u_int__false_ *this)
{
 *(unsigned int *)this = 0;
 return;
}

// Function: std::_Head_base_1u_std__default_delete_int__true_::_Head_base @ 0x13b78
_Head_base_1u_std__default_delete_int__true_ * __thiscall
std::_Head_base_1u_std__default_delete_int__true_::_Head_base
 (_Head_base_1u_std__default_delete_int__true_ *this)
{
 return this;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x13b8c
default_delete_int_ * __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 default_delete_int_ *pdVar1;
 pdVar1 = _M_deleter_int((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return pdVar1;
}

// Function: std::default_delete<int>::operator() @ 0x13bc0
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std::move<int*&> @ 0x13c00
type * std::move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x13c14
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 _M_deleter_int((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return;
}

// Function: std::get<1u,int*,std::default_delete<int>> @ 0x13c38
type * std::get_1u_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std::__get_helper<1u,std::default_delete<int>> @ 0x13c5c
default_delete * std::__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std__default_delete_int__::_M_head(param_1);
 return pdVar1;
}

// Function: std::_Tuple_impl_1u_std__default_delete_int__::_M_head @ 0x13c80
void std::_Tuple_impl_1u_std__default_delete_int__::_M_head(_Tuple_impl *param_1)
{
 _Head_base_1u_std__default_delete_int__true_::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base_1u_std__default_delete_int__true_::_M_head @ 0x13ca4
_Head_base * std::_Head_base_1u_std__default_delete_int__true_::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x13cb8
int * __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
 int *piVar1;
 piVar1 = (int *)__uniq_ptr_impl_int_std__default_delete_int__::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return piVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x13cec
unsigned int __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__uniq_ptr_impl_int_std__default_delete_int__::_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return *puVar1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x13d14
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x13d38
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int__::_M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int__::_M_head @ 0x13d5c
void std::_Tuple_impl_0u_int__std__default_delete_int__::_M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false_::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base_0u_int__false_::_M_head @ 0x13d80
_Head_base * std::_Head_base_0u_int__false_::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x13d94
__uniq_ptr_data_int_std__default_delete_int____true_true_ * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl_int_std__default_delete_int____::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x13dc8
__uniq_ptr_impl_int_std__default_delete_int____ * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 std__tuple_int___std__default_delete_int______tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return this;
}

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x13e14
tuple_int__std__default_delete_int____ * __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 std__Tuple_impl_0u_int__std__default_delete_int______Tuple_impl_2
 ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
 return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x13e48
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 _M_ptr_array((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return;
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int____::_Tuple_impl @ 0x13e6c
_Tuple_impl_0u_int__std__default_delete_int____ * __thiscall
std::_Tuple_impl_0u_int__std__default_delete_int____::_Tuple_impl
 (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
 std__Tuple_impl_1u_std__default_delete_int______Tuple_impl_2
 ((_Tuple_impl_1u_std__default_delete_int____ *)this);
 _Head_base_0u_int__false_::_Head_base((_Head_base_0u_int__false_ *)this);
 return this;
}

// Function: std::_Tuple_impl_1u_std__default_delete_int____::_Tuple_impl @ 0x13ea0
_Tuple_impl_1u_std__default_delete_int____ * __thiscall
std::_Tuple_impl_1u_std__default_delete_int____::_Tuple_impl
 (_Tuple_impl_1u_std__default_delete_int____ *this)
{
 std__Head_base_1u_std__default_delete_int____true___Head_base_1
 ((_Head_base_1u_std__default_delete_int____true_ *)this);
 return this;
}

// Function: std::_Head_base_1u_std__default_delete_int____true_::_Head_base @ 0x13ecc
_Head_base_1u_std__default_delete_int____true_ * __thiscall
std::_Head_base_1u_std__default_delete_int____true_::_Head_base
 (_Head_base_1u_std__default_delete_int____true_ *this)
{
 return this;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x13ee0
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x13f04
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int____::_M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int____::_M_head @ 0x13f28
void std::_Tuple_impl_0u_int__std__default_delete_int____::_M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false_::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x13f4c
default_delete * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 default_delete *pdVar1;
 pdVar1 = _M_deleter_array((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return pdVar1;
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

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x13fc0
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 _M_deleter_array((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return;
}

// Function: std::get<1u,int*,std::default_delete<int[]>> @ 0x13fe4
type * std::get_1u_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std::__get_helper<1u,std::default_delete<int[]>> @ 0x14008
default_delete * std::__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)_Tuple_impl_1u_std__default_delete_int____::_M_head(param_1);
 return pdVar1;
}

// Function: std::_Tuple_impl_1u_std__default_delete_int____::_M_head @ 0x1402c
void std::_Tuple_impl_1u_std__default_delete_int____::_M_head(_Tuple_impl *param_1)
{
 _Head_base_1u_std__default_delete_int____true_::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::_Head_base_1u_std__default_delete_int____true_::_M_head @ 0x14050
_Head_base * std::_Head_base_1u_std__default_delete_int____true_::_M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x14064
int * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 int *piVar1;
 piVar1 = (int *)std___uniq_ptr_impl_int_std__default_delete_int______M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return piVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x14098
unsigned int __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__uniq_ptr_impl_int_std__default_delete_int____::_M_ptr((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return *puVar1;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x140c0
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x140e4
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)_Tuple_impl_0u_int__std__default_delete_int____::_M_head(param_1);
 return ppiVar1;
}

// Function: std::_Tuple_impl_0u_int__std__default_delete_int____::_M_head @ 0x14108
void std::_Tuple_impl_0u_int__std__default_delete_int____::_M_head(_Tuple_impl *param_1)
{
 _Head_base_0u_int__false_::_M_head((_Head_base *)param_1);
 return;
}

// Function: std::forward<int*&>
int ** std::forward_int___(int **param_1)
{
 return param_1;
}

// Missing function implementations

void *_M_ptr_int_test_cpp_smart_ptr______2_(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 int **ppiVar1;
 ppiVar1 = (int **)get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *ppiVar1;
}

__2 *_M_deleter_test_cpp_smart_ptr______2_(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)get_1u_int__test_cpp_smart_ptr______2_((tuple *)this);
 return p_Var1;
}

default_delete_int_ *_M_deleter_int(__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 default_delete *pdVar1;
 pdVar1 = get_1u_int__std__default_delete_int__((tuple *)this);
 return (default_delete_int_ *)pdVar1;
}

default_delete *_M_deleter_array(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 default_delete *pdVar1;
 pdVar1 = get_1u_int__std__default_delete_int____((tuple *)this);
 return pdVar1;
}

int **_M_head_int___(_Head_base *param)
{
 return (int **)param;
}

default_delete *_M_head_int__std__default_delete_int__(_Head_base *param)
{
 return (default_delete *)param;
}

default_delete *_M_head_int__std__default_delete_int____(_Head_base *param)
{
 return (default_delete *)param;
}

int **_M_head_int__test_cpp_smart_ptr______2_(_Head_base *param)
{
 return (int **)param;
}

__2 *_M_head_test_cpp_smart_ptr______2_(_Head_base *param)
{
 return (__2 *)param;
}

// Function: std::_Head_base_0u_int__false_::_Head_base @ 0x14140
void __thiscall
std::_Head_base_0u_int__false_::_Head_base(_Head_base_0u_int__false_ *this,int **param_1)
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

