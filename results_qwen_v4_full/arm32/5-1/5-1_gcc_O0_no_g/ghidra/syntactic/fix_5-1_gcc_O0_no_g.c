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
typedef void type;
typedef void (*code)(void);
typedef unsigned char undefined;
typedef unsigned long undefined8;

/* Declare stack check fail function */
void __stack_chk_fail(void);

/* Declare exception functions */
void __cxa_bad_typeid(void);
void __cxa_throw_bad_array_new_length(void);

/* Declare operator new/delete functions */
void* operator_new(size_t size);
void* operator_new__(size_t size);
void operator_delete(void* ptr, size_t size);
void operator_delete__(void* ptr);

/* Forward declarations for classes */
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
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct _lambda_int__1_ _lambda_int__1_;
typedef struct _lambda_int___1_ _lambda_int___1_;
typedef struct tuple tuple;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr;
typedef struct __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_true_false __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_true_false;
typedef struct unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr;
typedef struct _Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr _Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr;
typedef struct _Head_base_0u_int_false _Head_base_0u_int_false;
typedef struct default_delete default_delete;
typedef struct default_delete_int_array default_delete_int_array;

/* Define missing struct types */
struct default_delete {
 undefined4 _unused;
};

struct default_delete_int_array {
 undefined4 _unused;
};

struct _lambda_int__1_ {
 int _unused;
};

struct _lambda_int___1_ {
 int _unused;
};

struct tuple {
 undefined4 _unused;
};

struct _Tuple_impl {
 undefined4 _unused;
};

struct _Head_base {
 undefined4 _unused;
};

struct _Head_base_0u_int_false {
 undefined4 _unused;
};

/* Define SimpleClass struct */
struct SimpleClass {
 int value;
 char name[32];
 undefined4 _unused;
};

/* Define LifecycleClass struct */
struct LifecycleClass {
 void *data;
 undefined4 size;
};

/* Define Base struct */
struct Base {
 undefined4 *vtable;
};

/* Define Derived struct */
struct Derived {
 undefined4 *vtable;
 int data;
};

/* Define Container structs */
struct Container_int {
 undefined4 data[10];
 undefined4 size;
};

struct Container_double {
 double data[10];
 undefined4 size;
};

/* Define Point struct */
struct Point {
 int x;
 int y;
};

/* Declare missing functions */
undefined4 _Head_base_0u_int_false__M_head(_Head_base_0u_int_false *this_ptr);
int std_type_info_operator_eq(type_info *a, type_info *b);
int std_type_info_name(type_info *this_ptr);
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* Define type_info struct */
struct type_info {
 undefined4 _vtable;
 char *name;
};

/* Declare missing global pointers */
extern undefined4 PTR_virtual_func_000145f0;
extern undefined4 PTR_virtual_func_000145d8;
extern undefined4 PTR_funcA_000145c4;
extern undefined4 PTR_funcB_000145b0;
extern undefined4 PTR_funcA_00014584;
extern undefined4 PTR_funcB_0001459c;
extern undefined4 PTR_func_00014570;
extern undefined4 PTR_func_000144a4;
extern undefined4 PTR_func_000144d8;
extern undefined4 PTR_func_000144bc;
extern undefined4 PTR__RTTIBase_0001448c;
extern undefined4 PTR__RTTIDerivedA_00014478;
extern undefined4 PTR__RTTIDerivedB_00014464;

struct _Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true {
 undefined4 _unused;
};

struct _Head_base_1u_default_delete_int_true {
 undefined4 _unused;
};

struct _Head_base_1u_default_delete_int_array_true {
 undefined4 _unused;
};

struct _Tuple_impl_0u_int_default_delete_int {
 undefined4 _unused;
};

struct _Tuple_impl_1u_default_delete_int {
 undefined4 _unused;
};

struct _Tuple_impl_0u_int_default_delete_int_array {
 undefined4 _unused;
};

struct _Tuple_impl_1u_default_delete_int_array {
 undefined4 _unused;
};

struct _Head_base_1u_default_delete_int_true {
 undefined4 _unused;
};

struct tuple_int_std_default_delete_int {
 undefined4 _unused;
};

struct unique_ptr_int_std_default_delete_int {
 undefined4 _unused;
};

struct __uniq_ptr_data_int_std_default_delete_int_true_true {
 undefined4 _unused;
};

struct __uniq_ptr_impl_int_std_default_delete_int {
 undefined4 _unused;
};

struct _Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr {
 undefined4 _unused;
};

struct _Tuple_impl_1u_default_delete_int {
 undefined4 _unused;
};

struct _Tuple_impl_1u_default_delete_int_array {
 undefined4 _unused;
};

struct _Tuple_impl_0u_int_default_delete_int {
 undefined4 _unused;
};

struct _Tuple_impl_0u_int_default_delete_int_array {
 undefined4 _unused;
};

struct __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr {
 undefined4 _unused;
};

struct __uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_true_false {
 undefined4 _unused;
};

struct unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr {
 undefined4 _unused;
};

struct __uniq_ptr_impl_int_std_default_delete_int {
 undefined4 _unused;
};

struct __uniq_ptr_data_int_std_default_delete_int_true_true {
 undefined4 _unused;
};

struct unique_ptr_int_std_default_delete_int {
 undefined4 _unused;
};

struct unique_ptr {
 undefined4 _unused;
};

struct tuple_int_std_default_delete_int {
 undefined4 _unused;
};

struct __uniq_ptr_impl_int_std_default_delete_int_array {
 undefined4 _unused;
};

struct __uniq_ptr_data_int_std_default_delete_int_array_true_true {
 undefined4 _unused;
};

struct unique_ptr_int_array_std_default_delete_int_array {
 undefined4 _unused;
};

struct tuple_int_std_default_delete_int_array {
 undefined4 _unused;
};

struct std___uniq_ptr_impl_int_default_delete_int {
 undefined4 _unused;
};

struct std__uniq_ptr_impl_int_default_delete_int {
 undefined4 _unused;
};

struct std__uniq_ptr_impl_int_default_delete_int_array {
 undefined4 _unused;
};

struct DiamondDerived {
 undefined4 _unused;
};

struct MultiDerived {
 undefined4 _unused;
};

struct MiddleA {
 undefined4 _unused;
};

struct MiddleB {
 undefined4 _unused;
};

struct VirtualBase {
 undefined4 _unused;
};

struct BaseA {
 undefined4 _unused;
};

struct BaseB {
 undefined4 _unused;
};

/* Global variables */
extern int instance_count;
extern Init std___ioinit;
extern void* __dso_handle;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00010a68 @ 00010a68 */

