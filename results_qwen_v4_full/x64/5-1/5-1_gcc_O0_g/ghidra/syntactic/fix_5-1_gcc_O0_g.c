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
typedef unsigned long ulong;
typedef unsigned int uint;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for C++ classes/structs */
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

/* Forward declarations for DiamondDerived functions */
void DiamondDerived_dtor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm);
void DiamondDerived_dtor_thunk1(DiamondDerived *this_ptr);
void DiamondDerived_dtor_thunk2(DiamondDerived *this_ptr);
void DiamondDerived_dtor_deleting(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm);
void DiamondDerived_dtor_thunk3(DiamondDerived *this_ptr);
void DiamondDerived_dtor_thunk4(DiamondDerived *this_ptr);

/* Forward declarations for MultiDerived functions */
void MultiDerived_dtor(MultiDerived *this_ptr,int __in_chrg);
void MultiDerived_dtor_thunk1(MultiDerived *this_ptr);
void MultiDerived_dtor_deleting(MultiDerived *this_ptr,int __in_chrg);
void MultiDerived_dtor_thunk2(MultiDerived *this_ptr);

/* DiamondDerived struct definition */
struct DiamondDerived {
 struct {
  void *_vptr_MiddleA;
  int dataA;
 } super_MiddleA;
 struct {
  void *_vptr_MiddleB;
  int dataB;
 } super_MiddleB;
 int field_0x20;
 int _40_4_;
 void *_32_8_;
};
typedef struct Point Point;
typedef struct Containerint Containerint;
typedef struct Container_double Container_double;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* RTTIBase struct definition */
struct RTTIBase {
 void *_vptr_RTTIBase;
};

/* RTTIDerivedA struct definition */
struct RTTIDerivedA {
 struct RTTIBase super_RTTIBase;
};

/* RTTIDerivedB struct definition */
struct RTTIDerivedB {
 struct RTTIBase super_RTTIBase;
};
typedef struct type_info type_info;
typedef struct anon_struct_16_2_484633fb anon_struct_16_2_484633fb;
struct anon_struct_16_2_484633fb {
 int __capture_by_value;
 int *__capture_by_ref;
};
typedef struct anon_struct_1_0_00000001_for__M_head_impl anon_struct_1_0_00000001_for__M_head_impl;
struct anon_struct_1_0_00000001_for__M_head_impl {
 int _M_head_impl;
};
typedef struct unique_ptr_int_default_delete_int unique_ptr_int_default_delete_int;
typedef struct unique_ptr_int_array_default_delete_int_array unique_ptr_int_array_default_delete_int_array;
typedef struct unique_ptr_int_lambda unique_ptr_int_lambda;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda;
typedef struct __uniq_ptr_impl_int_std_default_delete_int_ __uniq_ptr_impl_int_std_default_delete_int_;
typedef struct __uniq_ptr_impl_int_std_default_delete_int_array_ __uniq_ptr_impl_int_std_default_delete_int_array_;
typedef struct __uniq_ptr_data_int_std_default_delete_int_true_true __uniq_ptr_data_int_std_default_delete_int_true_true;
typedef struct __uniq_ptr_data_int_std_default_delete_int_array_true_true __uniq_ptr_data_int_std_default_delete_int_array_true_true;
typedef struct _Tuple_impl_0_int_ptr_std_default_delete_int_ _Tuple_impl_0_int_ptr_std_default_delete_int_;
typedef struct _Tuple_impl_1_std_default_delete_int_ _Tuple_impl_1_std_default_delete_int_;
typedef struct _Tuple_impl_0_int_ptr_std_default_delete_int_array_ _Tuple_impl_0_int_ptr_std_default_delete_int_array_;
typedef struct _Tuple_impl_1_std_default_delete_int_array_ _Tuple_impl_1_std_default_delete_int_array_;
typedef struct _Head_base_0_int_ptr_false _Head_base_0_int_ptr_false;
typedef struct _Head_base_1_std_default_delete_int_true _Head_base_1_std_default_delete_int_true;
typedef struct _Head_base_1_std_default_delete_int_array_true _Head_base_1_std_default_delete_int_array_true;
typedef struct tuple_int_ptr_std_default_delete_int_ tuple_int_ptr_std_default_delete_int_;
typedef struct tuple_int_ptr_std_default_delete_int_array_ tuple_int_ptr_std_default_delete_int_array_;
typedef struct default_delete_int default_delete_int;
typedef struct default_delete_int_array_ default_delete_int_array_;
struct default_delete_int {
 int _M_head_impl;
};
struct default_delete_int_array_ {
 int _M_head_impl;
};

/* Additional struct definitions for tuple/unique_ptr support */
struct _Head_base_0_int_ptr_false {
 int *_M_head_impl;
};
struct _Head_base_1_std_default_delete_int_true {
 default_delete_int _M_head_impl;
};
struct _Head_base_1_std_default_delete_int_array_true {
 default_delete_int_array_ _M_head_impl;
};
struct _Tuple_impl_1_std_default_delete_int_ {
 struct _Head_base_1_std_default_delete_int_true super__Head_base_1_std_default_delete_int_true;
};
struct _Tuple_impl_1_std_default_delete_int_array_ {
 struct _Head_base_1_std_default_delete_int_array_true super__Head_base_1_std_default_delete_int_array_true;
};

/* Type definitions */
typedef void* pointer;
typedef void* type;
typedef void* deleter_type;
typedef int* __tuple_element_t;
typedef void* __tuple_element_t_conflict;
typedef int (*_funcint_varargs)(void);
typedef unsigned long undefined8;

/* External function declarations */
void __stack_chk_fail(void);
void* operator_new(size_t size);
void* operator_new__(size_t size);
void operator_delete(void* p, size_t size);
void operator_delete__(void* p);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exc, void* typeinfo, void* dest);
void __cxa_bad_typeid(void);
void* __dynamic_cast(void* src, void* src_type, void* dst_type, int offset);
void* __cxa_atexit(void* func, void* arg, void* dso);
int strcmp(const char* s1, const char* s2);
size_t strlen(const char* s);
int puts(const char* s);
int printf(const char* format, ...);
void __cxa_throw_bad_array_new_length(void);

/* Global variable declarations */
extern int instance_count;
extern void* std___ioinit;
extern void* __dso_handle;
extern void* PTR_virtual_func_00108b50;
extern void* PTR_virtual_func_00108b20;
extern void* PTR_funcA_00108af8;
extern void* PTR_funcA_00108a78;
extern void* PTR_funcB_00108ad0;
extern void* PTR_funcB_00108aa8;
extern void* PTR_func_00108a50;
extern void* PTR_construction_vtable_24__00108940;
extern void* PTR_construction_vtable_24__00108950;
extern void* PTR__RTTIBase_00108888;
extern void* PTR__RTTIDerivedA_00108860;
extern void* PTR__RTTIDerivedB_00108838;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 ((void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001023ca */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 int r1;
 int r2;
 int r3;
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 SimpleClass_ctor(&obj,5,"Test");
 SimpleClass_setValue(&obj,10);
 iVar2 = SimpleClass_getValue(&obj);
 iVar3 = SimpleClass_compute(&obj,3);
 iVar4 = SimpleClass_getClassID();
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar4 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 0010245c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 int result;
 LifecycleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 LifecycleClass_ctor(&obj,5);
 iVar4 = 2;
 iVar2 = LifecycleClass_getData(&obj,2);
 iVar3 = LifecycleClass_getInstanceCount();
 LifecycleClass_dtor(&obj,iVar4);
 iVar4 = LifecycleClass_getInstanceCount();
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3 + iVar4 * 1000;
}



/* Function: call_virtual_func @ 001024de */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 int x_local;
 Base *obj_local;
 
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 0010250b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int __in_chrg;
 long in_FS_OFFSET;
 int r1;
 int r2;
 int r3;
 int r4;
 Base base;
 Base *pb;
 Base *pd;
 Derived derived;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 base._vptr_Base = (_funcint_varargs **)&PTR_virtual_func_00108b50;
 Derived_ctor(&derived,3);
 iVar2 = Base_virtual_func(&base,5);
 iVar3 = Derived_virtual_func(&derived,5);
 /* try { // try from 00102587 to 0010259f has its CatchHandler @ 001025e1 */
 iVar4 = call_virtual_func(&base,5);
 __in_chrg = 5;
 iVar5 = call_virtual_func(&derived.super_Base,5);
 Derived_dtor(&derived,__in_chrg);
 Base_dtor(&base,__in_chrg);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3 + iVar4 + iVar5;
}



/* Function: test_cpp_multiple_inheritance @ 00102616 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int in_ESI;
 long in_FS_OFFSET;
 int r1;
 int r2;
 int ptr_equal;
 BaseA *pa;
 BaseB *pb;
 MultiDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 MultiDerived_ctor(&obj);
 obj.super_BaseA.dataA = 100;
 obj.super_BaseB.dataB = 200;
 /* try { // try from 00102671 to 00102688 has its CatchHandler @ 001026ca */
 iVar2 = (**obj.super_BaseA._vptr_BaseA)(&obj);
 iVar3 = (**obj.super_BaseB._vptr_BaseB)(&obj.super_BaseB);
 MultiDerived_dtor(&obj,in_ESI);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3 + (uint)(&obj != (MultiDerived *)&obj.super_BaseB);
}



