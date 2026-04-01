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
typedef unsigned char bool;
#define true 1
#define false 0

/* Standard library includes */
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* Forward declarations for missing types */
typedef struct Init Init;
typedef struct type_info type_info;
typedef struct type type;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;

/* Struct definitions for forward-declared types */
struct Init { char _dummy[1]; };

struct type_info { char *_name; };

struct type { char _dummy[1]; };
struct __0 { int _dummy; };
struct __1 { int *capture; void **capture2; };
struct __2 { char _dummy[1]; };
struct _Head_base_0ul_int__false_ { int *value; };
struct _Head_base_1ul_test_cpp_smart_ptr______2_true { __2 value; };
struct _Head_base_1ul_std__default_delete_int__true { default_delete value; };
struct _Head_base_1ul_std__default_delete_int____true { default_delete value; };
struct _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ { _Head_base_0ul_int__false_ head; _Head_base_1ul_test_cpp_smart_ptr______2_true tail; };
struct _Tuple_impl_1ul_test_cpp_smart_ptr______2_ { _Head_base_1ul_test_cpp_smart_ptr______2_true head; };
struct _Tuple_impl_0ul_int__std__default_delete_int__ { _Head_base_0ul_int__false_ head; _Head_base_1ul_std__default_delete_int__true tail; };
struct _Tuple_impl_1ul_std__default_delete_int__ { _Head_base_1ul_std__default_delete_int__true head; };
struct _Tuple_impl_0ul_int__std__default_delete_int____ { _Head_base_0ul_int__false_ head; _Head_base_1ul_std__default_delete_int____true tail; };
struct _Tuple_impl_1ul_std__default_delete_int____ { _Head_base_1ul_std__default_delete_int____true head; };
struct tuple_int__test_cpp_smart_ptr______2_ { _Head_base_0ul_int__false_ head; _Head_base_1ul_test_cpp_smart_ptr______2_true tail; };
struct tuple_int__std__default_delete_int__ { _Head_base_0ul_int__false_ head; _Head_base_1ul_std__default_delete_int__true tail; };
struct tuple_int__std__default_delete_int____ { _Head_base_0ul_int__false_ head; _Head_base_1ul_std__default_delete_int____true tail; };
struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ { tuple_int__test_cpp_smart_ptr______2_ data; };
struct __uniq_ptr_impl_int_std__default_delete_int__ { tuple_int__std__default_delete_int__ data; };
struct __uniq_ptr_impl_int_std__default_delete_int____ { tuple_int__std__default_delete_int____ data; };
struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ { __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ impl; };
struct __uniq_ptr_data_int_std__default_delete_int__true_true_ { __uniq_ptr_impl_int_std__default_delete_int__ impl; };
struct __uniq_ptr_data_int_std__default_delete_int____true_true_ { __uniq_ptr_impl_int_std__default_delete_int____ impl; };
struct unique_ptr_int_test_cpp_smart_ptr______2_ { __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ data; };
struct unique_ptr_int___std__default_delete_int____ { __uniq_ptr_data_int_std__default_delete_int____true_true_ data; };
struct unique_ptr_int_std__default_delete_int__ { __uniq_ptr_data_int_std__default_delete_int__true_true_ data; };

struct Base { void **vtable; };
struct Derived { void **vtable; int data; };
struct SimpleClass { int value; char name[32]; };
struct LifecycleClass { void *data; unsigned long size; };
struct MultiDerived { BaseA baseA; BaseB baseB; char _pad[16]; };
struct DiamondDerived { char _pad1[16]; MiddleA middleA; char _pad2[16]; };
struct Point { int x; int y; };
struct Container_int_ { int data[10]; unsigned int size; };
struct Container_double_ { double data[10]; unsigned int size; };
struct RTTIDerivedA { void **vtable; };
struct RTTIDerivedB { void **vtable; };
struct RTTIBase { void **vtable; };
struct BaseA { void **vtable; };
struct BaseB { void **vtable; };
struct VirtualBase { void **vtable; };
struct MiddleA { void **vtable; };
struct MiddleB { void **vtable; };

/* Unique_ptr related types */
typedef struct unique_ptr unique_ptr;
struct default_delete { char _dummy[1]; };
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr_int_test_cpp_smart_ptr______2_ unique_ptr_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_impl_int_std__default_delete_int__ __uniq_ptr_impl_int_std__default_delete_int__;
typedef struct __uniq_ptr_impl_int_std__default_delete_int____ __uniq_ptr_impl_int_std__default_delete_int____;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ __uniq_ptr_impl_int_test_cpp_smart_ptr______2_;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct __uniq_ptr_data_int_std__default_delete_int__true_true_ __uniq_ptr_data_int_std__default_delete_int__true_true_;
typedef struct __uniq_ptr_data_int_std__default_delete_int____true_true_ __uniq_ptr_data_int_std__default_delete_int____true_true_;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ __uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_;
typedef struct default_delete_int_ default_delete_int_;
typedef struct default_delete default_delete;
typedef struct tuple tuple;
typedef struct tuple_int__test_cpp_smart_ptr______2_ tuple_int__test_cpp_smart_ptr______2_;
typedef struct tuple_int__std__default_delete_int__ tuple_int__std__default_delete_int__;
typedef struct tuple_int__std__default_delete_int____ tuple_int__std__default_delete_int____;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ _Tuple_impl_0ul_int__test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int__ _Tuple_impl_0ul_int__std__default_delete_int__;
typedef struct _Tuple_impl_0ul_int__std__default_delete_int____ _Tuple_impl_0ul_int__std__default_delete_int____;
typedef struct _Tuple_impl_1ul_test_cpp_smart_ptr______2_ _Tuple_impl_1ul_test_cpp_smart_ptr______2_;
typedef struct _Tuple_impl_1ul_std__default_delete_int__ _Tuple_impl_1ul_std__default_delete_int__;
typedef struct _Tuple_impl_1ul_std__default_delete_int____ _Tuple_impl_1ul_std__default_delete_int____;
typedef struct _Head_base _Head_base;
typedef struct _Head_base_0ul_int__false_ _Head_base_0ul_int__false_;
typedef struct _Head_base_1ul_int__false_ _Head_base_1ul_int__false_;
typedef struct _Head_base_1ul_test_cpp_smart_ptr______2_true _Head_base_1ul_test_cpp_smart_ptr______2_true;
typedef struct _Head_base_1ul_std__default_delete_int__true _Head_base_1ul_std__default_delete_int__true;
typedef struct _Head_base_1ul_std__default_delete_int____true _Head_base_1ul_std__default_delete_int____true;
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct __2 __2;
typedef unsigned char byte;

/* Global variable declarations */
extern char completed_0;
extern Init std___ioinit;
extern void *__dso_handle;
extern unsigned int instance_count;
extern char *DAT_00105025;
extern char *DAT_0010504a;
extern char *DAT_00105068;
extern char *DAT_00105084;
extern char *DAT_001050a0;
extern char *DAT_001050bc;
extern char *DAT_001050d9;
extern char *DAT_001050f5;
extern char *DAT_00105111;
extern char *DAT_0010512d;
extern char *DAT_00105149;
extern char *DAT_00105166;
extern char *DAT_00105183;
extern char *DAT_001051a1;
extern void *PTR_VIRTUAL_FUNC_00108878;
extern void *PTR_VIRTUAL_FUNC_001088b8;
extern void *PTR_FUNCA_00108900;
extern void *PTR_FUNCB_00108930;
extern void *PTR_FUNCA_001089b0;
extern void *PTR_FUNCB_001089d8;
extern void *PTR_FUNC_00108c38;
extern void *PTR__RTTIDERIVEDA_00108d50;
extern void *PTR__RTTIDERIVEDB_00108da0;
extern void *PTR__RTTIBASE_00108d78;
extern void *PTR_TYPEINFO_00108a08;
extern void *PTR_TYPEINFO_00108a70;
extern void *PTR_TYPEINFO_00108a38;
extern type_info int___typeinfo;
extern type_info RTTIDERIVEDA___typeinfo;
extern type_info RTTIDERIVEDB___typeinfo;
extern type_info RTTIBASE___typeinfo;
extern type_info RTTIDERIVEDA___typeinfo;
extern type_info RTTIDERIVEDB___typeinfo;
extern type_info RTTIBASE___typeinfo;

