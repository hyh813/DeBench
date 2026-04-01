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
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long long ulonglong;
typedef void* pointer;
typedef void undefined;
typedef unsigned int undefined4;

/* Additional type definitions for C++ template structures */
typedef struct type { pointer _ptr; } type;
typedef struct __tuple_element_t { pointer _ptr; } __tuple_element_t;
typedef struct __tuple_element_t_conflict { pointer _ptr; } __tuple_element_t_conflict;
typedef struct default_delete_int { char _data[1]; } default_delete_int;
typedef struct default_delete_int_array_ { char _data[1]; } default_delete_int_array_;
typedef struct _Head_base_0_int_false_ { int *_M_head_impl; } _Head_base_0_int_false_;
typedef struct _Head_base_1_std_default_delete_int_true_ { default_delete_int _M_head_impl; } _Head_base_1_std_default_delete_int_true_;
typedef struct _Head_base_1_std_default_delete_int_array_true_ { default_delete_int_array_ _M_head_impl; } _Head_base_1_std_default_delete_int_array_true_;
typedef struct _Tuple_impl_1_std_default_delete_int_ { _Head_base_1_std_default_delete_int_true_ super__Head_base_1_std_default_delete_int_true_; } _Tuple_impl_1_std_default_delete_int_;
typedef struct _Tuple_impl_1_std_default_delete_int_array_ { _Head_base_1_std_default_delete_int_array_true_ super__Head_base_1_std_default_delete_int_array_true_; } _Tuple_impl_1_std_default_delete_int_array_;
typedef struct _Tuple_impl_0_int_std_default_delete_int_ { _Tuple_impl_1_std_default_delete_int_ super__Tuple_impl_1_std_default_delete_int_; int *_M_head_impl; } _Tuple_impl_0_int_std_default_delete_int_;
typedef struct _Tuple_impl_0_int_std_default_delete_int_array_ { _Tuple_impl_1_std_default_delete_int_array_ super__Tuple_impl_1_std_default_delete_int_array_; int *_M_head_impl; } _Tuple_impl_0_int_std_default_delete_int_array_;
typedef struct tuple_int_std_default_delete_int_ { _Tuple_impl_0_int_std_default_delete_int_ super__Tuple_impl_0_int_std_default_delete_int_; } tuple_int_std_default_delete_int_;
typedef struct tuple_int_std_default_delete_int_array_ { _Tuple_impl_0_int_std_default_delete_int_array_ super__Tuple_impl_0_int_std_default_delete_int_array_; } tuple_int_std_default_delete_int_array_;
typedef struct std__uniq_ptr_impl_int_std_default_delete_int_ { tuple_int_std_default_delete_int_ _M_t; } std__uniq_ptr_impl_int_std_default_delete_int_;
typedef struct std__uniq_ptr_impl_int_std_default_delete_int_array_ { tuple_int_std_default_delete_int_array_ _M_t; } std__uniq_ptr_impl_int_std_default_delete_int_array_;
typedef struct __uniq_ptr_data_int_std_default_delete_int_true_true { std__uniq_ptr_impl_int_std_default_delete_int_ super___uniq_ptr_impl_int_std_default_delete_int_; } __uniq_ptr_data_int_std_default_delete_int_true_true;
typedef struct __uniq_ptr_data_int_std_default_delete_int_array_true_true_ { std__uniq_ptr_impl_int_std_default_delete_int_array_ super___uniq_ptr_impl_int_std_default_delete_int_array_; } __uniq_ptr_data_int_std_default_delete_int_array_true_true_;
typedef struct unique_ptr_int_std_default_delete_int_ { __uniq_ptr_data_int_std_default_delete_int_true_true _M_t; } unique_ptr_int_std_default_delete_int_;
typedef struct unique_ptr_int_array_std_default_delete_int_array_ { __uniq_ptr_data_int_std_default_delete_int_array_true_true_ _M_t; } unique_ptr_int_array_std_default_delete_int_array_;

/* C++ class structure definitions */
typedef struct SimpleClass { int value; char name[32]; } SimpleClass;
typedef struct LifecycleClass { size_t size; int *data; } LifecycleClass;
typedef struct _func_int_varargs { int (*func)(void); } _func_int_varargs;
typedef struct Base { _func_int_varargs **vptr_Base; } Base;
typedef struct Derived { Base super_Base; int multiplier; } Derived;
typedef struct BaseA { _func_int_varargs **vptr_BaseA; int dataA; } BaseA;
typedef struct BaseB { _func_int_varargs **vptr_BaseB; int dataB; } BaseB;
typedef struct MultiDerived { BaseA super_BaseA; BaseB super_BaseB; } MultiDerived;
typedef struct VirtualBase { _func_int_varargs **vptr_VirtualBase; } VirtualBase;
typedef struct MiddleA { _func_int_varargs **vptr_MiddleA; int dataA; int field_0x8; } MiddleA;
typedef struct MiddleB { _func_int_varargs **vptr_MiddleB; int dataB; } MiddleB;
typedef struct DiamondDerived { VirtualBase field_0x10; MiddleA super_MiddleA; int _20_4_; void *_16_4_; } DiamondDerived;
typedef struct Point { int x; int y; } Point;
typedef struct Container_int { int size; int data[10]; } Container_int;
typedef struct Container_double { int size; double data[10]; } Container_double;
typedef struct RTTIBase { _func_int_varargs **vptr_RTTIBase; } RTTIBase;
typedef struct RTTIDerivedA { RTTIBase super_RTTIBase; } RTTIDerivedA;
typedef struct RTTIDerivedB { RTTIBase super_RTTIBase; } RTTIDerivedB;
typedef struct type_info { void *_vptr; char *name; } type_info;
typedef struct anon_struct_8_2_35feab7f { int __capture_by_value; int *__capture_by_ref; } anon_struct_8_2_35feab7f;
typedef struct anon_struct_1_0_00000001_for__M_head_impl { char _data[1]; } anon_struct_1_0_00000001_for__M_head_impl;
typedef struct unique_ptr_int { char _data[1]; } unique_ptr_int;
typedef struct unique_ptr_int_array { char _data[1]; } unique_ptr_int_array;
typedef struct unique_ptr_int_lambda { char _data[1]; } unique_ptr_int_lambda;
typedef struct deleter_type { char _data[1]; } deleter_type;

/* Template structures for smart pointers */
typedef struct _Head_base_0_int_false { int *_M_head_impl; } _Head_base_0_int_false;
typedef struct _Tuple_impl_1_test_cpp_smart_ptr_lambda { _Head_base_1_std_default_delete_int_true_ super__Head_base_1_test_cpp_smart_ptr_lambda_true; } _Tuple_impl_1_test_cpp_smart_ptr_lambda;
typedef struct _Tuple_impl_0_int_test_cpp_smart_ptr_lambda { _Tuple_impl_1_test_cpp_smart_ptr_lambda super__Tuple_impl_1_test_cpp_smart_ptr_lambda; int *_M_head_impl; } _Tuple_impl_0_int_test_cpp_smart_ptr_lambda;
typedef struct tuple_int_test_cpp_smart_ptr_lambda { _Tuple_impl_0_int_test_cpp_smart_ptr_lambda super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda; } tuple_int_test_cpp_smart_ptr_lambda;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda { tuple_int_test_cpp_smart_ptr_lambda _M_t; } __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false { __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda super___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda; } __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false;
typedef struct unique_ptr_int_test_cpp_smart_ptr_lambda { __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false _M_t; } unique_ptr_int_test_cpp_smart_ptr_lambda;
typedef struct _Head_base_1_test_cpp_smart_ptr_lambda_true { anon_struct_1_0_00000001_for__M_head_impl _M_head_impl; } _Head_base_1_test_cpp_smart_ptr_lambda_true;

/* Global variables */
extern int instance_count;
extern void *std___ioinit;
extern void *__dso_handle;

/* External function declarations */
extern void *operator_new(size_t size);
extern void *operator_new__(size_t size);
extern void operator_delete(void *ptr, size_t size);
extern void operator_delete__(void *ptr);
extern void __cxa_bad_typeid(void);
extern void __cxa_throw_bad_array_new_length(void);
extern int __aeabi_d2iz(double d);
extern int std_type_info_operator_eq(type_info *t1, type_info *t2);
extern void *__dynamic_cast(void *obj, type_info *src, type_info *dest, int offset);
extern int **std_forward_int_ref(type *__t);

/* External pointer declarations (forward declarations) */
extern void *PTR_virtual_func_000145f0;
extern void *PTR_virtual_func_000145d8;
extern void *PTR__RTTIDerivedB_00014464;
extern void *PTR_func_00014570;
extern void *PTR__RTTIDerivedA_00014478;
extern void *PTR__RTTIBase_0001448c;
extern void *PTR_func_000144a4;
extern void *PTR_func_000144bc;
extern void *PTR_func_000144d8;
extern void *PTR_DAT_000144e8;
extern void *PTR_DAT_000144f0;
extern void *PTR_funcA_00014584;
extern void *PTR_funcB_0001459c;
extern void *PTR_funcB_000145b0;
extern void *PTR_funcA_000145c4;
extern void *PTR_func_0001449c;

/* RTTI typeinfo declarations */
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00010a68 @ 00010a68 */

