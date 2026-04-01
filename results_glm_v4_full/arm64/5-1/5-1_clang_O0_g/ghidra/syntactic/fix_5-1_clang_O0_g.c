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

/* Standard library includes */
#include <stdio.h>
#include <string.h>

/* Additional type definitions for decompiled code */
typedef void *pointer;
typedef void *type;
typedef void (*_func_int)(void);
typedef void (*code)(void);
typedef void *deleter_type;
typedef void anon_class_1_0_00000001_for__M_head_impl;
typedef unsigned char undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;

/* Forward declarations for classes used before definition */
typedef struct Point Point;
typedef struct anon_class_1_0_00000001_for__M_head_impl anon_class_1_0_00000001_for__M_head_impl;
typedef struct anon_class_16_2_b9b285fb anon_class_16_2_b9b285fb;
typedef struct Base Base;
typedef struct SimpleClass SimpleClass;
typedef struct MultiDerived MultiDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct LifecycleClass LifecycleClass;
typedef struct Derived Derived;
typedef struct DiamondDerived DiamondDerived;
typedef struct anon_class_1_0_00000001 anon_class_1_0_00000001;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;

/* Forward declarations for SimpleClass member functions */
extern void SimpleClass_SimpleClass(SimpleClass *this, int v, char *n);
extern void SimpleClass_setValue(SimpleClass *this, int v);
extern int SimpleClass_getValue(SimpleClass *this);
extern int SimpleClass_compute(SimpleClass *this, int x);
extern int SimpleClass_getClassID(void);

/* Forward declarations for LifecycleClass member functions */
extern void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s);
extern int LifecycleClass_getData(LifecycleClass *this, size_t idx);
extern int LifecycleClass_getInstanceCount(void);
extern void LifecycleClass__LifecycleClass(LifecycleClass *this);

/* Forward declarations for Base member functions */
extern void Base_Base(Base *this);
extern void Base__Base(Base *this);
extern int Base_virtual_func(Base *this, int x);
extern void Derived_Derived(Derived *this, int m);
extern void Derived__Derived(Derived *this);
extern int Derived_virtual_func(Derived *this, int x);

/* Forward declarations for MultiDerived member functions */
extern void MultiDerived_MultiDerived(MultiDerived *this);
extern void MultiDerived__MultiDerived(MultiDerived *this);

/* Forward declarations for DiamondDerived member functions */
extern void DiamondDerived_DiamondDerived(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived(DiamondDerived *this);

/* Forward declarations for Point member functions */
extern void Point_Point(Point *this, int x, int y);
extern Point Point_operator_plus(Point *this, Point *other);
extern bool Point_operator_equals(Point *this, Point *other);
extern Point *Point_operator_increment(Point *this);
typedef struct DiamondDerived DiamondDerived;
typedef struct anon_class_1_0_00000001 anon_class_1_0_00000001;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;

/* Forward declarations for C++ std namespace and types */
typedef struct std std;
typedef struct Init Init;
typedef struct type_info type_info;
typedef struct ios_base ios_base;
typedef struct __ioinit __ioinit;
extern struct __ioinit std___ioinit;

/* Forward declarations for type_info member functions */
extern bool std_type_info__operator_(type_info *this, type_info *__arg);
extern char *std_type_info_name(type_info *this);

/* Forward declarations for template functions and classes */
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);
extern int template_max(int a, int b);
extern double template_max(double a, double b);
extern void template_swap(int *a, int *b);

/* Forward declarations for template classes */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct Container_int Container;
typedef struct Container_double Container;

/* Forward declarations for Container<int> member functions */
extern void Container_int_Container(Container_int *this);
extern void Container_int_push(Container_int *this, int value);
extern int Container_int_get(Container_int *this, int idx);
extern int Container_int_getSize(Container_int *this);

/* Forward declarations for Container<double> member functions */
extern void Container_double_Container(Container_double *this);
extern void Container_double_push(Container_double *this, double value);
extern double Container_double_get(Container_double *this, int idx);

/* Forward declarations for unique_ptr template classes */
typedef struct unique_ptr_int_default_delete_int_ unique_ptr_int_default_delete_int_;
typedef struct unique_ptr_int_array_default_delete_int_array_ unique_ptr_int_array_default_delete_int_array_;
typedef struct unique_ptr_int_lambda_deleter unique_ptr_int_lambda_deleter;
typedef struct unique_ptr_default_delete_unique_ptr_int_default_delete_int__ unique_ptr_default_delete_unique_ptr_int_default_delete_int__;
typedef struct unique_ptr_array_default_delete_int_array_ unique_ptr_array_default_delete_int_array_;
typedef struct unique_ptr_int_lambda_at_src_5_1_cpp_445_20__ unique_ptr_int_lambda_at_src_5_1_cpp_445_20__;
typedef struct unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ unique_ptr_int_lambda_at_src_5_1_cpp_445_20_;

/* Forward declarations for lambda operator functions */
extern int test_cpp_lambda_anon_class_16_2_b9b285fb_operator(anon_class_16_2_b9b285fb *this, int x);
extern int test_cpp_lambda_anon_class_1_0_00000001_operator(anon_class_1_0_00000001 *this, int a, int b);

/* Forward declarations for template helper functions */

typedef struct unique_ptr_int_default_delete_int_ unique_ptr_int_std_default_delete_int__;
typedef struct unique_ptr_int_array_default_delete_int_array_ unique_ptr_int_array_std_default_delete_int_array__;

/* Forward declarations for helper types */
typedef struct default_delete_int_ default_delete_int_;
typedef struct tuple_int__std_default_delete_int_ tuple_int__std_default_delete_int_;
typedef struct _Tuple_impl_1UL_std_default_delete_int_ _Tuple_impl_1UL_std_default_delete_int_;
typedef struct std__Tuple_impl_1UL_std_default_delete_int_ std__Tuple_impl_1UL_std_default_delete_int_;
typedef struct _Head_base_1UL_std_default_delete_int__true_ _Head_base_1UL_std_default_delete_int__true_;
typedef struct _Tuple_impl_0UL_int__std_default_delete_int_ _Tuple_impl_0UL_int__std_default_delete_int_;
typedef struct _Head_base_0UL_int__false_ _Head_base_0UL_int__false_;

/* Lambda-related type definitions */
typedef struct tuple_int__lambda_at_src_5_1_cpp_445_20_ tuple_int__lambda_at_src_5_1_cpp_445_20_;
typedef struct _Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_ _Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_;
typedef struct _Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_ _Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_;
typedef struct _Head_base_0UL_int__false_ _Head_base_0UL_int__lambda_at_src_5_1_cpp_445_20__false_;
typedef struct _Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_ _Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_;
typedef struct __uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ __uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_;
typedef struct std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_;
typedef struct std__Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_ std__Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_;
typedef struct std__Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_ std__Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_;
typedef struct std__Head_base_0UL_int__false_ std__Head_base_0UL_int__false_;
typedef struct std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_ std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_;
typedef struct __tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ __tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___;
typedef struct __tuple_element_t_1UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ __tuple_element_t_1UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___;
typedef struct __uniq_ptr_data_int_lambda_at_src_5_1_cpp_445_20__true__false_ __uniq_ptr_data_int_lambda_at_src_5_1_cpp_445_20__true__false_;

/* Simple type definitions for C compatibility */
typedef int * __tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___;
typedef anon_class_1_0_00000001_for__M_head_impl __tuple_element_t_1UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___;

/* Array versions */
typedef struct tuple_int__std_default_delete_int_array_ tuple_int__std_default_delete_int_array_;
typedef struct _Tuple_impl_1UL_std_default_delete_int_array_ _Tuple_impl_1UL_std_default_delete_int_array_;
typedef struct _Head_base_1UL_std_default_delete_int_array__true_ _Head_base_1UL_std_default_delete_int_array__true_;
typedef struct _Tuple_impl_0UL_int__std_default_delete_int_array_ _Tuple_impl_0UL_int__std_default_delete_int_array_;
typedef struct _Head_base_0UL_int__false_ _Head_base_0UL_int__false_;

/* RTTI type_info object declarations */
extern type_info RTTIDerivedA__typeinfo;
extern type_info RTTIDerivedB__typeinfo;
extern type_info RTTIBase__typeinfo;

/* Simple type definitions for C compatibility */
typedef int * __tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___;
typedef anon_class_1_0_00000001_for__M_head_impl __tuple_element_t_1UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___;

/* Array versions */
typedef struct tuple_int__std_default_delete_int_array_ tuple_int__std_default_delete_int_array_;
typedef struct _Tuple_impl_1UL_std_default_delete_int_array_ _Tuple_impl_1UL_std_default_delete_int_array_;
typedef struct _Head_base_1UL_std_default_delete_int_array__true_ _Head_base_1UL_std_default_delete_int_array__true_;
typedef struct _Tuple_impl_0UL_int__std_default_delete_int_array_ _Tuple_impl_0UL_int__std_default_delete_int_array_;
typedef struct _Head_base_0UL_int__false_ _Head_base_0UL_int__false_;