/* Function declarations for external functions */
extern int __gmon_start__(void);
extern void __libc_start_main(void *, unsigned long long, void *, void *, void *, unsigned long long, void *);
extern void *__gxx_personality_v0;
extern unsigned long long std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *);
extern __2 *std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *);
extern unsigned long long std___uniq_ptr_impl_int_std__default_delete_int____M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *);
extern default_delete *std___uniq_ptr_impl_int_std__default_delete_int____M_deleter(__uniq_ptr_impl_int_std__default_delete_int__ *);
extern unsigned long long std___uniq_ptr_impl_int_std__default_delete_int_____M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *);
extern default_delete *std___uniq_ptr_impl_int_std__default_delete_int_____M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *);
extern type *std_move_std__tuple_int__std__default_delete_int____(tuple *);
extern type *std_move_int___(int **);
extern type *get_0ul_int__test_cpp_smart_ptr______2_(tuple *);
extern type *std_get_0ul_int__test_cpp_smart_ptr______2_(tuple *);
extern type *std_get_0ul_int__std__default_delete_int__(tuple *);
extern type *std_get_0ul_int__std__default_delete_int____(tuple *);
extern void std_Tuple_impl_std__default_delete_int______Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *);
extern void std_Tuple_impl_std__default_delete_int_____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int____ *);
extern void tuple_int__std__default_delete_int____tuple(tuple_int__std__default_delete_int__ *, tuple *);
extern void __uniq_ptr_impl_int_std__default_delete_int_______M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *);
extern unsigned long long std___uniq_ptr_impl_std__default_delete_int____M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *);
extern unsigned long long std___uniq_ptr_impl_std__default_delete_int_____M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *);
extern void get(void *);
extern void *get_deleter(void *);
extern long get(unique_ptr_int___std__default_delete_int____ *);
extern type *std_forward_test_cpp_smart_ptr______2_const__(type *);
extern void get(void *);
extern void *get_deleter(void *);
extern type *std_forward_std__tuple_int__std__default_delete_int____(tuple *);
extern void std_tuple_test_cpp_smart_ptr______2__tuple_int___test_cpp_smart_ptr______2_const__true_(tuple_int__test_cpp_smart_ptr______2_ *, int **, __2 *);
extern void std_Tuple_impl_test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_(_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *, int **, __2 *);
extern void std_Tuple_impl_test_cpp_smart_ptr______2___Tuple_impl(__2 *);
extern void std_Head_base_test_cpp_smart_ptr______2___Head_base(__2 *);
extern void std_tuple_int_std__default_delete_int____tuple(tuple_int__std__default_delete_int__ *, tuple *);
extern void std_Tuple_impl_std__default_delete_int______Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int____ *);
extern void std_Tuple_impl_std__default_delete_int_____Tuple_impl(void);
extern void std_Head_base_std__default_delete_int___Head_base(void);
extern void std_Head_base_std__default_delete_int_____Head_base(void);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *, _Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(void);
extern void std_Head_base_int___Head_base(_Head_base_0ul_int__false_ *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *, _Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(void);
extern void std_Head_base_int___Head_base(_Head_base_0ul_int__false_ *);
extern void std_Head_base_std__default_delete_int___Head_base(void);
extern void std_Tuple_impl_std__default_delete_int______Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int____ *);
extern void std_Tuple_impl_std__default_delete_int_____Tuple_impl(void);
extern void std_Head_base_std__default_delete_int_____Head_base(void);
extern void std_tuple_int_std__default_delete_int____tuple(tuple_int__std__default_delete_int__ *, tuple *);
extern void std_tuple_int_std__default_delete_int____tuple(tuple_int__std__default_delete_int__ *);
extern void std_tuple_int_std__default_delete_int_____tuple(tuple_int__std__default_delete_int____ *);
extern void std_tuple_test_cpp_smart_ptr______2__tuple(tuple_int__test_cpp_smart_ptr______2_ *);
extern void std_Head_base_int___Head_base_int___(_Head_base_0ul_int__false_ *, int **);
extern void std_Tuple_impl_test_cpp_smart_ptr______2___Tuple_impl(__2 *);
extern void std_Head_base_test_cpp_smart_ptr______2___Head_base(__2 *);
extern void std_Head_base_0ul_int__false___Head_base_int___(_Head_base_0ul_int__false_ *, int **);
extern void std_Tuple_impl_test_cpp_smart_ptr______2___Tuple_impl(__2 *);
extern int ** std_forward_int___(type *);
extern void * get_deleter(void *);
extern type *std_get_0ul_int__test_cpp_smart_ptr______2_(tuple *);
extern type *std_get_1ul_int__test_cpp_smart_ptr______2_(tuple *);
extern type *std_get_0ul_int__std__default_delete_int__(tuple *);
extern type *std_get_1ul_int__std__default_delete_int__(tuple *);
extern type *std_get_0ul_int__std__default_delete_int____(tuple *);
extern type *std_get_1ul_int__std__default_delete_int____(tuple *);
extern int **std___get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *);
extern __2 *std___get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *);
extern int **std___get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *);
extern default_delete *std___get_helper_1ul_std__default_delete_int__(_Tuple_impl *);
extern int **std___get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *);
extern default_delete *std___get_helper_1ul_std__default_delete_int____(_Tuple_impl *);
extern void std_Tuple_impl_test_cpp_smart_ptr______2___M_head(_Tuple_impl *);
extern _Head_base *std_Head_base_test_cpp_smart_ptr______2___M_head(_Head_base *);
extern void std_Tuple_impl_std__default_delete_int____M_head(_Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int_____M_head(_Tuple_impl *);
extern _Head_base *std_Head_base_int___M_head(_Head_base *);
extern _Head_base *std_Head_base_int____M_head(_Head_base *);
extern _Head_base *std_Head_base_std__default_delete_int___M_head(_Head_base *);
extern _Head_base *std_Head_base_std__default_delete_int_____M_head(_Head_base *);
extern _Head_base *std_Head_base_int___M_head_(_Head_base *);
extern void std_Head_base_int___Head_base_int___(_Head_base_0ul_int__false_ *, int **);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *, _Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int__ *);
extern void std_Tuple_impl_std__default_delete_int____Tuple_impl(void);
extern void std_Head_base_int___Head_base(_Head_base_0ul_int__false_ *);
extern void std_Head_base_std__default_delete_int___Head_base(void);
extern void std_Tuple_impl_std__default_delete_int______Tuple_impl(_Tuple_impl_0ul_int__std__default_delete_int____ *);
extern void std_Tuple_impl_std__default_delete_int_____Tuple_impl(void);
extern void std_Head_base_std__default_delete_int_____Head_base(void);
extern void std_tuple_int_std__default_delete_int____tuple(tuple_int__std__default_delete_int__ *, tuple *);
extern void std_tuple_int_std__default_delete_int____tuple(tuple_int__std__default_delete_int__ *);
extern void std_tuple_int_std__default_delete_int_____tuple(tuple_int__std__default_delete_int____ *);
extern void std_tuple_test_cpp_smart_ptr______2__tuple(tuple_int__test_cpp_smart_ptr______2_ *);
extern int **std_forward_int___(type *);
extern int **forward_int___(type *);

extern unsigned long long std___uniq_ptr_impl_std__default_delete_int____M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *);
extern unsigned long long std___uniq_ptr_impl_std__default_delete_int_____M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *);
extern unsigned long long std___uniq_ptr_impl_test_cpp_smart_ptr______2___M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *);
extern void std_tuple_test_cpp_smart_ptr______2__tuple(tuple_int__test_cpp_smart_ptr______2_ *, tuple *);
extern void std___uniq_ptr_impl_test_cpp_smart_ptr______2____uniq_ptr_impl(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *, __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *);
extern type *std_move_std__tuple_int__std__default_delete_int____(tuple *);
extern void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(unsigned long long, void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, type_info *, void *);
extern void __cxa_begin_catch(void);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_atexit(void (*)(void), void *, void *);
extern void __cxa_finalize(void *);
extern void __cxa_bad_typeid(void);
extern void *__dynamic_cast(void *, const type_info *, const type_info *, int);
extern void __clang_call_terminate(void);
extern void terminate(void);
extern void *operator_new(unsigned long);
extern void *operator_new__(unsigned long);
extern void operator_delete(void *);
extern void operator_delete__(void *);
extern int printf(char *, ...);
extern int vprintf(char *, __builtin_va_list);
extern void *memset(void *, int, size_t);
extern char *strncpy(char *, const char *, size_t);
extern size_t strlen(const char *);
extern int strcmp(const char *, const char *);
extern int std_unique_ptr_int_test_cpp_smart_ptr______2__operator_(void);
extern int std_unique_ptr_int_std__default_delete_int___operator_(void);
extern void _Unwind_Resume(void *);
extern void *malloc(size_t);
extern void free(void *);