void FUN_00010a68(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010cc4 */

/* WARNING: Removing unreachable block (ram,0x00010d5c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int r1;
 int r2;
 int r3;
 SimpleClass obj;
 
 SimpleClass_SimpleClass(&obj,5,"Test");
 SimpleClass_setValue(&obj,10);
 iVar1 = SimpleClass_getValue(&obj);
 iVar2 = SimpleClass_compute(&obj,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00010d74 */

/* WARNING: Removing unreachable block (ram,0x00010e34) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int __in_chrg;
 int result;
 LifecycleClass obj;
 
 LifecycleClass_LifecycleClass(&obj,5);
 iVar1 = LifecycleClass_getData(&obj,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass_dtor(&obj,__in_chrg);
 iVar3 = LifecycleClass_getInstanceCount();
 return iVar1 + iVar2 + iVar3 * 1000;
}



/* Function: call_virtual_func @ 00010e48 */

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x00010e70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 int x_local;
 Base *obj_local;
 
 iVar1 = (**obj->_vptr_Base)(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010e84 */

/* WARNING: Removing unreachable block (ram,0x00010f68) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int __in_chrg;
 int __in_chrg_00;
 Base base;
 int r1;
 int r2;
 Base *pb;
 Base *pd;
 int r3;
 int r4;
 Derived derived;
 
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145f0;
 Derived_Derived(&derived,3);
 iVar1 = Base_virtual_func(&base,5);
 iVar2 = Derived_virtual_func(&derived,5);
 iVar3 = call_virtual_func(&base,5);
 iVar4 = call_virtual_func(&derived.super_Base,5);
 Derived_dtor(&derived,__in_chrg);
 Base_dtor(&base,__in_chrg_00);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00010fa0 */

/* WARNING: Removing unreachable block (ram,0x0001107c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 int __in_chrg;
 BaseA *pa;
 BaseB *pb;
 int r1;
 int r2;
 int ptr_equal;
 MultiDerived obj;
 
 MultiDerived_MultiDerived(&obj);
 obj.super_BaseA.dataA = 100;
 obj.super_BaseB.dataB = 200;
 iVar1 = ((int (*)(BaseA *))(*obj.super_BaseA._vptr_BaseA[0]))(&obj.super_BaseA);
 iVar2 = ((int (*)(BaseB *))(*obj.super_BaseB._vptr_BaseB[0]))(&obj.super_BaseB);
 MultiDerived_dtor(&obj,__in_chrg);
 return iVar1 + iVar2 + (uint)(&obj != (MultiDerived *)&obj.super_BaseB);
}



/* Function: test_cpp_diamond_inheritance @ 000110a4 */

/* WARNING: Removing unreachable block (ram,0x00011154) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 void **__vtt_parm;
 int in_r1;
 void **in_r2;
 undefined8 uVar1;
 VirtualBase *pb;
 int r1;
 int r2;
 DiamondDerived obj;
 
 DiamondDerived_DiamondDerived(&obj,in_r1,in_r2);
 obj._20_4_ = 0x32;
 __vtt_parm = (void **)((void *(*)(void *))obj._16_4_)(&obj.field_0x10);
 obj._20_4_ = 100;
 uVar1 = ((undefined8 (*)(void *))obj._16_4_)(&obj.field_0x10);
 DiamondDerived_dtor(&obj,(int)((ulonglong)uVar1 >> 0x20),__vtt_parm);
 return (int)(uintptr_t)__vtt_parm + (int)uVar1;
}



/* Function: test_cpp_operator_overload @ 0001117c */

/* WARNING: Removing unreachable block (ram,0x0001123c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 bool bVar1;
 int iVar2;
 bool eq;
 Point p1;
 Point p2;
 Point p3;
 
 Point_Point(&p1,1,2);
 Point_Point(&p2,3,4);
 Point_operator_add(&p3,&p1,&p2);
 bVar1 = Point_operator_eq(&p1,&p2);
 Point_operator_inc(&p3);
 if (bVar1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 10;
 }
 return iVar2 + p3.x + p3.y;
}



/* Function: test_cpp_template_func @ 00011250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 undefined4 extraout_r0;
 int iVar1;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 int r1;
 undefined4 r2_low;
 undefined4 r2_high;
 int local_c;
 
 local_c = 0;
 r1 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 r2_low = extraout_r0;
 r2_high = extraout_r1;
 template_swap_int(&a,&b);
 iVar1 = __aeabi_d2iz(*(double*)&r2_low);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,local_c,0);
 }
 return iVar1 + r1 + a + b;
}



/* Function: test_cpp_template_class @ 00011324 */

/* WARNING: Removing unreachable block (ram,0x00011420) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 undefined4 extraout_r0;
 int iVar3;
 undefined4 extraout_r1;
 double value;
 int r1;
 int r2;
 double r3;
 Container_int int_container;
 Container_double double_container;
 
 Container_int_Container(&int_container);
 Container_int_push(&int_container,10);
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar1 = Container_int_get(&int_container,0);
 iVar2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container,value);
 Container_double_get(&double_container,0);
 iVar3 = __aeabi_d2iz(*(double*)&extraout_r0);
 return iVar1 + iVar2 + iVar3;
}



/* Function: operator_call @ 0001143c */

/* DWARF original prototype: int operator()(anon_struct_8_2_35feab7f * __closure, int x) */

int anon_struct_8_2_35feab7f_operator_call(anon_struct_8_2_35feab7f *this_ptr,int x)

{
 int x_local;
 int *capture_by_value;
 
 /* Unresolved local var: int * capture_by_ref@[???] */
 *this_ptr->__capture_by_ref = *this_ptr->__capture_by_ref + 5;
 return this_ptr->__capture_by_value * x + *this_ptr->__capture_by_ref;
}



/* Function: test_cpp_lambda @ 0001149c */

/* WARNING: Removing unreachable block (ram,0x00011518) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 int iVar1;
 int capture_by_ref;
 int capture_by_value;
 int r1;
 int r2;
 anon_struct_8_2_35feab7f lambda1;
 
 capture_by_value = 10;
 capture_by_ref = 0x14;
 lambda1.__capture_by_value = 10;
 lambda1.__capture_by_ref = &capture_by_ref;
 iVar1 = anon_struct_8_2_35feab7f_operator_call(&lambda1,3);
 return iVar1 + 0x1e;
}



/* Function: test_cpp_exception @ 0001152c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 int result;
 int e;
 int e_1;
 BaseException *e_3;
 DerivedException *e_2;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&DAT_00014000,0);
}



/* Function: operator_call @ 0001169c */

/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
 int * p) */

void anon_struct_1_0_00000001_for__M_head_impl_operator_call
 (anon_struct_1_0_00000001_for__M_head_impl *this_ptr,int *p)

{
 int *p_local;
 anon_struct_1_0_00000001_for__M_head_impl *closure_local;
 
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 000116e0 */

/* WARNING: Removing unreachable block (ram,0x00011880) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 pointer __p;
 type piVar1;
 type *ptVar2;
 int *__p_00;
 pointer __p_01;
 int __in_chrg;
 int __in_chrg_00;
 int __in_chrg_01;
 int __in_chrg_02;
 int iVar3;
 int iVar4;
 int iVar5;
 anon_struct_1_0_00000001_for__M_head_impl deleter;
 unique_ptr_int ptr1;
 unique_ptr_int ptr2;
 unique_ptr_int_array arr;
 unique_ptr_int_lambda ptr3;
 int r1;
 int r2;
 int r3;
 
 __p = operator_new(4);
 *(int *)__p = 100;
 unique_ptr_int_ctor(&ptr1,__p);
 piVar1 = unique_ptr_int_deref(&ptr1);
 *(int *)piVar1._ptr = 200;
 ptVar2 = move_unique_ptr_int(&ptr1);
 unique_ptr_int_copy_ctor(&ptr2,ptVar2);
 piVar1 = unique_ptr_int_deref(&ptr2);
 iVar3 = *(int *)piVar1._ptr;
 __p_00 = (int *)operator_new__(0x14);
 *(int *)__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 unique_ptr_int_array_ctor(&arr,__p_00);
 piVar1 = unique_ptr_int_array_index(&arr,2);
 iVar4 = *(int *)piVar1._ptr;
 __p_01 = operator_new(4);
 *(int *)__p_01 = 500;
 unique_ptr_int_lambda_ctor(&ptr3,__p_01,&deleter);
 piVar1 = unique_ptr_int_lambda_deref(&ptr3);
 iVar5 = *(int *)piVar1._ptr;
 unique_ptr_int_lambda_dtor(&ptr3,__in_chrg);
 unique_ptr_int_array_dtor(&arr,__in_chrg_00);
 unique_ptr_int_dtor(&ptr2,__in_chrg_01);
 unique_ptr_int_dtor(&ptr1,__in_chrg_02);
 return iVar3 + iVar4 + iVar5;
}



/* Function: test_cpp_rtti @ 000118c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 RTTIDerivedA *this_ptr;
 RTTIDerivedB *this_00;
 int iVar1;
 RTTIDerivedA *this_01;
 RTTIDerivedB *this_02;
 char *__s;
 size_t sVar2;
 RTTIDerivedA *extraout_r3;
 int result;
 RTTIBase *obj1;
 RTTIBase *obj2;
 RTTIDerivedA *derivedA;
 RTTIDerivedB *derivedB;
 
 this_ptr = operator_new(4);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
 RTTIDerivedA_RTTIDerivedA(this_ptr);
 this_00 = operator_new(4);
 (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
 RTTIDerivedB_RTTIDerivedB(this_00);
 result = 0;
 if (this_ptr == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00011954:
 result = 10;
 }
 else {
 iVar1 = std_type_info_operator_eq
 ((type_info *)(this_ptr->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedA_typeinfo);
 if (iVar1 != 0) goto LAB_00011954;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00011994:
 result = result + 0x14;
 }
 else {
 iVar1 = std_type_info_operator_eq
 ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedB_typeinfo);
 if (iVar1 != 0) goto LAB_00011994;
 }
 if (this_ptr == (RTTIDerivedA *)0x0) {
 this_01 = (RTTIDerivedA *)0x0;
 }
 else {
 this_01 = (RTTIDerivedA *)__dynamic_cast(this_ptr,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (this_01 != (RTTIDerivedA *)0x0) {
 iVar1 = RTTIDerivedA_derivedA_data(this_01);
 result = result + iVar1;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 this_02 = (RTTIDerivedB *)0x0;
 }
 else {
 this_02 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (this_02 != (RTTIDerivedB *)0x0) {
 iVar1 = RTTIDerivedB_derivedB_data(this_02);
 result = result + iVar1;
 }
 if (this_ptr == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 this_ptr = extraout_r3;
 }
 else {
 __s = std_type_info_name((type_info *)(this_ptr->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar2 = strlen(__s);
 result = sVar2 + result;
 if (this_ptr == (RTTIDerivedA *)0x0) goto LAB_00011aa0;
 }
 ((void (*)(RTTIBase *))((int *)(this_ptr->super_RTTIBase)._vptr_RTTIBase[1]))(this_ptr);
LAB_00011aa0:
 if (this_00 != (RTTIDerivedB *)0x0) {
 ((void (*)(RTTIBase *))((int *)(this_00->super_RTTIBase)._vptr_RTTIBase[1]))(this_00);
 }
 return result;
}



/* Function: test_cpp_oo_features @ 00011adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_0001426c);
 iVar1 = test_cpp_member_func();
 printf(&DAT_00014290,iVar1);
 iVar1 = test_cpp_constructor();
 printf(&DAT_000142b0,iVar1);
 iVar1 = test_cpp_virtual_func();
 printf(&DAT_000142cc,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_000142e8,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_00014304,iVar1);
 iVar1 = test_cpp_operator_overload();
 printf(&DAT_00014324,iVar1);
 iVar1 = test_cpp_template_func();
 printf(&DAT_00014340,iVar1);
 iVar1 = test_cpp_template_class();
 printf(&DAT_0001435c,iVar1);
 iVar1 = test_cpp_lambda();
 printf(&DAT_00014378,iVar1);
 iVar1 = test_cpp_exception();
 printf(&DAT_00014394,iVar1);
 iVar1 = test_cpp_smart_ptr();
 printf(&DAT_000143b4,iVar1);
 iVar1 = test_cpp_rtti();
 printf(&DAT_000143d4,iVar1);
 return;
}



/* Function: main @ 00011c18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_data_const_test_cpp_smart_ptr_lambda_ref @ 00011c30 */

__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false *
__uniq_ptr_data_const_test_cpp_smart_ptr_lambda_ref
 (__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false *closure,
 pointer param_1,anon_struct_1_0_00000001_for__M_head_impl *param_2)

{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_ctor
 (&closure->super___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda,param_1,
 param_2);
 return closure;
}



/* Function: unique_ptr_int_test_cpp_smart_ptr_lambda_ctor @ 00011c6c */

unique_ptr_int_test_cpp_smart_ptr_lambda *
unique_ptr_int_test_cpp_smart_ptr_lambda_ctor
 (unique_ptr_int_test_cpp_smart_ptr_lambda *closure,pointer __p,
 deleter_type *__d)

{
 __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false_ctor(&closure->_M_t,__p,__d);
 return closure;
}



/* Function: unique_ptr_int_test_cpp_smart_ptr_lambda_dtor @ 00011ca8 */

void *
unique_ptr_int_test_cpp_smart_ptr_lambda_dtor
 (unique_ptr_int_test_cpp_smart_ptr_lambda *closure,int __in_chrg)

{
 pointer *__t;
 deleter_type *closure_00;
 type *ppiVar1;
 
 __t = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)closure);
 if (*__t != (pointer)0x0) {
 closure_00 = get_deleter(closure);
 ppiVar1 = move_int_r(__t);
 anon_struct_1_0_00000001_for__M_head_impl_operator_call(closure_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return closure;
}



/* Function: unique_ptr_int_test_cpp_smart_ptr_lambda_deref @ 00011d1c */

type
unique_ptr_int_test_cpp_smart_ptr_lambda_deref
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 pointer piVar1;
 type result;
 
 piVar1 = unique_ptr_int_test_cpp_smart_ptr_lambda_get(this_ptr);
 result._ptr = piVar1;
 return result;
}



/* Function: __uniq_ptr_impl_const_test_cpp_smart_ptr_lambda_ref @ 00011d4c */

__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_ctor
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *closure,pointer __p,
 anon_struct_1_0_00000001_for__M_head_impl *__d)

