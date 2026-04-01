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

/* Additional type definitions for C++ compatibility */
typedef struct { int dummy; } _std_default_delete_int;
typedef struct { int dummy; } _std_default_delete_int____;
typedef struct { int dummy; } _std_default_delete;
typedef struct { int dummy; } _test_cpp_smart_ptr_lambda___;
typedef struct { int dummy; } _true;
typedef struct { int dummy; } _false;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* External function declarations */
void __stack_chk_fail(void);
int __stack_chk_fail_local(void);




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001133c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011340 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011479 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001147d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011482 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int in_GS_OFFSET;
 int r1;
 int r2;
 int r3;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 SimpleClass::SimpleClass(&obj,5,"Test");
 SimpleClass::setValue(&obj,10);
 iVar2 = SimpleClass::getValue(&obj);
 iVar3 = SimpleClass::compute(&obj,3);
 iVar4 = SimpleClass::getClassID();
 iVar4 = iVar4 + iVar2 + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar4 = __stack_chk_fail_local();
 }
 return iVar4;
}



/* Function: test_cpp_constructor @ 00011519 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int iVar4;
 int result;
 LifecycleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 LifecycleClass::LifecycleClass(&obj,5);
 iVar4 = 2;
 iVar2 = LifecycleClass::getData(&obj,2);
 iVar3 = LifecycleClass::getInstanceCount();
 LifecycleClass::~LifecycleClass(&obj,iVar4);
 iVar4 = LifecycleClass::getInstanceCount();
 iVar2 = iVar2 + iVar3 + iVar4 * 1000;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_virtual_func @ 0001159f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = ((*(code **)obj->_vptr_Base)[0])(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000115ca */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int in_GS_OFFSET;
 int __in_chrg;
 Base base;
 int r1;
 int r2;
 Base *pb;
 Base *pd;
 int r3;
 int r4;
 Derived derived;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018da8;
 Derived::Derived(&derived,3);
 iVar2 = Base::virtual_func(&base,5);
 iVar3 = Derived::virtual_func(&derived,5);
 /* try { // try from 00011642 to 00011659 has its CatchHandler @ 000116a1 */
 iVar4 = call_virtual_func(&base,5);
 __in_chrg = 5;
 iVar5 = call_virtual_func(&derived.super_Base,5);
 iVar5 = iVar2 + iVar3 + iVar4 + iVar5;
 Derived::~Derived(&derived,__in_chrg);
 Base::~Base(&base,__in_chrg);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar5 = __stack_chk_fail_local();
 }
 return iVar5;
}



/* Function: test_cpp_multiple_inheritance @ 000116de */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int in_stack_ffffffb8;
 BaseA *pa;
 BaseB *pb;
 int r1;
 int r2;
 int ptr_equal;
 MultiDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 MultiDerived::MultiDerived(&obj);
 obj.super_BaseA.dataA = 100;
 obj.super_BaseB.dataB = 200;
 /* try { // try from 00011739 to 0001174f has its CatchHandler @ 00011792 */
 iVar2 = ((*(code **)obj.super_BaseA._vptr_BaseA)[0])(&obj);
 iVar3 = ((*(code **)obj.super_BaseB._vptr_BaseB)[0])(&obj.super_BaseB);
 iVar2 = iVar2 + iVar3 + (uint)(&obj != (MultiDerived *)&obj.super_BaseB);
 MultiDerived::~MultiDerived(&obj,in_stack_ffffffb8);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_diamond_inheritance @ 000117c0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int in_stack_ffffffb8;
 void **in_stack_ffffffbc;
 VirtualBase *pb;
 int r1;
 int r2;
 DiamondDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 DiamondDerived::DiamondDerived(&obj,in_stack_ffffffb8,in_stack_ffffffbc);
 obj._20_4_ = 0x32;
 /* try { // try from 0001180e to 0001182b has its CatchHandler @ 0001185a */
 iVar2 = ((*(code **)obj._16_4_)[0])(&obj.field_0x10);
 obj._20_4_ = 100;
 iVar3 = ((*(code **)obj._16_4_)[0])(&obj.field_0x10);
 iVar2 = iVar2 + iVar3;
 DiamondDerived::~DiamondDerived(&obj,in_stack_ffffffb8,in_stack_ffffffbc);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_operator_overload @ 00011888 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 int iVar1;
 bool bVar2;
 int iVar3;
 int in_GS_OFFSET;
 bool eq;
 Point p1;
 Point p2;
 Point p3;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 Point::Point(&p1,1,2);
 Point::Point(&p2,3,4);
 Point::operator+(&p1,&p2);
 bVar2 = Point::operator==(&p1,&p2);
 Point::operator++(&p3);
 if (bVar2) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar3 = p3.y + p3.x + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_template_func @ 00011938 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int a;
 int b;
 int r1;
 double r2;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 r1 = template_max_int(3,7);
 r2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = b + (int)ROUND(r2) + r1 + a;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 000119f3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 double dVar4;
 int r1;
 int r2;
 double r3;
 Container_int int_container;
 Container_double double_container;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 Container_int_Container(&int_container);
 Container_int_push(&int_container,10);
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar2 = Container_int_get(&int_container,0);
 iVar3 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container,3.14);
 dVar4 = Container_double_get(&double_container,0);
 iVar2 = (int)ROUND(dVar4) + iVar2 + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: operator() @ 00011b34 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int operator()(anon_struct_8_2_35feab7f * __closure, int x) */

int test_cpp_lambda_anon_struct_8_2_35feab7f_operator(anon_struct_8_2_35feab7f *this_ptr,int x)

{
 /* Unresolved local var: int * capture_by_ref@[???] */
 *this_ptr->__capture_by_ref = *this_ptr->__capture_by_ref + 5;
 return *this_ptr->__capture_by_ref + this_ptr->__capture_by_value * x;
}



/* Function: test_cpp_lambda @ 00011b6b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int capture_by_ref;
 int capture_by_value;
 int r1;
 int r2;
 anon_struct_8_2_35feab7f lambda1;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 capture_by_value = 10;
 capture_by_ref = 0x14;
 lambda1.__capture_by_value = 10;
 lambda1.__capture_by_ref = &capture_by_ref;
 r1 = test_cpp_lambda::anon_struct_8_2_35feab7f::operator()(&lambda1,3);
 r2 = 0x1e;
 iVar2 = r1 + 0x1e;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_exception @ 00011bd7 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
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
 /* try { // try from 00011c1a to 00011c1e has its CatchHandler @ 00011c27 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: operator() @ 00011d26 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
 int * p) */

void anon_struct_1_0_00000001_for__M_head_impl_operator
 (anon_struct_1_0_00000001_for__M_head_impl *this_ptr,int *p)

