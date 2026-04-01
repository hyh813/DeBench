/* Auto-injected type definitions by preprocessor */
#define __thiscall

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

/* Additional type definitions for decompiled code */
typedef void* pointer;
typedef int type;

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct anon_class_1_0_00000001 anon_class_1_0_00000001;
typedef struct anon_class_8_2_336b0e7f anon_class_8_2_336b0e7f;
typedef struct anon_class_1_0_00000001_for__M_head_impl anon_class_1_0_00000001_for__M_head_impl;
typedef struct unique_ptr_int_lambda unique_ptr_int_lambda;
typedef struct unique_ptr_int_default_delete unique_ptr_int_default_delete;
typedef struct unique_ptr_int_array_default_delete unique_ptr_int_array_default_delete;
typedef struct tuple_int_ptr_lambda tuple_int_ptr_lambda;
typedef struct tuple_int_ptr_default_delete tuple_int_ptr_default_delete;
typedef struct tuple_int_ptr_default_delete_array tuple_int_ptr_default_delete_array;
typedef struct _Tuple_impl_0U_int_ptr_lambda _Tuple_impl_0U_int_ptr_lambda;
typedef struct _Tuple_impl_1U_lambda _Tuple_impl_1U_lambda;
typedef struct _Tuple_impl_0U_int_ptr_default_delete _Tuple_impl_0U_int_ptr_default_delete;
typedef struct _Tuple_impl_1U_default_delete _Tuple_impl_1U_default_delete;
typedef struct _Tuple_impl_0U_int_ptr_default_delete_array _Tuple_impl_0U_int_ptr_default_delete_array;
typedef struct _Tuple_impl_1U_default_delete_array _Tuple_impl_1U_default_delete_array;
typedef struct _Head_base_0U_int_ptr_false _Head_base_0U_int_ptr_false;
typedef struct _Head_base_1U_lambda_true _Head_base_1U_lambda_true;
typedef struct _Head_base_1U_default_delete_true _Head_base_1U_default_delete_true;
typedef struct _Head_base_1U_default_delete_array_true _Head_base_1U_default_delete_array_true;
typedef struct _Tuple_impl_1U_lambda _Tuple_impl_1U_lambda;
typedef struct _Tuple_impl_1U_default_delete _Tuple_impl_1U_default_delete;
typedef struct _Tuple_impl_1U_default_delete_array _Tuple_impl_1U_default_delete_array;
typedef struct __uniq_ptr_impl_int_lambda __uniq_ptr_impl_int_lambda;
typedef struct __uniq_ptr_impl_int_default_delete __uniq_ptr_impl_int_default_delete;
typedef struct __uniq_ptr_impl_int_default_delete_array __uniq_ptr_impl_int_default_delete_array;
typedef struct __uniq_ptr_data_int_lambda __uniq_ptr_data_int_lambda;
typedef struct __uniq_ptr_data_int_default_delete __uniq_ptr_data_int_default_delete;
typedef struct __uniq_ptr_data_int_default_delete_array __uniq_ptr_data_int_default_delete_array;

/* SimpleClass structure */
struct SimpleClass {
 int value;
 char name[32];
};

/* LifecycleClass structure */
struct LifecycleClass {
 size_t size;
 int *data;
};

/* Anonymous lambda class structures */
struct anon_class_1_0_00000001 {
 int _dummy;
};

struct anon_class_8_2_336b0e7f {
 int capture_by_value;
 int *capture_by_ref;
};

struct anon_class_1_0_00000001_for__M_head_impl {
 int _dummy;
};

/* Unique pointer structures */
struct unique_ptr_int_lambda {
 void *_M_t;
};

struct unique_ptr_int_default_delete {
 void *_M_t;
};

struct unique_ptr_int_array_default_delete {
 void *_M_t;
};

/* Tuple structures */
struct tuple_int_ptr_lambda {
 void *super__Tuple_impl_0U_int_ptr_lambda;
};

struct tuple_int_ptr_default_delete {
 void *super__Tuple_impl_0U_int_ptr_default_delete;
};

struct tuple_int_ptr_default_delete_array {
 void *super__Tuple_impl_0U_int_ptr_default_delete_array;
};

/* Head base structures - define before Tuple impl that uses them */
struct _Head_base_0U_int_ptr_false {
 int *_M_head_impl;
};

struct _Head_base_1U_lambda_true {
 struct anon_class_1_0_00000001_for__M_head_impl _M_head_impl;
};

struct _Head_base_1U_default_delete_true {
 int _M_head_impl;
};

struct _Head_base_1U_default_delete_array_true {
 int _M_head_impl;
};

/* Tuple impl structures */
struct _Tuple_impl_0U_int_ptr_lambda {
 struct _Head_base_0U_int_ptr_false super__Head_base_0U_int_ptr_false;
};

struct _Tuple_impl_1U_lambda {
 struct _Head_base_1U_lambda_true super__Head_base_1U_lambda_true;
};

struct _Tuple_impl_1U_default_delete {
 struct _Head_base_1U_default_delete_true super__Head_base_1U_default_delete_true;
};

struct _Tuple_impl_0U_int_ptr_default_delete {
 struct _Tuple_impl_1U_default_delete super__Tuple_impl_1U_default_delete;
 struct _Head_base_0U_int_ptr_false super__Head_base_0U_int_ptr_false;
};

struct _Tuple_impl_1U_default_delete_array {
 struct _Head_base_1U_default_delete_array_true super__Head_base_1U_default_delete_array_true;
};

struct _Tuple_impl_0U_int_ptr_default_delete_array {
 struct _Tuple_impl_1U_default_delete_array super__Tuple_impl_1U_default_delete_array;
 struct _Head_base_0U_int_ptr_false super__Head_base_0U_int_ptr_false;
};

/* Uniq ptr impl structures */
struct __uniq_ptr_impl_int_lambda {
 struct tuple_int_ptr_lambda _M_t;
};

struct __uniq_ptr_impl_int_default_delete {
 struct tuple_int_ptr_default_delete _M_t;
};

struct __uniq_ptr_impl_int_default_delete_array {
 struct tuple_int_ptr_default_delete_array _M_t;
};

/* Uniq ptr data structures */
struct __uniq_ptr_data_int_lambda {
 struct __uniq_ptr_impl_int_lambda super___uniq_ptr_impl_int_lambda;
};

struct __uniq_ptr_data_int_default_delete {
 struct __uniq_ptr_impl_int_default_delete super___uniq_ptr_impl_int_default_delete;
};

struct __uniq_ptr_data_int_default_delete_array {
 struct __uniq_ptr_impl_int_default_delete_array super___uniq_ptr_impl_int_default_delete_array;
};

/* Global instance count for LifecycleClass */
int instance_count = 0;


extern void SimpleClass_SimpleClass(SimpleClass *this, int v, const char *n);
extern void SimpleClass_setValue(SimpleClass *this, int v);
extern int SimpleClass_getValue(SimpleClass *this);
extern int SimpleClass_compute(SimpleClass *this, int x);
extern int SimpleClass_getClassID(void);

/* Forward declarations for LifecycleClass methods */
extern void LifecycleClass_LifecycleClass(LifecycleClass *this, size_t s);
extern int LifecycleClass_getData(LifecycleClass *this, size_t idx);
extern void LifecycleClass_dtor(LifecycleClass *this);
extern int LifecycleClass_getInstanceCount(void);



/* std namespace stubs - C compatible */
typedef struct std_ios_base_Init {
 int _dummy;
} std_ios_base_Init_t;

/* Global std objects */
std_ios_base_Init_t std___ioinit;

/* External declarations for std functions */
extern void std_ios_base_Init_Init(std_ios_base_Init_t *this);
extern void std_ios_base_Init_destroy(std_ios_base_Init_t *this);

/* Additional std function declarations */
extern void std_unique_ptr_int_default_delete__unique_ptr(
 unique_ptr_int_default_delete *this, void *__p);
extern int std_unique_ptr_int_default_delete__operator_star(
 unique_ptr_int_default_delete *this);
extern int *std_move_unique_ptr_int_default_delete_ref(
 unique_ptr_int_default_delete *__t);
extern void std_unique_ptr_int_default_delete__unique_ptr_copy(
 unique_ptr_int_default_delete *this,
 unique_ptr_int_default_delete *param_1);
extern void std_unique_ptr_int_array_default_delete__unique_ptr(
 unique_ptr_int_array_default_delete *this, int *__p);
extern int std_unique_ptr_int_array_default_delete__operator_bracket(
 unique_ptr_int_array_default_delete *this, size_t __i);
extern void __uniq_ptr_data_int_default_delete___uniq_ptr_impl(
 void *this, void *__p);