{
 anon_struct_1_0_00000001_for__M_head_impl *__a2;
 
 __a2 = forward_const_test_cpp_smart_ptr_lambda_ref(__d);
 tuple_int_test_cpp_smart_ptr_lambda_ctor(&closure->_M_t,&__p,__a2);
 return closure;
}



/* Function: _M_ptr @ 00011d94 */

pointer *
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *closure)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = get_0_int_test_cpp_smart_ptr_lambda(&closure->_M_t);
 return (pointer *)ppiVar1;
}



/* Function: get_deleter @ 00011dc0 */

deleter_type *
unique_ptr_int_test_cpp_smart_ptr_lambda_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this_ptr);
 return paVar1;
}



/* Function: get @ 00011dec */

pointer
unique_ptr_int_test_cpp_smart_ptr_lambda_get
 (unique_ptr_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 pointer piVar1;
 
 piVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_val
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this_ptr);
 return piVar1;
}



/* Function: forward_const_test_cpp_smart_ptr_lambda_ref @ 00011e18 */

anon_struct_1_0_00000001_for__M_head_impl *
forward_const_test_cpp_smart_ptr_lambda_ref(anon_struct_1_0_00000001_for__M_head_impl *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *__t_local;
 
 return __t;
}



/* Function: tuple_int_ref_const_test_cpp_smart_ptr_lambda_ref @ 00011e3c */

tuple_int_test_cpp_smart_ptr_lambda *
tuple_int_test_cpp_smart_ptr_lambda_ctor
 (tuple_int_test_cpp_smart_ptr_lambda *this_ptr,int **__a1,
 anon_struct_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 type __a1_type;
 
 __a1_type._ptr = __a1;
 __head = std_forward_int_ref(&__a1_type);
 forward_const_test_cpp_smart_ptr_lambda_ref(__a2);
 _Tuple_impl_0_int_test_cpp_smart_ptr_lambda_ctor
 (&this_ptr->super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda,__head);
 return this_ptr;
}



/* Function: get_0_int_test_cpp_smart_ptr_lambda @ 00011e90 */

__tuple_element_t *
get_0_int_test_cpp_smart_ptr_lambda
 (tuple_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 int **ppiVar1;
 __tuple_element_t *result;
 
 ppiVar1 = __get_helper_0_int_test_cpp_smart_ptr_lambda
 (&this_ptr->super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda);
 result->_ptr = ppiVar1;
 return result;
}



/* Function: _M_deleter @ 00011ebc */

anon_struct_1_0_00000001_for__M_head_impl *
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = get_1_int_test_cpp_smart_ptr_lambda(&this_ptr->_M_t);
 return p_Var1;
}



/* Function: _M_ptr @ 00011ee8 */

pointer
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_M_ptr_val
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = get_0_int_test_cpp_smart_ptr_lambda_2(&this_ptr->_M_t);
 return *ppiVar1;
}



/* Function: _Tuple_impl_int_ref_const_test_cpp_smart_ptr_lambda_ref @ 00011f18 */

_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *
_Tuple_impl_0_int_test_cpp_smart_ptr_lambda_ctor
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this_ptr,int **__head)

{
 anon_struct_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 anon_struct_1_0_00000001_for__M_head_impl *in_r2;
 type __head_type;
 
 __head_00 = forward_const_test_cpp_smart_ptr_lambda_ref(in_r2);
 _Tuple_impl_1_test_cpp_smart_ptr_lambda_ctor
 (&this_ptr->super__Tuple_impl_1_test_cpp_smart_ptr_lambda,__head_00);
 __head_type._ptr = __head;
 __h = std_forward_int_ref(&__head_type);
 _Head_base_0_int_false_ctor((_Head_base_0_int_false *)this_ptr,__h);
 return this_ptr;
}



/* Function: __get_helper_0_int_test_cpp_smart_ptr_lambda @ 00011f74 */

__tuple_element_t * __get_helper_0_int_test_cpp_smart_ptr_lambda
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 int **ppiVar1;
 __tuple_element_t *result;
 
 ppiVar1 = _Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head(this_ptr);
 result._ptr = ppiVar1;
 return result;
}



/* Function: get_1_int_test_cpp_smart_ptr_lambda @ 00011f9c */

__tuple_element_t_conflict *
get_1_int_test_cpp_smart_ptr_lambda
 (tuple_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = __get_helper_1_test_cpp_smart_ptr_lambda
 ((_Tuple_impl_1_test_cpp_smart_ptr_lambda *)this_ptr);
 return paVar1;
}



/* Function: get_0_int_test_cpp_smart_ptr_lambda_2 @ 00011fc4 */

__tuple_element_t *
get_0_int_test_cpp_smart_ptr_lambda_2
 (tuple_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 int **ppiVar1;
 __tuple_element_t *result;
 
 ppiVar1 = __get_helper_0_int_test_cpp_smart_ptr_lambda_2
 (&this_ptr->super__Tuple_impl_0_int_test_cpp_smart_ptr_lambda);
 result->_ptr = ppiVar1;
 return result;
}



/* Function: _Tuple_impl_1_test_cpp_smart_ptr_lambda @ 00011ff0 */

_Tuple_impl_1_test_cpp_smart_ptr_lambda *
_Tuple_impl_1_test_cpp_smart_ptr_lambda_ctor
 (_Tuple_impl_1_test_cpp_smart_ptr_lambda *this_ptr,
 anon_struct_1_0_00000001_for__M_head_impl *__head)

{
 _Head_base_1_test_cpp_smart_ptr_lambda_true_ctor
 (&this_ptr->super__Head_base_1_test_cpp_smart_ptr_lambda_true,__head);
 return this_ptr;
}



/* Function: _M_head @ 00012020 */

int ** _Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base_0_int_false_M_head((_Head_base_0_int_false *)this_ptr);
 return ppiVar1;
}



/* Function: __get_helper_1_test_cpp_smart_ptr_lambda @ 0001204c */

anon_struct_1_0_00000001_for__M_head_impl *
__get_helper_1_test_cpp_smart_ptr_lambda
 (_Tuple_impl_1_test_cpp_smart_ptr_lambda *this_ptr)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = _Tuple_impl_1_test_cpp_smart_ptr_lambda_M_head(this_ptr);
 return paVar1;
}