/* Function: test_cpp_diamond_inheritance @ 001026f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 uint uVar2;
 int iVar3;
 void **in_RDX;
 int in_ESI;
 long in_FS_OFFSET;
 int r1;
 int r2;
 VirtualBase *pb;
 DiamondDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 DiamondDerived_ctor(&obj,in_ESI,in_RDX);
 obj._40_4_ = 0x32;
 /* try { // try from 0010273f to 0010275d has its CatchHandler @ 00102789 */
 uVar2 = (*(code *)obj._32_8_)(&obj.field_0x20);
 obj._40_4_ = 100;
 iVar3 = (*(code *)obj._32_8_)(&obj.field_0x20);
 DiamondDerived_dtor(&obj,in_ESI,(void **)(ulong)uVar2);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2 + iVar3;
}



/* Function: test_cpp_operator_overload @ 001027b2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 long lVar1;
 bool bVar2;
 int iVar3;
 long in_FS_OFFSET;
 bool eq;
 Point p1;
 Point p2;
 Point p3;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 Point_ctor(&p1,1,2);
 Point_ctor(&p2,3,4);
 p3 = Point_operator_add(&p1,&p2);
 bVar2 = Point_operator_eq(&p1,&p2);
 Point_operator_inc(&p3);
 if (bVar2) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return p3.y + p3.x + iVar3;
}



/* Function: test_cpp_template_func @ 00102864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 long in_FS_OFFSET;
 int a;
 int b;
 int r1;
 double r2;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 r1 = template_maxint(3,7);
 r2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swapint(&a,&b);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return b + (int)r2 + r1 + a;
}



/* Function: test_cpp_template_class @ 00102906 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 double dVar4;
 int r1;
 int r2;
 double r3;
 Container<int> int_container;
 Container<double> double_container;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 Containerint_ctor(&int_container);
 Containerint_push(&int_container,10);
 Containerint_push(&int_container,0x14);
 Containerint_push(&int_container,0x1e);
 iVar2 = Containerint_get(&int_container,0);
 iVar3 = Containerint_getSize(&int_container);
 Container_double_ctor(&double_container);
 Container_double_push(&double_container,3.14);
 dVar4 = Container_double_get(&double_container,0);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)dVar4 + iVar2 + iVar3;
}



/* Function: operator() @ 00102a12 */

/* DWARF original prototype: int operator()(anon_struct_16_2_484633fb * __closure, int x) */

int __thiscall
test_cpp_lambda_anon_struct_16_2_484633fb_operator(anon_struct_16_2_484633fb *this_ptr,int x)

{
 int x_local;
 int *capture_by_value;
 
 /* Unresolved local var: int * capture_by_ref@[???] */
 *this_ptr->__capture_by_ref = *this_ptr->__capture_by_ref + 5;
 return *this_ptr->__capture_by_ref + this_ptr->__capture_by_value * x;
}



/* Function: test_cpp_lambda @ 00102a4e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int capture_by_ref;
 int capture_by_value;
 int r1;
 int r2;
 anon_struct_16_2_484633fb lambda1;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 capture_by_value = 10;
 capture_by_ref = 0x14;
 lambda1.__capture_by_value = 10;
 lambda1.__capture_by_ref = &capture_by_ref;
 r1 = test_cpp_lambda_anon_struct_16_2_484633fb_operator(&lambda1,3);
 r2 = 0x1e;
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return r1 + 0x1e;
}



/* Function: test_cpp_exception @ 00102abe */

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
 /* try { // try from 00102af6 to 00102afa has its CatchHandler @ 00102b03 */
 __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: operator() @ 00102be4 */

/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
 int * p) */

void __thiscall std__Head_base_1_test_cpp_smart_ptr_lambda_true_anon_struct_1_0_00000001_for__M_head_impl_operator
 (anon_struct_1_0_00000001_for__M_head_impl *this_ptr,int *p)

{
 int *p_local;
 anon_struct_1_0_00000001_for__M_head_impl *this_local;
 
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 00102c17 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 long lVar4;
 pointer __p;
 type piVar5;
 type *ptVar6;
 int *__p_00;
 pointer __p_01;
 int __in_chrg;
 long in_FS_OFFSET;
 anon_struct_1_0_00000001_for__M_head_impl deleter;
 int r1;
 int r2;
 int r3;
 unique_ptrint_default_deleteint ptr1;
 unique_ptrint_default_deleteint ptr2;
 unique_ptrint_array_default_deleteint_array arr;
 unique_ptrint_lambda ptr3;
 
 lVar4 = *(long *)(in_FS_OFFSET + 0x28);
 __p = operator_new(4);
 *__p = 100;
 unique_ptrint_default_deleteint_ctor(&ptr1,__p);
 piVar5 = unique_ptrint_default_deleteint_deref(&ptr1);
 *piVar5 = 200;
 ptVar6 = std_move_unique_ptrint_ref(&ptr1);
 unique_ptrint_default_deleteint_copy_ctor(&ptr2,ptVar6);
 piVar5 = unique_ptrint_default_deleteint_deref(&ptr2);
 iVar1 = *piVar5;
 /* try { // try from 00102c98 to 00102c9c has its CatchHandler @ 00102d90 */
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 unique_ptrint_array_default_deleteint_array_ctor(&arr,__p_00);
 piVar5 = unique_ptrint_array_default_deleteint_array_index(&arr,2);
 iVar2 = *piVar5;
 /* try { // try from 00102cfb to 00102cff has its CatchHandler @ 00102d7b */
 __p_01 = operator_new(4);
 *__p_01 = 500;
 unique_ptrint_lambda_ctor(&ptr3,__p_01,&deleter);
 __in_chrg = (int)__p_01;
 piVar5 = unique_ptrint_lambda_deref(&ptr3);
 iVar3 = *piVar5;
 unique_ptrint_lambda_dtor(&ptr3,__in_chrg);
 unique_ptrint_array_default_deleteint_array_dtor(&arr,__in_chrg);
 unique_ptrint_default_deleteint_dtor(&ptr2,__in_chrg);
 unique_ptrint_default_deleteint_dtor(&ptr1,__in_chrg);
 if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_rtti @ 00102dc5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 bool bVar1;
 int iVar2;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 RTTIDerivedA *this_01;
 RTTIDerivedB *this_02;
 char *__s;
 size_t sVar3;
 int result;
 RTTIBase *obj1;
 RTTIBase *obj2;
 RTTIDerivedA *derivedA;
 RTTIDerivedB *derivedB;
 
 this = operator_new(8);
 (this->super_RTTIBase)._vptr_RTTIBase = (_funcint_varargs **)0x0;
 RTTIDerivedA_ctor(this);
 this_00 = operator_new(8);
 (this_00->super_RTTIBase)._vptr_RTTIBase = (_funcint_varargs **)0x0;
 RTTIDerivedB_ctor(this_00);
 result = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00102e46:
 result = 10;
 }
 else {
  bVar1 = std_type_info_operator_eq
 ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedA_typeinfo);
 if (bVar1) goto LAB_00102e46;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00102e77:
 result = result + 0x14;
 }
 else {
  bVar1 = std_type_info_operator_eq
 ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
 (type_info *)&RTTIDerivedB_typeinfo);
 if (bVar1) goto LAB_00102e77;
 }
 if (this == (RTTIDerivedA *)0x0) {
 this_01 = (RTTIDerivedA *)0x0;
 }
 else {
  this_01 = (RTTIDerivedA *)__dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (this_01 != (RTTIDerivedA *)0x0) {
 iVar2 = RTTIDerivedA_derivedA_data(this_01);
 result = result + iVar2;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 this_02 = (RTTIDerivedB *)0x0;
 }
 else {
  this_02 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (this_02 != (RTTIDerivedB *)0x0) {
 iVar2 = RTTIDerivedB_derivedB_data(this_02);
 result = result + iVar2;
 }
 if (this == (RTTIDerivedA *)0x0) {
 this = (RTTIDerivedA *)__cxa_bad_typeid();
 }
 else {
 __s = std_type_info_name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
 sVar3 = strlen(__s);
 result = result + (int)sVar3;
 if (this == (RTTIDerivedA *)0x0) goto LAB_00102f4e;
 }
 (*(this->super_RTTIBase)._vptr_RTTIBase[1])(this);
LAB_00102f4e:
 if (this_00 != (RTTIDerivedB *)0x0) {
 (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])(this_00);
 }
 return result;
}



/* Function: test_cpp_oo_features @ 00102f6f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 uint uVar1;
 
 puts(&DAT_00105040);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00105064,(unsigned long)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00105082,(unsigned long)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_0010509e,(unsigned long)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_001050ba,(unsigned long)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_001050d6,(unsigned long)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_001050f3,(unsigned long)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_0010510f,(unsigned long)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0010512b,(unsigned long)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00105147,(unsigned long)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00105163,(unsigned long)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00105180,(unsigned long)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0010519d,(unsigned long)uVar1);
 return;
}



/* Function: main @ 001030cd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_data_const_test_cpp_smart_ptr_lambda @ 001030e2 */

void __thiscall
__uniq_ptr_data_const_test_cpp_smart_ptr_lambda
 (void *this,
 pointer param_1,anon_struct_1_0_00000001_for__M_head_impl *param_2)