extern void __uniq_ptr_data_int_default_delete___uniq_ptr_data(
 void *this, void *param_1);
extern void __uniq_ptr_data_int_default_delete_array___uniq_ptr_impl(
 void *this, void *__p);

/* Additional helper function declarations */
extern void* std_unique_ptr_int_default_delete__get(
 unique_ptr_int_default_delete *this);
extern void* std_unique_ptr_int_array_default_delete__get(
 unique_ptr_int_array_default_delete *this);
extern void* __uniq_ptr_impl_int_default_delete__M_ptr(
 void *this);
extern void* __uniq_ptr_impl_int_default_delete_array__M_ptr(
 void *this);
extern void* __uniq_ptr_impl_int_lambda__M_ptr(
 void *this);
extern void* __uniq_ptr_impl_int_lambda__M_deleter(
 void *this);
extern void* __uniq_ptr_impl_int_default_delete__M_deleter(
 void *this);
extern void* __uniq_ptr_impl_int_default_delete_array__M_deleter(
 void *this);
extern void std_default_delete_int_operator_call(
 void *this, int *__ptr);
extern void std_default_delete_int_array_operator_call(
 void *this, int *__ptr);
extern void* std_get_0U_int_ptr_lambda(
 void *__t);
extern void* std_get_1U_int_ptr_lambda(
 void *__t);
extern void* std_get_0U_int_ptr_default_delete_int(
 void *__t);
extern void* std_get_1U_int_ptr_default_delete_int(
 void *__t);
extern void* std_get_0U_int_ptr_default_delete_int_array(
 void *__t);
extern void* std_get_1U_int_ptr_default_delete_int_array(
 void *__t);
extern void* std__get_helper_0U_int_ptr_lambda(
 void *__t);
extern void* std__get_helper_1U_lambda(
 void *__t);
extern void* std__get_helper_0U_int_ptr_default_delete_int(
 void *__t);
extern void* std__get_helper_1U_default_delete_int(
 void *__t);
extern void* std__get_helper_0U_int_ptr_default_delete_int_array(
 void *__t);
extern void* std__get_helper_1U_default_delete_int_array(
 void *__t);
extern void* std_move_int_ptr_ref(
 int **__t);
extern void* std_forward_int_ptr_ref(
 void *__t);
extern void* std_forward_const_lambda_ref(
 void *__t);
extern void std_Head_base_0U_int_ptr_false__Head_base(
 void *this, int **__h);
extern void std_Head_base_1U_lambda_true__Head_base(
 void *this, void *__h);
extern void std_Head_base_1U_default_delete_true__Head_base(
 void *this);
extern void std_Head_base_1U_default_delete_array_true__Head_base(
 void *this);
extern void std_Tuple_impl_0U_int_ptr_lambda__Tuple_impl(
 void *this, void *__head, void *__tail);
extern void std_Tuple_impl_1U_lambda__Tuple_impl(
 void *this, void *__head);
extern void std_Tuple_impl_0U_int_ptr_default_delete__Tuple_impl(
 void *this, void *param_1);
extern void std_Tuple_impl_1U_default_delete__Tuple_impl(
 void *this, void *__in);
extern void std_Tuple_impl_0U_int_ptr_default_delete_array__Tuple_impl(
 void *this);
extern void std_Tuple_impl_1U_default_delete_array__Tuple_impl(
 void *this);
extern void std_tuple_int_ptr_lambda__tuple(
 void *this, void *param_1);
extern void std_tuple_int_ptr_default_delete__tuple(
 void *this, void *param_1);
extern void std_tuple_int_ptr_default_delete_array__tuple(
 void *this);
extern void std_uniq_ptr_impl_int_lambda__uniq_ptr_impl(
 void *this, void *__p, void *__d);
extern void std_uniq_ptr_impl_int_default_delete__uniq_ptr_impl(
 void *this, void *__p);
extern void std_uniq_ptr_impl_int_default_delete_array__uniq_ptr_impl(
 void *this, void *__p);
extern void std_uniq_ptr_data_int_lambda__uniq_ptr_impl(
 void *this, void *param_1, void *param_2);
extern void std_uniq_ptr_data_int_default_delete__uniq_ptr_data(
 void *this, void *param_1);
extern void std_uniq_ptr_data_int_default_delete_array__uniq_ptr_data(
 void *this, void *param_1);

/* Additional type definitions */
#ifndef __bool_true_false_are_defined
#ifndef __cplusplus
#define __bool_true_false_are_defined
typedef int bool;
#endif
#define true 1
#define false 0
#endif
typedef void* type_info;
typedef void* _func_int;
typedef int deleter_type;

/* Forward declarations for C++ class methods */
extern void Base_Base(Base *this);
extern void Base__DTOR_Base(Base *this);
extern int Base_virtual_func(Base *this, int x);
extern void Derived_Derived(Derived *this, int m);
extern void Derived__DTOR_Derived(Derived *this);
extern int Derived_virtual_func(Derived *this, int x);
extern void MultiDerived_MultiDerived(MultiDerived *this);
extern void MultiDerived__DTOR_MultiDerived(MultiDerived *this);
extern void DiamondDerived_DiamondDerived(DiamondDerived *this);
extern void DiamondDerived__DTOR_DiamondDerived(DiamondDerived *this);
extern void Point_Point(Point *this, int _x, int _y);
extern void Point_operator_plus(Point *__return_storage_ptr__, Point *this, Point *other);
extern bool Point_operator_eq(Point *this, Point *other);
extern void Point_operator_inc(Point *this);
extern void RTTIBase_RTTIBase(RTTIBase *this);
extern void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this);
extern void VirtualBase_VirtualBase(VirtualBase *this);
extern void MiddleA_MiddleA(MiddleA *this, void **vtt);
extern void MiddleB_MiddleB(MiddleB *this, void **vtt);
extern void BaseA_BaseA(BaseA *this);
extern void BaseB_BaseB(BaseB *this);
extern void Container_int_Container(void *this);
extern void Container_int_push(void *this, int value);
extern int Container_int_get(void *this, int idx);
extern int Container_int_getSize(void *this);
extern void Container_double_Container(void *this);
extern void Container_double_push(void *this, double value);
extern double Container_double_get(void *this, int idx);
extern int Container_double_getSize(void *this);
extern int template_max_int(int a, int b);
extern void template_swap_int(int *a, int *b);
extern void* operator_new(size_t size);
extern void* operator_new__(size_t size);
extern void operator_delete(void *ptr);
extern void operator_delete__(void *ptr);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *tinfo, void *dest);
extern void __cxa_bad_typeid(void);
extern void* __dynamic_cast(void *src, void *src_type, void *dst_type, size_t src2dst);
extern int __cxa_begin_catch(void);
extern void std_terminate(void);
extern int strcmp(const char *s1, const char *s2);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern char* strncpy(char *dest, const char *src, size_t n);
extern double __aeabi_d2iz(unsigned int, unsigned int);

/* External declarations */
extern void* __dso_handle;
extern int __cxa_atexit(void (*)(void *), void *, void *);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: __cxx_global_var_init @ 00010e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __cxx_global_var_init(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_destroy,&std___ioinit,&__dso_handle);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010ed0 */

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





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass SStack_2c;
 
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg13(sp): +20]
 Unresolved local var: int r1@[DW_OP_breg13(sp): +16]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +12]
 Unresolved local var: int r3@[DW_OP_breg13(sp): +8] */
 SimpleClass_SimpleClass(&SStack_2c, 5, "Test");
 SimpleClass_setValue(&SStack_2c, 10);
 iVar1 = SimpleClass_getValue(&SStack_2c);
 iVar2 = SimpleClass_compute(&SStack_2c, 3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 000110c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass LStack_14;
 int local_c;
 
 /* Unresolved local var: int result@[???] */
 local_c = 0;
 /* Unresolved local var: LifecycleClass obj@[???] */
 LifecycleClass_LifecycleClass(&LStack_14, 5);
 iVar1 = LifecycleClass_getData(&LStack_14, 2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = local_c + iVar1;
 LifecycleClass_dtor(&LStack_14);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 00011174 */

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x0001119c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived DStack_14;
 Base BStack_c;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[DW_OP_breg13(sp): +32]
 Unresolved local var: Base * pd@[DW_OP_breg13(sp): +28]
 Unresolved local var: int r3@[DW_OP_breg13(sp): +24]
 Unresolved local var: int r4@[DW_OP_breg13(sp): +20] */
 Base_Base(&BStack_c);
 Derived_Derived(&DStack_14,3);
 iVar1 = Base_virtual_func(&BStack_c,5);
 iVar2 = Derived_virtual_func(&DStack_14,5);
 iVar3 = call_virtual_func(&BStack_c,5);
 iVar4 = call_virtual_func(&DStack_14.super_Base,5);
 Derived__DTOR_Derived(&DStack_14);
 Base__DTOR_Base(&BStack_c);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 000112c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived *local_38;
 MultiDerived local_18;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +24]
 Unresolved local var: int ptr_equal@[DW_OP_breg13(sp): +20] */
 MultiDerived_MultiDerived(&local_18);
 local_18.super_BaseA.dataA = 100;
 local_18.super_BaseB.dataB = 200;
 local_38 = (MultiDerived *)0x0;
 if (&local_18 != (MultiDerived *)0x0) {
 local_38 = (MultiDerived *)&local_18.super_BaseB;
 }
 iVar1 = (**local_18.super_BaseA._vptr_BaseA)();
 iVar2 = (**(local_38->super_BaseA)._vptr_BaseA)();
 MultiDerived__DTOR_MultiDerived(&local_18);
 return iVar1 + iVar2 + (uint)(&local_18 != local_38);
}