void FUN_00010a68(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010cc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_30 [36];
 int local_c;
 
 local_c = 0;
 SimpleClass_SimpleClass(aSStack_30,5,"Test");
 SimpleClass_setValue(aSStack_30,10);
 iVar1 = SimpleClass_getValue(aSStack_30);
 iVar2 = SimpleClass_compute(aSStack_30,3);
 iVar3 = SimpleClass_getClassID();
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00010d74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 LifecycleClass aLStack_14 [8];
 int local_c;
 
 local_c = 0;
 LifecycleClass_LifecycleClass(aLStack_14,5);
 iVar1 = LifecycleClass_getData(aLStack_14,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass_destructor(aLStack_14);
 iVar3 = LifecycleClass_getInstanceCount();
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3 * 1000;
}



/* Function: call_virtual_func @ 00010e48 */

/* call_virtual_func(Base*, int) */

undefined4 call_virtual_func(Base *param_1,int param_2)

{
 undefined4 uVar1;
 
 uVar1 = (*(code *)**(undefined4 **)param_1)(param_1,param_2);
 return uVar1;
}



/* Function: test_cpp_virtual_func @ 00010e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined **local_38;
 int local_34;
 int local_30;
 Base *local_2c;
 Base *local_28;
 int local_24;
 int local_20;
 Derived aDStack_1c [8];
 int local_14;
 
 local_14 = 0;
 local_38 = (undefined **)&PTR_virtual_func_000145f0;
 Derived_constructor(aDStack_1c,3);
 local_34 = Base_virtual_func((Base *)local_38,5);
 local_30 = Derived_virtual_func(aDStack_1c,5);
 local_2c = (Base *)&local_38;
 local_28 = (Base *)aDStack_1c;
 local_24 = call_virtual_func(local_2c,5);
 local_20 = call_virtual_func(local_28,5);
 iVar2 = local_34 + local_30 + local_24 + local_20;
 Derived_destructor(aDStack_1c);
 uVar1 = Base_destructor((Base *)&local_38);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00010fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 MultiDerived aMStack_20 [8];
 int local_14;
 
 local_14 = 0;
 MultiDerived_constructor(aMStack_20);
 iVar1 = MultiDerived_funcA();
 iVar2 = MultiDerived_funcB();
 uVar3 = MultiDerived_destructor(aMStack_20);
 if (local_14 == 0) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_diamond_inheritance @ 000110a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 DiamondDerived aDStack_2c [16];
 int local_14;
 
 local_14 = 0;
 DiamondDerived_DiamondDerived(aDStack_2c);
 iVar1 = DiamondDerived_func(aDStack_2c);
 iVar2 = DiamondDerived_func(aDStack_2c);
 uVar3 = DiamondDerived_destructor(aDStack_2c);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 char cVar1;
 undefined4 uVar2;
 int iVar3;
 Point aPStack_24 [8];
 Point aPStack_1c [8];
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 Point_Point(aPStack_24,1,2);
 Point_Point(aPStack_1c,3,4);
 Point_operator_plus((Point *)&local_14,aPStack_24);
 cVar1 = Point_operator_eq(aPStack_24,aPStack_1c);
 uVar2 = Point_operator_inc((Point *)&local_14);
 if (cVar1 == '\0') {
 iVar3 = 10;
 }
 else {
 iVar3 = 0;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar3 + local_14 + local_10;
}



/* Function: test_cpp_template_func @ 00011250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 undefined4 extraout_r0;
 int iVar1;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 int local_24;
 int local_20;
 int local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_c;
 
 local_c = 0;
 local_1c = template_max_int(3,7);
 template_max_double(extraout_d0,extraout_d1);
 local_24 = 10;
 local_20 = 0x14;
 local_18 = extraout_r0;
 local_14 = extraout_r1;
 template_swap_int(&local_24,&local_20);
 iVar1 = __aeabi_d2iz(local_18,local_14);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + local_1c + local_24 + local_20;
}



/* Function: test_cpp_template_class @ 00011324 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 uVar4;
 undefined4 extraout_s1;
 undefined8 uVar5;
 undefined4 aCStack_9c [44];
 undefined4 aCStack_70 [92];
 int local_14;
 
 local_14 = 0;
 Container_int_Container(aCStack_9c);
 Container_int_push(aCStack_9c,10);
 Container_int_push(aCStack_9c,0x14);
 Container_int_push(aCStack_9c,0x1e);
 iVar1 = Container_int_get(aCStack_9c,0);
 iVar2 = Container_int_getSize(aCStack_9c);
 uVar4 = Container_double_Container(aCStack_70);
 Container_double_push(aCStack_70,(double)CONCAT44(extraout_s1,uVar4));
 uVar5 = Container_double_get(aCStack_70,0);
 iVar3 = __aeabi_d2iz((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3;
}



/* Function: operator() @ 0001143c */

/* test_cpp_lambda_int::TEMPNAMEPLACEHOLDERVALUE(int) const */

int test_cpp_lambda_int_operator(_lambda_int__1_ *this_ptr,int param_1)

{
 **(int **)(this_ptr + 4) = **(int **)(this_ptr + 4) + 5;
 return *(int *)this_ptr * param_1 + **(int **)(this_ptr + 4);
}



/* Function: test_cpp_lambda @ 0001149c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 undefined4 local_24;
 undefined4 local_20;
 int local_1c;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 *local_10;
 int local_c;
 
 local_c = 0;
 local_20 = 10;
 local_24 = 0x14;
 local_14 = 10;
 local_10 = &local_24;
 local_1c = test_cpp_lambda_int::operator()((_lambda_int__1_ *)&local_14,3);
 local_18 = 0x1e;
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_1c + 0x1e;
}



/* Function: test_cpp_exception @ 0001152c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: operator() @ 0001169c */

/* test_cpp_smart_ptr_lambda_int_ptr::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void test_cpp_smart_ptr_lambda_int_ptr_operator(_lambda_int___1_ *param_0,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 000116e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int *piVar1;
 undefined4 *puVar2;
 type *ptVar3;
 undefined4 uVar4;
 int iVar5;
 _lambda_int___1_ a_Stack_34 [4];
 undefined4 auStack_30 [4];
 undefined4 auStack_2c [4];
 undefined4 auStack_28 [4];
 undefined4 auStack_24 [4];
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 
 local_14 = 0;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 100;
 unique_ptr_int_default_delete_int_unique_ptr(auStack_30,piVar1);
 puVar2 = (undefined4 *)unique_ptr_int_default_delete_int_operator_star(auStack_30);
 *puVar2 = 200;
 ptVar3 = move_unique_ptr_int_default_delete_int(auStack_30);
 unique_ptr_int_default_delete_int_unique_ptr_2(auStack_2c,ptVar3);
 piVar1 = (int *)unique_ptr_int_default_delete_int_operator_star(auStack_2c);
 local_20 = *piVar1;
 piVar1 = (int *)operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 unique_ptr_int_array_default_delete_int_array_unique_ptr(auStack_28,piVar1);
 piVar1 = (int *)unique_ptr_int_array_default_delete_int_array_operator_index(auStack_28,2);
 local_1c = *piVar1;
 piVar1 = (int *)operator_new(4);
 *piVar1 = 500;
 unique_ptr_int_smart_ptr_lambda_unique_ptr(auStack_24,piVar1,a_Stack_34);
 piVar1 = (int *)unique_ptr_int_smart_ptr_lambda_operator_star(auStack_24);
 local_18 = *piVar1;
 iVar5 = local_20 + local_1c + local_18;
 unique_ptr_int_smart_ptr_lambda_destructor(auStack_24);
 unique_ptr_int_array_default_delete_int_array_destructor(auStack_28);
 unique_ptr_int_default_delete_int_destructor(auStack_2c);
 uVar4 = unique_ptr_int_default_delete_int_destructor(auStack_30);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar5;
}



/* Function: test_cpp_rtti @ 000118c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 RTTIDerivedA *this_var;
 RTTIDerivedB *this_00;
 int iVar1;
 char *__s;
 size_t sVar2;
 RTTIDerivedA *extraout_r3;
 int local_24;
 
 this_var = operator_new(4);
 *(undefined4 *)this_var = 0;
 RTTIDerivedA_RTTIDerivedA(this_var);
 this_00 = operator_new(4);
 *(undefined4 *)this_00 = 0;
 RTTIDerivedB_RTTIDerivedB(this_00);
 local_24 = 0;
 if (this_var == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00011954:
 local_24 = 10;
 }
 else {
 iVar1 = std_type_info_operator_eq
 (*(type_info **)(*(int *)this_var + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar1 != 0) goto LAB_00011954;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00011994:
 local_24 = local_24 + 0x14;
 }
 else {
 iVar1 = std_type_info_operator_eq
 (*(type_info **)(*(int *)this_00 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar1 != 0) goto LAB_00011994;
 }
 if (this_var == (RTTIDerivedA *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(this_var,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (this_var == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 this_var = extraout_r3;
 }
 else {
 __s = (char *)std_type_info_name(*(type_info **)(*(int *)this_var + -4));
 sVar2 = strlen(__s);
 local_24 = sVar2 + local_24;
 if (this_var == (RTTIDerivedA *)0x0) goto LAB_00011aa0;
 }
 (**(code **)(*(int *)this_var + 4))(this_var);
LAB_00011aa0:
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(int *)this_00 + 4))(this_00);
 }
 return local_24;
}



/* Function: test_cpp_oo_features @ 00011adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_0001426c);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00014290,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_000142b0,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_000142cc,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_000142e8,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_00014304,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_00014324,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_00014340,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0001435c,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00014378,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00014394,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_000143b4,uVar1);
 uVar1 = test_cpp_rtti();
 iVar2 = printf(&DAT_000143d4,uVar1);
 return iVar2;
}



/* Function: main @ 00011c18 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr_lambda_int_ptrconst&> @ 00011c30 */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr_lambda_int_ptr, true,
 false>::__uniq_ptr_impl<test_cpp_smart_ptr_lambda_int_ptr const&>(int*,
 test_cpp_smart_ptr_lambda_int_ptr const&) */

__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_true_false *
__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_true_false___uniq_ptr_impl
 (__uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_true_false *param_0,int *param_1
 ,_lambda_int___1_ *param_2)

{
 return param_0;
}



/* Function: unique_ptr<test_cpp_smart_ptr_lambda_int_ptr,void> @ 00011c6c */

/* std::unique_ptr<int,
 test_cpp_smart_ptr_lambda_int_ptr>::unique_ptr<test_cpp_smart_ptr_lambda_int_ptr,
 void>(int*, test_cpp_smart_ptr_lambda_int_ptr const&) */

unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *
unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_unique_ptr
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *param_0,int *param_1,
 _lambda_int___1_ *param_2)