{
 anon_struct_1_0_00000001_for__M_head_impl *param_2_local;
 pointer param_1_local;
 
 __uniq_ptr_impl_const_test_cpp_smart_ptr_lambda
 (&((struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this)->super___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda,param_1,
 param_2);
 return;
}



/* Function: unique_ptr_lambda @ 00103110 */

void __thiscall
unique_ptr_lambda
 (void *this,pointer __p,
 deleter_type *__d)

{
 deleter_type *__d_local;
 pointer __p_local;
 
 __uniq_ptr_data_const_test_cpp_smart_ptr_lambda(&((struct unique_ptr_int_test_cpp_smart_ptr_lambda *)this)->_M_t,__p,__d);
 return;
}



/* Function: unique_ptr_lambda_destructor @ 0010313e */

void __thiscall
unique_ptr_lambda_destructor
 (void *this,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 int **__ptr;
 
 __t = _M_ptr_lambda
 ((struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter_lambda(this);
 ppiVar1 = std_moveint_ptr_ref(__t);
 std__Head_base_1_test_cpp_smart_ptr_lambda_true_anon_struct_1_0_00000001_for__M_head_impl_operator
 ((struct anon_struct_1_0_00000001_for__M_head_impl *)this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: unique_ptr_lambda_dereference @ 001031a2 */

type __thiscall
unique_ptr_lambda_dereference
 (void *this)

{
 pointer piVar1;
 
 piVar1 = get_lambda(this);
 return piVar1;
}



/* Function: __uniq_ptr_impl_const_test_cpp_smart_ptr_lambda @ 001031c4 */

void __thiscall
__uniq_ptr_impl_const_test_cpp_smart_ptr_lambda
 (void *this,pointer __p,
 anon_struct_1_0_00000001_for__M_head_impl *__d)

{
 anon_struct_1_0_00000001_for__M_head_impl *__a2;
 anon_struct_1_0_00000001_for__M_head_impl *__d_local;
 pointer __p_local;
 
 __p_local = __p;
 __a2 = forward_const_test_cpp_smart_ptr_lambda(__d);
 tuple_lambda(&((struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this)->_M_t,&__p_local,__a2);
 return;
}



/* Function: _M_ptr_lambda @ 00103202 */

pointer * __thiscall
_M_ptr_lambda
 (void *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = get_0_lambda(&((struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this_ptr)->_M_t);
 return ppiVar1;
}



/* Function: get_deleter_lambda @ 0010321c */

deleter_type * __thiscall
get_deleter_lambda
 (void *this_ptr)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = _M_deleter_lambda
 ((struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this_ptr);
 return paVar1;
}



/* Function: get_lambda @ 00103236 */

pointer __thiscall
get_lambda
 (void *this_ptr)

{
 pointer piVar1;
 
 piVar1 = _M_ptr_lambda_2
 ((struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda *)this_ptr);
 return piVar1;
}



/* Function: forward_const_test_cpp_smart_ptr_lambda @ 00103250 */

anon_struct_1_0_00000001_for__M_head_impl *
forward_const_test_cpp_smart_ptr_lambda(type *__t)

{
 type *__t_local;
 
 return __t;
}



/* Function: tuple_lambda @ 0010325e */

void __thiscall
tuple_lambda
 (void *this,int **__a1,
 anon_struct_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 anon_struct_1_0_00000001_for__M_head_impl *__a2_local;
 int **__a1_local;
 
 forward_const_test_cpp_smart_ptr_lambda(__a2);
 __head = std_forwardint_ptr_ref(__a1);
 return;
}



/* Function: get_0_lambda @ 001032ac */

__tuple_element_t *
get_0_lambda
 (void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0int_default_deleteint((_Tuple_impl_0_int_ptr_std_default_delete_int_ *)__t);
 return ppiVar1;
}



/* Function: _M_deleter_lambda @ 001032c6 */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
_M_deleter_lambda
 (void *this_ptr)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = std__get_helper_1_default_deleteint((_Tuple_impl_1_std_default_delete_int_ *)this_ptr);
 return p_Var1;
}



/* Function: _M_ptr_lambda_2 @ 001032e0 */

pointer __thiscall
_M_ptr_lambda_2
 (void *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std__get_helper_0int_default_deleteint((_Tuple_impl_0_int_ptr_std_default_delete_int_ *)this_ptr);
 return *ppiVar1;
}



/* Function: _Tuple_impl_lambda @ 001032fe */

void __thiscall
_Tuple_impl_lambda
 (void *this,int **__head)

{
 anon_struct_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 
 __head_00 = forward_const_test_cpp_smart_ptr_lambda((type *)0);
 __h = std_forwardint_ptr_ref(__head);
 return;
}



/* Function: __get_helper_0_lambda @ 00103353 */

int ** __get_helper_0_lambda
 (void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0int_default_deleteint__M_head(__t);
 return ppiVar1;
}



/* Function: get_1_lambda @ 0010336d */

__tuple_element_t_conflict *
get_1_lambda
 (void *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__get_helper_1_default_deleteint((_Tuple_impl_1_std_default_delete_int_ *)__t);
 return paVar1;
}



/* Function: get_0_lambda_2 @ 00103387 */

__tuple_element_t *
get_0_lambda_2
 (void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__get_helper_0int_default_deleteint((_Tuple_impl_0_int_ptr_std_default_delete_int_ *)__t);
 return ppiVar1;
}



/* Function: _Tuple_impl_1 @ 001033a2 */

void __thiscall
_Tuple_impl_1
 (void *this,
 anon_struct_1_0_00000001_for__M_head_impl *__head)

{
 anon_struct_1_0_00000001_for__M_head_impl *__head_local;
 
 return;
}



/* Function: _M_head_0 @ 001033c8 */

int ** _M_head_0
 (void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0int_false__M_head(__t);
 return ppiVar1;
}



/* Function: __get_helper_1 @ 001033e2 */

anon_struct_1_0_00000001_for__M_head_impl *
__get_helper_1
 (void *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__Tuple_impl_1_default_deleteint__M_head(__t);
 return paVar1;
}



/* Function: __get_helper_0_2 @ 001033fc */

int ** __get_helper_0_2
 (void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0int_default_deleteint__M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base_1 @ 00103416 */

void __thiscall
_Head_base_1
 (void *this,
 anon_struct_1_0_00000001_for__M_head_impl *__h)

{
 anon_struct_1_0_00000001_for__M_head_impl *__h_local;
 
 return;
}



/* Function: _M_head_1 @ 00103425 */

anon_struct_1_0_00000001_for__M_head_impl *
_M_head_1
 (void *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__Head_base_1_default_deleteint_true__M_head(__t);
 return paVar1;
}



/* Function: _M_head_0_2 @ 0010343f */

int ** _M_head_0_2
 (void *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0int_false__M_head(__t);
 return ppiVar1;
}



/* Function: _M_head_base @ 00103459 */

anon_struct_1_0_00000001_for__M_head_impl *
_M_head_base
 (void *__b)

{
 
 return (anon_struct_1_0_00000001_for__M_head_impl *)__b;
}



/* Function: __static_initialization_and_destruction_0 @ 00103467 */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
 int __priority_local;
 int __initialize_p_local;
 
 if ((__initialize_p == 1) && (__priority == 0xffff)) {
 std_ios_base::Init::Init(&std___ioinit);
 __cxa_atexit(std_ios_base::Init::~Init,&std___ioinit,&__dso_handle);
 }
 return;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 001034bd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 001034d6 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std_type_info_name(type_info *this)

{
 char *pcVar1;
 type_info *this_local;
 
 if (**(char **)((char *)this + 8) == '*') {
 pcVar1 = (char *)(*(long *)((char *)this + 8) + 1);
 }
 else {
 pcVar1 = *(char **)((char *)this + 8);
 }
 return pcVar1;
}



/* Function: operator== @ 0010350a */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std_type_info_operator_eq(type_info *this,type_info *__arg)

{
 bool bVar1;
 int iVar2;
 type_info *__arg_local;
 type_info *this_local;
 
 if (*(long *)((char *)this + 8) == *(long *)((char *)__arg + 8)) {
LAB_00103561:
 bVar1 = true;
 }
 else {
 if (**(char **)((char *)this + 8) != '*') {
 iVar2 = strcmp(*(char **)((char *)this + 8),*(char **)((char *)__arg + 8));
 if (iVar2 == 0) goto LAB_00103561;
 }
 bVar1 = false;
 }
 return bVar1;
}



/* Function: SimpleClass @ 00103570 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void SimpleClass_ctor(SimpleClass *this,int v,char *n)

{
 char *n_local;
 int v_local;
 SimpleClass *this_local;
 
 this->value = v;
 strncpy(this->name,n,0x1f);
 this->name[0x1f] = '\0';
 return;
}



/* Function: getValue @ 001035b8 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int SimpleClass_getValue(SimpleClass *this)

{
 SimpleClass *this_local;
 
 return this->value;
}



/* Function: setValue @ 001035cc */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void SimpleClass_setValue(SimpleClass *this,int v)

{
 int v_local;
 SimpleClass *this_local;
 
 this->value = v;
 return;
}



/* Function: compute @ 001035e8 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int SimpleClass_compute(SimpleClass *this,int x)

{
 int iVar1;
 size_t sVar2;
 int x_local;
 SimpleClass *this_local;
 
 iVar1 = this->value;
 sVar2 = strlen(this->name);
 return (int)sVar2 + iVar1 * x;
}



/* Function: getClassID @ 00103620 */

int SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103630 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void LifecycleClass_ctor(LifecycleClass *this,size_t s)

{
 int *piVar1;
 size_t s_local;
 LifecycleClass *this_local;
 size_t i;
 
 this->size = s;
 if (s < 0x1fffffffffffffff) {
 piVar1 = operator_new__(s << 2);
 this->data = piVar1;
 for (i = 0; i < s; i = i + 1) {
LAB_00103688:
 this->data[i] = (int)i * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00103688;
}



/* Function: ~LifecycleClass @ 001036d0 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this, int __in_chrg) */

void LifecycleClass_dtor(LifecycleClass *this,int __in_chrg)

{
 LifecycleClass *this_local;
 
 if (this->data != (int *)0x0) {
 operator_delete__(this->data);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: getData @ 0010370e */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int LifecycleClass_getData(LifecycleClass *this,size_t idx)

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



/* Function: getInstanceCount @ 00103749 */

int LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 0010375a */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 int x_local;
 Base *this_local;
 
 return x + 1;
}



/* Function: getName @ 00103772 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 Base *this_local;
 
 return "Base";
}



/* Function: ~Base @ 00103788 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_dtor(Base *this,int __in_chrg)

{
 Base *this_local;
 
 this->_vptr_Base = (_funcint_varargs **)&PTR_virtual_func_00108b50;
 return;
}



/* Function: ~Base @ 001037a6 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_dtor_deleting(Base *this,int __in_chrg)

{
 Base *this_local;
 
 ~Base(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: Base @ 001037d6 */

/* DWARF original prototype: void Base(Base * this) */

void Base_ctor(Base *this)

{
 Base *this_local;
 
 this->_vptr_Base = (_funcint_varargs **)&PTR_virtual_func_00108b50;
 return;
}



/* Function: Derived @ 001037f4 */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void Derived_ctor(Derived *this,int m)

{
 int m_local;
 Derived *this_local;
 
 Base_ctor(&this->super_Base);
 (this->super_Base)._vptr_Base = (_funcint_varargs **)&PTR_virtual_func_00108b20;
 this->multiplier = m;
 return;
}



/* Function: virtual_func @ 0010382e */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 int x_local;
 Derived *this_local;
 
 return this->multiplier * x;
}



/* Function: getName @ 0010384a */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 Derived *this_local;
 
 return "Derived";
}



/* Function: funcA @ 00103860 */

/* DWARF original prototype: int funcA(BaseA * this) */

int BaseA_funcA(BaseA *this)

{
 BaseA *this_local;
 
 return 10;
}



/* Function: ~BaseA @ 00103874 */

/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void BaseA_dtor(BaseA *this,int __in_chrg)

{
 BaseA *this_local;
 
 this->_vptr_BaseA = (_funcint_varargs **)&PTR_funcA_00108af8;
 return;
}



/* Function: ~BaseA @ 00103892 */

/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void BaseA_dtor_deleting(BaseA *this,int __in_chrg)

{
 BaseA *this_local;
 
 ~BaseA(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}



/* Function: funcB @ 001038c2 */

/* DWARF original prototype: int funcB(BaseB * this) */

int BaseB_funcB(BaseB *this)

{
 BaseB *this_local;
 
 return 0x14;
}



/* Function: ~BaseB @ 001038d6 */

/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void BaseB_dtor(BaseB *this,int __in_chrg)

{
 BaseB *this_local;
 
 this->_vptr_BaseB = (_funcint_varargs **)&PTR_funcB_00108ad0;
 return;
}



/* Function: ~BaseB @ 001038f4 */

/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void BaseB_dtor_deleting(BaseB *this,int __in_chrg)

{
 BaseB *this_local;
 
 ~BaseB(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}



/* Function: funcA @ 00103924 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 MultiDerived *this_local;
 
 return 0x1e;
}



/* Function: funcB @ 00103938 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 MultiDerived *this_local;
 
 return 0x28;
}



/* Function: funcB @ 0010394b */

/* non-virtual thunk to MultiDerived_funcB() */

void __thiscall MultiDerived_funcB(MultiDerived *this)

{
 funcB((MultiDerived *)&this[-1].super_BaseB);
 return;
}



/* Function: BaseA @ 00103956 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void BaseA_ctor(BaseA *this)

{
 BaseA *this_local;
 
 this->_vptr_BaseA = (_funcint_varargs **)&PTR_funcA_00108af8;
 return;
}



/* Function: BaseB @ 00103974 */

/* DWARF original prototype: void BaseB(BaseB * this) */

void BaseB_ctor(BaseB *this)

{
 BaseB *this_local;
 
 this->_vptr_BaseB = (_funcint_varargs **)&PTR_funcB_00108ad0;
 return;
}



/* Function: MultiDerived @ 00103992 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void MultiDerived_ctor(MultiDerived *this)

{
 MultiDerived *this_local;
 
 BaseA_ctor(&this->super_BaseA);
 BaseB_ctor(&this->super_BaseB);
 (this->super_BaseA)._vptr_BaseA = (_funcint_varargs **)&PTR_funcA_00108a78;
 (this->super_BaseB)._vptr_BaseB = (_funcint_varargs **)&PTR_funcB_00108aa8;
 return;
}



/* Function: func @ 001039de */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this)

{
 VirtualBase *this_local;
 
 return 100;
}



/* Function: ~VirtualBase @ 001039f2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_dtor(VirtualBase *this,int __in_chrg)

{
 VirtualBase *this_local;
 
 this->_vptr_VirtualBase = (_funcint_varargs **)&PTR_func_00108a50;
 return;
}



/* Function: ~VirtualBase @ 00103a10 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_dtor_deleting(VirtualBase *this,int __in_chrg)

{
 VirtualBase *this_local;
 
 ~VirtualBase(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}



/* Function: func @ 00103a40 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 MiddleA *this_local;
 
 return *(int *)((long)&this->dataA + (long)((_funcint_varargs **)this->_vptr_MiddleA)[-3]) + 0x96;
}



/* Function: func @ 00103a6e */

/* virtual thunk to MiddleA_func() */

void __thiscall MiddleA_func_thunk(MiddleA *this_ptr)

{
 func((MiddleA *)((long)&this_ptr->_vptr_MiddleA + (long)((_funcint_varargs **)this_ptr->_vptr_MiddleA)[-3]));
 return;
}



/* Function: func @ 00103a7c */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 MiddleB *this_local;
 
 return *(int *)((long)&this->dataB + (long)((_funcint_varargs **)this->_vptr_MiddleB)[-3]) + 200;
}



/* Function: func @ 00103aaa */

/* virtual thunk to MiddleB_func() */

void __thiscall MiddleB_func_thunk(MiddleB *this_ptr)

{
 func((MiddleB *)((long)&this_ptr->_vptr_MiddleB + (long)((_funcint_varargs **)this_ptr->_vptr_MiddleB)[-3]));
 return;
}



/* Function: func @ 00103ab8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 DiamondDerived *this_local;
 
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)((_funcint_varargs **)(this->super_MiddleA)._vptr_MiddleA)[-3]
 ) + 0xfa;
}



/* Function: func @ 00103ae6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived_func() */

void __thiscall DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 func((DiamondDerived *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA + (long)((_funcint_varargs **)(this_ptr->super_MiddleA)._vptr_MiddleA)[-3]))
 ;
 return;
}



/* Function: func @ 00103af3 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived_func() */

void __thiscall DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 func((DiamondDerived *)&this_ptr[-1].field_0x20);
 return;
}



/* Function: VirtualBase @ 00103afe */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void VirtualBase_ctor(VirtualBase *this)

{
 VirtualBase *this_local;
 
 this->_vptr_VirtualBase = (_funcint_varargs **)&PTR_func_00108a50;
 return;
}



/* Function: MiddleA @ 00103b1c */

/* DWARF original prototype: void MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void MiddleA_ctor(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined4 in_register_00000034;
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this->_vptr_MiddleA = *(_funcint_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
 *(undefined8 *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) =
 ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
 return;
}



/* Function: ~MiddleA @ 00103b60 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void MiddleA_dtor(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined4 in_register_00000034;
 void **__vtt_parm_local;
 MiddleA *this_local;
 
 this->_vptr_MiddleA = *(_funcint_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
 *(undefined8 *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) =
 ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
 return;
}



/* Function: MiddleB @ 00103ba4 */

/* DWARF original prototype: void MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void MiddleB_ctor(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined4 in_register_00000034;
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this->_vptr_MiddleB = *(_funcint_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
 *(undefined8 *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) =
 ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
 return;
}



/* Function: ~MiddleB @ 00103be8 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void MiddleB_dtor(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined4 in_register_00000034;
 void **__vtt_parm_local;
 MiddleB *this_local;
 
 this->_vptr_MiddleB = *(_funcint_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
 *(undefined8 *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) =
 ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
 return;
}



/* Function: DiamondDerived @ 00103c2c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_ctor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 DiamondDerived *this_local;
 
 VirtualBase_ctor((VirtualBase *)&this_ptr->field_0x20);
 MiddleA_ctor(&this_ptr->super_MiddleA,0x108940,&PTR_construction_vtable_24__00108940);
 MiddleB_ctor((MiddleB *)&(this_ptr->super_MiddleA).field_0x10,0x108950,
 &PTR_construction_vtable_24__00108950);
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_funcint_varargs **)0x1088b8;
 *(undefined8 *)&this_ptr->field_0x20 = 0x108920;
 *(undefined8 *)&(this_ptr->super_MiddleA).field_0x10 = 0x1088e8;
 return;
}



/* Function: Point @ 00103cae */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void Point_ctor(Point *this,int _x,int _y)

{
 int _y_local;
 int _x_local;
 Point *this_local;
 
 this->x = _x;
 this->y = _y;
 return;
}



/* Function: operator+ @ 00103cd6 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point Point_operator_add(Point *this,Point *other)

{
 long in_FS_OFFSET;
 Point *other_local;
 Point *this_local;
 Point local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 Point(&local_18,this->x + other->x,this->y + other->y);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_18;
}



/* Function: operator== @ 00103d40 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool Point_operator_eq(Point *this,Point *other)

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



/* Function: operator++ @ 00103d80 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * Point_operator_inc(Point *this)

{
 Point *this_local;
 
 this->x = this->x + 1;
 this->y = this->y + 1;
 return this;
}



/* Function: template_maxint @ 00103db2 */

int template_maxint(int a,int b)

{
 int b_local;
 int a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 00103dd2 */

double template_max_double(double a,double b)

{
 double b_local;
 double a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_swapint @ 00103e08 */

void template_swapint(int *a,int *b)

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



/* Function: Containerint @ 00103e3a */

/* DWARF original prototype: void Container(Container<int> * this) */

void Containerint_ctor(Containerint *this)

{
 Containerint *this_local;
 
 this->size = 0;
 return;
}



/* Function: pushint @ 00103e54 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Containerint_push(Containerint *this,int value)

{
 int iVar1;
 int value_local;
 Containerint *this_local;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: getint @ 00103e90 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Containerint_get(Containerint *this,int idx)

{
 int iVar1;
 int idx_local;
 Containerint *this_local;
 
 if ((idx < 0) || (this->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSizeint @ 00103ec8 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Containerint_getSize(Containerint *this)

{
 Containerint *this_local;
 
 return this->size;
}



/* Function: Container_double @ 00103ede */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_ctor(Container_double *this)

{
 Container_double *this_local;
 
 this->size = 0;
 return;
}



/* Function: push_double @ 00103ef8 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 double value_local;
 Container_double *this_local;
 
 if (this->size < 10) {
 iVar1 = this->size;
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get_double @ 00103f3a */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 int idx_local;
 Container_double *this_local;
 
 if ((idx < 0) || (this->size <= idx)) {
 dVar1 = 0.0;
 }
 else {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize_double @ 00103f7c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 Container_double *this_local;
 
 return this->size;
}



/* Function: __uniq_ptr_data @ 00103f92 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std_default_delete_int,_true,_true> * this,
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true> * param_1) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data<int,_std_default_delete_int,_true,_true> *this,
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true> *param_1)

{
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true> *param_1_local;
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true> *this_local;
 
 __uniq_ptr_impl<int,_std_default_delete_int_>::__uniq_ptr_impl
 (&this->super___uniq_ptr_impl<int,_std_default_delete_int_>,
 &param_1->super___uniq_ptr_impl<int,_std_default_delete_int_>);
 return;
}



/* Function: unique_ptr @ 00103fbc */

/* DWARF original prototype: void unique_ptr(unique_ptr<int,_std_default_delete_int_> * this,
 unique_ptr<int,_std_default_delete_int_> * param_1) */

void __thiscall
std_unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr<int,_std_default_delete_int_> *this,
 unique_ptr<int,_std_default_delete_int_> *param_1)

{
 unique_ptr<int,_std_default_delete_int_> *param_1_local;
 unique_ptr<int,_std_default_delete_int_> *this_local;
 
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true>::__uniq_ptr_data
 (&this->_M_t,&param_1->_M_t);
 return;
}



/* Function: getType @ 00103fe6 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int RTTIBase_getType(RTTIBase *this)

{
 RTTIBase *this_local;
 
 return 0;
}



/* Function: getType @ 00103ffa */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 return 1;
}



/* Function: derivedA_data @ 0010400e */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int RTTIDerivedA_derivedA_data(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 return 100;
}



/* Function: getType @ 00104022 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 return 2;
}



/* Function: derivedB_data @ 00104036 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int RTTIDerivedB_derivedB_data(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 return 200;
}



/* Function: RTTIBase @ 0010404a */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void RTTIBase_ctor(RTTIBase *this)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_funcint_varargs **)&PTR__RTTIBase_00108888;
 return;
}



/* Function: ~RTTIBase @ 00104068 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void RTTIBase_dtor(RTTIBase *this,int __in_chrg)

{
 RTTIBase *this_local;
 
 this->_vptr_RTTIBase = (_funcint_varargs **)&PTR__RTTIBase_00108888;
 return;
}



/* Function: ~RTTIBase @ 00104086 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void RTTIBase_dtor_deleting(RTTIBase *this,int __in_chrg)

{
 RTTIBase *this_local;
 
 ~RTTIBase(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: RTTIDerivedA @ 001040b6 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_ctor(RTTIDerivedA *this)

{
 RTTIDerivedA *this_local;
 
 RTTIBase_ctor(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_funcint_varargs **)&PTR__RTTIDerivedA_00108860;
 return;
}



/* Function: RTTIDerivedB @ 001040e4 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_ctor(RTTIDerivedB *this)

{
 RTTIDerivedB *this_local;
 
 RTTIBase_ctor(&this->super_RTTIBase);
 (this->super_RTTIBase)._vptr_RTTIBase = (_funcint_varargs **)&PTR__RTTIDerivedB_00108838;
 return;
}



/* Function: __uniq_ptr_data @ 00104112 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std_default_delete_int,_true,_true> * this, pointer
 param_1) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data_2
 (__uniq_ptr_data<int,_std_default_delete_int,_true,_true> *this,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true> *this_local;
 
 __uniq_ptr_impl<int,_std_default_delete_int_>::__uniq_ptr_impl
 (&this->super___uniq_ptr_impl<int,_std_default_delete_int_>,param_1);
 return;
}



/* Function: unique_ptr<> @ 0010413c */

/* DWARF original prototype: void unique_ptr<>(unique_ptr<int,_std_default_delete_int_> * this,
 pointer __p) */

void __thiscall
std_unique_ptr_int_std_default_delete_int_unique_ptr_2
 (unique_ptr<int,_std_default_delete_int_> *this,pointer __p)

{
 pointer __p_local;
 unique_ptr<int,_std_default_delete_int_> *this_local;
 
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true>::__uniq_ptr_data(&this->_M_t,__p);
 return;
}



/* Function: ~unique_ptr @ 00104166 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std_default_delete_int_> * this, int
 __in_chrg) */

void __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr
 (unique_ptr<int,_std_default_delete_int_> *this,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 unique_ptr<int,_std_default_delete_int_> *this_local;
 int **__ptr;
 
 __t = __uniq_ptr_impl<int,_std_default_delete_int_>::_M_ptr
 ((__uniq_ptr_impl<int,_std_default_delete_int_> *)this);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter(this);
 ppiVar1 = move<int*&>(__t);
 default_delete<int>::operator()(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: operator* @ 001041ce */

/* DWARF original prototype: type operator*(unique_ptr<int,_std_default_delete_int_> * this) */

type __thiscall
std_unique_ptr_int_std_default_delete_int_operator_deref
 (unique_ptr<int,_std_default_delete_int_> *this)

{
 pointer piVar1;
 unique_ptr<int,_std_default_delete_int_> *this_local;
 
 piVar1 = std_unique_ptr_int_std_default_delete_int_get(this);
 return piVar1;
}



/* Function: move<std_unique_ptr<int>&> @ 001041f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

unique_ptr<int,_std_default_delete_int_> * std_move_unique_ptrint_ref(unique_ptr<int,_std_default_delete_int_> *__t)

{
 unique_ptr<int,_std_default_delete_int_> *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00104206 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_0_int_ptr_std_default_delete_int_ *
 this, _Tuple_impl_0_int_ptr_std_default_delete_int_ * param_1) */

void __thiscall
std__Tuple_impl_0_int_ptr_std_default_delete_int__Tuple_impl
 (_Tuple_impl_0_int_ptr_std_default_delete_int_ *this,
 _Tuple_impl_0_int_ptr_std_default_delete_int_ *param_1)

{
 _Tuple_impl_0_int_ptr_std_default_delete_int_ *param_1_local;
 _Tuple_impl_0_int_ptr_std_default_delete_int_ *this_local;
 
 std__Tuple_impl_1_std_default_delete_int__Tuple_impl
 (&this->super__Tuple_impl_1_std_default_delete_int_,
 &param_1->super__Tuple_impl_1_std_default_delete_int_);
 *this = *param_1;
 return;
}



/* Function: tuple @ 0010423e */

/* DWARF original prototype: void tuple(tuple_int_ptr_std_default_delete_int_ * this,
 tuple_int_ptr_std_default_delete_int_ * param_1) */

void __thiscall
std_tuple_int_ptr_std_default_delete_int_tuple
 (tuple_int_ptr_std_default_delete_int_ *this,
 tuple_int_ptr_std_default_delete_int_ *param_1)

{
 tuple_int_ptr_std_default_delete_int_ *param_1_local;
 tuple_int_ptr_std_default_delete_int_ *this_local;
 
 std__Tuple_impl_0_int_ptr_std_default_delete_int__Tuple_impl
 (&this->super__Tuple_impl_0_int_ptr_std_default_delete_int_,
 &param_1->super__Tuple_impl_0_int_ptr_std_default_delete_int_);
 return;
}



/* Function: __uniq_ptr_impl @ 00104268 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl_int_std_default_delete_int_ *
 this, __uniq_ptr_impl_int_std_default_delete_int_ * __u) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int_ *this,
 __uniq_ptr_impl_int_std_default_delete_int_ *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 __uniq_ptr_impl_int_std_default_delete_int_ *__u_local;
 __uniq_ptr_impl_int_std_default_delete_int_ *this_local;
 
 ptVar1 = std_move_tupleint_default_deleteint_ref(&__u->_M_t);
 std_tuple_int_ptr_std_default_delete_int_tuple(&this->_M_t,ptVar1);
 ppiVar2 = std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(__u);
 *ppiVar2 = (pointer)0x0;
 return;
}



/* Function: __uniq_ptr_data @ 001042b2 */

/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data_int_std_default_delete_int_array_true_true * this, pointer
 param_1) */

void __thiscall
std___uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_array_true_true *this,pointer param_1)

{
 pointer param_1_local;
 __uniq_ptr_data_int_std_default_delete_int_array_true_true *this_local;
 
 std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int_std_default_delete_int_array_,param_1);
 return;
}



/* Function: unique_ptr @ 001042dc */

/* DWARF original prototype: void unique_ptr(unique_ptr_int_array_default_delete_int_array_
 * this, int * __p) */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr
 (unique_ptr_int_array_default_delete_int_array_ *this,int *__p)

{
 int *__p_local;
 unique_ptr_int_array_default_delete_int_array_ *this_local;
 
 std___uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_data(&this->_M_t,__p);
 return;
}



/* Function: unique_ptr_destructor @ 00104306 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr_int_array_default_delete_int_array_ *
 this, int __in_chrg) */

void __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr_dtor
 (unique_ptr_int_array_default_delete_int_array_ *this,int __in_chrg)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 unique_ptr_int_array_default_delete_int_array_ *this_local;
 int **__ptr;
 
 ppiVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_array_ *)this);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = std_unique_ptr_int_array_std_default_delete_int_array_get_deleter(this);
 std_default_delete_int_array_operator_call_int((default_delete_int_array_ *)this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: operator[] @ 00104362 */

/* DWARF original prototype: type operator[](unique_ptr_int_array_default_delete_int_array_ *
 this, size_t __i) */

type __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_operator_index
 (unique_ptr_int_array_default_delete_int_array_ *this,size_t __i)

{
 pointer piVar1;
 size_t __i_local;
 unique_ptr_int_array_default_delete_int_array_ *this_local;
 
 piVar1 = std_unique_ptr_int_array_std_default_delete_int_array_get(this);
 return (type)((int *)(char *)piVar1 + __i);
}



/* Function: __uniq_ptr_impl @ 0010439a */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl_int_std_default_delete_int_ *
 this, pointer __p) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl_2
 (__uniq_ptr_impl_int_std_default_delete_int_ *this,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_std_default_delete_int_ *this_local;
 
 std_tuple_int_ptr_std_default_delete_int_tuple_2(&this->_M_t);
 ppiVar1 = std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: _M_ptr @ 001043d6 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl_int_std_default_delete_int_ *
 this) */

pointer * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int_ *this)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_ *this_local;
 
 ppiVar1 = std_get_0int_default_deleteint((tuple_int_ptr_std_default_delete_int_ *)&this->_M_t);
 return (pointer *)ppiVar1;
}