/* Function: test_cpp_diamond_inheritance @ 000113c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 _func_int *local_38;
 undefined1 local_20 [24];
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[DW_OP_breg13(sp): +32]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +20] */
 DiamondDerived_DiamondDerived((DiamondDerived *)local_20);
 *(undefined4 *)(*(_func_int **)(local_20._0_4_ + -0xc) + (int)(local_20 + 4)) = 0x32;
 local_38 = (_func_int *)0x0;
 if ((DiamondDerived *)local_20 != (DiamondDerived *)0x0) {
 local_38 = *(_func_int **)(local_20._0_4_ + -0xc) + (int)local_20;
 }
 iVar1 = (*(code *)**(undefined4 **)local_38)();
 *(undefined4 *)(*(_func_int **)(local_20._0_4_ + -0xc) + (int)(local_20 + 4)) = 100;
 iVar2 = (*(code *)**(undefined4 **)local_38)();
 DiamondDerived__DTOR_DiamondDerived((DiamondDerived *)local_20);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 000114c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 bool bVar1;
 int iVar2;
 Point local_20;
 Point PStack_18;
 Point PStack_10;
 
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[DW_OP_breg13(sp): +16]
 Unresolved local var: bool eq@[DW_OP_breg13(sp): +15] */
 Point_Point(&PStack_10,1,2);
 Point_Point(&PStack_18,3,4);
 Point_operator_plus(&local_20,&PStack_10,&PStack_18);
 bVar1 = Point_operator_eq(&PStack_10,&PStack_18);
 Point_operator_inc(&local_20);
 iVar2 = local_20.x + local_20.y + 10;
 if (bVar1) {
 iVar2 = local_20.x + local_20.y;
 }
 return iVar2;
}



/* Function: test_cpp_template_func @ 00011550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double a;
 double b;
 int local_20;
 int local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_c;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[DW_OP_breg13(sp): +16]
 Unresolved local var: int a@[DW_OP_breg13(sp): +12]
 Unresolved local var: int b@[DW_OP_breg13(sp): +8] */
 local_c = template_max<int>(3,7);
 template_max<double>(a,b);
 local_1c = 10;
 local_20 = 0x14;
 local_18 = extraout_r0;
 local_14 = extraout_r1;
 template_swap<int>(&local_1c,&local_20);
 iVar1 = local_c;
 iVar2 = __aeabi_d2iz(local_18,local_14);
 return iVar1 + iVar2 + local_1c + local_20;
}



/* Function: test_cpp_template_class @ 000115e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 undefined4 extraout_r0;
 int iVar1;
 int iVar2;
 undefined4 extraout_r1;
 double value;
 Container<double> CStack_98;
 int local_3c;
 int local_38;
 Container<int> CStack_34;
 
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[DW_OP_breg13(sp):
 +24]
 Unresolved local var: double r3@[DW_OP_breg13(sp): +16] */
 Container_int_Container(&CStack_34);
 Container_int_push(&CStack_34,10);
 Container_int_push(&CStack_34,0x14);
 Container_int_push(&CStack_34,0x1e);
 local_38 = Container_int_get(&CStack_34,0);
 local_3c = Container_int_getSize(&CStack_34);
 Container_double_Container(&CStack_98);
 Container_double_push(&CStack_98,value);
 Container_double_get(&CStack_98,0);
 iVar1 = local_38 + local_3c;
 iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 return iVar1 + iVar2;
}



/* Function: test_cpp_lambda @ 000116b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 anon_class_1_0_00000001 aaStack_1c [4];
 anon_class_8_2_336b0e7f local_18;
 int local_10 [2];
 
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[DW_OP_breg13(sp): +20]
 Unresolved local var: int r1@[DW_OP_breg13(sp): +16]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +12] */
 local_10[1] = 10;
 local_10[0] = 0x14;
 local_18.capture_by_value = 10;
 local_18.capture_by_ref = local_10;
 iVar1 = test_cpp_lambda::anon_class_8_2_336b0e7f::operator()(&local_18,3);
 iVar2 = test_cpp_lambda::anon_class_1_0_00000001::operator()<int,_int>(aaStack_1c,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 00011724 */

/* DWARF original prototype: int operator()(anon_class_8_2_336b0e7f * this, int x) */

int __thiscall
test_cpp_lambda::anon_class_8_2_336b0e7f::operator()(anon_class_8_2_336b0e7f *this,int x)

{
 *this->capture_by_ref = *this->capture_by_ref + 5;
 return x * this->capture_by_value + *this->capture_by_ref;
}



/* Function: operator()<int,_int> @ 00011760 */

/* DWARF original name: operator()<int, int>
 DWARF original prototype: int operator()<int,_int>(anon_class_1_0_00000001 * this, int a, int b)
 */

int __thiscall
test_cpp_lambda::anon_class_1_0_00000001::operator()<int,_int>
 (anon_class_1_0_00000001 *this,int a,int b)

{
 return a + b;
}



/* Function: test_cpp_exception @ 00011784 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[DW_OP_breg13(sp): +20]
 Unresolved local var: DerivedException * e@[DW_OP_breg13(sp): +12]
 Unresolved local var: BaseException * e@[DW_OP_breg13(sp): +16] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000118f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 pointer __p;
 type piVar1;
 type *ptVar2;
 int *__p_00;
 pointer __p_01;
 int iVar3;
 int iVar4;
 unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> uStack_2c;
 deleter_type adStack_28 [4];
 int local_24;
 unique_ptr<int[],_std::default_delete<int[]>_> uStack_20;
 int local_1c;
 unique_ptr<int,_std::default_delete<int>_> auStack_18 [3];
 unique_ptr<int,_std::default_delete<int>_> uStack_c;
 
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 __p = operator_new(4);
 *__p = 100;
 std_unique_ptr_int_default_delete__unique_ptr(&uStack_c,__p);
 piVar1 = std_unique_ptr_int_default_delete__operator_star(&uStack_c);
 *piVar1 = 200;
 ptVar2 = std_move_unique_ptr_int_default_delete_ref(&uStack_c);
 std_unique_ptr_int_default_delete__unique_ptr_copy(auStack_18,ptVar2);
 piVar1 = std_unique_ptr_int_default_delete__operator_star(auStack_18);
 local_1c = *piVar1;
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 std_unique_ptr_int_array_default_delete__unique_ptr(&uStack_20,__p_00);
 piVar1 = std_unique_ptr_int_array_default_delete__operator_bracket(&uStack_20,2);
 local_24 = *piVar1;
 __p_01 = operator_new(4);
 *__p_01 = 500;
 std_uniq_ptr_data_int_lambda__uniq_ptr_impl(&uStack_2c,__p_01,adStack_28);
 piVar1 = std_unique_ptr_int_lambda__get(&uStack_2c);
 iVar3 = *piVar1;
 iVar4 = local_1c + local_24;
 std_unique_ptr_int_lambda__dtor(&uStack_2c);
 std_unique_ptr_int_array_default_delete__dtor(&uStack_20);
 std_unique_ptr_int_default_delete__dtor(auStack_18);
 std_unique_ptr_int_default_delete__dtor(&uStack_c);
 return iVar4 + iVar3;
}



/* Function: unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void> @ 00011acc */

/* DWARF original name: unique_ptr<(lambda at src/5-1.cpp:445:20), void>
 DWARF original prototype: void
 unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void>(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 * this, pointer __p, deleter_type * __d) */

void __thiscall
std_unique_ptr_int_lambda__unique_ptr
 (unique_ptr_int_lambda *this,pointer __p,deleter_type *__d)

{
 std_uniq_ptr_data_int_lambda__uniq_ptr_impl
 (&this->_M_t,__p,__d);
 return;
}



/* Function: operator* @ 00011b10 */

/* DWARF original prototype: type operator*(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this)
 */

type __thiscall
std_unique_ptr_int_lambda__operator_star
 (unique_ptr_int_lambda *this)

{
 pointer piVar1;
 
 piVar1 = std_unique_ptr_int_lambda__get(this);
 return piVar1;
}



/* Function: ~unique_ptr @ 00011b44 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> *
 this) */

void __thiscall
std_unique_ptr_int_lambda__dtor
 (unique_ptr_int_lambda *this)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 
 /* Unresolved local var: pointer * __ptr@[DW_OP_breg13(sp): +12] */
 __t = __uniq_ptr_impl_int_lambda__M_ptr
 ((__uniq_ptr_impl_int_lambda *)this);
 if (*__t != (pointer)0x0) {
 this_00 = __uniq_ptr_impl_int_lambda__M_deleter(this);
 ppiVar1 = std_move_int_ptr_ref(__t);
 std_Head_base_1U_lambda_true__Head_base(this_00);
 std_default_delete_int_operator_call(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: test_cpp_rtti @ 00011bd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 bool bVar1;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 int iVar2;
 char *__s;
 size_t sVar3;
 RTTIDerivedB *local_44;
 RTTIDerivedA *local_3c;
 int local_14;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 this = operator_new(4);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)0x0;
 RTTIDerivedA::RTTIDerivedA(this);
 this_00 = operator_new(4);
 (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int **)0x0;
 RTTIDerivedB::RTTIDerivedB(this_00);
 local_14 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 bVar1 = std::type_info::operator==
 ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedA::typeinfo);
 if (bVar1) {
 local_14 = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 bVar1 = std::type_info::operator==
 ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedB::typeinfo);
 if (bVar1) {
 local_14 = local_14 + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (this == (RTTIDerivedA *)0x0) {
 local_3c = (RTTIDerivedA *)0x0;
 }
 else {
 local_3c = (RTTIDerivedA *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_3c != (RTTIDerivedA *)0x0) {
 iVar2 = RTTIDerivedA::derivedA_data(local_3c);
 local_14 = local_14 + iVar2;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_44 = (RTTIDerivedB *)0x0;
 }
 else {
 local_44 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0)
 ;
 }
 if (local_44 != (RTTIDerivedB *)0x0) {
 iVar2 = RTTIDerivedB::derivedB_data(local_44);
 local_14 = local_14 + iVar2;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = std::type_info::name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar3 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (*(this->super_RTTIBase)._vptr_RTTIBase[1])();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])();
 }
 return local_14 + sVar3;
}