/* Function: __get_helper_0_int_test_cpp_smart_ptr_lambda_2 @ 00012074 */

int ** __get_helper_0_int_test_cpp_smart_ptr_lambda_2
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = _Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head_2(this_ptr);
 return ppiVar1;
}



/* Function: _Head_base_1_test_cpp_smart_ptr_lambda @ 0001209c */

_Head_base_1_test_cpp_smart_ptr_lambda_true *
_Head_base_1_test_cpp_smart_ptr_lambda_true_ctor
 (_Head_base_1_test_cpp_smart_ptr_lambda_true *this_ptr,
 anon_struct_1_0_00000001_for__M_head_impl *__h)

{
 return this_ptr;
}



/* Function: _M_head @ 000120c4 */

anon_struct_1_0_00000001_for__M_head_impl *
_Tuple_impl_1_test_cpp_smart_ptr_lambda_M_head
 (_Tuple_impl_1_test_cpp_smart_ptr_lambda *this_ptr)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = _Head_base_1_test_cpp_smart_ptr_lambda_true_M_head
 (&this_ptr->super__Head_base_1_test_cpp_smart_ptr_lambda_true);
 return paVar1;
}



/* Function: _M_head @ 000120ec */

int ** _Tuple_impl_0_int_test_cpp_smart_ptr_lambda_M_head_2
 (_Tuple_impl_0_int_test_cpp_smart_ptr_lambda *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = _Head_base_0_int_false_M_head_2((_Head_base_0_int_false *)this_ptr);
 return ppiVar1;
}



/* Function: _M_head @ 00012118 */

anon_struct_1_0_00000001_for__M_head_impl *
_Head_base_1_test_cpp_smart_ptr_lambda_true_M_head
 (_Head_base_1_test_cpp_smart_ptr_lambda_true *this_ptr)

{
 return &this_ptr->_M_head_impl;
}



/* Function: __static_initialization_and_destruction_0 @ 0001213c */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
 int __priority_local;
 int __initialize_p_local;
 
 if ((__initialize_p == 1) && (__priority == 0xffff)) {
 }
 return;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000121a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 000121bc */

/* DWARF original prototype: char * name(type_info * this_ptr) */

char * std_type_info_name(type_info *this_ptr)

{
 char *pcVar1;
 type_info *this_local;
 
 if (**(char **)(this_ptr + 4) == '*') {
 pcVar1 = (char *)(*(int *)(this_ptr + 4) + 1);
 }
 else {
 pcVar1 = *(char **)(this_ptr + 4);
 }
 return pcVar1;
}



/* Function: SimpleClass @ 00012208 */

/* DWARF original prototype: SimpleClass * SimpleClass(SimpleClass * this_ptr, int v, char * n) */

SimpleClass * SimpleClass_SimpleClass(SimpleClass *this_ptr,int v,char *n)

{
 char *n_local;
 int v_local;
 SimpleClass *this_local;
 
 this_ptr->value = v;
 strncpy(this_ptr->name,n,0x1f);
 this_ptr->name[0x1f] = '\0';
 return this_ptr;
}



/* Function: getValue @ 00012260 */

/* DWARF original prototype: int getValue(SimpleClass * this_ptr) */

int SimpleClass_getValue(SimpleClass *this_ptr)

{
 SimpleClass *this_local;
 
 return this_ptr->value;
}



/* Function: setValue @ 00012288 */

/* DWARF original prototype: void setValue(SimpleClass * this_ptr, int v) */

void SimpleClass_setValue(SimpleClass *this_ptr,int v)

{
 int v_local;
 SimpleClass *this_local;
 
 this_ptr->value = v;
 return;
}



/* Function: compute @ 000122b8 */

/* DWARF original prototype: int compute(SimpleClass * this_ptr, int x) */

int SimpleClass_compute(SimpleClass *this_ptr,int x)

{
 size_t sVar1;
 int iVar2;
 int x_local;
 SimpleClass *this_local;
 
 iVar2 = this_ptr->value;
 sVar1 = strlen(this_ptr->name);
 return x * iVar2 + sVar1;
}



/* Function: getClassID @ 00012304 */

int SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00012324 */

/* DWARF original prototype: LifecycleClass * LifecycleClass(LifecycleClass * this_ptr, size_t s) */

LifecycleClass * LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,size_t s)