/* Forward declarations for template helper functions */ 
extern default_delete_int_ *std_get_1UL_int__std_default_delete_int_(tuple_int__std_default_delete_int_ *__t);
extern default_delete_int_ *std__Tuple_impl_1UL_std_default_delete_int___M_head(_Tuple_impl_1UL_std_default_delete_int_ *__t);
extern default_delete_int_ *std__Head_base_1UL_std_default_delete_int__true___M_head(_Head_base_1UL_std_default_delete_int__true_ *__b);
extern default_delete_int_ *std___get_helper_1UL_std_default_delete_int_(_Tuple_impl_1UL_std_default_delete_int_ *__t);
extern int **std__Tuple_impl_0UL_int__std_default_delete_int___M_head(_Tuple_impl_0UL_int__std_default_delete_int_ *__t);
extern int **std__Head_base_0UL_int__false___M_head(_Head_base_0UL_int__false_ *__b);
extern int **std___get_helper_0UL_int__std_default_delete_int_(_Tuple_impl_0UL_int__std_default_delete_int_ *__t);
extern anon_class_1_0_00000001_for__M_head_impl *std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true___M_head(_Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_ *__b);

/* Forward declarations for unique_ptr template functions */
extern void std_unique_ptr_int_std_default_delete_int___unique_ptr_std_default_delete_int__void_(unique_ptr_int_std_default_delete_int__ *this, void *__p);
extern void *std_unique_ptr_int_std_default_delete_int___operator_(unique_ptr_int_std_default_delete_int__ *this);
extern unique_ptr_int_std_default_delete_int__ *std_move_std_unique_ptr_int_std_default_delete_int___std_move_(unique_ptr_int_std_default_delete_int__ *__t);
extern void std_unique_ptr_int_std_default_delete_int___unique_ptr_(unique_ptr_int_std_default_delete_int__ *this, unique_ptr_int_std_default_delete_int__ *param_1);
extern void std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr_int__std_default_delete_int_array__void__bool_(unique_ptr_int_array_std_default_delete_int_array__ *this, int *__p);
extern void *std_unique_ptr_int_array_std_default_delete_int_array___operator_(unique_ptr_int_array_std_default_delete_int_array__ *this, size_t __i);
extern void std_unique_ptr_int_array_std_default_delete_int_array____unique_ptr(unique_ptr_int_array_std_default_delete_int_array__ *this);
extern void std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___unique_ptr_lambda_at_src_5_1_cpp_445_20__void_(unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this, void *__p, deleter_type *__d);
extern void *std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___operator_(unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this);
extern void std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___unique_ptr(unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this);

/* Array versions */
extern default_delete_int_ *std_get_1UL_int__std_default_delete_int_array_(tuple_int__std_default_delete_int_array_ *__t);
extern default_delete_int_ *std__Tuple_impl_1UL_std_default_delete_int_array___M_head(_Tuple_impl_1UL_std_default_delete_int_array_ *__t);
extern default_delete_int_ *std__Head_base_1UL_std_default_delete_int_array__true___M_head(_Head_base_1UL_std_default_delete_int_array__true_ *__b);
extern default_delete_int_ *std___get_helper_1UL_std_default_delete_int_array_(_Tuple_impl_1UL_std_default_delete_int_array_ *__t);
extern int **std__Tuple_impl_0UL_int__std_default_delete_int_array___M_head(_Tuple_impl_0UL_int__std_default_delete_int_array_ *__t);
extern int **std__Head_base_0UL_int__false___M_head(_Head_base_0UL_int__false_ *__b);
extern int **std___get_helper_0UL_int__std_default_delete_int_array_(_Tuple_impl_0UL_int__std_default_delete_int_array_ *__t);

/* Empty struct definitions for C++ classes (forward-declared but not defined) */
struct Point { int x; int y; };
struct SimpleClass { int value; char name[32]; };
struct Base { void **_vptr_Base; };
struct Derived { struct Base super_Base; int multiplier; };
struct MultiDerived { struct BaseA super_BaseA; struct BaseB super_BaseB; };
struct RTTIDerivedA { struct RTTIBase super_RTTIBase; };
struct RTTIDerivedB { struct RTTIBase super_RTTIBase; };
struct RTTIBase { void **_vptr_RTTIBase; };
struct LifecycleClass { size_t size; int *data; };
struct DiamondDerived { struct MiddleA super_MiddleA; char field_0x20[16]; };
struct MiddleA { void **_vptr_MiddleA; int dataA; char field_0x10[16]; };
struct MiddleB { void **_vptr_MiddleB; int dataB; };
struct BaseA { void **_vptr_BaseA; int dataA; };
struct BaseB { void **_vptr_BaseB; int dataB; };
struct VirtualBase { void **_vptr_VirtualBase; };
struct Init { };
struct ios_base { };
struct __ioinit { };

/* Empty struct definitions for template classes */
typedef struct default_delete_int_ default_delete_int_;
struct default_delete_int_ { };

typedef struct tuple_int__std_default_delete_int_ tuple_int__std_default_delete_int_;
struct tuple_int__std_default_delete_int_ { };

typedef struct _Tuple_impl_1UL_std_default_delete_int_ _Tuple_impl_1UL_std_default_delete_int_;
struct _Tuple_impl_1UL_std_default_delete_int_ { };

typedef struct __tuple_element_t_1UL_std_tuple_int__std_default_delete_int___ __tuple_element_t_1UL_std_tuple_int__std_default_delete_int___;
struct __tuple_element_t_1UL_std_tuple_int__std_default_delete_int___ { };

typedef struct _Head_base_1UL_std_default_delete_int__true_ _Head_base_1UL_std_default_delete_int__true_;
struct _Head_base_1UL_std_default_delete_int__true_ { };

typedef struct __tuple_element_t_0UL_std_tuple_int__std_default_delete_int___ __tuple_element_t_0UL_std_tuple_int__std_default_delete_int___;
struct __tuple_element_t_0UL_std_tuple_int__std_default_delete_int___ { };

typedef struct _Tuple_impl_0UL_int__std_default_delete_int_ _Tuple_impl_0UL_int__std_default_delete_int_;
struct _Tuple_impl_0UL_int__std_default_delete_int_ { };

typedef struct _Head_base_0UL_int__false_ _Head_base_0UL_int__false_;
struct _Head_base_0UL_int__false_ { };

/* unique_ptr type definitions */
struct unique_ptr_int_default_delete_int_ {
    void *_M_ptr;
};

typedef struct unique_ptr_int_default_delete_int_ unique_ptr_int_default_delete_int_;
typedef struct unique_ptr_int_default_delete_int_ unique_ptr_int_std_default_delete_int__;

struct unique_ptr_int_lambda_deleter {
    void *_M_ptr;
    void *_deleter;
};

typedef struct unique_ptr_int_lambda_deleter unique_ptr_int_lambda_deleter;

struct unique_ptr_int_array_default_delete_int_array_ {
    void *_M_ptr;
};

typedef struct unique_ptr_int_array_default_delete_int_array_ unique_ptr_int_array_default_delete_int_array_;
typedef struct unique_ptr_int_array_default_delete_int_array_ unique_ptr_int_array_std_default_delete_int_array__;

struct unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ {
    void *_M_ptr;
    void *_deleter;
};

typedef struct unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ unique_ptr_int_lambda_at_src_5_1_cpp_445_20_;

/* C++ runtime function declarations */
extern int __cxa_atexit(void (*func)(void *), void *obj, void *dso_handle);
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *obj, void *type, void *dest);
extern void __cxa_begin_catch(void);
extern void std_terminate(void);
extern void __cxa_bad_typeid(void);
extern void *__dynamic_cast(void *src, void *from, void *to, int offset);
extern void deregister_tm_clones(void);

/* Init class constructor declaration */
extern void Init_Init(Init *this);

/* C++ new/delete operator declarations */
extern void *operator_new(size_t size);
extern void *operator_new__(size_t size);
extern void operator_delete(void *ptr);
extern void operator_delete__(void *ptr);

/* Global variable declarations */
extern char completed_0;
extern char DAT_00104bd5;
extern char DAT_00104bfa;
extern char DAT_00104c18;
extern char DAT_00104c34;
extern char DAT_00104c50;
extern char DAT_00104c6c;
extern char DAT_00104c89;
extern char DAT_00104ca5;
extern char DAT_00104cc1;
extern char DAT_00104cdd;
extern char DAT_00104cf9;
extern char DAT_00104d16;
extern char DAT_00104d33;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001019a0 @ 001019a0 */

void FUN_001019a0(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 00101b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __cxx_global_var_init(void)

{
 Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))Init::~Init,&std___ioinit,&__dso_handle);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00101c7c @ 00101c7c */

void FUN_00101c7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101cd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass SStack_34;
 
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +28]
 Unresolved local var: int r1@[DW_OP_breg31(sp): +24]
 Unresolved local var: int r2@[DW_OP_breg31(sp): +20]
 Unresolved local var: int r3@[DW_OP_breg31(sp): +16] */
 SimpleClass_SimpleClass(&SStack_34,5,"Test");
 SimpleClass_setValue(&SStack_34,10);
 iVar1 = SimpleClass_getValue(&SStack_34);
 iVar2 = SimpleClass_compute(&SStack_34,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00101d4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass LStack_28;
 int local_14;
 
 /* Unresolved local var: int result@[???] */
 local_14 = 0;
 /* Unresolved local var: LifecycleClass obj@[???] */
 LifecycleClass_LifecycleClass(&LStack_28,5);
 /* try { // try from 00101d70 to 00101d97 has its CatchHandler @ 00101ddc */
 iVar1 = LifecycleClass_getData(&LStack_28,2);
 local_14 = local_14 + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_14 = local_14 + iVar1;
 LifecycleClass__LifecycleClass(&LStack_28);
 iVar1 = LifecycleClass_getInstanceCount();
 return local_14 + iVar1 * 1000;
}