/* Function: get_deleter @ 001043f4 */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr_int_default_delete_int_ *
 this) */

deleter_type * __thiscall
std_unique_ptr_int_std_default_delete_int_get_deleter
 (unique_ptr_int_default_delete_int_ *this)

{
 default_delete_int *pdVar1;
 unique_ptr_int_default_delete_int_ *this_local;
 
 pdVar1 = std___uniq_ptr_impl_int_std_default_delete_int__M_deleter
 ((__uniq_ptr_impl_int_std_default_delete_int_ *)this);
 return pdVar1;
}



/* Function: move<int*&> @ 00104412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std_moveint_ptr_ref(int **__t)

{
 int **__t_local;
 
 return __t;
}



/* Function: operator() @ 00104424 */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void std_default_delete_int_operator_call(default_delete_int *this_ptr,int *__ptr)

{
 int *__ptr_local;
 default_delete_int *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr,4);
 }
 return;
}



/* Function: get @ 00104452 */

/* DWARF original prototype: pointer get(unique_ptr_int_default_delete_int_ * this) */

pointer __thiscall
std_unique_ptr_int_std_default_delete_int_get
 (unique_ptr_int_default_delete_int_ *this)

{
 pointer piVar1;
 unique_ptr_int_default_delete_int_ *this_local;
 
 piVar1 = std___uniq_ptr_impl_int_std_default_delete_int__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_ *)this);
 return piVar1;
}