/* Function: test_cpp_oo_features @ 00011e74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 printf(&DAT_00014221);
 iVar1 = test_cpp_member_func();
 printf(&DAT_00014246,iVar1);
 iVar1 = test_cpp_constructor();
 printf(&DAT_00014264,iVar1);
 iVar1 = test_cpp_virtual_func();
 printf(&DAT_00014280,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_0001429c,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000142b8,iVar1);
 iVar1 = test_cpp_operator_overload();
 printf(&DAT_000142d5,iVar1);
 iVar1 = test_cpp_template_func();
 printf(&DAT_000142f1,iVar1);
 iVar1 = test_cpp_template_class();
 printf(&DAT_0001430d,iVar1);
 iVar1 = test_cpp_lambda();
 printf(&DAT_00014329,iVar1);
 iVar1 = test_cpp_exception();
 printf(&DAT_00014345,iVar1);
 iVar1 = test_cpp_smart_ptr();
 printf(&DAT_00014362,iVar1);
 iVar1 = test_cpp_rtti();
 printf(&DAT_0001437f,iVar1);
 return;
}



/* Function: main @ 00011fb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl @ 00011fe0 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false> * this, pointer
 param_1, anon_class_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std_uniq_ptr_data_int_lambda__uniq_ptr_impl
 (__uniq_ptr_data_int_lambda *this,pointer param_1,
 anon_class_1_0_00000001_for__M_head_impl *param_2)

{
 std_uniq_ptr_impl_int_lambda__uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_lambda,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 0001201c */

/* DWARF original name: __uniq_ptr_impl<const (lambda at src/5-1.cpp:445:20) &>
 DWARF original prototype: void
 __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&>(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>
 * this, pointer __p, anon_class_1_0_00000001_for__M_head_impl * __d) */

void __thiscall
std_uniq_ptr_impl_int_lambda__uniq_ptr_impl
 (__uniq_ptr_impl_int_lambda *this,pointer __p,
 anon_class_1_0_00000001_for__M_head_impl *__d)

{
 anon_class_1_0_00000001_for__M_head_impl *__a2;
 pointer local_10;
 __uniq_ptr_impl_int_lambda *local_c;
 
 local_10 = __p;
 local_c = this;
 __a2 = std_forward_const_lambda_ref(__d);
 std_tuple_int_ptr_lambda__tuple(&this->_M_t,&local_10,__a2);
 return;
}



/* Function: forward<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 00012064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<const (lambda at src/5-1.cpp:445:20) &> */

anon_class_1_0_00000001_for__M_head_impl *
std_forward_const_lambda_ref(type *__t)

{
 return __t;
}



/* Function: tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true> @ 00012078 */

/* DWARF original name: tuple<int *&, const (lambda at src/5-1.cpp:445:20) &, true>
 DWARF original prototype: void
 tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true>(tuple<int_*,_(lambda_at_src/5-1.cpp:445:20)>
 * this, int * * __a1, anon_class_1_0_00000001_for__M_head_impl * __a2) */

void __thiscall
std_tuple_int_ptr_lambda__tuple
 (tuple_int_ptr_lambda *this,int **__a1,
 anon_class_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 anon_class_1_0_00000001_for__M_head_impl *__tail;
 
 __head = std_forward_int_ptr_ref(__a1);
 __tail = std_forward_const_lambda_ref(__a2);
 std_Tuple_impl_0U_int_ptr_lambda__Tuple_impl
 (&this->super__Tuple_impl_0U_int_ptr_lambda,__head,__tail);
 return;
}



/* Function: _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void> @ 000120d4 */

/* DWARF original name: _Tuple_impl<int *&, const (lambda at src/5-1.cpp:445:20) &, void>
 DWARF original prototype: void
 _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void>(_Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>
 * this, int * * __head, anon_class_1_0_00000001_for__M_head_impl * __tail) */

void __thiscall
std_Tuple_impl_0U_int_ptr_lambda__Tuple_impl
 (_Tuple_impl_0U_int_ptr_lambda *this,int **__head,
 anon_class_1_0_00000001_for__M_head_impl *__tail)

{
 anon_class_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 
 __head_00 = std_forward_const_lambda_ref(__tail);
 std_Tuple_impl_1U_lambda__Tuple_impl
 (&this->super__Tuple_impl_1U_lambda,__head_00);
 __h = std_forward_int_ptr_ref(__head);
 std_Head_base_0U_int_ptr_false__Head_base((void *)this,__h);
 return;
}



/* Function: _Tuple_impl @ 0001212c */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_(lambda_at_src/5-1.cpp:445:20)> *
 this, anon_class_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std_Tuple_impl_1U_lambda__Tuple_impl
 (_Tuple_impl_1U_lambda *this,
 anon_class_1_0_00000001_for__M_head_impl *__head)

{
 std_Head_base_1U_lambda_true__Head_base
 (&this->super__Head_base_1U_lambda_true,__head);
 return;
}



/* Function: _Head_base @ 00012160 */

/* DWARF original prototype: void _Head_base(_Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true> *
 this, anon_class_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std_Head_base_1U_lambda_true__Head_base
 (_Head_base_1U_lambda_true *this,
 anon_class_1_0_00000001_for__M_head_impl *__h)

{
 return;
}



/* Function: _M_ptr @ 00012178 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
 this) */

pointer * __thiscall
__uniq_ptr_impl_int_lambda__M_ptr
 (__uniq_ptr_impl_int_lambda *this)

{
 int **ppiVar1;
 
 ppiVar1 = std_get_0U_int_ptr_lambda(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 0001219c */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

deleter_type * __thiscall
std_unique_ptr_int_lambda__get_deleter
 (unique_ptr_int_lambda *this)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = __uniq_ptr_impl_int_lambda__M_deleter
 ((__uniq_ptr_impl_int_lambda *)this);
 return paVar1;
}



/* Function: operator() @ 000121d0 */

/* DWARF original prototype: void operator()(anon_class_1_0_00000001_for__M_head_impl * this, int *
 p) */

void __thiscall
std_Head_base_1U_lambda_true__operator_call
 (anon_class_1_0_00000001_for__M_head_impl *this,int *p)

{
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p);
 }
 return;
}



/* Function: get<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 0001221c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0U, int *, (lambda at src/5-1.cpp:445:20)> */