/* Additional function declarations for decompiled C++ methods */
extern void Init_constructor(Init *);
extern int test_cpp_lambda_0_operator_(__0 *, int, int);
extern unsigned long long RTTIDerivedA_derivedA_data(void);
extern unsigned long long RTTIDerivedB_derivedB_data(void);
extern void std_ios_base_Init_Init(Init *);
extern void std_ios_base_Init__Init(Init *);
extern void SimpleClass_SimpleClass(SimpleClass *, int, char *);
extern void SimpleClass_setValue(SimpleClass *, int);
extern unsigned int SimpleClass_getValue(SimpleClass *);
extern long SimpleClass_compute(SimpleClass *, int);
extern unsigned long long SimpleClass_getClassID(void);
extern void LifecycleClass_LifecycleClass(LifecycleClass *, unsigned long);
extern unsigned int LifecycleClass_getData(LifecycleClass *, unsigned long);
extern unsigned int LifecycleClass_getInstanceCount(void);
extern void LifecycleClass__LifecycleClass(LifecycleClass *);
extern void Base_Base(Base *);
extern void Derived_Derived(Derived *, int);
extern int Base_virtual_func(Base *, int);
extern int Derived_virtual_func(Derived *, int);
extern void Derived__Derived(Derived *);
extern void Base__Base(Base *);
extern void MultiDerived_MultiDerived(MultiDerived *);
extern void MultiDerived__MultiDerived(MultiDerived *);
extern void DiamondDerived_DiamondDerived(DiamondDerived *);
extern void DiamondDerived__DiamondDerived(DiamondDerived *);
extern void Point_Point(Point *, int, int);
extern unsigned long long Point_operator_(Point *, Point *);
extern bool Point_operator__(Point *, Point *);
extern void Point_operator__inc(Point *);
extern int template_max_int_(int, int);
extern double template_max_double_(double, double);
extern void template_swap_int_(int *, int *);
extern void Container_int_Container(Container_int_ *);
extern void Container_int_push(Container_int_ *, int);
extern unsigned int Container_int_get(Container_int_ *, int);
extern unsigned int Container_int_getSize(Container_int_ *);
extern void Container_double_Container(Container_double_ *);
extern void Container_double_push(Container_double_ *, double);
extern unsigned long long Container_double_get(Container_double_ *, int);
extern unsigned int Container_double_getSize(Container_double_ *);
extern void std_unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_(unique_ptr_int_std__default_delete_int__ *, int *);
extern unsigned int *std_unique_ptr_int_std__default_delete_int___operator_(unique_ptr_int_std__default_delete_int__ *);
extern type *std_move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *);
extern void std_unique_ptr_int_std__default_delete_int___unique_ptr(unique_ptr_int_std__default_delete_int__ *, unique_ptr *);
extern void std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(unique_ptr_int___std__default_delete_int____ *, int *);
extern long std_unique_ptr_int___std__default_delete_int____operator__(unique_ptr_int___std__default_delete_int____ *, unsigned long);
extern void std_unique_ptr_int___std__default_delete_int______unique_ptr(unique_ptr_int___std__default_delete_int____ *);
extern void std_unique_ptr_int_std__default_delete_int___unique_ptr(unique_ptr_int_std__default_delete_int__ *, unique_ptr *);
extern void std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr_test_cpp_smart_ptr______2_void_(unique_ptr_int_test_cpp_smart_ptr______2_ *, int *, __2 *);
extern int *std_unique_ptr_int_test_cpp_smart_ptr______2__operator_(unique_ptr_int_test_cpp_smart_ptr______2_ *);
extern void std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr(unique_ptr_int_test_cpp_smart_ptr______2_ *);
extern void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *);
extern void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *);
extern bool std_type_info_operator__(type_info *, type_info *);
extern long std_type_info_name(type_info *);
extern void BaseA_BaseA(BaseA *);
extern void BaseB_BaseB(BaseB *);
extern unsigned long long MultiDerived_funcA(void);
extern void MultiDerived__MultiDerived_1(MultiDerived *);
extern unsigned long long MultiDerived_funcB(void);
extern void MultiDerived_funcB_1(MultiDerived *);
extern void BaseA__BaseA(BaseA *);
extern void BaseB__BaseB(BaseB *);
extern void VirtualBase_VirtualBase(VirtualBase *);
extern void MiddleA_MiddleA(MiddleA *);
extern void MiddleB_MiddleB(MiddleB *);
extern int MiddleA_func(MiddleA *);
extern void MiddleA__MiddleA(MiddleA *);
extern void MiddleA_func_1(MiddleA *);
extern void MiddleB_func(MiddleB *);
extern void MiddleB__MiddleB(MiddleB *);
extern void MiddleB_func_1(MiddleB *);
extern int DiamondDerived_func(DiamondDerived *);
extern void DiamondDerived__DiamondDerived_1(DiamondDerived *);
extern void DiamondDerived_func_1(DiamondDerived *);
extern unsigned long long VirtualBase_func(void);
extern void VirtualBase__VirtualBase(VirtualBase *);
extern void MiddleA__MiddleA_2(MiddleA *);
extern void MiddleB__MiddleB_2(MiddleB *);
extern void DiamondDerived__DiamondDerived_2(DiamondDerived *);
extern void RTTIBase_RTTIBase(RTTIBase *);
extern void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *);
extern unsigned long long RTTIDerivedA_getType(void);
extern void RTTIBase__RTTIBase(RTTIBase *);
extern unsigned long long RTTIBase_getType(void);
extern void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *);
extern unsigned long long RTTIDerivedB_getType(void);