/* Function: move<std_tuple_int_ptr_std_default_delete_int&> @ 00104470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std_tuple<int*, std_default_delete_int >&> */

tuple_int_ptr_std_default_delete_int_ * std_move_tupleint_default_deleteint_ref
 (tuple_int_ptr_std_default_delete_int_ *__t)

{
 tuple_int_ptr_std_default_delete_int_ *__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00104482 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_1_std_default_delete_int_ * this,
 _Tuple_impl_1_std_default_delete_int_ * __in) */

void __thiscall
std__Tuple_impl_1_std_default_delete_int__Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_ *this,
 _Tuple_impl_1_std_default_delete_int_ *__in)

{
 _Tuple_impl_1_std_default_delete_int_ *__in_local;
 _Tuple_impl_1_std_default_delete_int_ *this_local;
 
 return;
}



/* Function: __uniq_ptr_impl @ 00104496 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl_int_std_default_delete_int_array_
 * this, pointer __p) */

void __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int_array_ *this,pointer __p)

{
 pointer *ppiVar1;
 pointer __p_local;
 __uniq_ptr_impl_int_std_default_delete_int_array_ *this_local;
 
 std_tuple_int_ptr_std_default_delete_int_array_tuple_2(&this->_M_t);
 ppiVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(this);
 *ppiVar1 = __p;
 return;
}



