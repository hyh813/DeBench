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
typedef void (*code)(void);

/* Forward declarations for C++ standard library types */
typedef struct _Tuple_impl {
    void *vtable;
    void *data1;
    void *data2;
} _Tuple_impl;

typedef struct tuple {
    _Tuple_impl base;
} tuple;

typedef struct _Head_base {
    void *data;
} _Head_base;

typedef struct default_delete {
    void *vtable;
} default_delete;

typedef struct __uniq_ptr_impl {
    tuple t;
} __uniq_ptr_impl;

typedef struct __uniq_ptr_data {
    __uniq_ptr_impl impl;
} __uniq_ptr_data;

typedef struct unique_ptr {
    __uniq_ptr_data data;
} unique_ptr;

/* Forward declarations for C++ class types */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct _lambda_int___1_ _lambda_int___1_;
typedef struct test_cpp_smart_ptr_lambda_int_ptr_1_ test_cpp_smart_ptr_lambda_int_ptr_1_;

/* Forward declarations for missing functions */
void __stack_chk_fail(void);
void __cxa_bad_typeid(void);
void *__cxa_allocate_exception(uint32_t size);
void __cxa_throw(void *obj, void *typeinfo, void *destructor);
int __aeabi_d2iz(double);
void __aeabi_dcmpgt(uint32_t a1, int a2, uint32_t b1, uint32_t b2, uint32_t b3, uint32_t b4);
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete__(void *ptr);
uint64_t CONCAT44(uint32_t hi, uint32_t lo);

/* Forward declarations for template functions removed - implementations present below */

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
 (*(code *)(void *)0x0)();
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
 SimpleClass_Constructor(aSStack_30,5,"Test");
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
 LifecycleClass_Constructor(aLStack_14,5);
 iVar1 = LifecycleClass_getData(aLStack_14,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass_Destructor(aLStack_14);
 iVar3 = LifecycleClass_getInstanceCount();
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3 * 1000;
}



/* Function: call_virtual_func @ 00010e48 */

/* call_virtual_func(Base*, int) */

uint32_t call_virtual_func(Base *param_1,int param_2)

{
 uint32_t uVar1;
 
 uVar1 = (*(code *)**(uint32_t **)param_1)(param_1,param_2);
 return uVar1;
}



/* Function: test_cpp_virtual_func @ 00010e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 uint32_t uVar1;
 int iVar2;
 void **local_38;
 int local_34;
 int local_30;
 Base *local_2c;
 Base *local_28;
 int local_24;
 int local_20;
 Derived aDStack_1c [8];
 int local_14;
 
 local_14 = 0;
 local_38 = &PTR_virtual_func_000145f0;
 Derived_Constructor(aDStack_1c,3);
 local_34 = Base_virtual_func(((Base *)&local_38),5);
 local_30 = Derived_virtual_func(aDStack_1c,5);
 local_2c = (Base *)&local_38;
 local_28 = (Base *)aDStack_1c;
 local_24 = call_virtual_func((Base *)local_2c,5);
 local_20 = call_virtual_func((Base *)local_28,5);
 iVar2 = local_34 + local_30 + local_24 + local_20;
 Derived_Destructor(aDStack_1c);
 Base_Destructor(((Base *)&local_38));
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
 uint32_t uVar3;
 uint32_t *local_24;
 uint32_t local_20;
 uint32_t *local_1c;
 uint32_t local_18;
 int local_14;
 
 local_14 = 0;
 MultiDerived_Constructor((MultiDerived *)&local_24);
 local_20 = 100;
 local_18 = 200;
 iVar1 = (*(code *)*local_24)(&local_24);
 iVar2 = (*(code *)*local_1c)(&local_1c);
 uVar3 = MultiDerived_Destructor((MultiDerived *)&local_24);
 if (local_14 == 0) {
 return iVar1 + iVar2 + (uint)(&local_24 != &local_1c);
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
 uint32_t uVar3;
 DiamondDerived aDStack_2c [16];
 uint32_t *local_1c;
 uint32_t local_18;
 int local_14;
 
 local_14 = 0;
 DiamondDerived_Constructor(aDStack_2c);
 local_18 = 0x32;
 iVar1 = (*(code *)*local_1c)(&local_1c);
 local_18 = 100;
 iVar2 = (*(code *)*local_1c)(&local_1c);
 uVar3 = DiamondDerived_Destructor(aDStack_2c);
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
 uint32_t uVar2;
 int iVar3;
 Point aPStack_24 [8];
 Point aPStack_1c [8];
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 Point_Constructor(aPStack_24,1,2);
 Point_Constructor(aPStack_1c,3,4);
 Point_operator_plus((Point *)&local_14,aPStack_24);
 cVar1 = Point_operator_equal(aPStack_24,aPStack_1c);
 uVar2 = Point_operator_increment((Point *)&local_14);
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
 uint32_t extraout_r0;
 int iVar1;
 uint32_t extraout_r1;
 double extraout_d0;
 double extraout_d1;
 int local_24;
 int local_20;
 int local_1c;
 uint32_t local_18;
 uint32_t local_14;
 int local_c;
 
 local_c = 0;
 local_1c = template_max_int(3,7);
 template_max_double(0.0,0.0);
 local_24 = 10;
 local_20 = 0x14;
 local_18 = extraout_r0;
 local_14 = extraout_r1;
 template_swap_int(&local_24,&local_20);
 iVar1 = __aeabi_d2iz((double)0.0);
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
 uint32_t uVar4;
 uint32_t extraout_s1;
 uint64_t uVar5;
 Container_int aCStack_9c [44];
 Container_double aCStack_70 [92];
 int local_14;
 
 local_14 = 0;
 Container_int_Constructor(aCStack_9c);
 Container_int_push(aCStack_9c,10);
 Container_int_push(aCStack_9c,0x14);
 Container_int_push(aCStack_9c,0x1e);
 iVar1 = Container_int_get(aCStack_9c,0);
 iVar2 = Container_int_getSize(aCStack_9c);
 Container_double_Constructor(aCStack_70);
 Container_double_push(aCStack_70,0.0);
 uVar5 = Container_double_get(aCStack_70,0);
 iVar3 = __aeabi_d2iz((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + iVar3;
}



/* Function: operator() @ 0001143c */

/* test_cpp_lambda_lambda_int_1__operator_int_ const */

int __thiscall test_cpp_lambda_lambda_int_1__operator_int_(_lambda_int__1_ *this,int param_1)

{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return *(int *)this * param_1 + **(int **)(this + 4);
}