/* Function: call_virtual_func @ 00101dfc */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101e30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived DStack_28;
 Base BStack_18;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[DW_OP_breg31(sp): +40]
 Unresolved local var: Base * pd@[DW_OP_breg31(sp): +32]
 Unresolved local var: int r3@[DW_OP_breg31(sp): +28]
 Unresolved local var: int r4@[DW_OP_breg31(sp): +24] */
 Base_Base(&BStack_18);
 /* try { // try from 00101e44 to 00101e4f has its CatchHandler @ 00101f14 */
 Derived_Derived(&DStack_28,3);
 /* try { // try from 00101e54 to 00101ec7 has its CatchHandler @ 00101f24 */
 iVar1 = Base_virtual_func(&BStack_18,5);
 iVar2 = Derived_virtual_func(&DStack_28,5);
 iVar3 = call_virtual_func(&BStack_18,5);
 iVar4 = call_virtual_func(&DStack_28.super_Base,5);
 Derived__Derived(&DStack_28);
 Base__Base(&BStack_18);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00101f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived *local_68;
 MultiDerived local_30;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[DW_OP_breg31(sp): +40]
 Unresolved local var: int ptr_equal@[DW_OP_breg31(sp): +36] */
 MultiDerived_MultiDerived(&local_30);
 local_30.super_BaseA.dataA = 100;
 local_30.super_BaseB.dataB = 200;
 local_68 = (MultiDerived *)0x0;
 if (&local_30 != (MultiDerived *)0x0) {
 local_68 = (MultiDerived *)&local_30.super_BaseB;
 }
 /* try { // try from 00101fb8 to 00101fdf has its CatchHandler @ 00102030 */
 iVar1 = (**local_30.super_BaseA._vptr_BaseA)();
 iVar2 = (**(local_68->super_BaseA)._vptr_BaseA)();
 MultiDerived__MultiDerived(&local_30);
 return iVar1 + iVar2 + (uint)(&local_30 != local_68);
}



/* Function: test_cpp_diamond_inheritance @ 00102050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 _func_int *local_68;
 undefined1 local_40 [48];
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[DW_OP_breg31(sp): +56]
 Unresolved local var: int r1@[DW_OP_breg31(sp): +52]
 Unresolved local var: int r2@[DW_OP_breg31(sp): +32] */
 DiamondDerived_DiamondDerived((DiamondDerived *)local_40);
 *(undefined4 *)(*(_func_int **)(local_40._0_8_ + -0x18) + (long)(local_40 + 8)) = 0x32;
 local_68 = (_func_int *)0x0;
 if ((DiamondDerived *)local_40 != (DiamondDerived *)0x0) {
 local_68 = *(_func_int **)(local_40._0_8_ + -0x18) + (long)local_40;
 }
 /* try { // try from 001020c0 to 001020ff has its CatchHandler @ 00102134 */
 iVar1 = (*(code *)**(undefined8 **)local_68)();
 *(undefined4 *)(*(_func_int **)(local_40._0_8_ + -0x18) + (long)(local_40 + 8)) = 100;
 iVar2 = (*(code *)**(undefined8 **)local_68)();
 DiamondDerived__DiamondDerived((DiamondDerived *)local_40);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00102154 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 bool bVar1;
 int iVar2;
 Point local_28;
 Point PStack_20;
 Point PStack_18;
 
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 Point_Point(&PStack_18,1,2);
 Point_Point(&PStack_20,3,4);
 local_28 = Point_operator_plus(&PStack_18,&PStack_20);
 bVar1 = Point_operator_equals(&PStack_18,&PStack_20);
 Point_operator_increment(&local_28);
 iVar2 = 0;
 if (!bVar1) {
 iVar2 = 10;
 }
 return local_28.x + local_28.y + iVar2;
}



/* Function: test_cpp_template_func @ 001021fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int local_28;
 int local_24;
 double local_20;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[DW_OP_breg31(sp): +16]
 Unresolved local var: int a@[DW_OP_breg31(sp): +12]
 Unresolved local var: int b@[DW_OP_breg31(sp): +8] */
 local_14 = template_max_int(3,7);
 local_20 = template_max_double(2.5,1.5);
 local_24 = 10;
 local_28 = 0x14;
 template_swap_int(&local_24,&local_28);
 return local_14 + (int)local_20 + local_24 + local_28;
}



/* Function: test_cpp_template_class @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 double dVar1;
 Container_double CStack_a0;
 int local_44;
 int local_40;
 Container_int CStack_3c;
 
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[DW_OP_breg31(sp):
 +32]
 Unresolved local var: double r3@[DW_OP_breg31(sp): +24] */
 Container_int_Container(&CStack_3c);
 Container_int_push(&CStack_3c,10);
 Container_int_push(&CStack_3c,0x14);
 Container_int_push(&CStack_3c,0x1e);
 local_40 = Container_int_get(&CStack_3c,0);
 local_44 = Container_int_getSize(&CStack_3c);
 Container_double_Container(&CStack_a0);
 Container_double_push(&CStack_a0,3.14);
 dVar1 = Container_double_get(&CStack_a0,0);
 return local_40 + local_44 + (int)dVar1;
}



/* Function: test_cpp_lambda @ 00102330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 anon_class_1_0_00000001 aStack_29;
 anon_class_16_2_b9b285fb local_28;
 int local_18 [2];
 
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[DW_OP_breg31(sp):
 +24]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[DW_OP_breg31(sp): +23]
 Unresolved local var: int r1@[DW_OP_breg31(sp): +16]
 Unresolved local var: int r2@[DW_OP_breg31(sp): +12] */
 local_18[1] = 10;
 local_28.capture_by_ref = local_18;
 local_18[0] = 0x14;
 local_28.capture_by_value = 10;
 iVar1 = test_cpp_lambda_anon_class_16_2_b9b285fb_operator(&local_28,3);
 iVar2 = test_cpp_lambda_anon_class_1_0_00000001_operator(&aStack_29,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 001023a0 */

/* DWARF original prototype: int operator()(anon_class_16_2_b9b285fb * this, int x) */

int __thiscall
test_cpp_lambda::anon_class_16_2_b9b285fb::operator()(anon_class_16_2_b9b285fb *this,int x)

{
 *this->capture_by_ref = *this->capture_by_ref + 5;
 return x * this->capture_by_value + *this->capture_by_ref;
}



/* Function: operator()<int,_int> @ 001023e0 */

/* DWARF original name: operator()<int, int>
 DWARF original prototype: int operator()<int,_int>(anon_class_1_0_00000001 * this, int a, int b)
 */

int __thiscall
test_cpp_lambda_anon_class_1_0_00000001_operator
 (anon_class_1_0_00000001 *this,int a,int b)

{
 return a + b;
}



/* Function: test_cpp_exception @ 00102404 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[DW_OP_breg31(sp): +24]
 Unresolved local var: DerivedException * e@[DW_OP_breg31(sp): +16] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00102424 to 00102433 has its CatchHandler @ 00102438 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102574 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
	int iVar1;
	int iVar2;
	pointer __p;
	type piVar3;
	type *ptVar4;
	int *__p_00;
	pointer __p_01;
	unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ uStack_50;
	deleter_type dStack_45;
	int local_44;
	unique_ptr_int_array_default_delete_int_array_ uStack_40;
	int local_34;
	unique_ptr_int_default_delete_int_ auStack_30 [3];
	unique_ptr_int_default_delete_int_ uStack_18;
 
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_lambda_at_src_5_1_cpp_445_20>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 __p = operator_new(4);
 *__p = 100;
 std_unique_ptr_int_std_default_delete_int___unique_ptr_std_default_delete_int__void_
 (&uStack_18,__p);
 /* try { // try from 001025a4 to 001025ab has its CatchHandler @ 001026e8 */
 piVar3 = std_unique_ptr_int_std_default_delete_int___operator_(&uStack_18);
 *piVar3 = 200;
 ptVar4 = std_move_std_unique_ptr_int_std_default_delete_int___std_move_(&uStack_18);
 std_unique_ptr_int_std_default_delete_int___unique_ptr_(auStack_30,ptVar4);
 /* try { // try from 001025d8 to 001025fb has its CatchHandler @ 001026f8 */
 piVar3 = std_unique_ptr_int_std_default_delete_int___operator_(auStack_30);
 local_34 = *piVar3;
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr_int__std_default_delete_int_array__void__bool_
 (&uStack_40,__p_00);
 /* try { // try from 0010263c to 00102663 has its CatchHandler @ 00102708 */
 piVar3 = std_unique_ptr_int_array_std_default_delete_int_array___operator_(&uStack_40,2);
 local_44 = *piVar3;
 __p_01 = operator_new(4);
 *__p_01 = 500;
 std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___unique_ptr_lambda_at_src_5_1_cpp_445_20__void_
 (&uStack_50,__p_01,&dStack_45);
 /* try { // try from 00102688 to 0010268f has its CatchHandler @ 00102718 */
 piVar3 = std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___operator_(&uStack_50);
 iVar2 = *piVar3;
 iVar1 = local_34 + local_44;
 std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___unique_ptr(&uStack_50);
 std_unique_ptr_int_array_std_default_delete_int_array____unique_ptr(&uStack_40);
 std_unique_ptr_int_std_default_delete_int___unique_ptr_(auStack_30);
 std_unique_ptr_int_std_default_delete_int___unique_ptr_(&uStack_18);
 return iVar1 + iVar2;
}



/* Function: unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void> @ 0010275c */