{
 int *piVar1;
 size_t s_local;
 LifecycleClass *this_local;
 size_t i;
 
 this_ptr->size = s;
 if (s < 0x1fffffff) {
 piVar1 = operator_new__(s << 2);
 this_ptr->data = piVar1;
 for (i = 0; i < s; i = i + 1) {
LAB_0001237c:
 this_ptr->data[i] = i * 10;
 }
 instance_count = instance_count + 1;
 return this_ptr;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_0001237c;
}



/* Function: ~LifecycleClass @ 000123f4 */

/* DWARF original prototype: void * ~LifecycleClass(LifecycleClass * this_ptr, int __in_chrg) */

void * LifecycleClass_dtor(LifecycleClass *this_ptr,int __in_chrg)

{
 LifecycleClass *this_local;
 
 if (this_ptr->data != (int *)0x0) {
 operator_delete__(this_ptr->data);
 }
 instance_count = instance_count + -1;
 return this_ptr;
}



/* Function: getData @ 0001244c */

/* DWARF original prototype: int getData(LifecycleClass * this_ptr, size_t idx) */

int LifecycleClass_getData(LifecycleClass *this_ptr,size_t idx)

{
 int iVar1;
 size_t idx_local;
 LifecycleClass *this_local;
 
 if (idx < this_ptr->size) {
 iVar1 = this_ptr->data[idx];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: getInstanceCount @ 000124a4 */

int LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 000124c8 */

/* DWARF original prototype: int virtual_func(Base * this_ptr, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 int x_local;
 Base *this_local;
 
 return x + 1;
}



/* Function: getName @ 000124f4 */

/* DWARF original prototype: char * getName(Base * this_ptr) */

char * Base_getName(Base *this_ptr)

{
 Base *this_local;
 
 return "Base";
}



/* Function: ~Base @ 0001251c */

/* DWARF original prototype: void * ~Base(Base * this_ptr, int __in_chrg) */

void * Base_dtor(Base *this_ptr,int __in_chrg)

{
 Base *this_local;
 
 this_ptr->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145f0;
 return this_ptr;
}



/* Function: ~Base @ 00012550 */

/* DWARF original prototype: void * ~Base(Base * this_ptr, int __in_chrg) */

void * Base_dtor_2(Base *this_ptr,int __in_chrg)

{
 Base *this_local;
 
 Base_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: Base @ 00012584 */

/* DWARF original prototype: Base * Base(Base * this_ptr) */

Base * Base_Base(Base *this_ptr)

{
 Base *this_local;
 
 this_ptr->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145f0;
 return this_ptr;
}



/* Function: Derived @ 000125b8 */

/* DWARF original prototype: Derived * Derived(Derived * this_ptr, int m) */

Derived * Derived_Derived(Derived *this_ptr,int m)

{
 int m_local;
 Derived *this_local;
 
 Base_Base(&this_ptr->super_Base);
 (this_ptr->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145d8;
 this_ptr->multiplier = m;
 return this_ptr;
}



/* Function: virtual_func @ 00012604 */

/* DWARF original prototype: int virtual_func(Derived * this_ptr, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 int x_local;
 Derived *this_local;
 
 return x * this_ptr->multiplier;
}



/* Function: getName @ 00012638 */

/* DWARF original prototype: char * getName(Derived * this_ptr) */

char * Derived_getName(Derived *this_ptr)

{
 Derived *this_local;
 
 return "Derived";
}



/* Function: funcA @ 00012660 */

/* DWARF original prototype: int funcA(BaseA * this_ptr) */

int BaseA_funcA(BaseA *this_ptr)

{
 BaseA *this_local;
 
 return 10;
}



/* Function: ~BaseA @ 00012684 */

/* DWARF original prototype: void * ~BaseA(BaseA * this_ptr, int __in_chrg) */

void * BaseA_dtor(BaseA *this_ptr,int __in_chrg)

{
 BaseA *this_local;
 
 this_ptr->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_000145c4;
 return this_ptr;
}



/* Function: ~BaseA @ 000126b8 */

/* DWARF original prototype: void * ~BaseA(BaseA * this_ptr, int __in_chrg) */

void * BaseA_dtor_2(BaseA *this_ptr,int __in_chrg)

{
 BaseA *this_local;
 
 BaseA_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: funcB @ 000126ec */

/* DWARF original prototype: int funcB(BaseB * this_ptr) */

int BaseB_funcB(BaseB *this_ptr)

{
 BaseB *this_local;
 
 return 0x14;
}



/* Function: ~BaseB @ 00012710 */

/* DWARF original prototype: void * ~BaseB(BaseB * this_ptr, int __in_chrg) */

void * BaseB_dtor(BaseB *this_ptr,int __in_chrg)

{
 BaseB *this_local;
 
 this_ptr->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_000145b0;
 return this_ptr;
}



/* Function: ~BaseB @ 00012744 */

/* DWARF original prototype: void * ~BaseB(BaseB * this_ptr, int __in_chrg) */

void * BaseB_dtor_2(BaseB *this_ptr,int __in_chrg)

{
 BaseB *this_local;
 
 BaseB_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: funcA @ 00012778 */

/* DWARF original prototype: int funcA(MultiDerived * this_ptr) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 return 0x1e;
}



/* Function: funcB @ 0001279c */

/* DWARF original prototype: int funcB(MultiDerived * this_ptr) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 return 0x28;
}



/* Function: funcB @ 000127c0 */

/* non-virtual thunk to MultiDerived::funcB() */

void MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 MultiDerived_funcB((MultiDerived *)&this_ptr[-1].super_BaseB);
 return;
}



/* Function: BaseA @ 000127c8 */

/* DWARF original prototype: BaseA * BaseA(BaseA * this_ptr) */

BaseA * BaseA_BaseA(BaseA *this_ptr)

{
 BaseA *this_local;
 
 this_ptr->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_000145c4;
 return this_ptr;
}



/* Function: BaseB @ 000127fc */

/* DWARF original prototype: BaseB * BaseB(BaseB * this_ptr) */

BaseB * BaseB_BaseB(BaseB *this_ptr)

{
 BaseB *this_local;
 
 this_ptr->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_000145b0;
 return this_ptr;
}



/* Function: MultiDerived @ 00012830 */

/* DWARF original prototype: MultiDerived * MultiDerived(MultiDerived * this_ptr) */

MultiDerived * MultiDerived_MultiDerived(MultiDerived *this_ptr)

{
 MultiDerived *this_local;
 
 BaseA_BaseA(&this_ptr->super_BaseA);
 BaseB_BaseB(&this_ptr->super_BaseB);
 (this_ptr->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00014584;
 (this_ptr->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_0001459c;
 return this_ptr;
}



/* Function: func @ 0001288c */

/* DWARF original prototype: int func(VirtualBase * this_ptr) */

int VirtualBase_func(VirtualBase *this_ptr)

{
 VirtualBase *this_local;
 
 return 100;
}



/* Function: ~VirtualBase @ 000128b0 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this_ptr, int __in_chrg) */

void * VirtualBase_dtor(VirtualBase *this_ptr,int __in_chrg)

{
 VirtualBase *this_local;
 
 this_ptr->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00014570;
 return this_ptr;
}



/* Function: ~VirtualBase @ 000128e4 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this_ptr, int __in_chrg) */

void * VirtualBase_dtor_2(VirtualBase *this_ptr,int __in_chrg)

{
 VirtualBase *this_local;
 
 VirtualBase_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: func @ 00012918 */

/* DWARF original prototype: int func(MiddleA * this_ptr) */

int MiddleA_func(MiddleA *this_ptr)

{
 MiddleA *this_local;
 
 return *(int *)((int)&this_ptr->dataA + (int)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001295c */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *this_ptr)

{
 MiddleA_func((MiddleA *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00012970 */

/* DWARF original prototype: int func(MiddleB * this_ptr) */

int MiddleB_func(MiddleB *this_ptr)

{
 MiddleB *this_local;
 
 return *(int *)((int)&this_ptr->dataB + (int)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 000129b4 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *this_ptr)

{
 MiddleB_func((MiddleB *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 000129c8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this_ptr) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 DiamondDerived *this_local;
 
 return *(int *)((int)&(this_ptr->super_MiddleA).dataA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00012a0c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_func((DiamondDerived *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00012a20 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_func((DiamondDerived *)&this_ptr[-1].field_0x10);
 return;
}



/* Function: VirtualBase @ 00012a28 */

/* DWARF original prototype: VirtualBase * VirtualBase(VirtualBase * this_ptr) */

VirtualBase * VirtualBase_VirtualBase(VirtualBase *this_ptr)

{
 VirtualBase *this_local;
 
 this_ptr->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00014570;
 return this_ptr;
}



/* Function: MiddleA @ 00012a5c */

/* DWARF original prototype: MiddleA * MiddleA(MiddleA * this_ptr, int __in_chrg, void * * __vtt_parm) */

MiddleA * MiddleA_MiddleA(MiddleA *this_ptr,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this_ptr->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this_ptr;
}



/* Function: ~MiddleA @ 00012abc */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this_ptr, int __in_chrg, void * * __vtt_parm) */

void * MiddleA_dtor(MiddleA *this_ptr,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this_ptr->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this_ptr;
}



/* Function: MiddleB @ 00012b1c */

/* DWARF original prototype: MiddleB * MiddleB(MiddleB * this_ptr, int __in_chrg, void * * __vtt_parm) */

MiddleB * MiddleB_MiddleB(MiddleB *this_ptr,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this_ptr->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this_ptr;
}



/* Function: ~MiddleB @ 00012b7c */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this_ptr, int __in_chrg, void * * __vtt_parm) */

void * MiddleB_dtor(MiddleB *this_ptr,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this_ptr->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this_ptr;
}



/* Function: DiamondDerived @ 00012bdc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: DiamondDerived * DiamondDerived(DiamondDerived * this_ptr, int __in_chrg, void * * __vtt_parm) */

DiamondDerived * DiamondDerived_DiamondDerived(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 DiamondDerived *this_local;
 
 VirtualBase_VirtualBase((VirtualBase *)&this_ptr->field_0x10);
 MiddleA_MiddleA(&this_ptr->super_MiddleA,0x144e8,&PTR_DAT_000144e8);
 MiddleB_MiddleB((MiddleB *)&(this_ptr->super_MiddleA).field_0x8,0x144f0,&PTR_DAT_000144f0);
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)&PTR_func_000144a4;
 *(undefined ***)&this_ptr->field_0x10 = &PTR_func_000144d8;
 *(undefined ***)&(this_ptr->super_MiddleA).field_0x8 = &PTR_func_000144bc;
 return this_ptr;
}



/* Function: Point @ 00012c74 */

/* DWARF original prototype: Point * Point(Point * this_ptr, int _x, int _y) */

Point * Point_Point(Point *this_ptr,int _x,int _y)

{
 int _y_local;
 int _x_local;
 Point *this_local;
 
 this_ptr->x = _x;
 this_ptr->y = _y;
 return this_ptr;
}



/* Function: operator+ @ 00012cb8 */

/* DWARF original prototype: Point operator+(Point * this_ptr, Point * other) */

Point * Point_operator_add(Point *__return_storage_ptr__,Point *this_ptr,Point *other)

{
 Point *other_local;
 Point *this_local;
 
 Point_Point(__return_storage_ptr__,this_ptr->x + other->x,this_ptr->y + other->y);
 return __return_storage_ptr__;
}



/* Function: operator== @ 00012d10 */

/* DWARF original prototype: bool operator==(Point * this_ptr, Point * other) */

bool Point_operator_eq(Point *this_ptr,Point *other)

{
 bool bVar1;
 Point *other_local;
 Point *this_local;
 
 if ((this_ptr->x == other->x) && (this_ptr->y == other->y)) {
 bVar1 = true;
 }
 else {
 bVar1 = false;
 }
 return bVar1;
}



/* Function: operator++ @ 00012d70 */

/* DWARF original prototype: Point * operator++(Point * this_ptr) */

Point * Point_operator_inc(Point *this_ptr)

{
 Point *this_local;
 
 this_ptr->x = this_ptr->x + 1;
 this_ptr->y = this_ptr->y + 1;
 return this_ptr;
}



/* Function: template_max_int @ 00012dbc */

int template_max_int(int a,int b)

{
 int b_local;
 int a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 00012dfc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012e28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 in_r2;
 undefined4 in_r3;
 double b_local;
 double a_local;
 
 __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0),in_r0,in_r1,in_r2,in_r3);
 return a;
}



/* Function: template_swap_int @ 00012e5c */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 int *b_local;
 int *a_local;
 int temp;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Container @ 00012ea8 */

/* DWARF original prototype: Container_int * Container_int_Container(Container_int * this_ptr) */

Container_int * Container_int_Container(Container_int *this)

{
 Container_int *this_local;
 
 this->size = 0;
 return this;
}



/* Function: Container_int_push @ 00012ed8 */

/* DWARF original prototype: void Container_int_push(Container_int * this_ptr, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 int value_local;
 Container_int *this_local;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get @ 00012f2c */

/* DWARF original prototype: int Container_int_get(Container_int * this_ptr, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 int idx_local;
 Container_int *this_local;
 
 if ((idx < 0) || (this->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 00012f84 */

/* DWARF original prototype: int Container_int_getSize(Container_int * this_ptr) */

int Container_int_getSize(Container_int *this)

{
 Container_int *this_local;
 
 return this->size;
}



/* Function: Container_double_Container @ 00012fac */

/* DWARF original prototype: Container_double * Container_double_Container(Container_double * this_ptr) */

Container_double * Container_double_Container(Container_double *this)

{
 Container_double *this_local;
 
 this->size = 0;
 return this;
}



/* Function: Container_double_push @ 00012fdc */

/* DWARF original prototype: void Container_double_push(Container_double * this_ptr, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 double value_local;
 Container_double *this_local;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: Container_double_get @ 00013040 */

/* DWARF original prototype: double Container_double_get(Container_double * this_ptr, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double in_d0;
 int idx_local;
 Container_double *this_local;
 
 return in_d0;
}



/* Function: Container_double_getSize @ 000130a8 */

/* DWARF original prototype: int Container_double_getSize(Container_double * this_ptr) */

int Container_double_getSize(Container_double *this)

{
 Container_double *this_local;
 
 return this->size;
}



/* Function: __uniq_ptr_data @ 000130d0 */

__uniq_ptr_data_int_std_default_delete_int_true_true *
std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this_ptr,
 __uniq_ptr_data_int_std_default_delete_int_true_true *param_1)

{
 std__uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int_std_default_delete_int_,
 &param_1->super___uniq_ptr_impl_int_std_default_delete_int_);
 return this_ptr;
}

/* Forward declaration */
extern std__uniq_ptr_impl_int_std_default_delete_int_ *
std__uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr,
 std__uniq_ptr_impl_int_std_default_delete_int_ *__u);



/* Function: unique_ptr @ 00013108 */

unique_ptr_int_std_default_delete_int_ *
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std_default_delete_int_ *this_ptr,
 unique_ptr_int_std_default_delete_int_ *param_1)

{
 std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (&this_ptr->_M_t,&param_1->_M_t);
 return this_ptr;
}

/* Forward declaration */
extern __uniq_ptr_data_int_std_default_delete_int_true_true *
std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this_ptr,
 __uniq_ptr_data_int_std_default_delete_int_true_true *param_1);



/* Function: getType @ 00013140 */

/* DWARF original prototype: int getType(RTTIBase * this_ptr) */

int RTTIBase_getType(RTTIBase *this_ptr)

{
 RTTIBase *this_local;
 
 return 0;
}



/* Function: getType @ 00013164 */

/* DWARF original prototype: int getType(RTTIDerivedA * this_ptr) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 return 1;
}



/* Function: derivedA_data @ 00013188 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this_ptr) */

int RTTIDerivedA_derivedA_data(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 return 100;
}



/* Function: getType @ 000131ac */

/* DWARF original prototype: int getType(RTTIDerivedB * this_ptr) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 return 2;
}



/* Function: derivedB_data @ 000131d0 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this_ptr) */

int RTTIDerivedB_derivedB_data(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 return 200;
}



/* Function: RTTIBase @ 000131f4 */

/* DWARF original prototype: RTTIBase * RTTIBase(RTTIBase * this_ptr) */

RTTIBase * RTTIBase_RTTIBase(RTTIBase *this_ptr)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_0001448c;
 return this;
}



/* Function: ~RTTIBase @ 00013228 */

/* DWARF original prototype: void * ~RTTIBase(RTTIBase * this_ptr, int __in_chrg) */

void * RTTIBase__RTTIBase(RTTIBase *this_ptr,int __in_chrg)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_0001448c;
 return this;
}



/* Function: ~RTTIBase @ 0001325c */

/* DWARF original prototype: void * ~RTTIBase(RTTIBase * this_ptr, int __in_chrg) */

void * RTTIBase_dtor_2(RTTIBase *this_ptr,int __in_chrg)

{
 RTTIBase *this_local;
 
 RTTIBase__RTTIBase(this_ptr,__in_chrg);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: RTTIDerivedA @ 00013290 */

/* DWARF original prototype: RTTIDerivedA * RTTIDerivedA(RTTIDerivedA * this_ptr) */

RTTIDerivedA * RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA *this_local;
 
 RTTIBase_RTTIBase(&this_ptr->super_RTTIBase);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00014478;
 return this_ptr;
}



/* Function: RTTIDerivedB @ 000132cc */

/* DWARF original prototype: RTTIDerivedB * RTTIDerivedB(RTTIDerivedB * this_ptr) */

RTTIDerivedB * RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB *this_local;
 
 RTTIBase_RTTIBase(&this_ptr->super_RTTIBase);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00014464;
 return this_ptr;
}



/* Function: __uniq_ptr_data @ 00013308 */
/* DWARF original prototype: __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *
 __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
 param_1) */

__uniq_ptr_data_int_std_default_delete_int_true_true *
std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this_ptr,pointer __p)

{
 std__uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int_std_default_delete_int_,__p);
 return this_ptr;
}



/* Function: unique_ptr @ 00013340 */
/* DWARF original prototype: unique_ptr<int,_std::default_delete<int>_> *
 unique_ptr<>(unique_ptr<int,_std::default_delete<int>_> * this, pointer __p) */

unique_ptr_int_std_default_delete_int_ *
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr_int_std_default_delete_int_ *this_ptr,pointer __p)

{
 std__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data(&this_ptr->_M_t,__p);
 return this_ptr;
}



/* Function: ~unique_ptr @ 00013374 */
/* DWARF original prototype: void * ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this,
 int __in_chrg) */

void *
std_unique_ptr_int_std_default_delete_int___unique_ptr
 (unique_ptr_int_std_default_delete_int_ *this_ptr,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 
 __t = std__uniq_ptr_impl_int_std_default_delete_int___M_ptr
 ((std__uniq_ptr_impl_int_std_default_delete_int_ *)this_ptr);
 if (*__t != (pointer)0x0) {
 this_00 = std_unique_ptr_int_std_default_delete_int__get_deleter(this_ptr);
 ppiVar1 = std_move_int_r(__t);
 std_default_delete_int_operator(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return this_ptr;
}



/* Function: operator* @ 000133e8 */
/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type
std_unique_ptr_int_std_default_delete_int__operator_
 (unique_ptr_int_std_default_delete_int_ *this_ptr)

{
 pointer piVar1;
 type result;
 
 piVar1 = std_unique_ptr_int_std_default_delete_int__get(this_ptr);
 result._ptr = piVar1;
 return result;
}



/* Function: move_unique_ptr_int @ 00013418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std_move_unique_ptr_int(unique_ptr_int_std_default_delete_int_ *__t)

{
 return __t;
}



/* Function: _Tuple_impl @ 0001343c */

_Tuple_impl_0_int_std_default_delete_int_ *
std__Tuple_impl_0_int_std_default_delete_int___Tuple_impl
 (_Tuple_impl_0_int_std_default_delete_int_ *this_ptr,
 _Tuple_impl_0_int_std_default_delete_int_ *param_1)

{
 std__Tuple_impl_1_std_default_delete_int___Tuple_impl
 (&this_ptr->super__Tuple_impl_1_std_default_delete_int_,
 &param_1->super__Tuple_impl_1_std_default_delete_int_);
 *this_ptr = *param_1;
 return this_ptr;
}



/* Function: tuple @ 0001347c */

tuple_int_std_default_delete_int_ *
std_tuple_int_std_default_delete_int__tuple
 (tuple_int_std_default_delete_int_ *this_ptr,
 tuple_int_std_default_delete_int_ *param_1)

{
 std__Tuple_impl_0_int_std_default_delete_int___Tuple_impl
 (&this_ptr->super__Tuple_impl_0_int_std_default_delete_int_,
 &param_1->super__Tuple_impl_0_int_std_default_delete_int_);
 return this_ptr;
}



/* Function: __uniq_ptr_impl @ 000134b4 */

std__uniq_ptr_impl_int_std_default_delete_int_ *
std__uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr,
 std__uniq_ptr_impl_int_std_default_delete_int_ *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 
 ptVar1 = std_move_std_tuple_int_std_default_delete_int(&__u->_M_t);
 std_tuple_int_std_default_delete_int__tuple(&this_ptr->_M_t,ptVar1);
 ppiVar2 = std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return this_ptr;
}

/* Forward declarations */
extern type * std_move_std_tuple_int_std_default_delete_int
 (tuple_int_std_default_delete_int_ *__t);
extern tuple_int_std_default_delete_int_ *
std_tuple_int_std_default_delete_int__tuple
 (tuple_int_std_default_delete_int_ *this_ptr,
 tuple_int_std_default_delete_int_ *param_1);
extern pointer
std__uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr);
extern pointer
std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_array_ *this_ptr);
extern int **
std__Head_base_0_int_false___M_head(_Head_base_0_int_false_ *this_ptr);
extern pointer
std__uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr);