{
 return param_0;
}



/* Function: ~unique_ptr @ 00011ca8 */

/* std::unique_ptr<int, test_cpp_smart_ptr_lambda_int_ptr>::~unique_ptr() */

unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *
unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_destructor
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_ptr
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *)param_0);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)get_deleter(param_0);
 ptVar2 = std_move_int_ptr(ppiVar1);
 test_cpp_smart_ptr_lambda_int_ptr_operator(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return param_0;
}



/* Function: operator* @ 00011d1c */

/* std::unique_ptr<int, test_cpp_smart_ptr_lambda_int_ptr>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined4
unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_operator_star
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 undefined4 uVar1;
 
 uVar1 = get(param_0);
 return uVar1;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr_lambda_int_ptrconst&> @ 00011d4c */

__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr___uniq_ptr_impl
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *param_0,int *param_1,
 _lambda_int___1_ *param_2)

{
 return param_0;
}



/* Function: _M_ptr @ 00011d94 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr_lambda_int_ptr>::_M_ptr() */

type *
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_ptr
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr((tuple *)param_0);
 return ptVar1;
}



/* Function: get_deleter @ 00011dc0 */

/* std::unique_ptr<int, test_cpp_smart_ptr_lambda_int_ptr>::get_deleter() */

undefined4
unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_get_deleter
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 undefined4 uVar1;
 
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_deleter
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *)param_0);
 return uVar1;
}



/* Function: get @ 00011dec */

/* std::unique_ptr<int, test_cpp_smart_ptr_lambda_int_ptr>::get() const */

undefined4
unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_get
 (unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 undefined4 uVar1;
 
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_ptr_const
 ((__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *)param_0);
 return uVar1;
}



/* Function: forward<test_cpp_smart_ptr_lambda_int_ptrconst&> @ 00011e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr_lambda_int_ptr const& std::forward<test_cpp_smart_ptr_lambda_int_ptr
 const&>(std::remove_reference<test_cpp_smart_ptr_lambda_int_ptr const&>::type&) */

_lambda_int___1_ * std_forward_test_cpp_smart_ptr_lambda_int_ptr_const(type *param_1)

{
 return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr_lambda_int_ptrconst&,true> @ 00011e3c */

tuple *
std_tuple_int_test_cpp_smart_ptr_lambda_int_ptr_tuple
 (tuple *param_0,int **param_1,
 _lambda_int___1_ *param_2)

{
 return param_0;
}



/* Function: std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr(tuple *param_0)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr
 ((_Tuple_impl *)param_0);
 return ptVar1;
}



/* Function: _M_deleter @ 00011ebc */

type *
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_deleter
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 type *ptVar1;
 
 ptVar1 = std_get_1u_int_test_cpp_smart_ptr_lambda_int_ptr((tuple *)param_0);
 return ptVar1;
}



/* Function: _M_ptr @ 00011ee8 */

undefined4
__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_ptr_const
 (__uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr *param_0)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr((tuple *)param_0);
 return *(undefined4 *)ptVar1;
}



/* Function: _Tuple_impl @ 00011f18 */

_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr *
_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr__Tuple_impl
 (_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr *param_0,int **param_1,
 _lambda_int___1_ *param_2)

{
 return param_0;
}



/* Function: __get_helper @ 00011f74 */

int ** __get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr__M_head(param_1);
 return ppiVar1;
}



/* Function: std_get_1u_int_test_cpp_smart_ptr_lambda_int_ptr @ 00011f9c */

type * std_get_1u_int_test_cpp_smart_ptr_lambda_int_ptr(tuple *param_0)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = __get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr((_Tuple_impl *)param_0);
 return (type *)p_Var1;
}



/* Function: std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_const @ 00011fc4 */

type * std_get_0u_int_test_cpp_smart_ptr_lambda_int_ptr_const(tuple *param_0)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_const
 ((_Tuple_impl *)param_0);
 return ptVar1;
}



/* Function: _Tuple_impl @ 00011ff0 */

_lambda_int___1_ *
_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr__Tuple_impl(_lambda_int___1_ *param_0)

{
 return param_0;
}



/* Function: _M_head @ 00012020 */

undefined4
_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr__M_head(_Tuple_impl *param_1)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_0u_int_false__M_head((_Head_base_0u_int_false *)param_1);
 return uVar1;
}



/* Function: __get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr @ 0001204c */

_lambda_int___1_ *
__get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr(_Tuple_impl *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = (_lambda_int___1_ *)
 _Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr__M_head(param_1);
 return p_Var1;
}



/* Function: __get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_const @ 00012074 */

int ** __get_helper_0u_int_test_cpp_smart_ptr_lambda_int_ptr_const(_Tuple_impl *param_0)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr__M_head(param_0);
 return ppiVar1;
}



/* Function: _Head_base @ 0001209c */

_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true *
_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true__Head_base
 (_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true *param_0)

{
 return param_0;
}



/* Function: _M_head @ 000120c4 */

undefined4
_Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr__M_head(_Tuple_impl *param_1)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true__M_head((_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true *)param_1);
 return uVar1;
}



/* Function: _M_head @ 000120ec */

undefined4
_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_ptr__M_head_const(_Tuple_impl *param_1)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_0u_int_false__M_head((_Head_base_0u_int_false *)param_1);
 return uVar1;
}



/* Function: _M_head @ 00012118 */

undefined4
_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true__M_head(_Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_true *param_0)

{
 return *(undefined4 *)param_0;
}



/* Function: __static_initialization_and_destruction_0 @ 0001213c */

/* __static_initialization_and_destruction_0(int, int) */

int __static_initialization_and_destruction_0(int param_1,int param_2)

{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 param_1 = __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
 }
 return param_1;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000121a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 000121bc */

/* std_type_info_name() const */

int std_type_info_name(type_info *this_ptr)

{
 int iVar1;
 
 if (**(char **)(this_ptr + 4) == '*') {
 iVar1 = *(int *)(this_ptr + 4) + 1;
 }
 else {
 iVar1 = *(int *)(this_ptr + 4);
 }
 return iVar1;
}



/* Function: SimpleClass @ 00012208 */

/* SimpleClass_SimpleClass(int, char const*) */

SimpleClass * SimpleClass_SimpleClass(SimpleClass *param_0,int param_1,char *param_2)

{
 *(int *)param_0 = param_1;
 strncpy((char *)(param_0 + 4),param_2,0x1f);
 param_0[0x23] = (SimpleClass)0x0;
 return param_0;
}



/* Function: getValue @ 00012260 */

/* SimpleClass::getValue() const */

undefined4 SimpleClass_getValue(SimpleClass *param_0)

{
 return *(undefined4 *)param_0;
}



/* Function: setValue @ 00012288 */

/* SimpleClass::setValue(int) */

SimpleClass * SimpleClass_setValue(SimpleClass *param_0,int param_1)