// Decompiled by BinaryAI
// SHA256: a4f63ef435eea5b112031a7b28170da2869a7716acab5f0eac8e58184eda89b8

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: operator_new__ @ 0x102030
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: printf_wrapper @ 0x102040
int printf_wrapper(char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: std_terminate @ 0x102050
void std_terminate(void)
{
 terminate();
}

// Function: __cxa_begin_catch_wrapper @ 0x102060
void __cxa_begin_catch_wrapper(void)
{
 __cxa_begin_catch();
 return;
}

// Function: strlen_wrapper @ 0x102070
size_t strlen_wrapper(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: __cxa_allocate_exception_wrapper @ 0x102080
void *__cxa_allocate_exception_wrapper(size_t size)
{
 return __cxa_allocate_exception(size);
}

// Function: strncpy_wrapper @ 0x102090
char * strncpy_wrapper(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: memset_wrapper @ 0x1020a0
void * memset_wrapper(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: __cxa_atexit_wrapper @ 0x1020b0
int __cxa_atexit_wrapper(void (*func)(void), void *obj, void *dso)
{
 return __cxa_atexit(func, obj, dso);
}

// Function: operator_delete_wrapper @ 0x1020c0
void operator_delete_wrapper(void *param_1)
{
 free(param_1);
}

// Function: operator_new @ 0x1020d0
void * operator_new(unsigned long param_1)
{
 return malloc(param_1);
}

// Function: __cxa_bad_typeid_wrapper @ 0x1020e0
void __cxa_bad_typeid_wrapper(void)
{
 __cxa_bad_typeid();
 return;
}

// Function: __dynamic_cast_wrapper @ 0x1020f0
void *__dynamic_cast_wrapper(void *src_ptr, const type_info *src_type, const type_info *dest_type, int ptr_offset)
{
 return __dynamic_cast(src_ptr, src_type, dest_type, ptr_offset);
}

// Function: operator_delete__ @ 0x102100
void operator_delete__(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: strcmp_wrapper @ 0x102110
int strcmp_wrapper(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: __cxa_rethrow_wrapper @ 0x102120
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: std_ios_base_Init_Init @ 0x102130
void __thiscall std_ios_base_Init_Init(Init *this)
{
 Init_constructor(this);
}

// Function: __cxa_end_catch_wrapper @ 0x102140
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
 return;
}

// Function: __cxa_throw_wrapper @ 0x102150
void __cxa_throw_wrapper(void *obj, type_info *tinfo, void *dest)
{
 __cxa_throw(obj, tinfo, dest);
}

// Function: _Unwind_Resume_wrapper @ 0x102160
void _Unwind_Resume_wrapper(void *exc_obj)
{
 _Unwind_Resume(exc_obj);
 return;
}

// Function: __cxa_finalize_wrapper @ 0x102170
void __cxa_finalize_wrapper(void *dso)
{
 __cxa_finalize(dso);
}

// Function: __cxx_global_var_init @ 0x102180
void __cxx_global_var_init(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit_wrapper(std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x1021b0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 __cxx_global_var_init();
 return;
}

// Function: _start @ 0x1021c0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 void *stack_ptr = auStack_8;
 __libc_start_main((void *)main,param_2,&stack_ptr,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1021f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102220
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102260
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x1022b0
int test_cpp_member_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass local_30 [40];
 SimpleClass_SimpleClass(local_30,5,"Test");
 SimpleClass_setValue(local_30,10);
 iVar1 = SimpleClass_getValue(local_30);
 iVar2 = SimpleClass_compute(local_30,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x102310
int test_cpp_constructor(void)
{
 int iVar1;
 LifecycleClass local_20 [20];
 int local_c;
 local_c = 0;
 LifecycleClass_LifecycleClass(local_20,5);
 iVar1 = LifecycleClass_getData(local_20,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = iVar1 + local_c;
 LifecycleClass__LifecycleClass(local_20);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x1023b0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1023e0
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived local_20 [16];
 Base local_10 [8];
 Base_Base(local_10);
 Derived_Derived(local_20,3);
 iVar1 = Base_virtual_func(local_10,5);
 iVar2 = Derived_virtual_func(local_20,5);
 iVar3 = call_virtual_func(local_10,5);
 iVar4 = call_virtual_func((Base *)local_20,5);
 Derived__Derived(local_20);
 Base__Base(local_10);
 return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x1024f0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void ***local_60;
 void **local_28;
 unsigned int local_20;
 void **local_18;
 unsigned int local_10;
 MultiDerived_MultiDerived((MultiDerived *)&local_28);
 local_20 = 100;
 local_10 = 200;
 local_60 = (void ***)0x0;
 if (&stack0x00000000 != (char *)0x28) {
 local_60 = &local_18;
 }
 iVar1 = (**local_28)();
 iVar2 = (***local_60)();
 MultiDerived__MultiDerived((MultiDerived *)&local_28);
 return iVar1 + iVar2 + (uint)(&local_28 != local_60);
}

// Function: test_cpp_diamond_inheritance @ 0x1025d0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned long long *local_60;
 long local_38;
 unsigned int auStack_30 [10];
 DiamondDerived_DiamondDerived((DiamondDerived *)&local_38);
 *(unsigned int *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 0x32;
 local_60 = (unsigned long long *)0x0;
 if (&stack0x00000000 != (char *)0x38) {
 local_60 = (unsigned long long *)((long)auStack_30 + *(long *)(local_38 + -0x18) + -8);
 }
 iVar1 = (**(void **)*local_60)();
 *(unsigned int *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 100;
 iVar2 = (**(void **)*local_60)();
 DiamondDerived__DiamondDerived((DiamondDerived *)&local_38);
 return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x1026a0
int test_cpp_operator_overload(void)
{
 byte bVar1;
 int iVar2;
 unsigned long long local_20;
 Point local_18 [8];
 Point local_10 [8];
 Point_Point(local_10,1,2);
 Point_Point(local_18,3,4);
 local_20 = Point_operator_(local_10,local_18);
 bVar1 = Point_operator__(local_10,local_18);
 Point_operator__inc((Point *)&local_20);
 iVar2 = 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = 0;
 }
 return (int)local_20 + ((Point *)&local_20)->y + iVar2;
}

// Function: test_cpp_template_func @ 0x102720
int test_cpp_template_func(void)
{
 int local_20;
 int local_1c;
 double local_18;
 int local_c;
 local_c = template_max_int_(3,7);
 local_18 = template_max_double_(2.5,1.5);
 local_1c = 10;
 local_20 = 0x14;
 template_swap_int_(&local_1c,&local_20);
 return local_c + (int)local_18 + local_1c + local_20;
}

// Function: test_cpp_template_class @ 0x102790
int test_cpp_template_class(void)
{
 double dVar1;
 Container_double_ local_98 [88];
 int local_40;
 int local_3c;
 Container_int_ local_38 [48];
 Container_int_Container(local_38);
 Container_int_push(local_38,10);
 Container_int_push(local_38,0x14);
 Container_int_push(local_38,0x1e);
 local_3c = Container_int_get(local_38,0);
 local_40 = Container_int_getSize(local_38);
 Container_double_Container(local_98);
 Container_double_push(local_98,3.14);
 dVar1 = (double)Container_double_get(local_98,0);
 return local_3c + local_40 + (int)dVar1;
}

// Function: test_cpp_lambda @ 0x102840
int test_cpp_lambda(void)
{
 int iVar1;
 int aVar2;
 __0 local_28 [8];
 unsigned int local_20 [2];
 unsigned int *local_18;
 unsigned int local_10;
 unsigned int local_c;
 local_c = 10;
 local_10 = 0x14;
 local_20[0] = 10;
 local_18 = &local_10;
 iVar1 = test_cpp_lambda_1_operator_((__1 *)local_20,3);
 aVar2 = test_cpp_lambda_0_operator_(local_28,10,0x14);
 return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x1028a0
int __thiscall test_cpp_lambda_1_operator_(__1 *this,int param_1)
{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return param_1 * *(int *)this + **(int **)(this + 8);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x1028d0
int __thiscall test_cpp_lambda_0_operator_(__0 *this,int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x1028f0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception_wrapper(4);
 *puVar1 = 0x2a;
 __cxa_throw_wrapper(puVar1,&int___typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x102a50
int test_cpp_smart_ptr(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 unsigned int *puVar4;
 type *ptVar5;
 unique_ptr_int_test_cpp_smart_ptr______2_ local_48 [8];
 __2 local_40 [4];
 int local_3c;
 unique_ptr_int___std__default_delete_int____ local_38 [12];
 int local_2c;
 unique_ptr_int_std__default_delete_int__ local_28 [24];
 unique_ptr_int_std__default_delete_int__ local_10 [8];
 piVar3 = (int *)operator_new(4);
 *piVar3 = 100;
 std_unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_
 (local_10,piVar3);
 puVar4 = (unsigned int *)std_unique_ptr_int_std__default_delete_int___operator_(local_10);
 *puVar4 = 200;
 ptVar5 = std_move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_10);
 std_unique_ptr_int_std__default_delete_int___unique_ptr(local_28,(unique_ptr *)ptVar5);
 piVar3 = (int *)std_unique_ptr_int_std__default_delete_int___operator_(local_28);
 local_2c = *piVar3;
 piVar3 = (int *)operator_new__(0x14);
 *piVar3 = 1;
 piVar3[1] = 2;
 piVar3[2] = 3;
 piVar3[3] = 4;
 piVar3[4] = 5;
 std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_(local_38,piVar3);
 piVar3 = (int *)std_unique_ptr_int___std__default_delete_int____operator__(local_38,2);
 local_3c = *piVar3;
 piVar3 = (int *)operator_new(4);
 *piVar3 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr_test_cpp_smart_ptr______2_void_
 (local_48,piVar3,local_40);
 piVar3 = (int *)std_unique_ptr_int_test_cpp_smart_ptr______2__operator_(local_48);
 iVar1 = *piVar3;
 iVar2 = local_2c + local_3c;
 std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr(local_48);
 std_unique_ptr_int___std__default_delete_int______unique_ptr(local_38);
 std_unique_ptr_int_std__default_delete_int___unique_ptr(local_28);
 std_unique_ptr_int_std__default_delete_int___unique_ptr(local_10);
 return iVar2 + iVar1;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr_test_cpp_smart_ptr______2_void_ @ 0x102c40
void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2__unique_ptr_test_cpp_smart_ptr______2_void_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
 __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
 return;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr______2__operator_ @ 0x102c80
int * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2__operator_
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long uVar1;
 uVar1 = std_unique_ptr_int_test_cpp_smart_ptr______2__get(this);
 return (int *)uVar1;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr @ 0x102cb0
void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr______2___unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 int **ppiVar1;
 __2 *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)std_unique_ptr_int_test_cpp_smart_ptr______2__get_deleter(this);
 ppiVar2 = (int **)std_move_int___((int **)ppiVar1);
 test_cpp_smart_ptr______2_operator(this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: test_cpp_rtti @ 0x102d30
int test_cpp_rtti(void)
{
 int iVar1;
 long *this;
 long *this_00;
 unsigned long uVar2;
 char *__s;
 size_t sVar3;
 long local_70;
 long local_60;
 int local_1c;
 this = (long *)operator_new(8);
 memset(this,0,8);
 RTTIDerivedA_RTTIDerivedA((RTTIDerivedA *)this);
 this_00 = (long *)operator_new(8);
 memset(this_00,0,8);
 RTTIDerivedB_RTTIDerivedB((RTTIDerivedB *)this_00);
 local_1c = 0;
 if (this == (long *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator__
 (*(type_info **)(*this + -8),(type_info *)&RTTIDerivedA___typeinfo);
 if ((uVar2 & 1) != 0) {
 local_1c = 10;
 }
 if (this_00 == (long *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator__
 (*(type_info **)(*this_00 + -8),(type_info *)&RTTIDerivedB___typeinfo);
 if ((uVar2 & 1) != 0) {
 local_1c = local_1c + 0x14;
 }
 if (this == (long *)0x0) {
 local_60 = 0;
 }
 else {
 local_60 = __dynamic_cast(this,&RTTIBase___typeinfo,&RTTIDerivedA___typeinfo,0);
 }
 if (local_60 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_1c = iVar1 + local_1c;
 }
 if (this_00 == (long *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = __dynamic_cast(this_00,&RTTIBase___typeinfo,&RTTIDerivedB___typeinfo,0);
 }
 if (local_70 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_1c = iVar1 + local_1c;
 }
 if (this == (long *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std_type_info_name(*(type_info **)(*this + -8));
 sVar3 = strlen(__s);
 if (this != (long *)0x0) {
 (**(void **)(*this + 8))();
 }
 if (this_00 != (long *)0x0) {
 (**(void **)(*this_00 + 8))();
 }
 return local_1c + (int)sVar3;
}

// Function: test_cpp_oo_features @ 0x102f70
void test_cpp_oo_features(void)
{
 uint uVar1;
 printf(&DAT_00105025);
 uVar1 = test_cpp_member_func();
 printf(&DAT_0010504a,(unsigned long)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00105068,(unsigned long)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_00105084,(unsigned long)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_001050a0,(unsigned long)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_001050bc,(unsigned long)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_001050d9,(unsigned long)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_001050f5,(unsigned long)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_00105111,(unsigned long)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_0010512d,(unsigned long)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00105149,(unsigned long)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00105166,(unsigned long)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_00105183,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x103080
int main(int param_1, char **param_2)
{
 test_cpp_oo_features();
 return 0;
}

// Function: std___uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false___uniq_ptr_impl_test_cpp_smart_ptr______2_const__ @ 0x1030a0
void __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
 )
{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
 return;
}

// Function: std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___uniq_ptr_impl_test_cpp_smart_ptr______2_const__ @ 0x1030d0
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
 __2 *p_Var1;
 int *local_18;
 __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_10;
 local_18 = param_1;
 local_10 = this;
 p_Var1 = std_forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std_tuple_test_cpp_smart_ptr______2__tuple_int___test_cpp_smart_ptr______2_const__true_
 ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_18,p_Var1);
 return;
}

// Function: std_forward_test_cpp_smart_ptr______2_const__ @ 0x103110
__2 * std::forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
 return (__2 *)param_1;
}

// Function: std_tuple_int__test_cpp_smart_ptr______2__tuple_int___test_cpp_smart_ptr______2_const__true_ @ 0x103120
void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
 (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 __2 *p_Var2;
 ppiVar1 = std_forward_int___((type *)param_1);
 p_Var2 = std_forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std_Tuple_impl_test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 ((_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
 return;
}

// Function: std_Tuple_impl_0ul_int__test_cpp_smart_ptr______2___Tuple_impl_int___test_cpp_smart_ptr______2_const__void_ @ 0x103180
void __thiscall
std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
 (_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
 int **ppiVar1;
 std_forward_test_cpp_smart_ptr______2_const__((type *)param_2);
 std_Tuple_impl_test_cpp_smart_ptr______2___Tuple_impl((__2 *)this);
 ppiVar1 = std_forward_int___((type *)param_1);
 std_Head_base_int___Head_base_int___((_Head_base_0ul_int__false_ *)this,ppiVar1);
 return;
}

// Function: std_Tuple_impl_1ul_test_cpp_smart_ptr______2___Tuple_impl @ 0x1031e0
void std_Tuple_impl_1ul_test_cpp_smart_ptr______2___Tuple_impl(__2 *param_1)
{
 std_Head_base_test_cpp_smart_ptr______2___Head_base(param_1);
 return;
}

// Function: std_Head_base_1ul_test_cpp_smart_ptr______2_true___Head_base @ 0x103210
void std_Head_base_1ul_test_cpp_smart_ptr______2_true___Head_base(__2 *param_1)
{
 return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x103220
unsigned long long __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *puVar1;
}

// Function: std_unique_ptr_int_test_cpp_smart_ptr______2__get_deleter @ 0x103240
unsigned long long __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
 (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long uVar1;
 uVar1 = (unsigned long long)__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
 return uVar1;
}

// Function: test_cpp_smart_ptr______2_operator @ 0x103270
void __thiscall test_cpp_smart_ptr______2_operator(__2 *this,int *param_1)
{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_get_0ul_int__test_cpp_smart_ptr______2_ @ 0x1032b0
type * std::get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int__test_cpp_smart_ptr______2_ @ 0x1032d0
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head(param_1);
 return ppiVar1;
}

// Function: std_Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head @ 0x1032f0
_Head_base * std_Tuple_impl_0ul_int__test_cpp_smart_ptr______2___M_head(_Head_base *param_1)
{
 return std_Head_base_0ul_int__false___M_head(param_1);
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter @ 0x103310
__2 * __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)std_get_1ul_int__test_cpp_smart_ptr______2_((tuple *)this);
 return p_Var1;
}

// Function: std_get_1ul_int__test_cpp_smart_ptr______2_ @ 0x103330
type * std::get_1ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
 __2 *p_Var1;
 p_Var1 = __get_helper_1ul_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}

// Function: std___get_helper_1ul_test_cpp_smart_ptr______2_ @ 0x103350
__2 * std::__get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)std_Head_base_1ul_test_cpp_smart_ptr______2_true___M_head((_Head_base *)param_1);
 return p_Var1;
}

// Function: std_Tuple_impl_1ul_test_cpp_smart_ptr______2___M_head @ 0x103370
_Head_base * std_Tuple_impl_1ul_test_cpp_smart_ptr______2___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_Head_base_1ul_test_cpp_smart_ptr______2_true___M_head @ 0x103390
_Head_base * std_Head_base_1ul_test_cpp_smart_ptr______2_true___M_head(_Head_base *param_1)
{
 return param_1;
}



// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x1033d0
unsigned long long __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *puVar1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x103220
unsigned long long __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
 return *puVar1;
}

// Function: std___uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
__2 * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
 __2 *p_Var1;
 p_Var1 = (__2 *)std_get_1ul_int__test_cpp_smart_ptr______2_((tuple *)this);
 return p_Var1;
}



// Function: SimpleClass_SimpleClass @ 0x103450
void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}

// Function: SimpleClass_setValue @ 0x103490
void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)
{
 *(int *)this = param_1;
 return;
}

// Function: SimpleClass_getValue @ 0x1034b0
unsigned int __thiscall SimpleClass_getValue(SimpleClass *this)
{
 return *(unsigned int *)this;
}

// Function: SimpleClass_compute @ 0x1034c0
long __thiscall SimpleClass_compute(SimpleClass *this,int param_1)
{
 int iVar1;
 size_t sVar2;
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return (long)(iVar1 * param_1) + sVar2;
}

// Function: SimpleClass_getClassID @ 0x103500
unsigned long long SimpleClass_getClassID(void)
{
 return 0x1234;
}

// Function: LifecycleClass_LifecycleClass @ 0x103510
void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,unsigned long param_1)
{
 unsigned long long uVar2;
 void *pvVar3;
 unsigned long local_20;
 *(unsigned long *)(this + 8) = param_1;
 uVar2 = ((unsigned long long)param_1 * 4ULL) & 0xFFFFFFFFFFFFFFFFULL;
 if (((unsigned long long)param_1 * 4ULL) > 0xFFFFFFFFFFFFFFFFULL - 8) {
 uVar2 = 0xffffffffffffffffULL;
 }
 pvVar3 = operator_new__(uVar2);
 *(void **)this = pvVar3;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 *(int *)(*(long *)this + local_20 * 4) = (int)local_20 * 10;
 }
 instance_count = instance_count + 1;
 return;
}

// Function: LifecycleClass_getData @ 0x1035b0
unsigned int __thiscall LifecycleClass_getData(LifecycleClass *this,unsigned long param_1)
{
 unsigned int local_24;
 if (param_1 < *(unsigned long *)(this + 8)) {
 local_24 = *(unsigned int *)(*(long *)this + param_1 * 4);
 }
 else {
 local_24 = 0xffffffff;
 }
 return local_24;
}

// Function: LifecycleClass_getInstanceCount @ 0x103600
unsigned int LifecycleClass_getInstanceCount(void)
{
 return instance_count;
}

// Function: LifecycleClass__LifecycleClass @ 0x103610
void __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}

// Function: Base_Base @ 0x103650
void __thiscall Base_Base(Base *this)
{
 *(char ***)this = &PTR_virtual_func_00108878;
 return;
}

// Function: Derived_Derived @ 0x103670
void __thiscall Derived_Derived(Derived *this,int param_1)
{
 Base_Base((Base *)this);
 *(char ***)this = &PTR_virtual_func_001088b8;
 *(int *)(this + 8) = param_1;
 return;
}

// Function: Base_virtual_func @ 0x1036b0
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived_virtual_func @ 0x1036d0
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived__Derived @ 0x1036f0
void __thiscall Derived::_Derived(Derived *this)
{
 Base::_Base((Base *)this);
 return;
}

// Function: Base__Base @ 0x103710
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: MultiDerived_MultiDerived @ 0x103720
void __thiscall MultiDerived_MultiDerived(MultiDerived *this)
{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 0x10));
 *(char ***)this = &PTR_funcA_00108900;
 *(char ***)(this + 0x10) = &PTR_funcB_00108930;
 return;
}

// Function: MultiDerived__MultiDerived @ 0x103770
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 BaseB::_BaseB((BaseB *)(this + 0x10));
 BaseA::_BaseA((BaseA *)this);
 return;
}

// Function: DiamondDerived_DiamondDerived @ 0x1037a0
void __thiscall DiamondDerived_DiamondDerived(DiamondDerived *this)
{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 0x10));
 *(unsigned long long *)this = 0x108a08;
 *(unsigned long long *)(this + 0x20) = 0x108a70;
 *(unsigned long long *)(this + 0x10) = 0x108a38;
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x103830
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 0x20));
 return;
}

// Function: Point_Point @ 0x103870
void __thiscall Point_Point(Point *this,int param_1,int param_2)
{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}

// Function: Point_operator_ @ 0x103890
unsigned long long __thiscall Point::operator_(Point *this,Point *param_1)
{
 unsigned long long local_10;
 Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 return local_10;
}

// Function: Point_operator__ @ 0x1038d0
bool __thiscall Point::operator__(Point *this,Point *param_1)
{
 bool local_19;
 local_19 = false;
 if (*(int *)this == *(int *)param_1) {
 local_19 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return local_19;
}

// Function: Point_operator_+ @ 0x103920
void __thiscall Point::operator__(Point *this)
{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}

// Function: template_max<int> @ 0x103940
int template_max_int_(int param_1,int param_2)
{
 int local_14;
 local_14 = param_2;
 if (param_2 < param_1) {
 local_14 = param_1;
 }
 return local_14;
}

// Function: template_max<double> @ 0x103970
double template_max_double_(double param_1,double param_2)
{
 double local_20;
 local_20 = param_2;
 if (param_2 < param_1) {
 local_20 = param_1;
 }
 return local_20;
}

// Function: template_swap<int> @ 0x1039b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x1039e0
void __thiscall Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x103a00
void __thiscall Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x103a40
unsigned int __thiscall Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int local_c;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_c = 0;
 }
 else {
 local_c = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return local_c;
}

// Function: Container_int_getSize @ 0x103a90
unsigned int __thiscall Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Container @ 0x103ab0
void __thiscall Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x103ad0
void __thiscall Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x103b10
unsigned long long __thiscall Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long local_10;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_10 = 0;
 }
 else {
 local_10 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return local_10;
}

// Function: Container_double_getSize @ 0x103b70
unsigned int __thiscall Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std_unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_ @ 0x103b90
void __thiscall
std_unique_ptr_int_std__default_delete_int___unique_ptr_std__default_delete_int__void_
 (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr_int_std__default_delete_int___operator_ @ 0x103bc0
unsigned int * __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator_
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = std_unique_ptr_int_std__default_delete_int__get(this);
 return (unsigned int *)uVar1;
}

// Function: std_move_std__unique_ptr_int_std__default_delete_int____ @ 0x103bf0
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
 return (type *)param_1;
}

// Function: std_unique_ptr_int_std__default_delete_int___unique_ptr @ 0x103c00
void __thiscall
std_unique_ptr_int_std__default_delete_int___unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
 (__uniq_ptr_data *)param_1);
 return;
}