/* Function: __uniq_ptr_data @ 0001350c */

__uniq_ptr_data_int_std_default_delete_int_array_true_true_ *
std__uniq_ptr_data_int_std_default_delete_int_array_true_true____uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_array_true_true_ *this_ptr,pointer __p)

{
 std__uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int_std_default_delete_int_array_,__p);
 return this_ptr;
}



/* Function: unique_ptr_int_array @ 00013544 */

unique_ptr_int_array_std_default_delete_int_array_ *
std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr_int_array
 (unique_ptr_int_array_std_default_delete_int_array_ *this_ptr,int *__p)

{
 std__uniq_ptr_data_int_std_default_delete_int_array_true_true____uniq_ptr_data(&this_ptr->_M_t,__p);
 return this_ptr;
}



/* Function: unique_ptr_int_array_dtor @ 00013578 */

void
std_unique_ptr_int_array_std_default_delete_int_array__unique_ptr_dtor
 (unique_ptr_int_array_std_default_delete_int_array_ *this_ptr,int __in_chrg)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 
 ppiVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 ((std__uniq_ptr_impl_int_std_default_delete_int_array_ *)this_ptr);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = std_unique_ptr_int_array_std_default_delete_int_array__get_deleter(this_ptr);
 std_default_delete_int_array_operator(this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: operator_array @ 000135e4 */

type
std_unique_ptr_int_array_std_default_delete_int_array__operator_array
 (unique_ptr_int_array_std_default_delete_int_array_ *this_ptr,size_t __i)

{
 pointer piVar1;
 
 piVar1 = std_unique_ptr_int_array_std_default_delete_int_array__get(this_ptr);
 return piVar1 + __i;
}



/* Function: __uniq_ptr_impl @ 00013624 */

std__uniq_ptr_impl_int_std_default_delete_int_ *
std__uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl_p
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr,pointer __p)

{
 pointer *ppiVar1;
 
 std_tuple_int_std_default_delete_int__tuple(&this_ptr->_M_t);
 ppiVar1 = std__uniq_ptr_impl_int_std_default_delete_int___M_ptr(this_ptr);
 *ppiVar1 = __p;
 return this_ptr;
}



/* Function: _M_ptr @ 00013668 */

pointer
std__uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0_int_std_default_delete_int(&this_ptr->_M_t);
 return ppiVar1->_ptr;
}



/* Function: get_deleter @ 00013694 */

deleter_type *
std_unique_ptr_int_std_default_delete_int__get_deleter
 (unique_ptr_int_std_default_delete_int_ *this_ptr)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__uniq_ptr_impl_int_std_default_delete_int__M_deleter
 ((std__uniq_ptr_impl_int_std_default_delete_int_ *)this_ptr);
 return pdVar1;
}



/* Function: move_int_r @ 000136c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std_move_int_r(int **__t)

{
 return __t;
}



/* Function: operator() @ 000136e4 */

void std_default_delete_int_operator(default_delete_int *this_ptr,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr,4);
 }
 return;
}



/* Function: get @ 0001371c */

pointer
std_unique_ptr_int_std_default_delete_int__get
 (unique_ptr_int_std_default_delete_int_ *this_ptr)

{
 pointer piVar1;
 
 piVar1 = std__uniq_ptr_impl_int_std_default_delete_int__M_ptr
 ((std__uniq_ptr_impl_int_std_default_delete_int_ *)this_ptr);
 return piVar1;
}



/* Function: move_std_tuple_int_std_default_delete_int @ 00013748 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std_move_std_tuple_int_std_default_delete_int
 (tuple_int_std_default_delete_int_ *__t)

{
 return __t;
}



/* Function: _Tuple_impl @ 0001376c */