/* DWARF original name: unique_ptr<(lambda at src/5-1.cpp:445:20), void>
 DWARF original prototype: void
 unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void>(unique_ptr<int,_lambda_at_src_5_1_cpp_445_20>
 * this, pointer __p, deleter_type * __d) */

void __thiscall
std::unique_ptr<int,_lambda_at_src_5_1_cpp_445_20>::
unique_ptr<(lambda_at_src_5_1_cpp:445:20),_void>
 (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this,pointer __p,deleter_type *__d)

{
 /* try { // try from 00102780 to 00102783 has its CatchHandler @ 00102794 */
 std___uniq_ptr_data_int_lambda_at_src_5_1_cpp_445_20__true__false___uniq_ptr_impl
 (&this->_M_t,__p,__d);
 return;
}



/* Function: operator* @ 00102798 */

/* DWARF original prototype: type operator*(unique_ptr<int,_lambda_at_src_5_1_cpp_445_20> * this)
 */

type __thiscall std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___operator_(unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 pointer piVar1;
 
 piVar1 = get(this);
 return piVar1;
}



/* Function: ~unique_ptr @ 001027cc */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_lambda_at_src_5_1_cpp_445_20> *
 this) */

void __thiscall
std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20____unique_ptr
 (unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 
 /* Unresolved local var: pointer * __ptr@[???]
 try { // try from 001027e4 to 0010282b has its CatchHandler @ 00102848 */
 __t = std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___M_ptr
 ((std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ *)this);
 if (*__t != (pointer)0x0) {
 this_00 = std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___get_deleter(this);
 ppiVar1 = std_move_int__std_move_(__t);
 std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true___anon_class_1_0_00000001_for__M_head_impl_operator_(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: test_cpp_rtti @ 0010284c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 bool bVar1;
 int iVar2;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 char *__s;
 size_t sVar3;
 RTTIDerivedB *local_80;
 RTTIDerivedA *local_70;
 int local_24;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 this = operator_new(8);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)0x0;
 RTTIDerivedA::RTTIDerivedA(this);
 this_00 = operator_new(8);
 (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int **)0x0;
 RTTIDerivedB::RTTIDerivedB(this_00);
 local_24 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 bVar1 = std_type_info__operator_
 ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedA__typeinfo);
 if (bVar1) {
 local_24 = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 bVar1 = std_type_info__operator_
 ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedB__typeinfo);
 if (bVar1) {
 local_24 = local_24 + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (this == (RTTIDerivedA *)0x0) {
 local_70 = (RTTIDerivedA *)0x0;
 }
 else {
 local_70 = (RTTIDerivedA *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_70 != (RTTIDerivedA *)0x0) {
 iVar2 = RTTIDerivedA::derivedA_data(local_70);
 local_24 = local_24 + iVar2;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_80 = (RTTIDerivedB *)0x0;
 }
 else {
 local_80 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0)
 ;
 }
 if (local_80 != (RTTIDerivedB *)0x0) {
 iVar2 = RTTIDerivedB::derivedB_data(local_80);
 local_24 = local_24 + iVar2;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = std_type_info_name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar3 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (*(this->super_RTTIBase)._vptr_RTTIBase[1])();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])();
 }
 return local_24 + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 
 printf(&DAT_00104bd5);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00104bfa,(ulong)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00104c18,(ulong)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_00104c34,(ulong)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_00104c50,(ulong)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_00104c6c,(ulong)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_00104c89,(ulong)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_00104ca5,(ulong)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_00104cc1,(ulong)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00104cdd,(ulong)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00104cf9,(ulong)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00104d16,(ulong)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_00104d33,(ulong)uVar1);
 return;
}



/* Function: main @ 00102b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl @ 00102bbc */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_lambda_at_src_5_1_cpp_445_20,_true,_false> * this, pointer
 param_1, anon_class_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std::__uniq_ptr_data<int,_lambda_at_src_5_1_cpp_445_20,_true,_false>::__uniq_ptr_impl
 (__uniq_ptr_data<int,_(lambda_at_src_5_1_cpp:445:20),_true,_false> *this,pointer param_1,
 anon_class_1_0_00000001_for__M_head_impl *param_2)

{
 std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___uniq_ptr_impl_const_lambda_at_src_5_1_cpp_445_20___
 (&this->super___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<const_lambda_at_src_5_1_cpp_445_20_&> @ 00102bf0 */

/* DWARF original name: __uniq_ptr_impl<const (lambda at src/5-1.cpp:445:20) &>
 DWARF original prototype: void
 __uniq_ptr_impl<const_lambda_at_src_5_1_cpp_445_20_&>(__uniq_ptr_impl<int,_lambda_at_src_5_1_cpp_445_20>
 * this, pointer __p, anon_class_1_0_00000001_for__M_head_impl * __d) */

void __thiscall
std::__uniq_ptr_impl<int,_lambda_at_src_5_1_cpp_445_20>::
__uniq_ptr_impl<const_(lambda_at_src_5_1_cpp:445:20)_&>
 (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this,pointer __p,
 anon_class_1_0_00000001_for__M_head_impl *__d)

{
 anon_class_1_0_00000001_for__M_head_impl *__a2;
 pointer local_20;
 __uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *local_18;
 
 local_20 = __p;
 local_18 = this;
 __a2 = std_forward_const_lambda_at_src_5_1_cpp_445_20___(__d);
 std_tuple_int__lambda_at_src_5_1_cpp_445_20___tuple_int____const_lambda_at_src_5_1_cpp_445_20___true_(&this->_M_t,&local_20,__a2);
 return;
}



/* Function: forward<const_lambda_at_src_5_1_cpp_445_20_&> @ 00102c3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<const (lambda at src/5-1.cpp:445:20) &> */

anon_class_1_0_00000001_for__M_head_impl *
std::forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(type *__t)

{
 return __t;
}



/* Function: tuple<int_*&,_const_lambda_at_src_5_1_cpp_445_20_&,_true> @ 00102c50 */

/* DWARF original name: tuple<int *&, const (lambda at src/5-1.cpp:445:20) &, true>
 DWARF original prototype: void
 tuple<int_*&,_const_lambda_at_src_5_1_cpp_445_20_&,_true>(tuple<int_*,_lambda_at_src_5_1_cpp_445_20>
 * this, int * * __a1, anon_class_1_0_00000001_for__M_head_impl * __a2) */

void __thiscall
std::tuple<int_*,_lambda_at_src_5_1_cpp_445_20>::
tuple<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_true>
 (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *this,int **__a1,
 anon_class_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 anon_class_1_0_00000001_for__M_head_impl *__tail;
 
 __head = forward<int_*&>(__a1);
 __tail = std_forward_const_lambda_at_src_5_1_cpp_445_20___(__a2);
 /* try { // try from 00102c90 to 00102c93 has its CatchHandler @ 00102ca4 */
 std__Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20___Tuple_impl_int____const_lambda_at_src_5_1_cpp_445_20___void_
 (&this->super__Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_,__head,__tail);
 return;
}



/* Function: _Tuple_impl<int_*&,_const_lambda_at_src_5_1_cpp_445_20_&,_void> @ 00102ca8 */

/* DWARF original name: _Tuple_impl<int *&, const (lambda at src/5-1.cpp:445:20) &, void>
 DWARF original prototype: void
 _Tuple_impl<int_*&,_const_lambda_at_src_5_1_cpp_445_20_&,_void>(_Tuple_impl<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20>
 * this, int * * __head, anon_class_1_0_00000001_for__M_head_impl * __tail) */

void __thiscall
std::_Tuple_impl<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20>::
_Tuple_impl<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_void>
 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *this,int **__head,
 anon_class_1_0_00000001_for__M_head_impl *__tail)

{
 anon_class_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 
 __head_00 = std_forward_const_lambda_at_src_5_1_cpp_445_20___(__tail);
 std__Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20___Tuple_impl
 (&this->super__Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_,__head_00);
 __h = std_forward_int____(__head);
 std__Head_base_0UL_int__false___Head_base((__h));
 return;
}



/* Function: _Tuple_impl @ 00102cfc */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_lambda_at_src_5_1_cpp_445_20> *
 this, anon_class_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std::_Tuple_impl<1UL,_lambda_at_src_5_1_cpp_445_20>::_Tuple_impl
 (_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *this,
 anon_class_1_0_00000001_for__M_head_impl *__head)

{
 std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true___Head_base
 (&this->super__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_,__head);
 return;
}



/* Function: _Head_base @ 00102d28 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_lambda_at_src_5_1_cpp_445_20,_true> *
 this, anon_class_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std::_Head_base<1UL,_lambda_at_src_5_1_cpp_445_20,_true>::_Head_base
 (_Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true> *this,
 anon_class_1_0_00000001_for__M_head_impl *__h)

{
 return;
}



/* Function: _M_ptr @ 00102d3c */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_lambda_at_src_5_1_cpp_445_20> *
 this) */

pointer * __thiscall
std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___M_ptr
 (std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 __tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ *ppiVar1;
 
 ppiVar1 = std_get_0UL_int__lambda_at_src_5_1_cpp_445_20_(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00102d60 */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr<int,_lambda_at_src_5_1_cpp_445_20> * this) */

deleter_type * __thiscall
std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20___get_deleter
 (unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 /* try { // try from 00102d74 to 00102d7b has its CatchHandler @ 00102d90 */
 paVar1 = std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___M_deleter
 ((std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ *)this);
 return paVar1;
}



/* Function: operator() @ 00102d94 */

/* DWARF original prototype: void operator()(anon_class_1_0_00000001_for__M_head_impl * this, int *
 p) */

void __thiscall
std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true___anon_class_1_0_00000001_for__M_head_impl_operator_
 (anon_class_1_0_00000001_for__M_head_impl *this,int *p)

{
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p);
 }
 return;
}