{
 *(int *)param_0 = param_1;
 return param_0;
}



/* Function: compute @ 000122b8 */

/* SimpleClass::compute(int) const */

int SimpleClass_compute(SimpleClass *param_0,int param_1)

{
 size_t sVar1;
 int iVar2;
 
 iVar2 = *(int *)param_0;
 sVar1 = strlen((char *)(param_0 + 4));
 return param_1 * iVar2 + sVar1;
}



/* Function: getClassID @ 00012304 */

/* SimpleClass_getClassID() */

undefined4 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00012324 */

/* LifecycleClass_LifecycleClass(unsigned int) */

void LifecycleClass_LifecycleClass(LifecycleClass *param_0,uint32_t param_1)

{
 void *pvVar1;
 uint local_c;
 
 *(uint *)(param_0 + 4) = param_1;
 if (param_1 < 0x1fffffff) {
 pvVar1 = operator_new__(param_1 << 2);
 *(void **)param_0 = pvVar1;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
LAB_0001237c:
 *(uint *)(*(int *)param_0 + local_c * 4) = local_c * 10;
 }
 instance_count = instance_count + 1;
 }
 else {
 __cxa_throw_bad_array_new_length();
 }
 return;
}



/* Function: ~LifecycleClass @ 000123f4 */

/* LifecycleClass_destructor() */

void LifecycleClass_destructor(LifecycleClass *param_0)

{
 if (*(int *)param_0 != 0) {
 operator_delete__(*(void **)param_0);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: getData @ 0001244c */

/* LifecycleClass::getData(unsigned int) const */

undefined4 LifecycleClass_getData(LifecycleClass *param_0,uint32_t param_1)

{
 undefined4 uVar1;
 
 if (param_1 < *(uint *)(param_0 + 4)) {
 uVar1 = *(undefined4 *)(*(int *)param_0 + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: getInstanceCount @ 000124a4 */

/* LifecycleClass_getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 000124c8 */

/* Base_virtual_func(int) */

int Base_virtual_func(Base *param_0)

{
 (void)param_0;
 return 1;
}



/* Function: getName @ 000124f4 */

/* Base::getName() const */

undefined * Base_getName(Base *this_ptr)

{
 (void)this_ptr;
 return &DAT_0001425c;
}



/* Function: ~Base @ 0001251c */

/* Base_destructor() */

Base * Base_destructor(Base *param_0)

{
 *(undefined ***)param_0 = &PTR_virtual_func_000145f0;
 return param_0;
}



/* Function: ~Base @ 00012550 */

/* Base_destructor() */

Base * Base_destructor_thunk(Base *param_0)

{
 Base_destructor(param_0);
 operator_delete(param_0,4);
 return param_0;
}



/* Function: Base @ 00012584 */

/* Base::Base() */

Base * Base_constructor(Base *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_virtual_func_000145f0;
 return param_0;
}



/* Function: Derived @ 000125b8 */

/* Derived_constructor(int) */

Derived * Derived_constructor(Derived *param_0,int param_1)

{
 Base_constructor((Base *)param_0);
 *(undefined ***)param_0 = (undefined **)&PTR_virtual_func_000145d8;
 *(int *)(param_0 + 4) = param_1;
 return param_0;
}



/* Function: virtual_func @ 00012604 */

/* Derived_virtual_func(int) */

int Derived_virtual_func(Derived *param_0,int param_1)

{
 (void)param_0;
 return param_1 * 0;
}



/* Function: getName @ 00012638 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00012660 */

/* BaseA::funcA() */

undefined4 BaseA_funcA(BaseA *this_ptr)

{
 (void)this_ptr;
 return 10;
}



/* Function: ~BaseA @ 00012684 */

/* BaseA_destructor() */

BaseA * BaseA_destructor(BaseA *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_funcA_000145c4;
 return param_0;
}



/* Function: ~BaseA @ 000126b8 */

/* BaseA_destructor() */

BaseA * BaseA_destructor_thunk(BaseA *param_0)

{
 BaseA_destructor(param_0);
 operator_delete(param_0,8);
 return param_0;
}



/* Function: funcB @ 000126ec */

/* BaseB::funcB() */

undefined4 BaseB_funcB(BaseB *this_ptr)

{
 (void)this_ptr;
 return 0x14;
}



/* Function: ~BaseB @ 00012710 */

/* BaseB_destructor() */

BaseB * BaseB_destructor(BaseB *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_funcB_000145b0;
 return param_0;
}



/* Function: ~BaseB @ 00012744 */

/* BaseB_destructor() */

BaseB * BaseB_destructor_thunk(BaseB *param_0)

{
 BaseB_destructor(param_0);
 operator_delete(param_0,8);
 return param_0;
}



/* Function: funcA @ 00012778 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return 0x1e;
}



/* Function: funcB @ 0001279c */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return 0x28;
}



/* Function: funcB @ 000127c0 */

/* non-virtual thunk to MultiDerived::funcB() */

void MultiDerived_funcB_thunk(MultiDerived *param_0)

{
 MultiDerived_funcB();
 return;
}



/* Function: BaseA @ 000127c8 */

/* BaseA_constructor() */

BaseA * BaseA_constructor(BaseA *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_funcA_000145c4;
 return param_0;
}



/* Function: BaseB @ 000127fc */

/* BaseB_constructor() */

BaseB * BaseB_constructor(BaseB *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_funcB_000145b0;
 return param_0;
}



/* Function: MultiDerived @ 00012830 */

/* MultiDerived_constructor() */

MultiDerived * MultiDerived_constructor(MultiDerived *param_0)

{
 BaseA_constructor((BaseA *)param_0);
 BaseB_constructor((BaseB *)(param_0 + 8));
 *(undefined ***)param_0 = (undefined **)&PTR_funcA_00014584;
 *(undefined ***)(param_0 + 8) = (undefined **)&PTR_funcB_0001459c;
 return param_0;
}



/* Function: func @ 0001288c */

/* VirtualBase::func() */

undefined4 VirtualBase_func(VirtualBase *this_ptr)

{
 (void)this_ptr;
 return 100;
}



/* Function: ~VirtualBase @ 000128b0 */

/* VirtualBase_destructor() */

VirtualBase * VirtualBase_destructor(VirtualBase *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_func_00014570;
 return param_0;
}



/* Function: ~VirtualBase @ 000128e4 */

/* VirtualBase_destructor() */

VirtualBase * VirtualBase_destructor_thunk(VirtualBase *param_0)

{
 VirtualBase_destructor(param_0);
 operator_delete(param_0,8);
 return param_0;
}



/* Function: func @ 00012918 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *param_0)

{
 (void)param_0;
 return 0x96;
}



/* Function: func @ 0001295c */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *param_0)

{
 MiddleA_func(param_0 + *(int *)(*(int *)param_0 + -0xc));
 return;
}



/* Function: func @ 00012970 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *param_0)

{
 (void)param_0;
 return 200;
}



/* Function: func @ 000129b4 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *param_0)

{
 MiddleB_func(param_0 + *(int *)(*(int *)param_0 + -0xc));
 return;
}



/* Function: func @ 000129c8 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *param_0)

{
 (void)param_0;
 return 0xfa;
}



/* Function: func @ 00012a0c */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *param_0)

{
 DiamondDerived_func(param_0 + *(int *)(*(int *)param_0 + -0xc));
 return;
}



/* Function: func @ 00012a20 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(DiamondDerived *param_0)

{
 DiamondDerived_func(param_0 + -8);
 return;
}



/* Function: VirtualBase @ 00012a28 */

/* VirtualBase_VirtualBase() */

VirtualBase * VirtualBase_VirtualBase(VirtualBase *param_0)

{
 *(undefined ***)param_0 = (undefined **)&PTR_func_00014570;
 return param_0;
}



/* Function: MiddleA @ 00012a5c */

/* MiddleA_MiddleA() */

MiddleA * MiddleA_MiddleA(MiddleA *param_0)

{
 undefined4 *in_r1;
 
 *(undefined4 *)param_0 = *in_r1;
 *(undefined4 *)(param_0 + *(int *)(*(int *)param_0 + -0xc)) = in_r1[1];
 return param_0;
}



/* Function: ~MiddleA @ 00012abc */

/* MiddleA_destructor() */

MiddleA * MiddleA_destructor(MiddleA *param_0)

{
 undefined4 *in_r1;
 
 *(undefined4 *)param_0 = *in_r1;
 *(undefined4 *)(param_0 + *(int *)(*(int *)param_0 + -0xc)) = in_r1[1];
 return param_0;
}



/* Function: MiddleB @ 00012b1c */

/* MiddleB_MiddleB() */

MiddleB * MiddleB_MiddleB(MiddleB *param_0)

{
 undefined4 *in_r1;
 
 *(undefined4 *)param_0 = *in_r1;
 *(undefined4 *)(param_0 + *(int *)(*(int *)param_0 + -0xc)) = in_r1[1];
 return param_0;
}



/* Function: ~MiddleB @ 00012b7c */

/* MiddleB_destructor() */

MiddleB * MiddleB_destructor(MiddleB *param_0)

{
 undefined4 *in_r1;
 
 *(undefined4 *)param_0 = *in_r1;
 *(undefined4 *)(param_0 + *(int *)(*(int *)param_0 + -0xc)) = in_r1[1];
 return param_0;
}



/* Function: DiamondDerived @ 00012bdc */

/* DiamondDerived_DiamondDerived() */

DiamondDerived * DiamondDerived_DiamondDerived(DiamondDerived *param_0)

{
 VirtualBase_VirtualBase((VirtualBase *)(param_0 + 0x10));
 MiddleA_MiddleA((MiddleA *)param_0);
 MiddleB_MiddleB((MiddleB *)(param_0 + 8));
 *(undefined ***)param_0 = (undefined **)&PTR_func_000144a4;
 *(undefined ***)(param_0 + 0x10) = (undefined **)&PTR_func_000144d8;
 *(undefined ***)(param_0 + 8) = (undefined **)&PTR_func_000144bc;
 return param_0;
}



/* Function: Point @ 00012c74 */

/* Point_Point(int, int) */

Point * Point_Point(Point *param_0,int param_1,int param_2)

{
 *(int *)param_0 = param_1;
 *(int *)(param_0 + 4) = param_2;
 return param_0;
}



/* Function: operator+ @ 00012cb8 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

Point * Point_operator_plus(Point *param_0,Point *param_1)

{
 int *in_r2;
 
 Point_Point(param_0,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
 return param_0;
}



/* Function: operator== @ 00012d10 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined4 Point_operator_eq(Point *param_0,Point *param_1)

{
 undefined4 uVar1;
 
 if ((*(int *)param_0 == *(int *)param_1) && (*(int *)(param_0 + 4) == *(int *)(param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: operator++ @ 00012d70 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * Point_operator_inc(Point *param_0)

{
 *(int *)param_0 = *(int *)param_0 + 1;
 *(int *)(param_0 + 4) = *(int *)(param_0 + 4) + 1;
 return param_0;
}



/* Function: template_max_int @ 00012dbc */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00012dfc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012e28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0),in_r0,in_r1,
 in_r2,in_r3);
 return param_1;
}