// Function: std_unique_ptr_int___std__default_delete_int____unique_ptr_int__std__default_delete_int____void_bool_ @ 0x103c30
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
 (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
 __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
 return;
}

// Function: std_unique_ptr_int___std__default_delete_int____operator__ @ 0x103c60
long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
 (unique_ptr_int___std__default_delete_int____ *this,unsigned long param_1)
{
 long lVar1;
lVar1 = (long)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
	((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
	return lVar1 + param_1 * 4;
}

// Function: std_unique_ptr_int___std__default_delete_int______unique_ptr @ 0x103ca0
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 long *plVar1;
 unsigned long long uVar2;
 plVar1 = (long *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
if (*plVar1 != 0) {
	uVar2 = (unsigned long long)std___uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
	((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
	_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(uVar2,*plVar1);
	}
 *plVar1 = 0;
 return;
}

// Function: std_unique_ptr_int_std__default_delete_int___unique_ptr @ 0x103d10
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 int **ppiVar1;
 default_delete_int_ *this_00;
 int **ppiVar2;
 ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int_ *)std___uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
	((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
ppiVar2 = (int **)std_move_int___(ppiVar1);
	std_default_delete_int__operator__((default_delete_int_ *)this_00,*ppiVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}

// Function: RTTIDerivedA_RTTIDerivedA @ 0x103d80
void __thiscall RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedA_00108d50;
 return;
}

// Function: RTTIDerivedB_RTTIDerivedB @ 0x103dc0
void __thiscall RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(char ***)this = &PTR__RTTIDerivedB_00108da0;
 return;
}

// Function: std_type_info_operator__ @ 0x103e00
bool __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
 int iVar1;
 bool local_29;
 bool local_19;
 local_19 = true;
 if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
 local_29 = false;
 if (**(char **)(this + 8) != '*') {
 iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 local_29 = iVar1 == 0;
 }
 local_19 = local_29;
 }
 return local_19;
}

// Function: RTTIDerivedA_derivedA_data @ 0x103e80
unsigned long long RTTIDerivedA_derivedA_data(void)
{
 return 100;
}

// Function: RTTIDerivedB_derivedB_data @ 0x103e90
unsigned long long RTTIDerivedB_derivedB_data(void)
{
 return 200;
}

// Function: std_type_info_name @ 0x103ea0
long __thiscall std_type_info_name(type_info *this)
{
 long local_20;
 if (**(char **)(this + 8) == '*') {
 local_20 = *(long *)(this + 8) + 1;
 }
 else {
 local_20 = *(long *)(this + 8);
 }
 return local_20;
}

// Function: Base_getName @ 0x103ef0
char * Base_getName(void)
{
 return &DAT_001051a1;
}

// Function: Base__Base @ 0x103f10
void __thiscall Base::_Base(Base *this)
{
 _Base(this);
 operator_delete(this);
 return;
}

// Function: Derived_getName @ 0x103f40
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived__Derived @ 0x103f60
void __thiscall Derived::_Derived(Derived *this)
{
 _Derived(this);
 operator_delete(this);
 return;
}

// Function: BaseA_BaseA @ 0x103f90
void __thiscall BaseA_BaseA(BaseA *this)
{
 *(char ***)this = &PTR_funcA_001089b0;
 return;
}

// Function: BaseB_BaseB @ 0x103fb0
void __thiscall BaseB_BaseB(BaseB *this)
{
 *(char ***)this = &PTR_funcB_001089d8;
 return;
}

// Function: MultiDerived_funcA @ 0x103fd0
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived__MultiDerived @ 0x103fe0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this);
 operator_delete(this);
 return;
}