_Tuple_impl_1_std_default_delete_int_ *
std__Tuple_impl_1_std_default_delete_int___Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_ *this_ptr,
 _Tuple_impl_1_std_default_delete_int_ *__in)

{
 return this_ptr;
}



/* Function: __uniq_ptr_impl @ 00013794 */

std__uniq_ptr_impl_int_std_default_delete_int_array_ *
std__uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl
 (std__uniq_ptr_impl_int_std_default_delete_int_array_ *this_ptr,pointer __p)

{
 pointer *ppiVar1;
 
 std_tuple_int_std_default_delete_int_array__tuple(&this_ptr->_M_t);
 ppiVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr(this_ptr);
 *ppiVar1 = __p;
 return this_ptr;
}

/* Forward declaration */
extern tuple_int_std_default_delete_int_array_ *
std_tuple_int_std_default_delete_int_array__tuple
 (tuple_int_std_default_delete_int_array_ *this_ptr);
extern pointer
std__uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_array_ *this_ptr);



/* Function: _M_ptr @ 000137d8 */

pointer
std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_array_ *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0_int_std_default_delete_int_array(&this_ptr->_M_t);
 return ppiVar1->_ptr;
}



/* Function: get_deleter @ 00013804 */

deleter_type *
std_unique_ptr_int_array_std_default_delete_int_array__get_deleter
 (unique_ptr_int_array_std_default_delete_int_array_ *this_ptr)

{
 default_delete_int_array_ *pdVar1;
 
 pdVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array___M_deleter
 ((std__uniq_ptr_impl_int_std_default_delete_int_array_ *)this_ptr);
 return pdVar1;
}



/* Function: operator()<int> @ 00013830 */

void
std_default_delete_int_array_operator(default_delete_int_array_ *this_ptr,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: get @ 00013864 */

pointer
std_unique_ptr_int_array_std_default_delete_int_array__get
 (unique_ptr_int_array_std_default_delete_int_array_ *this_ptr)

{
 pointer piVar1;
 
 piVar1 = std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 ((std__uniq_ptr_impl_int_std_default_delete_int_array_ *)this_ptr);
 return piVar1;
}



/* Function: tuple<> @ 00013890 */

tuple_int_std_default_delete_int_ *
std_tuple_int_std_default_delete_int__tuple
 (tuple_int_std_default_delete_int_ *this_ptr)

{
 std__Tuple_impl_0_int_std_default_delete_int___Tuple_impl
 (&this_ptr->super__Tuple_impl_0_int_std_default_delete_int_);
 return this_ptr;
}



/* Function: get_0_int_std_default_delete_int @ 000138bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__tuple_element_t *
std_get_0_int_std_default_delete_int(tuple_int_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0_int_std_default_delete_int
 (&__t->super__Tuple_impl_0_int_std_default_delete_int_);
 return (__tuple_element_t *)ppiVar1;
}



/* Function: _M_deleter @ 000138e8 */

default_delete_int *
std__uniq_ptr_impl_int_std_default_delete_int__M_deleter
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = std_get_1_int_std_default_delete_int(&this_ptr->_M_t);
 return (default_delete_int *)p_Var1;
}



/* Function: _M_ptr @ 00013914 */

pointer
std__uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0_int_std_default_delete_int(&this_ptr->_M_t);
 return ppiVar1->_ptr;
}



/* Function: tuple @ 00013944 */

tuple_int_std_default_delete_int_array_ *
std_tuple_int_std_default_delete_int_array__tuple
 (tuple_int_std_default_delete_int_array_ *this_ptr)

{
 std__Tuple_impl_0_int_std_default_delete_int_array___Tuple_impl
 (&this_ptr->super__Tuple_impl_0_int_std_default_delete_int_array_);
 return this_ptr;
}



/* Function: get_0_int_std_default_delete_int_array @ 00013970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__tuple_element_t *
std_get_0_int_std_default_delete_int_array(tuple_int_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0_int_std_default_delete_int_array
 (&__t->super__Tuple_impl_0_int_std_default_delete_int_array_);
 return (__tuple_element_t *)ppiVar1;
}



/* Function: _M_deleter @ 0001399c */

default_delete_int_array_ *
std__uniq_ptr_impl_int_std_default_delete_int_array___M_deleter
 (std__uniq_ptr_impl_int_std_default_delete_int_array_ *this_ptr)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = std_get_1_int_std_default_delete_int_array(&this_ptr->_M_t);
 return (default_delete_int_array_ *)p_Var1;
}



/* Function: _M_ptr @ 000139c8 */

pointer
std__uniq_ptr_impl_int_std_default_delete_int_array___M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_array_ *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0_int_std_default_delete_int_array(&this_ptr->_M_t);
 return ppiVar1->_ptr;
}



/* Function: _Tuple_impl @ 000139f8 */

_Tuple_impl_0_int_std_default_delete_int_ *
std__Tuple_impl_0_int_std_default_delete_int___Tuple_impl
 (_Tuple_impl_0_int_std_default_delete_int_ *this_ptr)

{
 std__Tuple_impl_1_std_default_delete_int___Tuple_impl
 (&this_ptr->super__Tuple_impl_1_std_default_delete_int_);
 std__Head_base_0_int_false___Head_base((_Head_base_0_int_false_ *)this_ptr);
 return this_ptr;
}

/* Forward declarations */
extern _Tuple_impl_1_std_default_delete_int_ *
std__Tuple_impl_1_std_default_delete_int___Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_ *this_ptr);
extern _Head_base_0_int_false_ *
std__Head_base_0_int_false___Head_base(_Head_base_0_int_false_ *this_ptr);
extern int **
std__Head_base_0_int_false__M_head(_Head_base_0_int_false_ *this_ptr);



/* Function: __get_helper_0_int_std_default_delete_int @ 00013a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std__get_helper_0_int_std_default_delete_int
 (_Tuple_impl_0_int_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0_int_std_default_delete_int___M_head(__t);
 return ppiVar1;
}



/* Function: get_1_int_std_default_delete_int @ 00013a54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__tuple_element_t_conflict *
std_get_1_int_std_default_delete_int(tuple_int_std_default_delete_int_ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__get_helper_1_std_default_delete_int
 ((_Tuple_impl_1_std_default_delete_int_ *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get_0_int_std_default_delete_int_2 @ 00013a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__tuple_element_t *
std_get_0_int_std_default_delete_int_2(tuple_int_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0_int_std_default_delete_int_2
 (&__t->super__Tuple_impl_0_int_std_default_delete_int_);
 return (__tuple_element_t *)ppiVar1;
}



/* Function: _Tuple_impl @ 00013aa8 */

_Tuple_impl_0_int_std_default_delete_int_array_ *
std__Tuple_impl_0_int_std_default_delete_int_array___Tuple_impl
 (_Tuple_impl_0_int_std_default_delete_int_array_ *this_ptr)

{
 std__Tuple_impl_1_std_default_delete_int_array___Tuple_impl
 (&this_ptr->super__Tuple_impl_1_std_default_delete_int_array_);
 std__Head_base_0_int_false___Head_base((_Head_base_0_int_false_ *)this_ptr);
 return this_ptr;
}

/* Forward declarations */
extern _Tuple_impl_1_std_default_delete_int_array_ *
std__Tuple_impl_1_std_default_delete_int_array___Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_array_ *this_ptr);



/* Function: __get_helper_0_int_std_default_delete_int_array @ 00013adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std__get_helper_0_int_std_default_delete_int_array
 (_Tuple_impl_0_int_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0_int_std_default_delete_int_array___M_head(__t);
 return ppiVar1;
}



/* Function: get_1_int_std_default_delete_int_array @ 00013b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__tuple_element_t_conflict *
std_get_1_int_std_default_delete_int_array(tuple_int_std_default_delete_int_array_ *__t)

{
 default_delete_int_array_ *pdVar1;
 
 pdVar1 = std__get_helper_1_std_default_delete_int_array
 ((_Tuple_impl_1_std_default_delete_int_array_ *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get_0_int_std_default_delete_int_array_2 @ 00013b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__tuple_element_t *
std_get_0_int_std_default_delete_int_array_2(tuple_int_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0_int_std_default_delete_int_array_2
 (&__t->super__Tuple_impl_0_int_std_default_delete_int_array_);
 return (__tuple_element_t *)ppiVar1;
}



/* Function: forward_int_ref @ 00013b58 */

int ** std_forward_int_ref(type *__t)

{
 return (int **)__t->_ptr;
}



/* Function: _Tuple_impl @ 00013b7c */

_Tuple_impl_1_std_default_delete_int_ *
std__Tuple_impl_1_std_default_delete_int___Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_ *this_ptr)

{
 std__Head_base_1_std_default_delete_int_true___Head_base
 (&this_ptr->super__Head_base_1_std_default_delete_int_true_);
 return this_ptr;
}



/* Function: _Head_base @ 00013ba4 */

_Head_base_0_int_false_ *
std__Head_base_0_int_false___Head_base(_Head_base_0_int_false_ *this_ptr)

{
 this_ptr->_M_head_impl = (int *)0x0;
 return this_ptr;
}

/* Forward declaration */
extern pointer
std__uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (std__uniq_ptr_impl_int_std_default_delete_int_ *this_ptr);



/* Function: _M_head @ 00013bd4 */

int ** std__Tuple_impl_0_int_std_default_delete_int___M_head
 (_Tuple_impl_0_int_std_default_delete_int_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_false___M_head((_Head_base_0_int_false_ *)this_ptr);
 return ppiVar1;
}



/* Function: __get_helper_1_std_default_delete_int @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

default_delete_int *
std__get_helper_1_std_default_delete_int(_Tuple_impl_1_std_default_delete_int_ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__Tuple_impl_1_std_default_delete_int___M_head(__t);
 return pdVar1;
}



/* Function: __get_helper_0_int_std_default_delete_int_3 @ 00013c28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std__get_helper_0_int_std_default_delete_int_3
 (_Tuple_impl_0_int_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0_int_std_default_delete_int___M_head(__t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013c50 */