/* Function: get<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20> @ 00102ddc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ *
std_get_0UL_int__lambda_at_src_5_1_cpp_445_20_
 (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
 (&__t->super__Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20> @ 00102e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int **
std___get_helper_0UL_int__lambda_at_src_5_1_cpp_445_20_
 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20>::_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00102e24 */

int **
std__Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20___M_head
 (_Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0UL_int__false___M_head((_Head_base_0UL_int__false_ *)__t);
 return ppiVar1;
}



/* Function: _M_deleter @ 00102e48 */

/* DWARF original prototype: anon_class_1_0_00000001_for__M_head_impl *
 _M_deleter(__uniq_ptr_impl<int,_lambda_at_src_5_1_cpp_445_20> * this) */

anon_class_1_0_00000001_for__M_head_impl * __thiscall
std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___M_deleter
 (std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 __tuple_element_t_1UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ *p_Var1;
 
 p_Var1 = std_get_1UL_int__lambda_at_src_5_1_cpp_445_20_(&this->_M_t);
 return p_Var1;
}



/* Function: get<1UL,_int_*,_lambda_at_src_5_1_cpp_445_20> @ 00102e6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t_1UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ *
std_get_1UL_int__lambda_at_src_5_1_cpp_445_20_
 (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std___get_helper_1UL_lambda_at_src_5_1_cpp_445_20_
 ((_Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_ *)__t);
 return paVar1;
}



/* Function: __get_helper<1UL,_lambda_at_src_5_1_cpp_445_20> @ 00102e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std___get_helper_1UL_lambda_at_src_5_1_cpp_445_20_
 (_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20___M_head(__t);
 return paVar1;
}



/* Function: _M_head @ 00102eb4 */

anon_class_1_0_00000001_for__M_head_impl *
std__Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20___M_head
 (_Tuple_impl_1UL_lambda_at_src_5_1_cpp_445_20_ *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true___M_head
 (&__t->super__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_);
 return paVar1;
}



/* Function: _M_head @ 00102ed8 */

anon_class_1_0_00000001_for__M_head_impl *
std__Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true___M_head
 (_Head_base_1UL_lambda_at_src_5_1_cpp_445_20__true_ *__b)

{
 return &__b->_M_head_impl;
}



/* Function: get @ 00102eec */

/* DWARF original prototype: pointer get(unique_ptr<int,_lambda_at_src_5_1_cpp_445_20> * this) */

pointer __thiscall
std_unique_ptr_int_lambda_at_src_5_1_cpp_445_20__get
 (unique_ptr_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 pointer piVar1;
 
 /* try { // try from 00102f00 to 00102f07 has its CatchHandler @ 00102f1c */
 piVar1 = std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___M_ptr
 ((std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ *)this);
 return piVar1;
}



/* Function: _M_ptr @ 00102f20 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_lambda_at_src_5_1_cpp_445_20> *
 this) */

pointer __thiscall
std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20___M_ptr
 (std___uniq_ptr_impl_int_lambda_at_src_5_1_cpp_445_20_ *this)

{
 __tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ *ppiVar1;
 
 ppiVar1 = std_get_0UL_int__lambda_at_src_5_1_cpp_445_20_(&this->_M_t);
 return *ppiVar1;
}



/* Function: get<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20> @ 00102f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t_0UL_std_tuple_int__lambda_at_src_5_1_cpp_445_20___ *
std_get_0UL_int__lambda_at_src_5_1_cpp_445_20_
 (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
 (&__t->super__Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20> @ 00102f6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int **
std___get_helper_0UL_int__lambda_at_src_5_1_cpp_445_20_
 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl<0UL,_int_*,_lambda_at_src_5_1_cpp_445_20>::_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00102f90 */

int **
std__Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20___M_head
 (_Tuple_impl_0UL_int__lambda_at_src_5_1_cpp_445_20_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0UL_int__false___M_head((_Head_base_0UL_int__false_ *)__t);
 return ppiVar1;
}



/* Function: SimpleClass @ 00102fb4 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int v,char *n)

{
 this->value = v;
 strncpy(this->name,n,0x1f);
 this->name[0x1f] = '\0';
 return;
}



/* Function: setValue @ 00103000 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int v)

{
 this->value = v;
 return;
}



/* Function: getValue @ 00103020 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass::getValue(SimpleClass *this)

{
 return this->value;
}



/* Function: compute @ 00103038 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass::compute(SimpleClass *this,int x)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = this->value;
 sVar2 = strlen(this->name);
 return (int)sVar2 + iVar1 * x;
}



/* Function: getClassID @ 00103080 */

int SimpleClass::getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103088 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,size_t s)

{
 undefined1 auVar1 [16];
 int *piVar2;
 ulong uVar3;
 ulong local_28;
 
 this->size = s;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = s;
 uVar3 = s * 4;
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar3 = 0xffffffffffffffff;
 }
 piVar2 = operator_new__(uVar3);
 this->data = piVar2;
 /* Unresolved local var: size_t i@[DW_OP_breg31(sp): +8] */
 for (local_28 = 0; local_28 < s; local_28 = local_28 + 1) {
 this->data[local_28] = (int)local_28 * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 00103138 */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass::getData(LifecycleClass *this,size_t idx)

{
 int local_1c;
 
 if (idx < this->size) {
 local_1c = this->data[idx];
 }
 else {
 local_1c = -1;
 }
 return local_1c;
}



/* Function: getInstanceCount @ 00103190 */

int LifecycleClass::getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 0010319c */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this) */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
 if (this->data != (int *)0x0) {
 operator_delete__(this->data);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 001031e8 */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
 this->_vptr_Base = (_func_int **)&PTR_virtual_func_00117858;
 return;
}



/* Function: Derived @ 0010320c */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived::Derived(Derived *this,int m)

{
 Base::Base(&this->super_Base);
 (this->super_Base)._vptr_Base = (_func_int **)&PTR_virtual_func_00117898;
 this->multiplier = m;
 return;
}



/* Function: virtual_func @ 0010325c */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00103278 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: ~Derived @ 0010329c */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
 Base::~Base(&this->super_Base);
 return;
}



/* Function: ~Base @ 001032c0 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: MultiDerived @ 001032d0 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
 BaseA::BaseA(&this->super_BaseA);
 BaseB::BaseB(&this->super_BaseB);
 (this->super_BaseA)._vptr_BaseA = (_func_int **)&PTR_funcA_001178e0;
 (this->super_BaseB)._vptr_BaseB = (_func_int **)&PTR__ZThn16_N12MultiDerived5funcBEv_00117910;
 return;
}



/* Function: ~MultiDerived @ 00103330 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 BaseB::~BaseB(&this->super_BaseB);
 BaseA::~BaseA(&this->super_BaseA);
 return;
}



/* Function: DiamondDerived @ 00103364 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
 VirtualBase::VirtualBase((VirtualBase *)&this->field_0x20);
 MiddleA::MiddleA(&this->super_MiddleA,&PTR_PTR_00117a70);
 MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,&PTR_PTR_00117a80);
 (this->super_MiddleA)._vptr_MiddleA = (_func_int **)&PTR_func_001179e8;
 *(undefined ***)&this->field_0x20 = &PTR__ZTv0_n24_N14DiamondDerived4funcEv_00117a50;
 *(undefined ***)&(this->super_MiddleA).field_0x10 = &PTR__ZThn16_N14DiamondDerived4funcEv_00117a18
 ;
 return;
}



/* Function: ~DiamondDerived @ 00103400 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this,&VTT);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x20);
 return;
}



/* Function: Point @ 0010343c */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point::Point(Point *this,int _x,int _y)

{
 this->x = _x;
 this->y = _y;
 return;
}



/* Function: operator+ @ 00103468 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point::operator+(Point *this,Point *other)

{
 Point local_18;
 
 Point(&local_18,this->x + other->x,this->y + other->y);
 return local_18;
}



/* Function: operator== @ 001034b8 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point::operator==(Point *this,Point *other)

{
 bool bVar1;
 
 bVar1 = false;
 if (this->x == other->x) {
 bVar1 = this->y == other->y;
 }
 return bVar1;
}



/* Function: operator++ @ 0010351c */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point::operator++(Point *this)

{
 this->x = this->x + 1;
 this->y = this->y + 1;
 return this;
}



/* Function: template_max<int> @ 00103548 */

int template_max_int(int a,int b)

{
 int local_c;
 
 local_c = b;
 if (b < a) {
 local_c = a;
 }
 return local_c;
}



/* Function: template_max<double> @ 0010358c */

double template_max_double(double a,double b)

{
 double local_18;
 
 local_18 = b;
 if (b < a) {
 local_18 = a;
 }
 return local_18;
}



