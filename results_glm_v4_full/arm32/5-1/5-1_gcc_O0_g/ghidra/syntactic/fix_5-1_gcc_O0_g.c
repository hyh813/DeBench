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
typedef unsigned int undefined4;
typedef undefined8 undefined8;

/* Forward declarations for C++ types */
typedef struct _type_info type_info;
typedef struct _SimpleClass SimpleClass;
typedef struct _LifecycleClass LifecycleClass;
typedef struct _Base Base;
typedef struct _Derived Derived;
typedef struct _BaseA BaseA;
typedef struct _BaseB BaseB;
typedef struct _MultiDerived MultiDerived;
typedef struct _VirtualBase VirtualBase;
typedef struct _MiddleA MiddleA;
typedef struct _MiddleB MiddleB;
typedef struct _DiamondDerived DiamondDerived;
typedef struct _Point Point;
typedef struct _Container_int Container_int;
typedef struct _Container_double Container_double;
typedef struct _RTTIBase RTTIBase;
typedef struct _RTTIDerivedA RTTIDerivedA;
typedef struct _RTTIDerivedB RTTIDerivedB;

/* Template type aliases */
typedef Container_int Container_int;
typedef Container_double Container_double;

/* unique_ptr and related types */
typedef struct _unique_ptr_int unique_ptr_int;
typedef struct _unique_ptr_int_arr unique_ptr_int_arr;
typedef struct _unique_ptr_int_lambda unique_ptr_int_lambda;
typedef unique_ptr_int _std_unique_ptr_int;
typedef unique_ptr_int_arr _std_unique_ptr_int_arr;
typedef unique_ptr_int_lambda _std_unique_ptr_int_lambda;

/* Anonymous struct types */
typedef struct _anon_struct_8_2_35feab7f anon_struct_8_2_35feab7f;
typedef struct _anon_struct_1_0_00000001_for__M_head_impl anon_struct_1_0_00000001_for__M_head_impl;

/* Tuple and helper types */
typedef struct _tuple_int_void tuple_int_void;
typedef struct _Tuple_impl_0 Tuple_impl_0;
typedef struct _Tuple_impl_0_int_ptr_lambda Tuple_impl_0_int_ptr_lambda;
typedef struct _Tuple_impl_0_int_ptr_default_delete_int Tuple_impl_0_int_ptr_default_delete_int;
typedef struct _Tuple_impl_0_int_ptr_default_delete_int_arr Tuple_impl_0_int_ptr_default_delete_int_arr;
typedef struct _Head_base_0 Head_base_0;
typedef struct _Head_base_0_int_ptr_false _Head_base_0_int_ptr_false;
typedef struct _Head_base_1 Head_base_1;
typedef struct _Head_base_1_lambda_true Head_base_1_lambda_true;
typedef struct _Head_base_1_default_delete_int_true Head_base_1_default_delete_int_true;
typedef struct _Head_base_1_default_delete_int_arr_true Head_base_1_default_delete_int_arr_true;
typedef struct _Tuple_impl_1 Tuple_impl_1;
typedef struct _Tuple_impl_1_default_delete_int Tuple_impl_1_default_delete_int;
typedef struct _Tuple_impl_1_default_delete_int_arr Tuple_impl_1_default_delete_int_arr;
typedef struct _Tuple_impl_1_lambda Tuple_impl_1_lambda;

/* __uniq_ptr_impl types */
typedef struct ___uniq_ptr_impl_int __uniq_ptr_impl_int;
typedef struct ___uniq_ptr_impl_int_arr __uniq_ptr_impl_int_arr;

/* __uniq_ptr_data types */
typedef struct ___uniq_ptr_data_int __uniq_ptr_data_int;
typedef struct ___uniq_ptr_data_int_arr __uniq_ptr_data_int_arr;

/* default_delete types */
typedef struct _default_delete_int default_delete_int;
typedef struct _default_delete_int_arr default_delete_int_arr;

/* Function pointer types */
typedef void (*_func_void_varargs)(void);
typedef int (*_func_int_varargs)(void);

/* Pointer and type aliases */
typedef void *pointer;
typedef int type;
typedef default_delete_int deleter_type;
typedef int *__tuple_element_t;
typedef void *__tuple_element_t_conflict;

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
 /*(*(code *)(undefined *)0x0)();*/
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
 
 SimpleClass(&obj,5,"Test");
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
 Derived::Derived(&derived,3);
 iVar1 = Base::virtual_func(&base,5);
 iVar2 = Derived::virtual_func(&derived,5);
 iVar3 = call_virtual_func(&base,5);
 iVar4 = call_virtual_func(&derived.super_Base,5);
 Derived__dtor(&derived,__in_chrg);
 Base__dtor(&base,__in_chrg_00);
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
 
 MultiDerived::MultiDerived(&obj);
 obj.super_BaseA.dataA = 100;
 obj.super_BaseB.dataB = 200;
 iVar1 = (**obj.super_BaseA._vptr_BaseA)();
 iVar2 = (**obj.super_BaseB._vptr_BaseB)();
 MultiDerived::~MultiDerived(&obj,__in_chrg);
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
 
 DiamondDerived::DiamondDerived(&obj,in_r1,in_r2);
 obj._20_4_ = 0x32;
 __vtt_parm = (void **)(**(code **)obj._16_4_)(&obj.field_0x10);
 obj._20_4_ = 100;
 uVar1 = (**(code **)obj._16_4_)(&obj.field_0x10);
 DiamondDerived::~DiamondDerived(&obj,(int)((ulonglong)uVar1 >> 0x20),__vtt_parm);
 return (int)__vtt_parm + (int)uVar1;
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
 
 Point(&p1,1,2);
 Point(&p2,3,4);
 Point_operator_plus(&p3,&p1,&p2);
 bVar1 = Point_operator_eq(&p1,&p2);
 Point_operator_incr(&p3);
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
 double r2;
 int local_c;
 
 local_c = 0;
 r1 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = __aeabi_d2iz(a_00,b_00);
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
 
 Container_int__Container_int_(&int_container);
 Container_int__push(&int_container,10);
 Container_int__push(&int_container,0x14);
 Container_int__push(&int_container,0x1e);
 iVar1 = Container_int__get(&int_container,0);
 iVar2 = Container_int__getSize(&int_container);
 Container_double__Container_double_(&double_container);
 Container_double__push(&double_container,value);
 Container_double__get(&double_container,0);
 iVar3 = __aeabi_d2iz(value,0);
 return iVar1 + iVar2 + iVar3;
}



/* Function: operator() @ 0001143c */

/* DWARF original prototype: int operator()(anon_struct_8_2_35feab7f * __closure, int x) */

int __thiscall
test_cpp_lambda::anon_struct_8_2_35feab7f::operator()(anon_struct_8_2_35feab7f *this,int x)

{
 int x_local;
 int *capture_by_value;
 
 /* Unresolved local var: int * capture_by_ref@[???] */
 *this->__capture_by_ref = *this->__capture_by_ref + 5;
 return this->__capture_by_value * x + *this->__capture_by_ref;
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
 iVar1 = test_cpp_lambda::anon_struct_8_2_35feab7f::operator()(&lambda1,3);
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
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: operator() @ 0001169c */

/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
 int * p) */

void __thiscall
anon_struct_1_0_00000001_for__M_head_impl__operator_
 (anon_struct_1_0_00000001_for__M_head_impl *this,int *p)