/* Function: template_swap_int @ 00012e5c */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00012ea8 */

/* Container_int_Container() */

Container_int * Container_int_Container(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return this_ptr;
}



/* Function: push @ 00012ed8 */

/* Container<int>::push(int) */

Container_int * Container_int_push(Container_int *this_ptr,int param_1)

{
 Container_int *pCVar1;
 int iVar2;
 
 pCVar1 = this_ptr;
 if (*(int *)(this_ptr + 0x28) < 10) {
 iVar2 = *(int *)(this_ptr + 0x28);
 pCVar1 = (Container_int *)(iVar2 + 1);
 *(Container_int **)(this_ptr + 0x28) = pCVar1;
 *(int *)(this_ptr + iVar2 * 4) = param_1;
 }
 return pCVar1;
}



/* Function: get @ 00012f2c */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (*(int *)(this_ptr + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined4 *)(this_ptr + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00012f84 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 00012fac */

/* Container_double_Container() */

Container_double * Container_double_Container(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return this_ptr;
}



/* Function: push @ 00012fdc */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 undefined4 *puVar2;
 undefined4 in_r2;
 undefined4 in_r3;
 
 if (*(int *)(this_ptr + 0x50) < 10) {
 iVar1 = *(int *)(this_ptr + 0x50);
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 puVar2 = (undefined4 *)(this_ptr + iVar1 * 8);
 *puVar2 = in_r2;
 puVar2[1] = in_r3;
 }
 return SUB84(param_1,0);
}



/* Function: get @ 00013040 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 if ((param_1 < 0) || (*(int *)(this_ptr + 0x50) <= param_1)) {
 uVar1 = 0;
 uVar2 = 0;
 }
 else {
 uVar1 = *(undefined4 *)(this_ptr + param_1 * 8);
 uVar2 = *(undefined4 *)(this_ptr + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
}



/* Function: getSize @ 000130a8 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: __uniq_ptr_data @ 000130d0 */

/* std::__uniq_ptr_data<int, default_delete, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

__uniq_ptr_data_int_std_default_delete_int_true_true *
__uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data_int_std_default_delete_int_true_true *this_ptr,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 ((__uniq_ptr_impl_int_std_default_delete_int *)this_ptr,(__uniq_ptr_impl *)param_1);
 return this_ptr;
}



/* Function: unique_ptr @ 00013108 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
 std::default_delete<int> >&&) */

unique_ptr_int_std_default_delete_int *
unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr_int_std_default_delete_int *this_ptr,unique_ptr *param_1)

{
 __uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_data
 ((__uniq_ptr_data_int_std_default_delete_int_true_true *)this_ptr,
 (__uniq_ptr_data *)param_1);
 return this_ptr;
}



/* Function: getType @ 00013140 */

/* RTTIBase::getType() const */

undefined4 RTTIBase_getType(void)

{
 return 0;
}



/* Function: getType @ 00013164 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: derivedA_data @ 00013188 */

/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA_derivedA_data(RTTIDerivedA *this_ptr)

{
 (void)this_ptr;
 return 100;
}



/* Function: getType @ 000131ac */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: derivedB_data @ 000131d0 */

/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB_derivedB_data(RTTIDerivedB *this_ptr)

{
 (void)this_ptr;
 return 200;
}



/* Function: RTTIBase @ 000131f4 */

/* RTTIBase_RTTIBase() */

RTTIBase * RTTIBase_RTTIBase(RTTIBase *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR__RTTIBase_0001448c;
 return this_ptr;
}



/* Function: ~RTTIBase @ 00013228 */

/* RTTIBase_destructor() */

RTTIBase * RTTIBase_destructor(RTTIBase *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR__RTTIBase_0001448c;
 return this_ptr;
}



/* Function: ~RTTIBase @ 0001325c */

/* RTTIBase_destructor() */

RTTIBase * RTTIBase_destructor_thunk(RTTIBase *this_ptr)

{
 RTTIBase_destructor(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: RTTIDerivedA @ 00013290 */

/* RTTIDerivedA_RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(undefined ***)this_ptr = (undefined **)&PTR__RTTIDerivedA_00014478;
 return this_ptr;
}



/* Function: RTTIDerivedB @ 000132cc */

/* RTTIDerivedB_RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIBase_RTTIBase((RTTIBase *)this_ptr);
 *(undefined ***)this_ptr = (undefined **)&PTR__RTTIDerivedB_00014464;
 return this_ptr;
}



/* Function: __uniq_ptr_impl @ 00013308 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data<int,std::default_delete<int>,true,true> *
std___uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this_ptr,int *param_1)

{
 __uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 ((__uniq_ptr_impl_int_std_default_delete_int *)this_ptr,param_1);
 return this_ptr;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00013340 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
 */

unique_ptr<int,std::default_delete<int>> *
std_unique_ptr_int_std_default_delete_int_unique_ptr
 (unique_ptr<int,std::default_delete<int>> *this_ptr,int *param_1)

{
 __uniq_ptr_data_int_std_default_delete_int_true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std_default_delete_int_true_true *)this_ptr,param_1);
 return this_ptr;
}