/* Function: template_swap<int> @ 001035d4 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00103610 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00103628 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00103674 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container_int_get(Container_int *this,int idx)

{
 int local_4;
 
 if ((idx < 0) || (this->size <= idx)) {
 local_4 = 0;
 }
 else {
 local_4 = this->data[idx];
 }
 return local_4;
}



/* Function: getSize @ 001036d4 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 001036ec */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container_double_Container(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00103704 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00103750 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container_double_get(Container_double *this,int idx)

{
 double local_8;
 
 if ((idx < 0) || (this->size <= idx)) {
 local_8 = 0.0;
 }
 else {
 local_8 = this->data[idx];
 }
 return local_8;
}



/* Function: getSize @ 001037b4 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: unique_ptr<std::default_delete<int>,_void> @ 001037cc */

/* DWARF original name: unique_ptr<std::default_delete<int>, void>
 DWARF original prototype: void
 unique_ptr<std::default_delete<int>,_void>(unique_ptr<int,_std::default_delete<int>_> * this,
 pointer __p) */

void __thiscall
std_unique_ptr_int_std_default_delete_int___unique_ptr_std_default_delete_int__void_
 (unique_ptr_int_std_default_delete_int__ *this,pointer __p)

{
 /* try { // try from 001037e8 to 001037eb has its CatchHandler @ 001037fc */
 std___uniq_ptr_data_int_std_default_delete_int__true__true___uniq_ptr_impl(&this->_M_t,__p);
 return;
}



/* Function: operator* @ 00103800 */

/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type __thiscall std_unique_ptr_int_std_default_delete_int___operator_(unique_ptr_int_std_default_delete_int__ *this)

{
 pointer piVar1;
 
 piVar1 = get(this);
 return piVar1;
}



/* Function: move<std::unique_ptr<int,_std::default_delete<int>_>_&> @ 00103834 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::unique_ptr<int, std::default_delete<int> > &> */

type * std_move_std_unique_ptr_int_std_default_delete_int___std_move_
 (unique_ptr_int_std_default_delete_int__ *__t)

{
 return __t;
}



/* Function: unique_ptr @ 00103848 */

/* DWARF original prototype: void unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this,
 unique_ptr<int,_std::default_delete<int>_> * param_1) */

void __thiscall
std_unique_ptr_int_std_default_delete_int___unique_ptr_
 (unique_ptr_int_std_default_delete_int__ *this,
 unique_ptr_int_std_default_delete_int__ *param_1)

{
 std___uniq_ptr_data_int_std_default_delete_int__true__true___uniq_ptr_data
 (&this->_M_t,&param_1->_M_t);
 return;
}



/* Function: unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool> @ 00103874 */

/* DWARF original name: unique_ptr<int *, std::default_delete<int[]>, void, bool>
 DWARF original prototype: void
 unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>(unique_ptr<int[],_std::default_delete<int[]>_>
 * this, int * __p) */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr_int__std_default_delete_int_array__void__bool_
 (unique_ptr_int_array_std_default_delete_int_array__ *this,int *__p)

{
 /* try { // try from 00103890 to 00103893 has its CatchHandler @ 001038a4 */
 __uniq_ptr_data_int_std_default_delete_int_array__true__true___uniq_ptr_impl(&this->_M_t,__p);
 return;
}



/* Function: operator[] @ 001038a8 */

/* DWARF original prototype: type operator[](unique_ptr<int[],_std::default_delete<int[]>_> * this,
 size_t __i) */

pointer __thiscall
std_unique_ptr_int_array_std_default_delete_int_array___operator_
 (unique_ptr_int_array_std_default_delete_int_array__ *this,size_t __i)

{
 pointer piVar1;
 
 piVar1 = get(this);
 return piVar1 + __i;
}



/* Function: ~unique_ptr @ 001038e8 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int[],_std::default_delete<int[]>_> * this)
 */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array____unique_ptr
 (unique_ptr_int_array_std_default_delete_int_array__ *this)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 
 /* Unresolved local var: pointer * __ptr@[DW_OP_breg31(sp): +16] */
 ppiVar1 = __uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_array__ *)this);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = get_deleter(this);
 /* try { // try from 00103928 to 0010392b has its CatchHandler @ 00103948 */
 default_delete_int_array___operator_int_(this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: ~unique_ptr @ 0010394c */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this) */

void __thiscall
std_unique_ptr_int_std_default_delete_int____unique_ptr
 (unique_ptr_int_std_default_delete_int__ *this)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 
 /* Unresolved local var: pointer * __ptr@[DW_OP_breg31(sp): +16] */
 __t = __uniq_ptr_impl_int_std_default_delete_int___M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int__ *)this);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter(this);
 ppiVar1 = move_int__std_move_(__t);
 /* try { // try from 0010399c to 0010399f has its CatchHandler @ 001039bc */
 default_delete_int__operator_(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: RTTIDerivedA @ 001039c0 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedA_00117d30;
 return;
}



/* Function: RTTIDerivedB @ 00103a04 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedB_00117d80;
 return;
}



/* Function: operator== @ 00103a48 */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std_type_info__operator_(type_info *this,type_info *__arg)

{
 bool bVar1;
 int iVar2;
 
 bVar1 = true;
 if ((*(long *)(this + 8) != *(long *)(__arg + 8)) && (bVar1 = false, **(char **)(this + 8) != '*')
 ) {
 iVar2 = strcmp(*(char **)(this + 8),*(char **)(__arg + 8));
 bVar1 = iVar2 == 0;
 }
 return bVar1;
}



/* Function: derivedA_data @ 00103ae8 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
 return 100;
}



/* Function: derivedB_data @ 00103afc */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
 return 200;
}



/* Function: name @ 00103b10 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std_type_info_name(type_info *this)

{
 char *local_18;
 
 if (**(char **)(this + 8) == '*') {
 local_18 = (char *)(*(long *)(this + 8) + 1);
 }
 else {
 local_18 = *(char **)(this + 8);
 }
 return local_18;
}



/* Function: getName @ 00103b64 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00103b7c */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 ~Base(this);
 operator_delete(this);
 return;
}



/* Function: getName @ 00103bac */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00103bc4 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
 ~Derived(this);
 operator_delete(this);
 return;
}



/* Function: BaseA @ 00103bf4 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA::BaseA(BaseA *this)

{
 this->_vptr_BaseA = (_func_int **)&PTR_funcA_00117990;
 return;
}



/* Function: BaseB @ 00103c18 */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB::BaseB(BaseB *this)

{
 this->_vptr_BaseB = (_func_int **)&PTR_funcB_001179b8;
 return;
}



/* Function: funcA @ 00103c3c */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00103c50 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00103c80 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00103c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
 long in_x0;
 
 MultiDerived::funcB((MultiDerived *)(in_x0 + -0x10));
 return;
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00103cac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
 long in_x0;
 
 MultiDerived::~MultiDerived((MultiDerived *)(in_x0 + -0x10));
 return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00103cc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
 long in_x0;
 
 MultiDerived::~MultiDerived((MultiDerived *)(in_x0 + -0x10));
 return;
}



/* Function: funcA @ 00103cdc */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00103cf0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00103d00 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 ~BaseA(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00103d30 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00103d44 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00103d54 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 ~BaseB(this);
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00103d84 */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
 this->_vptr_VirtualBase = (_func_int **)&PTR_func_00117c18;
 return;
}



/* Function: MiddleA @ 00103da8 */

/* DWARF original prototype: void MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::MiddleA(MiddleA *this,void **vtt)

{
 this->_vptr_MiddleA = *vtt;
 *(void **)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) = vtt[1];
 return;
}



/* Function: MiddleB @ 00103ddc */

/* DWARF original prototype: void MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::MiddleB(MiddleB *this,void **vtt)

{
 this->_vptr_MiddleB = *vtt;
 *(void **)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) = vtt[1];
 return;
}



/* Function: func @ 00103e10 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00103e38 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this,&VTT);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10);
 return;
}



/* Function: ~MiddleA @ 00103e74 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this);
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00103ea4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
 long *in_x0;
 
 MiddleA::func((MiddleA *)((long)in_x0 + *(long *)(*in_x0 + -0x18)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00103ec4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
 long *in_x0;
 
 MiddleA::~MiddleA((MiddleA *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00103ee4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
 long *in_x0;
 
 MiddleA::~MiddleA((MiddleA *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: func @ 00103f04 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00103f2c */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this,&VTT);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10);
 return;
}



/* Function: ~MiddleB @ 00103f68 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this);
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00103f98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
 long *in_x0;
 
 MiddleB::func((MiddleB *)((long)in_x0 + *(long *)(*in_x0 + -0x18)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00103fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
 long *in_x0;
 
 MiddleB::~MiddleB((MiddleB *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00103fd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
 long *in_x0;
 
 MiddleB::~MiddleB((MiddleB *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: func @ 00103ff8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 00104020 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 00104050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
 long in_x0;
 
 DiamondDerived::func((DiamondDerived *)(in_x0 + -0x10));
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 00104068 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
 long in_x0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)(in_x0 + -0x10));
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00104080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
 long in_x0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)(in_x0 + -0x10));
 return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00104098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
 long *in_x0;
 
 DiamondDerived::func((DiamondDerived *)((long)in_x0 + *(long *)(*in_x0 + -0x18)));
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 001040b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
 long *in_x0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 001040d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
 long *in_x0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: func @ 001040f8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 0010410c */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 0010411c */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 ~VirtualBase(this);
 operator_delete(this);
 return;
}