{
 int *p_local;
 anon_struct_1_0_00000001_for__M_head_impl *this_local;
 
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
 unique_ptr_int_arr arr;
 unique_ptr_int_lambda ptr3;
 int r1;
 int r2;
 int r3;
 
 __p = operator_new(4);
 *__p = 100;
 std__unique_ptr_int__unique_ptr(&ptr1,__p);
 piVar1 = std__unique_ptr_int__get(&ptr1);
 *(int *)piVar1 = 200;
 ptVar2 = std__move_std_unique_ptr_int__(&ptr1);
 std__unique_ptr_int__unique_ptr(&ptr2,ptVar2);
 piVar1 = std__unique_ptr_int__get(&ptr2);
 iVar3 = *(int *)piVar1;
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 std__unique_ptr_int_arr__unique_ptr_int_ptr(&arr,__p_00);
 piVar1 = std__unique_ptr_int_arr__get(&arr);
 iVar4 = *(int *)piVar1;
 __p_01 = operator_new(4);
 *__p_01 = 500;
 std__unique_ptr_int_lambda__unique_ptr(&ptr3,__p_01,&deleter);
 piVar1 = std__unique_ptr_int_lambda__get(&ptr3);
 iVar5 = *(int *)piVar1;
 std__unique_ptr_int_lambda___unique_ptr(&ptr3,__in_chrg);
 std__unique_ptr_int_arr___unique_ptr(&arr,__in_chrg_00);
 std__unique_ptr_int___unique_ptr(&ptr2,__in_chrg_01);
 std__unique_ptr_int___unique_ptr(&ptr1,__in_chrg_02);
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
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
 RTTIDerivedA::RTTIDerivedA(this);
 this_00 = operator_new(4);
 (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
 RTTIDerivedB::RTTIDerivedB(this_00);
 result = 0;
 if (this_ptr == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00011954:
 result = 10;
 }
 else {
 iVar1 = std__type_info__operator==
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
 iVar1 = std__type_info__operator==
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
 this_02 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
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
 __s = std__type_info__name((type_info *)(this_ptr->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar2 = strlen(__s);
 result = sVar2 + result;
 if (this_ptr == (RTTIDerivedA *)0x0) goto LAB_00011aa0;
 }
 (*(this_ptr->super_RTTIBase)._vptr_RTTIBase[1])();
LAB_00011aa0:
 if (this_00 != (RTTIDerivedB *)0x0) {
 (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])();
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



/* Function: __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00011c30 */

__uniq_ptr_data_int_lambda * __thiscall
std___uniq_ptr_data_int_lambda___uniq_ptr_data_const_lambda_ref
 (__uniq_ptr_data_int_lambda *this, pointer param_1,
 anon_struct_1_0_00000001_for__M_head_impl *param_2)
{
 std___uniq_ptr_impl_int_lambda___uniq_ptr_impl_const_lambda_ref_impl
 (&this->super___uniq_ptr_impl_int_lambda,param_1,param_2);
 return this;
}



/* Function: unique_ptr<> @ 00011c6c */

unique_ptr_int_lambda * __thiscall
std__unique_ptr_int_lambda__unique_ptr
 (unique_ptr_int_lambda *this,pointer __p,
 anon_struct_1_0_00000001_for__M_head_impl *__d)

{
 
 std___uniq_ptr_data_int_lambda___uniq_ptr_data_const_lambda_ref
 (&this->_M_t,__p,__d);
 return this;
}



/* Function: ~unique_ptr @ 00011ca8 */

void * __thiscall
std__unique_ptr_int_lambda___unique_ptr
 (unique_ptr_int_lambda *this,int __in_chrg)

{
 pointer *__t;
 anon_struct_1_0_00000001_for__M_head_impl *this_00;
 pointer ppiVar1;
 int **__ptr;
 __uniq_ptr_impl_int_lambda *impl;
 
 impl = (__uniq_ptr_impl_int_lambda *)this;
 __t = std___uniq_ptr_impl_int_lambda___M_ptr(impl);
 if (*__t != (pointer)0x0) {
 this_00 = std__unique_ptr_int_lambda__get_deleter(this);
 ppiVar1 = std__move_int_ptr_ref_(__t);
 std___Head_base_1_lambda_true__operator_(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return this;
}



/* Function: operator* @ 00011d1c */

type __thiscall
std__unique_ptr_int_lambda__operator_
 (unique_ptr_int_lambda *this)

{
 pointer piVar1;
 
 piVar1 = std__unique_ptr_int_lambda__get(this);
 return piVar1;
}



/* Function: __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00011d4c */

__uniq_ptr_impl_int_lambda * __thiscall
std___uniq_ptr_impl_int_lambda___uniq_ptr_impl_const_lambda_ref
 (__uniq_ptr_impl_int_lambda *this,pointer __p,
 anon_struct_1_0_00000001_for__M_head_impl *__d)
{
 anon_struct_1_0_00000001_for__M_head_impl *__a2;
 
 __a2 = std__forward_const_lambda_ref_(__d);
 std__tuple_int_ptr_lambda__tuple_int_ptr_ref_const_lambda_ref_(&this->_M_t,&__p,__a2);
 return this;
}



/* Function: _M_ptr @ 00011d94 */

pointer * __thiscall
std___uniq_ptr_impl_int_lambda__M_ptr
 (__uniq_ptr_impl_int_lambda *this)

{
 pointer *ppiVar1;
 
 ppiVar1 = std__get_0_int_ptr_lambda_(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00011dc0 */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std__unique_ptr_int_lambda__get_deleter
 (unique_ptr_int_lambda *this)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std___uniq_ptr_impl_int_lambda___M_deleter((___uniq_ptr_impl_int_lambda *)this);
 return paVar1;
}



/* Function: get @ 00011dec */

pointer __thiscall
std__unique_ptr_int_lambda__get
 (unique_ptr_int_lambda *this)

{
 pointer piVar1;
 
 piVar1 = std___uniq_ptr_impl_int_lambda___M_ptr((___uniq_ptr_impl_int_lambda *)this);
 return piVar1;
}



/* Function: forward<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00011e18 */

anon_struct_1_0_00000001_for__M_head_impl *
std__forward_const_lambda_ref_(anon_struct_1_0_00000001_for__M_head_impl *__t)
{
 return __t;
}



/* Function: tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00011e3c */

_Tuple_impl_0_int_ptr_lambda * __thiscall
std__tuple_int_ptr_lambda___tuple_int_ptr__const_lambda_ref_
 (_Tuple_impl_0_int_ptr_lambda *this,int **__a1,
 anon_struct_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 
 __head = std__forward_int_ptr_ref_(__a1);
 std__forward_const_lambda_ref_(__a2);
 std___Tuple_impl_0_int_ptr_lambda___Tuple_impl_int_ptr__const_lambda_ref_
 (this,__head);
 return this;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std__get_0_int_ptr_lambda_(tuple_int_void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0_int_ptr_lambda_((_Tuple_impl_0 *)__t);
 return ppiVar1;
}

/* Function: _M_deleter @ 00011ebc */

/* DWARF original prototype: anon_struct_1_0_00000001_for__M_head_impl *
 _M_deleter(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std___uniq_ptr_impl_int_lambda___M_deleter
 (__uniq_ptr_impl_int_lambda *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl_int_lambda *this_local;
 
 p_Var1 = std__get_1_int_ptr_lambda_((_Tuple_impl_1 *)&this_local->_M_t);
 return p_Var1;
}



/* Function: _M_ptr @ 00011ee8 */

pointer __thiscall
std___uniq_ptr_impl_int_lambda___M_ptr
 (__uniq_ptr_impl_int_lambda *this)

{
 pointer *__t;
 
 __t = std__get_0_int_ptr_lambda_((_Tuple_impl_0 *)this);
 return *__t;
}



/* Function: _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00011f18 */

_Tuple_impl_0_int_ptr_lambda * __thiscall
std___Tuple_impl_0_int_ptr_lambda___Tuple_impl_int_ptr__const_lambda_ref_
 (_Tuple_impl_0_int_ptr_lambda *this,int **__head)

{
 int **__h;
 
 std___Tuple_impl_1___Tuple_impl_(&this->super__Tuple_impl_1,NULL);
 __h = std__forward_int_ptr_ref_(__head);
 std___Head_base_0_int_ptr_false___Head_base_int_ptr_ref_((_Head_base_0 *)this,__h);
 return this;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00011f74 */

int ** std___get_helper_0_int_ptr_lambda_(_Tuple_impl_0 *__t)
{
 int **ppiVar1;

 ppiVar1 = std___Tuple_impl_0_int_ptr_lambda___M_head(__t);
 return ppiVar1;
}



/* Function: get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00011f9c */

anon_struct_1_0_00000001_for__M_head_impl *
std__get_1_int_ptr_lambda_(_Tuple_impl_1 *__t)
{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;

 paVar1 = std___Head_base_1_lambda_true___M_head((_Head_base_1 *)__t);
 return paVar1;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00011fc4 */

__tuple_element_t *
std__get_0_int_ptr_lambda_
 (tuple_int_void *__t)
{
 int **ppiVar1;

 ppiVar1 = std___get_helper_0_int_ptr_lambda_((_Tuple_impl_0 *)__t);
 return ppiVar1;
}







/* Function: _M_head @ 00012020 */

int ** __thiscall std___Tuple_impl_0_int_ptr_lambda___M_head
 (_Tuple_impl_0 *__t)
{
 int **ppiVar1;

 ppiVar1 = std___Head_base_0_int_ptr_false___M_head((_Head_base_0 *)__t);
 return ppiVar1;
}



/* Function: __get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 0001204c */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std___get_helper_1_lambda_
 (_Tuple_impl_1 *__t)
{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;

 paVar1 = std___Tuple_impl_1___M_head(__t);
 return paVar1;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00012074 */

int ** __thiscall std___get_helper_0_int_ptr_lambda_2(_Tuple_impl_0 *__t)
{
 int **ppiVar1;

 ppiVar1 = std___Tuple_impl_0_int_ptr_lambda___M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base @ 0001209c */

_Head_base_1 * __thiscall
std___Head_base_1_lambda_true___Head_base
 (_Head_base_1 *this,
 anon_struct_1_0_00000001_for__M_head_impl *__h)

{
 return this;
}



/* Function: _M_head @ 000120c4 */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std___Tuple_impl_1_lambda____M_head
 (_Tuple_impl_1 *__t)
{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;

 paVar1 = std___Head_base_1_lambda_true___M_head
 (&__t->super__Head_base_1);
 return paVar1;
}



/* Function: _M_head @ 000120ec */

int ** __thiscall std___Tuple_impl_0_int_ptr_lambda____M_head
 (_Tuple_impl_0 *__t)
{
 int **ppiVar1;

 ppiVar1 = std___Head_base_0_int_ptr_false___M_head((_Head_base_0 *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00012118 */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std___Head_base_1_lambda_true___M_head
 (_Head_base_1_lambda_true *__b)
{
 return &__b->_M_head_impl;
}



/* Function: __static_initialization_and_destruction_0 @ 0001213c */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)
{
 if ((__initialize_p == 1) && (__priority == 0xffff)) {
 std::ios_base::Init::Init(&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
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

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std__type_info__name(type_info *this)

{
 char *pcVar1;
 type_info *this_local;
 
 if (**(char **)(this + 4) == '*') {
 pcVar1 = (char *)(*(int *)(this + 4) + 1);
 }
 else {
 pcVar1 = *(char **)(this + 4);
 }
 return pcVar1;
}



/* Function: SimpleClass @ 00012208 */

/* DWARF original prototype: SimpleClass * SimpleClass(SimpleClass * this, int v, char * n) */

SimpleClass * __thiscall SimpleClass(SimpleClass *this,int v,char *n)

{
 char *n_local;
 int v_local;
 SimpleClass *this_local;
 
 this->value = v;
 strncpy(this->name,n,0x1f);
 this->name[0x1f] = '\0';
 return this;
}



/* Function: getValue @ 00012260 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass_getValue(SimpleClass *this)

{
 SimpleClass *this_local;
 
 return this->value;
}



/* Function: setValue @ 00012288 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int v)

{
 int v_local;
 SimpleClass *this_local;
 
 this->value = v;
 return;
}



/* Function: compute @ 000122b8 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass_compute(SimpleClass *this,int x)

{
 size_t sVar1;
 int iVar2;
 int x_local;
 SimpleClass *this_local;
 
 iVar2 = this->value;
 sVar1 = strlen(this->name);
 return x * iVar2 + sVar1;
}



/* Function: getClassID @ 00012304 */

int SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00012324 */

/* DWARF original prototype: LifecycleClass * LifecycleClass(LifecycleClass * this, size_t s) */

LifecycleClass * __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,size_t s)

{
 int *piVar1;
 size_t s_local;
 LifecycleClass *this_local;
 size_t i;
 
 this->size = s;
 if (s < 0x1fffffff) {
 piVar1 = operator_new__(s << 2);
 this->data = piVar1;
 for (i = 0; i < s; i = i + 1) {
LAB_0001237c:
 this->data[i] = i * 10;
 }
 instance_count = instance_count + 1;
 return this;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_0001237c;
}



/* Function: ~LifecycleClass @ 000123f4 */

/* DWARF original prototype: void * ~LifecycleClass(LifecycleClass * this, int __in_chrg) */

void * __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this,int __in_chrg)

{
 LifecycleClass *this_local;
 
 if (this->data != (int *)0x0) {
 operator_delete__(this->data);
 }
 instance_count = instance_count + -1;
 return this;
}



/* Function: getData @ 0001244c */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass::getData(LifecycleClass *this,size_t idx)

{
 int iVar1;
 size_t idx_local;
 LifecycleClass *this_local;
 
 if (idx < this->size) {
 iVar1 = this->data[idx];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: getInstanceCount @ 000124a4 */

int LifecycleClass::getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 000124c8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 int x_local;
 Base *this_local;
 
 return x + 1;
}



/* Function: getName @ 000124f4 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 Base *this_local;
 
 return "Base";
}





{
 Base *this_local;
 
 this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145f0;
 return this;
}



/* Function: ~Base @ 00012550 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * __thiscall Base__dtor_delete(Base *this,int __in_chrg)

{
 Base *this_local;
 
 ~Base(this,__in_chrg);
 operator_delete(this,4);
 return this;
}



/* Function: Base @ 00012584 */

/* DWARF original prototype: Base * Base(Base * this) */

Base * __thiscall Base__Base(Base *this)

{
 
 this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145f0;
 return this;
}



/* Function: Derived @ 000125b8 */

/* DWARF original prototype: Derived * Derived(Derived * this, int m) */

Derived * __thiscall Derived_Derived(Derived *this,int m)

{
 int m_local;
 Derived *this_local;
 
 Base::Base(&this->super_Base);
 (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145d8;
 this->multiplier = m;
 return this;
}



/* Function: virtual_func @ 00012604 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this,int x)

{
 int x_local;
 Derived *this_local;
 
 return x * this->multiplier;
}



/* Function: getName @ 00012638 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this)

{
 Derived *this_local;
 
 return "Derived";
}



/* Function: funcA @ 00012660 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
 BaseA *this_local;
 
 return 10;
}



/* Function: ~BaseA @ 00012684 */

/* DWARF original prototype: void * ~BaseA(BaseA * this, int __in_chrg) */

void * __thiscall BaseA__dtor(BaseA *this,int __in_chrg)

{
 BaseA *this_local;
 
 this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_000145c4;
 return this;
}



/* Function: ~BaseA @ 000126b8 */

/* DWARF original prototype: void * ~BaseA(BaseA * this, int __in_chrg) */

void * __thiscall BaseA__dtor_delete(BaseA *this,int __in_chrg)

{
 BaseA *this_local;
 
 ~BaseA(this,__in_chrg);
 operator_delete(this,8);
 return this;
}



/* Function: funcB @ 000126ec */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
 BaseB *this_local;
 
 return 0x14;
}



/* Function: ~BaseB @ 00012710 */

/* DWARF original prototype: void * ~BaseB(BaseB * this, int __in_chrg) */

void * __thiscall BaseB__dtor(BaseB *this,int __in_chrg)

{
 BaseB *this_local;
 
 this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_000145b0;
 return this;
}



/* Function: ~BaseB @ 00012744 */

/* DWARF original prototype: void * ~BaseB(BaseB * this, int __in_chrg) */

void * __thiscall BaseB__dtor_delete(BaseB *this,int __in_chrg)

{
 BaseB *this_local;
 
 ~BaseB(this,__in_chrg);
 operator_delete(this,8);
 return this;
}



/* Function: funcA @ 00012778 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this)

{
 MultiDerived *this_local;
 
 return 0x1e;
}



/* Function: funcB @ 0001279c */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this)

{
 MultiDerived *this_local;
 
 return 0x28;
}



/* Function: funcB @ 000127c0 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 funcB((MultiDerived *)&this[-1].super_BaseB);
 return;
}



/* Function: BaseA @ 000127c8 */

/* DWARF original prototype: BaseA * BaseA(BaseA * this) */

BaseA * __thiscall BaseA::BaseA(BaseA *this)

{
 BaseA *this_local;
 
 this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_000145c4;
 return this;
}



/* Function: BaseB @ 000127fc */

/* DWARF original prototype: BaseB * BaseB(BaseB * this) */

BaseB * __thiscall BaseB::BaseB(BaseB *this)

{
 BaseB *this_local;
 
 this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_000145b0;
 return this;
}



/* Function: MultiDerived @ 00012830 */

/* DWARF original prototype: MultiDerived * MultiDerived(MultiDerived * this) */

MultiDerived * __thiscall MultiDerived_MultiDerived(MultiDerived *this)

{
 MultiDerived *this_local;
 
 BaseA::BaseA(&this->super_BaseA);
 BaseB::BaseB(&this->super_BaseB);
 (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00014584;
 (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_0001459c;
 return this;
}



/* Function: func @ 0001288c */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 VirtualBase *this_local;
 
 return 100;
}



/* Function: ~VirtualBase @ 000128b0 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * __thiscall VirtualBase__dtor(VirtualBase *this,int __in_chrg)

{
 VirtualBase *this_local;
 
 this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00014570;
 return this;
}



/* Function: ~VirtualBase @ 000128e4 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * __thiscall VirtualBase__dtor_delete(VirtualBase *this,int __in_chrg)

{
 VirtualBase *this_local;
 
 ~VirtualBase(this,__in_chrg);
 operator_delete(this,8);
 return this;
}



/* Function: func @ 00012918 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 MiddleA *this_local;
 
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001295c */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00012970 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 MiddleB *this_local;
 
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 000129b4 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 000129c8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 DiamondDerived *this_local;
 
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00012a0c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00012a20 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: VirtualBase @ 00012a28 */

/* DWARF original prototype: VirtualBase * VirtualBase(VirtualBase * this) */

VirtualBase * __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
 VirtualBase *this_local;
 
 this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00014570;
 return this;
}



/* Function: MiddleA @ 00012a5c */

/* DWARF original prototype: MiddleA * MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm)
 */

MiddleA * __thiscall MiddleA::MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this;
}



/* Function: ~MiddleA @ 00012abc */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void * __thiscall MiddleA::~MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this;
}



/* Function: MiddleB @ 00012b1c */

/* DWARF original prototype: MiddleB * MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm)
 */

MiddleB * __thiscall MiddleB::MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this;
}



/* Function: ~MiddleB @ 00012b7c */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void * __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return this;
}



/* Function: DiamondDerived @ 00012bdc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: DiamondDerived * DiamondDerived(DiamondDerived * this, int __in_chrg,
 void * * __vtt_parm) */

DiamondDerived * __thiscall
DiamondDerived__DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 
 VirtualBase::VirtualBase((VirtualBase *)&this->field_0x10);
 MiddleA::MiddleA(&this->super_MiddleA,0x144e8,&PTR_DAT_000144e8);
 MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,0x144f0,&PTR_DAT_000144f0);
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)&PTR_func_000144a4;
 *(undefined ***)&this->field_0x10 = &PTR_func_000144d8;
 *(undefined ***)&(this->super_MiddleA).field_0x8 = &PTR_func_000144bc;
 return this;
}



/* Function: Point @ 00012c74 */

/* DWARF original prototype: Point * Point(Point * this, int _x, int _y) */

Point * __thiscall Point(Point *this,int _x,int _y)

{
 int _y_local;
 int _x_local;
 Point *this_local;
 
 this->x = _x;
 this->y = _y;
 return this;
}



/* Function: operator+ @ 00012cb8 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point * __thiscall Point_operator_plus(Point *__return_storage_ptr__,Point *this,Point *other)

{
 Point *other_local;
 Point *this_local;
 
 Point(__return_storage_ptr__,this->x + other->x,this->y + other->y);
 return __return_storage_ptr__;
}



/* Function: operator== @ 00012d10 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point_operator_eq(Point *this,Point *other)

{
 bool bVar1;
 Point *other_local;
 Point *this_local;
 
 if ((this->x == other->x) && (this->y == other->y)) {
 bVar1 = true;
 }
 else {
 bVar1 = false;
 }
 return bVar1;
}



/* Function: operator++ @ 00012d70 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point_operator_incr(Point *this)

{
 Point *this_local;
 
 this->x = this->x + 1;
 this->y = this->y + 1;
 return this;
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



/* Function: Container @ 00012ea8 */

/* DWARF original prototype: Container_int * Container(Container_int * this) */

Container_int * __thiscall Container_int::Container(Container_int *this)

{
 Container_int *this_local;
 
 this->size = 0;
 return this;
}



/* Function: push @ 00012ed8 */

/* DWARF original prototype: void push(Container_int * this, int value) */

void __thiscall Container_int::push(Container_int *this,int value)

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



/* Function: get @ 00012f2c */

/* DWARF original prototype: int get(Container_int * this, int idx) */

int __thiscall Container_int::get(Container_int *this,int idx)

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



/* Function: getSize @ 00012f84 */

/* DWARF original prototype: int getSize(Container_int * this) */

int __thiscall Container_int::getSize(Container_int *this)

{
 Container_int *this_local;
 
 return this->size;
}



/* Function: Container @ 00012fac */

/* DWARF original prototype: Container_double * Container(Container_double * this) */

Container_double * __thiscall Container_double::Container(Container_double *this)

{
 Container_double *this_local;
 
 this->size = 0;
 return this;
}



/* Function: push @ 00012fdc */

/* DWARF original prototype: void push(Container_double * this, double value) */

void __thiscall Container_double::push(Container_double *this,double value)

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



/* Function: get @ 00013040 */

/* DWARF original prototype: double get(Container_double * this, int idx) */

double __thiscall Container_double::get(Container_double *this,int idx)

{
 double in_d0;
 int idx_local;
 Container_double *this_local;
 
 return in_d0;
}



/* Function: getSize @ 000130a8 */

/* DWARF original prototype: int getSize(Container_double * this) */

int __thiscall Container_double::getSize(Container_double *this)

{
 Container_double *this_local;
 
 return this->size;
}



/* Function: __uniq_ptr_data @ 000130d0 */

__uniq_ptr_data_int * __thiscall
std___uniq_ptr_data_int___uniq_ptr_data_copy
 (__uniq_ptr_data_int *this,
 __uniq_ptr_data_int *param_1)

{
 __uniq_ptr_data_int *param_1_local;
 __uniq_ptr_data_int *this_local;
 
 this->super___uniq_ptr_impl_int = param_1->super___uniq_ptr_impl_int;
 return this;
}



/* Function: unique_ptr @ 00013108 */

unique_ptr_int * __thiscall
std__unique_ptr_int__unique_ptr
 (unique_ptr_int *this,
 unique_ptr_int *param_1)

{
 unique_ptr_int *param_1_local;
 unique_ptr_int *this_local;
 
 std___uniq_ptr_data_int___uniq_ptr_data_copy(&this->_M_t,&param_1->_M_t);
 return this;
}



/* Function: getType @ 00013140 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
 RTTIBase *this_local;
 
 return 0;
}



/* Function: getType @ 00013164 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 return 1;
}



/* Function: derivedA_data @ 00013188 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 return 100;
}



/* Function: getType @ 000131ac */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 return 2;
}



/* Function: derivedB_data @ 000131d0 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 return 200;
}



/* Function: RTTIBase @ 000131f4 */

/* DWARF original prototype: RTTIBase * RTTIBase(RTTIBase * this) */

RTTIBase * __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_0001448c;
 return this;
}



/* Function: ~RTTIBase @ 00013228 */

/* DWARF original prototype: void * ~RTTIBase(RTTIBase * this, int __in_chrg) */

void * __thiscall RTTIBase__dtor(RTTIBase *this,int __in_chrg)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_0001448c;
 return this;
}



/* Function: ~RTTIBase @ 0001325c */

/* DWARF original prototype: void * ~RTTIBase(RTTIBase * this, int __in_chrg) */

void * __thiscall RTTIBase__dtor_delete(RTTIBase *this,int __in_chrg)

{
 RTTIBase *this_local;
 
 ~RTTIBase(this,__in_chrg);
 operator_delete(this,4);
 return this;
}



/* Function: RTTIDerivedA @ 00013290 */

/* DWARF original prototype: RTTIDerivedA * RTTIDerivedA(RTTIDerivedA * this) */

RTTIDerivedA * __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 RTTIBase::RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00014478;
 return this;
}



/* Function: RTTIDerivedB @ 000132cc */

/* DWARF original prototype: RTTIDerivedB * RTTIDerivedB(RTTIDerivedB * this) */

RTTIDerivedB * __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 RTTIBase::RTTIBase(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00014464;
 return this;
}



/* Function: __uniq_ptr_data @ 00013308 */

__uniq_ptr_data_int * __thiscall
std___uniq_ptr_data_int___uniq_ptr_data_ptr
 (__uniq_ptr_data_int *this,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int *this_local;
 
 std____uniq_ptr_impl_int___uniq_ptr_impl_ptr
 (&this->super___uniq_ptr_impl_int,param_1);
 return this;
}



/* Function: unique_ptr<> @ 00013340 */

unique_ptr_int * __thiscall
std__unique_ptr_int__unique_ptr_ptr
 (unique_ptr_int *this,pointer __p)

{
 pointer __p_local;
 unique_ptr_int *this_local;
 
 std___uniq_ptr_data_int___uniq_ptr_data_ptr(&this->_M_t,__p);
 return this;
}



/* Function: ~unique_ptr @ 00013374 */

void * __thiscall
std__unique_ptr_int___unique_ptr
 (unique_ptr_int *this,int __in_chrg)

{
 pointer *__t;
 default_delete_int *this_00;
 pointer ppiVar1;
 unique_ptr_int *this_local;
 int **__ptr;
 
 __t = std____uniq_ptr_impl_int___M_ptr
 ((__uniq_ptr_impl_int *)this);
 if (*__t != (pointer)0x0) {
 this_00 = std__unique_ptr_int__get_deleter(this);
 ppiVar1 = std__move_int_ptr_ref_(__t);
 std__default_delete_int__operator_(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return this;
}



/* Function: operator* @ 000133e8 */

type __thiscall
std__unique_ptr_int__operator_
 (unique_ptr_int *this)

{
 pointer piVar1;
 unique_ptr_int *this_local;
 
 piVar1 = std__unique_ptr_int__get(this);
 return piVar1;
}



/* Function: move<std::unique_ptr<int>&> @ 00013418 */

type * std__move_std_unique_ptr_int_ref(unique_ptr_int *__t)

{
 unique_ptr_int *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 0001343c */

/* DWARF original prototype: _Tuple_impl<0,_int*,_std::default_delete<int>_> *
 _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int>_> * this,
 _Tuple_impl<0,_int*,_std::default_delete<int>_> * param_1) */

_Tuple_impl_0_int_ptr_default_delete_int_ * __thiscall
std___Tuple_impl_0_int_ptr_default_delete_int____Tuple_impl
 (_Tuple_impl_0_int_ptr_default_delete_int_ *this,
 _Tuple_impl_0_int_ptr_default_delete_int_ *param_1)

{
 _Tuple_impl_0_int_ptr_default_delete_int_ *param_1_local;
 _Tuple_impl_0_int_ptr_default_delete_int_ *this_local;
 
 std___Tuple_impl_1_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_1_default_delete_int,
 &param_1->super__Tuple_impl_1_default_delete_int);
 *this = *param_1;
 return this;
}



/* Function: tuple @ 0001347c */

/* DWARF original prototype: tuple<int*,_std::default_delete<int>_> *
 tuple(tuple<int*,_std::default_delete<int>_> * this, tuple<int*,_std::default_delete<int>_> *
 param_1) */

tuple_int_void * __thiscall
std__tuple_int_ptr_default_delete_int____tuple
 (tuple_int_void *this,
 tuple_int_void *param_1)

{
 tuple_int_void *param_1_local;
 tuple_int_void *this_local;
 
 std___Tuple_impl_0_int_ptr_default_delete_int____Tuple_impl
 (&this->super__Tuple_impl_0_int_ptr_default_delete_int_,
 &param_1->super__Tuple_impl_0_int_ptr_default_delete_int_);
 return this;
}



/* Function: __uniq_ptr_impl @ 000134b4 */

/* DWARF original prototype: __uniq_ptr_impl<int,_std::default_delete<int>_> *
 __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> * this,
 __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

__uniq_ptr_impl_int * __thiscall
std____uniq_ptr_impl_int___uniq_ptr_impl
 (__uniq_ptr_impl_int *this,
 __uniq_ptr_impl_int *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 __uniq_ptr_impl_int *__u_local;
 __uniq_ptr_impl_int *this_local;
 
 ptVar1 = std__move_tuple_int_ptr_default_delete_int_ref_(&__u->_M_t);
 std__tuple_int_ptr_default_delete_int____tuple(&this->_M_t,ptVar1);
 ppiVar2 = std____uniq_ptr_impl_int___M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return this;
}



/* Function: __uniq_ptr_data @ 0001350c */

/* DWARF original prototype: __uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> *
 __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> * this, pointer
 param_1) */

__uniq_ptr_data_int_arr * __thiscall
std____uniq_ptr_data_int_arr___uniq_ptr_data
 (__uniq_ptr_data_int_arr *this,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int_arr *this_local;
 
 std____uniq_ptr_impl_int_arr___uniq_ptr_impl_ptr
 (&this->super___uniq_ptr_impl_int_arr,param_1);
 return this;
}



/* Function: unique_ptr<int*> @ 00013544 */

/* DWARF original prototype: unique_ptr<int_[],_std::default_delete<int_[]>_> *
 unique_ptr<int*>(unique_ptr<int_[],_std::default_delete<int_[]>_> * this, int * __p) */

unique_ptr_int_arr * __thiscall
std__unique_ptr_int_arr__unique_ptr_int_ptr
 (unique_ptr_int_arr *this,int *__p)

{
 int *__p_local;
 unique_ptr_int_arr *this_local;
 
 std____uniq_ptr_data_int_arr___uniq_ptr_data(&this->_M_t,__p);
 return this;
}



/* Function: ~unique_ptr @ 00013578 */

/* DWARF original prototype: void * ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void * __thiscall
std__unique_ptr_int_arr___unique_ptr
 (unique_ptr_int_arr *this,int __in_chrg)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 unique_ptr_int_arr *this_local;
 int **__ptr;
 
 ppiVar1 = std____uniq_ptr_impl_int_arr___M_ptr
 ((__uniq_ptr_impl_int_arr *)this);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = std__unique_ptr_int_arr__get_deleter(this);
 std__default_delete_int_arr__operator__int_(this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return this;
}



/* Function: operator[] @ 000135e4 */

/* DWARF original prototype: type operator[](unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, size_t __i) */

type __thiscall
std__unique_ptr_int_arr__operator__
 (unique_ptr_int_arr *this,size_t __i)

{
 pointer piVar1;
 size_t __i_local;
 unique_ptr_int_arr *this_local;
 
 piVar1 = std__unique_ptr_int_arr__get(this);
 return piVar1 + __i;
}



/* Function: __uniq_ptr_impl @ 00013624 */

/* DWARF original prototype: __uniq_ptr_impl<int,_std::default_delete<int>_> *
 __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> * this, pointer __p) */

__uniq_ptr_impl_int * __thiscall
std____uniq_ptr_impl_int___uniq_ptr_impl_ptr
 (__uniq_ptr_impl_int *this,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int *this_local;
 
 std__tuple_int_ptr_default_delete_int__tuple(&this->_M_t);
 ppiVar1 = std____uniq_ptr_impl_int___M_ptr(this);
 *ppiVar1 = __p;
 return this;
}



/* Function: _M_ptr @ 00013668 */

pointer * __thiscall
std____uniq_ptr_impl_int___M_ptr
 (__uniq_ptr_impl_int *this)

{
 int **ppiVar1;
 __uniq_ptr_impl_int *this_local;
 
 ppiVar1 = std__get_0_int_ptr_default_delete_int_(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00013694 */

default_delete_int * __thiscall
std__unique_ptr_int__get_deleter
 (unique_ptr_int *this)

{
 default_delete_int *pdVar1;
 unique_ptr_int *this_local;
 
 pdVar1 = std____uniq_ptr_impl_int___M_deleter
 ((__uniq_ptr_impl_int *)this);
 return pdVar1;
}



/* Function: move<int*&> @ 000136c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std__move_int_ptr_ref_(int **__t)

{
 int **__t_local;
 
 return __t;
}



/* Function: operator() @ 000136e4 */

void __thiscall std__default_delete_int__operator_(default_delete_int *this,int *__ptr)

{
 int *__ptr_local;
 default_delete_int *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr,4);
 }
 return;
}



/* Function: get @ 0001371c */

pointer __thiscall
std__unique_ptr_int__get
 (unique_ptr_int *this)

{
 pointer piVar1;
 unique_ptr_int *this_local;
 
 piVar1 = std____uniq_ptr_impl_int___M_ptr
 ((__uniq_ptr_impl_int *)this);
 return piVar1;
}



/* Function: move<std::tuple<int*,_std::default_delete<int>_>&> @ 00013748 */

type * std__move_tuple_int_ptr_default_delete_int_ref_
 (tuple_int_void *__t)

{
 return __t;
}



/* Function: _Tuple_impl @ 0001376c */

_Tuple_impl_1_default_delete_int * __thiscall
std___Tuple_impl_1_default_delete_int___Tuple_impl
 (_Tuple_impl_1_default_delete_int *this,
 _Tuple_impl_1_default_delete_int *__in)

{
 _Tuple_impl_1_default_delete_int *__in_local;
 _Tuple_impl_1_default_delete_int *this_local;
 
 return this;
}



/* Function: __uniq_ptr_impl @ 00013794 */

/* DWARF original prototype: __uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
 __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> * this, pointer __p) */

__uniq_ptr_impl_int_arr * __thiscall
std____uniq_ptr_impl_int_arr___uniq_ptr_impl_ptr
 (__uniq_ptr_impl_int_arr *this,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_arr *this_local;
 
 std__tuple_int_ptr_default_delete_int_arr____tuple(&this->_M_t);
 ppiVar1 = std____uniq_ptr_impl_int_arr___M_ptr(this);
 *ppiVar1 = __p;
 return this;
}



/* Function: _M_ptr @ 000137d8 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
 this) */

pointer * __thiscall
std____uniq_ptr_impl_int_arr___M_ptr
 (__uniq_ptr_impl_int_arr *this)

{
 __tuple_element_t *ppiVar1;
 __uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this_local;
 
 ppiVar1 = get<0,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00013804 */

deleter_type * __thiscall
std__unique_ptr_int_arr__get_deleter
 (unique_ptr_int_arr *this)

{
 default_delete_int_arr *pdVar1;
 unique_ptr_int_arr *this_local;
 
 pdVar1 = std____uniq_ptr_impl_int_arr___M_deleter
 ((__uniq_ptr_impl_int_arr *)this);
 return pdVar1;
}



/* Function: operator()<int> @ 00013830 */

/* DWARF original prototype: void operator()<int>(default_delete_int_arr * this, int * __ptr) */

void __thiscall
std__default_delete_int_arr__operator__int_(default_delete_int_arr *this,int *__ptr)

{
 int *__ptr_local;
 default_delete_int_arr *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: get @ 00013864 */

/* DWARF original prototype: pointer get(unique_ptr<int_[],_std::default_delete<int_[]>_> * this) */

pointer __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::get
 (unique_ptr<int_[],_std::default_delete<int_[]>_> *this)

{
 pointer piVar1;
 unique_ptr_int_arr *this_local;
 
 piVar1 = std____uniq_ptr_impl_int_arr___M_ptr
 ((__uniq_ptr_impl_int_arr *)this);
 return piVar1;
}



/* Function: tuple<> @ 00013890 */

/* DWARF original prototype: tuple<int*,_std::default_delete<int>_> *
 tuple<>(tuple<int*,_std::default_delete<int>_> * this) */

tuple_int_void * __thiscall
std__tuple_int_ptr_default_delete_int____tuple__(tuple_int_void *this)

{
 std___Tuple_impl_0_int_ptr_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_0_int_ptr_default_delete_int_);
 return this;
}



/* Function: get<0,_int*,_std::default_delete<int>_> @ 000138bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int> > */

__tuple_element_t *
std__get_0_int_ptr_default_delete_int_2(tuple_int_void *__t)

{
 int **ppiVar1;

 ppiVar1 = std____get_helper_0_int_ptr_default_delete_int_
 (&__t->super__Tuple_impl_0_int_ptr_default_delete_int_);
 return ppiVar1;
}



/* Function: _M_deleter @ 000138e8 */

/* DWARF original prototype: default_delete_int *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete_int * __thiscall
std____uniq_ptr_impl_int___M_deleter_2
 (__uniq_ptr_impl_int *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl_int *this_local;
 
 p_Var1 = std____get_helper_1_default_delete_int_(&this->_M_t);
 return (default_delete_int *)p_Var1;
}



/* Function: _M_ptr @ 00013914 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
 */

pointer __thiscall
std____uniq_ptr_impl_int___M_ptr_2
 (__uniq_ptr_impl_int *this)

{
 ____tuple_element_t *ppiVar1;

 ppiVar1 = std__get_0_int_ptr_default_delete_int_((tuple_int_void *)&this->_M_t);
 return *ppiVar1;
}



/* Function: tuple<> @ 00013944 */

/* DWARF original prototype: tuple<int*,_std::default_delete<int_[]>_> *
 tuple<>(tuple<int*,_std::default_delete<int_[]>_> * this) */

tuple_int_void * __thiscall
std__tuple_int_ptr_default_delete_int_arr__tuple_(tuple_int_void *this)

{
 tuple_int_void *this_local;
 
 std____Tuple_impl_0_int_ptr_default_delete_int_arr____Tuple_impl
 (&this->super__Tuple_impl_0_int_ptr_default_delete_int_arr_);
 return this;
}



/* Function: get<0,_int*,_std::default_delete<int_[]>_> @ 00013970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
std__get_0_int_ptr_default_delete_int_arr_2(tuple_int_void *__t)

{
 int **ppiVar1;

 ppiVar1 = std____get_helper_0_int_ptr_default_delete_int_arr_
 (&__t->super__Tuple_impl_0_int_ptr_default_delete_int_arr_);
 return ppiVar1;
}



/* Function: _M_deleter @ 0001399c */

/* DWARF original prototype: default_delete_int_arr *
 _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> * this) */

default_delete_int_arr * __thiscall
std____uniq_ptr_impl_int_arr___M_deleter_2
 (__uniq_ptr_impl_int_arr *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl<int,std::default_delete<int_[]>_> *local;
 
 p_Var1 = std____get_helper_1_default_delete_int_arr_(&this->_M_t);
 return (default_delete_int_arr *)p_Var1;
}



/* Function: _M_ptr @ 000139c8 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
 this) */

pointer __thiscall
std____uniq_ptr_impl_int_arr___M_ptr_2
 (__uniq_ptr_impl_int_arr *this)

{
 __tuple_element_t *ppiVar1;
 __uniq_ptr_impl<int,std::default_delete<int_[]>_> *local;
 
 ppiVar1 = std____get_helper_0_int_ptr_default_delete_int_arr_(&this->_M_t);
 return *ppiVar1;
}



/* Function: _Tuple_impl @ 000139f8 */

/* DWARF original prototype: _Tuple_impl<0,_int*,_std::default_delete<int>_> *
 _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int>_> * this) */

_Tuple_impl_0_int_ptr_default_delete_int_ * __thiscall
std___Tuple_impl_0_int_ptr_default_delete_int_____Tuple_impl
 (_Tuple_impl_0_int_ptr_default_delete_int_ *this)

{
 _Tuple_impl_0_int_ptr_default_delete_int_ *this_local;
 
 std___Tuple_impl_1_default_delete_int___Tuple_impl
 (&this->super__Tuple_impl_1_default_delete_int);
 std___Head_base_0_int_ptr_false___Head_base((_Head_base_0 *)this);
 return this;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int>_> @ 00013a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int> > */

int ** std____get_helper_0_int_ptr_default_delete_int_
 (_Tuple_impl_0_int_ptr_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___Tuple_impl_0_int_ptr_default_delete_int____M_head(__t);
 return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete<int>_> @ 00013a54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std::default_delete<int> > */

__tuple_element_t_conflict * __thiscall
std__get_1_int_ptr_default_delete_int_(tuple_int_void *__t)

{
 __tuple_element_t_conflict *pdVar1;
 tuple_int_void *__t_local;
 
 pdVar1 = std___Tuple_impl_1_default_delete_int___M_head((_Tuple_impl_1 *)__t);
 return pdVar1;
}



/* Function: get<0,_int*,_std::default_delete<int>_> @ 00013a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int> > */

__tuple_element_t *
std__get_0_int_ptr_default_delete_int_3(tuple<int*,_std::default_delete<int>_> *__t)

{
 int **ppiVar1;
 tuple_int_void *__t_local;
 
 ppiVar1 = std____get_helper_0_int_ptr_default_delete_int_
 (&__t->super__Tuple_impl_0_int_ptr_default_delete_int_);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013aa8 */

/* DWARF original prototype: _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *
 _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> * this) */

_Tuple_impl_0_int_ptr_default_delete_int_arr * __thiscall
std____Tuple_impl_0_int_ptr_default_delete_int_arr____Tuple_impl
 (_Tuple_impl_0_int_ptr_default_delete_int_arr *this)

{
 _Tuple_impl_0_int_ptr_default_delete_int_arr *this_local;
 
 std___Tuple_impl_1_default_delete_int_arr___Tuple_impl
 (&this->super__Tuple_impl_1_default_delete_int_arr);
 std___Head_base_0_int_ptr_false___Head_base((_Head_base_0 *)this);
 return this;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int_[]>_> @ 00013adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** std____get_helper_0_int_ptr_default_delete_int_arr_
 (_Tuple_impl_0_int_ptr_default_delete_int_arr *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___Tuple_impl_0_int_ptr_default_delete_int_arr____M_head(__t);
 return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete<int_[]>_> @ 00013b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std::default_delete<int []> > */

__tuple_element_t_conflict * __thiscall
std__get_1_int_ptr_default_delete_int_arr_(tuple_int_void *__t)

{
 __tuple_element_t_conflict *pdVar1;
 tuple_int_void *__t_local;
 
 pdVar1 = std____get_helper_1_default_delete_int_arr_
 ((_Tuple_impl_1 *)__t);
 return pdVar1;
}



/* Function: get<0,_int*,_std::default_delete<int_[]>_> @ 00013b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
std____get_0_int_ptr_default_delete_int_arr_2(tuple_int_void *__t)

{
 int **ppiVar1;
 tuple_int_void *__t_local;
 
 ppiVar1 = std____get_helper_0_int_ptr_default_delete_int_arr_
 (&__t->super__Tuple_impl_0_int_ptr_default_delete_int_arr_);
 return ppiVar1;
}



/* Function: forward<int*&> @ 00013b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std__forward_int_ptr_ref_(type *__t)

{
 type *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00013b7c */

/* DWARF original prototype: _Tuple_impl<1,_std::default_delete<int>_> *
 _Tuple_impl(_Tuple_impl<1,_std::default_delete<int>_> * this) */

_Tuple_impl_1_default_delete_int * __thiscall
std___Tuple_impl_1_default_delete_int____Tuple_impl
 (_Tuple_impl_1_default_delete_int *this)

{
 _Tuple_impl_1_default_delete_int *this_local;
 
 std___Head_base_1_default_delete_int_true___Head_base
 (&this->super__Head_base_1_default_delete_int_true);
 return this;
}



/* Function: _Head_base @ 00013ba4 */

/* DWARF original prototype: _Head_base<0,_int*,_false> * _Head_base(_Head_base<0,_int*,_false> *
 this) */

_Head_base_0_int_ptr_false * __thiscall
std___Head_base_0_int_ptr_false___Head_base(_Head_base_0_int_ptr_false *this)

{
 _Head_base_0_int_ptr_false *this_local;
 
 this->_M_head_impl = (int *)0x0;
 return this;
}



/* Function: _M_head @ 00013bd4 */

int ** __thiscall std___Tuple_impl_0_int_ptr_default_delete_int____M_head
 (_Tuple_impl_0_int_ptr_default_delete_int_ *__t)

{
 int **ppiVar1;

 ppiVar1 = std___Head_base_0_int_ptr_false___M_head((_Head_base_0_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete<int>_> @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std::default_delete<int> > */

default_delete_int *
std____get_helper_1__std__default_delete_int_(_Tuple_impl_1_default_delete_int *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std___Tuple_impl_1_default_delete_int___M_head(__t);
 return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int>_> @ 00013c28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int> > */

int ** std____get_helper_0_int_ptr_default_delete_int_2
 (_Tuple_impl_0_int_ptr_default_delete_int_ *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_ptr_default_delete_int_ *__t_local;
 
 ppiVar1 = std___Tuple_impl_0_int_ptr_default_delete_int____M_head(__t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013c50 */

/* DWARF original prototype: _Tuple_impl<1,_std::default_delete<int_[]>_> *
 _Tuple_impl(_Tuple_impl<1,_std::default_delete<int_[]>_> * this) */

_Tuple_impl_1_default_delete_int_arr * __thiscall
std___Tuple_impl_1__std__default_delete_int_arr___Tuple_impl
 (_Tuple_impl_1_default_delete_int_arr *this)

{
 std___Head_base_1_default_delete_int_arr_true___Head_base
 (&this->super__Head_base_1_default_delete_int_arr_true);
 return this;
}



/* Function: _M_head @ 00013c78 */

int ** std___Tuple_impl_0_int_ptr_default_delete_int_arr____M_head
 (_Tuple_impl_0_int_ptr_default_delete_int_arr *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___Head_base_0_int_ptr_false___M_head((_Head_base_0_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete<int_[]>_> @ 00013ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std::default_delete<int []> > */

default_delete_int_arr *
std____get_helper_1__std__default_delete_int_arr_
 (_Tuple_impl_1_default_delete_int_arr *__t)

{
 default_delete_int_arr *pdVar1;
 
 pdVar1 = std___Tuple_impl_1_default_delete_int_arr___M_head(__t);
 return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int_[]>_> @ 00013ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** std____get_helper_0_int_ptr_default_delete_int_arr_2
 (_Tuple_impl_0_int_ptr_default_delete_int_arr *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_ptr_default_delete_int_arr *__t_local;
 
 ppiVar1 = std___Tuple_impl_0_int_ptr_default_delete_int_arr____M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00013cf4 */

/* DWARF original prototype: _Head_base<0,_int*,_false> *
 _Head_base<int*&>(_Head_base<0,_int*,_false> * this, int * * __h) */

_Head_base_0_int_ptr_false * __thiscall
std___Head_base_0_int_ptr_false___Head_base_int_ptr_ref_(_Head_base<0,_int*,_false> *this,int **__h)

{
 int **ppiVar1;
 int **__h_local;
 _Head_base_0_int_ptr_false *this_local;
 
 ppiVar1 = std__forward_int_ptr_ref_(__h);
 this->_M_head_impl = *ppiVar1;
 return this;
}



/* Function: _Head_base @ 00013d30 */

/* DWARF original prototype: _Head_base<1,_std::default_delete<int>,_true> *
 _Head_base(_Head_base<1,_std::default_delete<int>,_true> * this) */

_Head_base_1_default_delete_int_true * __thiscall
std___Head_base_1_default_delete_int_true___Head_base
 (_Head_base<1,_std::default_delete<int>,_true> *this)

{
 _Head_base_1_default_delete_int_true *this_local;
 
 return this;
}



/* Function: _M_head @ 00013d54 */

int ** std___Head_base_0_int_ptr_false___M_head(_Head_base<0,_int*,_false> *__b)

{
 _Head_base_0_int_ptr_false *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013d78 */

default_delete_int * __thiscall
std___Tuple_impl_1_default_delete_int____M_head
 (_Tuple_impl_1_default_delete_int *__t)

{
 default_delete_int *pdVar1;

 pdVar1 = std___Head_base_1_default_delete_int_true___M_head
 (&__t->super__Head_base_1_default_delete_int_true);
 return pdVar1;
}



/* Function: _M_head @ 00013da0 */

int ** __thiscall std___Tuple_impl_0_int_ptr_default_delete_int____M_head_2
 (_Tuple_impl_0_int_ptr_default_delete_int_ *__t)

{
 int **ppiVar1;

 ppiVar1 = std___Head_base_0_int_ptr_false___M_head((_Head_base_0_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: _Head_base @ 00013dcc */

/* DWARF original prototype: _Head_base<1,_std::default_delete<int_[]>,_true> *
 _Head_base(_Head_base<1,_std::default_delete<int_[]>,_true> * this) */

_Head_base_1_default_delete_int_arr_true * __thiscall
std___Head_base_1_default_delete_int_arr_true___Head_base
 (_Head_base<1,_std::default_delete<int_[]>,_true> *this)

{
 _Head_base_1_default_delete_int_arr_true *this_local;
 
 return this;
}



/* Function: _M_head @ 00013df0 */

default_delete_int_arr * __thiscall
std____Tuple_impl_1_default_delete_int_arr____M_head
 (_Tuple_impl_1_default_delete_int_arr *__t)

{
 default_delete_int_arr *pdVar1;

 pdVar1 = std___Head_base_1_default_delete_int_arr_true___M_head
 (&__t->super__Head_base_1_default_delete_int_arr_true);
 return pdVar1;
}



/* Function: _M_head @ 00013e18 */

int ** __thiscall std___Tuple_impl_0_int_ptr_default_delete_int_arr____M_head
 (_Tuple_impl_0_int_ptr_default_delete_int_arr *__t)

{
 int **ppiVar1;

 ppiVar1 = std___Head_base_0_int_ptr_false___M_head((_Head_base_0_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00013e44 */

default_delete_int *
std___Head_base_1_default_delete_int_true___M_head
 (_Head_base<1,_std::default_delete<int>,_true> *__b)

{
 _Head_base_1_default_delete_int_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013e68 */

int ** std___Head_base_0_int_ptr_false___M_head_2(_Head_base_0_int_ptr_false *__b)

{
 _Head_base_0_int_ptr_false *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013e8c */

default_delete_int_arr *
std___Head_base_1_default_delete_int_arr_true___M_head
 (_Head_base<1,_std::default_delete<int_[]>,_true> *__b)

{
 _Head_base_1_default_delete_int_arr_true *__b_local;
 
 return &__b->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 00013eb0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB__dtor(RTTIDerivedB *this,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00014464;
 RTTIBase::~RTTIBase(&this->super_RTTIBase,__in_chrg);
 return this;
}



/* Function: ~RTTIDerivedB @ 00013eec */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB__dtor_delete(RTTIDerivedB *this,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 ~RTTIDerivedB(this,__in_chrg);
 operator_delete(this,4);
 return this;
}



/* Function: ~RTTIDerivedA @ 00013f20 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA__dtor(RTTIDerivedA *this,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00014478;
 RTTIBase::~RTTIBase(&this->super_RTTIBase,__in_chrg);
 return this;
}



/* Function: ~RTTIDerivedA @ 00013f5c */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA__dtor_delete(RTTIDerivedA *this,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 ~RTTIDerivedA(this,__in_chrg);
 operator_delete(this,4);
 return this;
}



/* Function: ~DiamondDerived @ 00013f90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void * __thiscall
DiamondDerived__dtor(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 int __in_chrg_00;
 
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)&PTR_func_000144aa4;
 *(undefined ***)&this->field_0x10 = &PTR_func_000144d8;
 *(undefined ***)&(this->super_MiddleA).field_0x8 = &PTR_func_000144bc;
 MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,0x144f0,&PTR_DAT_000144f0);
 MiddleA::~MiddleA(&this->super_MiddleA,0x144e8,&PTR_DAT_000144e8);
 VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10,__in_chrg_00);
 return this;
}



/* Function: ~DiamondDerived @ 00014028 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__dtor_thunk_1(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10,in_r1,in_r2);
 return;
}



/* Function: ~DiamondDerived @ 00014030 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__dtor_thunk_2(DiamondDerived *this)

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
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void * __thiscall
DiamondDerived__dtor_delete(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 
 DiamondDerived__dtor(this,__in_chrg,__vtt_parm);
 operator_delete(this,0x18);
 return this;
}



/* Function: ~DiamondDerived @ 00014078 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__dtor_delete_thunk_1(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10,in_r1,in_r2);
 return;
}



/* Function: ~DiamondDerived @ 00014080 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__dtor_delete_thunk_2(DiamondDerived *this)

{
 int in_r1;
 void **in_r2;
 
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]),in_r1,in_r2);
 return;
}



/* Function: ~MultiDerived @ 00014094 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 int __in_chrg_00;
 MultiDerived *this_local;
 
 (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00014584;
 (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_0001459c;
 BaseB::~BaseB(&this->super_BaseB,__in_chrg);
 BaseA::~BaseA(&this->super_BaseA,__in_chrg_00);
 return this;
}



/* Function: ~MultiDerived @ 000140f0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 int in_r1;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_r1);
 return;
}



/* Function: ~MultiDerived @ 000140f8 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 MultiDerived *this_local;
 
 ~MultiDerived(this,__in_chrg);
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MultiDerived @ 0001412c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 int in_r1;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_r1);
 return;
}



/* Function: ~Derived @ 00014134 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 Derived *this_local;
 
 (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_000145d8;
 Base::~Base(&this->super_Base,__in_chrg);
 return this;
}



/* Function: ~Derived @ 00014170 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 Derived *this_local;
 
 ~Derived(this,__in_chrg);
 operator_delete(this,8);
 return this;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 203 */