/* Function: ~unique_ptr @ 00013374 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

unique_ptr_int_std_default_delete_int *
unique_ptr_int_std_default_delete_int_destructor
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 int **ppiVar1;
 default_delete *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)std___uniq_ptr_impl_int_std_default_delete_int__M_ptr
 ((std___uniq_ptr_impl_int_std_default_delete_int *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete *)std_unique_ptr_int_std_default_delete_int_get_deleter((unique_ptr_int_std_default_delete_int *)this_ptr);
 ptVar2 = std_move_int_ptr(ppiVar1);
 std_default_delete_int_operator(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this_ptr;
}



/* Function: operator* @ 000133e8 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined4
unique_ptr_int_std_default_delete_int_operator_star
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 undefined4 uVar1;
 
 uVar1 = std_unique_ptr_int_std_default_delete_int_get((unique_ptr_int_std_default_delete_int *)this_ptr);
 return uVar1;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00013418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
 std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
 std::default_delete<int> >&) */

type * std_move(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 0001343c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0u, int*,
 std::default_delete<int> >&&) */

_Tuple_impl_0u_int_std_default_delete_int *
_Tuple_impl_0u_int_std_default_delete_int__Tuple_impl
 (_Tuple_impl_0u_int_std_default_delete_int *this_ptr,_Tuple_impl *param_1)

{
 _Tuple_impl_1u_default_delete_int__Tuple_impl((_Tuple_impl_1u_default_delete_int *)this_ptr);
 *(undefined4 *)this_ptr = *(undefined4 *)param_1;
 return this_ptr;
}



/* Function: tuple @ 0001347c */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

tuple_int_std_default_delete_int *
tuple_int_std_default_delete_int_tuple
 (tuple_int_std_default_delete_int *this_ptr,tuple *param_1)

{
 _Tuple_impl_0u_int_default_delete_int__Tuple_impl
 ((_Tuple_impl_0u_int_default_delete_int *)this_ptr,(_Tuple_impl *)param_1);
 return this_ptr;
}



/* Function: __uniq_ptr_impl @ 000134b4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

__uniq_ptr_impl_int_std_default_delete_int *
__uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl_int_std_default_delete_int *this_ptr,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined4 *puVar2;
 
 ptVar1 = std_move((tuple *)param_1);
 tuple_int_std_default_delete_int_tuple
 ((tuple_int_std_default_delete_int *)this_ptr,(tuple *)ptVar1);
 puVar2 = (undefined4 *)std___uniq_ptr_impl_int_std_default_delete_int__M_ptr((std___uniq_ptr_impl_int_std_default_delete_int *)param_1);
 *puVar2 = 0;
 return this_ptr;
}



/* Function: __uniq_ptr_impl @ 0001350c */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data_int_std_default_delete_int_array_true_true *
__uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_impl
 (__uniq_ptr_data_int_std_default_delete_int_array_true_true *this_ptr,int *param_1)

{
 std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 ((std___uniq_ptr_impl_int_std_default_delete_int_array *)this_ptr,param_1);
 return this_ptr;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00013544 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

unique_ptr_int_array_std_default_delete_int_array *
std_unique_ptr_int_array_std_default_delete_int_array_unique_ptr
 (unique_ptr_int_array_std_default_delete_int_array *this_ptr,int *param_1)

{
 __uniq_ptr_data_int_std_default_delete_int_array_true_true___uniq_ptr_impl
 ((__uniq_ptr_data_int_std_default_delete_int_array_true_true *)this_ptr,param_1);
 return this_ptr;
}



/* Function: ~unique_ptr @ 00013578 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

unique_ptr_int_array_std_default_delete_int_array *
std_unique_ptr_int_array_std_default_delete_int_array_destructor
 (unique_ptr_int_array_std_default_delete_int_array *this_ptr)

{
 int *piVar1;
 default_delete_int_array *this_00;
 
 piVar1 = (int *)std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 ((std___uniq_ptr_impl_int_std_default_delete_int_array *)this_ptr);
 if (*piVar1 != 0) {
 this_00 = (default_delete_int_array *)std_unique_ptr_int_array_std_default_delete_int_array_get_deleter((unique_ptr_int_array_std_default_delete_int_array *)this_ptr);
 std_default_delete_int_array_operator(this_00,(int *)*piVar1);
 }
 *piVar1 = 0;
 return this_ptr;
}



/* Function: operator[] @ 000135e4 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int
std_unique_ptr_int_array_std_default_delete_int_array_operator_index
 (unique_ptr_int_array_std_default_delete_int_array *this_ptr,uint32_t param_1)

{
 int iVar1;
 
 iVar1 = std_unique_ptr_int_array_std_default_delete_int_array_get((unique_ptr_int_array_std_default_delete_int_array *)this_ptr);
 return iVar1 + param_1 * 4;
}



/* Function: __uniq_ptr_impl @ 00013624 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

std___uniq_ptr_impl_int_std_default_delete_int *
std___uniq_ptr_impl_int_std_default_delete_int___uniq_ptr_impl
 (std___uniq_ptr_impl_int_std_default_delete_int *this_ptr,int *param_1)

{
 undefined4 *puVar1;
 
 std_tuple_int_std_default_delete_int_tuple
 ((tuple_int_std_default_delete_int *)this_ptr);
 puVar1 = (undefined4 *)std___uniq_ptr_impl_int_std_default_delete_int__M_ptr(this_ptr);
 *puVar1 = param_1;
 return this_ptr;
}



/* Function: _M_ptr @ 00013668 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

type *
std___uniq_ptr_impl_int_std_default_delete_int__M_ptr
 (std___uniq_ptr_impl_int_std_default_delete_int *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_default_delete_int((tuple *)this_ptr);
 return ptVar1;
}



/* Function: get_deleter @ 00013694 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined4
std_unique_ptr_int_std_default_delete_int_get_deleter
 (unique_ptr_int_std_default_delete_int *this_ptr)

{
 undefined4 uVar1;
 
 uVar1 = std__uniq_ptr_impl_int_default_delete_int__M_deleter
 ((std__uniq_ptr_impl_int_default_delete_int *)this_ptr);
 return uVar1;
}



/* Function: move<int*&> @ 000136c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std_move(int*&) */

type * std_move_int_ptr(int **param_1)

{
 return (type *)param_1;
}



/* Function: operator() @ 000136e4 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void std_default_delete_int_operator(default_delete *param_0,int *param_1)

{
 if (param_1 != (int *)0x0) {
  operator_delete(param_1,4);
 }
 return;
}



/* Function: get @ 0001371c */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined4
std_unique_ptr_int_std_default_delete_int_get(unique_ptr_int_std_default_delete_int *this_ptr)

{
 undefined4 uVar1;
 
 uVar1 = std__uniq_ptr_impl_int_default_delete_int__M_ptr
 ((std__uniq_ptr_impl_int_default_delete_int *)this_ptr);
 return uVar1;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00013748 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
 >&) */

type * std_move(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 0001376c */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
 std::default_delete<int> >&&) */

_Tuple_impl * _Tuple_impl__Tuple_impl(_Tuple_impl *param_0)

{
 return param_0;
}



/* Function: __uniq_ptr_impl @ 00013794 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

std___uniq_ptr_impl_int_std_default_delete_int_array *
std___uniq_ptr_impl_int_std_default_delete_int_array___uniq_ptr_impl
 (std___uniq_ptr_impl_int_std_default_delete_int_array *this_ptr,int *param_1)

{
 undefined4 *puVar1;
 
 std_tuple_int_std_default_delete_int_array_tuple
 ((tuple_int_std_default_delete_int_array *)this_ptr);
 puVar1 = (undefined4 *)std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr(this_ptr);
 *puVar1 = param_1;
 return this_ptr;
}



/* Function: _M_ptr @ 000137d8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

type *
std___uniq_ptr_impl_int_std_default_delete_int_array__M_ptr
 (std___uniq_ptr_impl_int_std_default_delete_int_array *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_default_delete_int_array((tuple *)this_ptr);
 return ptVar1;
}



/* Function: get_deleter @ 00013804 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined4
std_unique_ptr_int_array_std_default_delete_int_array_get_deleter
 (unique_ptr_int_array_std_default_delete_int_array *this_ptr)

{
 undefined4 uVar1;
 
 uVar1 = std__uniq_ptr_impl_int_default_delete_int_array__M_deleter
 ((std__uniq_ptr_impl_int_default_delete_int_array *)this_ptr);
 return uVar1;
}



/* Function: operator() @ 00013830 */

/* void
 std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void std_default_delete_int_array_operator(default_delete_int_array *param_0,int *param_1)

{
 if (param_1 != (int *)0x0) {
  operator_delete__(param_1);
 }
 return;
}



/* Function: get @ 00013864 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined4
std_unique_ptr_int_array_std_default_delete_int_array_get
 (unique_ptr_int_array_std_default_delete_int_array *this_ptr)

{
 undefined4 uVar1;
 
 uVar1 = std__uniq_ptr_impl_int_default_delete_int_array__M_ptr
 ((std__uniq_ptr_impl_int_default_delete_int_array *)this_ptr);
 return uVar1;
}



/* Function: tuple<true,true> @ 00013890 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

tuple_int_std_default_delete_int *
std_tuple_int_std_default_delete_int_tuple
 (tuple_int_std_default_delete_int *this_ptr)

{
 _Tuple_impl_0u_int_default_delete_int__Tuple_impl
 ((_Tuple_impl_0u_int_default_delete_int *)this_ptr);
 return this_ptr;
}



/* Function: std_get_0u_int_default_delete_int @ 000138bc */

type * std_get_0u_int_default_delete_int(tuple *param_0)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_default_delete_int((_Tuple_impl *)param_0);
 return ptVar1;
}