/* Function: _M_ptr @ 001044d2 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl_int_std_default_delete_int_array_ *
 this) */

pointer * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 (__uniq_ptr_impl_int_std_default_delete_int_array_ *this)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_array_ *this_local;
 
 ppiVar1 = std_get_0int_default_deleteint_array((tuple_int_ptr_std_default_delete_int_array_ *)&this->_M_t);
 return (pointer *)ppiVar1;
}



/* Function: get_deleter @ 001044f0 */

/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr_int_array_default_delete_int_array_ * this) */

deleter_type * __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_get_deleter
 (unique_ptr_int_array_default_delete_int_array_ *this)

{
 default_delete_int_array_ *pdVar1;
 unique_ptr_int_array_default_delete_int_array_ *this_local;
 
 pdVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array__M_deleter
 ((__uniq_ptr_impl_int_std_default_delete_int_array_ *)this);
 return pdVar1;
}



/* Function: operator()<int> @ 0010450e */

/* DWARF original prototype: void operator()<int>(default_delete<int_[]> * this, int * __ptr) */

void
std_default_delete_int_array_operator_call_int(default_delete_int_array_ *this_ptr,int *__ptr)

{
 int *__ptr_local;
 default_delete_int_array_ *this_local;
 
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: get @ 00104538 */

/* DWARF original prototype: pointer get(unique_ptr_int_array_default_delete_int_array_ * this) */

pointer __thiscall
std_unique_ptr_int_array_std_default_delete_int_array_get
 (unique_ptr_int_array_default_delete_int_array_ *this)

{
 pointer piVar1;
 unique_ptr_int_array_default_delete_int_array_ *this_local;
 
 piVar1 = std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl_int_std_default_delete_int_array_ *)this);
 return piVar1;
}



/* Function: tuple @ 00104556 */

/* DWARF original prototype: void tuple(tuple_int_ptr_std_default_delete_int_ * this) */

void __thiscall
std_tuple_int_ptr_std_default_delete_int_tuple_2(tuple_int_ptr_std_default_delete_int_ *this)

{
 tuple_int_ptr_std_default_delete_int_ *this_local;
 
 std__Tuple_impl_0_int_ptr_std_default_delete_int__Tuple_impl_2
 (&this->super__Tuple_impl_0_int_ptr_std_default_delete_int_);
 return;
}



/* Function: get_0_int_ptr_std_default_delete_int @ 00104575 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std_default_delete_int > */

__tuple_element_t *
std_get_0int_default_deleteint(tuple_int_ptr_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_ *__t_local;
 
 ppiVar1 = std__get_helper_0int_default_deleteint
 (&__t->super__Tuple_impl_0_int_ptr_std_default_delete_int_);
 return ppiVar1;
}



/* Function: _M_deleter @ 00104594 */

/* DWARF original prototype: default_delete_int *
 _M_deleter(__uniq_ptr_impl_int_std_default_delete_int_ * this) */

default_delete_int * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int_ *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl_int_std_default_delete_int_ *this_local;
 
 p_Var1 = std_get_1int_default_deleteint((tuple_int_ptr_std_default_delete_int_ *)&this->_M_t);
 return (default_delete_int *)p_Var1;
}



/* Function: _M_ptr @ 001045b2 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl_int_std_default_delete_int_ * this)
 */

pointer __thiscall
std___uniq_ptr_impl_int_std_default_delete_int__M_ptr_2
 (__uniq_ptr_impl_int_std_default_delete_int_ *this)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_ *this_local;
 
 ppiVar1 = std_get_0int_default_deleteint((tuple_int_ptr_std_default_delete_int_ *)&this->_M_t);
 return (pointer)ppiVar1;
}



/* Function: tuple @ 001045d4 */

/* DWARF original prototype: void tuple(tuple_int_ptr_std_default_delete_int_array_ * this) */

void __thiscall
std_tuple_int_ptr_std_default_delete_int_array_tuple_2
 (tuple_int_ptr_std_default_delete_int_array_ *this)

{
 tuple_int_ptr_std_default_delete_int_array_ *this_local;
 
 std__Tuple_impl_0_int_ptr_std_default_delete_int_array__Tuple_impl
 (&this->super__Tuple_impl_0_int_ptr_std_default_delete_int_array_);
 return;
}



/* Function: get_0_int_ptr_std_default_delete_int_array @ 001045f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std_default_delete<int []> > */