/* Function: ~MiddleA @ 0010414c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **vtt)

{
 return;
}



/* Function: ~MiddleB @ 00104160 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **vtt)

{
 return;
}



/* Function: ~DiamondDerived @ 00104174 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * vtt) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **vtt)

{
 MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,vtt + 3);
 MiddleA::~MiddleA(&this->super_MiddleA,vtt + 1);
 return;
}



/* Function: __uniq_ptr_data @ 001041c0 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this,
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * param_1) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int__true__true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int__true__true_ *this,
 __uniq_ptr_data_int_std_default_delete_int__true__true_ *param_1)

{
 std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int__,
 &param_1->super___uniq_ptr_impl_int_std_default_delete_int__);
 return;
}



/* Function: __uniq_ptr_impl @ 001041ec */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this, __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int__ *this,
 __uniq_ptr_impl_int_std_default_delete_int__ *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 
 ptVar1 = std_move_std_tuple_int__std_default_delete_int___std_move_(&__u->_M_t);
 std_tuple_int__std_default_delete_int___tuple(&this->_M_t,ptVar1);
 /* try { // try from 00104220 to 00104227 has its CatchHandler @ 00104240 */
 ppiVar2 = std___uniq_ptr_impl_int_std_default_delete_int___M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return;
}



/* Function: move<std::tuple<int_*,_std::default_delete<int>_>_&> @ 00104244 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::tuple<int *, std::default_delete<int> > &> */

type * std_move_std_tuple_int__std_default_delete_int___std_move_
 (tuple_int__std_default_delete_int_ *__t)

{
 return __t;
}



/* Function: tuple @ 00104258 */

/* DWARF original prototype: void tuple(tuple<int_*,_std::default_delete<int>_> * this,
 tuple<int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std_tuple_int__std_default_delete_int___tuple
 (tuple_int__std_default_delete_int_ *this,
 tuple_int__std_default_delete_int_ *param_1)

{
 std__Tuple_impl_0UL_int__std_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_0UL_int__std_default_delete_int__,
 &param_1->super__Tuple_impl_0UL_int__std_default_delete_int__);
 return;
}



/* Function: _M_ptr @ 00104284 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this) */

pointer * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int__ *this)

{
 __tuple_element_t_0UL_std_tuple_int__std_default_delete_int___ *ppiVar1;
 
 ppiVar1 = std_get_0UL_int__std_default_delete_int_(&this->_M_t);
 return ppiVar1;
}



/* Function: __clang_call_terminate @ 001042a8 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 std::terminate();
}



/* Function: _Tuple_impl @ 001042b4 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *
 this, _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std__Tuple_impl_0UL_int__std_default_delete_int___Tuple_impl
 (_Tuple_impl_0UL_int__std_default_delete_int_ *this,
 _Tuple_impl_0UL_int__std_default_delete_int_ *param_1)

{
 std__Tuple_impl_1UL_std_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_1UL_std_default_delete_int__,
 &param_1->super__Tuple_impl_1UL_std_default_delete_int__);
 *this = *param_1;
 return;
}



/* Function: _Tuple_impl @ 001042f4 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int>_> * this,
 _Tuple_impl<1UL,_std::default_delete<int>_> * __in) */

void __thiscall
std__Tuple_impl_1UL_std_default_delete_int___Tuple_impl
 (_Tuple_impl_1UL_std_default_delete_int_ *this,
 _Tuple_impl_1UL_std_default_delete_int_ *__in)

{
 return;
}



/* Function: get<0UL,_int_*,_std::default_delete<int>_> @ 00104308 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int>_>_> *
std_get_0UL_int__std_default_delete_int_(tuple<int_*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0UL_int__std_default_delete_int_
 (&__t->super__Tuple_impl_0UL_int__std_default_delete_int_);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int>_> @ 0010432c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int> > */

int ** std___get_helper_0UL_int__std_default_delete_int_
 (_Tuple_impl_0UL_int__std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0UL_int__std_default_delete_int___M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104350 */

int ** std::_Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_M_head
 (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0UL_int__false___M_head((__t));
 return ppiVar1;
}



/* Function: _M_head @ 00104374 */

int ** std::_Head_base<0UL,_int_*,_false>::_M_head(_Head_base<0UL,_int_*,_false> *__b)

{
 return &__b->_M_head_impl;
}



/* Function: RTTIBase @ 00104388 */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
 this->_vptr_RTTIBase = (_func_int **)&PTR__RTTIBase_00117d58;
 return;
}



/* Function: ~RTTIDerivedA @ 001043ac */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::~RTTIBase(&this->super_RTTIBase);
 return;
}



/* Function: ~RTTIDerivedA @ 001043d0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 ~RTTIDerivedA(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104400 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00104414 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIBase @ 00104424 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 ~RTTIBase(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104454 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 00104468 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::~RTTIBase(&this->super_RTTIBase);
 return;
}



/* Function: ~RTTIDerivedB @ 0010448c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 ~RTTIDerivedB(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 001044bc */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 001044d0 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
 param_1) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int__true__true___uniq_ptr_impl
 (__uniq_ptr_data_int_std_default_delete_int__true__true_ *this,pointer param_1)

{
 __uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int__,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 001044fc */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this, pointer __p) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int__ *this,pointer __p)

{
 pointer *ppiVar1;
 
 std_tuple_int__std_default_delete_int___tuple_true__true(&this->_M_t);
 ppiVar1 = _M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: tuple<true,_true> @ 00104540 */

/* DWARF original name: tuple<true, true>
 DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int>_> * this)
 */

void __thiscall
std_tuple_int__std_default_delete_int___tuple_true__true
 (tuple_int__std_default_delete_int_ *this)

{
 /* try { // try from 00104554 to 00104557 has its CatchHandler @ 00104568 */
 std__Tuple_impl_0UL_int__std_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_0UL_int__std_default_delete_int__);
 return;
}



/* Function: _Tuple_impl @ 0010456c */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *
 this) */

void __thiscall
std__Tuple_impl_0UL_int__std_default_delete_int___Tuple_impl
 (_Tuple_impl_0UL_int__std_default_delete_int_ *this)

{
 std__Tuple_impl_1UL_std_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_1UL_std_default_delete_int__);
 std__Head_base_0UL_int__false___Head_base((std__Head_base_0UL_int__false_ *)this);
 return;
}



/* Function: _Tuple_impl @ 0010459c */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int>_> * this) */

void __thiscall
std__Tuple_impl_1UL_std_default_delete_int___Tuple_impl
 (_Tuple_impl_1UL_std_default_delete_int_ *this)

{
 std__Head_base_1UL_std_default_delete_int__true___Head_base
 (&this->super__Head_base_1UL_std_default_delete_int__true_);
 return;
}



/* Function: _Head_base @ 001045c0 */

/* DWARF original prototype: void _Head_base(_Head_base<0UL,_int_*,_false> * this) */

void __thiscall std__Head_base_0UL_int__false___Head_base(std__Head_base_0UL_int__false_ *this)

{
 this->_M_head_impl = (int *)0x0;
 return;
}



/* Function: _Head_base @ 001045d8 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_std::default_delete<int>,_true> * this)
 */

void __thiscall
std_Head_base_1UL_std_default_delete_int__true___Head_base
 (_Head_base_1UL_std_default_delete_int__true_ *this)

{
 return;
}



/* Function: get_deleter @ 001045e8 */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
 this) */

deleter_type * __thiscall
std_unique_ptr_int_std_default_delete_int___get_deleter
 (unique_ptr_int_std_default_delete_int__ *this)

{
 default_delete_int_ *pdVar1;
 
 /* try { // try from 001045fc to 00104603 has its CatchHandler @ 00104618 */
 pdVar1 = std___uniq_ptr_impl_int_std_default_delete_int___M_deleter
 ((std___uniq_ptr_impl_int_std_default_delete_int__ *)this);
 return pdVar1;
}



/* Function: operator() @ 0010461c */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall std_default_delete_int__operator_(default_delete_int_ *this,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr);
 }
 return;
}



/* Function: move<int_*&> @ 00104658 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<int *&> */

int ** std_move_int__std_move_(int **__t)

{
 return __t;
}



/* Function: _M_deleter @ 0010466c */

/* DWARF original prototype: default_delete<int> *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete_int_ * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int__ *this)

{
 __tuple_element_t_1UL_std_tuple_int__std_default_delete_int___ *p_Var1;
 
 p_Var1 = std_get_1UL_int__std_default_delete_int_(&this->_M_t);
 return p_Var1;
}



/* Function: get<1UL,_int_*,_std::default_delete<int>_> @ 00104690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, std::default_delete<int> > */

__tuple_element_t_1UL_std_tuple_int__std_default_delete_int___ *
std_get_1UL_int__std_default_delete_int_(tuple_int__std_default_delete_int_ *__t)

{
 default_delete_int_ *pdVar1;
 
 pdVar1 = std___get_helper_1UL_std_default_delete_int_
 ((std__Tuple_impl_1UL_std_default_delete_int_ *)__t);
 return pdVar1;
}



/* Function: __get_helper<1UL,_std::default_delete<int>_> @ 001046b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, std::default_delete<int> > */

default_delete_int_ *
std___get_helper_1UL_std_default_delete_int_(_Tuple_impl_1UL_std_default_delete_int_ *__t)

{
 default_delete_int_ *pdVar1;
 
 pdVar1 = std__Tuple_impl_1UL_std_default_delete_int___M_head(__t);
 return pdVar1;
}



/* Function: _M_head @ 001046d8 */

default_delete_int_ *
std__Tuple_impl_1UL_std_default_delete_int___M_head
 (_Tuple_impl_1UL_std_default_delete_int_ *__t)

{
 default_delete_int_ *pdVar1;
 
 pdVar1 = std__Head_base_1UL_std_default_delete_int__true___M_head
 (&__t->super__Head_base_1UL_std_default_delete_int__true_);
 return pdVar1;
}