/* Function: _M_deleter @ 000138e8 */

type *
std__uniq_ptr_impl_int_default_delete_int__M_deleter
 (std__uniq_ptr_impl_int_default_delete_int *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_1u_int_default_delete_int((tuple *)this_ptr);
 return ptVar1;
}



/* Function: _M_ptr @ 00013914 */

undefined4
std__uniq_ptr_impl_int_default_delete_int__M_ptr
 (std__uniq_ptr_impl_int_default_delete_int *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_default_delete_int((tuple *)this_ptr);
 return *(undefined4 *)ptVar1;
}



/* Function: tuple<true,true> @ 00013944 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

tuple_int_std_default_delete_int_array *
std_tuple_int_std_default_delete_int_array_tuple
 (tuple_int_std_default_delete_int_array *this_ptr)

{
 _Tuple_impl_0u_int_default_delete_int_array__Tuple_impl
 ((_Tuple_impl_0u_int_default_delete_int_array *)this_ptr);
 return this_ptr;
}



/* Function: std_get_0u_int_default_delete_int_array @ 00013970 */

type * std_get_0u_int_default_delete_int_array(tuple *param_0)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_default_delete_int_array((_Tuple_impl *)param_0);
 return ptVar1;
}



/* Function: _M_deleter @ 0001399c */

type *
std__uniq_ptr_impl_int_default_delete_int_array__M_deleter
 (std__uniq_ptr_impl_int_default_delete_int_array *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_1u_int_default_delete_int_array((tuple *)this_ptr);
 return ptVar1;
}



/* Function: _M_ptr @ 000139c8 */

undefined4
std__uniq_ptr_impl_int_default_delete_int_array__M_ptr
 (std__uniq_ptr_impl_int_default_delete_int_array *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_default_delete_int_array((tuple *)this_ptr);
 return *(undefined4 *)ptVar1;
}



/* Function: _Tuple_impl @ 000139f8 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl_0u_int_default_delete_int *
_Tuple_impl_0u_int_default_delete_int__Tuple_impl
 (_Tuple_impl_0u_int_default_delete_int *this_ptr)

{
 _Tuple_impl_1u_default_delete_int__Tuple_impl
 ((_Tuple_impl_1u_default_delete_int *)this_ptr);
 _Head_base_0u_int_false__Head_base((_Head_base_0u_int_false *)this_ptr);
 return this_ptr;
}



/* Function: __get_helper_0u_int_default_delete_int @ 00013a2c */

int ** __get_helper_0u_int_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: std_get_1u_int_default_delete_int @ 00013a54 */

type * std_get_1u_int_default_delete_int(tuple *param_0)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1u_default_delete_int((_Tuple_impl *)param_0);
 return (type *)pdVar1;
}



/* Function: std_get_0u_int_default_delete_int_const @ 00013a7c */

type * std_get_0u_int_default_delete_int_const(tuple *param_0)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_default_delete_int((_Tuple_impl *)param_0);
 return ptVar1;
}



/* Function: _Tuple_impl @ 00013aa8 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl_0u_int_default_delete_int_array *
_Tuple_impl_0u_int_default_delete_int_array__Tuple_impl
 (_Tuple_impl_0u_int_default_delete_int_array *this_ptr)

{
 _Tuple_impl_1u_default_delete_int_array__Tuple_impl
 ((_Tuple_impl_1u_default_delete_int_array *)this_ptr);
 _Head_base_0u_int_false__Head_base((_Head_base_0u_int_false *)this_ptr);
 return this_ptr;
}



/* Function: __get_helper_0u_int_default_delete_int_array @ 00013adc */

int ** __get_helper_0u_int_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: std_get_1u_int_default_delete_int_array @ 00013b04 */

type * std_get_1u_int_default_delete_int_array(tuple *param_0)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1u_default_delete_int_array((_Tuple_impl *)param_0);
 return (type *)pdVar1;
}



/* Function: std_get_0u_int_default_delete_int_array_const @ 00013b2c */

type * std_get_0u_int_default_delete_int_array_const(tuple *param_0)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_default_delete_int_array((_Tuple_impl *)param_0);
 return ptVar1;
}



/* Function: forward_int @ 00013b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std_forward_int(std::remove_reference<int*&>::type&) */

int ** std_forward_int(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Tuple_impl @ 00013b7c */

/* std_Tuple_impl_1u_default_delete_int__Tuple_impl() */

_Tuple_impl_1u_default_delete_int *
_Tuple_impl_1u_default_delete_int__Tuple_impl
 (_Tuple_impl_1u_default_delete_int *this_ptr)

{
 _Head_base_1u_default_delete_int_true__Head_base
 ((_Head_base_1u_default_delete_int_true *)this_ptr);
 return this_ptr;
}



/* Function: _Head_base @ 00013ba4 */

/* std_Head_base_0u_int_false__Head_base() */

_Head_base_0u_int_false *
_Head_base_0u_int_false__Head_base(_Head_base_0u_int_false *this_ptr)

{
 *(undefined4 *)this_ptr = 0;
 return this_ptr;
}



/* Function: _M_head @ 00013bd4 */

/* std_Tuple_impl_0u_int_default_delete_int__M_head() */

undefined4 std_Tuple_impl_0u_int_default_delete_int__M_head(_Tuple_impl *param_0)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_0u_int_false__M_head((_Head_base_0u_int_false *)param_0);
 return uVar1;
}



/* Function: __get_helper_1u_default_delete_int @ 00013c00 */

default_delete * __get_helper_1u_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std_Tuple_impl_1u_default_delete_int__M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper_0u_int_default_delete_int_const @ 00013c28 */

int ** __get_helper_0u_int_default_delete_int_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0u_int_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013c50 */

/* std_Tuple_impl_1u_default_delete_int_array__Tuple_impl() */

_Tuple_impl_1u_default_delete_int_array *
_Tuple_impl_1u_default_delete_int_array__Tuple_impl
 (_Tuple_impl_1u_default_delete_int_array *param_0)

{
 _Head_base_1u_default_delete_int_array_true__Head_base
 ((_Head_base_1u_default_delete_int_array_true *)param_0);
 return param_0;
}



/* Function: _M_head @ 00013c78 */

/* std_Tuple_impl_0u_int_default_delete_int_array__M_head() */