// Function: MultiDerived_funcB @ 0x104010
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x104020
void __thiscall MultiDerived_funcB(MultiDerived *this)
{
 funcB();
 return;
}

// Function: MultiDerived__MultiDerived @ 0x104040
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -0x10);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x104060
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -0x10);
 return;
}

// Function: BaseA_funcA @ 0x104080
unsigned long long BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA__BaseA @ 0x104090
void __thiscall BaseA::_BaseA(BaseA *this)
{
 return;
}

// Function: BaseA__BaseA @ 0x1040a0
void __thiscall BaseA::_BaseA(BaseA *this)
{
 _BaseA(this);
 operator_delete(this);
 return;
}

// Function: BaseB_funcB @ 0x1040d0
unsigned long long BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB__BaseB @ 0x1040e0
void __thiscall BaseB::_BaseB(BaseB *this)
{
 return;
}

// Function: BaseB__BaseB @ 0x1040f0
void __thiscall BaseB::_BaseB(BaseB *this)
{
 _BaseB(this);
 operator_delete(this);
 return;
}

// Function: VirtualBase_VirtualBase @ 0x104120
void __thiscall VirtualBase_VirtualBase(VirtualBase *this)
{
 *(char ***)this = &PTR_func_00108c38;
 return;
}

// Function: MiddleA_MiddleA @ 0x104140
void __thiscall MiddleA_MiddleA(MiddleA *this)
{
 unsigned long long *in_RSI;
 *(unsigned long long *)this = *in_RSI;
 *(unsigned long long *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleB_MiddleB @ 0x104170
void __thiscall MiddleB_MiddleB(MiddleB *this)
{
 unsigned long long *in_RSI;
 *(unsigned long long *)this = *in_RSI;
 *(unsigned long long *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
 return;
}

// Function: MiddleA_func @ 0x1041a0
int __thiscall MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA__MiddleA @ 0x1041c0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
 return;
}

// Function: MiddleA__MiddleA @ 0x104200
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this);
 operator_delete(this);
 return;
}