/* Function: _M_head @ 001046fc */

default_delete_int_ *
std__Head_base_1UL_std_default_delete_int__true___M_head
 (_Head_base_1UL_std_default_delete_int__true_ *__b)

{
 return &__b->_M_head_impl;
}



/* Function: get @ 00104710 */

/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std_unique_ptr_int_std_default_delete_int__get
 (unique_ptr_int_std_default_delete_int__ *this)

{
 pointer piVar1;
 
 /* try { // try from 00104724 to 0010472b has its CatchHandler @ 00104740 */
 piVar1 = std___uniq_ptr_impl_int_std_default_delete_int___M_ptr
 ((std___uniq_ptr_impl_int_std_default_delete_int__ *)this);
 return piVar1;
}



/* Function: _M_ptr @ 00104744 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
 */

pointer __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int__ *this)

{
 __tuple_element_t_0UL_std_tuple_int__std_default_delete_int___ *ppiVar1;
 
 ppiVar1 = std_get_0UL_int__std_default_delete_int_(&this->_M_t);
 return *ppiVar1;
}



/* Function: get<0UL,_int_*,_std::default_delete<int>_> @ 0010476c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int>_>_> *
std_get_0UL_int__std_default_delete_int_(tuple<int_*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0UL_int__std_default_delete_int_
 (&__t->super__Tuple_impl_0UL_int__std_default_delete_int_);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int>_> @ 00104790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int> > */

int ** std___get_helper_0UL_int__std_default_delete_int_
 (_Tuple_impl_0UL_int__std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0UL_int__std_default_delete_int___M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 001047b4 */

int ** std__Tuple_impl_0UL_int__std_default_delete_int___M_head
 (_Tuple_impl_0UL_int__std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0UL_int__false___M_head((_Head_base_0UL_int__false_ *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 001047d8 */

int ** std__Head_base_0UL_int__false___M_head(_Head_base_0UL_int__false_ *__b)

{
 return &__b->_M_head_impl;
}



/* Function: __uniq_ptr_impl @ 001047ec */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> * this, pointer
 param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> *this,pointer param_1)

{
 std___uniq_ptr_impl_int_std_default_delete_int_array_____uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int_array__,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104818 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int[]>_>
 * this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this,pointer __p)

{
 pointer *ppiVar1;
 
 std_tuple_int__std_default_delete_int_array___tuple_true__true(&this->_M_t);
 ppiVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: tuple<true,_true> @ 0010485c */

/* DWARF original name: tuple<true, true>
 DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int[]>_> *
 this) */

void __thiscall
std::tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>
 (tuple<int_*,_std::default_delete<int[]>_> *this)

{
 /* try { // try from 00104870 to 00104873 has its CatchHandler @ 00104884 */
 std__Tuple_impl_0UL_int__std_default_delete_int_array___Tuple_impl
 (&this->super__Tuple_impl_0UL_int__std_default_delete_int_array__);
 return;
}



/* Function: _M_ptr @ 00104888 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
 this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
 __tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
 
 ppiVar1 = std_get_0UL_int__std_default_delete_int_array_(&this->_M_t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 001048ac */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *
 this) */

void __thiscall
std::std__Tuple_impl_0UL_int__std_default_delete_int_array___Tuple_impl
 (std__Tuple_impl_0UL_int__std_default_delete_int_array__ *this)

{
 std__Tuple_impl_1UL_std_default_delete_int_array___Tuple_impl
 (&this->super__Tuple_impl_1UL_std_default_delete_int_array__);
 _Head_base<0UL,_int_*,_false>::_Head_base((_Head_base<0UL,_int_*,_false> *)this);
 return;
}



/* Function: _Tuple_impl @ 001048dc */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int[]>_> * this)
 */

void __thiscall
std::_Tuple_impl<1UL,_std::default_delete<int[]>_>::_Tuple_impl
 (_Tuple_impl<1UL,_std::default_delete<int[]>_> *this)

{
 std__Head_base_1UL_std_default_delete_int_array__true___Head_base
 (&this->super__Head_base_1UL_std_default_delete_int_array__true_);
 return;
}



/* Function: _Head_base @ 00104900 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_std::default_delete<int[]>,_true> *
 this) */

void __thiscall
std__Head_base_1UL_std_default_delete_int_array__true___Head_base
 (std__Head_base_1UL_std_default_delete_int_array__true_ *this)

{
 return;
}



/* Function: get<0UL,_int_*,_std::default_delete<int[]>_> @ 00104910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int[]> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<0UL,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0UL,_int_*,_std::default_delete<int[]>_>
 (&__t->super__Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int[]>_> @ 00104934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int[]> > */

int ** std___get_helper_0UL_int__std_default_delete_int_array_
 (_Tuple_impl_0UL_int__std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0UL_int__std_default_delete_int_array___M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104958 */

int ** std__Tuple_impl_0UL_int__std_default_delete_int_array___M_head
 (_Tuple_impl_0UL_int__std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0UL_int__false___M_head((_Head_base_0UL_int__false_ *)__t);
 return ppiVar1;
}



/* Function: get_deleter @ 0010497c */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get_deleter
 (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
 default_delete_int_ *pdVar1;
 
 /* try { // try from 00104990 to 00104997 has its CatchHandler @ 001049ac */
 pdVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array___M_deleter
 ((std___uniq_ptr_impl_int_std_default_delete_int_array__ *)this);
 return pdVar1;
}



/* Function: operator()<int> @ 001049b0 */

/* DWARF original prototype: type operator()<int>(default_delete<int[]> * this, int * __ptr) */

type __thiscall std::default_delete<int[]>::operator()<int>(default_delete<int[]> *this,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: _M_deleter @ 001049ec */

/* DWARF original prototype: default_delete<int[]> *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int[]>_> * this) */

default_delete<int[]> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
 default_delete_int_ *p_Var1;
 
 p_Var1 = std_get_1UL_int__std_default_delete_int_array_(&this->_M_t);
 return p_Var1;
}



/* Function: get<1UL,_int_*,_std::default_delete<int[]>_> @ 00104a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, std::default_delete<int[]> > */

__tuple_element_t<1UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<1UL,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
 default_delete_int_ *pdVar1;
 
 pdVar1 = std___get_helper_1UL_std_default_delete_int_array_
 ((_Tuple_impl_1UL_std_default_delete_int_array__ *)__t);
 return pdVar1;
}



/* Function: __get_helper<1UL,_std::default_delete<int[]>_> @ 00104a34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, std::default_delete<int[]> > */

default_delete<int[]> *
std::__get_helper<1UL,_std::default_delete<int[]>_>
 (_Tuple_impl<1UL,_std::default_delete<int[]>_> *__t)

{
 default_delete_int_ *pdVar1;
 
 pdVar1 = std__Tuple_impl_1UL_std_default_delete_int_array___M_head(__t);
 return pdVar1;
}



/* Function: _M_head @ 00104a58 */

default_delete<int[]> *
std::_Tuple_impl<1UL,_std::default_delete<int[]>_>::_M_head
 (_Tuple_impl<1UL,_std::default_delete<int[]>_> *__t)

{
 default_delete_int_ *pdVar1;
 
 pdVar1 = std__Head_base_1UL_std_default_delete_int_array__true___M_head
 (&__t->super__Head_base_1UL_std_default_delete_int_array__true_);
 return pdVar1;
}



/* Function: _M_head @ 00104a7c */

default_delete_int_ *
std__Head_base_1UL_std_default_delete_int_array__true___M_head
 (_Head_base_1UL_std_default_delete_int_array__true_ *__b)

{
 return &__b->_M_head_impl;
}



/* Function: get @ 00104a90 */

/* DWARF original prototype: pointer get(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

pointer __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get
 (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
 pointer piVar1;
 
 /* try { // try from 00104aa4 to 00104aab has its CatchHandler @ 00104ac0 */
 piVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 ((std___uniq_ptr_impl_int_std_default_delete_int_array__ *)this);
 return piVar1;
}



/* Function: _M_ptr @ 00104ac4 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
 this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
 __tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
 
 ppiVar1 = std_get_0UL_int__std_default_delete_int_array_(&this->_M_t);
 return *ppiVar1;
}



/* Function: get<0UL,_int_*,_std::default_delete<int[]>_> @ 00104aec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int[]> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<0UL,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0UL,_int_*,_std::default_delete<int[]>_>
 (&__t->super__Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>);
 return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int[]>_> @ 00104b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int[]> > */

int ** std___get_helper_0UL_int__std_default_delete_int_array_
 (_Tuple_impl_0UL_int__std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0UL_int__std_default_delete_int_array___M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00104b34 */

int ** std__Tuple_impl_0UL_int__std_default_delete_int_array___M_head
 (_Tuple_impl_0UL_int__std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0UL_int__false___M_head((_Head_base_0UL_int__false_ *)__t);
 return ppiVar1;
}



/* Function: forward<int_*&> @ 00104b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<int *&> */

int ** std_forward_int____(int **__t)

{
 return __t;
}



/* Function: _Head_base<int_*&> @ 00104b6c */

/* DWARF original name: _Head_base<int *&>
 DWARF original prototype: void _Head_base<int_*&>(_Head_base<0UL,_int_*,_false> * this, int * *
 __h) */

void __thiscall
std::_Head_base<0UL,_int_*,_false>::_Head_base<int_*&>
 (_Head_base<0UL,_int_*,_false> *this,int **__h)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int____(__h);
 this->_M_head_impl = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 216 */