int **
std_get_0U_int_ptr_lambda
 (tuple_int_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0U_int_ptr_lambda
 (&__t->super__Tuple_impl_0U_int_ptr_lambda);
 return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00012240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0U, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std__get_helper_0U_int_ptr_lambda
 (_Tuple_impl_0U_int_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std_Tuple_impl_0U_int_ptr_lambda__M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00012264 */

int ** std_Tuple_impl_0U_int_ptr_lambda__M_head
 (_Tuple_impl_0U_int_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std_Head_base_0U_int_ptr_false__M_head((void *)__t);
 return ppiVar1;
}



/* Function: _M_deleter @ 00012288 */

/* DWARF original prototype: anon_class_1_0_00000001_for__M_head_impl *
 _M_deleter(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

anon_class_1_0_00000001_for__M_head_impl * __thiscall
__uniq_ptr_impl_int_lambda__M_deleter
 (__uniq_ptr_impl_int_lambda *this)

{
 anon_class_1_0_00000001_for__M_head_impl *p_Var1;
 
 p_Var1 = std_get_1U_int_ptr_lambda(&this->_M_t);
 return p_Var1;
}



/* Function: get<1U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 000122ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1U, int *, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std_get_1U_int_ptr_lambda
 (tuple_int_ptr_lambda *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__get_helper_1U_lambda
 ((_Tuple_impl_1U_lambda *)__t);
 return paVar1;
}



/* Function: __get_helper<1U,_(lambda_at_src/5-1.cpp:445:20)> @ 000122d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1U, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std__get_helper_1U_lambda
 (_Tuple_impl_1U_lambda *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std_Tuple_impl_1U_lambda__M_head(__t);
 return paVar1;
}



/* Function: _M_head @ 000122f4 */

anon_class_1_0_00000001_for__M_head_impl *
std_Tuple_impl_1U_lambda__M_head
 (_Tuple_impl_1U_lambda *__t)

{
 anon_class_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std_Head_base_1U_lambda_true__M_head
 (&__t->super__Head_base_1U_lambda_true);
 return paVar1;
}



/* Function: _M_head @ 00012318 */

anon_class_1_0_00000001_for__M_head_impl *
std_Head_base_1U_lambda_true__M_head
 (_Head_base_1U_lambda_true *__b)

{
 return &__b->_M_head_impl;
}



/* Function: get @ 0001232c */

/* DWARF original prototype: pointer get(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

pointer __thiscall
std_unique_ptr_int_lambda__get
 (unique_ptr_int_lambda *this)

{
 pointer piVar1;
 
 piVar1 = __uniq_ptr_impl_int_lambda__M_ptr
 ((__uniq_ptr_impl_int_lambda *)this);
 return piVar1;
}



/* Function: _M_ptr @ 00012360 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
 this) */

pointer __thiscall
__uniq_ptr_impl_int_lambda__M_ptr
 (__uniq_ptr_impl_int_lambda *this)

{
 int **ppiVar1;
 
 ppiVar1 = std_get_0U_int_ptr_lambda_2(&this->_M_t);
 return *ppiVar1;
}



/* Function: get<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00012388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0U, int *, (lambda at src/5-1.cpp:445:20)> */

int **
std_get_0U_int_ptr_lambda_2
 (tuple_int_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0U_int_ptr_lambda_2
 (&__t->super__Tuple_impl_0U_int_ptr_lambda);
 return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 000123ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0U, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std__get_helper_0U_int_ptr_lambda_2
 (_Tuple_impl_0U_int_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std_Tuple_impl_0U_int_ptr_lambda__M_head_2(__t);
 return ppiVar1;
}



/* Function: _M_head @ 000123d0 */

int ** std_Tuple_impl_0U_int_ptr_lambda__M_head_2
 (_Tuple_impl_0U_int_ptr_lambda *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std_Head_base_0U_int_ptr_false__M_head((void *)__t);
 return ppiVar1;
}



/* Function: SimpleClass @ 000123f4 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int v,const char *n)

{
 this->value = v;
 strncpy(this->name,n,0x1f);
 this->name[0x1f] = '\0';
 return;
}



/* Function: setValue @ 00012444 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int v)

{
 this->value = v;
 return;
}



/* Function: getValue @ 00012464 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass_getValue(SimpleClass *this)

{
 return this->value;
}



/* Function: compute @ 0001247c */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass_compute(SimpleClass *this,int x)

{
 size_t sVar1;
 int iVar2;
 
 iVar2 = this->value;
 sVar1 = strlen(this->name);
 return iVar2 * x + sVar1;
}



/* Function: getClassID @ 000124c4 */

int SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 000124d0 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,size_t s)

{
 uint uVar1;
 int *piVar2;
 uint local_18;
 
 this->size = s;
 uVar1 = s << 2;
 if (s != (s & 0x3fffffff)) {
 uVar1 = 0xffffffff;
 }
 piVar2 = operator_new__(uVar1);
 this->data = piVar2;
 /* Unresolved local var: size_t i@[DW_OP_breg13(sp): +8] */
 for (local_18 = 0; local_18 < s; local_18 = local_18 + 1) {
 this->data[local_18] = local_18 * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 0001259c */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass_getData(LifecycleClass *this,size_t idx)

{
 int local_10;
 
 if (idx < this->size) {
 local_10 = this->data[idx];
 }
 else {
 local_10 = -1;
 }
 return local_10;
}



/* Function: getInstanceCount @ 000125f4 */

int LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 00012604 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this) */

void __thiscall LifecycleClass_dtor(LifecycleClass *this)

{
 if (this->data != (int *)0x0) {
 operator_delete__(this->data);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 0001266c */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base_Base(Base *this)

{
 this->_vptr_Base = (_func_int **)&PTR_virtual_func_00024c48;
 return;
}



/* Function: Derived @ 00012694 */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived_Derived(Derived *this,int m)

{
 Base_Base(&this->super_Base);
 (this->super_Base)._vptr_Base = (_func_int **)&PTR_virtual_func_00024c68;
 this->multiplier = m;
 return;
}



/* Function: virtual_func @ 000126e0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 000126fc */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: ~Derived @ 00012720 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived__DTOR_Derived(Derived *this)

{
 Base__DTOR_Base(&this->super_Base);
 return;
}



/* Function: ~Base @ 0001274c */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base__DTOR_Base(Base *this)

{
 return;
}



/* Function: MultiDerived @ 00012760 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
 BaseA::BaseA(&this->super_BaseA);
 BaseB::BaseB(&this->super_BaseB);
 (this->super_BaseA)._vptr_BaseA = (_func_int **)&PTR_funcA_00024c8c;
 (this->super_BaseB)._vptr_BaseB = (_func_int **)&PTR__ZThn8_N12MultiDerived5funcBEv_00024ca4;
 return;
}



/* Function: ~MultiDerived @ 000127b4 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 BaseB::~BaseB(&this->super_BaseB);
 BaseA::~BaseA(&this->super_BaseA);
 return;
}



/* Function: DiamondDerived @ 000127ec */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
 VirtualBase::VirtualBase((VirtualBase *)&this->field_0x10);
 MiddleA::MiddleA(&this->super_MiddleA,&PTR_PTR_00024d58);
 MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,&PTR_PTR_00024d60);
 (this->super_MiddleA)._vptr_MiddleA = (_func_int **)&PTR_func_00024d14;
 *(undefined ***)&this->field_0x10 = &PTR__ZTv0_n12_N14DiamondDerived4funcEv_00024d48;
 *(undefined ***)&(this->super_MiddleA).field_0x8 = &PTR__ZThn8_N14DiamondDerived4funcEv_00024d2c;
 return;
}



/* Function: ~DiamondDerived @ 00012870 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this,&VTT);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10);
 return;
}



/* Function: Point @ 000128b4 */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point::Point(Point *this,int _x,int _y)

{
 this->x = _x;
 this->y = _y;
 return;
}



/* Function: operator+ @ 000128e0 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point * __thiscall Point::operator+(Point *__return_storage_ptr__,Point *this,Point *other)

{
 Point *extraout_r0;
 
 Point(__return_storage_ptr__,this->x + other->x,this->y + other->y);
 return extraout_r0;
}



/* Function: operator== @ 00012924 */

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



/* Function: operator++ @ 0001298c */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point::operator++(Point *this)

{
 this->x = this->x + 1;
 this->y = this->y + 1;
 return this;
}



/* Function: template_max<int> @ 000129b8 */

int template_max<int>(int a,int b)

{
 int local_c;
 
 local_c = b;
 if (b < a) {
 local_c = a;
 }
 return local_c;
}



/* Function: template_max<double> @ 000129fc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012a28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max<double>(double a,double b)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0),in_r0,in_r1,in_r2,in_r3);
 return a;
}



/* Function: template_swap<int> @ 00012a74 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[DW_OP_breg13(sp): 0] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00012ab0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00012acc */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00012b14 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

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



/* Function: getSize @ 00012b7c */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00012b94 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00012bb0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 00012c04 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double in_d0;
 
 return in_d0;
}



/* Function: getSize @ 00012c7c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: unique_ptr<std::default_delete<int>,_void> @ 00012c94 */

/* DWARF original name: unique_ptr<std::default_delete<int>, void>
 DWARF original prototype: void
 unique_ptr<std::default_delete<int>,_void>(unique_ptr<int,_std::default_delete<int>_> * this,
 pointer __p) */

void __thiscall
std_unique_ptr_int_default_delete__unique_ptr
 (unique_ptr_int_default_delete *this,pointer __p)

{
 __uniq_ptr_data_int_default_delete___uniq_ptr_impl(&this->_M_t,__p);
 return;
}



/* Function: operator* @ 00012cd0 */

/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type __thiscall
std_unique_ptr_int_default_delete__operator_star
 (unique_ptr_int_default_delete *this)

{
 pointer piVar1;
 
 piVar1 = std_unique_ptr_int_default_delete__get(this);
 return piVar1;
}



/* Function: move<std::unique_ptr<int,_std::default_delete<int>_>_&> @ 00012d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::unique_ptr<int, std::default_delete<int> > &> */

type * std_move_unique_ptr_int_default_delete_ref
 (unique_ptr_int_default_delete *__t)

{
 return __t;
}



/* Function: unique_ptr @ 00012d18 */

/* DWARF original prototype: void unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this,
 unique_ptr<int,_std::default_delete<int>_> * param_1) */

void __thiscall
std_unique_ptr_int_default_delete__unique_ptr_copy
 (unique_ptr_int_default_delete *this,
 unique_ptr_int_default_delete *param_1)

{
 __uniq_ptr_data_int_default_delete___uniq_ptr_data
 (&this->_M_t,&param_1->_M_t);
 return;
}



/* Function: unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool> @ 00012d4c */

/* DWARF original name: unique_ptr<int *, std::default_delete<int[]>, void, bool>
 DWARF original prototype: void
 unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>(unique_ptr<int[],_std::default_delete<int[]>_>
 * this, int * __p) */

void __thiscall
std_unique_ptr_int_array_default_delete__unique_ptr
 (unique_ptr_int_array_default_delete *this,int *__p)

{
 __uniq_ptr_data_int_default_delete_array___uniq_ptr_impl(&this->_M_t,__p);
 return;
}



/* Function: operator[] @ 00012d88 */

/* DWARF original prototype: type operator[](unique_ptr<int[],_std::default_delete<int[]>_> * this,
 size_t __i) */

type __thiscall
std_unique_ptr_int_array_default_delete__operator_bracket
 (unique_ptr_int_array_default_delete *this,size_t __i)

{
 pointer piVar1;
 
 piVar1 = std_unique_ptr_int_array_default_delete__get(this);
 return piVar1 + __i;
}



/* Function: ~unique_ptr @ 00012dc8 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int[],_std::default_delete<int[]>_> * this)
 */

void __thiscall
std_unique_ptr_int_array_default_delete__dtor
 (unique_ptr_int_array_default_delete *this)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 
 /* Unresolved local var: pointer * __ptr@[DW_OP_breg13(sp): +4] */
 ppiVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
 ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = get_deleter(this);
 default_delete<int[]>::operator()<int>(this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: ~unique_ptr @ 00012e3c */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this) */

void __thiscall
std_unique_ptr_int_default_delete__dtor
 (unique_ptr_int_default_delete *this)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 
 /* Unresolved local var: pointer * __ptr@[DW_OP_breg13(sp): +12] */
 __t = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
 ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter(this);
 ppiVar1 = move<int_*&>(__t);
 default_delete<int>::operator()(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: RTTIDerivedA @ 00012ec0 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedA_00024ec4;
 return;
}



/* Function: RTTIDerivedB @ 00012f00 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedB_00024eec;
 return;
}



/* Function: operator== @ 00012f40 */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std_type_info_operator_eq(type_info *this,type_info *__arg)

{
 int iVar1;
 bool bVar2;
 
 bVar2 = true;
 if ((*(int *)(this + 4) != *(int *)(__arg + 4)) && (bVar2 = false, **(char **)(this + 4) != '*'))
 {
 iVar1 = strcmp(*(char **)(this + 4),*(char **)(__arg + 4));
 bVar2 = iVar1 == 0;
 }
 return bVar2;
}



/* Function: derivedA_data @ 00012fe0 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
 return 100;
}



/* Function: derivedB_data @ 00012ff4 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
 return 200;
}



/* Function: name @ 00013008 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std_type_info_name(type_info *this)

{
 char *local_c;
 
 if (**(char **)(this + 4) == '*') {
 local_c = (char *)(*(int *)(this + 4) + 1);
 }
 else {
 local_c = *(char **)(this + 4);
 }
 return local_c;
}



/* Function: getName @ 0001305c */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00013078 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base__DTOR_Base(Base *this)

{
 ~Base(this);
 operator_delete(this);
 return;
}



/* Function: getName @ 000130a8 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 000130c4 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived__DTOR_Derived(Derived *this)

{
 ~Derived(this);
 operator_delete(this);
 return;
}



/* Function: BaseA @ 000130f4 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA::BaseA(BaseA *this)

{
 this->_vptr_BaseA = (_func_int **)&PTR_funcA_00024ce8;
 return;
}



/* Function: BaseB @ 0001311c */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB::BaseB(BaseB *this)

{
 this->_vptr_BaseB = (_func_int **)&PTR_funcB_00024cfc;
 return;
}



/* Function: funcA @ 00013144 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00013158 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived__DTOR_MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00013188 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0001319c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerived5funcBEv(void)

{
 int in_r0;
 
 MultiDerived::funcB((MultiDerived *)(in_r0 + -8));
 return;
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 000131b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
 int in_r0;
 
 MultiDerived::~MultiDerived((MultiDerived *)(in_r0 + -8));
 return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 000131d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(void)

{
 int in_r0;
 
 MultiDerived::~MultiDerived((MultiDerived *)(in_r0 + -8));
 return;
}



/* Function: funcA @ 000131e8 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA_funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 000131fc */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA__DTOR_BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00013210 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA__DTOR_BaseA_deleting(BaseA *this)

{
 ~BaseA(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00013240 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB_funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00013254 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB__DTOR_BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00013268 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB__DTOR_BaseB_deleting(BaseB *this)

{
 ~BaseB(this);
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00013298 */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
 this->_vptr_VirtualBase = (_func_int **)&PTR_func_00024e38;
 return;
}



/* Function: MiddleA @ 000132c0 */

/* DWARF original prototype: void MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::MiddleA(MiddleA *this,void **vtt)

{
 this->_vptr_MiddleA = *vtt;
 *(void **)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) = vtt[1];
 return;
}



/* Function: MiddleB @ 000132f4 */

/* DWARF original prototype: void MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::MiddleB(MiddleB *this,void **vtt)

{
 this->_vptr_MiddleB = *vtt;
 *(void **)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) = vtt[1];
 return;
}



/* Function: func @ 00013328 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00013350 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA__DTOR_MiddleA(MiddleA *this)

{
 ~MiddleA(this,&VTT);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x8);
 return;
}



/* Function: ~MiddleA @ 00013394 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA__DTOR_MiddleA_deleting(MiddleA *this)

{
 ~MiddleA(this);
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 000133c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleA4funcEv(void)

{
 int *in_r0;
 
 MiddleA::func((MiddleA *)((int)in_r0 + *(int *)(*in_r0 + -0xc)));
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 000133e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void)

{
 int *in_r0;
 
 MiddleA::~MiddleA((MiddleA *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00013408 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(void)

{
 int *in_r0;
 
 MiddleA::~MiddleA((MiddleA *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 00013428 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00013450 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB__DTOR_MiddleB(MiddleB *this)

{
 ~MiddleB(this,&VTT);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x8);
 return;
}



/* Function: ~MiddleB @ 00013494 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB__DTOR_MiddleB_deleting(MiddleB *this)

{
 ~MiddleB(this);
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 000134c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleB4funcEv(void)

{
 int *in_r0;
 
 MiddleB::func((MiddleB *)((int)in_r0 + *(int *)(*in_r0 + -0xc)));
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 000134e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void)

{
 int *in_r0;
 
 MiddleB::~MiddleB((MiddleB *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 00013508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(void)

{
 int *in_r0;
 
 MiddleB::~MiddleB((MiddleB *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 00013528 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: ~DiamondDerived @ 00013550 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived__DTOR_DiamondDerived_deleting(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this);
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00013580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
 int in_r0;
 
 DiamondDerived::func((DiamondDerived *)(in_r0 + -8));
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00013598 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
 int in_r0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)(in_r0 + -8));
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 000135b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn8_N14DiamondDerivedD0Ev(void)

{
 int in_r0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)(in_r0 + -8));
 return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 000135cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n12_N14DiamondDerived4funcEv(void)

{
 int *in_r0;
 
 DiamondDerived::func((DiamondDerived *)((int)in_r0 + *(int *)(*in_r0 + -0xc)));
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 000135ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void)

{
 int *in_r0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 00013610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n16_N14DiamondDerivedD0Ev(void)

{
 int *in_r0;
 
 DiamondDerived::~DiamondDerived((DiamondDerived *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 00013630 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00013644 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase__DTOR_VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 00013658 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase__DTOR_VirtualBase_deleting(VirtualBase *this)

{
 ~VirtualBase(this);
 operator_delete(this);
 return;
}



/* Function: ~MiddleA @ 00013688 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **vtt)

{
 return;
}



/* Function: ~MiddleB @ 000136a0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **vtt)

{
 return;
}



/* Function: ~DiamondDerived @ 000136b8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * vtt) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **vtt)

{
 MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,vtt + 3);
 MiddleA::~MiddleA(&this->super_MiddleA,vtt + 1);
 return;
}



/* Function: __uniq_ptr_data @ 00013708 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this,
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
 (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,
 __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *param_1)

{
 __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
 (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,
 &param_1->super___uniq_ptr_impl<int,_std::default_delete<int>_>);
 return;
}



/* Function: __uniq_ptr_impl @ 0001373c */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this, __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,
 __uniq_ptr_impl<int,_std::default_delete<int>_> *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 
 ptVar1 = move<std::tuple<int_*,_std::default_delete<int>_>_&>(&__u->_M_t);
 tuple<int_*,_std::default_delete<int>_>::tuple(&this->_M_t,ptVar1);
 ppiVar2 = _M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return;
}



/* Function: move<std::tuple<int_*,_std::default_delete<int>_>_&> @ 0001379c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::tuple<int *, std::default_delete<int> > &> */

type * std::move<std::tuple<int_*,_std::default_delete<int>_>_&>
 (tuple<int_*,_std::default_delete<int>_> *__t)

{
 return __t;
}



/* Function: tuple @ 000137b0 */

/* DWARF original prototype: void tuple(tuple<int_*,_std::default_delete<int>_> * this,
 tuple<int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::tuple<int_*,_std::default_delete<int>_>::tuple
 (tuple<int_*,_std::default_delete<int>_> *this,
 tuple<int_*,_std::default_delete<int>_> *param_1)

{
 _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
 (&this->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>,
 &param_1->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
 return;
}



/* Function: _M_ptr @ 000137e4 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
 (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
 __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int>_>_> *ppiVar1;
 
 ppiVar1 = get<0U,_int_*,_std::default_delete<int>_>(&this->_M_t);
 return ppiVar1;
}



/* Function: __clang_call_terminate @ 00013808 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 std::terminate();
}



/* Function: _Tuple_impl @ 00013810 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *
 this, _Tuple_impl<0U,_int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *this,
 _Tuple_impl<0U,_int_*,_std::default_delete<int>_> *param_1)

{
 _Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
 (&this->super__Tuple_impl<1U,_std::default_delete<int>_>,
 &param_1->super__Tuple_impl<1U,_std::default_delete<int>_>);
 *this = *param_1;
 return;
}



/* Function: _Tuple_impl @ 00013850 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_std::default_delete<int>_> * this,
 _Tuple_impl<1U,_std::default_delete<int>_> * __in) */

void __thiscall
std::_Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
 (_Tuple_impl<1U,_std::default_delete<int>_> *this,
 _Tuple_impl<1U,_std::default_delete<int>_> *__in)

{
 return;
}



/* Function: get<0U,_int_*,_std::default_delete<int>_> @ 00013868 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0U, int *, std::default_delete<int> > */

int **
std_get_0U_int_ptr_default_delete_int(tuple_int_ptr_default_delete *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0U_int_ptr_default_delete_int
 (&__t->super__Tuple_impl_0U_int_ptr_default_delete);
 return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int>_> @ 0001388c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int> > */

int ** std__get_helper_0U_int_ptr_default_delete_int
 (_Tuple_impl_0U_int_ptr_default_delete *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std_Tuple_impl_0U_int_ptr_default_delete__M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 000138b0 */

int ** std_Tuple_impl_0U_int_ptr_default_delete__M_head
 (_Tuple_impl_0U_int_ptr_default_delete *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std_Head_base_0U_int_ptr_false__M_head((void *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 000138d4 */

int ** std_Head_base_0U_int_ptr_false__M_head(_Head_base_0U_int_ptr_false *__b)

{
 return &__b->_M_head_impl;
}



/* Function: RTTIBase @ 000138e8 */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
 this->_vptr_RTTIBase = (_func_int **)&PTR__RTTIBase_00024ed8;
 return;
}



/* Function: ~RTTIDerivedA @ 00013910 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::~RTTIBase(&this->super_RTTIBase);
 return;
}



/* Function: ~RTTIDerivedA @ 0001393c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 ~RTTIDerivedA(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 0001396c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00013980 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIBase @ 00013994 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 ~RTTIBase(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 000139c4 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 000139d8 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::~RTTIBase(&this->super_RTTIBase);
 return;
}



/* Function: ~RTTIDerivedB @ 00013a04 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 ~RTTIDerivedB(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00013a34 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 00013a48 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
 param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,pointer param_1)

{
 __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
 (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00013a7c */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
 this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,pointer __p)

{
 pointer *ppiVar1;
 
 tuple<int_*,_std::default_delete<int>_>::tuple<true,_true>(&this->_M_t);
 ppiVar1 = _M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: tuple<true,_true> @ 00013ac8 */

/* DWARF original name: tuple<true, true>
 DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int>_> * this)
 */

void __thiscall
std::tuple<int_*,_std::default_delete<int>_>::tuple<true,_true>
 (tuple<int_*,_std::default_delete<int>_> *this)

{
 _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
 (&this->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
 return;
}



/* Function: _Tuple_impl @ 00013afc */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *
 this) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *this)

{
 _Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
 (&this->super__Tuple_impl<1U,_std::default_delete<int>_>);
 _Head_base<0U,_int_*,_false>::_Head_base((_Head_base<0U,_int_*,_false> *)this);
 return;
}



/* Function: _Tuple_impl @ 00013b30 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_std::default_delete<int>_> * this) */

void __thiscall
std::_Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
 (_Tuple_impl<1U,_std::default_delete<int>_> *this)

{
 _Head_base<1U,_std::default_delete<int>,_true>::_Head_base
 (&this->super__Head_base<1U,_std::default_delete<int>,_true>);
 return;
}



/* Function: _Head_base @ 00013b5c */

/* DWARF original prototype: void _Head_base(_Head_base<0U,_int_*,_false> * this) */

void __thiscall std::_Head_base<0U,_int_*,_false>::_Head_base(_Head_base<0U,_int_*,_false> *this)

{
 this->_M_head_impl = (int *)0x0;
 return;
}



/* Function: _Head_base @ 00013b78 */

/* DWARF original prototype: void _Head_base(_Head_base<1U,_std::default_delete<int>,_true> * this)
 */

void __thiscall
std::_Head_base<1U,_std::default_delete<int>,_true>::_Head_base
 (_Head_base<1U,_std::default_delete<int>,_true> *this)

{
 return;
}



/* Function: get_deleter @ 00013b8c */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
 this) */

deleter_type * __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get_deleter
 (unique_ptr<int,_std::default_delete<int>_> *this)

{
 default_delete<int> *pdVar1;
 
 pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
 ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
 return pdVar1;
}



/* Function: operator_call @ 00013bc0 */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall std_default_delete_int_operator_call(default_delete<int> *this,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr);
 }
 return;
}



/* Function: move<int_*&> @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<int *&> */

type * std::move<int_*&>(int **__t)

{
 return __t;
}



/* Function: _M_deleter @ 00013c14 */

/* DWARF original prototype: default_delete<int> *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete<int> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
 (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
 __tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int>_>_> *p_Var1;
 
 p_Var1 = get<1U,_int_*,_std::default_delete<int>_>(&this->_M_t);
 return p_Var1;
}



/* Function: get<1U,_int_*,_std::default_delete<int>_> @ 00013c38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1U, int *, std::default_delete<int> > */

default_delete_int *
std_get_1U_int_ptr_default_delete_int(tuple_int_ptr_default_delete *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__get_helper_1U_default_delete_int
 ((_Tuple_impl_1U_default_delete *)__t);
 return pdVar1;
}



/* Function: __get_helper<1U,_std::default_delete<int>_> @ 00013c5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1U, std::default_delete<int> > */

default_delete_int *
std__get_helper_1U_default_delete_int(_Tuple_impl_1U_default_delete *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std_Tuple_impl_1U_default_delete__M_head(__t);
 return pdVar1;
}



/* Function: _M_head @ 00013c80 */

default_delete_int *
std_Tuple_impl_1U_default_delete__M_head
 (_Tuple_impl_1U_default_delete *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std_Head_base_1U_default_delete_true__M_head
 (&__t->super__Head_base_1U_default_delete_true);
 return pdVar1;
}



/* Function: _M_head @ 00013ca4 */

default_delete_int *
std_Head_base_1U_default_delete_true__M_head
 (_Head_base_1U_default_delete_true *__b)

{
 return &__b->_M_head_impl;
}



/* Function: get @ 00013cb8 */

/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std_unique_ptr_int_default_delete__get
 (unique_ptr_int_default_delete *this)

{
 pointer piVar1;
 
 piVar1 = std__uniq_ptr_impl_int_default_delete__M_ptr
 ((__uniq_ptr_impl_int_default_delete *)this);
 return piVar1;
}



/* Function: _M_ptr @ 00013cec */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
 */

pointer __thiscall
std__uniq_ptr_impl_int_default_delete__M_ptr
 (__uniq_ptr_impl_int_default_delete *this)

{
 int **ppiVar1;
 
 ppiVar1 = std_get_0U_int_ptr_default_delete_int(&this->_M_t);
 return *ppiVar1;
}



/* Function: get<0U,_int_*,_std::default_delete<int>_> @ 00013d14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0U, int *, std::default_delete<int> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int>_>_> *
std_get_0U_int_ptr_default_delete_int(tuple<int_*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int>_>
 (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
 return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int>_> @ 00013d38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int> > */

int ** std__get_helper_0U_int_ptr_default_delete_int
 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00013d5c */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_M_head
 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00013d80 */

int ** std::_Head_base<0U,_int_*,_false>::_M_head(_Head_base<0U,_int_*,_false> *__b)

{
 return &__b->_M_head_impl;
}



/* Function: __uniq_ptr_impl @ 00013d94 */

/* DWARF original prototype: void
 __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> * this, pointer
 param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> *this,pointer param_1)

{
 __uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
 (&this->super___uniq_ptr_impl<int,_std::default_delete<int[]>_>,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00013dc8 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int[]>_>
 * this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this,pointer __p)

{
 pointer *ppiVar1;
 
 tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>(&this->_M_t);
 ppiVar1 = _M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: tuple<true,_true> @ 00013e14 */

/* DWARF original name: tuple<true, true>
 DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int[]>_> *
 this) */

void __thiscall
std::tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>
 (tuple<int_*,_std::default_delete<int[]>_> *this)

{
 _Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_Tuple_impl
 (&this->super__Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>);
 return;
}



/* Function: _M_ptr @ 00013e48 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
 this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
 __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
 
 ppiVar1 = get<0U,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013e6c */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *
 this) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_Tuple_impl
 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *this)

{
 _Tuple_impl<1U,_std::default_delete<int[]>_>::_Tuple_impl
 (&this->super__Tuple_impl<1U,_std::default_delete<int[]>_>);
 _Head_base<0U,_int_*,_false>::_Head_base((_Head_base<0U,_int_*,_false> *)this);
 return;
}



/* Function: _Tuple_impl @ 00013ea0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_std::default_delete<int[]>_> * this)
 */

void __thiscall
std::_Tuple_impl<1U,_std::default_delete<int[]>_>::_Tuple_impl
 (_Tuple_impl<1U,_std::default_delete<int[]>_> *this)

{
 _Head_base<1U,_std::default_delete<int[]>,_true>::_Head_base
 (&this->super__Head_base<1U,_std::default_delete<int[]>,_true>);
 return;
}



/* Function: _Head_base @ 00013ecc */

/* DWARF original prototype: void _Head_base(_Head_base<1U,_std::default_delete<int[]>,_true> *
 this) */

void __thiscall
std::_Head_base<1U,_std::default_delete<int[]>,_true>::_Head_base
 (_Head_base<1U,_std::default_delete<int[]>,_true> *this)

{
 return;
}



/* Function: get<0U,_int_*,_std::default_delete<int[]>_> @ 00013ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0U, int *, std::default_delete<int[]> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std_get_0U_int_ptr_default_delete_int_array(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int[]>_>
 (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>);
 return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int[]>_> @ 00013f04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int[]> > */

int ** std__get_helper_0U_int_ptr_default_delete_int_array
 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00013f28 */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head
 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
 return ppiVar1;
}