_Tuple_impl_1_std_default_delete_int_array_ *
std__Tuple_impl_1_std_default_delete_int_array___Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_array_ *this_ptr)

{
 std__Head_base_1_std_default_delete_int_array_true___Head_base
 (&this_ptr->super__Head_base_1_std_default_delete_int_array_true_);
 return this_ptr;
}



/* Function: _M_head @ 00013c78 */

int ** std__Tuple_impl_0_int_std_default_delete_int_array___M_head
 (_Tuple_impl_0_int_std_default_delete_int_array_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_false___M_head((_Head_base_0_int_false_ *)this_ptr);
 return ppiVar1;
}



/* Function: __get_helper_1_std_default_delete_int_array @ 00013ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

default_delete_int_array_ *
std__get_helper_1_std_default_delete_int_array
 (_Tuple_impl_1_std_default_delete_int_array_ *this_ptr)

{
 default_delete_int_array_ *pdVar1;
 
 pdVar1 = std__Tuple_impl_1_std_default_delete_int_array___M_head(this_ptr);
 return pdVar1;
}



/* Function: __get_helper_0_int_std_default_delete_int_array_3 @ 00013ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std__get_helper_0_int_std_default_delete_int_array_3
 (_Tuple_impl_0_int_std_default_delete_int_array_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0_int_std_default_delete_int_array___M_head(this_ptr);
 return ppiVar1;
}



/* Function: _Head_base_int_ref @ 00013cf4 */

_Head_base_0_int_false_ *
std__Head_base_0_int_false___Head_base_int_ref(_Head_base_0_int_false_ *this_ptr,int **__h)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ref(__h);
 this_ptr->_M_head_impl = *ppiVar1;
 return this_ptr;
}



/* Function: _Head_base @ 00013d30 */

_Head_base_1_std_default_delete_int_true_ *
std__Head_base_1_std_default_delete_int_true___Head_base
 (_Head_base_1_std_default_delete_int_true_ *this_ptr)

{
 return this_ptr;
}



/* Function: _M_head @ 00013d54 */

int ** std__Head_base_0_int_false___M_head(_Head_base_0_int_false_ *this_ptr)

{
 return &this_ptr->_M_head_impl;
}



/* Function: _M_head @ 00013d78 */

default_delete_int *
std__Tuple_impl_1_std_default_delete_int___M_head
 (_Tuple_impl_1_std_default_delete_int_ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__Head_base_1_std_default_delete_int_true___M_head
 (&__t->super__Head_base_1_std_default_delete_int_true_);
 return pdVar1;
}



/* Function: _M_head @ 00013da0 */

int ** std__Tuple_impl_0_int_std_default_delete_int___M_head_2
 (_Tuple_impl_0_int_std_default_delete_int_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_false___M_head((_Head_base_0_int_false_ *)this_ptr);
 return ppiVar1;
}



/* Function: _Head_base @ 00013dcc */

_Head_base_1_std_default_delete_int_array_true_ *
std__Head_base_1_std_default_delete_int_array_true___Head_base
 (_Head_base_1_std_default_delete_int_array_true_ *this_ptr)

{
 return this_ptr;
}



/* Function: _M_head @ 00013df0 */

default_delete_int_array_ *
std__Tuple_impl_1_std_default_delete_int_array___M_head
 (_Tuple_impl_1_std_default_delete_int_array_ *this_ptr)

{
 default_delete_int_array_ *pdVar1;
 
 pdVar1 = std__Head_base_1_std_default_delete_int_array_true___M_head
 (&this_ptr->super__Head_base_1_std_default_delete_int_array_true_);
 return pdVar1;
}



/* Function: _M_head @ 00013e18 */

int ** std__Tuple_impl_0_int_std_default_delete_int_array___M_head_2
 (_Tuple_impl_0_int_std_default_delete_int_array_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_false___M_head((_Head_base_0_int_false_ *)this_ptr);
 return ppiVar1;
}



/* Function: _M_head @ 00013e44 */

default_delete_int *
std__Head_base_1_std_default_delete_int_true___M_head
 (_Head_base_1_std_default_delete_int_true_ *this_ptr)

{
 return &this_ptr->_M_head_impl;
}



/* Function: _M_head @ 00013e68 */

int ** std__Head_base_0_int_false___M_head_2(_Head_base_0_int_false_ *this_ptr)

{
 return &this_ptr->_M_head_impl;
}



/* Function: _M_head @ 00013e8c */

default_delete_int_array_ *
std__Head_base_1_std_default_delete_int_array_true___M_head
 (_Head_base_1_std_default_delete_int_array_true_ *this_ptr)

{
 return &this_ptr->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 00013eb0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this_ptr, int __in_chrg) */

void * RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00014464;
 RTTIBase__RTTIBase(&this_ptr->super_RTTIBase,__in_chrg);
 return this_ptr;
}

/* External pointer declarations */
extern void *PTR_virtual_func_000145f0;
extern void *PTR_virtual_func_000145d8;
extern void *PTR__RTTIDerivedB_00014464;
extern void *PTR_func_00014570;
extern void *PTR__RTTIDerivedA_00014478;
extern void *PTR__RTTIBase_0001448c;
extern void *PTR_func_000144a4;
extern void *PTR_func_000144bc;
extern void *PTR_func_000144d8;
extern void *PTR_DAT_000144e8;
extern void *PTR_DAT_000144f0;
extern void *PTR_funcA_00014584;
extern void *PTR_funcB_0001459c;
extern void *PTR_funcB_000145b0;
extern void *PTR_funcA_000145c4;
extern void *PTR_func_0001449c;

/* Forward function declarations */
extern void Base_dtor(Base *this_ptr,int __in_chrg);
extern void Base_Base(Base *this_ptr);
extern int Base_virtual_func(Base *this_ptr,int x);
extern void MiddleA_dtor(MiddleA *this_ptr,int __in_chrg,void **__vtt_parm);
extern void MiddleB_dtor(MiddleB *this_ptr,int __in_chrg,void **__vtt_parm);
extern void VirtualBase_dtor(VirtualBase *this_ptr,int __in_chrg);
extern void DiamondDerived_dtor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm);
extern void MultiDerived_dtor(MultiDerived *this_ptr,int __in_chrg);
extern void Derived_dtor(Derived *this_ptr,int __in_chrg);
extern void BaseA_dtor(BaseA *this_ptr,int __in_chrg);
extern void BaseB_dtor(BaseB *this_ptr,int __in_chrg);
extern void RTTIBase__RTTIBase(RTTIBase *this_ptr,int __in_chrg);
extern void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr,int __in_chrg);
extern void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr,int __in_chrg);



/* Function: ~RTTIDerivedB @ 00013eec */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this_ptr, int __in_chrg) */

void * RTTIDerivedB_dtor_2(RTTIDerivedB *this_ptr,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 RTTIDerivedB__RTTIDerivedB(this_ptr,__in_chrg);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 00013f20 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this_ptr, int __in_chrg) */

void * RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00014478;
 RTTIBase__RTTIBase(&this_ptr->super_RTTIBase,__in_chrg);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 00013f5c */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this_ptr, int __in_chrg) */

void * RTTIDerivedA_dtor_2(RTTIDerivedA *this_ptr,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 RTTIDerivedA__RTTIDerivedA(this_ptr,__in_chrg);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00013f90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this_ptr, int __in_chrg, void * * __vtt_parm) */

void
DiamondDerived_dtor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 int __in_chrg_00;
 DiamondDerived *this_local;
 
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)&PTR_func_000144a4;
 *(undefined ***)&this_ptr->field_0x10 = &PTR_func_000144d8;
 *(undefined ***)&(this_ptr->super_MiddleA).field_0x8 = &PTR_func_000144bc;
 return;
}



/* Function: ~DiamondDerived @ 00014028 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_thunk(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10,in_r1,in_r2);
 return;
}



/* Function: ~DiamondDerived @ 00014030 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_vthunk(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]),in_r1,in_r2);
 return;
}



/* Function: ~DiamondDerived @ 00014044 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this_ptr, int __in_chrg, void * * __vtt_parm) */

void
DiamondDerived_dtor_2(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 DiamondDerived *this_local;
 
 DiamondDerived_dtor(this_ptr,__in_chrg,__vtt_parm);
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00014078 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_thunk2(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10,in_r1,in_r2);
 return;
}



/* Function: ~DiamondDerived @ 00014080 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_dtor_vthunk2(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]),in_r1,in_r2);
 return;
}



/* Function: ~MultiDerived @ 00014094 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this_ptr, int __in_chrg) */

void MultiDerived_dtor(MultiDerived *this_ptr,int __in_chrg)

{
 int __in_chrg_00;
 MultiDerived *this_local;
 
 (this_ptr->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00014584;
 (this_ptr->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_0001459c;
 return;
}



/* Function: ~MultiDerived @ 000140f0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor_thunk(MultiDerived *this)

{
 int in_r1;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_r1);
 return;
}



/* Function: ~MultiDerived @ 000140f8 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this_ptr, int __in_chrg) */

void MultiDerived_dtor_2(MultiDerived *this_ptr,int __in_chrg)

{
 MultiDerived *this_local;
 
 MultiDerived_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 0001412c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_dtor_thunk2(MultiDerived *this)

{
 int in_r1;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_r1);
 return;
}



/* Function: ~Derived @ 00014134 */

/* DWARF original prototype: void * ~Derived(Derived * this_ptr, int __in_chrg) */

void * Derived_dtor(Derived *this_ptr,int __in_chrg)

{
 Derived *this_local;
 
 (this_ptr->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145d8;
 Base_dtor(&this_ptr->super_Base,__in_chrg);
 return this_ptr;
}



/* Function: ~Derived @ 00014170 */

/* DWARF original prototype: void * ~Derived(Derived * this_ptr, int __in_chrg) */

void * Derived_dtor_2(Derived *this_ptr,int __in_chrg)

{
 Derived *this_local;
 
 Derived_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,8);
 return this_ptr;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 203 */