/* Function: test_cpp_lambda @ 0001149c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 uint32_t local_24;
 uint32_t local_20;
 int local_1c;
 uint32_t local_18;
 uint32_t local_14;
 uint32_t *local_10;
 int local_c;
 
 local_c = 0;
 local_20 = 10;
 local_24 = 0x14;
 local_14 = 10;
 local_10 = &local_24;
 local_1c = test_cpp_lambda_lambda_int_1__operator_int_((_lambda_int__1_ *)&local_14,3);
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
 uint32_t *puVar1;
 
 puVar1 = (uint32_t *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: operator() @ 0001169c */

/* test_cpp_smart_ptr_lambda_int_ptr_1__operator_int_ptr_ const */

void __thiscall
test_cpp_smart_ptr_lambda_int_ptr_1__operator_int_ptr_(_lambda_int___1_ *this,int *param_1)

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
 uint32_t *puVar2;
 void *ptVar3;
 uint32_t uVar4;
 int iVar5;
 _lambda_int___1_ a_Stack_34 [4];
 char auStack_30 [16];
 char auStack_2c [16];
 char auStack_28 [16];
 char auStack_24 [16];
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 
 local_14 = 0;
 piVar1 = operator_new(4);
 *piVar1 = 100;
 std_unique_ptr_int_std_default_delete_int___unique_ptr(auStack_30,piVar1);
 puVar2 = (uint32_t *)std_unique_ptr_int_std_default_delete_int__operator_star((unique_ptr *)auStack_30);
 *puVar2 = 200;
 ptVar3 = std_move_unique_ptr((unique_ptr *)auStack_30);
 std_unique_ptr_int_std_default_delete_int__unique_ptr_move(auStack_2c,(unique_ptr *)ptVar3);
 piVar1 = (int *)std_unique_ptr_int_std_default_delete_int__operator_star((unique_ptr *)auStack_2c);
 local_20 = *piVar1;
 piVar1 = operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std_unique_ptr_int___std_default_delete_int____unique_ptr(auStack_28,piVar1);
 piVar1 = (int *)std_unique_ptr_int___std_default_delete_int____operator_idx((unique_ptr *)auStack_28,2);
 local_1c = *piVar1;
 piVar1 = operator_new(4);
 *piVar1 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1__unique_ptr(auStack_24,piVar1,a_Stack_34);
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1__operator_star((unique_ptr *)auStack_24);
 local_18 = *piVar1;
 iVar5 = local_20 + local_1c + local_18;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1__destructor(auStack_24);
 std_unique_ptr_int___std_default_delete_int____destructor(auStack_28);
 std_unique_ptr_int_std_default_delete_int__destructor(auStack_2c);
 uVar4 = std_unique_ptr_int_std_default_delete_int__destructor(auStack_30);
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
 RTTIDerivedA *ptr_this;
 RTTIDerivedB *ptr_this_00;
 int iVar1;
 char *__s;
 size_t sVar2;
 RTTIDerivedA *extraout_r3;
 int local_24;
 
 ptr_this = operator_new(4);
 *(uint32_t *)ptr_this = 0;
 RTTIDerivedA_Constructor(ptr_this);
 ptr_this_00 = operator_new(4);
 *(uint32_t *)ptr_this_00 = 0;
 RTTIDerivedB_Constructor(ptr_this_00);
 local_24 = 0;
 if (ptr_this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00011954:
 local_24 = 10;
 }
 else {
 iVar1 = std_type_info_operator_equal(*(std_type_info **)(*(int *)ptr_this + -4),(std_type_info *)&RTTIDerivedA_typeinfo,0);
 if (iVar1 != 0) goto LAB_00011954;
 }
 if (ptr_this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00011994:
 local_24 = local_24 + 0x14;
 }
 else {
 iVar1 = std_type_info_operator_equal(*(std_type_info **)(*(int *)ptr_this_00 + -4),(std_type_info *)&RTTIDerivedB_typeinfo,0);
 if (iVar1 != 0) goto LAB_00011994;
 }
 if (ptr_this == (RTTIDerivedA *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(ptr_this,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (ptr_this_00 == (RTTIDerivedB *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __dynamic_cast(ptr_this_00,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo);
 }
 if (iVar1 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (ptr_this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 ptr_this = extraout_r3;
 }
 else {
 __s = (char *)std_type_info_name(*(std_type_info **)(*(int *)ptr_this + -4));
 sVar2 = strlen(__s);
 local_24 = sVar2 + local_24;
 if (ptr_this == (RTTIDerivedA *)0x0) goto LAB_00011aa0;
 }
 (**(code **)(*(int *)ptr_this + 4))(ptr_this);
LAB_00011aa0:
 if (ptr_this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(int *)ptr_this_00 + 4))(ptr_this_00);
 }
 return local_24;
}



/* Function: test_cpp_oo_features @ 00011adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 uint32_t uVar1;
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

uint32_t main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr_lambda_int_ptr_1_const&> @ 00011c30 */

/* std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_1__true_false___uniq_ptr_impl */

__uniq_ptr_data * __thiscall
std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_1__true_false___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1,_lambda_int___1_ *param_2)

{
 std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1,param_2);
 return this;
}



/* Function: unique_ptr<test_cpp_smart_ptr_lambda_int_ptr_1_,void> @ 00011c6c */

/* std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___unique_ptr */

unique_ptr * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___unique_ptr
 (unique_ptr *this,int *param_1,_lambda_int___1_ *param_2)

{
 std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_ptr_1__true_false___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1,param_2);
 return this;
}



/* Function: ~unique_ptr @ 00011ca8 */

/* std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___destructor */

unique_ptr * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___destructor
 (unique_ptr *this)