// Function: MiddleA_func @ 0x104230
void __thiscall MiddleA_func(MiddleA *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleA__MiddleA @ 0x104250
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleA__MiddleA @ 0x104270
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB_func @ 0x104290
int __thiscall MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB__MiddleB @ 0x1042b0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this);
 VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
 return;
}

// Function: MiddleB__MiddleB @ 0x1042f0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this);
 operator_delete(this);
 return;
}

// Function: MiddleB_func @ 0x104320
void __thiscall MiddleB_func(MiddleB *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleB__MiddleB @ 0x104340
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB__MiddleB @ 0x104360
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived_func @ 0x104380
int __thiscall DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived__DiamondDerived @ 0x1043a0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 operator_delete(this);
 return;
}

// Function: DiamondDerived_func @ 0x1043d0
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + -0x10);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1043f0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x104410
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -0x10);
 return;
}

// Function: DiamondDerived_func @ 0x104430
void __thiscall DiamondDerived_func(DiamondDerived *this)
{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x104450
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x104470
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: VirtualBase_func @ 0x104490
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase__VirtualBase @ 0x1044a0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase__VirtualBase @ 0x1044b0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 _VirtualBase(this);
 operator_delete(this);
 return;
}

// Function: MiddleA__MiddleA @ 0x1044e0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleB__MiddleB @ 0x1044f0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x104500
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 MiddleB::_MiddleB((MiddleB *)(this + 0x10));
 MiddleA::_MiddleA((MiddleA *)this);
 return;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int__true_true___uniq_ptr_data @ 0x104550
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x104580
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
 type *ptVar1;
 unsigned long long *puVar2;
 ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
 tuple<int*,std::default_delete<int>>::tuple
 ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
 puVar2 = (unsigned long long *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
 *puVar2 = 0;
 return;
}

// Function: std_move_std__tuple_int__std__default_delete_int____ @ 0x1045e0
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
 return (type *)param_1;
}