__tuple_element_t *
std_get_0int_default_deleteint_array(tuple_int_ptr_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array_ *__t_local;
 
 ppiVar1 = std__get_helper_0int_default_deleteint_array
 (&__t->super__Tuple_impl_0_int_ptr_std_default_delete_int_array_);
 return ppiVar1;
}



/* Function: _M_deleter @ 00104612 */

/* DWARF original prototype: default_delete_int_array_ *
 _M_deleter(__uniq_ptr_impl_int_std_default_delete_int_array_ * this) */

default_delete_int_array_ * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array__M_deleter
 (__uniq_ptr_impl_int_std_default_delete_int_array_ *this)

{
 __tuple_element_t_conflict *p_Var1;
 __uniq_ptr_impl_int_std_default_delete_int_array_ *this_local;
 
 p_Var1 = std_get_1int_default_deleteint_array((tuple_int_ptr_std_default_delete_int_array_ *)&this->_M_t);
 return (default_delete_int_array_ *)p_Var1;
}



/* Function: _M_ptr @ 00104630 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl_int_std_default_delete_int_array_ *
 this) */

pointer __thiscall
std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr_2
 (__uniq_ptr_impl_int_std_default_delete_int_array_ *this)

{
 int **ppiVar1;
 __uniq_ptr_impl_int_std_default_delete_int_array_ *this_local;
 
 ppiVar1 = std_get_0int_default_deleteint_array((tuple_int_ptr_std_default_delete_int_array_ *)&this->_M_t);
 return (pointer)ppiVar1;
}



/* Function: _Tuple_impl @ 00104652 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_0_int_ptr_std_default_delete_int_ *
 this) */

void __thiscall
std__Tuple_impl_0_int_ptr_std_default_delete_int__Tuple_impl_2
 (_Tuple_impl_0_int_ptr_std_default_delete_int_ *this)

{
 _Tuple_impl_0_int_ptr_std_default_delete_int_ *this_local;
 
 std__Tuple_impl_1_std_default_delete_int__Tuple_impl_2
 (&this->super__Tuple_impl_1_std_default_delete_int_);
 std__Head_base_0_int_ptr_false__Head_base_2((_Head_base_0_int_ptr_false *)this);
 return;
}



/* Function: __get_helper @ 0010467d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std_default_delete_int > */

int ** std__get_helper_0int_default_deleteint
 (_Tuple_impl_0_int_ptr_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_ptr_std_default_delete_int_ *__t_local;
 
 ppiVar1 = std__Tuple_impl_0int_default_deleteint__M_head(__t);
 return ppiVar1;
}



/* Function: get_1_int_ptr_std_default_delete_int @ 0010469b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std_default_delete_int > */

__tuple_element_t_conflict *
std_get_1int_default_deleteint(tuple_int_ptr_std_default_delete_int_ *__t)