{
 *p = -1;
 if (p != (int *)0x0) {
 operator_delete(p,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 00011d5e */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
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
 int iVar5;
 int in_GS_OFFSET;
 anon_struct_1_0_00000001_for__M_head_impl deleter;
 unique_ptr_int_default_delete ptr1;
 unique_ptr_int_default_delete ptr2;
 unique_ptr_int_array_default_delete arr;
 unique_ptr_int_lambda ptr3;
 int r1;
 int r2;
 int r3;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 __p = operator_new(4);
 *__p = 100;
 unique_ptr_int_default_delete_unique_ptr(&ptr1,__p);
 piVar3 = unique_ptr_int_default_delete_operator_deref(&ptr1);
 *piVar3 = 200;
 ptVar4 = move_unique_ptr_int(&ptr1);
 unique_ptr_int_default_delete_unique_ptr_copy(&ptr2,ptVar4);
 piVar3 = unique_ptr_int_default_delete_operator_deref(&ptr2);
 iVar5 = *piVar3;
 /* try { // try from 00011df4 to 00011df8 has its CatchHandler @ 00011efe */
 __p_00 = operator_new__(0x14);
 *__p_00 = 1;
 __p_00[1] = 2;
 __p_00[2] = 3;
 __p_00[3] = 4;
 __p_00[4] = 5;
 unique_ptr_int_array_default_delete_unique_ptr(&arr,__p_00);
 piVar3 = unique_ptr_int_array_default_delete_operator_index(&arr,2);
 iVar2 = *piVar3;
 /* try { // try from 00011e57 to 00011e5b has its CatchHandler @ 00011ee7 */
 __p_01 = operator_new(4);
 *__p_01 = 500;
 unique_ptr_int_lambda_unique_ptr(&ptr3,__p_01,&deleter);
 piVar3 = unique_ptr_int_lambda_operator_deref(&ptr3);
 iVar5 = iVar5 + iVar2 + *piVar3;
 unique_ptr_int_lambda_destructor(&ptr3,(int)__p_01);
 unique_ptr_int_array_default_delete_destructor(&arr,(int)__p_01);
 unique_ptr_int_default_delete_destructor(&ptr2,(int)__p_01);
 unique_ptr_int_default_delete_destructor(&ptr1,(int)__p_01);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar5 = __stack_chk_fail_local();
 }
 return iVar5;
}



/* Function: test_cpp_rtti @ 00011f3b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 bool bVar1;
 RTTIDerivedA *this_ptr;
 RTTIDerivedB *this_ptr_00;
 RTTIDerivedA *this_ptr_01;
 int iVar2;
 RTTIDerivedB *this_ptr_02;
 char *__s;
 size_t sVar3;
 int result;
 RTTIBase *obj1;
 RTTIBase *obj2;
 RTTIDerivedA *derivedA;
 RTTIDerivedB *derivedB;
 
 obj1 = (RTTIBase *)operator_new(4);
 (obj1->_vptr_RTTIBase) = (_func_int_varargs **)0x0;
 RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)obj1);
 obj2 = (RTTIBase *)operator_new(4);
 (obj2->_vptr_RTTIBase) = (_func_int_varargs **)0x0;
 RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)obj2);
 result = 0;
 if (obj1 == (RTTIBase *)0x0) {
 __cxa_bad_typeid();
LAB_00011fcb:
 result = 10;
 }
 else {
 bVar1 = type_info_operator_eq
 ((type_info *)(obj1->_vptr_RTTIBase)[-1],
 (type_info *)&RTTIDerivedA::typeinfo);
 if (bVar1) goto LAB_00011fcb;
 }
 if (obj2 == (RTTIBase *)0x0) {
 __cxa_bad_typeid();
LAB_00011ff9:
 result = result + 0x14;
 }
 else {
 bVar1 = type_info_operator_eq
 ((type_info *)(obj2->_vptr_RTTIBase)[-1],
 (type_info *)&RTTIDerivedB::typeinfo);
 if (bVar1) goto LAB_00011ff9;
 }
 if (obj1 == (RTTIBase *)0x0) {
 this_01 = (RTTIDerivedA *)0x0;
 }
 else {
 this_01 = (RTTIDerivedA *)__dynamic_cast(obj1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (this_01 != (RTTIDerivedA *)0x0) {
 iVar2 = RTTIDerivedA::derivedA_data(this_01);
 result = result + iVar2;
 }
 if (obj2 == (RTTIBase *)0x0) {
 this_02 = (RTTIDerivedB *)0x0;
 }
 else {
 this_02 = (RTTIDerivedB *)__dynamic_cast(obj2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (this_02 != (RTTIDerivedB *)0x0) {
 iVar2 = RTTIDerivedB::derivedB_data(this_02);
 result = result + iVar2;
 }
 if (obj1 == (RTTIBase *)0x0) {
 obj1 = (RTTIBase *)__cxa_bad_typeid();
 }
 else {
 __s = type_info_name((type_info *)(obj1->_vptr_RTTIBase)[-1]);
 sVar3 = strlen(__s);
 result = sVar3 + result;
 if (obj1 == (RTTIBase *)0x0) goto LAB_000120c9;
 }
 (*(obj1->_vptr_RTTIBase)[1])(obj1);
LAB_000120c9:
 if (obj2 != (RTTIBase *)0x0) {
 (*(obj2->_vptr_RTTIBase)[1])(obj2);
 }
 return result;
}



/* Function: test_cpp_oo_features @ 000120ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_0001503c);
 iVar1 = test_cpp_member_func();
 printf(&DAT_00015060,iVar1);
 iVar1 = test_cpp_constructor();
 printf(&DAT_0001507e,iVar1);
 iVar1 = test_cpp_virtual_func();
 printf(&DAT_0001509a,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_000150b6,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000150d2,iVar1);
 iVar1 = test_cpp_operator_overload();
 printf(&DAT_000150ef,iVar1);
 iVar1 = test_cpp_template_func();
 printf(&DAT_0001510b,iVar1);
 iVar1 = test_cpp_template_class();
 printf(&DAT_00015127,iVar1);
 iVar1 = test_cpp_lambda();
 printf(&DAT_00015143,iVar1);
 iVar1 = test_cpp_exception();
 printf(&DAT_0001515f,iVar1);
 iVar1 = test_cpp_smart_ptr();
 printf(&DAT_0001517c,iVar1);
 iVar1 = test_cpp_rtti();
 printf(&DAT_00015199,iVar1);
 return;
}



/* Function: main @ 00012238 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00012258 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original name: __uniq_ptr_data<const test_cpp_smart_ptr()::<lambda(int*)>&>
 DWARF original prototype: void
 __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>
 * this, pointer param_1, anon_struct_1_0_00000001_for__M_head_impl * param_2) */

void std___uniq_ptr_data_const_test_cpp_smart_ptr_lambda_and__
 (__uniq_ptr_data_int__test_cpp_smart_ptr_lambda__true__false_ *this_ptr,
 pointer param_2,anon_struct_1_0_00000001_for__M_head_impl *param_3)

{
 std___uniq_ptr_impl_int__test_cpp_smart_ptr_lambda____
__uniq_ptr_impl_const_test_cpp_smart_ptr_lambda_and__
 (&this_ptr->super___uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>,param_2,
 param_3);
 return;
}



/* Function: unique_ptr<> @ 00012282 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
 unique_ptr<>(unique_ptr_int__test_cpp_smart_ptr_lambda___ * this, pointer __p,
 deleter_type * __d) */

void std_unique_ptr_int__test_cpp_smart_ptr_lambda___unique_ptr
 (unique_ptr_int__test_cpp_smart_ptr_lambda___ *this_ptr,pointer __p,
 deleter_type *__d)

{
 std___uniq_ptr_data_const_test_cpp_smart_ptr_lambda_and__(&this_ptr->_M_t,__p,__d);
 return;
}



/* Function: ~unique_ptr @ 000122aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~unique_ptr(unique_ptr_int__test_cpp_smart_ptr_lambda___
 * this, int __in_chrg) */

void std_unique_ptr_int__test_cpp_smart_ptr_lambda____unique_ptr
 (unique_ptr_int__test_cpp_smart_ptr_lambda___ *this_ptr,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 int **__ptr;
 
 __t = std___uniq_ptr_impl_int__test_cpp_smart_ptr_lambda_____M_ptr
 ((__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *)this_ptr);
 if (*__t != (pointer)0x0) {
 this_00 = std_unique_ptr_int__test_cpp_smart_ptr_lambda___get_deleter(this_ptr);
 ppiVar1 = move_int_and_(__t);
 anon_struct_1_0_00000001_for__M_head_impl_operator(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: operator* @ 00012312 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: type operator*(unique_ptr_int__test_cpp_smart_ptr_lambda___ *
 this) */

type std_unique_ptr_int__test_cpp_smart_ptr_lambda___operator_star
 (unique_ptr_int__test_cpp_smart_ptr_lambda___ *this_ptr)

{
 pointer piVar1;
 
 piVar1 = std_unique_ptr_int__test_cpp_smart_ptr_lambda___get(this_ptr);
 return piVar1;
}



/* Function: __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 0001233a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original name: __uniq_ptr_impl<const test_cpp_smart_ptr()::<lambda(int*)>&>
 DWARF original prototype: void
 __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 * this, pointer __p, anon_struct_1_0_00000001_for__M_head_impl * __d) */

void std___uniq_ptr_impl_int__test_cpp_smart_ptr_lambda____
__uniq_ptr_impl_const_test_cpp_smart_ptr_lambda_and__
 (__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *this_ptr,pointer __p,
 anon_struct_1_0_00000001_for__M_head_impl *__d)

{
 anon_struct_1_0_00000001_for__M_head_impl *__a2;
 
 __a2 = std_forward_const_test_cpp_smart_ptr_lambda_and__(__d);
 std_tuple_int___test_cpp_smart_ptr_lambda____
_tuple_int___const_test_cpp_smart_ptr_lambda_and__(&this_ptr->_M_t,&__p,__a2);
 return;
}



/* Function: _M_ptr @ 00012374 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer *
 _M_ptr(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

pointer * std___uniq_ptr_impl_int__test_cpp_smart_ptr_lambda_____M_ptr
 (__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0__int___test_cpp_smart_ptr_lambda___(&this_ptr->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00012396 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr_int__test_cpp_smart_ptr_lambda___ * this) */

deleter_type * std_unique_ptr_int__test_cpp_smart_ptr_lambda___get_deleter
 (unique_ptr_int__test_cpp_smart_ptr_lambda___ *this_ptr)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std___uniq_ptr_impl_int__test_cpp_smart_ptr_lambda_____M_deleter
 ((__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *)this_ptr);
 return paVar1;
}



/* Function: get @ 000123b8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer get(unique_ptr_int__test_cpp_smart_ptr_lambda___ *
 this) */

pointer std_unique_ptr_int__test_cpp_smart_ptr_lambda___get
 (unique_ptr_int__test_cpp_smart_ptr_lambda___ *this_ptr)

{
 pointer piVar1;
 
 piVar1 = std___uniq_ptr_impl_int__test_cpp_smart_ptr_lambda_____M_ptr
 ((__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *)this_ptr);
 return piVar1;
}



/* Function: forward<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 000123d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: forward<const test_cpp_smart_ptr()::<lambda(int*)>&> */

anon_struct_1_0_00000001_for__M_head_impl *
std_forward_const_test_cpp_smart_ptr_lambda_and__(type *__t)

{
 return __t;
}



/* Function: tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 000123ec */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original name: tuple<int*&, const test_cpp_smart_ptr()::<lambda(int*)>&>
 DWARF original prototype: void
 tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>(tuple_int___test_cpp_smart_ptr_lambda___
 * this, int * * __a1, anon_struct_1_0_00000001_for__M_head_impl * __a2) */

void std_tuple_int___test_cpp_smart_ptr_lambda____
_tuple_int___const_test_cpp_smart_ptr_lambda_and__
 (tuple_int___test_cpp_smart_ptr_lambda___ *this_ptr,int **__a1,
 anon_struct_1_0_00000001_for__M_head_impl *__a2)

{
 int **__head;
 
 std_forward_const_test_cpp_smart_ptr_lambda_and__(__a2);
 __head = std_forward_int_and_(__a1);
 std__Tuple_impl_0__int___test_cpp_smart_ptr_lambda______Tuple_impl
 (&this_ptr->super__Tuple_impl_0__int___test_cpp_smart_ptr_lambda___,__head);
 return;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 0001242f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std_get_0__int___test_cpp_smart_ptr_lambda___
 (tuple_int___test_cpp_smart_ptr_lambda___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0__int___test_cpp_smart_ptr_lambda___
 (&__t->super__Tuple_impl_0__int___test_cpp_smart_ptr_lambda___);
 return ppiVar1;
}



/* Function: _M_deleter @ 00012450 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: anon_struct_1_0_00000001_for__M_head_impl *
 _M_deleter(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

 anon_struct_1_0_00000001_for__M_head_impl * 
std__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda____M_deleter
 (__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *this_ptr)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = std_get_1__int___test_cpp_smart_ptr_lambda___(&this_ptr->_M_t);
 return p_Var1;
}



/* Function: _M_ptr @ 00012472 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer
 _M_ptr(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

pointer 
std__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda____M_ptr
 (__uniq_ptr_impl_int__test_cpp_smart_ptr_lambda___ *this_ptr)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0__int___test_cpp_smart_ptr_lambda___(&this_ptr->_M_t);
 return *ppiVar1;
}



/* Function: _Tuple_impl @ 00012496 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original name: _Tuple_impl<int*&, const test_cpp_smart_ptr()::<lambda(int*)>&>
 DWARF original prototype: void
 _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>(_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
 * this, int * * __head) */

void 
std__Tuple_impl_0__int___test_cpp_smart_ptr_lambda______Tuple_impl
 (_Tuple_impl_0__int___test_cpp_smart_ptr_lambda___ *this_ptr,int **__head)

{
 anon_struct_1_0_00000001_for__M_head_impl *__head_00;
 int **__h;
 
 __head_00 = std_forward_const_test_cpp_smart_ptr_lambda_and__((anon_struct_1_0_00000001_for__M_head_impl *)0);
 std__Tuple_impl_1__test_cpp_smart_ptr_lambda______Tuple_impl
 (&this_ptr->super__Tuple_impl_1__test_cpp_smart_ptr_lambda___,__head_00);
 __h = std_forward_int_and_(__head);
 std__Head_base_0__int___false__Head_base((_Head_base_0__int___false *)this_ptr,__h);
 return;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 000124e5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

int ** std___get_helper_0__int___test_cpp_smart_ptr_lambda___
 (_Tuple_impl_0__int___test_cpp_smart_ptr_lambda___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0__int___test_cpp_smart_ptr_lambda______M_head(__t);
 return ppiVar1;
}



/* Function: get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00012505 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<1, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t_conflict *
std_get_1__int___test_cpp_smart_ptr_lambda___
 (tuple_int___test_cpp_smart_ptr_lambda___ *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std___get_helper_1__test_cpp_smart_ptr_lambda___
 ((_Tuple_impl_1__test_cpp_smart_ptr_lambda___ *)__t);
 return paVar1;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00012525 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std_get_0__int___test_cpp_smart_ptr_lambda___
 (tuple_int___test_cpp_smart_ptr_lambda___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0__int___test_cpp_smart_ptr_lambda___
 (&__t->super__Tuple_impl_0__int___test_cpp_smart_ptr_lambda___);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00012546 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
 * this, anon_struct_1_0_00000001_for__M_head_impl * __head) */

void 
std__Tuple_impl_1__test_cpp_smart_ptr_lambda______Tuple_impl
 (_Tuple_impl_1__test_cpp_smart_ptr_lambda___ *this_ptr,
 anon_struct_1_0_00000001_for__M_head_impl *__head)

{
 std__Head_base_1__test_cpp_smart_ptr_lambda____true__Head_base
 (&this_ptr->super__Head_base_1__test_cpp_smart_ptr_lambda____true,__head);
 return;
}



/* Function: _M_head @ 0001256a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std__Tuple_impl_0__int___test_cpp_smart_ptr_lambda______M_head
 (_Tuple_impl_0__int___test_cpp_smart_ptr_lambda___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0__int___false__M_head((_Head_base_0__int___false *)__t);
 return ppiVar1;
}



/* Function: __get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 0001258b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1, test_cpp_smart_ptr()::<lambda(int*)> > */

anon_struct_1_0_00000001_for__M_head_impl *
std___get_helper_1__test_cpp_smart_ptr_lambda___
 (_Tuple_impl_1__test_cpp_smart_ptr_lambda___ *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__Tuple_impl_1__test_cpp_smart_ptr_lambda______M_head(__t);
 return paVar1;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 000125ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

int ** std___get_helper_0__int___test_cpp_smart_ptr_lambda___
 (_Tuple_impl_0__int___test_cpp_smart_ptr_lambda___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0__int___test_cpp_smart_ptr_lambda______M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base @ 000125cc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
 _Head_base(_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> * this,
 anon_struct_1_0_00000001_for__M_head_impl * __h) */

void 
std__Head_base_1__test_cpp_smart_ptr_lambda____true__Head_base
 (_Head_base_1__test_cpp_smart_ptr_lambda____true *this_ptr,
 anon_struct_1_0_00000001_for__M_head_impl *__h)

{
 return;
}



/* Function: _M_head @ 000125dc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

anon_struct_1_0_00000001_for__M_head_impl *
std__Tuple_impl_1__test_cpp_smart_ptr_lambda______M_head
 (_Tuple_impl_1__test_cpp_smart_ptr_lambda___ *__t)

{
 anon_struct_1_0_00000001_for__M_head_impl *paVar1;
 
 paVar1 = std__Head_base_1__test_cpp_smart_ptr_lambda____true__M_head
 (&__t->super__Head_base_1__test_cpp_smart_ptr_lambda____true);
 return paVar1;
}



/* Function: _M_head @ 000125fc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std__Tuple_impl_0__int___test_cpp_smart_ptr_lambda______M_head
 (_Tuple_impl_0__int___test_cpp_smart_ptr_lambda___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0__int___false__M_head((_Head_base_0__int___false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 0001261d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

anon_struct_1_0_00000001_for__M_head_impl *
std__Head_base_1__test_cpp_smart_ptr_lambda____true__M_head
 (_Head_base_1__test_cpp_smart_ptr_lambda____true *__b)

{
 return &__b->_M_head_impl;
}



/* Function: __static_initialization_and_destruction_0 @ 0001262f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
 if ((__initialize_p == 1) && (__priority == 0xffff)) {
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit(std_ios_base_Init_destructor,&std___ioinit,&__dso_handle);
 }
 return;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0001268c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 000126b4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * name(type_info * this) */

char *  type_info_name(type_info *this_ptr)

{
 char *pcVar1;
 
 if (**(char **)(this_ptr + 4) == '*') {
 pcVar1 = (char *)(*(int *)(this_ptr + 4) + 1);
 }
 else {
 pcVar1 = *(char **)(this_ptr + 4);
 }
 return pcVar1;
}



/* Function: operator== @ 000126e6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool  type_info_operator_eq(type_info *this_ptr,type_info *__arg)

{
 bool bVar1;
 int iVar2;
 
 if (*(int *)(this_ptr + 4) == *(int *)(__arg + 4)) {
LAB_00012738:
 bVar1 = true;
 }
 else {
 if (**(char **)(this_ptr + 4) != '*') {
 iVar2 = strcmp(*(char **)(this_ptr + 4),*(char **)(__arg + 4));
 if (iVar2 == 0) goto LAB_00012738;
 }
 bVar1 = false;
 }
 return bVar1;
}



/* Function: SimpleClass @ 0001274a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void  SimpleClass_SimpleClass(SimpleClass *this_ptr,int v,char *n)

{
 this_ptr->value = v;
 strncpy(this_ptr->name,n,0x1f);
 this_ptr->name[0x1f] = '\0';
 return;
}



/* Function: getValue @ 0001278e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getValue(SimpleClass * this) */

int  SimpleClass_getValue(SimpleClass *this_ptr)

{
 return this_ptr->value;
}



/* Function: setValue @ 000127a6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void  SimpleClass_setValue(SimpleClass *this_ptr,int v)

{
 this_ptr->value = v;
 return;
}



/* Function: compute @ 000127c2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int  SimpleClass_compute(SimpleClass *this_ptr,int x)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = this_ptr->value;
 sVar2 = strlen(this_ptr->name);
 return sVar2 + iVar1 * x;
}



/* Function: getClassID @ 000127fd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00012816 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void  LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,size_t s)

{
 int *piVar1;
 size_t i;
 
 this_ptr->size = s;
 if (s < 0x20000000) {
 piVar1 = operator_new__(s << 2);
 this_ptr->data = piVar1;
 for (i = 0; i < s; i = i + 1) {
LAB_00012863:
 this_ptr->data[i] = i * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00012863;
}



/* Function: ~LifecycleClass @ 000128a4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this, int __in_chrg) */

void  LifecycleClass_destructor(LifecycleClass *this_ptr,int __in_chrg)

{
 if (this_ptr->data != (int *)0x0) {
 operator_delete__(this_ptr->data);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: getData @ 000128ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int  LifecycleClass_getData(LifecycleClass *this_ptr,size_t idx)

{
 int iVar1;
 
 if (idx < this_ptr->size) {
 iVar1 = this_ptr->data[idx];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: getInstanceCount @ 0001291e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 00012938 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int virtual_func(Base * this, int x) */

int  Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 00012952 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char *  Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 0001296c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void  Base_destructor(Base *this_ptr,int __in_chrg)

{
 this_ptr->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018da8;
 return;
}



/* Function: ~Base @ 0001298c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void  Base_destructor2(Base *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 Base_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,4);
 return;
}



/* Function: Base @ 000129c6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Base(Base * this) */

void  Base_Base(Base *this_ptr)

{
 this_ptr->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018da8;
 return;
}



/* Function: Derived @ 000129e6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void Derived(Derived * this, int m) */

void  Derived_Derived(Derived *this_ptr,int m)

{
 Base::Base(&this_ptr->super_Base);
 (this_ptr->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018d90;
 this_ptr->multiplier = m;
 return;
}



/* Function: virtual_func @ 00012a26 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int  Derived_virtual_func(Derived *this_ptr,int x)

{
 return this_ptr->multiplier * x;
}



/* Function: getName @ 00012a44 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char *  Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00012a5e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcA(BaseA * this) */

int  BaseA_funcA(BaseA *this_ptr)

{
 return 10;
}



/* Function: ~BaseA @ 00012a76 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void  BaseA_destructor(BaseA *this_ptr,int __in_chrg)

{
 this_ptr->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d7c;
 return;
}



/* Function: ~BaseA @ 00012a96 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void  BaseA_destructor2(BaseA *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 BaseA_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,8);
 return;
}



/* Function: funcB @ 00012ad0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcB(BaseB * this) */

int  BaseB_funcB(BaseB *this_ptr)

{
 return 0x14;
}



/* Function: ~BaseB @ 00012ae8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void  BaseB_destructor(BaseB *this_ptr,int __in_chrg)

{
 this_ptr->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d68;
 return;
}



/* Function: ~BaseB @ 00012b08 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void  BaseB_destructor2(BaseB *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 BaseB_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,8);
 return;
}



/* Function: funcA @ 00012b42 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcA(MultiDerived * this) */

int  MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00012b5a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcB(MultiDerived * this) */

int  MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00012b72 */

/* non-virtual thunk to MultiDerived::funcB() */

void  MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 MultiDerived_funcB((MultiDerived *)&this[-1].super_BaseB);
 return;
}



/* Function: BaseA @ 00012b7e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void BaseA(BaseA * this) */

void  BaseA_BaseA(BaseA *this_ptr)

{
 this_ptr->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d7c;
 return;
}



/* Function: BaseB @ 00012b9e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void BaseB(BaseB * this) */

void  BaseB_BaseB(BaseB *this_ptr)

{
 this_ptr->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d68;
 return;
}



/* Function: MultiDerived @ 00012bbe */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void  MultiDerived_MultiDerived(MultiDerived *this_ptr)

{
 BaseA::BaseA(&this_ptr->super_BaseA);
 BaseB::BaseB(&this_ptr->super_BaseB);
 (this_ptr->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d3c;
 (this_ptr->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d54;
 return;
}



/* Function: func @ 00012c12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int func(VirtualBase * this) */

int  VirtualBase_func(VirtualBase *this_ptr)

{
 return 100;
}



/* Function: ~VirtualBase @ 00012c2a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void  VirtualBase_destructor(VirtualBase *this_ptr,int __in_chrg)

{
 this_ptr->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00018d28;
 return;
}



/* Function: ~VirtualBase @ 00012c4a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void  VirtualBase_destructor2(VirtualBase *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 VirtualBase_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,8);
 return;
}



/* Function: func @ 00012c84 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int func(MiddleA * this) */

int  MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((int)&(this_ptr->dataA) + (int)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00012cb0 */

/* virtual thunk to MiddleA::func() */

void  MiddleA_func_thunk(MiddleA *this_ptr)

{
 MiddleA_func((MiddleA *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00012cc4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int func(MiddleB * this) */

int  MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((int)&(this_ptr->dataB) + (int)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00012cf0 */

/* virtual thunk to MiddleB::func() */

void  MiddleB_func_thunk(MiddleB *this_ptr)

{
 MiddleB_func((MiddleB *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 00012d04 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int  DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((int)&(this_ptr->super_MiddleA.dataA) + (int)this_ptr->super_MiddleA._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00012d30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void  DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_func((DiamondDerived *)
 ((int)&(this_ptr->super_MiddleA._vptr_MiddleA) + (int)this_ptr->super_MiddleA._vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00012d43 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void  DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_func((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: VirtualBase @ 00012d4e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void  VirtualBase_VirtualBase(VirtualBase *this_ptr)

{
 this_ptr->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00018d28;
 return;
}



/* Function: MiddleA @ 00012d6e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void  MiddleA_MiddleA(MiddleA *this_ptr,int __in_chrg,void **__vtt_parm)

{
 this_ptr->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return;
}



/* Function: ~MiddleA @ 00012da6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void  MiddleA_destructor(MiddleA *this_ptr,int __in_chrg,void **__vtt_parm)

{
 this_ptr->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return;
}



/* Function: MiddleB @ 00012dde */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void  MiddleB_MiddleB(MiddleB *this_ptr,int __in_chrg,void **__vtt_parm)

{
 this_ptr->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return;
}



/* Function: ~MiddleB @ 00012e16 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void  MiddleB_destructor(MiddleB *this_ptr,int __in_chrg,void **__vtt_parm)

{
 this_ptr->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
 *(undefined4 *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]) =
 *(undefined4 *)(__in_chrg + 4);
 return;
}



/* Function: DiamondDerived @ 00012e4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void  DiamondDerived_DiamondDerived(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 void **in_stack_ffffffec;
 
 VirtualBase::VirtualBase((VirtualBase *)&this_ptr->field_0x10);
 MiddleA::MiddleA(&this_ptr->super_MiddleA,0x18ca0,in_stack_ffffffec);
 MiddleB::MiddleB((MiddleB *)&(this_ptr->super_MiddleA).field_0x8,0x18ca8,in_stack_ffffffec);
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)0x18c5c;
 *(undefined4 *)&this_ptr->field_0x10 = 0x18c90;
 *(undefined4 *)&(this_ptr->super_MiddleA).field_0x8 = 0x18c74;
 return;
}



/* Function: Point @ 00012ed0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void  Point_Point(Point *this_ptr,int _x,int _y)

{
 this_ptr->x = _x;
 this_ptr->y = _y;
 return;
}



/* Function: operator+ @ 00012ef6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point  Point_operator_add(Point *this_ptr,Point *other)

{
 int extraout_EDX;
 Point PVar1;
 Point *in_stack_00000004;
 
 Point(in_stack_00000004,other->x + this_ptr->x,this_ptr->y + other->y);
 PVar1.y = extraout_EDX;
 PVar1.x = (int)in_stack_00000004;
 return PVar1;
}



/* Function: operator== @ 00012f3c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool  Point_operator_eq(Point *this_ptr,Point *other)

{
 bool bVar1;
 
 if ((this_ptr->x == other->x) && (this_ptr->y == other->y)) {
 bVar1 = true;
 }
 else {
 bVar1 = false;
 }
 return bVar1;
}



/* Function: operator++ @ 00012f7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: Point * operator++(Point * this) */

Point *  Point_operator_inc(Point *this_ptr)

{
 this_ptr->x = this_ptr->x + 1;
 this_ptr->y = this_ptr->y + 1;
 return this_ptr;
}



/* Function: template_max<int> @ 00012fac */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00012fcf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

double template_max_double(double a,double b)

{
 double b_local;
 double a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_swap<int> @ 00013011 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 int temp;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00013042 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Container(Container<int> * this) */

void  Container_int_Container(Container_int *this)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00013060 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void push(Container<int> * this, int value) */

void  Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 if (this_ptr->size < 10) {
 iVar1 = this_ptr->size;
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0001309c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int get(Container<int> * this, int idx) */

int  Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 if ((idx < 0) || (this_ptr->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this_ptr->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 000130d0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getSize(Container<int> * this) */

int  Container_int_getSize(Container_int *this)

{
 return this_ptr->size;
}



/* Function: Container @ 000130ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Container(Container<double> * this) */

void  Container_double_Container(Container_double *this)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00013108 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void push(Container<double> * this, double value) */

void  Container_double_push(Container_double *this,double value)

{
 int iVar1;
 double value_local;
 
 if (this_ptr->size < 10) {
 iVar1 = this_ptr->size;
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0001314e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: double get(Container<double> * this, int idx) */

double  Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 if ((idx < 0) || (this_ptr->size <= idx)) {
 dVar1 = 0.0;
 }
 else {
 dVar1 = this_ptr->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00013180 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getSize(Container<double> * this) */

int  Container_double_getSize(Container_double *this)

{
 return this_ptr->size;
}



/* Function: __uniq_ptr_data @ 0001319a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std_default_delete_int,_true,_true> * this,
 __uniq_ptr_data<int,_std_default_delete_int,_true,_true> * param_1) */

void 
std___uniq_ptr_data_int__std_default_delete_int__true__true____uniq_ptr_data
 (__uniq_ptr_data_int__std_default_delete_int__true__true_ *this_ptr,
 __uniq_ptr_data_int__std_default_delete_int__true__true_ *param_2)

{
 std___uniq_ptr_impl_int__std_default_delete_int______uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int__std_default_delete_int__,
 &param_2->super___uniq_ptr_impl_int__std_default_delete_int__);
 return;
}



/* Function: unique_ptr @ 000131c4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void unique_ptr(unique_ptr_int__std_default_delete_int___ * this,
 unique_ptr_int__std_default_delete_int___ * param_1) */

void 
std_unique_ptr_int__std_default_delete_int____unique_ptr
 (unique_ptr_int__std_default_delete_int___ *this_ptr,
 unique_ptr_int__std_default_delete_int___ *param_2)

{
 std___uniq_ptr_data_int__std_default_delete_int__true__true______uniq_ptr_data
 (&this_ptr->_M_t,&param_2->_M_t);
 return;
}



/* Function: getType @ 000131ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getType(RTTIBase * this) */

int  RTTIBase_getType(RTTIBase *this_ptr)

{
 return 0;
}



/* Function: getType @ 00013206 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int  RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: derivedA_data @ 0001321e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int  RTTIDerivedA_derivedA_data(RTTIDerivedA *this_ptr)

{
 return 100;
}



/* Function: getType @ 00013236 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int  RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: derivedB_data @ 0001324e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int  RTTIDerivedB_derivedB_data(RTTIDerivedB *this_ptr)

{
 return 200;
}



/* Function: RTTIBase @ 00013266 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void  RTTIBase_RTTIBase(RTTIBase *this_ptr)

{
 this_ptr->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00018c44;
 return;
}



/* Function: ~RTTIBase @ 00013286 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void  RTTIBase_destructor(RTTIBase *this_ptr,int __in_chrg)

{
 this_ptr->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00018c44;
 return;
}



/* Function: ~RTTIBase @ 000132a6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void  RTTIBase_destructor2(RTTIBase *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 RTTIBase_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,4);
 return;
}



/* Function: RTTIDerivedA @ 000132e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void  RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIBase_RTTIBase(&this_ptr->super_RTTIBase);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00018c30;
 return;
}



/* Function: RTTIDerivedB @ 00013316 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void  RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIBase_RTTIBase(&this_ptr->super_RTTIBase);
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00018c1c;
 return;
}



/* Function: __uniq_ptr_data @ 0001334c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std_default_delete_int,_true,_true> * this, pointer
 param_1) */

void 
std___uniq_ptr_data_int__std_default_delete_int__true__true____uniq_ptr_data
 (__uniq_ptr_data_int__std_default_delete_int__true__true_ *this_ptr,pointer param_2)

{
 std___uniq_ptr_impl_int__std_default_delete_int______uniq_ptr_impl
 (&this_ptr->super___uniq_ptr_impl_int__std_default_delete_int__,param_2);
 return;
}



/* Function: unique_ptr<> @ 00013376 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void unique_ptr<>(unique_ptr_int__std_default_delete_int___ * this,
 pointer __p) */

void 
std_unique_ptr_int__std_default_delete_int____unique_ptr_
 (unique_ptr_int__std_default_delete_int___ *this_ptr,pointer __p)

{
 std___uniq_ptr_data_int__std_default_delete_int__true__true______uniq_ptr_data(&this_ptr->_M_t,__p);
 return;
}



/* Function: ~unique_ptr @ 000133a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~unique_ptr(unique_ptr_int__std_default_delete_int___ * this, int
 __in_chrg) */

void 
std_unique_ptr_int__std_default_delete_int____~unique_ptr
 (unique_ptr_int__std_default_delete_int___ *this_ptr,int __in_chrg)

{
 pointer *__t;
 deleter_type *this_00;
 type *ppiVar1;
 int **__ptr;
 
 __t = std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 ((__uniq_ptr_impl_int__std_default_delete_int__ *)this_ptr);
 if (*__t != (pointer)0x0) {
 this_00 = get_deleter(this_ptr);
 ppiVar1 = move_int_and_(__t);
 std_default_delete_int__operator(this_00,*ppiVar1);
 }
 *__t = (pointer)0x0;
 return;
}



/* Function: operator* @ 0001340c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: type operator*(unique_ptr_int__std_default_delete_int___ * this) */

type 
std_unique_ptr_int__std_default_delete_int____operator_star
 (unique_ptr_int__std_default_delete_int___ *this_ptr)

{
 pointer piVar1;
 
 piVar1 = get(this_ptr);
 return piVar1;
}



/* Function: move<std_unique_ptr<int>&> @ 00013437 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

type * std_move_unique_ptr_int_and_(unique_ptr_int__std_default_delete_int___ *__t)

{
 return __t;
}



/* Function: _Tuple_impl @ 0001344e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std_default_delete_int_> *
 this, _Tuple_impl<0,_int*,_std_default_delete_int_> * param_1) */

void 
std__Tuple_impl_0__int___std_default_delete_int______Tuple_impl
 (_Tuple_impl_0__int___std_default_delete_int__ *this,
 _Tuple_impl_0__int___std_default_delete_int__ *param_2)

{
 std_std__Tuple_impl_1__std_default_delete_int______Tuple_impl
 (&this->super__Tuple_impl_1__std_default_delete_int__,
 &param_2->super__Tuple_impl_1__std_default_delete_int__);
 return;
}



/* Function: tuple @ 00013480 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void tuple(tuple_int___std_default_delete_int___ * this,
 tuple_int___std_default_delete_int___ * param_1) */

void 
std_tuple_int___std_default_delete_int____tuple
 (tuple_int___std_default_delete_int___ *this,
 tuple_int___std_default_delete_int___ *param_2)

{
 std__Tuple_impl_0__int___std_default_delete_int______Tuple_impl
 (&this->super__Tuple_impl_0__int___std_default_delete_int__,
 &param_2->super__Tuple_impl_0__int___std_default_delete_int__);
 return;
}



/* Function: __uniq_ptr_impl @ 000134aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std_default_delete_int_> *
 this, __uniq_ptr_impl<int,_std_default_delete_int_> * __u) */

void 
std___uniq_ptr_impl_int__std_default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int__std_default_delete_int__ *this,
 __uniq_ptr_impl_int__std_default_delete_int__ *__u)

{
 type *ptVar1;
 pointer *ppiVar2;
 
 ptVar1 = std_move_std_tuple_int___std_default_delete_int___and_(&__u->_M_t);
 std_tuple_int___std_default_delete_int______tuple(&this->_M_t,ptVar1);
 ppiVar2 = std_std___uniq_ptr_impl_int__std_default_delete_int______M_ptr(__u);
 if (ppiVar2 != (pointer *)0x0) {
 *ppiVar2 = (pointer)0x0;
 }
 return;
}



/* Function: __uniq_ptr_data @ 000134f8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
 __uniq_ptr_data(__uniq_ptr_data<int,_std_default_delete_int____,_true,_true> * this, pointer
 param_1) */

void 
std___uniq_ptr_data_int__std_default_delete_int______true__true______uniq_ptr_data
 (__uniq_ptr_data_int__std_default_delete_int______true__true_ *this,pointer param_2)

{
 std___uniq_ptr_impl_int__std_default_delete_int_______uniq_ptr_impl
 (&this->super___uniq_ptr_impl_int__std_default_delete_int____,param_2);
 return;
}



/* Function: unique_ptr<int*> @ 00013522 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void unique_ptr<int*>(unique_ptr_int____std_default_delete_int____
 * this, int * __p) */

void 
std_unique_ptr_int____std_default_delete_int_______unique_ptr_int_
 (unique_ptr_int____std_default_delete_int____ *this,int *__p)

{
 std___uniq_ptr_data_int__std_default_delete_int______true__true______uniq_ptr_data(&this->_M_t,__p);
 return;
}



/* Function: ~unique_ptr @ 0001354c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~unique_ptr(unique_ptr_int____std_default_delete_int____ *
 this, int __in_chrg) */

void 
std_unique_ptr_int____std_default_delete_int________unique_ptr
 (unique_ptr_int____std_default_delete_int____ *this,int __in_chrg)

{
 pointer *ppiVar1;
 deleter_type *this_00;
 int **__ptr;
 
 ppiVar1 = std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 ((__uniq_ptr_impl_int__std_default_delete_int____ *)this);
 if (*ppiVar1 != (pointer)0x0) {
 this_00 = std_unique_ptr_int____std_default_delete_int______get_deleter(this);
 std_default_delete_int____operator_int(this_00,*ppiVar1);
 }
 *ppiVar1 = (pointer)0x0;
 return;
}



/* Function: operator[] @ 000135a8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: type operator[](unique_ptr_int____std_default_delete_int____ *
 this, size_t __i) */

type 
std_unique_ptr_int____std_default_delete_int_______operator_index
 (unique_ptr_int____std_default_delete_int____ *this,size_t __i)

{
 pointer piVar1;
 
 piVar1 = std_unique_ptr_int____std_default_delete_int______get(this);
 return piVar1 + __i;
}



/* Function: __uniq_ptr_impl @ 000135de */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std_default_delete_int_> *
 this, pointer __p) */

void 
 std_std___uniq_ptr_impl_int__std_default_delete_int______uniq_ptr_impl
 (__uniq_ptr_impl_int__std_default_delete_int__ *this,pointer __p)

{
 pointer *ppiVar1;
 
 std_tuple_int___std_default_delete_int______tuple(&this->_M_t);
 ppiVar1 = std_std___uniq_ptr_impl_int__std_default_delete_int______M_ptr(this);
 if (ppiVar1 != (pointer *)0x0) {
 *ppiVar1 = __p;
 }
 return;
}



/* Function: _M_ptr @ 0001361c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std_default_delete_int_> *
 this) */

pointer * 
std_std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 (__uniq_ptr_impl_int__std_default_delete_int__ *this)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0__int___std_default_delete_int__(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00013642 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: deleter_type * get_deleter(unique_ptr_int__std_default_delete_int___ *
 this) */

deleter_type * 
std_unique_ptr_int__std_default_delete_int___get_deleter
 (unique_ptr_int__std_default_delete_int___ *this)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std_std___uniq_ptr_impl_int__std_default_delete_int______M_deleter
 ((__uniq_ptr_impl_int__std_default_delete_int__ *)this);
 return pdVar1;
}



/* Function: move_int_and_ @ 00013667 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

type * std_move_int_and_(int **__t)

{
 return __t;
}



/* Function: operator() @ 0001367e */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void operator()(default_delete_int * this, int * __ptr) */

void  std_std_default_delete_int__operator(default_delete_int *this,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete(__ptr,4);
 }
 return;
}



/* Function: get @ 000136b2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer get(unique_ptr_int__std_default_delete_int___ * this) */

pointer 
std_unique_ptr_int__std_default_delete_int___get
 (unique_ptr_int__std_default_delete_int___ *this)

{
 pointer piVar1;
 
 piVar1 = std_std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 ((__uniq_ptr_impl_int__std_default_delete_int__ *)this);
 return piVar1;
}



/* Function: move_std_tuple_int___std_default_delete_int___and_ @ 000136d7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: move<std_tuple<int*, std_default_delete_int >&> */

type * std_move_std_tuple_int___std_default_delete_int___and_
 (tuple_int___std_default_delete_int___ *__t)

{
 return __t;
}



/* Function: _Tuple_impl @ 000136ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std_default_delete_int_> * this,
 _Tuple_impl<1,_std_default_delete_int_> * __in) */

void 
 std_std__Tuple_impl_1__std_default_delete_int______Tuple_impl
 (_Tuple_impl_1__std_default_delete_int__ *this_ptr,
 _Tuple_impl_1__std_default_delete_int__ *__in)

{
 return;
}



/* Function: __uniq_ptr_impl @ 00013702 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std_default_delete_int_____>
 * this, pointer __p) */

void 
 std___uniq_ptr_impl_int__std_default_delete_int_______uniq_ptr_impl
 (__uniq_ptr_impl_int__std_default_delete_int____ *this,pointer __p)

{
 pointer *ppiVar1;
 
 std_tuple_int___std_default_delete_int______tuple(&this->_M_t);
 ppiVar1 = std___uniq_ptr_impl_int__std_default_delete_int______M_ptr(this);
 if (ppiVar1 != (pointer *)0x0) {
 *ppiVar1 = __p;
 }
 return;
}



/* Function: _M_ptr @ 00013740 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std_default_delete_int_____> *
 this) */

pointer * 
std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 (__uniq_ptr_impl_int__std_default_delete_int____ *this)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0__int___std_default_delete_int____(&this->_M_t);
 return ppiVar1;
}



/* Function: get_deleter @ 00013766 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: deleter_type *
 get_deleter(unique_ptr_int____std_default_delete_int____ * this) */

deleter_type * 
std_unique_ptr_int____std_default_delete_int______get_deleter
 (unique_ptr_int____std_default_delete_int____ *this_ptr)

{
 default_delete_int____ *pdVar1;
 
 pdVar1 = std___uniq_ptr_impl_int__std_default_delete_int______M_deleter
 ((__uniq_ptr_impl_int__std_default_delete_int____ *)this_ptr);
 return pdVar1;
}



/* Function: operator()<int> @ 0001378c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void operator()<int>(default_delete_int____ * this, int * __ptr) */

void 
std_default_delete_int____operator_int(default_delete_int____ *this,int *__ptr)

{
 if (__ptr != (int *)0x0) {
 operator_delete__(__ptr);
 }
 return;
}



/* Function: get @ 000137be */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer get(unique_ptr_int____std_default_delete_int____ * this) */

pointer 
std_unique_ptr_int____std_default_delete_int______get
 (unique_ptr_int____std_default_delete_int____ *this_ptr)

{
 pointer piVar1;
 
 piVar1 = std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 ((__uniq_ptr_impl_int__std_default_delete_int____ *)this_ptr);
 return piVar1;
}



/* Function: tuple<> @ 000137e4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void tuple<>(tuple_int___std_default_delete_int___ * this) */

void 
std_std_tuple_int___std_default_delete_int______tuple(tuple_int___std_default_delete_int___ *this_ptr)

{
 std__Tuple_impl_0__int___std_default_delete_int______Tuple_impl
 (&this_ptr->super__Tuple_impl_0__int___std_default_delete_int__);
 return;
}



/* Function: std_get_0__int___std_default_delete_int__ @ 0001380a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std_default_delete_int > */

__tuple_element_t *
std_get_0__int___std_default_delete_int__(tuple_int___std_default_delete_int___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0__int___std_default_delete_int__
 (&__t->super__Tuple_impl_0__int___std_default_delete_int__);
 return ppiVar1;
}



/* Function: _M_deleter @ 00013830 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: default_delete_int *
 _M_deleter(__uniq_ptr_impl<int,_std_default_delete_int_> * this) */

default_delete_int * 
std_std___uniq_ptr_impl_int__std_default_delete_int______M_deleter
 (__uniq_ptr_impl_int__std_default_delete_int__ *this)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = std_get_1__int___std_default_delete_int__(&this->_M_t);
 return (default_delete_int *)p_Var1;
}



/* Function: _M_ptr @ 00013856 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std_default_delete_int_> * this)
 */

pointer 
std_std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 (__uniq_ptr_impl_int__std_default_delete_int__ *this)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0__int___std_default_delete_int__(&this->_M_t);
 return *ppiVar1;
}



/* Function: tuple<> @ 0001387e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void tuple<>(tuple_int___std_default_delete_int____ * this) */

void 
std_tuple_int___std_default_delete_int______tuple
 (tuple_int___std_default_delete_int____ *this_ptr)

{
 std__Tuple_impl_0__int___std_default_delete_int______Tuple_impl
 (&this_ptr->super__Tuple_impl_0__int___std_default_delete_int____);
 return;
}



/* Function: std_get_0__int___std_default_delete_int____ @ 000138a4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std_default_delete<int []> > */

__tuple_element_t *
std_get_0__int___std_default_delete_int____(tuple_int___std_default_delete_int____ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0__int___std_default_delete_int____
 (&__t->super__Tuple_impl_0__int___std_default_delete_int____);
 return ppiVar1;
}



/* Function: _M_deleter @ 000138ca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: default_delete_int____ *
 _M_deleter(__uniq_ptr_impl<int,_std_default_delete_int_____> * this) */

default_delete_int____ * 
std___uniq_ptr_impl_int__std_default_delete_int______M_deleter
 (__uniq_ptr_impl_int__std_default_delete_int____ *this)

{
 __tuple_element_t_conflict *p_Var1;
 
 p_Var1 = std_get_1__int___std_default_delete_int____(&this->_M_t);
 return (default_delete_int____ *)p_Var1;
}



/* Function: _M_ptr @ 000138f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std_default_delete_int_____> *
 this) */

pointer 
std___uniq_ptr_impl_int__std_default_delete_int______M_ptr
 (__uniq_ptr_impl_int__std_default_delete_int____ *this)

{
 __tuple_element_t *ppiVar1;
 
 ppiVar1 = std_get_0__int___std_default_delete_int____(&this->_M_t);
 return *ppiVar1;
}



/* Function: _Tuple_impl @ 00013918 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std_default_delete_int_> *
 this) */

void 
std_std__Tuple_impl_0__int___std_default_delete_int______Tuple_impl
 (_Tuple_impl_0__int___std_default_delete_int__ *this_ptr)

{
 std__Tuple_impl_1__std_default_delete_int______Tuple_impl
 (&this_ptr->super__Tuple_impl_1__std_default_delete_int__);
 std__Head_base_0__int___false__Head_base((_Head_base_0__int___false *)this_ptr);
 return;
}



/* Function: std___get_helper_0__int___std_default_delete_int__ @ 0001394c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std_default_delete_int > */

int ** std_std___get_helper_0__int___std_default_delete_int__
 (_Tuple_impl_0__int___std_default_delete_int__ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0__int___std_default_delete_int______M_head(__t);
 return ppiVar1;
}



/* Function: std_get_1__int___std_default_delete_int__ @ 00013970 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<1, int*, std_default_delete_int > */

__tuple_element_t_conflict *
std_get_1__int___std_default_delete_int__(tuple_int___std_default_delete_int___ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__get_helper_1__std_default_delete_int__
 ((_Tuple_impl_1__std_default_delete_int__ *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: std_get_0__int___std_default_delete_int__ @ 00013994 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std_default_delete_int > */

__tuple_element_t *
std_get_0__int___std_default_delete_int__(tuple_int___std_default_delete_int___ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0__int___std_default_delete_int__
 (&__t->super__Tuple_impl_0__int___std_default_delete_int__);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 000139ba */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std_default_delete_int_____> *
 this) */

void 
std__Tuple_impl_0__int___std_default_delete_int______Tuple_impl
 (_Tuple_impl_0__int___std_default_delete_int____ *this_ptr)

{
 std__Tuple_impl_1__std_default_delete_int______Tuple_impl
 (&this_ptr->super__Tuple_impl_1__std_default_delete_int____);
 std__Head_base_0__int___false__Head_base_int_and_impl((_Head_base_0__int___false *)this_ptr,(int **)0);
 return;
}



/* Function: std___get_helper_0__int___std_default_delete_int____ @ 000139ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std_default_delete<int []> > */

int ** std___get_helper_0__int___std_default_delete_int____
 (_Tuple_impl_0__int___std_default_delete_int____ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0__int___std_default_delete_int______M_head(__t);
 return ppiVar1;
}



/* Function: std_get_1__int___std_default_delete_int____ @ 00013a12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<1, int*, std_default_delete<int []> > */

__tuple_element_t_conflict *
std_get_1__int___std_default_delete_int____(tuple_int___std_default_delete_int____ *__t)

{
 default_delete_int____ *pdVar1;
 
 pdVar1 = std__get_helper_1__std_default_delete_int____
 ((_Tuple_impl_1__std_default_delete_int____ *)__t);
 return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: std_get_0__int___std_default_delete_int____ @ 00013a36 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std_default_delete<int []> > */

__tuple_element_t *
std_get_0__int___std_default_delete_int____(tuple_int___std_default_delete_int____ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std___get_helper_0__int___std_default_delete_int____
 (&__t->super__Tuple_impl_0__int___std_default_delete_int____);
 return ppiVar1;
}



/* Function: forward_int_and_ @ 00013a5b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std_forward_int_and_(type *__t)

{
 return __t;
}



/* Function: _Tuple_impl @ 00013a72 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std_default_delete_int_> * this) */

void 
 std_std__Tuple_impl_1__std_default_delete_int______Tuple_impl
 (_Tuple_impl_1__std_default_delete_int__ *this_ptr)

{
 std__Head_base_1__std_default_delete_int__true__Head_base
 (&this_ptr->super__Head_base_1__std_default_delete_int__true,(anon_struct_1_0_00000001_for__M_head_impl *)0);
 return;
}



/* Function: _Head_base @ 00013a98 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base_0__int___false * this) */

void std__Head_base_0__int___false__Head_base(_Head_base_0__int___false *this_ptr)

{
 this_ptr->_M_head_impl = (int *)0x0;
 return;
}



/* Function: _M_head @ 00013ab5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std_std__Tuple_impl_0__int___std_default_delete_int______M_head
 (_Tuple_impl_0__int___std_default_delete_int__ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0__int___false__M_head((_Head_base_0__int___false *)__t);
 return ppiVar1;
}



/* Function: std___get_helper_1__std_default_delete_int__ @ 00013ada */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1, std_default_delete_int > */

 default_delete_int *
std_std___get_helper_1__std_default_delete_int__(_Tuple_impl_1__std_default_delete_int__ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__Tuple_impl_1__std_default_delete_int______M_head(__t);
 return pdVar1;
}



/* Function: std___get_helper_0__int___std_default_delete_int__ @ 00013afe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std_default_delete_int > */

int ** std_std___get_helper_0__int___std_default_delete_int__
 (_Tuple_impl_0__int___std_default_delete_int__ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0__int___std_default_delete_int______M_head(__t);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013b22 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std_default_delete_int_____> * this)
 */

void 
 std__Tuple_impl_1__std_default_delete_int______Tuple_impl
 (_Tuple_impl_1__std_default_delete_int____ *this_ptr)

{
 std__Head_base_1__std_default_delete_int____true__Head_base
 (&this_ptr->super__Head_base_1__std_default_delete_int____true,(anon_struct_1_0_00000001_for__M_head_impl *)0);
 return;
}



/* Function: _M_head @ 00013b47 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std__Tuple_impl_0__int___std_default_delete_int______M_head
 (_Tuple_impl_0__int___std_default_delete_int____ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0__int___false__M_head((_Head_base_0__int___false *)__t);
 return ppiVar1;
}



/* Function: std___get_helper_1__std_default_delete_int____ @ 00013b6c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1, std_default_delete<int []> > */

 default_delete_int____ *
std___get_helper_1__std_default_delete_int____
 (_Tuple_impl_1__std_default_delete_int____ *__t)

{
 default_delete_int____ *pdVar1;
 
 pdVar1 = std__Tuple_impl_1__std_default_delete_int______M_head(__t);
 return pdVar1;
}



/* Function: std___get_helper_0__int___std_default_delete_int____ @ 00013b90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std_default_delete<int []> > */

int ** std___get_helper_0__int___std_default_delete_int____
 (_Tuple_impl<0,_int*,_std_default_delete_int_____> *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Tuple_impl_0__int___std_default_delete_int______M_head(__t);
 return ppiVar1;
}



/* Function: _Head_base @ 00013bb4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base_0__int___false * this, int * * __h)
 */

void std__Head_base_0__int___false__Head_base_int_and_impl(_Head_base_0__int___false *this_ptr,int **__h)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_and_(__h);
 this_ptr->_M_head_impl = *ppiVar1;
 return;
}



/* Function: _Head_base @ 00013be0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base_1__std_default_delete_int__true * this)
 */

void std_std__Head_base_1__std_default_delete_int__true__Head_base
 (_Head_base_1__std_default_delete_int__true *this_ptr,
 anon_struct_1_0_00000001_for__M_head_impl *__h)

{
 return;
}



/* Function: _M_head @ 00013bf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std__Head_base_0__int___false__M_head(_Head_base_0__int___false *__b)

{
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013c0a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

 default_delete_int *
std_std__Tuple_impl_1__std_default_delete_int______M_head
 (_Tuple_impl_1__std_default_delete_int__ *__t)

{
 default_delete_int *pdVar1;
 
 pdVar1 = std__Head_base_1__std_default_delete_int__true__M_head
 (&__t->super__Head_base_1__std_default_delete_int__true);
 return pdVar1;
}



/* Function: _M_head @ 00013c2e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std_std__Tuple_impl_0__int___std_default_delete_int______M_head
 (_Tuple_impl_0__int___std_default_delete_int__ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0__int___false__M_head((_Head_base_0__int___false *)__t);
 return ppiVar1;
}



/* Function: _Head_base @ 00013c54 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base_1__std_default_delete_int____true *
 this) */

void std__Head_base_1__std_default_delete_int____true__Head_base
 (_Head_base_1__std_default_delete_int____true *this_ptr)

{
 return;
}



/* Function: _M_head @ 00013c68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

 default_delete_int____ *
std__Tuple_impl_1__std_default_delete_int______M_head
 (_Tuple_impl_1__std_default_delete_int____ *__t)

{
 default_delete_int____ *pdVar1;
 
 pdVar1 = std__Head_base_1__std_default_delete_int____true__M_head
 (&__t->super__Head_base_1__std_default_delete_int____true);
 return pdVar1;
}



/* Function: _M_head @ 00013c8c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std__Tuple_impl_0__int___std_default_delete_int______M_head
 (_Tuple_impl_0__int___std_default_delete_int____ *__t)

{
 int **ppiVar1;
 
 ppiVar1 = std__Head_base_0__int___false__M_head((_Head_base_0__int___false *)__t);
 return ppiVar1;
}



/* Function: _M_head @ 00013cb1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

 default_delete_int *
std_std__Head_base_1__std_default_delete_int__true__M_head
 (_Head_base_1__std_default_delete_int__true *__b)

{
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013cc7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std__Head_base_0__int___false__M_head(_Head_base_0__int___false *__b)

{
 return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013cdd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

 default_delete_int____ *
std__Head_base_1__std_default_delete_int____true__M_head
 (_Head_base_1__std_default_delete_int____true *__b)

{
 return &__b->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 00013cf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void  RTTIDerivedB_destructor(RTTIDerivedB *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00018c1c;
 RTTIBase_destructor(&this_ptr->super_RTTIBase,in_stack_ffffffe8);
 return;
}



/* Function: ~RTTIDerivedB @ 00013d26 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void  RTTIDerivedB_destructor2(RTTIDerivedB *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 RTTIDerivedB_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00013d60 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void  RTTIDerivedA_destructor(RTTIDerivedA *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 (this_ptr->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00018c30;
 RTTIBase_destructor(&this_ptr->super_RTTIBase,in_stack_ffffffe8);
 return;
}



/* Function: ~RTTIDerivedA @ 00013d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void  RTTIDerivedA_destructor2(RTTIDerivedA *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 RTTIDerivedA_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~DiamondDerived @ 00013dcc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void 
DiamondDerived_destructor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 undefined **__in_chrg_00;
 void **in_stack_ffffffec;
 
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)0x18c5c;
 *(undefined4 *)&this_ptr->field_0x10 = 0x18c90;
 *(undefined4 *)&(this_ptr->super_MiddleA).field_0x8 = 0x18c74;
 MiddleB_destructor((MiddleB *)&(this_ptr->super_MiddleA).field_0x8,0x18ca8,in_stack_ffffffec);
 __in_chrg_00 = &PTR_construction_vtable_12__00018ca0;
 MiddleA_destructor(&this_ptr->super_MiddleA,0x18ca0,in_stack_ffffffec);
 VirtualBase_destructor((VirtualBase *)&this_ptr->field_0x10,(int)__in_chrg_00);
 return;
}



/* Function: ~DiamondDerived @ 00013e4e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void  DiamondDerived_thunk_destructor3(DiamondDerived *this)

{
 int in_stack_00000008;
 void **in_stack_0000000c;
 
 DiamondDerived_destructor((DiamondDerived *)&this[-1].field_0x10,in_stack_00000008,in_stack_0000000c);
 return;
}



/* Function: ~DiamondDerived @ 00013e5c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void  DiamondDerived_thunk_destructor4(DiamondDerived *this)

{
 int in_stack_00000008;
 void **in_stack_0000000c;
 
 DiamondDerived_destructor((DiamondDerived *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]),in_stack_00000008,in_stack_0000000c);
 return;
}



/* Function: ~DiamondDerived @ 00013e72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void 
DiamondDerived_destructor2(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 int in_stack_ffffffe8;
 void **in_stack_ffffffec;
 
 DiamondDerived_destructor(this_ptr,in_stack_ffffffe8,in_stack_ffffffec);
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00013eab */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void  DiamondDerived_thunk_destructor(DiamondDerived *this)

{
 int in_stack_00000008;
 void **in_stack_0000000c;
 
 DiamondDerived_destructor((DiamondDerived *)&this[-1].field_0x10,in_stack_00000008,in_stack_0000000c);
 return;
}



/* Function: ~DiamondDerived @ 00013eb6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void  DiamondDerived_thunk_destructor2(DiamondDerived *this)

{
 int in_stack_00000008;
 void **in_stack_0000000c;
 
 DiamondDerived_destructor((DiamondDerived *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]),in_stack_00000008,in_stack_0000000c);
 return;
}



/* Function: ~MultiDerived @ 00013eca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void  MultiDerived_destructor(MultiDerived *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 (this_ptr->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d3c;
 (this_ptr->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d54;
 BaseB_destructor(&this_ptr->super_BaseB,in_stack_ffffffe8);
 BaseA_destructor(&this_ptr->super_BaseA,in_stack_ffffffe8);
 return;
}



/* Function: ~MultiDerived @ 00013f19 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void  MultiDerived_thunk_destructor3(MultiDerived *this)

{
 int in_stack_00000008;
 
 MultiDerived_destructor((MultiDerived *)&this[-1].super_BaseB,in_stack_00000008);
 return;
}



/* Function: ~MultiDerived @ 00013f24 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void  MultiDerived_destructor2(MultiDerived *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 MultiDerived_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00013f5d */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void  MultiDerived_thunk_destructor5(MultiDerived *this)

{
 int in_stack_00000008;
 
 MultiDerived_destructor((MultiDerived *)&this[-1].super_BaseB,in_stack_00000008);
 return;
}



/* Function: ~Derived @ 00013f68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void  Derived_destructor(Derived *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 (this_ptr->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018d90;
 Base_destructor(&this_ptr->super_Base,in_stack_ffffffe8);
 return;
}



/* Function: ~Derived @ 00013f9a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void  Derived_destructor2(Derived *this_ptr,int __in_chrg)

{
 int in_stack_ffffffe8;
 
 Derived_destructor(this_ptr,in_stack_ffffffe8);
 operator_delete(this_ptr,8);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00013fd3 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00013fd7 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00013fe0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 211 */