/* Function: get_deleter @ 00013f4c */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get_deleter
 (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
 default_delete<int[]> *pdVar1;
 
 pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
 ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
 return pdVar1;
}



/* Function: operator_call<int> @ 00013f80 */

/* DWARF original prototype: type operator()<int>(default_delete<int[]> * this, int * __ptr) */

type __thiscall std_default_delete_int_array_operator_call(default_delete<int[]> *this,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: _M_deleter @ 00013fc0 */

/* DWARF original prototype: default_delete<int[]> *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int[]>_> * this) */

default_delete<int[]> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
 __tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *p_Var1;
 
 p_Var1 = get<1U,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
 return p_Var1;
}



/* Function: get<1U,_int_*,_std::default_delete<int[]>_> @ 00013fe4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1U, int *, std::default_delete<int[]> > */

__tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std_get_1U_int_ptr_default_delete_int_array(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
 default_delete<int[]> *pdVar1;
 
 pdVar1 = __get_helper<1U,_std::default_delete<int[]>_>
 ((_Tuple_impl<1U,_std::default_delete<int[]>_> *)__t);
 return pdVar1;
}



/* Function: __get_helper<1U,_std::default_delete<int[]>_> @ 00014008 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1U, std::default_delete<int[]> > */

default_delete<int[]> *
std__get_helper_1U_default_delete_int_array
 (_Tuple_impl<1U,_std::default_delete<int[]>_> *__t)

