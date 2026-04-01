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
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef void undefined;
typedef void (*code)(void);
typedef void type;

/* External function declarations */
extern void __stack_chk_fail(void);
extern void __cxa_throw_bad_array_new_length(void);
extern void __cxa_bad_typeid(void);
extern long __dynamic_cast(void*,void*,void*,int);
extern void* __cxa_allocate_exception(size_t);
extern void __cxa_throw(void*,void*,void);
extern void* operator_new(size_t);
extern void* operator_new__(size_t);
extern void operator_delete(void*,size_t);
extern void operator_delete__(void*);
extern int strcmp(const char*,const char*);
extern size_t strlen(const char*);
extern int puts(const char*);
extern int printf(const char*,...);
extern void strncpy(char*,const char*,size_t);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001023ca */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 SimpleClass local_38 [40];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 SimpleClass_SimpleClass(local_38,5,"Test");
 SimpleClass_setValue(local_38,10);
 iVar1 = SimpleClass_getValue(local_38);
 iVar2 = SimpleClass_compute(local_38,3);
 iVar3 = SimpleClass_getClassID();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar3 + iVar1 + iVar2;
}



/* Function: test_cpp_constructor @ 0010245c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 LifecycleClass local_28 [24];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 LifecycleClass_LifecycleClass(local_28,5);
 iVar1 = LifecycleClass_getData(local_28,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass__LifecycleClass(local_28);
 iVar3 = LifecycleClass_getInstanceCount();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3 * 1000;
}



/* Function: call_virtual_func @ 001024de */

/* call_virtual_func(Base*, int) */

void call_virtual_func(void *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 0010250b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 undefined **local_50;
 Base *local_48;
 Base *local_40;
 Derived local_38 [24];
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_50 = &PTR_virtual_func_00108b50;
 Derived_Derived(local_38,3);
 iVar1 = Base_virtual_func((Base *)&local_50,5);
 iVar2 = Derived_virtual_func(local_38,5);
 local_48 = (Base *)&local_50;
 local_40 = (Base *)local_38;
 /* try { // try from 00102587 to 0010259f has its CatchHandler @ 001025e1 */
 iVar3 = call_virtual_func(local_48,5);
 iVar4 = call_virtual_func(local_40,5);
 Derived__Derived(local_38);
 Base__Base((Base *)&local_50);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00102616 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined8 local_48;
 undefined4 local_40;
 undefined8 local_38;
 undefined4 local_30;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 MultiDerived_MultiDerived((MultiDerived *)&local_48);
 local_40 = 100;
 local_30 = 200;
 /* try { // try from 00102671 to 00102688 has its CatchHandler @ 001026ca */
 iVar1 = MultiDerived_funcA((MultiDerived *)&local_48);
 iVar2 = MultiDerived_funcB((MultiDerived *)&local_38);
 MultiDerived__MultiDerived((MultiDerived *)&local_48);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + (uint)(&local_48 != &local_38);
}



/* Function: test_cpp_diamond_inheritance @ 001026f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 DiamondDerived local_58 [32];
 undefined8 local_38;
 undefined4 local_30;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 DiamondDerived_DiamondDerived(local_58);
 local_30 = 0x32;
 /* try { // try from 0010273f to 0010275d has its CatchHandler @ 00102789 */
 iVar1 = DiamondDerived_func(local_58);
 local_30 = 100;
 iVar2 = DiamondDerived_func(local_58);
 DiamondDerived__DiamondDerived(local_58);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 001027b2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 char cVar1;
 int iVar2;
 long in_FS_OFFSET;
 Point local_28 [8];
 Point local_20 [8];
 undefined8 local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 Point_Point(local_28,1,2);
 Point_Point(local_20,3,4);
 local_18 = Point_operator+(local_28,local_20);
 cVar1 = Point_operator==(local_28,local_20);
 Point_operator++((Point *)&local_18);
 if (cVar1 == '\0') {
 iVar2 = 10;
 }
 else {
 iVar2 = 0;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_18._4_4_ + (int)local_18 + iVar2;
}



/* Function: test_cpp_template_func @ 00102864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 long in_FS_OFFSET;
 int local_24;
 int local_20;
 int local_1c;
 double local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = template_max_int(3,7);
 local_18 = template_max_double(2.5,1.5);
 local_24 = 10;
 local_20 = 0x14;
 template_swap_int(&local_24,&local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_20 + (int)local_18 + local_1c + local_24;
}



/* Function: test_cpp_template_class @ 00102906 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 double dVar3;
 Container_int local_98 [48];
 Container_double local_68 [88];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 Container_int_Container(local_98);
 Container_int_push(local_98,10);
 Container_int_push(local_98,0x14);
 Container_int_push(local_98,0x1e);
 iVar1 = Container_int_get(local_98,0);
 iVar2 = Container_int_getSize(local_98);
 Container_double_Container(local_68);
 Container_double_push(local_68,3.14);
 dVar3 = (double)Container_double_get(local_68,0);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)dVar3 + iVar1 + iVar2;
}



/* Function: operator() @ 00102a12 */

/* test_cpp_lambda__lambda_int_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int test_cpp_lambda__lambda_int_1_operator(void *this_ptr,int param_1)

{
 **(int **)((char *)this_ptr + 8) = **(int **)((char *)this_ptr + 8) + 5;
 return **(int **)((char *)this_ptr + 8) + *(int *)this_ptr * param_1;
}



/* Function: test_cpp_lambda @ 00102a4e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 long in_FS_OFFSET;
 undefined4 local_38;
 undefined4 local_34;
 int local_30;
 undefined4 local_2c;
 undefined4 local_28 [2];
 undefined4 *local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34 = 10;
 local_38 = 0x14;
 local_28[0] = 10;
 local_20 = &local_38;
 local_30 = test_cpp_lambda__lambda_int_1_operator((void *)local_28,3);
 local_2c = 0x1e;
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_30 + 0x1e;
}



/* Function: test_cpp_exception @ 00102abe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00102af6 to 00102afa has its CatchHandler @ 00102b03 */
 __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: operator() @ 00102be4 */