{
 int **ppiVar1;
 _lambda_int___1_ *this_00;
 void *ptVar2;
 
 ppiVar1 = (int **)std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_ptr
 ((__uniq_ptr_impl *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (_lambda_int___1_ *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___get_deleter(this);
 ptVar2 = std_move_int___ref_(ppiVar1);
 test_cpp_smart_ptr_lambda_int_ptr_1__operator_int_ptr_(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}



/* Function: operator* @ 00011d1c */

/* std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___operator_star */

int * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___operator_star
 (unique_ptr *this)

{
 int *piVar1;
 
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___get(this);
 return piVar1;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr_lambda_int_ptr_1_const&> @ 00011d4c */

/* std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___uniq_ptr_impl */

__uniq_ptr_impl * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1,_lambda_int___1_ *param_2)

{
 _lambda_int___1_ *p_Var1;
 int *local_18;
 __uniq_ptr_impl *local_14;
 
 local_18 = param_1;
 local_14 = this;
 p_Var1 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const_ref_((void *)param_2);
 std_tuple_int__test_cpp_smart_ptr_lambda_int_ptr_1___tuple
 ((tuple *)this,&local_18,p_Var1);
 return local_14;
}



/* Function: _M_ptr @ 00011d94 */

/* std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_ptr */

void * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_ptr
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_((tuple *)this);
 return ptVar1;
}



/* Function: get_deleter @ 00011dc0 */

/* std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___get_deleter */

uint32_t __thiscall
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___get_deleter
 (unique_ptr *this)

{
 uint32_t uVar1;
 
 uVar1 = std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_deleter
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: get @ 00011dec */

/* std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___get */

uint32_t __thiscall
std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr_1___get
 (unique_ptr *this)

{
 uint32_t uVar1;
 
 uVar1 = std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_ptr
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: forward<test_cpp_smart_ptr_lambda_int_ptr_1_const&> @ 00011e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const_ref_ */

_lambda_int___1_ * std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const_ref_(void *param_1)

{
 return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr_lambda_int_ptr_1_const&,true> @ 00011e3c */

/* std_tuple_int__test_cpp_smart_ptr_lambda_int_ptr_1___tuple */

tuple * __thiscall
std_tuple_int__test_cpp_smart_ptr_lambda_int_ptr_1___tuple
 (tuple *this,int *param_1,_lambda_int___1_ *param_2)

{
 int **ppiVar1;
 _lambda_int___1_ *p_Var2;
 
 ppiVar1 = (int **)std_forward_int___ref_((void *)(&param_1));
 p_Var2 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const_ref_((void *)param_2);
 std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___Tuple_impl
 ((_Tuple_impl *)this,ppiVar1,p_Var2);
 return this;
}



/* Function: get<0u,int*,test_cpp_smart_ptr_lambda_int_ptr_1_> @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_ */

void * std_get_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_(tuple *param_1)

{
 void *ptVar1;
 
 ptVar1 = (void *)std___get_helper_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_
 ((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 00011ebc */

/* std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_deleter */

void * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_deleter
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_1u_int__test_cpp_smart_ptr_lambda_int_ptr_1_((tuple *)this);
 return ptVar1;
}



/* Function: _M_ptr @ 00011ee8 */

/* std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_ptr_const */

int * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr_1___M_ptr_const
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_((tuple *)this);
 return *(int **)ptVar1;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr_lambda_int_ptr_1_const&,void> @ 00011f18 */

/* std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___Tuple_impl */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___Tuple_impl
 (_Tuple_impl *this,int **param_1,_lambda_int___1_ *param_2)

{
 int **ppiVar1;
 
 std_forward_test_cpp_smart_ptr_lambda_int_ptr_1_const_ref_((void *)param_2);
 std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1___Tuple_impl((_lambda_int___1_ *)this);
 ppiVar1 = std_forward_int___ref_((void *)param_1);
 std__Head_base_0u_int__false___Head_base_int___ref_((_Head_base *)this,ppiVar1);
 return this;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr_lambda_int_ptr_1_> @ 00011f74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_ */

int ** std___get_helper_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___M_head(param_1);
 return ppiVar1;
}



/* Function: get<1u,int*,test_cpp_smart_ptr_lambda_int_ptr_1_> @ 00011f9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_1u_int__test_cpp_smart_ptr_lambda_int_ptr_1_ */

void * std_get_1u_int__test_cpp_smart_ptr_lambda_int_ptr_1_(tuple *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = std___get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1_((_Tuple_impl *)param_1);
 return (void *)p_Var1;
}



/* Function: get<0u,int*,test_cpp_smart_ptr_lambda_int_ptr_1_> @ 00011fc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1__const */

void * std_get_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1__const(tuple *param_1)

{
 void *ptVar1;
 
 ptVar1 = (void *)std___get_helper_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1_
 ((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _Tuple_impl @ 00011ff0 */

/* std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1___Tuple_impl */

_lambda_int___1_ *
std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1___Tuple_impl(_lambda_int___1_ *param_1)

{
 std__Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1__true___Head_base(param_1);
 return param_1;
}



/* Function: _M_head @ 00012020 */

/* std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___M_head */

uint32_t
std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___M_head(_Tuple_impl *param_1)

{
 uint32_t uVar1;
 
 uVar1 = std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return uVar1;
}



/* Function: __get_helper<1u,test_cpp_smart_ptr_lambda_int_ptr_1_> @ 0001204c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1_ */

_lambda_int___1_ *
std___get_helper_1u_test_cpp_smart_ptr_lambda_int_ptr_1_(_Tuple_impl *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = (_lambda_int___1_ *)
 std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1___M_head(param_1);
 return p_Var1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr_lambda_int_ptr_1_> @ 00012074 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1__const */

int ** std___get_helper_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1__const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___M_head(param_1);
 return ppiVar1;
}



/* Function: _Head_base @ 0001209c */

/* std__Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1__true___Head_base */

_lambda_int___1_ *
std__Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1__true___Head_base
 (_lambda_int___1_ *param_1)

{
 return param_1;
}



/* Function: _M_head @ 000120c4 */

/* std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1___M_head */

uint32_t
std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_ptr_1___M_head(_Tuple_impl *param_1)

{
 uint32_t uVar1;
 
 uVar1 = std__Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1__true___M_head((_Head_base *)param_1)
 ;
 return uVar1;
}



/* Function: _M_head @ 000120ec */

/* std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___M_head_const */

uint32_t
std__Tuple_impl_0u_int__test_cpp_smart_ptr_lambda_int_ptr_1___M_head_const(_Tuple_impl *param_1)

{
 uint32_t uVar1;
 
 uVar1 = std__Head_base_0u_int__false___M_head((_Head_base *)param_1);
 return uVar1;
}



/* Function: _M_head @ 00012118 */

/* std__Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1__true___M_head */

_Head_base *
std__Head_base_1u_test_cpp_smart_ptr_lambda_int_ptr_1__true___M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 0001213c */

/* __static_initialization_and_destruction_0(int, int) */

int __static_initialization_and_destruction_0(int param_1,int param_2)

{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 Init_Init((Init *)&std::__ioinit);
 param_1 = __aeabi_atexit(&std::__ioinit,Init_Destructor,&__dso_handle);
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

/* std_type_info_name() */

char * __thiscall std_type_info_name(std_type_info *this)

{
 char *pcVar1;
 
 pcVar1 = *(char **)(this + 4);
 if (*pcVar1 == '*') {
 pcVar1 = pcVar1 + 1;
 }
 return pcVar1;
}



/* Function: SimpleClass @ 00012208 */

/* SimpleClass_Constructor(int, char const*) */

SimpleClass * __thiscall SimpleClass_Constructor(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return this;
}



/* Function: getValue @ 00012260 */

/* SimpleClass_getValue() */

uint32_t __thiscall SimpleClass_getValue(SimpleClass *this)

{
 return *(uint32_t *)this;
}



/* Function: setValue @ 00012288 */

/* SimpleClass_setValue(int) */

SimpleClass * __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return this;
}



/* Function: compute @ 000122b8 */

/* SimpleClass_compute(int) */

int __thiscall SimpleClass_compute(SimpleClass *this,int param_1)

{
 size_t sVar1;
 int iVar2;
 
 iVar2 = *(int *)this;
 sVar1 = strlen((char *)(this + 4));
 return param_1 * iVar2 + sVar1;
}



/* Function: getClassID @ 00012304 */

/* SimpleClass_getClassID() */

uint32_t SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00012324 */

/* LifecycleClass_Constructor(unsigned int) */

LifecycleClass * __thiscall LifecycleClass_Constructor(LifecycleClass *this,uint param_1)

{
 void *pvVar1;
 uint local_c;
 
 *(uint *)(this + 4) = param_1;
 if (param_1 < 0x1fffffff) {
 pvVar1 = operator_new__(param_1 << 2);
 *(void **)this = pvVar1;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
LAB_0001237c:
 *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
 }
 instance_count = instance_count + 1;
 return this;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_0001237c;
}



/* Function: ~LifecycleClass @ 000123f4 */

/* LifecycleClass_Destructor() */

LifecycleClass * __thiscall LifecycleClass_Destructor(LifecycleClass *this)

{
 if (*(int *)this != 0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return this;
}



/* Function: getData @ 0001244c */

/* LifecycleClass_getData(unsigned int) */

uint32_t __thiscall LifecycleClass_getData(LifecycleClass *this,uint param_1)

{
 uint32_t uVar1;
 
 if (param_1 < *(uint *)(this + 4)) {
 uVar1 = *(uint32_t *)(*(int *)this + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: getInstanceCount @ 000124a4 */

/* LifecycleClass_getInstanceCount() */

uint32_t LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: virtual_func @ 000124c8 */

/* Base::virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 000124f4 */

/* Base::getName() const */

void * Base_getName(void)

{
 return &DAT_0001425c;
}



/* Function: ~Base @ 0001251c */

/* Base::~Base() */

Base * __thiscall Base_Destructor(Base *this)

{
 *(void ***)this = &PTR_virtual_func_000145f0;
 return this;
}



/* Function: ~Base @ 00012550 */

/* Base::~Base() */

Base * __thiscall Base_Destructor(Base *this)

{
 Base__Base(this);
 operator_delete(this,4);
 return this;
}



/* Function: Base @ 00012584 */

/* Base::Base() */

Base * __thiscall Base_Constructor(Base *this)

{
 *(void ***)this = &PTR_virtual_func_000145f0;
 return this;
}



/* Function: Derived @ 000125b8 */

/* Derived::Derived(int) */

Derived * __thiscall Derived_Constructor(Derived *this,int param_1)

{
 Base_Base((Base *)this);
 *(void ***)this = &PTR_virtual_func_000145d8;
 *(int *)(this + 4) = param_1;
 return this;
}



/* Function: virtual_func @ 00012604 */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 00012638 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00012660 */

/* BaseA::funcA() */

uint32_t BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00012684 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA_Destructor(BaseA *this)

{
 *(void ***)this = &PTR_funcA_000145c4;
 return this;
}



/* Function: ~BaseA @ 000126b8 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA_Destructor(BaseA *this)

{
 BaseA__BaseA(this);
 operator_delete(this,8);
 return this;
}



/* Function: funcB @ 000126ec */

/* BaseB::funcB() */

uint32_t BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 00012710 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB_Destructor(BaseB *this)

{
 *(void ***)this = &PTR_funcB_000145b0;
 return this;
}



/* Function: ~BaseB @ 00012744 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB_Destructor(BaseB *this)

{
 BaseB__BaseB(this);
 operator_delete(this,8);
 return this;
}



/* Function: funcA @ 00012778 */

/* MultiDerived::funcA() */

uint32_t MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 0001279c */

/* MultiDerived::funcB() */

uint32_t MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 000127c0 */

/* non-virtual thunk to MultiDerived::funcB() */

uint32_t __thiscall MultiDerived_funcB(MultiDerived *this)

{
 return MultiDerived::funcB(this);
}



/* Function: BaseA @ 000127c8 */

/* BaseA::BaseA() */

BaseA * __thiscall BaseA_Constructor(BaseA *this)

{
 *(void ***)this = &PTR_funcA_000145c4;
 return this;
}



/* Function: BaseB @ 000127fc */

/* BaseB::BaseB() */

BaseB * __thiscall BaseB_Constructor(BaseB *this)

{
 *(void ***)this = &PTR_funcB_000145b0;
 return this;
}



/* Function: MultiDerived @ 00012830 */

/* MultiDerived::MultiDerived() */

MultiDerived * __thiscall MultiDerived_Constructor(MultiDerived *this)

{
 BaseA_BaseA((BaseA *)this);
 BaseB::BaseB((BaseB *)(this + 8));
 *(void ***)this = &PTR_funcA_00014584;
 *(void ***)(this + 8) = &PTR_funcB_0001459c;
 return this;
}



/* Function: func @ 0001288c */

/* VirtualBase::func() */

uint32_t VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 000128b0 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase_Destructor(VirtualBase *this)

{
 *(void ***)this = &PTR_func_00014570;
 return this;
}



/* Function: ~VirtualBase @ 000128e4 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase_Destructor(VirtualBase *this)

{
 VirtualBase__VirtualBase(this);
 operator_delete(this,8);
 return this;
}



/* Function: func @ 00012918 */

/* MiddleA::func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 0001295c */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA_func(MiddleA *this)

{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: func @ 00012970 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 000129b4 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return MiddleB::func(this + *(int *)(*(int *)this + -0xc));
}



/* Function: func @ 000129c8 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00012a0c */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return DiamondDerived::func(this + *(int *)(*(int *)this + -0xc));
}



/* Function: func @ 00012a20 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return DiamondDerived::func(this + -8);
}



/* Function: VirtualBase @ 00012a28 */

/* VirtualBase::VirtualBase() */

VirtualBase * __thiscall VirtualBase_Constructor(VirtualBase *this)

{
 *(void ***)this = &PTR_func_00014570;
 return this;
}



/* Function: MiddleA @ 00012a5c */

/* MiddleA::MiddleA() */

MiddleA * __thiscall MiddleA_Constructor(MiddleA *this)

{
 uint32_t *in_r1;
 
 *(uint32_t *)this = *in_r1;
 *(uint32_t *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}



/* Function: ~MiddleA @ 00012abc */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA_Destructor(MiddleA *this)

{
 uint32_t *in_r1;
 
 *(uint32_t *)this = *in_r1;
 *(uint32_t *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}



/* Function: MiddleB @ 00012b1c */

/* MiddleB::MiddleB() */

MiddleB * __thiscall MiddleB_Constructor(MiddleB *this)

{
 uint32_t *in_r1;
 
 *(uint32_t *)this = *in_r1;
 *(uint32_t *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}



/* Function: ~MiddleB @ 00012b7c */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB_Destructor(MiddleB *this)

{
 uint32_t *in_r1;
 
 *(uint32_t *)this = *in_r1;
 *(uint32_t *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return this;
}



/* Function: DiamondDerived @ 00012bdc */

/* DiamondDerived::DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived_Constructor(DiamondDerived *this)

{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 8));
 *(void ***)this = &PTR_func_000144a4;
 *(void ***)(this + 0x10) = &PTR_func_000144d8;
 *(void ***)(this + 8) = &PTR_func_000144bc;
 return this;
}



/* Function: Point @ 00012c74 */

/* Point::Point(int, int) */

Point * __thiscall Point_Constructor(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return this;
}



/* Function: operator+ @ 00012cb8 */

void __thiscall Point_operator_plus(Point *this,Point *param_1)

{
 int *in_r2;
 
 Point(this,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
 return;
}



/* Function: operator== @ 00012d10 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

uint32_t __thiscall Point_operator_equal(Point *this,Point *param_1)

{
 uint32_t uVar1;
 
 if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: operator++ @ 00012d70 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * __thiscall Point_operator_increment(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return this;
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
 uint32_t in_r0;
 uint32_t in_r1;
 uint32_t in_r2;
 uint32_t in_r3;
 
 __aeabi_dcmpgt((uint32_t)param_1,(int)((ulonglong)param_1 >> 0x20),(uint32_t)param_2,in_r0,in_r1,
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



/* Function: Container_int_Constructor @ 00012ea8 */

Container_int * __thiscall Container_int_Constructor(Container_int *this)

{
 *(uint32_t *)(this + 0x28) = 0;
 return this;
}



/* Function: Container_int_push @ 00012ed8 */

/* Container<int>::push(int) */

void __thiscall Container_int_push(Container<int> *this,int param_1)

{
 Container<int> *pCVar1;
 int iVar2;
 
 pCVar1 = this;
 if (*(int *)(this + 0x28) < 10) {
 iVar2 = *(int *)(this + 0x28);
 pCVar1 = (Container<int> *)(iVar2 + 1);
 *(Container<int> **)(this + 0x28) = pCVar1;
 *(int *)(this + iVar2 * 4) = param_1;
 }
 return pCVar1;
}



/* Function: Container_int_get @ 00012f2c */

/* Container<int>::get(int) const */

uint32_t __thiscall Container_int_get(Container<int> *this,int param_1)

{
 uint32_t uVar1;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(uint32_t *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 00012f84 */

/* Container<int>::getSize() const */

uint32_t __thiscall Container_int_getSize(Container<int> *this)

{
 return *(uint32_t *)(this + 0x28);
}



/* Function: Container_double_Constructor @ 00012fac */

Container_double * __thiscall Container_double_Constructor(Container_double *this)

{
 *(uint32_t *)(this + 0x50) = 0;
 return this;
}



/* Function: Container_double_push @ 00012fdc */

/* Container<double>::push(double) */

void __thiscall Container_double_push(Container<double> *this,double param_1)

{
 int iVar1;
 uint32_t *puVar2;
 uint32_t *param_parts;
 
 param_parts = (uint32_t *)&param_1;
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 puVar2 = (uint32_t *)(this + iVar1 * 8);
 *puVar2 = param_parts[0];
 puVar2[1] = param_parts[1];
 }
}



/* Function: Container_double_get @ 00013040 */

/* Container<double>::get(int) const */

uint64_t __thiscall Container_double_get(Container<double> *this,int param_1)

{
 uint32_t uVar1;
 uint32_t uVar2;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 uVar2 = 0;
 }
 else {
 uVar1 = *(uint32_t *)(this + param_1 * 8);
 uVar2 = *(uint32_t *)(this + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
}



/* Function: Container_double_getSize @ 000130a8 */

/* Container<double>::getSize() const */

uint32_t __thiscall Container_double_getSize(Container<double> *this)

{
 return *(uint32_t *)(this + 0x50);
}



/* Function: __uniq_ptr_data @ 000130d0 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

__uniq_ptr_data * __thiscall
__uniq_ptr_data___uniq_ptr_data
 (__uniq_ptr_data *this,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,(__uniq_ptr_impl *)param_1);
 return this;
}



/* Function: unique_ptr<int,std::default_delete<int>> @ 000130fc */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int, std::default_delete<int> >&&) */

unique_ptr * __thiscall
std_unique_ptr_int_std_default_delete_int__unique_ptr_move
 (unique_ptr *this,void *param_1)

{
 __uniq_ptr_data___uniq_ptr_data
 ((__uniq_ptr_data *)this,(__uniq_ptr_data *)param_1);
 return this;
}



/* Function: unique_ptr @ 00013108 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
 std::default_delete<int> >&&) */

unique_ptr * __thiscall
std_unique_ptr___unique_ptr
 (unique_ptr *this,void *param_1)

{
 __uniq_ptr_data___uniq_ptr_data
 ((__uniq_ptr_data *)this,
 (__uniq_ptr_data *)param_1);
 return this;
}



/* Function: getType @ 00013140 */

/* RTTIBase::getType() const */

uint32_t RTTIBase_getType(void)

{
 return 0;
}



/* Function: getType @ 00013164 */

/* RTTIDerivedA::getType() const */

uint32_t RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: derivedA_data @ 00013188 */

/* RTTIDerivedA::derivedA_data() const */

uint32_t RTTIDerivedA_derivedA_data(void)

{
 return 100;
}



/* Function: getType @ 000131ac */

/* RTTIDerivedB::getType() const */

uint32_t RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: derivedB_data @ 000131d0 */

/* RTTIDerivedB::derivedB_data() const */

uint32_t RTTIDerivedB_derivedB_data(void)

{
 return 200;
}



/* Function: RTTIBase @ 000131f4 */

/* RTTIBase::RTTIBase() */

RTTIBase * __thiscall RTTIBase_Constructor(RTTIBase *this)

{
 *(void ***)this = &PTR__RTTIBase_0001448c;
 return this;
}



/* Function: ~RTTIBase @ 00013228 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase_Destructor(RTTIBase *this)

{
 *(void ***)this = &PTR__RTTIBase_0001448c;
 return this;
}



/* Function: ~RTTIBase @ 0001325c */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase_Destructor(RTTIBase *this)

{
 RTTIBase__RTTIBase(this);
 operator_delete(this,4);
 return this;
}



/* Function: RTTIDerivedA @ 00013290 */

/* RTTIDerivedA::RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA_Constructor(RTTIDerivedA *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(void ***)this = &PTR__RTTIDerivedA_00014478;
 return this;
}



/* Function: RTTIDerivedB @ 000132cc */

/* RTTIDerivedB::RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB_Constructor(RTTIDerivedB *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(void ***)this = &PTR__RTTIDerivedB_00014464;
 return this;
}



/* Function: __uniq_ptr_impl @ 00013308 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data * __thiscall
__uniq_ptr_data___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 __uniq_ptr_impl___uniq_ptr_impl_int_ptr
 ((__uniq_ptr_impl *)this,param_1);
 return this;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00013340 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(int*) */

unique_ptr * __thiscall
std_unique_ptr_int_std_default_delete_int___unique_ptr
 (unique_ptr *this,int *param_1)

{
 __uniq_ptr_data___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1);
 return this;
}



/* Function: ~unique_ptr @ 00013374 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

unique_ptr * __thiscall
std_unique_ptr___destructor
 (unique_ptr *this)

{
 int **ppiVar1;
 default_delete *this_00;
 void *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl_int_std_default_delete_int___M_ptr(this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete *)std_unique_ptr_int_std_default_delete_int__get_deleter(this);
 ptVar2 = std_move_int___ref_(ppiVar1);
 std_default_delete_int__operator_(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}



/* Function: operator* @ 000133e8 */

/* std::unique_ptr<int, std::default_delete<int> >::operator*() const */

int * __thiscall
std_unique_ptr_int_std_default_delete_int__operator_star
 (unique_ptr *this)

{
 int *piVar1;
 
 piVar1 = (int *)std_unique_ptr_int_std_default_delete_int__get(this);
 return piVar1;
}



/* Function: std_move_unique_ptr @ 00013418 */

void * std_move_unique_ptr(unique_ptr *param_1)

{
 return (void *)param_1;
}



/* Function: _Tuple_impl @ 0001343c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0u, int*,
 std::default_delete<int> >&&) */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl
 (_Tuple_impl *this,_Tuple_impl *param_1)

{
 std__Tuple_impl_1u_std_default_delete_int___Tuple_impl((_Tuple_impl *)this);
 *(uint32_t *)this = *(uint32_t *)param_1;
 return this;
}



/* Function: tuple @ 0001347c */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

tuple * __thiscall
std_tuple_std_default_delete_int___tuple
 (tuple *this,tuple *param_1)

{
 std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl
 ((_Tuple_impl *)this,(_Tuple_impl *)param_1);
 return this;
}



/* Function: __uniq_ptr_impl @ 000134b4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

__uniq_ptr_impl * __thiscall
__uniq_ptr_impl___uniq_ptr_impl
 (__uniq_ptr_impl *this,__uniq_ptr_impl *param_1)

{
 void *ptVar1;
 uint32_t *puVar2;
 
 ptVar1 = std::move<std::tuple<int*,std::default_delete<int>>&>((tuple *)param_1);
 std_tuple_int_std_default_delete_int__tuple((tuple *)this,(tuple *)ptVar1);
 puVar2 = (uint32_t *)__uniq_ptr_impl___M_ptr((__uniq_ptr_impl *)param_1);
 *puVar2 = 0;
 return this;
}



/* Function: __uniq_ptr_impl @ 0001350c */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data * __thiscall
__uniq_ptr_data_int_array___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 __uniq_ptr_impl_int_array___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return this;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00013544 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

unique_ptr * __thiscall
std_unique_ptr_int___std_default_delete_int____unique_ptr_int_ptr_void_bool
 (unique_ptr *this,int *param_1)

{
 __uniq_ptr_data_int_array___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1);
 return this;
}



/* Function: ~unique_ptr @ 00013578 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

unique_ptr * __thiscall
std_unique_ptr_int___std_default_delete_int____destructor
 (unique_ptr *this)

{
 int *piVar1;
 default_delete *this_00;
 
 piVar1 = (int *)__uniq_ptr_impl_int_array___M_ptr(this);
 if (*piVar1 != 0) {
 this_00 = (default_delete *)std_unique_ptr_int___std_default_delete_int____get_deleter(this);
 std_default_delete_int___operator_(this_00,(int *)*piVar1);
 }
 *piVar1 = 0;
 return this;
}



/* Function: operator[] @ 000135e4 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int * __thiscall
std_unique_ptr_int_array___operator_idx_
 (unique_ptr *this,uint param_1)

{
 int *piVar1;
 
 piVar1 = (int *)std_unique_ptr_int_array___get(this);
 return piVar1 + param_1;
}



/* Function: __uniq_ptr_impl @ 00013624 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

__uniq_ptr_impl * __thiscall
__uniq_ptr_impl___uniq_ptr_impl_int_ptr
 (__uniq_ptr_impl *this,int *param_1)

{
 uint32_t *puVar1;
 
 std_tuple_int_std_default_delete_int___tuple_true_true_
 ((tuple *)this);
 puVar1 = (uint32_t *)__uniq_ptr_impl___M_ptr(this);
 *puVar1 = param_1;
 return this;
}



/* Function: _M_ptr @ 00013668 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void * __thiscall
__uniq_ptr_impl___M_ptr
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_0u_int_std_default_delete_int_((tuple *)this);
 return ptVar1;
}



/* Function: get_deleter @ 00013694 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

uint32_t __thiscall
std_unique_ptr___get_deleter
 (unique_ptr *this)

{
 uint32_t uVar1;
 
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int___M_deleter
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: std_move_int_ptr_ref @ 000136c0 */

void * std_move_int_ptr_ref(int **param_1)

{
 return (void *)param_1;
}



/* Function: operator() @ 000136e4 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std_default_delete_int__operator_(default_delete *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1,4);
 }
 return;
}



/* Function: get @ 0001371c */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

uint32_t __thiscall
std_unique_ptr___get(unique_ptr *this)

{
 uint32_t uVar1;
 
 uVar1 = __uniq_ptr_impl_int_std_default_delete_int___M_ptr
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: std_move_tuple @ 00013748 */

void * std_move_tuple(tuple *param_1)

{
 return (void *)param_1;
}



/* Function: _Tuple_impl @ 0001376c */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
 std::default_delete<int> >&&) */

_Tuple_impl * __thiscall std__Tuple_impl_1u_std_default_delete_int___Tuple_impl(_Tuple_impl *this,_Tuple_impl *param_1)

{
 return this;
}



/* Function: __uniq_ptr_impl @ 00013794 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

__uniq_ptr_impl * __thiscall
std___uniq_ptr_impl_int_array___uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1)

{
 uint32_t *puVar1;
 
 std_tuple_int_std_default_delete_int____tuple_true_true_((tuple *)this);
 puVar1 = (uint32_t *)__uniq_ptr_impl_int_array___M_ptr(this);
 *puVar1 = param_1;
 return this;
}



/* Function: _M_ptr @ 000137d8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void * __thiscall
__uniq_ptr_impl_int_array___M_ptr
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = get_0u_int_std_default_delete_int__((tuple *)this);
 return ptVar1;
}



/* Function: get_deleter @ 00013804 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

uint32_t __thiscall
std_unique_ptr_int___std_default_delete_int____get_deleter
 (unique_ptr *this)

{
 uint32_t uVar1;
 
 uVar1 = __uniq_ptr_impl_int_array___M_deleter(this);
 return uVar1;
}



/* Function: operator() @ 00013830 */

/* std::enable_if<std::is_convertible<int (*) [], int (*) []>::value, void>::type
 std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std_default_delete_int_bracket__operator_(default_delete *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: get @ 00013864 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

uint32_t __thiscall
std_unique_ptr_int_array___get
 (unique_ptr *this)

{
 uint32_t uVar1;
 
 uVar1 = __uniq_ptr_impl_int_array___M_ptr(this);
 return uVar1;
}



/* Function: tuple<true,true> @ 00013890 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

tuple * __thiscall
std_tuple_int__std_default_delete_int___tuple_true_true_
 (tuple *this)

{
 std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl_default((_Tuple_impl *)this);
 return this;
}



/* Function: std_get_0u_int__std_default_delete_int_ @ 000138bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_0u_int__std_default_delete_int_ */

void * std_get_0u_int__std_default_delete_int(tuple *param_1)

{
 void *ptVar1;
 
 ptVar1 = (void *)std___get_helper_0u_int_std_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 000138e8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void * __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_deleter
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_1u_int__std_default_delete_int((tuple *)this);
 return ptVar1;
}



/* Function: _M_ptr @ 00013914 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

uint32_t __thiscall
std___uniq_ptr_impl_int_std_default_delete_int___M_ptr
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_0u_int__std_default_delete_int((tuple *)this);
 return *(uint32_t *)ptVar1;
}



/* Function: tuple<true,true> @ 00013944 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

tuple * __thiscall
std_tuple_int__std_default_delete_int____tuple_true_true_
 (tuple *this)

{
 std__Tuple_impl_0u_int__std_default_delete_int____Tuple_impl_default((_Tuple_impl *)this);
 return this;
}



/* Function: std_get_0u_int__std_default_delete_int__ @ 00013970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_0u_int__std_default_delete_int__ */

void * std_get_0u_int__std_default_delete_int_bracket(tuple *param_1)

{
 void *ptVar1;
 
 ptVar1 = (void *)std___get_helper_0u_int_std_default_delete_int_bracket((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 0001399c */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void * __thiscall
std___uniq_ptr_impl_int_array___M_deleter
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_1u_int__std_default_delete_int_bracket((tuple *)this);
 return ptVar1;
}



/* Function: _M_ptr @ 000139c8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

uint32_t __thiscall
std___uniq_ptr_impl_int_array___M_ptr
 (__uniq_ptr_impl *this)

{
 void *ptVar1;
 
 ptVar1 = std_get_0u_int__std_default_delete_int_bracket((tuple *)this);
 return *(uint32_t *)ptVar1;
}



/* Function: _Tuple_impl @ 000139f8 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int__std_default_delete_int___Tuple_impl_default
 (_Tuple_impl *this)

{
 std__Tuple_impl_1u_std_default_delete_int___Tuple_impl((_Tuple_impl *)this);
 std__Head_base_0u_int__false___Head_base((_Head_base *)this);
 return this;
}



/* Function: std___get_helper_0u_int__std_default_delete_int_ @ 00013a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_0u_int__std_default_delete_int_ */

int ** std___get_helper_0u_int__std_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std_default_delete_int___M_head(param_1);
 return ppiVar1;
}



/* Function: std_get_1u_int__std_default_delete_int_ @ 00013a54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_1u_int__std_default_delete_int_ */

void * std_get_1u_int__std_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std___get_helper_1u_std_default_delete_int((_Tuple_impl *)param_1);
 return (void *)pdVar1;
}



/* Function: std_get_0u_int__std_default_delete_int__const @ 00013a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_0u_int__std_default_delete_int__const */

void * std_get_0u_int__std_default_delete_int_const(tuple *param_1)

{
 void *ptVar1;
 
 ptVar1 = (void *)std___get_helper_0u_int_std_default_delete_int_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _Tuple_impl @ 00013aa8 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int__std_default_delete_int____Tuple_impl_default
 (_Tuple_impl *this)

{
 std__Tuple_impl_1u_std_default_delete_int____Tuple_impl((_Tuple_impl *)this);
 std__Head_base_0u_int__false___Head_base((_Head_base *)this);
 return this;
}



/* Function: std___get_helper_0u_int__std_default_delete_int__ @ 00013adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_0u_int__std_default_delete_int__ */

int ** std___get_helper_0u_int__std_default_delete_int_bracket(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std_default_delete_int____M_head(param_1);
 return ppiVar1;
}



/* Function: std_get_1u_int__std_default_delete_int__ @ 00013b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_1u_int__std_default_delete_int__ */

void * std_get_1u_int__std_default_delete_int_bracket(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std___get_helper_1u_std_default_delete_int_bracket((_Tuple_impl *)param_1);
 return (void *)pdVar1;
}



/* Function: std_get_0u_int__std_default_delete_int___const @ 00013b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std_get_0u_int__std_default_delete_int___const */

void * std_get_0u_int__std_default_delete_int_bracket_const(tuple *param_1)

{
 void *ptVar1;
 
 ptVar1 = (void *)std___get_helper_0u_int_std_default_delete_int_bracket_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: std_forward_int_ptr_ref @ 00013b58 */

int ** std_forward_int_ptr_ref(void *param_1)

{
 return (int **)param_1;
}



/* Function: _Tuple_impl @ 00013b7c */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_1u_std_default_delete_int___Tuple_impl
 (_Tuple_impl *this)

{
 std__Head_base_1u_std_default_delete_int__true___Head_base
 ((_Head_base *)this);
 return this;
}



/* Function: _Head_base @ 00013ba4 */

/* std::_Head_base<0u, int*, false>::_Head_base() */

_Head_base * __thiscall
std__Head_base_0u_int__false___Head_base(_Head_base *this)

{
 *(uint32_t *)this = 0;
 return this;
}



/* Function: _M_head @ 00013bd4 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int> >&) */

uint32_t std__Tuple_impl_0u_int__std_default_delete_int___M_head(_Tuple_impl *param_1)

{
 return *(uint32_t *)((_Head_base *)param_1);
}



/* Function: std___get_helper_1u_std_default_delete_int_ @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_1u_std_default_delete_int_ */

default_delete * std___get_helper_1u_std_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std__Tuple_impl_1u_std_default_delete_int___M_head(param_1);
 return pdVar1;
}



/* Function: std___get_helper_0u_int__std_default_delete_int__const @ 00013c28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_0u_int__std_default_delete_int__const */

int ** std___get_helper_0u_int__std_default_delete_int_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std_default_delete_int___M_head_const(param_1);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013c50 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_1u_std_default_delete_int____Tuple_impl
 (_Tuple_impl *this)

{
 std__Head_base_1u_std_default_delete_int___true___Head_base
 ((_Head_base *)this);
 return this;
}



/* Function: _M_head @ 00013c78 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int []> >&) */

uint32_t std__Tuple_impl_0u_int__std_default_delete_int____M_head(_Tuple_impl *param_1)

{
 return *(uint32_t *)((_Head_base *)param_1);
}



/* Function: std___get_helper_1u_std_default_delete_int__ @ 00013ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_1u_std_default_delete_int__ */

default_delete * std___get_helper_1u_std_default_delete_int_bracket(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std__Tuple_impl_1u_std_default_delete_int____M_head(param_1);
 return pdVar1;
}



/* Function: std___get_helper_0u_int__std_default_delete_int___const @ 00013ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std___get_helper_0u_int__std_default_delete_int___const */

int ** std___get_helper_0u_int__std_default_delete_int_bracket_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int__std_default_delete_int____M_head_const(param_1);
 return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00013cf4 */

/* std::_Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

_Head_base * __thiscall
std__Head_base_0u_int__false___Head_base_int___ref_(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)param_1;
 *(int **)this = *ppiVar1;
 return this;
}



/* Function: _Head_base @ 00013d30 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_Head_base() */

_Head_base * __thiscall
std__Head_base_1u_std_default_delete_int__true___Head_base(_Head_base *this)

{
 return this;
}



/* Function: _M_head @ 00013d54 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false>&) */

uint32_t std__Head_base_0u_int__false___M_head(_Head_base *param_1)

{
 return *(uint32_t *)param_1;
}



/* Function: _M_head @ 00013d78 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_M_head(std::_Tuple_impl<1u,
 std::default_delete<int> >&) */

uint32_t std__Tuple_impl_1u_std_default_delete_int___M_head(_Tuple_impl *param_1)

{
 return *(uint32_t *)((_Head_base *)param_1);
}



/* Function: _M_head @ 00013da0 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int> > const&) */

uint32_t std__Tuple_impl_0u_int__std_default_delete_int___M_head_const(_Tuple_impl *param_1)

{
 return *(uint32_t *)((_Head_base *)param_1);
}



/* Function: _Head_base @ 00013dcc */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_Head_base() */

_Head_base * __thiscall
std__Head_base_1u_std_default_delete_int___true___Head_base(_Head_base *this)

{
 return this;
}



/* Function: _M_head @ 00013df0 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1u,
 std::default_delete<int []> >&) */

uint32_t std__Tuple_impl_1u_std_default_delete_int____M_head(_Tuple_impl *param_1)

{
 return *(uint32_t *)((_Head_base *)param_1);
}



/* Function: _M_head @ 00013e18 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int []> > const&) */

uint32_t std__Tuple_impl_0u_int__std_default_delete_int____M_head_const(_Tuple_impl *param_1)

{
 return *(uint32_t *)((_Head_base *)param_1);
}



/* Function: _M_head @ 00013e44 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_M_head(std::_Head_base<1u,
 std::default_delete<int>, true>&) */

_Head_base * std__Head_base_1u_std_default_delete_int__true___M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00013e68 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false> const&) */

_Head_base * std__Head_base_0u_int__false___M_head_const(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00013e8c */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_M_head(std::_Head_base<1u,
 std::default_delete<int []>, true>&) */

_Head_base * std__Head_base_1u_std_default_delete_int___true___M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: ~RTTIDerivedB @ 00013eb0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB_Destructor_internal(RTTIDerivedB *this)

{
 *(void ***)this = &PTR__RTTIDerivedB_00014464;
 RTTIBase_Destructor((RTTIBase *)this);
 return this;
}



/* Function: ~RTTIDerivedB @ 00013eec */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB_Destructor(RTTIDerivedB *this)

{
 RTTIDerivedB__RTTIDerivedB(this);
 operator_delete(this,4);
 return this;
}



/* Function: ~RTTIDerivedA @ 00013f20 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA_Destructor_internal(RTTIDerivedA *this)

{
 *(void ***)this = &PTR__RTTIDerivedA_00014478;
 RTTIBase_Destructor((RTTIBase *)this);
 return this;
}



/* Function: ~RTTIDerivedA @ 00013f5c */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA_Destructor(RTTIDerivedA *this)

{
 RTTIDerivedA__RTTIDerivedA(this);
 operator_delete(this,4);
 return this;
}



/* Function: ~DiamondDerived @ 00013f90 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived_Destructor_internal(DiamondDerived *this)

{
 *(void ***)this = &PTR_func_000144a4;
 *(void ***)(this + 0x10) = &PTR_func_000144d8;
 *(void ***)(this + 8) = &PTR_func_000144bc;
 MiddleB_Destructor((MiddleB *)(this + 8));
 MiddleA_Destructor((MiddleA *)this);
 VirtualBase_Destructor((VirtualBase *)(this + 0x10));
 return this;
}



/* Function: ~DiamondDerived @ 00014028 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_Destructor_nonvirtual_thunk(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 00014030 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_Destructor_virtual_thunk(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00014044 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived_Destructor(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this);
 operator_delete(this,0x18);
 return this;
}



/* Function: ~DiamondDerived @ 00014078 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_Destructor_nonvirtual_thunk2(DiamondDerived *this)

{
 DiamondDerived_Destructor(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 00014080 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_Destructor_virtual_thunk2(DiamondDerived *this)

{
 DiamondDerived_Destructor(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MultiDerived @ 00014094 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived_Destructor_internal(MultiDerived *this)

{
 *(void ***)this = &PTR_funcA_00014584;
 *(void ***)(this + 8) = &PTR_funcB_0001459c;
 BaseB_Destructor((BaseB *)(this + 8));
 BaseA_Destructor((BaseA *)this);
 return this;
}



/* Function: ~MultiDerived @ 000140f0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived_nonvirtual_thunk(MultiDerived *this)

{
 MultiDerived__MultiDerived(this + -8);
 return;
}



/* Function: ~MultiDerived @ 000140f8 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived_Destructor(MultiDerived *this)

{
 MultiDerived__MultiDerived(this);
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MultiDerived @ 0001412c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_Destructor_nonvirtual_thunk(MultiDerived *this)

{
 MultiDerived_Destructor(this + -8);
 return;
}



/* Function: ~Derived @ 00014134 */

/* Derived::~Derived() */

Derived * __thiscall Derived_Destructor_internal(Derived *this)

{
 *(void ***)this = &PTR_virtual_func_000145d8;
 Base_Destructor((Base *)this);
 return this;
}



/* Function: ~Derived @ 00014170 */

/* Derived::~Derived() */

Derived * __thiscall Derived_Destructor(Derived *this)

{
 Derived__Derived(this);
 operator_delete(this,8);
 return this;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 203 */