undefined4 std_Tuple_impl_0u_int_default_delete_int_array__M_head(_Tuple_impl *param_0)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_0u_int_false__M_head((_Head_base_0u_int_false *)param_0);
 return uVar1;
}



/* Function: __get_helper_1u_default_delete_int_array @ 00013ca4 */

default_delete * __get_helper_1u_default_delete_int_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std_Tuple_impl_1u_default_delete_int_array__M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper_0u_int_default_delete_int_array_const @ 00013ccc */

int ** __get_helper_0u_int_default_delete_int_array_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std_Tuple_impl_0u_int_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: _Head_base_int @ 00013cf4 */

/* std_Head_base_0u_int_false__Head_base_int(int*&) */

_Head_base_0u_int_false *
std_Head_base_0u_int_false__Head_base_int(_Head_base_0u_int_false *this_ptr,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int((type *)param_1);
 *(int **)this_ptr = *ppiVar1;
 return this_ptr;
}



/* Function: _Head_base @ 00013d30 */

/* std_Head_base_1u_default_delete_int_true__Head_base() */

_Head_base_1u_default_delete_int_true *
_Head_base_1u_default_delete_int_true__Head_base
 (_Head_base_1u_default_delete_int_true *this_ptr)

{
 return this_ptr;
}



/* Function: _M_head @ 00013d54 */

/* std_Head_base_0u_int_false__M_head() */

undefined4 std_Head_base_0u_int_false__M_head(_Head_base_0u_int_false *this_ptr)

{
 return *(undefined4 *)this_ptr;
}



/* Function: _M_head @ 00013d78 */

/* std_Tuple_impl_1u_default_delete_int__M_head() */

undefined4 std_Tuple_impl_1u_default_delete_int__M_head(_Tuple_impl *param_0)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_1u_default_delete_int_true__M_head((_Head_base_1u_default_delete_int_true *)param_0);
 return uVar1;
}



/* Function: _M_head @ 00013da0 */

/* std_Tuple_impl_0u_int_default_delete_int__M_head_const() */

undefined4 std_Tuple_impl_0u_int_default_delete_int__M_head_const(_Tuple_impl *param_0)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_0u_int_false__M_head((_Head_base_0u_int_false *)param_0);
 return uVar1;
}



/* Function: _Head_base @ 00013dcc */

/* std_Head_base_1u_default_delete_int_array_true__Head_base() */

_Head_base_1u_default_delete_int_array_true *
_Head_base_1u_default_delete_int_array_true__Head_base
 (_Head_base_1u_default_delete_int_array_true *this_ptr)

{
 return this_ptr;
}



/* Function: _M_head @ 00013df0 */

/* std_Tuple_impl_1u_default_delete_int_array__M_head() */

undefined4 std_Tuple_impl_1u_default_delete_int_array__M_head(_Tuple_impl *param_0)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_1u_default_delete_int_array_true__M_head((_Head_base_1u_default_delete_int_array_true *)param_0);
 return uVar1;
}



/* Function: _M_head @ 00013e18 */

/* std_Tuple_impl_0u_int_default_delete_int_array__M_head_const() */

undefined4 std_Tuple_impl_0u_int_default_delete_int_array__M_head_const(_Tuple_impl *param_0)

{
 undefined4 uVar1;
 
 uVar1 = _Head_base_0u_int_false__M_head((_Head_base_0u_int_false *)param_0);
 return uVar1;
}



/* Function: _M_head @ 00013e44 */

/* std_Head_base_1u_default_delete_int_true__M_head() */

undefined4 std_Head_base_1u_default_delete_int_true__M_head(_Head_base_1u_default_delete_int_true *this_ptr)

{
 return *(undefined4 *)this_ptr;
}



/* Function: _M_head @ 00013e68 */

/* std_Head_base_0u_int_false__M_head_const() */

undefined4 std_Head_base_0u_int_false__M_head_const(_Head_base_0u_int_false *this_ptr)

{
 return *(undefined4 *)this_ptr;
}



/* Function: _M_head @ 00013e8c */

/* std_Head_base_1u_default_delete_int_array_true__M_head() */

undefined4 std_Head_base_1u_default_delete_int_array_true__M_head(_Head_base_1u_default_delete_int_array_true *this_ptr)

{
 return *(undefined4 *)this_ptr;
}



/* Function: ~RTTIDerivedB @ 00013eb0 */

/* RTTIDerivedB_destructor() */

RTTIDerivedB * RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR__RTTIDerivedB_00014464;
 RTTIBase_destructor((RTTIBase *)this_ptr);
 return this_ptr;
}



/* Function: ~RTTIDerivedB @ 00013eec */

/* RTTIDerivedB_destructor() */

RTTIDerivedB * RTTIDerivedB_destructor_thunk(RTTIDerivedB *this_ptr)

{
 RTTIDerivedB_destructor(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 00013f20 */

/* RTTIDerivedA_destructor() */

RTTIDerivedA * RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR__RTTIDerivedA_00014478;
 RTTIBase_destructor((RTTIBase *)this_ptr);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 00013f5c */

/* RTTIDerivedA_destructor() */

RTTIDerivedA * RTTIDerivedA_destructor_thunk(RTTIDerivedA *this_ptr)

{
 RTTIDerivedA_destructor(this_ptr);
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00013f90 */

/* DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR_func_000144a4;
 *(undefined ***)(this_ptr + 0x10) = (undefined **)&PTR_func_000144d8;
 *(undefined ***)(this_ptr + 8) = (undefined **)&PTR_func_000144bc;
 MiddleB_destructor((MiddleB *)(this_ptr + 8));
 MiddleA_destructor((MiddleA *)this_ptr);
 VirtualBase_destructor((VirtualBase *)(this_ptr + 0x10));
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00014028 */

/* non-virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_destructor(this_ptr + -8);
 return;
}



/* Function: ~DiamondDerived @ 00014030 */

/* virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_destructor(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00014044 */

/* DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_destructor(this_ptr);
 operator_delete(this_ptr,0x18);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00014078 */

/* non-virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_thunk3(DiamondDerived *this_ptr)

{
 DiamondDerived_destructor(this_ptr + -8);
 return;
}



/* Function: ~DiamondDerived @ 00014080 */

/* virtual thunk to DiamondDerived_destructor() */

void DiamondDerived_destructor_virtual_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_destructor(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: ~MultiDerived @ 00014094 */

/* MultiDerived_destructor() */

MultiDerived * MultiDerived_destructor(MultiDerived *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR_funcA_00014584;
 *(undefined ***)(this_ptr + 8) = (undefined **)&PTR_funcB_0001459c;
 BaseB_destructor((BaseB *)(this_ptr + 8));
 BaseA_destructor((BaseA *)this_ptr);
 return this_ptr;
}



/* Function: ~MultiDerived @ 000140f0 */

/* non-virtual thunk to MultiDerived_destructor() */

void MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 MultiDerived_destructor(this_ptr + -8);
 return;
}



/* Function: ~MultiDerived @ 000140f8 */

/* MultiDerived_destructor() */

MultiDerived * MultiDerived_destructor_thunk2(MultiDerived *this_ptr)

{
 MultiDerived_destructor(this_ptr);
 operator_delete(this_ptr,0x10);
 return this_ptr;
}



/* Function: ~MultiDerived @ 0001412c */

/* non-virtual thunk to MultiDerived_destructor() */

void MultiDerived_destructor_thunk3(MultiDerived *this_ptr)

{
 MultiDerived_destructor(this_ptr + -8);
 return;
}



/* Function: ~Derived @ 00014134 */

/* Derived_destructor() */

Derived * Derived_destructor(Derived *this_ptr)

{
 *(undefined ***)this_ptr = (undefined **)&PTR_virtual_func_000145d8;
 Base_destructor((Base *)this_ptr);
 return this_ptr;
}



/* Function: ~Derived @ 00014170 */

/* Derived_destructor() */

Derived * Derived_destructor_thunk(Derived *this_ptr)

{
 Derived_destructor(this_ptr);
 operator_delete(this_ptr,8);
 return this_ptr;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 203 */