/* test_cpp_smart_ptr__lambda_int_ptr_1::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void test_cpp_smart_ptr__lambda_int_ptr_1_operator(void *this_ptr,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 00102c17 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int *piVar2;
 undefined4 *puVar3;
 type *ptVar4;
 long in_FS_OFFSET;
 _lambda_int___1_ local_4d;
 int local_4c;
 int local_48;
 int local_44;
 unique_ptr_int_default_delete_int local_40 [8];
 unique_ptr_int_default_delete_int local_38 [8];
 unique_ptr_int_array_default_delete_int_array local_30 [8];
 unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1 local_28 [8];
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 piVar2 = operator_new(4);
 *piVar2 = 100;
 unique_ptr_int_default_unique_ptr_default_delete_int_void
 (local_40,piVar2);
 puVar3 = (undefined4 *)unique_ptr_int_default_operator(local_40);
 *puVar3 = 200;
 ptVar4 = std_move_unique_ptr_int_default_ref((unique_ptr *)local_40);
 unique_ptr_int_default_unique_ptr(local_38,(unique_ptr *)ptVar4);
 piVar2 = (int *)unique_ptr_int_default_operator(local_38);
 local_4c = *piVar2;
 /* try { // try from 00102c98 to 00102c9c has its CatchHandler @ 00102d90 */
 piVar2 = operator_new__(0x14);
 *piVar2 = 1;
 piVar2[1] = 2;
 piVar2[2] = 3;
 piVar2[3] = 4;
 piVar2[4] = 5;
 unique_ptr_int_array_default_unique_ptr_int_ptr_default_delete_int_array_void_bool(local_30,piVar2);
 piVar2 = (int *)unique_ptr_int_array_default_operator_bracket(local_30,2);
 local_48 = *piVar2;
 /* try { // try from 00102cfb to 00102cff has its CatchHandler @ 00102d7b */
 piVar2 = operator_new(4);
 *piVar2 = 500;
 unique_ptr_lambda_int_ptr_unique_ptr(local_28,piVar2,(void *)&local_4d);
 piVar2 = (int *)unique_ptr_lambda_int_ptr_operator(local_28);
 local_44 = *piVar2;
 iVar1 = local_4c + local_48 + local_44;
 unique_ptr_lambda_int_ptr__unique_ptr(local_28);
 unique_ptr_int_array_default__unique_ptr(local_30);
 unique_ptr_int_default__unique_ptr(local_38);
 unique_ptr_int_default__unique_ptr(local_40);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: test_cpp_rtti @ 00102dc5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 long lVar3;
 char *__s;
 size_t sVar4;
 int local_3c;
 
 this = operator_new(8);
 *(undefined8 *)this = 0;
 RTTIDerivedA_RTTIDerivedA(this);
 this_00 = operator_new(8);
 *(undefined8 *)this_00 = 0;
 RTTIDerivedB_RTTIDerivedB(this_00);
 local_3c = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00102e46:
 local_3c = 10;
 }
 else {
 cVar1 = type_info_operator==
 (*(type_info **)(*(long *)this + -8),(type_info *)&RTTIDerivedA_typeinfo);
 if (cVar1 != '\0') goto LAB_00102e46;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00102e77:
 local_3c = local_3c + 0x14;
 }
 else {
 cVar1 = type_info_operator==
 (*(type_info **)(*(long *)this_00 + -8),(type_info *)&RTTIDerivedB_typeinfo);
 if (cVar1 != '\0') goto LAB_00102e77;
 }
 if (this == (RTTIDerivedA *)0x0) {
 lVar3 = 0;
 }
 else {
 lVar3 = __dynamic_cast(this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (lVar3 != 0) {
 iVar2 = RTTIDerivedA_derivedA_data(this);
 local_3c = local_3c + iVar2;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 lVar3 = 0;
 }
 else {
 lVar3 = __dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (lVar3 != 0) {
 iVar2 = RTTIDerivedB_derivedB_data(this_00);
 local_3c = local_3c + iVar2;
 }
 if (this == (RTTIDerivedA *)0x0) {
 this = (RTTIDerivedA *)__cxa_bad_typeid();
 }
 else {
 __s = (char *)type_info_name(*(type_info **)(*(long *)this + -8));
 sVar4 = strlen(__s);
 local_3c = local_3c + (int)sVar4;
 if (this == (RTTIDerivedA *)0x0) goto LAB_00102f4e;
 }
 RTTIDerivedA__RTTIDerivedA(this);
LAB_00102f4e:
 if (this_00 != (RTTIDerivedB *)0x0) {
 RTTIDerivedB__RTTIDerivedB(this_00);
 }
 return local_3c;
}



/* Function: test_cpp_oo_features @ 00102f6f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 
 puts(&DAT_00105040);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00105064,(ulong)uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00105082,(ulong)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_0010509e,(ulong)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_001050ba,(ulong)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_001050d6,(ulong)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_001050f3,(ulong)uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_0010510f,(ulong)uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0010512b,(ulong)uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00105147,(ulong)uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00105163,(ulong)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00105180,(ulong)uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0010519d,(ulong)uVar1);
 return;
}



/* Function: main @ 001030cd */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr__lambda_int_ptr_1const&> @ 001030e2 */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr__lambda_int_ptr_1, true,
 false>::__uniq_ptr_impl<test_cpp_smart_ptr__lambda_int_ptr_1 const&>(int*,
 test_cpp_smart_ptr__lambda_int_ptr_1 const&) */

void uniq_ptr_data_lambda_int_ptr___uniq_ptr_impl
 (__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_1_true_false *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)

{
 __uniq_ptr_impl<int,test_cpp_smart_ptr__lambda_int_ptr_1>::
 __uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this_ptr,param_1,param_2);
 return;
}



/* Function: unique_ptr<test_cpp_smart_ptr__lambda_int_ptr_1,void> @ 00103110 */

/* std::unique_ptr<int,
 test_cpp_smart_ptr__lambda_int_ptr_1>::unique_ptr<test_cpp_smart_ptr__lambda_int_ptr_1,
 void>(int*, test_cpp_smart_ptr__lambda_int_ptr_1 const&) */

void unique_ptr_lambda_int_ptr_unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)

{
 __uniq_ptr_data<int,test_cpp_smart_ptr__lambda_int_ptr_1,true,false>::
 __uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
 ((__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda(int*)_1_,true,false> *)this_ptr,param_1,
 param_2);
 return;
}



/* Function: ~unique_ptr @ 0010313e */

/* std::unique_ptr<int, test_cpp_smart_ptr__lambda_int_ptr_1>::~unique_ptr() */

void unique_ptr_lambda_int_ptr__unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)uniq_ptr_impl_lambda_int_ptr__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1 *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)unique_ptr_lambda_int_ptr_get_deleter(this_ptr);
 ptVar2 = std_move_int_ptr_ref(ppiVar1);
 test_cpp_smart_ptr__lambda_int_ptr_1_operator(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: operator* @ 001031a2 */

/* std::unique_ptr<int, test_cpp_smart_ptr__lambda_int_ptr_1>::TEMPNAMEPLACEHOLDERVALUE() const */

int* unique_ptr_lambda_int_ptr_operator
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 return (int*)unique_ptr_lambda_int_ptr_get(this_ptr);
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr__lambda_int_ptr_1const&> @ 001031c4 */

/* std::__uniq_ptr_impl<int,
 test_cpp_smart_ptr__lambda_int_ptr_1>::__uniq_ptr_impl<test_cpp_smart_ptr__lambda_int_ptr_1
 const&>(int*, test_cpp_smart_ptr__lambda_int_ptr_1 const&) */

void uniq_ptr_impl_lambda_int_ptr___uniq_ptr_impl
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr,int *param_1,
 _lambda_int___1_ *param_2)

{
 _lambda_int___1_ *p_Var1;
 int *local_28;
 
 local_28 = param_1;
 p_Var1 = std_forward_lambda_int_ptr_const_ref((void *)param_2);
 tuple_int_ptr_lambda_tuple
 ((tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *)this_ptr,&local_28,p_Var1);
 return;
}



/* Function: _M_ptr @ 00103202 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr__lambda_int_ptr_1>::_M_ptr() */

type* uniq_ptr_impl_lambda_int_ptr__M_ptr
 (tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 return (type*)std_get_0ul_int_ptr_lambda_int_ptr_1_((tuple *)this_ptr);
}



/* Function: get_deleter @ 0010321c */

/* std::unique_ptr<int, test_cpp_smart_ptr__lambda_int_ptr_1>::get_deleter() */

type* unique_ptr_lambda_int_ptr_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 return (type*)uniq_ptr_impl_lambda_int_ptr__M_deleter((tuple *)this_ptr);
}



/* Function: get @ 00103236 */

/* std::unique_ptr<int, test_cpp_smart_ptr__lambda_int_ptr_1>::get() const */

type* unique_ptr_lambda_int_ptr_get
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 return (type*)uniq_ptr_impl_lambda_int_ptr__M_ptr((tuple *)this_ptr);
}