{
 default_delete_int *pdVar1;
 tuple_int_ptr_std_default_delete_int_ *__t_local;
 
 pdVar1 = std__get_helper_1_default_deleteint
 ((_Tuple_impl_1_std_default_delete_int_ *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get_0_int_ptr_std_default_delete_int_2 @ 001046b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std_default_delete_int > */

__tuple_element_t *
std_get_0int_default_deleteint_2(tuple_int_ptr_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_ *__t_local;
 
 ppiVar1 = std__get_helper_0int_default_deleteint
 (&__t->super__Tuple_impl_0_int_ptr_std_default_delete_int_);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 001046d8 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_0_int_ptr_std_default_delete_int_array_ *
 this) */

void __thiscall
std__Tuple_impl_0_int_ptr_std_default_delete_int_array__Tuple_impl
 (_Tuple_impl_0_int_ptr_std_default_delete_int_array_ *this)

{
 _Tuple_impl_0_int_ptr_std_default_delete_int_array_ *this_local;
 
 std__Tuple_impl_1_std_default_delete_int_array__Tuple_impl
 (&this->super__Tuple_impl_1_std_default_delete_int_array_);
 std__Head_base_0_int_ptr_false__Head_base_2((_Head_base_0_int_ptr_false *)this);
 return;
}



/* Function: __get_helper @ 00104703 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std_default_delete<int []> > */

int ** std__get_helper_0int_default_deleteint_array
 (_Tuple_impl_0_int_ptr_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 _Tuple_impl_0_int_ptr_std_default_delete_int_array_ *__t_local;
 
 ppiVar1 = std__Tuple_impl_0int_default_deleteint_array__M_head(__t);
 return ppiVar1;
}



/* Function: get_1_int_ptr_std_default_delete_int_array @ 00104721 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std_default_delete<int []> > */

__tuple_element_t_conflict *
std_get_1int_default_deleteint_array(tuple_int_ptr_std_default_delete_int_array_ *__t)

{
 default_delete_int_array_ *pdVar1;
 tuple_int_ptr_std_default_delete_int_array_ *__t_local;
 
 pdVar1 = std__get_helper_1_default_deleteint_array
 ((_Tuple_impl_1_std_default_delete_int_array_ *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get_0_int_ptr_std_default_delete_int_array_2 @ 0010473f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std_default_delete<int []> > */

__tuple_element_t *
std_get_0int_default_deleteint_array_2(tuple_int_ptr_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 tuple_int_ptr_std_default_delete_int_array_ *__t_local;
 
 ppiVar1 = std__get_helper_0int_default_deleteint_array
 (&__t->super__Tuple_impl_0_int_ptr_std_default_delete_int_array_);
 return ppiVar1;
}



/* Function: forward<int*&> @ 0010475d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std_forwardint_ptr_ref(int **__t)

{
 int **__t_local;
 
 return __t;
}



/* Function: _Tuple_impl @ 00104770 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_1_std_default_delete_int_ * this) */

void __thiscall
std__Tuple_impl_1_std_default_delete_int__Tuple_impl_2
 (_Tuple_impl_1_std_default_delete_int_ *this)

{
 _Tuple_impl_1_std_default_delete_int_ *this_local;
 
 std__Head_base_1_std_default_delete_int_true__Head_base_2
 (&this->super__Head_base_1_std_default_delete_int_true);
 return;
}



/* Function: _Head_base @ 00104790 */

/* DWARF original prototype: void _Head_base(_Head_base<0,int*,_false> * this) */

void __thiscall std__Head_base_0_int_ptr_false__Head_base_2(_Head_base_0_int_ptr_false *this)

{
 _Head_base_0_int_ptr_false *this_local;
 
 this->_M_head_impl = (int *)0x0;
 return;
}



/* Function: _M_head @ 001047aa */

int ** std__Tuple_impl_0int_default_deleteint__M_head
 (_Tuple_impl_0_int_ptr_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_ptr_false__M_head((_Head_base_0_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper @ 001047c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std_default_delete_int > */

default_delete_int *
std__get_helper_1_default_deleteint(_Tuple_impl_1_std_default_delete_int_ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__Tuple_impl_1_default_deleteint__M_head(__t);
 return pdVar1;
}



/* Function: __get_helper @ 001047e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std_default_delete_int > */

int ** std__get_helper_0int_default_deleteint
 (_Tuple_impl_0_int_ptr_std_default_delete_int_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0_int_ptr_std_default_delete_int___M_head(__t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00104804 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl_1_std_default_delete_int_array_ * this)
 */

void __thiscall
std__Tuple_impl_1_std_default_delete_int_array__Tuple_impl
 (_Tuple_impl_1_std_default_delete_int_array_ *this)

{
 _Tuple_impl_1_std_default_delete_int_array_ *this_local;
 
 std__Head_base_1_std_default_delete_int_array_true__Head_base_2
 (&this->super__Head_base_1_std_default_delete_int_array_true);
 return;
}



/* Function: _M_head @ 00104823 */

int ** std__Tuple_impl_0int_default_deleteint_array__M_head
 (_Tuple_impl_0_int_ptr_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_ptr_false__M_head((_Head_base_0_int_ptr_false *)__t);
 return ppiVar1;
}



/* Function: __get_helper @ 00104841 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std_default_delete<int []> > */

default_delete_int_array_ *
std__get_helper_1_default_deleteint_array
 (_Tuple_impl_1_std_default_delete_int_array_ *__t)

{
 default_delete_int_array_ *pdVar1;
 
 pdVar1 = std__Tuple_impl_1_default_deleteint_array__M_head(__t);
 return pdVar1;
}



/* Function: __get_helper @ 0010485f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std_default_delete<int []> > */

int ** std__get_helper_0int_default_deleteint_array
 (_Tuple_impl_0_int_ptr_std_default_delete_int_array_ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0_int_ptr_std_default_delete_int_array___M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base @ 0010487e */

/* DWARF original prototype: void _Head_base(_Head_base_0_int_ptr_false * this, int * * __h)
 */

void __thiscall
std__Head_base_0_int_ptr_false__Head_base_3(_Head_base_0_int_ptr_false *this,int **__h)

{
 int **ppiVar1;
 int **__h_local;
 _Head_base_0_int_ptr_false *this_local;
 
 ppiVar1 = std_forwardint_ptr_ref((type *)__h);
 this->_M_head_impl = *ppiVar1;
 return;
}



/* Function: _Head_base @ 001048ac */

/* DWARF original prototype: void _Head_base(_Head_base_1_std_default_delete_int_true * this)
 */

void __thiscall
std__Head_base_1_std_default_delete_int_true__Head_base_2
 (_Head_base_1_std_default_delete_int_true *this)

{
 _Head_base_1_std_default_delete_int_true *this_local;
 
 return;
}



/* Function: _M_head @ 001048bb */

int ** __thiscall std__Head_base_0_int_ptr_false__M_head(_Head_base_0_int_ptr_false *this_ptr)

{
 _Head_base_0_int_ptr_false *this_local;
 
 return &this_ptr->_M_head_impl;
}

/* Alias for std__Head_base_0int_false__M_head */
int ** __thiscall std__Head_base_0int_false__M_head(_Head_base_0_int_ptr_false *this_ptr)
{
 return std__Head_base_0_int_ptr_false__M_head(this_ptr);
}



/* Function: _M_head @ 001048cd */

default_delete_int * __thiscall
std__Tuple_impl_1_default_deleteint__M_head
 (_Tuple_impl_1_std_default_delete_int_ *this_ptr)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__Head_base_1_default_deleteint_true__M_head
 (&this_ptr->super__Head_base_1_std_default_delete_int_true);
 return pdVar1;
}



/* Function: _M_head @ 001048eb */

int ** __thiscall std__Tuple_impl_0_int_ptr_std_default_delete_int___M_head
 (_Tuple_impl_0_int_ptr_std_default_delete_int_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_ptr_false__M_head((_Head_base_0_int_ptr_false *)this_ptr);
 return ppiVar1;
}



/* Function: _Head_base @ 0010490a */

/* DWARF original prototype: void _Head_base(_Head_base_1_std_default_delete_int_array_true *
 this) */

void __thiscall
std__Head_base_1_std_default_delete_int_array_true__Head_base_2
 (_Head_base_1_std_default_delete_int_array_true *this)

{
 _Head_base_1_std_default_delete_int_array_true *this_local;
 
 return;
}



/* Function: _M_head @ 00104919 */

default_delete_int_array_ * __thiscall
std__Tuple_impl_1_default_deleteint_array__M_head
 (_Tuple_impl_1_std_default_delete_int_array_ *this_ptr)

{
 default_delete_int_array_ *pdVar1;
 
 pdVar1 = std__Head_base_1_default_deleteint_array_true__M_head
 (&this_ptr->super__Head_base_1_std_default_delete_int_array_true);
 return pdVar1;
}



/* Function: _M_head @ 00104937 */

int ** __thiscall std__Tuple_impl_0_int_ptr_std_default_delete_int_array___M_head
 (_Tuple_impl_0_int_ptr_std_default_delete_int_array_ *this_ptr)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0_int_ptr_false__M_head((_Head_base_0_int_ptr_false *)this_ptr);
 return ppiVar1;
}



/* Function: _M_head @ 00104955 */

default_delete_int * __thiscall
std__Head_base_1_default_deleteint_true__M_head
 (_Head_base_1_std_default_delete_int_true *this_ptr)

{
 _Head_base_1_std_default_delete_int_true *this_local;
 
 return &this_ptr->_M_head_impl;
}

/* Function: _M_head @ 00104967 */

int ** __thiscall std__Head_base_0_int_ptr_false__M_head_2(_Head_base_0_int_ptr_false *this_ptr)

{
 _Head_base_0_int_ptr_false *this_local;
 
 return &this_ptr->_M_head_impl;
}

/* Function: _M_head @ 00104979 */

default_delete_int * __thiscall
std__Head_base_1_default_deleteint_true__M_head_2
 (_Head_base_1_std_default_delete_int_true *this_ptr)

{
 _Head_base_1_std_default_delete_int_true *this_local;
 
 return &this_ptr->_M_head_impl;
}

/* Function: _M_head @ 0010498c */

default_delete_int_array_ * __thiscall
std__Head_base_1_default_deleteint_array_true__M_head_2
 (_Head_base_1_std_default_delete_int_array_true *this_ptr)

{
 _Head_base_1_std_default_delete_int_array_true *this_local;
 
 return &this_ptr->_M_head_impl;
}

/* Function: _M_head @ 001049a0 */

default_delete_int_array_ * __thiscall
std__Head_base_1_default_deleteint_array_true__M_head
 (_Head_base_1_std_default_delete_int_array_true *this_ptr)

{
 _Head_base_1_std_default_delete_int_array_true *this_local;
 
 return &this_ptr->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 0010498c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_dtor(RTTIDerivedB *this,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 (this->super_RTTIBase)._vptr_RTTIBase = (_funcint_varargs **)&PTR__RTTIDerivedB_00108838;
 RTTIBase_dtor(&this->super_RTTIBase,__in_chrg);
 return;
}



/* Function: ~RTTIDerivedB @ 001049ba */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_dtor_deleting(RTTIDerivedB *this,int __in_chrg)

{
 RTTIDerivedB *this_local;
 
 ~RTTIDerivedB(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 001049ea */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_dtor(RTTIDerivedA *this,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 (this->super_RTTIBase)._vptr_RTTIBase = (_funcint_varargs **)&PTR__RTTIDerivedA_00108860;
 RTTIBase_dtor(&this->super_RTTIBase,__in_chrg);
 return;
}



/* Function: ~RTTIDerivedA @ 00104a18 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_dtor_deleting(RTTIDerivedA *this,int __in_chrg)

{
 RTTIDerivedA *this_local;
 
 ~RTTIDerivedA(this,__in_chrg);
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00104a48 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_dtor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 int __in_chrg_00;
 DiamondDerived *this_local;
 
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_funcint_varargs **)0x1088b8;
 *(undefined8 *)&this_ptr->field_0x20 = 0x108920;
 *(undefined8 *)&(this_ptr->super_MiddleA).field_0x10 = 0x1088e8;
 MiddleB_dtor((MiddleB *)&(this_ptr->super_MiddleA).field_0x10,0x108950,
 &PTR_construction_vtable_24__00108950);
 __in_chrg_00 = 0x108940;
 MiddleA_dtor(&this_ptr->super_MiddleA,0x108940,&PTR_construction_vtable_24__00108940);
 VirtualBase_dtor((VirtualBase *)&this_ptr->field_0x20,__in_chrg_00);
 return;
}



/* Function: ~DiamondDerived_thunk1 @ 00104aca */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived_dtor() */

void DiamondDerived_dtor_thunk1(DiamondDerived *this_ptr)
{
 void **in_RDX;
 int in_ESI;
 
 DiamondDerived_dtor((DiamondDerived *)&this_ptr[-1].field_0x20,in_ESI,in_RDX);
 return;
}



/* Function: ~DiamondDerived_thunk2 @ 00104ad7 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived_dtor() */

void DiamondDerived_dtor_thunk2(DiamondDerived *this_ptr)

{
 void **in_RDX;
 int in_ESI;
 
 DiamondDerived_dtor((DiamondDerived *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]),in_ESI,in_RDX);
 return;
}



/* Function: ~DiamondDerived_deleting @ 00104ae8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_dtor_deleting(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 DiamondDerived *this_local;
 
 DiamondDerived_dtor(this_ptr,__in_chrg,__vtt_parm);
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived_thunk3 @ 00104b17 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived_dtor() */

void DiamondDerived_dtor_thunk3(DiamondDerived *this_ptr)

{
 void **in_RDX;
 int in_ESI;
 
 DiamondDerived_dtor((DiamondDerived *)&this_ptr[-1].field_0x20,in_ESI,in_RDX);
 return;
}



/* Function: ~DiamondDerived_thunk4 @ 00104b21 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived_dtor() */

void DiamondDerived_dtor_thunk4(DiamondDerived *this_ptr)

{
 void **in_RDX;
 int in_ESI;
 
 DiamondDerived_dtor((DiamondDerived *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]),in_ESI,in_RDX);
 return;
}



/* Function: ~MultiDerived @ 00104b2e */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_dtor(MultiDerived *this,int __in_chrg)

{
 MultiDerived *this_local;
 
 (this->super_BaseA)._vptr_BaseA = (_funcint_varargs **)&PTR_funcA_00108a78;
 (this->super_BaseB)._vptr_BaseB = (_funcint_varargs **)&PTR_funcB_00108aa8;
 BaseB_dtor(&this->super_BaseB,__in_chrg);
 BaseA_dtor(&this->super_BaseA,__in_chrg);
 return;
}



/* Function: ~MultiDerived @ 00104b7a */

/* non-virtual thunk to MultiDerived_dtor() */

void MultiDerived_dtor_thunk1(MultiDerived *this_ptr)

{
 int in_ESI;
 
 MultiDerived_dtor((MultiDerived *)&this_ptr[-1].super_BaseB,in_ESI);
 return;
}



/* Function: ~MultiDerived @ 00104b84 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_dtor_deleting(MultiDerived *this_ptr,int __in_chrg)

{
 MultiDerived *this_local;
 
 MultiDerived_dtor(this_ptr,__in_chrg);
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00104bb3 */

/* non-virtual thunk to MultiDerived_dtor() */

void MultiDerived_dtor_thunk2(MultiDerived *this_ptr)

{
 int in_ESI;
 
 MultiDerived_dtor((MultiDerived *)&this_ptr[-1].super_BaseB,in_ESI);
 return;
}



/* Function: ~Derived @ 00104bbe */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_dtor(Derived *this,int __in_chrg)

{
 Derived *this_local;
 
 (this->super_Base)._vptr_Base = (_funcint_varargs **)&PTR_virtual_func_00108b20;
 Base_dtor(&this->super_Base,__in_chrg);
 return;
}



/* Function: ~Derived @ 00104bec */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_dtor_deleting(Derived *this,int __in_chrg)

{
 Derived *this_local;
 
 ~Derived(this,__in_chrg);
 operator_delete(this,0x10);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 203 */