{
 default_delete<int[]> *pdVar1;
 
 pdVar1 = _Tuple_impl<1U,_std::default_delete<int[]>_>::_M_head(__t);
 return pdVar1;
}



/* Function: _M_head @ 0001402c */

default_delete<int[]> *
std::_Tuple_impl<1U,_std::default_delete<int[]>_>::_M_head
 (_Tuple_impl<1U,_std::default_delete<int[]>_> *__t)

{
 default_delete<int[]> *pdVar1;
 
 pdVar1 = _Head_base<1U,_std::default_delete<int[]>,_true>::_M_head
 (&__t->super__Head_base<1U,_std::default_delete<int[]>,_true>);
 return pdVar1;
}



/* Function: _M_head @ 00014050 */

default_delete<int[]> *
std::_Head_base<1U,_std::default_delete<int[]>,_true>::_M_head
 (_Head_base<1U,_std::default_delete<int[]>,_true> *__b)

{
 return &__b->_M_head_impl;
}



/* Function: get @ 00014064 */

/* DWARF original prototype: pointer get(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

pointer __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get
 (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
 pointer piVar1;
 
 piVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
 ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
 return piVar1;
}



/* Function: _M_ptr @ 00014098 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
 this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
 (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
 __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
 
 ppiVar1 = get<0U,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
 return *ppiVar1;
}



/* Function: get<0U,_int_*,_std::default_delete<int[]>_> @ 000140c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0U, int *, std::default_delete<int[]> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std_get_0U_int_ptr_default_delete_int_array(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int[]>_>
 (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>);
 return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int[]>_> @ 000140e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int[]> > */

int ** std__get_helper_0U_int_ptr_default_delete_int_array
 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head(__t);
 return ppiVar1;
}



/* Function: _M_head @ 00014108 */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head
 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
 return ppiVar1;
}



/* Function: forward<int_*&> @ 0001412c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<int *&> */

int ** std::forward<int_*&>(type *__t)

{
 return __t;
}



/* Function: _Head_base<int_*&> @ 00014140 */

/* DWARF original name: _Head_base<int *&>
 DWARF original prototype: void _Head_base<int_*&>(_Head_base<0U,_int_*,_false> * this, int * *
 __h) */

void __thiscall
std::_Head_base<0U,_int_*,_false>::_Head_base<int_*&>(_Head_base<0U,_int_*,_false> *this,int **__h)

{
 int **ppiVar1;
 
 ppiVar1 = forward<int_*&>(__h);
 this->_M_head_impl = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 214 */