/* Function: forward<test_cpp_smart_ptr__lambda_int_ptr_1const&> @ 00103250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr__lambda_int_ptr_1 const& std_forward_test_cpp_smart_ptr__lambda_int_ptr_1
 const&>(type *) */

_lambda_int___1_ * std_forward_lambda_int_ptr_const_ref(void *param_1)

{
 return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr__lambda_int_ptr_1const&,true> @ 0010325e */

/* std::tuple<int*, test_cpp_smart_ptr__lambda_int_ptr_1>::tuple<int*&,
 test_cpp_smart_ptr__lambda_int_ptr_1 const&, true>(int*&,
 test_cpp_smart_ptr__lambda_int_ptr_1 const&) */

void tuple_int_ptr_lambda_tuple
 (tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr,int **param_1,
 _lambda_int___1_ *param_2)

{
 _lambda_int___1_ *p_Var1;
 int **ppiVar2;
 
 p_Var1 = std_forward_lambda_int_ptr_const_ref(param_2);
 ppiVar2 = std_forward_int_ptr_ref((void *)param_1);
 _Tuple_impl_0_int_ptr_lambda__Tuple_impl
 ((_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *)this_ptr,ppiVar2,p_Var1);
 return;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr__lambda_int_ptr_1> @ 001032ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr__lambda_int_ptr_1> >::type&
 std_get_0ul_int_ptr_lambda_int_ptr_1>(std::tuple<int*,
 test_cpp_smart_ptr__lambda_int_ptr_1>&) */

void * std_get_0ul_int_ptr_lambda_int_ptr_1_(tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *param_1)

{
 void *pvVar1;
 
 pvVar1 = (void *)__get_helper_0ul_int_ptr_lambda_int_ptr_1_
 ((_Tuple_impl *)param_1);
 return pvVar1;
}



/* Function: _M_deleter @ 001032c6 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr__lambda_int_ptr_1>::_M_deleter() */

void* uniq_ptr_impl_lambda_int_ptr__M_deleter
 (tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 return (void*)std_get_1ul_int_ptr_lambda_int_ptr_1_((tuple *)this_ptr);
}



/* Function: _M_ptr @ 001032e0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr__lambda_int_ptr_1>::_M_ptr() const */

undefined8 uniq_ptr_impl_lambda_int_ptr__M_ptr_const
 (tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr)

{
 void *pvVar1;
 
 pvVar1 = (void*)std_get_0ul_int_ptr_lambda_int_ptr_1_((tuple *)this_ptr);
 return *(undefined8 *)pvVar1;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr__lambda_int_ptr_1const&,void> @ 001032fe */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr__lambda_int_ptr_1>::_Tuple_impl<int*&,
 test_cpp_smart_ptr__lambda_int_ptr_1 const&, void>(int*&,
 test_cpp_smart_ptr__lambda_int_ptr_1 const&) */

void Tuple_impl_0_int_ptr_lambda__Tuple_impl
 (_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *this_ptr,int **param_1,
 _lambda_int___1_ *param_2)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ptr_ref((void *)param_1);
 _Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(ppiVar1);
 return;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr__lambda_int_ptr_1> @ 00103353 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std_get_helper_0ul, int*, test_cpp_smart_ptr__lambda_int_ptr_1>(std::_Tuple_impl<0ul,
 int*, test_cpp_smart_ptr__lambda_int_ptr_1>&) */

int ** std_get_helper_0ul_int_ptr_lambda_int_ptr_1_(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1__M_head((void*)param_1);
 return ppiVar1;
}



/* Function: get<1ul,int*,test_cpp_smart_ptr__lambda_int_ptr_1> @ 0010336d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr__lambda_int_ptr_1> >::type&
 std_get_1ul_int_ptr_lambda_int_ptr_1>(std::tuple<int*,
 test_cpp_smart_ptr__lambda_int_ptr_1>&) */

void * std_get_1ul_int_ptr_lambda_int_ptr_1_(tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = __get_helper_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_((_Tuple_impl *)param_1);
 return (void *)p_Var1;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr__lambda_int_ptr_1> @ 00103387 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr__lambda_int_ptr_1> >::type const&
 std_get_0ul_int_ptr_lambda_int_ptr_1>(std::tuple<int*,
 test_cpp_smart_ptr__lambda_int_ptr_1> const&) */

void * std_get_0ul_int_ptr_lambda_int_ptr_1_const_(tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1 *param_1)

{
 void *pvVar1;
 
 pvVar1 = (void *)__get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1_
 ((_Tuple_impl *)param_1);
 return pvVar1;
}



/* Function: _Tuple_impl @ 001033a2 */

/* std::_Tuple_impl<1ul,
 test_cpp_smart_ptr__lambda_int_ptr_1>::_Tuple_impl(test_cpp_smart_ptr__lambda_int_ptr_1
 const&) */

void Tuple_impl_1_lambda__Tuple_impl
 (_lambda_int___1_ *this_ptr)

{
 Head_base_1_lambda__Head_base((_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_true*)this_ptr);
 return;
}



/* Function: _M_head @ 001033c8 */

/* std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr__lambda_int_ptr_1>::_M_head(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr__lambda_int_ptr_1>&) */

void Tuple_impl_0_int_ptr_lambda__M_head
 (_Head_base *this_ptr)

{
 _Head_base_0ul_int_ptr_false__M_head((_Head_base_0ul_int_ptr_false*)this_ptr);
 return;
}



/* Function: __get_helper<1ul,test_cpp_smart_ptr__lambda_int_ptr_1> @ 001033e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr__lambda_int_ptr_1& std_get_helper_1ul_test_cpp_smart_ptr__lambda_int_ptr_1
>(std::_Tuple_impl<1ul, test_cpp_smart_ptr__lambda_int_ptr_1>&) */

_lambda_int___1_ *
std_get_helper_1ul_lambda_int_ptr_1_(_Tuple_impl *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = (_lambda_int___1_ *)
 _Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr_1__M_head((void*)param_1);
 return p_Var1;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr__lambda_int_ptr_1> @ 001033fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std_get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_1
>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr__lambda_int_ptr_1> const&) */

int ** std_get_helper_0ul_int_ptr_lambda_int_ptr_1_(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_lambda_int_ptr_1__M_head((void*)param_1);
 return ppiVar1;
}



/* Function: _Head_base @ 00103416 */

/* std::_Head_base<1ul, test_cpp_smart_ptr__lambda_int_ptr_1,
 true>::_Head_base(test_cpp_smart_ptr__lambda_int_ptr_1 const&) */

void Head_base_1_lambda__Head_base
 (_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_true *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: _M_head @ 00103425 */

/* std::_Tuple_impl<1ul, test_cpp_smart_ptr__lambda_int_ptr_1>::_M_head(std::_Tuple_impl<1ul,
 test_cpp_smart_ptr__lambda_int_ptr_1>&) */

void Tuple_impl_1_lambda__M_head(_Head_base *this_ptr)

{
 Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_true__M_head((_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_true*)this_ptr);
 return;
}



/* Function: _M_head @ 0010343f */

/* std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr__lambda_int_ptr_1>::_M_head(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr__lambda_int_ptr_1> const&) */

void Tuple_impl_0_int_ptr_lambda__M_head_const
 (_Head_base *this_ptr)

{
 _Head_base_0ul_int_ptr_false__M_head((_Head_base_0ul_int_ptr_false*)this_ptr);
 return;
}



/* Function: _M_head @ 00103459 */

/* std::_Head_base<1ul, test_cpp_smart_ptr__lambda_int_ptr_1, true>::_M_head(std::_Head_base<1ul,
 test_cpp_smart_ptr__lambda_int_ptr_1, true>&) */

_Head_base *
Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_true__M_head(_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_1_true *this_ptr)

{
 return (_Head_base*)this_ptr;
}



/* Function: __static_initialization_and_destruction_0 @ 00103467 */

/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 ios_base_Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(ios_base_Init::~Init,&std::__ioinit,&__dso_handle);
 }
 return;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 001034bd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 001034d6 */

/* type_info::name() const */

long type_info_name(void *this_ptr)

{
 long lVar1;
 
 if (**(char **)((char *)this_ptr + 8) == '*') {
 lVar1 = *(long *)((char *)this_ptr + 8) + 1;
 }
 else {
 lVar1 = *(long *)((char *)this_ptr + 8);
 }
 return lVar1;
}



/* Function: operator== @ 0010350a */

/* type_info::TEMPNAMEPLACEHOLDERVALUE(type_info const&) const */

undefined8 type_info_operator==(void *this_ptr,void *param_1)

{
 int iVar1;
 undefined8 uVar2;
 
 if (*(long *)((char *)this_ptr + 8) == *(long *)((char *)param_1 + 8)) {
LAB_00103561:
 uVar2 = 1;
 }
 else {
 if (**(char **)((char *)this_ptr + 8) != '*') {
 iVar1 = strcmp(*(char **)((char *)this_ptr + 8),*(char **)((char *)param_1 + 8));
 if (iVar1 == 0) goto LAB_00103561;
 }
 uVar2 = 0;
 }
 return uVar2;
}



/* Function: SimpleClass @ 00103570 */

/* SimpleClass::SimpleClass(int, char const*) */

void SimpleClass_SimpleClass(void *this_ptr,int param_1,char *param_2)

{
 *(int *)this_ptr = param_1;
 strncpy((char *)((char *)this_ptr + 4),param_2,0x1f);
 ((char *)this_ptr)[0x23] = (char)0x0;
 return;
}



/* Function: getValue @ 001035b8 */

/* SimpleClass::getValue() const */

undefined4 SimpleClass_getValue(void *this_ptr)

{
 return *(undefined4 *)this_ptr;
}



/* Function: setValue @ 001035cc */

/* SimpleClass::setValue(int) */

void SimpleClass_setValue(void *this_ptr,int param_1)

{
 *(int *)this_ptr = param_1;
 return;
}



/* Function: compute @ 001035e8 */

/* SimpleClass::compute(int) const */

int SimpleClass_compute(void *this_ptr,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this_ptr;
 sVar2 = strlen((char *)((char *)this_ptr + 4));
 return (int)sVar2 + iVar1 * param_1;
}



/* Function: getClassID @ 00103620 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103630 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void LifecycleClass_LifecycleClass(void *this_ptr,ulong param_1)

{
 void *pvVar1;
 ulong local_10;
 
 *(ulong *)((char *)this_ptr + 8) = param_1;
 if (param_1 < 0x1fffffffffffffff) {
 pvVar1 = operator_new__(param_1 << 2);
 *(void **)this_ptr = pvVar1;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
LAB_00103688:
 *(int *)(local_10 * 4 + *(long *)this_ptr) = (int)local_10 * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00103688;
}



/* Function: ~LifecycleClass @ 001036d0 */

/* LifecycleClass::~LifecycleClass() */

void LifecycleClass__LifecycleClass(void *this_ptr)

{
 if (*(long *)this_ptr != 0) {
 operator_delete__(*(void **)this_ptr);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: getData @ 0010370e */

/* LifecycleClass::getData(unsigned long) const */

undefined4 LifecycleClass_getData(void *this_ptr,ulong param_1)

{
 undefined4 uVar1;
 
 if (param_1 < *(ulong *)((char *)this_ptr + 8)) {
 uVar1 = *(undefined4 *)(param_1 * 4 + *(long *)this_ptr);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: getInstanceCount @ 00103749 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 0010375a */

/* Base::virtual_func(int) */

int Base_virtual_func(void *this_ptr,int param_1)

{
 return *(int *)this_ptr + param_1 + 1;
}



/* Function: getName @ 00103772 */

/* Base::getName() const */

undefined * Base_getName(void *this_ptr)

{
 return &DAT_0010502d;
}



/* Function: ~Base @ 00103788 */

/* Base::~Base() */

void Base__Base(void *this_ptr)
{
 *(undefined ***)this_ptr = &PTR_virtual_func_00108b50;
 return;
}



/* Function: ~Base @ 001037a6 */

/* Base::~Base() */

void Base__Base_deleting(void *this_ptr)
{
 Base__Base(this_ptr);
 operator_delete(this_ptr,8);
 return;
}



/* Function: Base @ 001037d6 */

/* Base::Base() */

void Base_Base(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_virtual_func_00108b50;
 return;
}



/* Function: Derived @ 001037f4 */

/* Derived::Derived(int) */

void Derived_Derived(void *this_ptr,int param_1)

{
 Base_Base((void *)this_ptr);
 *(undefined ***)this_ptr = &PTR_virtual_func_00108b20;
 *(int *)((char *)this_ptr + 8) = param_1;
 return;
}



/* Function: virtual_func @ 0010382e */

/* Derived::virtual_func(int) */

int Derived_virtual_func(void *this_ptr,int param_1)

{
 return *(int *)((char *)this_ptr + 8) * param_1;
}



/* Function: getName @ 0010384a */

/* Derived::getName() const */

char * Derived_getName(void *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00103860 */

/* BaseA::funcA() */

undefined8 BaseA_funcA(void *this_ptr)

{
 return 10;
}



/* Function: ~BaseA @ 00103874 */

/* BaseA::~BaseA() */

void BaseA__BaseA(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcA_00108af8;
 return;
}



/* Function: ~BaseA @ 00103892 */

/* BaseA::~BaseA() */

void BaseA__BaseA_deleting(void *this_ptr)
{
 BaseA__BaseA(this_ptr);
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: funcB @ 001038c2 */

/* BaseB::funcB() */

undefined8 BaseB_funcB(void *this_ptr)

{
 return 0x14;
}



/* Function: ~BaseB @ 001038d6 */

/* BaseB::~BaseB() */

void BaseB__BaseB(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcB_00108ad0;
 return;
}



/* Function: ~BaseB @ 001038f4 */

/* BaseB::~BaseB() */

void BaseB__BaseB_deleting(void *this_ptr)
{
 BaseB__BaseB(this_ptr);
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: funcA @ 00103924 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00103938 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 0010394b */

/* non-virtual thunk to MultiDerived::funcB() */

void MultiDerived_funcB_thunk(void *this_ptr)
{
 MultiDerived_funcB(this_ptr);
 return;
}



/* Function: BaseA @ 00103956 */

/* BaseA::BaseA() */

void BaseA_BaseA(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcA_00108af8;
 return;
}



/* Function: BaseB @ 00103974 */

/* BaseB::BaseB() */

void BaseB_BaseB(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcB_00108ad0;
 return;
}



/* Function: MultiDerived @ 00103992 */

/* MultiDerived::MultiDerived() */

void MultiDerived_MultiDerived(void *this_ptr)

{
 BaseA_BaseA((void *)this_ptr);
 BaseB_BaseB((void *)((char *)this_ptr + 0x10));
 *(undefined ***)this_ptr = &PTR_funcA_00108a78;
 *(undefined ***)((char *)this_ptr + 0x10) = &PTR_funcB_00108aa8;
 return;
}



/* Function: func @ 001039de */

/* VirtualBase::func() */

undefined8 VirtualBase_func(void *this_ptr)

{
 return 100;
}



/* Function: ~VirtualBase @ 001039f2 */

/* VirtualBase::~VirtualBase() */

void VirtualBase__VirtualBase(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00108a50;
 return;
}



/* Function: ~VirtualBase @ 00103a10 */

/* VirtualBase::~VirtualBase() */

void VirtualBase__VirtualBase_deleting(void *this_ptr)
{
 VirtualBase__VirtualBase(this_ptr);
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: func @ 00103a40 */

/* MiddleA::func() */

int MiddleA_func(void *this_ptr)

{
 return *(int *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}



/* Function: func @ 00103a6e */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(void *this_ptr)
{
 MiddleA_func((void *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x18)));
 return;
}



/* Function: func @ 00103a7c */

/* MiddleB::func() */

int MiddleB_func(void *this_ptr)

{
 return *(int *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}



/* Function: func @ 00103aaa */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(void *this_ptr)
{
 MiddleB_func((void *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x18)));
 return;
}



/* Function: func @ 00103ab8 */

/* DiamondDerived::func() */

int DiamondDerived_func(void *this_ptr)

{
 return *(int *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00103ae6 */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(void *this_ptr)
{
 DiamondDerived_func((void *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x18)));
 return;
}



/* Function: func @ 00103af3 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(void *this_ptr)
{
 DiamondDerived_func((void *)((long)this_ptr + -0x10));
 return;
}



/* Function: VirtualBase @ 00103afe */

/* VirtualBase::VirtualBase() */

void VirtualBase_VirtualBase(void *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00108a50;
 return;
}



/* Function: MiddleA @ 00103b1c */

/* MiddleA::MiddleA() */

void MiddleA_MiddleA(void *this_ptr)

{
 return;
}



/* Function: ~MiddleA @ 00103b60 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA(void *this_ptr)

{
 return;
}



/* Function: MiddleB @ 00103ba4 */

/* MiddleB::MiddleB() */

void MiddleB_MiddleB(void *this_ptr)

{
 return;
}



/* Function: ~MiddleB @ 00103be8 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB(void *this_ptr)

{
 return;
}



/* Function: DiamondDerived @ 00103c2c */

/* DiamondDerived::DiamondDerived() */

void DiamondDerived_DiamondDerived(void *this_ptr)

{
 VirtualBase_VirtualBase((void *)((char *)this_ptr + 0x20));
 MiddleA_MiddleA((void *)this_ptr);
 MiddleB_MiddleB((void *)((char *)this_ptr + 0x10));
 *(undefined8 *)this_ptr = 0x1088b8;
 *(undefined8 *)((char *)this_ptr + 0x20) = 0x108920;
 *(undefined8 *)((char *)this_ptr + 0x10) = 0x1088e8;
 return;
}



/* Function: Point @ 00103cae */

/* Point::Point(int, int) */

void Point_Point(void *this_ptr,int param_1,int param_2)

{
 *(int *)this_ptr = param_1;
 *(int *)((char *)this_ptr + 4) = param_2;
 return;
}



/* Function: operator+ @ 00103cd6 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 Point_operator+(void *this_ptr,void *param_1)

{
 long in_FS_OFFSET;
 undefined8 local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 Point_Point((void *)&local_18,*(int *)this_ptr + *(int *)param_1,*(int *)((char *)this_ptr + 4) + *(int *)((char *)param_1 + 4)
 );
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_18;
}



/* Function: operator== @ 00103d40 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 Point_operator==(void *this_ptr,void *param_1)

{
 undefined8 uVar1;
 
 if ((*(int *)this_ptr == *(int *)param_1) && (*(int *)((char *)this_ptr + 4) == *(int *)((char *)param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: operator++ @ 00103d80 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void * Point_operator++(void *this_ptr)

{
 *(int *)this_ptr = *(int *)this_ptr + 1;
 *(int *)((char *)this_ptr + 4) = *(int *)((char *)this_ptr + 4) + 1;
 return this_ptr;
}



/* Function: template_max_int @ 00103db2 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00103dd2 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 00103e08 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00103e3a */

/* Container_int::Container() */

void Container_int_Container(void *this_ptr)

{
 *(undefined4 *)((long)this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00103e54 */

/* Container_int::push(int) */

void Container_int_push(void *this_ptr,int param_1)

{
 int iVar1;
 
 if (*(int *)((long)this_ptr + 0x28) < 10) {
 iVar1 = *(int *)((long)this_ptr + 0x28);
 *(int *)((long)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((long)this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00103e90 */

/* Container_int::get(int) const */

undefined4 Container_int_get(void *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (*(int *)((long)this_ptr + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined4 *)((long)this_ptr + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00103ec8 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(void *this_ptr)

{
 return *(undefined4 *)((long)this_ptr + 0x28);
}



/* Function: Container @ 00103ede */

/* Container_double::Container() */

void Container_double_Container(void *this_ptr)

{
 *(undefined4 *)((long)this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00103ef8 */

/* Container_double::push(double) */

void Container_double_push(void *this_ptr,double param_1)

{
 int iVar1;
 
 if (*(int *)((long)this_ptr + 0x50) < 10) {
 iVar1 = *(int *)((long)this_ptr + 0x50);
 *(int *)((long)this_ptr + 0x50) = iVar1 + 1;
 *(double *)((long)this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00103f3a */

/* Container_double::get(int) const */

undefined8 Container_double_get(void *this_ptr,int param_1)

{
 undefined8 uVar1;
 
 if ((param_1 < 0) || (*(int *)((long)this_ptr + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined8 *)((long)this_ptr + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00103f7c */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(void *this_ptr)

{
 return *(undefined4 *)((long)this_ptr + 0x50);
}



/* Function: __uniq_ptr_data @ 00103f92 */

/* std::__uniq_ptr_data<int, default_delete_int, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, default_delete_int, true, true>&&) */

void uniq_ptr_data_int_default___uniq_ptr_data
 (__uniq_ptr_data_int_default_delete_int_true_true *this_ptr,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl
 ((__uniq_ptr_impl_int_default_delete_int *)this_ptr,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: unique_ptr @ 00103fbc */

/* std::unique_ptr<int, default_delete_int >::unique_ptr(std::unique_ptr<int,
 default_delete_int >&&) */

void unique_ptr_int_default_unique_ptr
 (unique_ptr_int_default_delete_int *this_ptr,unique_ptr *param_1)

{
 __uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data
 ((__uniq_ptr_data_int_default_delete_int_true_true *)this_ptr,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: getType @ 00103fe6 */

/* RTTIBase::getType() const */

undefined8 RTTIBase_getType(RTTIBase *this_ptr)

{
 return 0;
}



/* Function: getType @ 00103ffa */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: derivedA_data @ 0010400e */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA_derivedA_data(RTTIDerivedA *this_ptr)

{
 return 100;
}



/* Function: getType @ 00104022 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: derivedB_data @ 00104036 */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB_derivedB_data(RTTIDerivedB *this_ptr)

{
 return 200;
}



/* Function: RTTIBase @ 0010404a */

/* RTTIBase::RTTIBase() */

void RTTIBase_RTTIBase(RTTIBase *this_ptr)

{
 *(undefined ***)this_ptr = &PTR__RTTIBase_00108888;
 return;
}



/* Function: ~RTTIBase @ 00104068 */

/* RTTIBase::~RTTIBase() */

void RTTIBase__RTTIBase(RTTIBase *this_ptr)

{
 *(undefined ***)this_ptr = &PTR__RTTIBase_00108888;
 return;
}



/* Function: ~RTTIBase @ 00104086 */

/* RTTIBase::~RTTIBase() */

void RTTIBase__RTTIBase_deleting(RTTIBase *this_ptr)

{
 RTTIBase__RTTIBase(this_ptr);
 operator_delete(this_ptr,8);
 return;
}



/* Function: RTTIDerivedA @ 001040b6 */

/* RTTIDerivedA::RTTIDerivedA() */

void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(undefined ***)this_ptr = &PTR__RTTIDerivedA_00108860;
 return;
}



/* Function: RTTIDerivedB @ 001040e4 */

/* RTTIDerivedB::RTTIDerivedB() */

void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(undefined ***)this_ptr = &PTR__RTTIDerivedB_00108838;
 return;
}



/* Function: __uniq_ptr_impl @ 00104112 */

/* std::__uniq_ptr_data<int, default_delete_int, true, true>::__uniq_ptr_impl(int*) */

void uniq_ptr_data_int_default___uniq_ptr_impl
 (__uniq_ptr_data_int_default_delete_int_true_true *this_ptr,int *param_1)

{
 __uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl
 ((__uniq_ptr_impl_int_default_delete_int *)this_ptr,param_1);
 return;
}



/* Function: unique_ptr<default_delete_int,void> @ 0010413c */

/* std::unique_ptr<int, default_delete_int >::unique_ptr<default_delete_int, void>(int*)
 */

void unique_ptr_int_default_unique_ptr_default_delete_int_void
 (unique_ptr_int_default_delete_int *this_ptr,int *param_1)

{
 __uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_default_delete_int_true_true *)this_ptr,param_1);
 return;
}



/* Function: ~unique_ptr @ 00104166 */

/* std::unique_ptr<int, default_delete_int >::~unique_ptr() */

void unique_ptr_int_default__unique_ptr
 (unique_ptr_int_default_delete_int *this_ptr)

{
 int **ppiVar1;
 default_delete_int *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl_int_default_delete_int__M_ptr
 ((__uniq_ptr_impl_int_default_delete_int *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete_int *)get_deleter(this_ptr);
 ptVar2 = move_int_ptr_ref(ppiVar1);
 default_delete_int_operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: operator* @ 001041ce */

/* std::unique_ptr<int, default_delete_int >::TEMPNAMEPLACEHOLDERVALUE() const */

void unique_ptr_int_default_operator
 (unique_ptr_int_default_delete_int *this_ptr)

{
 unique_ptr_int_default_get(this_ptr);
 return;
}



/* Function: move<unique_ptr_int_default&> @ 001041f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* type * std_move_unique_ptr_int_default_ref>(unique_ptr *param_1) */

type * std_move_unique_ptr_int_default_ref(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 00104206 */

/* std::_Tuple_impl<0ul, int*, default_delete_int >::_Tuple_impl(std::_Tuple_impl<0ul, int*,
 default_delete_int >&&) */

void Tuple_impl_0_int_default__Tuple_impl
 (_Tuple_impl_0ul_int_ptr_default_delete_int *this_ptr,_Tuple_impl *param_1)

{
 _Tuple_impl_1ul_default_delete_int__Tuple_impl((_Tuple_impl *)this_ptr);
 *(undefined8 *)this_ptr = *(undefined8 *)param_1;
 return;
}



/* Function: tuple @ 0010423e */

/* std::tuple<int*, default_delete_int >::tuple(std::tuple<int*, default_delete_int >&&)
 */

void tuple_int_ptr_default_tuple
 (tuple_int_ptr_default_delete_int *this_ptr,tuple *param_1)

{
 _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl
 ((_Tuple_impl_0ul_int_ptr_default_delete_int *)this_ptr,(_Tuple_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104268 */

/* std::__uniq_ptr_impl<int, default_delete_int >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 default_delete_int >&&) */

void uniq_ptr_impl_int_default___uniq_ptr_impl
 (__uniq_ptr_impl_int_default_delete_int *this_ptr,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined8 *puVar2;
 
 ptVar1 = move_tuple_int_ptr_default_ref((tuple *)param_1);
 tuple_int_ptr_default_tuple
 ((tuple_int_ptr_default_delete_int *)this_ptr,(tuple *)ptVar1);
 puVar2 = (undefined8 *)uniq_ptr_impl_int_default__M_ptr((__uniq_ptr_impl_int_default_delete_int *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: __uniq_ptr_impl @ 001042b2 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void uniq_ptr_data_int_array_default___uniq_ptr_impl
 (__uniq_ptr_data_int_default_delete_int_array_true_true *this_ptr,int *param_1)

{
 __uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl
 ((__uniq_ptr_impl_int_default_delete_int_array *)this_ptr,param_1);
 return;
}



/* Function: unique_ptr<int*,default_delete_int_array,void,bool> @ 001042dc */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

void unique_ptr_int_array_default_unique_ptr_int_ptr_default_delete_int_array_void_bool
 (unique_ptr_int_array_default_delete_int_array *this_ptr,int *param_1)

{
 __uniq_ptr_data_int_default_delete_int_array_true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_default_delete_int_array_true_true *)this_ptr,param_1);
 return;
}



/* Function: ~unique_ptr @ 00104306 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void unique_ptr_int_array_default__unique_ptr
 (unique_ptr_int_array_default_delete_int_array *this_ptr)

{
 long *plVar1;
 default_delete_int_array *this_00;
 
 plVar1 = (long *)__uniq_ptr_impl_int_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl_int_default_delete_int_array *)this_ptr);
 if (*plVar1 != 0) {
 this_00 = (default_delete_int_array *)get_deleter(this_ptr);
 default_delete_int_array_operator()(this_00,(int *)*plVar1);
 }
 *plVar1 = 0;
 return;
}



/* Function: operator[] @ 00104362 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long unique_ptr_int_array_default_operator_bracket
 (unique_ptr_int_array_default_delete_int_array *this_ptr,ulong param_1)

{
 long lVar1;
 
 lVar1 = get(this_ptr);
 return param_1 * 4 + lVar1;
}



/* Function: __uniq_ptr_impl @ 0010439a */

/* std::__uniq_ptr_impl<int, default_delete_int >::__uniq_ptr_impl(int*) */

void uniq_ptr_impl_int_default___uniq_ptr_impl
 (__uniq_ptr_impl_int_default_delete_int *this_ptr,int *param_1)

{
 undefined8 *puVar1;
 
 tuple_int_ptr_default_tuple_true_true
 ((tuple_int_ptr_default_delete_int *)this_ptr);
 puVar1 = (undefined8 *)uniq_ptr_impl_int_default__M_ptr(this_ptr);
 *puVar1 = (undefined8)param_1;
 return;
}



/* Function: _M_ptr @ 001043d6 */

/* std::__uniq_ptr_impl<int, default_delete_int >::_M_ptr() */

type* uniq_ptr_impl_int_default__M_ptr
 (__uniq_ptr_impl_int_default_delete_int *this_ptr)

{
 return std_get_0ul_int_ptr_default_delete_int((tuple *)this_ptr);
}



/* Function: get_deleter @ 001043f4 */

/* std::unique_ptr<int, default_delete_int >::get_deleter() */

type* unique_ptr_int_default_get_deleter
 (unique_ptr_int_default_delete_int *this_ptr)

{
 return uniq_ptr_impl_int_default__M_deleter
 ((__uniq_ptr_impl_int_default_delete_int *)this_ptr);
}



/* Function: move<int*&> @ 00104412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* type * std_move_int_ptr_ref>(int **param_1) */

type * std_move_int_ptr_ref>(int **param_1)

{
 return (type *)param_1;
}



/* Function: operator() @ 00104424 */

/* default_delete_int::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void default_delete_int_operator(default_delete_int *this_ptr,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}



/* Function: get @ 00104452 */

/* std::unique_ptr<int, default_delete_int >::get() const */

type* unique_ptr_int_default_get(unique_ptr_int_default_delete_int *this_ptr)

{
 return uniq_ptr_impl_int_default__M_ptr
 ((__uniq_ptr_impl_int_default_delete_int *)this_ptr);
}



/* Function: move<tuple_int_ptr_default&> @ 00104470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* type * std_move_tuple_int_ptr_default_ref>(tuple *param_1) */

type * std_move_tuple_int_ptr_default_ref>(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 00104482 */

/* std::_Tuple_impl<1ul, default_delete_int >::_Tuple_impl(std::_Tuple_impl<1ul,
 default_delete_int >&&) */

void Tuple_impl_1_default__Tuple_impl(_Tuple_impl_1ul_default_delete_int *this_ptr)

{
 return;
}



/* Function: __uniq_ptr_impl @ 00104496 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void uniq_ptr_impl_int_array_default___uniq_ptr_impl
 (__uniq_ptr_impl_int_default_delete_int_array *this_ptr,int *param_1)

{
 undefined8 *puVar1;
 
 tuple_int_ptr_array_default_tuple_true_true
 ((tuple_int_ptr_default_delete_int_array *)this_ptr);
 puVar1 = (undefined8 *)uniq_ptr_impl_int_array_default__M_ptr(this_ptr);
 *puVar1 = (undefined8)param_1;
 return;
}



/* Function: _M_ptr @ 001044d2 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

type* uniq_ptr_impl_int_array_default__M_ptr
 (__uniq_ptr_impl_int_default_delete_int_array *this_ptr)

{
 return std_get_0ul_int_ptr_default_delete_int_array((tuple *)this_ptr);
}



/* Function: get_deleter @ 001044f0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

type* unique_ptr_int_array_default_get_deleter
 (unique_ptr_int_array_default_delete_int_array *this_ptr)

{
 return uniq_ptr_impl_int_array_default__M_deleter
 ((__uniq_ptr_impl_int_default_delete_int_array *)this_ptr);
}



/* Function: operator() @ 0010450e */

/* std::enable_if<std::is_convertible<int (*) [], int (*) []>::value, void>::type
 std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void default_delete_int_array_operator(default_delete_int_array *this_ptr,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: get @ 00104538 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

type* unique_ptr_int_array_default_get
 (unique_ptr_int_array_default_delete_int_array *this_ptr)

{
 return uniq_ptr_impl_int_array_default__M_ptr
 ((__uniq_ptr_impl_int_default_delete_int_array *)this_ptr);
}



/* Function: tuple<true,true> @ 00104556 */

/* std::tuple<int*, default_delete_int >::tuple<true, true>() */

void tuple_int_ptr_default_tuple_true_true
 (tuple_int_ptr_default_delete_int *this_ptr)

{
 _Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl
 ((_Tuple_impl_0ul_int_ptr_default_delete_int *)this_ptr);
 return;
}



/* Function: get<0ul,int*,default_delete_int> @ 00104575 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, default_delete_int > >::type& std_get_0ul, int*,
 default_delete_int >(std::tuple<int*, default_delete_int >&) */

type * std_get_0ul_int_ptr_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_ptr_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 00104594 */

/* std::__uniq_ptr_impl<int, default_delete_int >::_M_deleter() */

type* uniq_ptr_impl_int_default__M_deleter
 (__uniq_ptr_impl_int_default_delete_int *this_ptr)

{
 return std_get_1ul_int_ptr_default_delete_int((tuple *)this_ptr);
}



/* Function: _M_ptr @ 001045b2 */

/* std::__uniq_ptr_impl<int, default_delete_int >::_M_ptr() const */

undefined8 uniq_ptr_impl_int_default__M_ptr
 (__uniq_ptr_impl_int_default_delete_int *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0ul_int_ptr_default_delete_int((tuple *)this_ptr);
 return *(undefined8 *)ptVar1;
}



/* Function: tuple<true,true> @ 001045d4 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void tuple_int_ptr_array_default_tuple_true_true
 (tuple_int_ptr_default_delete_int_array *this_ptr)

{
 _Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl
 ((_Tuple_impl_0ul_int_ptr_default_delete_int_array *)this_ptr);
 return;
}



/* Function: get<0ul,int*,default_delete_int_array> @ 001045f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std_get_0ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_0ul_int_ptr_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_ptr_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 00104612 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

type* uniq_ptr_impl_int_array_default__M_deleter
 (__uniq_ptr_impl_int_default_delete_int_array *this_ptr)

{
 return std_get_1ul_int_ptr_default_delete_int_array((tuple *)this_ptr);
}



/* Function: _M_ptr @ 00104630 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 uniq_ptr_impl_int_array_default__M_ptr
 (__uniq_ptr_impl_int_default_delete_int_array *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0ul_int_ptr_default_delete_int_array((tuple *)this_ptr);
 return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl @ 00104652 */

/* std::_Tuple_impl<0ul, int*, default_delete_int >::_Tuple_impl() */

void Tuple_impl_0_int_default__Tuple_impl
 (_Tuple_impl_0ul_int_ptr_default_delete_int *this_ptr)

{
 _Tuple_impl_1ul_default__Tuple_impl(this_ptr);
 _Head_base_0ul_int_ptr_false__Head_base((_Head_base_0ul_int_ptr_false *)this_ptr);
 return;
}



/* Function: __get_helper<0ul,int*,default_delete_int> @ 0010467d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std_get_helper_0ul, int*, default_delete_int >(std::_Tuple_impl<0ul, int*,
 default_delete_int >&) */

int ** std_get_helper_0ul_int_ptr_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: get<1ul,int*,default_delete_int> @ 0010469b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, default_delete_int > >::type& std_get_1ul, int*,
 default_delete_int >(std::tuple<int*, default_delete_int >&) */

type * std_get_1ul_int_ptr_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1ul_default_delete_int((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: get<0ul,int*,default_delete_int> @ 001046b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, default_delete_int > >::type const& std_get_0ul,
 int*, default_delete_int >(std::tuple<int*, default_delete_int > const&) */

type * std_get_0ul_int_ptr_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_ptr_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _Tuple_impl @ 001046d8 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void Tuple_impl_0_int_array_default__Tuple_impl
 (_Tuple_impl_0ul_int_ptr_default_delete_int_array *this_ptr)

{
 _Tuple_impl_1_array_default__Tuple_impl(this_ptr);
 _Head_base_0ul_int_ptr_false__Head_base((_Head_base_0ul_int_ptr_false *)this_ptr);
 return;
}



/* Function: __get_helper<0ul,int*,default_delete_int_array> @ 00104703 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std_get_helper_0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

int ** std_get_helper_0ul_int_ptr_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: get<1ul,int*,default_delete_int_array> @ 00104721 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std_get_1ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_1ul_int_ptr_default_delete_int_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1ul_default_delete_int_array((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: get<0ul,int*,default_delete_int_array> @ 0010473f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
 std_get_0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
 const&) */

type * std_get_0ul_int_ptr_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_ptr_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: forward<int*&> @ 0010475d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std_forward_int_ptr_ref>(type *) */

int ** std_forward_int_ptr_ref(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Tuple_impl @ 00104770 */

/* std::_Tuple_impl<1ul, default_delete_int >::_Tuple_impl() */

void Tuple_impl_1_default__Tuple_impl(_Tuple_impl_1ul_default_delete_int *this_ptr)

{
 Head_base_1_default__Head_base(this_ptr);
 return;
}



/* Function: _Head_base @ 00104790 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void Head_base_0ul_int_ptr_false__Head_base(_Head_base_0ul_int_ptr_false *this_ptr)

{
 return;
}



/* Function: _M_head @ 001047aa */

/* std::_Tuple_impl<0ul, int*, default_delete_int >::_M_head(std::_Tuple_impl<0ul, int*,
 default_delete_int >&) */

void Tuple_impl_0_int_default__M_head(_Head_base *param_1)

{
 Head_base_0_int_ptr__M_head((_Head_base *)param_1);
 return;
}



/* Function: __get_helper<1ul,default_delete_int> @ 001047c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* default_delete_int& std_get_helper_1ul, default_delete_int>(std::_Tuple_impl<1ul,
 default_delete_int>&) */

default_delete * std_get_helper_1ul_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1ul_default_delete_int__M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper<0ul,int*,default_delete_int> @ 001047e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std_get_helper_0ul, int*, default_delete_int >(std::_Tuple_impl<0ul, int*,
 default_delete_int > const&) */

int ** std_get_helper_0ul_int_ptr_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00104804 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void Tuple_impl_1_array_default__Tuple_impl(_Tuple_impl_1ul_default_delete_int_array *this_ptr)

{
 Head_base_1_array_default__Head_base(this_ptr);
 return;
}



/* Function: _M_head @ 00104823 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

void Tuple_impl_0_int_array_default__M_head(_Head_base *param_1)

{
 Head_base_0_int_ptr__M_head((_Head_base *)param_1);
 return;
}



/* Function: __get_helper<1ul,default_delete_int_array> @ 00104841 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std_get_helper_1ul, std::default_delete<int
 []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * std_get_helper_1ul_default_delete_int_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1ul_default_delete_int_array__M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper<0ul,int*,default_delete_int_array> @ 0010485f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std_get_helper_0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
 int*, std::default_delete<int []> > const&) */

int ** std_get_helper_0ul_int_ptr_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: _Head_base<int*&> @ 0010487e */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(_Head_base_0ul_int_ptr_false *this_ptr,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ptr_ref((type *)param_1);
 return;
}



/* Function: _Head_base @ 001048ac */

/* std::_Head_base<1ul, default_delete_int, true>::_Head_base() */

void Head_base_1_default__Head_base(_Head_base_1ul_default_delete_int_true *this_ptr)

{
 return;
}



/* Function: _M_head @ 001048bb */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * Head_base_0_int_ptr__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 001048cd */

/* std::_Tuple_impl<1ul, default_delete_int >::_M_head(std::_Tuple_impl<1ul,
 default_delete_int >&) */

void Tuple_impl_1_default__M_head(_Head_base *param_1)

{
 Head_base_1_default__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 001048eb */

/* std::_Tuple_impl<0ul, int*, default_delete_int >::_M_head(std::_Tuple_impl<0ul, int*,
 default_delete_int > const&) */

void Tuple_impl_0_int_default__M_head_const(_Head_base *param_1)

{
 Head_base_0_int_ptr__M_head((_Head_base *)param_1);
 return;
}



/* Function: _Head_base @ 0010490a */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void Head_base_1_array_default__Head_base(_Head_base_1ul_default_delete_int_array_true *this_ptr)

{
 return;
}



/* Function: _M_head @ 00104919 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int []> >&) */

void Tuple_impl_1_array_default__M_head(_Head_base *param_1)

{
 Head_base_1_array_default__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104937 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> > const&) */

void Tuple_impl_0_int_array_default__M_head_const(_Head_base *param_1)

{
 Head_base_0_int_ptr__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104955 */

/* std::_Head_base<1ul, default_delete_int, true>::_M_head(std::_Head_base<1ul,
 default_delete_int, true>&) */

_Head_base * Head_base_1_default__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00104967 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * Head_base_0_int_ptr__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00104979 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int []>, true>&) */

_Head_base * Head_base_1_array_default__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: ~RTTIDerivedB @ 0010498c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 *(undefined ***)this_ptr = &PTR__RTTIDerivedB_00108838;
 RTTIBase__RTTIBase((RTTIBase *)this_ptr);
 return;
}



/* Function: ~RTTIDerivedB @ 001049ba */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB_deleting(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB__RTTIDerivedB(this_ptr);
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedA @ 001049ea */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 *(undefined ***)this_ptr = &PTR__RTTIDerivedA_00108860;
 RTTIBase__RTTIBase((RTTIBase *)this_ptr);
 return;
}



/* Function: ~RTTIDerivedA @ 00104a18 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA_deleting(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA__RTTIDerivedA(this_ptr);
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~DiamondDerived @ 00104a48 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)

{
 *(undefined8 *)this_ptr = 0x1088b8;
 *(undefined8 *)(this_ptr + 0x20) = 0x108920;
 *(undefined8 *)(this_ptr + 0x10) = 0x1088e8;
 MiddleB__MiddleB((MiddleB *)(this_ptr + 0x10));
 MiddleA__MiddleA((MiddleA *)this_ptr);
 VirtualBase__VirtualBase((VirtualBase *)(this_ptr + 0x20));
 return;
}



/* Function: ~DiamondDerived @ 00104aca */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived((DiamondDerived *)((long)this_ptr + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00104ad7 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived((DiamondDerived *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x20)));
 return;
}



/* Function: ~DiamondDerived @ 00104ae8 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_deleting(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr);
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00104b17 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk3(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived((DiamondDerived *)((long)this_ptr + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00104b21 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk4(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived((DiamondDerived *)((long)this_ptr + *(long *)(*(long *)this_ptr + -0x20)));
 return;
}



/* Function: ~MultiDerived @ 00104b2e */

/* MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived(MultiDerived *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcA_00108a78;
 *(undefined ***)(this_ptr + 0x10) = &PTR_funcB_00108aa8;
 BaseB__BaseB((BaseB *)(this_ptr + 0x10));
 BaseA__BaseA((BaseA *)this_ptr);
 return;
}



/* Function: ~MultiDerived @ 00104b7a */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_thunk(MultiDerived *this_ptr)

{
 MultiDerived__MultiDerived((MultiDerived *)((long)this_ptr + -0x10));
 return;
}



/* Function: ~MultiDerived @ 00104b84 */

/* MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_deleting(MultiDerived *this_ptr)

{
 MultiDerived__MultiDerived(this_ptr);
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00104bb3 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_thunk2(MultiDerived *this_ptr)

{
 MultiDerived__MultiDerived((MultiDerived *)((long)this_ptr + -0x10));
 return;
}



/* Function: ~Derived @ 00104bbe */

/* Derived::~Derived() */

void Derived__Derived(Derived *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_virtual_func_00108b20;
 Base__Base((Base *)this_ptr);
 return;
}



/* Function: ~Derived @ 00104bec */

/* Derived::~Derived() */

void Derived__Derived_deleting(Derived *this_ptr)

{
 Derived__Derived(this_ptr);
 operator_delete(this_ptr,0x10);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 203 */