// Function: std_tuple_int__std__default_delete_int____tuple @ 0x1045f0
void __thiscall
std_tuple_int__std__default_delete_int____tuple
 (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
 std_Tuple_impl_std__default_delete_int____Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x104620
unsigned long long __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: __clang_call_terminate @ 0x104640
void __clang_call_terminate(void)
{
 __cxa_begin_catch();
 std::terminate();
}





// Function: std_get_0ul_int__std__default_delete_int__ @ 0x1046a0
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int__std__default_delete_int__ @ 0x1046c0
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std_Tuple_impl_0ul_int__std__default_delete_int____M_head @ 0x1046e0
_Head_base * std_Tuple_impl_0ul_int__std__default_delete_int____M_head(_Head_base *param_1)
{
 return std_Head_base_0ul_int__false___M_head(param_1);
}

// Function: std_Head_base_0ul_int__false___M_head @ 0x104700
_Head_base * std_Head_base_0ul_int__false___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: RTTIBase_RTTIBase @ 0x104710
void __thiscall RTTIBase_RTTIBase(RTTIBase *this)
{
 *(char ***)this = &PTR__RTTIBase_00108d78;
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x104730
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x104750
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 _RTTIDerivedA(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x104780
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase__RTTIBase @ 0x104790
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIBase__RTTIBase @ 0x1047a0
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 _RTTIBase(this);
 operator_delete(this);
 return;
}

// Function: RTTIBase_getType @ 0x1047d0
unsigned long long RTTIBase_getType(void)
{
 return 0;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x1047e0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::_RTTIBase((RTTIBase *)this);
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x104800
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 _RTTIDerivedB(this);
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x104830
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x104840
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x104870
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
 int **ppiVar1;
 tuple<int*,std::default_delete<int>>::tuple_true_true_
 ((tuple_int__std__default_delete_int__ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple_int__std__default_delete_int____tuple<true,true> @ 0x1048b0
void __thiscall
std_tuple_int__std__default_delete_int____tuple_true_true_
 (tuple_int__std__default_delete_int__ *this)
{
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
 return;
}

// Function: std_Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl @ 0x1048e0
void __thiscall
std_Tuple_impl_0ul_int__std__default_delete_int____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
 std_Tuple_impl_std__default_delete_int______Tuple_impl();
 std_Head_base_int___Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std_Tuple_impl_1ul_std__default_delete_int____Tuple_impl @ 0x104910
void std_Tuple_impl_1ul_std__default_delete_int____Tuple_impl(void)
{
 std_Head_base_std__default_delete_int___Head_base();
 return;
}

// Function: std_Head_base_0ul_int__false___Head_base @ 0x104930
void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base_0ul_int__false_ *this)
{
    *(unsigned long long *)this = 0;
    return;
}











// Function: std_Tuple_impl_1ul_std__default_delete_int_____Tuple_impl @ 0x104c20
void std_Tuple_impl_1ul_std__default_delete_int_____Tuple_impl(void)
{
    std_Head_base_std__default_delete_int_____Head_base();
    return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base @ 0x104950
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)
{
 return;
}

// Function: std_unique_ptr_int_std__default_delete_int___get_deleter @ 0x104960
unsigned long long __thiscall
std_unique_ptr_int_std__default_delete_int___get_deleter
 (unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = (unsigned long long)std___uniq_ptr_impl_std__default_delete_int____M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std_default_delete_int__operator__ @ 0x104990
void __thiscall std_default_delete_int__operator__(default_delete_int_ *this,int *param_1)
{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}

// Function: std_move_int___ @ 0x1049d0
type * std_move_int___(int **param_1)
{
 return (type *)param_1;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int____M_deleter @ 0x1049e0
default_delete * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std_get_1ul_int__std__default_delete_int__((tuple *)this);
 return pdVar1;
}

// Function: std_get_1ul_int__std__default_delete_int__ @ 0x104a00
type * std::get_1ul_int__std__default_delete_int__(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1ul_std__default_delete_int__ @ 0x104a20
default_delete * std::__get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std_Head_base_1ul_std__default_delete_int__true___M_head((_Head_base *)param_1);
 return pdVar1;
}

// Function: std_Tuple_impl_1ul_std__default_delete_int____M_head @ 0x104a40
_Head_base * std_Tuple_impl_1ul_std__default_delete_int____M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_Head_base_1ul_std__default_delete_int__true___M_head @ 0x104a60
_Head_base * std_Head_base_1ul_std__default_delete_int__true___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int_std__default_delete_int__get @ 0x104a70
unsigned long long __thiscall
std_unique_ptr_int_std__default_delete_int__get(unique_ptr_int_std__default_delete_int__ *this)
{
 unsigned long long uVar1;
 uVar1 = std___uniq_ptr_impl_std__default_delete_int____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
 return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x104aa0
unsigned long long __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
 return *puVar1;
}

// Function: std_get_0ul_int__std__default_delete_int__ @ 0x104ac0
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
 int **ppiVar1;
 ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
 return (type *)ppiVar1;
}

// Function: std___get_helper_0ul_int__std__default_delete_int__ @ 0x104ae0
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int____M_head(param_1);
 return ppiVar1;
}

// Function: std_Tuple_impl_0ul_int__std__default_delete_int____M_head @ 0x104b00
_Head_base * std_Tuple_impl_0ul_int__std__default_delete_int____M_head(_Head_base *param_1)
{
 return std_Head_base_0ul_int__false___M_head(param_1);
}

// Function: std_Head_base_0ul_int__false___M_head @ 0x104b20
_Head_base * std_Head_base_0ul_int__false___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std___uniq_ptr_data_int_std__default_delete_int____true_true___uniq_ptr_impl @ 0x104b30
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
 return;
}

// Function: std___uniq_ptr_impl_int_std__default_delete_int_____uniq_ptr_impl @ 0x104b60
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
 int **ppiVar1;
 tuple<int*,std::default_delete<int[]>>::tuple_true_true_
 ((tuple_int__std__default_delete_int____ *)this);
 ppiVar1 = (int **)_M_ptr(this);
 *ppiVar1 = param_1;
 return;
}

// Function: std_tuple_int__std__default_delete_int_____tuple_true_true_ @ 0x104ba0
void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
 (tuple_int__std__default_delete_int____ *this)
{
 std_Tuple_impl_std__default_delete_int_____Tuple_impl
 ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x104bd0
unsigned long long __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int____((tuple *)this);
 return *puVar1;
}

// Function: std_Tuple_impl_0ul_int__std__default_delete_int_____Tuple_impl @ 0x104bf0
void __thiscall
std_Tuple_impl_0ul_int__std__default_delete_int_____Tuple_impl
 (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
 std_Tuple_impl_1ul_std__default_delete_int_____Tuple_impl();
 std_Head_base_0ul_int__false___Head_base((_Head_base_0ul_int__false_ *)this);
 return;
}

// Function: std_Tuple_impl_1ul_std__default_delete_int_____Tuple_impl @ 0x104c20
void std_Tuple_impl_1ul_std__default_delete_int_____Tuple_impl(void)
{
 std_Head_base_std__default_delete_int_____Head_base();
 return;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base @ 0x104c40
void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)
{
 return;
}





// Function: std_Tuple_impl_0ul_int__std__default_delete_int_____M_head @ 0x104c90
_Head_base * std_Tuple_impl_0ul_int__std__default_delete_int_____M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int___std__default_delete_int____get_deleter @ 0x104cb0
unsigned long long __thiscall
std_unique_ptr_int___std__default_delete_int____get_deleter
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = (unsigned long long)std___uniq_ptr_impl_std__default_delete_int_____M_deleter
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x104ce0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
 (unsigned long long param_1,void *param_2)
{
 if (param_2 != (void *)0x0) {
 operator_delete__(param_2);
 }
 return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x104d20
default_delete * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std_get_1ul_int__std__default_delete_int____((tuple *)this);
 return pdVar1;
}

// Function: std_get_1ul_int__std__default_delete_int____ @ 0x104d40
type * std::get_1ul_int__std__default_delete_int____(tuple *param_1)
{
 default_delete *pdVar1;
 pdVar1 = __get_helper_1ul_std__default_delete_int____((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}

// Function: std___get_helper_1ul_std__default_delete_int____ @ 0x104d60
default_delete * std::__get_helper_1ul_std__default_delete_int____(_Tuple_impl *param_1)
{
 default_delete *pdVar1;
 pdVar1 = (default_delete *)std_Head_base_1ul_std__default_delete_int____true___M_head((_Head_base *)param_1);
 return pdVar1;
}

// Function: std_Tuple_impl_1ul_std__default_delete_int_____M_head @ 0x104d80
_Head_base * std_Tuple_impl_1ul_std__default_delete_int_____M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_Head_base_1ul_std__default_delete_int____true___M_head @ 0x104da0
_Head_base * std_Head_base_1ul_std__default_delete_int____true___M_head(_Head_base *param_1)
{
 return param_1;
}

// Function: std_unique_ptr_int___std__default_delete_int____get @ 0x104db0
unsigned long long __thiscall
std_unique_ptr_int___std__default_delete_int____get
 (unique_ptr_int___std__default_delete_int____ *this)
{
 unsigned long long uVar1;
 uVar1 = std___uniq_ptr_impl_std__default_delete_int_____M_ptr
 ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
 return uVar1;
}









// Function: std___get_helper_0ul_int__std__default_delete_int____ @ 0x104e20
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
 int **ppiVar1;
 ppiVar1 = (int **)std_Tuple_impl_0ul_int__std__default_delete_int_____M_head(param_1);
 return ppiVar1;
}

// Function: std_Tuple_impl_0ul_int__std__default_delete_int_____M_head @ 0x104e40
_Head_base * std_Tuple_impl_0ul_int__std__default_delete_int_____M_head(_Head_base *param_1)
{
    return param_1;
}

// Function: std_forward_int___ @ 0x104e60
int ** std::forward_int___(type *param_1)
{
 return (int **)param_1;
}

// Function: std_Head_base_0ul_int__false___Head_base_int___ @ 0x104e70
void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base_int___(_Head_base_0ul_int__false_ *this,int **param_1)
{
 int **ppiVar1;
 ppiVar1 = std_forward_int___((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}

// Function: _fini @ 0x104ea4
void _fini(void)
{
    return;
}

// Missing function implementations
void std_Tuple_impl_std__default_delete_int______Tuple_impl(void)
{
    return;
}

void std_Head_base_std__default_delete_int___Head_base(void)
{
    return;
}

void std_Head_base_std__default_delete_int_____Head_base(void)
{
    return;
}

void std_Tuple_impl_std__default_delete_int_____Tuple_impl(void)
{
    return;
}

void funcB(void)
{
    return;
}

void func(void *param_1)
{
    return;
}

void _Base(void *param_1)
{
    return;
}

void _Derived(void *param_1)
{
    return;
}

void _MiddleA(void *param_1)
{
    return;
}

void _MiddleB(void *param_1)
{
    return;
}

void _DiamondDerived(void *param_1)
{
    return;
}

void _MultiDerived(void *param_1)
{
    return;
}

void _RTTIDerivedA(void *param_1)
{
    return;
}

void _RTTIDerivedB(void *param_1)
{
    return;
}

void _RTTIBase(void *param_1)
{
    return;
}

unsigned long long __uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
    unsigned long long *puVar1;
    puVar1 = (unsigned long long *)std_get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
    return *puVar1;
}

__2 * __uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_deleter(__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
    __2 *p_Var1;
    p_Var1 = (__2 *)std_get_1ul_int__test_cpp_smart_ptr______2_((tuple *)this);
    return p_Var1;
}

unsigned long long __uniq_ptr_impl_int_std__default_delete_int___M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
    unsigned long long *puVar1;
    puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
    return *puVar1;
}

default_delete * __uniq_ptr_impl_int_std__default_delete_int___M_deleter(__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
    default_delete *pdVar1;
    pdVar1 = (default_delete *)std_get_1ul_int__std__default_delete_int__((tuple *)this);
    return pdVar1;
}

unsigned long long __uniq_ptr_impl_int_std__default_delete_int_____M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
    unsigned long long *puVar1;
    puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int____((tuple *)this);
    return *puVar1;
}

default_delete * __uniq_ptr_impl_int_std__default_delete_int_____M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
    default_delete *pdVar1;
    pdVar1 = (default_delete *)std_get_1ul_int__std__default_delete_int____((tuple *)this);
    return pdVar1;
}

unsigned long long std___uniq_ptr_impl_std__default_delete_int____M_ptr(__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
    unsigned long long *puVar1;
    puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int__((tuple *)this);
    return *puVar1;
}

unsigned long long std___uniq_ptr_impl_std__default_delete_int_____M_ptr(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
    unsigned long long *puVar1;
    puVar1 = (unsigned long long *)std_get_0ul_int__std__default_delete_int____((tuple *)this);
    return *puVar1;
}

unsigned long long std_unique_ptr_int_test_cpp_smart_ptr______2__get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
    unsigned long long uVar1;
    uVar1 = std___uniq_ptr_impl_int_test_cpp_smart_ptr______2___M_ptr((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
    return uVar1;
}

default_delete * std___uniq_ptr_impl_std__default_delete_int____M_deleter(__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
    default_delete *pdVar1;
    pdVar1 = (default_delete *)std_get_1ul_int__std__default_delete_int__((tuple *)this);
    return pdVar1;
}

default_delete * std___uniq_ptr_impl_std__default_delete_int_____M_deleter(__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
    default_delete *pdVar1;
    pdVar1 = (default_delete *)std_get_1ul_int__std__default_delete_int____((tuple *)this);
    return pdVar1;
}











