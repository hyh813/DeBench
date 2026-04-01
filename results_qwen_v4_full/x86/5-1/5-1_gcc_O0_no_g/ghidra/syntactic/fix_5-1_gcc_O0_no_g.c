/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef void type;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int void4;
typedef int undefined;
typedef int undefined4;
typedef long long undefined8;
typedef void (*code)(void);
#define ROUND(x) ((int)(x))

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
struct SimpleClass {
 int value;
 char name[32];
 undefined4 vtable;
};
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
 void* data;
 uint size;
};
typedef struct Base Base;
struct Base {
 undefined4* vtable;
};
typedef struct Derived Derived;
struct Derived {
 undefined4* vtable;
 int data;
};
typedef struct BaseA BaseA;
struct BaseA {
 undefined4* vtable;
};
typedef struct BaseB BaseB;
struct BaseB {
 undefined4* vtable;
};
typedef struct MultiDerived MultiDerived;
struct MultiDerived {
 undefined4* vtable1;
 undefined4* vtable2;
};
typedef struct VirtualBase VirtualBase;
struct VirtualBase {
 undefined4* vtable;
 int data;
};
typedef struct MiddleA MiddleA;
struct MiddleA {
 undefined4* vtable;
 int data;
};
typedef struct MiddleB MiddleB;
struct MiddleB {
 undefined4* vtable;
 int data;
};
typedef struct DiamondDerived DiamondDerived;
struct DiamondDerived {
 undefined4 vtable1;
 undefined4 vtable2;
 undefined4 vtable3;
 undefined4 data;
};
typedef struct Point Point;
struct Point {
 int x;
 int y;
};
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
struct Container_int {
 int data[10];
 int size;
};
struct Container_double {
 double data[10];
 int size;
};
typedef struct type_info type_info;
struct type_info {
 void* vtable;
 char* name;
};
typedef struct RTTIBase RTTIBase;
struct RTTIBase {
 undefined4* vtable;
};
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
 undefined4* vtable;
};
typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
 undefined4* vtable;
};
typedef struct _Head_base _Head_base;
struct _Head_base {
 undefined4 data;
};
typedef struct _Tuple_impl _Tuple_impl;
struct _Tuple_impl {
 undefined4 data;
};
typedef struct _Tuple_impl Tuple_impl;
typedef struct tuple tuple;
struct tuple {
 undefined4 data;
};
typedef struct uniq_ptr_data uniq_ptr_data;
struct uniq_ptr_data {
 undefined4 data;
};
typedef struct uniq_ptr_impl uniq_ptr_impl;
struct uniq_ptr_impl {
 undefined4 data;
};
typedef struct unique_ptr unique_ptr;
struct unique_ptr {
 undefined4 data;
};
typedef struct unique_ptr_int_default_delete_int unique_ptr_int_default_delete_int;
struct unique_ptr_int_default_delete_int {
 undefined4 data;
};
typedef struct unique_ptr_int_array_default_delete_int_array unique_ptr_int_array_default_delete_int_array;
struct unique_ptr_int_array_default_delete_int_array {
 undefined4 data;
};
typedef struct unique_ptr_int_custom_deleter unique_ptr_int_custom_deleter;
struct unique_ptr_int_custom_deleter {
 undefined4 data;
};
typedef struct default_delete default_delete;
struct default_delete {
 undefined4 data;
};
typedef struct _lambda_int__1_ _lambda_int__1_;
struct _lambda_int__1_ {
 undefined4 data;
};
typedef struct _lambda_int___1_ _lambda_int___1_;
struct _lambda_int___1_ {
 undefined4 data;
};
typedef struct Init Init;
struct Init {
 undefined4 data;
};

/* Global variables */
extern int instance_count;
extern Init __ioinit;
extern void* __dso_handle;

/* External function declarations */
extern void __stack_chk_fail(void);
extern int __stack_chk_fail_local(void);
extern void* operator_new(size_t);
extern void* operator_new__(size_t);
extern void operator_delete(void*, size_t);
extern void operator_delete__(void*);
extern void __cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, void*, void*);
extern void __cxa_bad_typeid(void);
extern int __dynamic_cast(void*, void*, void*, int);
extern void __cxa_atexit(void*, void*, void*);
extern char* strncpy(char*, char*, size_t);
extern void __cxa_throw_bad_array_new_length(void);
extern void ios_base_Init_Init(void*);
extern void ios_base_Init__Init(void*);
extern int puts(void*);
extern int printf(void*, ...);
extern size_t strlen(char*);
extern int strcmp(char*, char*);

/* Forward declarations for functions */
extern _Head_base* Head_base_0u_M_head(_Head_base*);
extern _Head_base* Head_base_1u_M_head(_Head_base*);
extern void Head_base_0u_ctor(_Head_base*);
extern void Head_base_1u_ctor(_Head_base*);
extern void Head_base_1u_array_ctor(_Head_base*);
extern void Tuple_impl_ctor(_Tuple_impl*, int**, _lambda_int___1_*);
extern void Tuple_impl_1u_ctor(_Tuple_impl*);
extern void Tuple_impl_0u_ctor(_Tuple_impl*);
extern void Tuple_impl_0u_array_ctor(_Tuple_impl*);
extern void Tuple_impl_1u_array_ctor(_Tuple_impl*);
extern _Head_base* Tuple_impl_0u_M_head(_Tuple_impl*);
extern _Head_base* Tuple_impl_1u_M_head(_Tuple_impl*);
extern _Head_base* Tuple_impl_0u_array_M_head(_Tuple_impl*);
extern _Head_base* Tuple_impl_1u_array_M_head(_Tuple_impl*);
extern void tuple_ctor(undefined4*, int**, _lambda_int___1_*);
extern void tuple_ctor_init(tuple*);
extern void tuple_ctor_init_array(tuple*);
extern type* get_0u_int_ptr(tuple*);
extern type* get_1u_int_ptr(tuple*);
extern type* get_0u_int_ptr_array(tuple*);
extern type* get_1u_int_ptr_array(tuple*);
extern int** forward_int_ptr(type*);
extern _lambda_int___1_* forward_lambda_int_ptr(type*);
extern type* move_tuple(tuple*);
extern type* move_int_ptr(int**);
extern void uniq_ptr_impl_ctor(uniq_ptr_impl*, int*, _lambda_int___1_*);
extern void uniq_ptr_impl_ctor_ptr(uniq_ptr_impl*, int*);
extern void uniq_ptr_impl_array_ctor(uniq_ptr_impl*, int*);
extern void unique_ptr_impl_ctor(unique_ptr*, int*);
extern int** uniq_ptr_impl_M_ptr(uniq_ptr_impl*);
extern int* uniq_ptr_impl_array_M_ptr(uniq_ptr_impl*);
extern type* uniq_ptr_impl_M_deleter(uniq_ptr_impl*);
extern type* uniq_ptr_impl_array_M_deleter(uniq_ptr_impl*);
extern int* _M_ptr_func(uniq_ptr_impl*);
extern int* _M_ptr_array(uniq_ptr_impl*);
extern _lambda_int___1_* get_deleter(unique_ptr*);
extern type* get_deleter_array(unique_ptr*);
extern int* get(unique_ptr*);
extern int* get_array(unique_ptr*);
extern void unique_ptr_ctor(unique_ptr*, int*, _lambda_int___1_*);
extern void unique_ptr_array_ctor(unique_ptr*, int*);
extern void unique_ptr_destructor(unique_ptr*);
extern void unique_ptr_array_destructor(unique_ptr*);
extern int* unique_ptr_operator_deref(unique_ptr*);
extern int* unique_ptr_array_operator_index(unique_ptr*, uint);
extern void default_delete_operator(default_delete*, int*);
extern void default_delete_array_operator(default_delete*, int*);
extern void SimpleClass_constructor(SimpleClass*, int, char*);
extern int SimpleClass_getValue(SimpleClass*);
extern void SimpleClass_setValue(SimpleClass*, int);
extern int SimpleClass_compute(SimpleClass*, int);
extern undefined4 SimpleClass_getClassID(void);
extern void LifecycleClass_constructor(LifecycleClass*, uint);
extern void LifecycleClass_destructor(LifecycleClass*);
extern undefined4 LifecycleClass_getData(LifecycleClass*, uint);
extern undefined4 LifecycleClass_getInstanceCount(void);
extern int Base_virtual_func(Base*, int);
extern void Base_destructor(Base*);
extern void Base_constructor(Base*);
extern void Derived_constructor(Derived*, int);
extern int Derived_virtual_func(Derived*, int);
extern void Derived_destructor(Derived*);
extern undefined4 BaseA_funcA(void);
extern void BaseA_destructor(BaseA*);
extern void BaseA_constructor(BaseA*);
extern undefined4 BaseB_funcB(void);
extern void BaseB_destructor(BaseB*);
extern void BaseB_constructor(BaseB*);
extern void MultiDerived_constructor(MultiDerived*);
extern undefined4 MultiDerived_funcA(void);
extern undefined4 MultiDerived_funcB(void);
extern void MultiDerived_destructor(MultiDerived*);
extern void DiamondDerived_constructor(DiamondDerived*);
extern int DiamondDerived_func(DiamondDerived*);
extern void DiamondDerived_destructor(DiamondDerived*);
extern void VirtualBase_constructor(VirtualBase*);
extern void VirtualBase_destructor(VirtualBase*);
extern void MiddleA_constructor(MiddleA*);
extern void MiddleA_destructor(MiddleA*);
extern void MiddleB_constructor(MiddleB*);
extern void MiddleB_destructor(MiddleB*);
extern void Point_constructor(Point*, int, int);
extern Point* Point_operator_add(Point*, Point*);
extern undefined4 Point_operator_equal(Point*, Point*);
extern Point* Point_operator_increment(Point*);
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int*, int*);
extern void Container_int_Container(Container_int*);
extern void Container_int_push(Container_int*, int);
extern undefined4 Container_int_get(Container_int*, int);
extern undefined4 Container_int_getSize(Container_int*);
extern void Container_double_Container(Container_double*);
extern void Container_double_push(Container_double*, double);
extern double Container_double_get(Container_double*, int);
extern undefined4 Container_double_getSize(Container_double*);
extern void RTTIBase_constructor(RTTIBase*);
extern void RTTIBase_destructor(RTTIBase*);
extern void RTTIDerivedA_constructor(RTTIDerivedA*);
extern void RTTIDerivedA_destructor(RTTIDerivedA*);
extern undefined4 RTTIDerivedA_derivedA_data(RTTIDerivedA*);
extern void RTTIDerivedB_constructor(RTTIDerivedB*);
extern void RTTIDerivedB_destructor(RTTIDerivedB*);
extern undefined4 RTTIDerivedB_derivedB_data(RTTIDerivedB*);
extern int type_info_name(type_info*);
extern undefined4 type_info_operator_equal(type_info*, type_info*);
extern void test_cpp_smart_ptr_lambda_int_ptr_1_operator(_lambda_int___1_*, int*);
extern int test_cpp_lambda_lambda_int_1_operator(_lambda_int__1_*, int);
extern type* move_unique_ptr(unique_ptr*);
extern void uniq_ptr_data_uniq_ptr_impl(undefined4*, int*, _lambda_int___1_*);
extern void uniq_ptr_data_ctor(uniq_ptr_data*, uniq_ptr_data*);
extern void uniq_ptr_data_impl_ctor(uniq_ptr_data*, int*);
extern void uniq_ptr_data_array_impl_ctor(uniq_ptr_data*, int*);
extern void Tuple_impl_ctor_copy(Tuple_impl*, Tuple_impl*);
extern void tuple_ctor_copy(tuple*, tuple*);
extern void uniq_ptr_impl_ctor_copy(uniq_ptr_impl*, uniq_ptr_impl*);
extern void Tuple_impl_1u_ctor_copy(_Tuple_impl*);
extern int** __get_helper_0u_int_ptr(_Tuple_impl*);
extern int** __get_helper_0u_int_ptr_const(_Tuple_impl*);
extern _lambda_int___1_* __get_helper_1u_lambda_int_ptr(_Tuple_impl*);
extern int** __get_helper_0u_int_ptr_default_delete_int(_Tuple_impl*);
extern int** __get_helper_0u_int_ptr_default_delete_int_array(_Tuple_impl*);
extern default_delete* __get_helper_1u_default_delete_int(_Tuple_impl*);
extern default_delete* __get_helper_1u_default_delete_int_array(_Tuple_impl*);
extern _Head_base* Head_base_0u_M_head_impl(_Head_base*);
extern void Head_base_0u_ctor_ptr(_Head_base*, int**);
extern _Head_base* _Tuple_impl_0u_int_ptr_default_delete_int__M_head(_Tuple_impl*);
extern _Head_base* _Tuple_impl_0u_int_ptr_default_delete_int_array__M_head(_Tuple_impl*);

/* Global variable declarations */
extern undefined4* PTR_virtual_func_00018da8;
extern undefined4* PTR_virtual_func_00018d90;
extern undefined4* PTR_funcA_00018d7c;
extern undefined4* PTR_funcB_00018d68;
extern undefined4* PTR_funcA_00018d3c;
extern undefined4* PTR_funcB_00018d54;
extern undefined4* PTR_func_00018d28;
extern undefined4* PTR__RTTIBase_00018c44;
extern undefined4* PTR__RTTIDerivedA_00018c30;
extern undefined4* PTR__RTTIDerivedB_00018c1c;
extern void (*DAT_00018db0)(void*);
extern void* DAT_0001503c;
extern void* DAT_00015060;
extern void* DAT_0001507e;
extern void* DAT_0001509a;
extern void* DAT_000150b6;
extern void* DAT_000150d2;
extern void* DAT_000150ef;
extern void* DAT_0001510b;
extern void* DAT_00015127;
extern void* DAT_00015143;
extern void* DAT_0001515f;
extern void* DAT_0001517c;
extern void* DAT_00015199;
extern void* DAT_0001502d;
extern void* _GLOBAL_OFFSET_TABLE_;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)();
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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass local_34;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 SimpleClass_constructor(&local_34,5,"Test");
 SimpleClass_setValue(&local_34,10);
 iVar1 = SimpleClass_getValue(&local_34);
 iVar2 = SimpleClass_compute(&local_34,3);
 iVar3 = SimpleClass_getClassID();
 iVar3 = iVar3 + iVar1 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_constructor @ 00011519 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 LifecycleClass local_18;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 LifecycleClass_constructor(&local_18,5);
 iVar1 = LifecycleClass_getData(&local_18,2);
 iVar2 = LifecycleClass_getInstanceCount();
 LifecycleClass_destructor(&local_18);
 iVar3 = LifecycleClass_getInstanceCount();
 iVar1 = iVar1 + iVar2 + iVar3 * 1000;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: call_virtual_func @ 0001159f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 ((void (*)(Base*, int))**(undefined4 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000115ca */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 undefined **local_34;
 int local_30;
 int local_2c;
 Base *local_28;
 Base *local_24;
 Derived local_18;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_34 = &PTR_virtual_func_00018da8;
 Derived_constructor(&local_18,3);
 local_30 = Base_virtual_func((Base *)&local_34,5);
 local_2c = Derived_virtual_func(&local_18,5);
 local_28 = (Base *)&local_34;
 local_24 = (Base *)&local_18;
 /* try { // try from 00011642 to 00011659 has its CatchHandler @ 000116a1 */
 call_virtual_func(local_28,5);
 call_virtual_func(local_24,5);
 iVar1 = local_30 + local_2c;
 Derived_destructor(&local_18);
 Base_destructor((Base *)&local_34);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_multiple_inheritance @ 000116de */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 *local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 MultiDerived_constructor((MultiDerived *)&local_20);
 local_1c = 100;
 local_14 = 200;
 /* try { // try from 00011739 to 0001174f has its CatchHandler @ 00011792 */
 iVar1 = MultiDerived_funcA();
 iVar2 = MultiDerived_funcB();
 iVar1 = iVar1 + iVar2 + (uint)(local_20 != &local_18);
 MultiDerived_destructor((MultiDerived *)&local_20);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_diamond_inheritance @ 000117c0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 DiamondDerived local_28;
 undefined4 *local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 DiamondDerived_constructor(&local_28);
 local_14 = 0x32;
 /* try { // try from 0001180e to 0001182b has its CatchHandler @ 0001185a */
 iVar1 = DiamondDerived_func(&local_28);
 local_14 = 100;
 iVar2 = DiamondDerived_func(&local_28);
 iVar1 = iVar1 + iVar2;
 DiamondDerived_destructor(&local_28);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_operator_overload @ 00011888 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 char cVar1;
 int iVar2;
 int in_GS_OFFSET;
 Point local_28;
 Point local_20;
 Point local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 Point_constructor(&local_28,1,2);
 Point_constructor(&local_20,3,4);
 Point_operator_add(&local_18,&local_28);
 cVar1 = Point_operator_equal(&local_28,&local_20);
 Point_operator_increment(&local_18);
 if (cVar1 == '\0') {
 iVar2 = 10;
 }
 else {
 iVar2 = 0;
 }
 iVar2 = local_14 + *(int*)&local_18 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_template_func @ 00011938 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_28;
 int local_24;
 int local_20;
 double local_1c;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20 = template_max_int(3,7);
 local_1c = template_max_double(2.5,1.5);
 local_28 = 10;
 local_24 = 0x14;
 template_swap_int(&local_28,&local_24);
 iVar1 = local_24 + ROUND(local_1c) + local_20;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 000119f3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 double lVar3;
 Container_int local_90;
 Container_double local_64;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 Container_int_Container(&local_90);
 Container_int_push(&local_90,10);
 Container_int_push(&local_90,0x14);
 Container_int_push(&local_90,0x1e);
 iVar1 = Container_int_get(&local_90,0);
 iVar2 = Container_int_getSize(&local_90);
 Container_double_Container(&local_64);
 Container_double_push(&local_64,10.5);
 lVar3 = Container_double_get(&local_64,0);
 iVar1 = ROUND(lVar3) + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: operator() @ 00011b34 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* test_cpp_lambda_lambda_int_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int  test_cpp_lambda_lambda_int_1_operator(_lambda_int__1_ *param_1,int param_2)

{
 **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 5;
 return **(int **)(param_1 + 4) + *(int *)param_1 * param_2;
}



/* Function: test_cpp_lambda @ 00011b6b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int in_GS_OFFSET;
 undefined4 local_28;
 undefined4 local_24;
 int local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 *local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 10;
 local_28 = 0x14;
 local_18 = 10;
 local_14 = &local_28;
 local_20 = test_cpp_lambda_lambda_int_1_operator((_lambda_int__1_ *)&local_18,3);
 local_1c = 0x1e;
 iVar1 = local_20 + 0x1e;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_exception @ 00011bd7 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011c1a to 00011c1e has its CatchHandler @ 00011c27 */
 __cxa_throw(puVar1,(void*)DAT_00018db0,0);
 return 0;
}



/* Function: operator() @ 00011d26 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* test_cpp_smart_ptr_lambda_int_ptr_1::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void
test_cpp_smart_ptr_lambda_int_ptr_1_operator(_lambda_int___1_ *param_1,int *param_2)

{
 *param_2 = -1;
 if (param_2 != (int *)0x0) {
 operator_delete(param_2,4);
 }
 return;
}



/* Function: test_cpp_smart_ptr @ 00011d5e */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int *piVar1;
 undefined4 *puVar2;
 type *ptVar3;
 int iVar4;
 int in_GS_OFFSET;
 _lambda_int___1_ local_2d;
 unique_ptr_int_default_delete_int local_2c [4];
 unique_ptr_int_default_delete_int local_28 [4];
 unique_ptr_int_array_default_delete_int_array local_24 [4];
 unique_ptr_int_custom_deleter local_20 [4];
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = (int *)operator_new(4);
 *piVar1 = 100;
 unique_ptr_impl_ctor((unique_ptr *)local_2c,piVar1);
 puVar2 = (undefined4 *)unique_ptr_operator_deref((unique_ptr *)local_2c);
 *puVar2 = 200;
 move_unique_ptr((unique_ptr *)local_2c);
 uniq_ptr_data_ctor((uniq_ptr_data *)local_28,(uniq_ptr_data *)local_2c);
 piVar1 = (int *)unique_ptr_operator_deref((unique_ptr *)local_28);
 local_1c = *piVar1;
 /* try { // try from 00011df4 to 00011df8 has its CatchHandler @ 00011efe */
 piVar1 = (int *)operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 unique_ptr_array_ctor((unique_ptr *)local_24,piVar1);
 piVar1 = (int *)unique_ptr_array_operator_index((unique_ptr *)local_24,2);
 local_18 = *piVar1;
 /* try { // try from 00011e57 to 00011e5b has its CatchHandler @ 00011ee7 */
 piVar1 = (int *)operator_new(4);
 *piVar1 = 500;
 uniq_ptr_data_impl_ctor((uniq_ptr_data *)local_20,piVar1);
 piVar1 = (int *)unique_ptr_operator_deref((unique_ptr *)local_20);
 local_14 = *piVar1;
 iVar4 = local_1c + local_18;
 unique_ptr_destructor((unique_ptr *)local_20);
 unique_ptr_array_destructor((unique_ptr *)local_24);
 unique_ptr_destructor((unique_ptr *)local_28);
 unique_ptr_destructor((unique_ptr *)local_2c);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar4 = __stack_chk_fail_local();
 }
 return iVar4;
}



/* Function: test_cpp_rtti @ 00011f3b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char cVar1;
 RTTIDerivedA *pVar1;
 RTTIDerivedB *pVar2;
 int iVar2;
 char *__s;
 size_t sVar3;
 int local_20;
 
 pVar1 = (RTTIDerivedA *)operator_new(4);
 *(undefined4 **)pVar1 = &PTR__RTTIDerivedA_00018c30;
 RTTIDerivedA_constructor(pVar1);
 pVar2 = (RTTIDerivedB *)operator_new(4);
 *(undefined4 **)pVar2 = &PTR__RTTIDerivedB_00018c1c;
 RTTIDerivedB_constructor(pVar2);
 local_20 = 0;
 if (pVar1 == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
LAB_00011fcb:
 local_20 = 10;
 }
 else {
 cVar1 = type_info_operator_equal
 (*(type_info **)(*(int *)pVar1 + -4),(type_info *)&PTR__RTTIDerivedA_00018c30);
 if (cVar1 != '\0') goto LAB_00011fcb;
 }
 if (pVar2 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
LAB_00011ff9:
 local_20 = local_20 + 0x14;
 }
 else {
 cVar1 = type_info_operator_equal
 (*(type_info **)(*(int *)pVar2 + -4),(type_info *)&PTR__RTTIDerivedB_00018c1c);
 if (cVar1 != '\0') goto LAB_00011ff9;
 }
 if (pVar1 == (RTTIDerivedA *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = __dynamic_cast(pVar1,&PTR__RTTIBase_00018c44,&PTR__RTTIDerivedA_00018c30,0);
 }
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedA_derivedA_data(pVar1);
 local_20 = local_20 + iVar2;
 }
 if (pVar2 == (RTTIDerivedB *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar2 = __dynamic_cast(pVar2,&PTR__RTTIBase_00018c44,&PTR__RTTIDerivedB_00018c1c,0);
 }
 if (iVar2 != 0) {
 iVar2 = RTTIDerivedB_derivedB_data(pVar2);
 local_20 = local_20 + iVar2;
 }
 if (pVar1 == (RTTIDerivedA *)0x0) {
 pVar1 = (RTTIDerivedA *)__cxa_bad_typeid();
 }
 else {
 __s = (char *)type_info_name(*(type_info **)(*(int *)pVar1 + -4));
 sVar3 = strlen(__s);
 local_20 = sVar3 + local_20;
 if (pVar1 == (RTTIDerivedA *)0x0) goto LAB_000120c9;
 }
 (*(void (*)(RTTIDerivedA*))(*(int *)pVar1 + 4))(pVar1);
LAB_000120c9:
 if (pVar2 != (RTTIDerivedB *)0x0) {
 (*(void (*)(RTTIDerivedB*))(*(int *)pVar2 + 4))(pVar2);
 }
 return local_20;
}



/* Function: test_cpp_oo_features @ 000120ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001503c);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00015060,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_0001507e,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_0001509a,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_000150b6,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000150d2,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_000150ef,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_0001510b,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_00015127,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00015143,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_0001515f,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_0001517c,uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_00015199,uVar1);
 return;
}



/* Function: main @ 00012238 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: uniq_ptr_data_uniq_ptr_impl @ 00012258 */

void uniq_ptr_data_uniq_ptr_impl(uniq_ptr_impl *this_ptr,int *param_2,_lambda_int___1_ *param_3)

{
 uniq_ptr_impl_ctor
 (this_ptr,param_2,param_3);
 return;
}



/* Function: unique_ptr_ctor @ 00012282 */

void unique_ptr_ctor(unique_ptr *param_1,int *param_2,_lambda_int___1_ *param_3)

{
 uniq_ptr_impl_ctor
 ((uniq_ptr_impl *)param_1,param_2,param_3);
 return;
}



/* Function: unique_ptr_destructor @ 000122aa */

void unique_ptr_destructor(unique_ptr *param_1)

{
 int **ppiVar1;
 _lambda_int___1_ *pVar2;
 
 ppiVar1 = (int **)uniq_ptr_impl_M_ptr
 ((uniq_ptr_impl *)param_1);
 if (*ppiVar1 != (int *)0x0) {
 pVar2 = (_lambda_int___1_ *)get_deleter(param_1);
 test_cpp_smart_ptr_lambda_int_ptr_1_operator(pVar2,*ppiVar1);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: unique_ptr_operator_deref @ 00012312 */

int* unique_ptr_operator_deref(unique_ptr *param_1)

{
 return (int*)get(param_1);
}



/* Function: uniq_ptr_impl_ctor @ 0001233a */

void uniq_ptr_impl_ctor(uniq_ptr_impl *param_1,int *param_2,_lambda_int___1_ *param_3)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = forward_lambda_int_ptr((type *)param_3);
 tuple_ctor
 ((undefined4 *)param_1,(int **)&param_2,p_Var1);
 return;
}



/* Function: uniq_ptr_impl_M_ptr @ 00012374 */

int** uniq_ptr_impl_M_ptr(uniq_ptr_impl *param_1)

{
 return (int**)get_0u_int_ptr((tuple *)param_1);
}







/* Function: get @ 000123b8 */

int* get(unique_ptr *param_1)

{
 return (int*)uniq_ptr_impl_M_ptr
 ((uniq_ptr_impl *)param_1);
}



/* Function: forward_lambda_int_ptr @ 000123d9 */

_lambda_int___1_ * forward_lambda_int_ptr(type *param_1)

{
 return (_lambda_int___1_ *)param_1;
}



/* Function: tuple_ctor @ 000123ec */

void tuple_ctor(undefined4 *this_ptr,int **param_1,_lambda_int___1_ *param_2)

{
 _lambda_int___1_ *p_Var1;
 int **ppiVar2;
 
 p_Var1 = forward_lambda_int_ptr((type *)param_2);
 ppiVar2 = forward_int_ptr((type *)param_1);
 Tuple_impl_ctor
 ((_Tuple_impl *)this_ptr,ppiVar2,p_Var1);
 return;
}



/* Function: get_0u_int_ptr @ 0001242f */

type* get_0u_int_ptr(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_ptr
 ((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: uniq_ptr_impl_M_deleter @ 00012450 */

type* uniq_ptr_impl_M_deleter(uniq_ptr_impl *param_1)

{
 return get_1u_int_ptr((tuple *)param_1);
}



/* Function: _M_ptr @ 00012472 */

int* _M_ptr_func(uniq_ptr_impl *param_1)

{
 type *ptVar1;
 
 ptVar1 = get_0u_int_ptr((tuple *)param_1);
 if (ptVar1 != (type *)0x0) {
 return (int*)ptVar1;
 }
 return (int*)0;
}



/* Function: Tuple_impl_ctor @ 00012496 */

void Tuple_impl_ctor(_Tuple_impl *param_1,int **param_2,_lambda_int___1_ *param_3)

{
 int **ppiVar1;
 
 forward_lambda_int_ptr((type *)param_3);
 Tuple_impl_1u_ctor(param_1);
 ppiVar1 = forward_int_ptr((type *)param_2);
 Head_base_0u_ctor_ptr((_Head_base *)param_1,ppiVar1);
 return;
}



/* Function: __get_helper_0u_int_ptr @ 000124e5 */

int ** __get_helper_0u_int_ptr(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)Tuple_impl_0u_M_head(param_1);
 return ppiVar1;
}



/* Function: get_1u_int_ptr @ 00012505 */

type* get_1u_int_ptr(tuple *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = __get_helper_1u_lambda_int_ptr((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: get_0u_int_ptr_const @ 00012525 */

int** get_0u_int_ptr_const(tuple *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)__get_helper_0u_int_ptr_const
 ((_Tuple_impl *)param_1);
 return ppiVar1;
}



/* Function: Tuple_impl_1u_ctor @ 00012546 */

void Tuple_impl_1u_ctor(_Tuple_impl *this_ptr)

{
 Head_base_1u_ctor((_Head_base *)this_ptr);
 return;
}



/* Function: Tuple_impl_0u_M_head @ 0001256a */

_Head_base* Tuple_impl_0u_M_head(_Tuple_impl *param_1)

{
 return Head_base_0u_M_head((_Head_base *)param_1);
}



/* Function: __get_helper_1u_lambda_int_ptr @ 0001258b */

_lambda_int___1_ *
__get_helper_1u_lambda_int_ptr(_Tuple_impl *param_1)

{
 _lambda_int___1_ *p_Var1;
 
 p_Var1 = (_lambda_int___1_ *)
 Tuple_impl_1u_M_head(param_1);
 return p_Var1;
}



/* Function: __get_helper_0u_int_ptr_const @ 000125ab */

int ** __get_helper_0u_int_ptr_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)Tuple_impl_0u_M_head(param_1);
 return ppiVar1;
}



/* Function: Head_base_1u_ctor @ 000125cc */

void Head_base_1u_ctor(_Head_base *param_1)

{
 return;
}



/* Function: Tuple_impl_1u_M_head @ 000125dc */

_Head_base* Tuple_impl_1u_M_head(_Tuple_impl *param_1)

{
 return Head_base_1u_M_head((_Head_base *)param_1);
}



/* Function: Tuple_impl_0u_M_head_const @ 000125fc */

_Head_base* Tuple_impl_0u_M_head_const(_Tuple_impl *param_1)

{
 return Head_base_0u_M_head((_Head_base *)param_1);
}



/* Function: Head_base_1u_M_head @ 0001261d */

_Head_base *
Head_base_1u_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 0001262f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
 if ((param_1 == 1) && (param_2 == 0xffff)) {
 ios_base_Init_Init((Init *)&__ioinit);
 __cxa_atexit(ios_base_Init__Init,&__ioinit,&__dso_handle);
 }
 return;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 0001268c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 __static_initialization_and_destruction_0(1,0xffff);
 return;
}



/* Function: name @ 000126b4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* type_info::name() const */

int type_info_name(type_info *param_1)

{
 int iVar1;
 
 if (**(char **)(param_1 + 4) == '*') {
 iVar1 = *(int *)(param_1 + 4) + 1;
 }
 else {
 iVar1 = *(int *)(param_1 + 4);
 }
 return iVar1;
}



/* Function: operator== @ 000126e6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* type_info::TEMPNAMEPLACEHOLDERVALUE(type_info const&) const */

undefined4 type_info_operator_equal(type_info *param_1,type_info *param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
LAB_00012738:
 uVar2 = 1;
 }
 else {
 if (**(char **)(param_1 + 4) != '*') {
 iVar1 = strcmp(*(char **)(param_1 + 4),*(char **)(param_2 + 4));
 if (iVar1 == 0) goto LAB_00012738;
 }
 uVar2 = 0;
 }
 return uVar2;
}



/* Function: SimpleClass_constructor @ 0001274a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::SimpleClass(int, char const*) */

void SimpleClass_constructor(SimpleClass *param_1,int param_2,char *param_3)

{
 *(int *)param_1 = param_2;
 strncpy((char *)(param_1 + 4),param_3,0x1f);
 param_1->vtable = 0;
 return;
}



/* Function: SimpleClass_getValue @ 0001278e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::getValue() const */

undefined4 SimpleClass_getValue(SimpleClass *param_1)

{
 return *(undefined4 *)param_1;
}



/* Function: SimpleClass_setValue @ 000127a6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::setValue(int) */

void SimpleClass_setValue(SimpleClass *param_1,int param_2)

{
 *(int *)param_1 = param_2;
 return;
}



/* Function: SimpleClass_compute @ 000127c2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::compute(int) const */

int SimpleClass_compute(SimpleClass *param_1,int param_2)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)param_1;
 sVar2 = strlen((char *)(param_1 + 4));
 return sVar2 + iVar1 * param_2;
}



/* Function: getClassID @ 000127fd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::getClassID() */

undefined4 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass_constructor @ 00012816 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* LifecycleClass::LifecycleClass(unsigned int) */

void LifecycleClass_constructor(LifecycleClass *param_1,uint param_2)

{
 void *pvVar1;
 uint local_10;
 
 *(uint *)(param_1 + 4) = param_2;
 if (param_2 < 0x20000000) {
 pvVar1 = operator_new__(param_2 << 2);
 *(void **)param_1 = pvVar1;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
LAB_00012863:
 *(uint *)(local_10 * 4 + *(int *)param_1) = local_10 * 10;
 }
 instance_count = instance_count + 1;
 return;
 }
 __cxa_throw_bad_array_new_length();
 goto LAB_00012863;
}



/* Function: LifecycleClass_destructor @ 000128a4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* LifecycleClass::~LifecycleClass() */

void LifecycleClass_destructor(LifecycleClass *param_1)

{
 if (*(int *)param_1 != 0) {
 operator_delete__(*(void **)param_1);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: LifecycleClass_getData @ 000128ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* LifecycleClass::getData(unsigned int) const */

undefined4 LifecycleClass_getData(LifecycleClass *param_1,uint param_2)

{
 undefined4 uVar1;
 
 if (param_2 < *(uint *)(param_1 + 4)) {
 uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)param_1);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: getInstanceCount @ 0001291e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: Base_virtual_func @ 00012938 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::virtual_func(int) */

int Base_virtual_func(Base *param_1,int param_2)

{
 return param_2 + 1;
}



/* Function: getName @ 00012952 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base_getName(void)

{
 return &DAT_0001502d;
}



/* Function: Base_destructor @ 0001296c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::~Base() */

void Base_destructor(Base *param_1)

{
 *(undefined ***)param_1 = &PTR_virtual_func_00018da8;
 return;
}



/* Function: Base_destructor_delete @ 0001298c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void Base_destructor_delete(Base *param_1)

{
 Base_destructor(param_1);
 operator_delete(param_1,4);
 return;
}



/* Function: Base_constructor @ 000129c6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::Base() */

void Base_constructor(Base *param_1)

{
 *(undefined ***)param_1 = &PTR_virtual_func_00018da8;
 return;
}



/* Function: Derived_constructor @ 000129e6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::Derived(int) */

void Derived_constructor(Derived *param_1,int param_2)

{
 Base_constructor((Base *)param_1);
 *(undefined ***)param_1 = &PTR_virtual_func_00018d90;
 *(int *)(param_1 + 4) = param_2;
 return;
}



/* Function: Derived_virtual_func @ 00012a26 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *param_1,int param_2)

{
 return *(int *)(param_1 + 4) * param_2;
}



/* Function: getName @ 00012a44 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00012a5e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseA::funcA() */

undefined4 BaseA_funcA(void)

{
 return 10;
}



/* Function: BaseA_destructor @ 00012a76 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseA::~BaseA() */

void BaseA_destructor(BaseA *param_1)

{
 *(undefined ***)param_1 = &PTR_funcA_00018d7c;
 return;
}



/* Function: BaseA_destructor_delete @ 00012a96 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* BaseA::~BaseA() */

void BaseA_destructor_delete(BaseA *param_1)

{
 BaseA_destructor(param_1);
 operator_delete(param_1,8);
 return;
}



/* Function: funcB @ 00012ad0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseB::funcB() */

undefined4 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: BaseB_destructor @ 00012ae8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseB::~BaseB() */

void BaseB_destructor(BaseB *param_1)

{
 *(undefined ***)param_1 = &PTR_funcB_00018d68;
 return;
}



/* Function: BaseB_destructor_delete @ 00012b08 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* BaseB::~BaseB() */

void BaseB_destructor_delete(BaseB *param_1)

{
 BaseB_destructor(param_1);
 operator_delete(param_1,8);
 return;
}



/* Function: funcA @ 00012b42 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00012b5a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00012b72 */

/* non-virtual thunk to MultiDerived::funcB() */

void MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 MultiDerived_funcB();
 return;
}



/* Function: BaseA_constructor @ 00012b7e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseA::BaseA() */

void BaseA_constructor(BaseA *param_1)

{
 *(undefined ***)param_1 = &PTR_funcA_00018d7c;
 return;
}



/* Function: BaseB_constructor @ 00012b9e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseB::BaseB() */

void BaseB_constructor(BaseB *param_1)

{
 *(undefined ***)param_1 = &PTR_funcB_00018d68;
 return;
}



/* Function: MultiDerived_constructor @ 00012bbe */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::MultiDerived() */

void MultiDerived_constructor(MultiDerived *param_1)

{
 BaseA_constructor((BaseA *)param_1);
 BaseB_constructor((BaseB *)(param_1 + 8));
 *(undefined4 **)param_1 = PTR_funcA_00018d3c;
 *(undefined4 **)(param_1 + 8) = PTR_funcB_00018d54;
 return;
}



/* Function: func @ 00012c12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* VirtualBase::func() */

undefined4 VirtualBase_func(void)

{
 return 100;
}



/* Function: VirtualBase_destructor @ 00012c2a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor(VirtualBase *param_1)

{
 *(undefined ***)param_1 = &PTR_func_00018d28;
 return;
}



/* Function: VirtualBase_destructor_delete @ 00012c4a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor_delete(VirtualBase *param_1)

{
 VirtualBase_destructor(param_1);
 operator_delete(param_1,8);
 return;
}



/* Function: MiddleA_func @ 00012c84 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleA::func() */

int MiddleA_func(MiddleA *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0x96;
}



/* Function: MiddleA_func_thunk @ 00012cb0 */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *param_1)

{
 MiddleA_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}



/* Function: MiddleB_func @ 00012cc4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleB::func() */

int MiddleB_func(MiddleB *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 200;
}



/* Function: MiddleB_func_thunk @ 00012cf0 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *param_1)

{
 MiddleB_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}



/* Function: DiamondDerived_func @ 00012d04 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0xfa;
}



/* Function: DiamondDerived_func_thunk @ 00012d30 */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *param_1)

{
 DiamondDerived_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}



/* Function: DiamondDerived_func_thunk_nonvirtual @ 00012d43 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk_nonvirtual(DiamondDerived *param_1)

{
 DiamondDerived_func(param_1 + -8);
 return;
}



/* Function: VirtualBase_constructor @ 00012d4e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* VirtualBase::VirtualBase() */

void VirtualBase_constructor(VirtualBase *param_1)

{
 *(undefined ***)param_1 = &PTR_func_00018d28;
 return;
}



/* Function: MiddleA_constructor @ 00012d6e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleA::MiddleA() */

void MiddleA_constructor(MiddleA *param_1)

{
 return;
}



/* Function: MiddleA_destructor @ 00012da6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleA::~MiddleA() */

void MiddleA_destructor(MiddleA *param_1)

{
 return;
}



/* Function: MiddleB_constructor @ 00012dde */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleB::MiddleB() */

void MiddleB_constructor(MiddleB *param_1)

{
 return;
}



/* Function: MiddleB_destructor @ 00012e16 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleB::~MiddleB() */

void MiddleB_destructor(MiddleB *param_1)

{
 return;
}



/* Function: DiamondDerived_constructor @ 00012e4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::DiamondDerived() */

void DiamondDerived_constructor(DiamondDerived *param_1)

{
 VirtualBase_constructor((VirtualBase *)(param_1 + 0x10));
 MiddleA_constructor((MiddleA *)param_1);
 MiddleB_constructor((MiddleB *)(param_1 + 8));
 param_1->vtable1 = (undefined4)0x18c5c;
 param_1->vtable3 = (undefined4)0x18c90;
 param_1->vtable2 = (undefined4)0x18c74;
 return;
}



/* Function: Point_constructor @ 00012ed0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::Point(int, int) */

void Point_constructor(Point *param_1,int param_2,int param_3)

{
 *(int *)param_1 = param_2;
 *(int *)(param_1 + 4) = param_3;
 return;
}



/* Function: Point_operator_add @ 00012ef6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::operator+(Point const&) const */

Point * Point_operator_add(Point *param_1,Point *param_2)

{
 Point_constructor(param_1,*(int *)param_1 + *(int *)param_2,*(int *)(param_1 + 4) + *(int *)(param_2 + 4));
 return param_1;
}



/* Function: Point_operator_equal @ 00012f3c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::operator==(Point const&) const */

undefined4 Point_operator_equal(Point *param_1,Point *param_2)

{
 undefined4 uVar1;
 
 if ((*(int *)param_1 == *(int *)param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: Point_operator_increment @ 00012f7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::operator++() */

Point * Point_operator_increment(Point *param_1)

{
 *(int *)param_1 = *(int *)param_1 + 1;
 *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
 return param_1;
}



/* Function: template_max_int @ 00012fac */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00012fcf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 00013011 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_Container @ 00013042 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::Container() */

void Container_int_Container(Container_int *param_1)

{
 *(undefined4 *)(param_1 + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 00013060 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::push(int) */

void Container_int_push(Container_int *param_1,int param_2)

{
 int iVar1;
 
 if (*(int *)(param_1 + 0x28) < 10) {
 iVar1 = *(int *)(param_1 + 0x28);
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + iVar1 * 4) = param_2;
 }
 return;
}



/* Function: Container_int_get @ 0001309c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *param_1,int param_2)

{
 undefined4 uVar1;
 
 if ((param_2 < 0) || (*(int *)(param_1 + 0x28) <= param_2)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 000130d0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *param_1)

{
 return *(undefined4 *)(param_1 + 0x28);
}



/* Function: Container_double_Container @ 000130ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::Container() */

void Container_double_Container(Container_double *param_1)

{
 *(undefined4 *)(param_1 + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 00013108 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::push(double) */

void Container_double_push(Container_double *param_1,double param_2)

{
 int iVar1;
 
 if (*(int *)(param_1 + 0x50) < 10) {
 iVar1 = *(int *)(param_1 + 0x50);
 *(int *)(param_1 + 0x50) = iVar1 + 1;
 *(double *)(param_1 + iVar1 * 8) = param_2;
 }
 return;
}



/* Function: Container_double_get @ 0001314e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::get(int) const */

double Container_double_get(Container_double *param_1,int param_2)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
 dVar1 = *(double *)(param_1 + param_2 * 8);
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 00013180 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *param_1)

{
 return *(undefined4 *)(param_1 + 0x50);
}



/* Function: __uniq_ptr_data @ 0001319a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_data<int, default_delete<int>, true,
 true>::__uniq_ptr_data(__uniq_ptr_data<int, default_delete<int>, true, true>&&) */

void uniq_ptr_data_ctor
 (uniq_ptr_data *this_ptr,uniq_ptr_data *param_2)

{
 uniq_ptr_impl_ctor
 ((uniq_ptr_impl *)this_ptr,(uniq_ptr_impl *)param_2);
 return;
}



/* Function: unique_ptr @ 000131c4 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int, default_delete<int> >::unique_ptr(unique_ptr<int,
 default_delete<int> >&&) */

void unique_ptr_ctor
 (unique_ptr *this_ptr,unique_ptr *param_2)

{
 uniq_ptr_data_ctor
 ((uniq_ptr_data *)this_ptr,
 (uniq_ptr_data *)param_2);
 return;
}



/* Function: getType @ 000131ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIBase::getType() const */

undefined4 RTTIBase_getType(RTTIBase *this_ptr)

{
 return 0;
}



/* Function: getType @ 00013206 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: derivedA_data @ 0001321e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA_derivedA_data(RTTIDerivedA *this_ptr)

{
 return 100;
}



/* Function: getType @ 00013236 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: derivedB_data @ 0001324e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB_derivedB_data(RTTIDerivedB *this_ptr)

{
 return 200;
}



/* Function: RTTIBase @ 00013266 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIBase::RTTIBase() */

void RTTIBase_constructor(RTTIBase *param_1)

{
 *(undefined ***)param_1 = &PTR__RTTIBase_00018c44;
 return;
}



/* Function: ~RTTIBase @ 00013286 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *param_1)

{
 *(undefined ***)param_1 = &PTR__RTTIBase_00018c44;
 return;
}



/* Function: ~RTTIBase @ 000132a6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor_delete(RTTIBase *param_1)

{
 RTTIBase_destructor(param_1);
 operator_delete(param_1,4);
 return;
}



/* Function: RTTIDerivedA @ 000132e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::RTTIDerivedA() */

void RTTIDerivedA_constructor(RTTIDerivedA *param_1)

{
 RTTIBase_constructor((RTTIBase *)param_1);
 *(undefined ***)param_1 = &PTR__RTTIDerivedA_00018c30;
 return;
}



/* Function: RTTIDerivedB @ 00013316 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::RTTIDerivedB() */

void RTTIDerivedB_constructor(RTTIDerivedB *param_1)

{
 RTTIBase_constructor((RTTIBase *)param_1);
 *(undefined ***)param_1 = &PTR__RTTIDerivedB_00018c1c;
 return;
}



/* Function: __uniq_ptr_impl @ 0001334c */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_data<int, default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void uniq_ptr_data_impl_ctor
 (uniq_ptr_data *this_ptr,int *param_2)

{
 uniq_ptr_impl_ctor
 ((uniq_ptr_impl *)this_ptr,param_2,(void*)0);
 return;
}



/* Function: unique_ptr<default_delete<int>,void> @ 00013376 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int, default_delete<int> >::unique_ptr<default_delete<int>, void>(int*)
 */

void unique_ptr_impl_ctor
 (unique_ptr *this_ptr,int *param_2)

{
 uniq_ptr_data_impl_ctor
 ((uniq_ptr_data *)this_ptr,param_2);
 return;
}



/* Function: ~unique_ptr @ 000133a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int, default_delete<int> >::~unique_ptr() */

void unique_ptr_destructor
 (unique_ptr *param_1)

{
 int **ppiVar1;
 default_delete *this_00;
 int *piVar2;
 
 ppiVar1 = (int **)uniq_ptr_impl_M_ptr
 ((uniq_ptr_impl *)param_1);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete *)get_deleter(param_1);
 piVar2 = *ppiVar1;
 default_delete_operator(this_00,piVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: operator* @ 0001340c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int, default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

int* unique_ptr_operator_deref
 (unique_ptr *param_1)

{
 return (int*)get(param_1);
}



/* Function: move<unique_ptr<int,default_delete<int>>&> @ 00013437 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* remove_reference<unique_ptr<int, default_delete<int> >&>::type&&
 move<unique_ptr<int, default_delete<int> >&>(unique_ptr<int,
 default_delete<int> >&) */

type * move_unique_ptr(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 0001344e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int> >::_Tuple_impl(_Tuple_impl<0u, int*,
 default_delete<int> >&&) */

void Tuple_impl_ctor_copy
 (Tuple_impl *this_ptr,Tuple_impl *param_2)

{
 Tuple_impl_1u_ctor_copy((_Tuple_impl *)this_ptr);
 *(undefined4 *)this_ptr = *(undefined4 *)param_2;
 return;
}



/* Function: tuple @ 00013480 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* tuple<int*, default_delete<int> >::tuple(tuple<int*, default_delete<int> >&&)
 */

void tuple_ctor_copy
 (tuple *this_ptr,tuple *param_2)

{
 Tuple_impl_ctor_copy
 ((_Tuple_impl *)this_ptr,(_Tuple_impl *)param_2);
 return;
}



/* Function: __uniq_ptr_impl @ 000134aa */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int> >::__uniq_ptr_impl(__uniq_ptr_impl<int,
 default_delete<int> >&&) */

void uniq_ptr_impl_ctor_copy
 (uniq_ptr_impl *this_ptr,uniq_ptr_impl *param_2)

{
 type *ptVar1;
 undefined4 *puVar2;
 
 ptVar1 = move_tuple((tuple *)param_2);
 tuple_ctor_copy
 ((tuple *)this_ptr,(tuple *)ptVar1);
 puVar2 = (undefined4 *)_M_ptr_func((uniq_ptr_impl *)param_2);
 *puVar2 = 0;
 return;
}



/* Function: __uniq_ptr_impl @ 000134f8 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_data<int, default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void uniq_ptr_data_array_impl_ctor
 (uniq_ptr_data *this_ptr,int *param_2)

{
 uniq_ptr_impl_array_ctor
 ((uniq_ptr_impl *)this_ptr,param_2);
 return;
}



/* Function: unique_ptr<int*,default_delete<int[]>,void,bool> @ 00013522 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int [], default_delete<int []> >::unique_ptr<int*, default_delete<int
 []>, void, bool>(int*) */

void unique_ptr_array_ctor
 (unique_ptr *this_ptr,int *param_2)

{
 uniq_ptr_data_array_impl_ctor
 ((uniq_ptr_data *)this_ptr,param_2);
 return;
}



/* Function: ~unique_ptr @ 0001354c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int [], default_delete<int []> >::~unique_ptr() */

void unique_ptr_array_destructor
 (unique_ptr *param_1)

{
 int *piVar1;
 default_delete *this_00;
 
 piVar1 = (int *)uniq_ptr_impl_array_M_ptr
 ((uniq_ptr_impl *)param_1);
 if (*piVar1 != 0) {
 this_00 = (default_delete *)get_deleter(param_1);
 default_delete_array_operator(this_00,(int *)*piVar1);
 }
 *piVar1 = 0;
 return;
}



/* Function: operator[] @ 000135a8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int [], default_delete<int []> >::operator[](unsigned int) const */

int* unique_ptr_array_operator_index
 (unique_ptr *param_1,uint param_2)

{
 int *iVar1;
 
 iVar1 = (int*)get_array(param_1);
 return (int*)(param_2 * 4 + (int)iVar1);
}



/* Function: __uniq_ptr_impl @ 000135de */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int> >::__uniq_ptr_impl(int*) */

void uniq_ptr_impl_ctor_ptr
 (uniq_ptr_impl *param_1,int *param_2)

{
 undefined4 *puVar1;
 
 tuple_ctor_init
 ((tuple *)param_1);
 puVar1 = (undefined4 *)_M_ptr_func(param_1);
 *puVar1 = (undefined4)param_2;
 return;
}



/* Function: _M_ptr @ 0001361c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int> >::_M_ptr() */

int** uniq_ptr_impl_M_ptr
 (uniq_ptr_impl *param_1)

{
 return (int**)get_0u_int_ptr((tuple *)param_1);
}



/* Function: get_deleter @ 00013642 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int, default_delete<int> >::get_deleter() */

_lambda_int___1_* get_deleter
 (unique_ptr *param_1)

{
 return (_lambda_int___1_*)uniq_ptr_impl_M_deleter
 ((uniq_ptr_impl *)param_1);
}



/* Function: move<int*&> @ 00013667 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* remove_reference<int*&>::type&& move<int*&>(int*&) */

type * move_int_ptr(int **param_1)

{
 return (type *)param_1;
}



/* Function: operator() @ 0001367e */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void default_delete_operator(default_delete *param_1,int *param_2)

{
 if (param_2 != (int *)0x0) {
 operator_delete(param_2,4);
 }
 return;
}



/* Function: get @ 000136b2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int, default_delete<int> >::get() const */

int* get(unique_ptr *param_1)

{
 return (int*)uniq_ptr_impl_M_ptr
 ((uniq_ptr_impl *)param_1);
}



/* Function: move<tuple<int*,default_delete<int>>&> @ 000136d7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* remove_reference<tuple<int*, default_delete<int> >&>::type&&
 move<tuple<int*, default_delete<int> >&>(tuple<int*, default_delete<int>
 >&) */

type * move_tuple(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: _Tuple_impl @ 000136ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<1u, default_delete<int> >::_Tuple_impl(_Tuple_impl<1u,
 default_delete<int> >&&) */

void Tuple_impl_1u_ctor_copy(_Tuple_impl *this_ptr)

{
 Head_base_1u_ctor((_Head_base *)this_ptr);
 return;
}



/* Function: __uniq_ptr_impl @ 00013702 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int []> >::__uniq_ptr_impl(int*) */

void uniq_ptr_impl_array_ctor
 (uniq_ptr_impl *param_1,int *param_2)

{
 undefined4 *puVar1;
 
 tuple_ctor_init_array
 ((tuple *)param_1);
 puVar1 = (undefined4 *)_M_ptr_array((uniq_ptr_impl *)param_1);
 *puVar1 = (undefined4)param_2;
 return;
}



/* Function: _M_ptr @ 00013740 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int []> >::_M_ptr() */

int* uniq_ptr_impl_array_M_ptr
 (uniq_ptr_impl *param_1)

{
 return (int*)get_0u_int_ptr_array((tuple *)param_1);
}



/* Function: get_deleter @ 00013766 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int [], default_delete<int []> >::get_deleter() */

type* get_deleter_array
 (unique_ptr *param_1)

{
 return uniq_ptr_impl_array_M_deleter
 ((uniq_ptr_impl *)param_1);
}



/* Function: operator() @ 0001378c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type
 default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void default_delete_array_operator(default_delete *param_1,int *param_2)

{
 if (param_2 != (int *)0x0) {
 operator_delete__(param_2);
 }
 return;
}



/* Function: get @ 000137be */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* unique_ptr<int [], default_delete<int []> >::get() const */

int* get_array
 (unique_ptr *param_1)

{
 return (int*)uniq_ptr_impl_array_M_ptr
 ((uniq_ptr_impl *)param_1);
}



/* Function: tuple<true,true> @ 000137e4 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* tuple<int*, default_delete<int> >::tuple<true, true>() */

void tuple_ctor_init
 (tuple *this_ptr)

{
 Tuple_impl_0u_ctor
 ((_Tuple_impl *)this_ptr);
 return;
}



/* Function: get_0u_int_ptr_default_delete_int @ 0001380a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tuple_element<0u, tuple<int*, default_delete<int> > >::type& get_0u_int_ptr_default_delete_int(tuple<int*, default_delete<int> >&) */

type * get_0u_int_ptr_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_ptr_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 00013830 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int> >::_M_deleter() */

type* uniq_ptr_impl_M_deleter
 (uniq_ptr_impl *param_1)

{
 return get_1u_int_ptr((tuple *)param_1);
}



/* Function: _M_ptr @ 00013856 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int> >::_M_ptr() const */

int* _M_ptr_func_00
 (uniq_ptr_impl *param_1)

{
 type *ptVar1;
 
 ptVar1 = get_0u_int_ptr((tuple *)param_1);
 if (ptVar1 != (type *)0x0) {
 return (int*)ptVar1;
 }
 return (int*)0;
}



/* Function: tuple<true,true> @ 0001387e */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* tuple<int*, default_delete<int []> >::tuple<true, true>() */

void tuple_ctor_init_array
 (tuple *this_ptr)

{
 Tuple_impl_0u_array_ctor
 ((_Tuple_impl *)this_ptr);
 return;
}



/* Function: get_0u_int_ptr_default_delete_int_array @ 000138a4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tuple_element<0u, tuple<int*, default_delete<int []> > >::type& get_0u_int_ptr_default_delete_int_array(tuple<int*, default_delete<int []> >&) */

type * get_0u_int_ptr_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_ptr_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_deleter @ 000138ca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int []> >::_M_deleter() */

type* uniq_ptr_impl_array_M_deleter
 (uniq_ptr_impl *param_1)

{
 return get_1u_int_ptr_array((tuple *)param_1);
}



/* Function: _M_ptr @ 000138f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* __uniq_ptr_impl<int, default_delete<int []> >::_M_ptr() const */

int* _M_ptr_array
 (uniq_ptr_impl *param_1)

{
 type *ptVar1;
 
 ptVar1 = get_0u_int_ptr_array((tuple *)param_1);
 if (ptVar1 != (type *)0x0) {
 return (int*)ptVar1;
 }
 return (int*)0;
}



/* Function: _Tuple_impl @ 00013918 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int> >::_Tuple_impl() */

void Tuple_impl_0u_ctor
 (_Tuple_impl *this_ptr)

{
 Tuple_impl_1u_ctor(this_ptr);
 Head_base_0u_ctor((_Head_base *)this_ptr);
 return;
}



/* Function: __get_helper_0u_int_ptr_default_delete_int @ 0001394c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& __get_helper<0u, int*, default_delete<int> >(_Tuple_impl<0u, int*,
 default_delete<int> >&) */

int ** __get_helper_0u_int_ptr_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_ptr_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: get_1u_int_ptr_default_delete_int @ 00013970 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tuple_element<1u, tuple<int*, default_delete<int> > >::type& get<1u, int*,
 default_delete<int> >(tuple<int*, default_delete<int> >&) */

type * get_1u_int_ptr_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1u_default_delete_int((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: get_0u_int_ptr_default_delete_int_const @ 00013994 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tuple_element<0u, tuple<int*, default_delete<int> > >::type const& get<0u,
 int*, default_delete<int> >(tuple<int*, default_delete<int> > const&) */

type * get_0u_int_ptr_default_delete_int_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_ptr_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _Tuple_impl @ 000139ba */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int []> >::_Tuple_impl() */

void Tuple_impl_0u_array_ctor
 (_Tuple_impl *this_ptr)

{
 Tuple_impl_1u_array_ctor(this_ptr);
 Head_base_0u_ctor((_Head_base *)this_ptr);
 return;
}



/* Function: __get_helper_0u_int_ptr_default_delete_int_array @ 000139ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& __get_helper<0u, int*, default_delete<int []> >(_Tuple_impl<0u, int*,
 default_delete<int []> >&) */

int ** __get_helper_0u_int_ptr_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_ptr_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: get_1u_int_ptr_default_delete_int_array @ 00013a12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tuple_element<1u, tuple<int*, default_delete<int []> > >::type& get<1u, int*,
 default_delete<int []> >(tuple<int*, default_delete<int []> >&) */

type * get_1u_int_ptr_default_delete_int_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper_1u_default_delete_int_array((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: get_0u_int_ptr_default_delete_int_array_const @ 00013a36 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tuple_element<0u, tuple<int*, default_delete<int []> > >::type const& get<0u,
 int*, default_delete<int []> >(tuple<int*, default_delete<int []> > const&) */

type * get_0u_int_ptr_default_delete_int_array_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0u_int_ptr_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: forward<int*&> @ 00013a5b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& forward<int*&>(remove_reference<int*&>::type&) */

int ** forward_int_ptr(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Tuple_impl @ 00013a72 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<1u, default_delete<int> >::_Tuple_impl() */

void Tuple_impl_1u_ctor(_Tuple_impl *this_ptr)

{
 Head_base_1u_ctor((_Head_base *)this_ptr);
 return;
}



/* Function: _Head_base @ 00013a98 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<0u, int*, false>::_Head_base() */

void Head_base_0u_ctor(_Head_base *this_ptr)

{
 *(undefined4 *)this_ptr = 0;
 return;
}



/* Function: _M_head @ 00013ab5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int> >::_M_head(_Tuple_impl<0u, int*,
 default_delete<int> >&) */

_Head_base* Tuple_impl_0u_M_head(_Tuple_impl *param_1)

{
 return Head_base_0u_M_head((_Head_base *)param_1);
}



/* Function: __get_helper_1u_default_delete_int @ 00013ada */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* default_delete<int>& __get_helper<1u, default_delete<int>>(_Tuple_impl<1u,
 default_delete<int>>&) */

default_delete * __get_helper_1u_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1u_default_delete_int__M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper_0u_int_ptr_default_delete_int @ 00013afe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& __get_helper_0u_int_ptr_default_delete_int(_Tuple_impl<0u, int*,
 default_delete<int> > const&) */

int ** __get_helper_0u_int_ptr_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_ptr_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: _Tuple_impl @ 00013b22 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<1u, default_delete<int []> >::_Tuple_impl() */

void Tuple_impl_1u_array_ctor(_Tuple_impl *this_ptr)

{
 Head_base_1u_array_ctor((_Head_base *)this_ptr);
 return;
}



/* Function: _M_head @ 00013b47 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int []> >::_M_head(_Tuple_impl<0u, int*,
 default_delete<int []> >&) */

_Head_base* Tuple_impl_0u_array_M_head(_Tuple_impl *param_1)

{
 return Head_base_0u_M_head((_Head_base *)param_1);
}



/* Function: __get_helper_1u_default_delete_int_array @ 00013b6c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* default_delete<int []>& __get_helper<1u, default_delete<int
 []>>(_Tuple_impl<1u, default_delete<int []>>&) */

default_delete * __get_helper_1u_default_delete_int_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1u_default_delete_int_array__M_head(param_1);
 return pdVar1;
}



/* Function: __get_helper_0u_int_ptr_default_delete_int_array @ 00013b90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& __get_helper_0u_int_ptr_default_delete_int_array(_Tuple_impl<0u, int*,
 default_delete<int []> > const&) */

int ** __get_helper_0u_int_ptr_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0u_int_ptr_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00013bb4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

void Head_base_0u_ctor_ptr(_Head_base *this_ptr,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = forward_int_ptr((type *)param_1);
 *(int **)this_ptr = *ppiVar1;
 return;
}



/* Function: _Head_base @ 00013be0 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<1u, default_delete<int>, true>::_Head_base() */

void Head_base_1u_ctor(_Head_base *this_ptr)

{
 return;
}



/* Function: _M_head @ 00013bf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<0u, int*, false>::_M_head(_Head_base<0u, int*, false>&) */

_Head_base * Head_base_0u_M_head_impl(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00013c0a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<1u, default_delete<int> >::_M_head(_Tuple_impl<1u,
 default_delete<int> >&) */

_Head_base* Tuple_impl_1u_M_head(_Tuple_impl *param_1)

{
 return Head_base_1u_M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 00013c2e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int> >::_M_head(_Tuple_impl<0u, int*,
 default_delete<int> > const&) */

_Head_base* Tuple_impl_0u_M_head_const(_Tuple_impl *param_1)

{
 return Head_base_0u_M_head((_Head_base *)param_1);
}



/* Function: _Head_base @ 00013c54 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<1u, default_delete<int []>, true>::_Head_base() */

void Head_base_1u_array_ctor(_Head_base *this_ptr)

{
 return;
}



/* Function: _M_head @ 00013c68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<1u, default_delete<int []> >::_M_head(_Tuple_impl<1u,
 default_delete<int []> >&) */

_Head_base* Tuple_impl_1u_array_M_head(_Tuple_impl *param_1)

{
 return Head_base_1u_array_M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 00013c8c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Tuple_impl<0u, int*, default_delete<int []> >::_M_head(_Tuple_impl<0u, int*,
 default_delete<int []> > const&) */

_Head_base* Tuple_impl_0u_array_M_head_const(_Tuple_impl *param_1)

{
 return Head_base_0u_M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 00013cb1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<1u, default_delete<int>, true>::_M_head(_Head_base<1u,
 default_delete<int>, true>&) */

_Head_base * Head_base_1u_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00013cc7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<0u, int*, false>::_M_head(_Head_base<0u, int*, false> const&) */

_Head_base * Head_base_0u_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: _M_head @ 00013cdd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* _Head_base<1u, default_delete<int []>, true>::_M_head(_Head_base<1u,
 default_delete<int []>, true>&) */

_Head_base * Head_base_1u_array_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: ~RTTIDerivedB @ 00013cf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *param_1)

{
 *(undefined ***)param_1 = &PTR__RTTIDerivedB_00018c1c;
 RTTIBase_destructor((RTTIBase *)param_1);
 return;
}



/* Function: ~RTTIDerivedB @ 00013d26 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_delete(RTTIDerivedB *param_1)

{
 RTTIDerivedB_destructor(param_1);
 operator_delete(param_1,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00013d60 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *param_1)

{
 *(undefined ***)param_1 = &PTR__RTTIDerivedA_00018c30;
 RTTIBase_destructor((RTTIBase *)param_1);
 return;
}



/* Function: ~RTTIDerivedA @ 00013d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_delete(RTTIDerivedA *param_1)

{
 RTTIDerivedA_destructor(param_1);
 operator_delete(param_1,4);
 return;
}



/* Function: ~DiamondDerived @ 00013dcc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(DiamondDerived *param_1)

{
 param_1->vtable1 = (undefined4)0x18c5c;
 param_1->vtable3 = (undefined4)0x18c90;
 param_1->vtable2 = (undefined4)0x18c74;
 MiddleB_destructor((MiddleB *)(param_1 + 8));
 MiddleA_destructor((MiddleA *)param_1);
 VirtualBase_destructor((VirtualBase *)(param_1 + 0x10));
 return;
}



/* Function: ~DiamondDerived @ 00013e4e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(DiamondDerived *param_1)

{
 DiamondDerived_destructor((DiamondDerived*)((char*)param_1 + -8));
 return;
}



/* Function: ~DiamondDerived @ 00013e5c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_virtual(DiamondDerived *param_1)

{
 DiamondDerived_destructor((DiamondDerived*)((char*)param_1 + *(int *)(*(int *)param_1 + -0x10)));
 return;
}



/* Function: ~DiamondDerived @ 00013e72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_delete(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1);
 operator_delete(param_1,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00013eab */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(DiamondDerived *param_1)

{
 DiamondDerived_destructor((DiamondDerived*)((char*)param_1 + -8));
 return;
}



/* Function: ~DiamondDerived @ 00013eb6 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_virtual2(DiamondDerived *param_1)

{
 DiamondDerived_destructor((DiamondDerived*)((char*)param_1 + *(int *)(*(int *)param_1 + -0x10)));
 return;
}



/* Function: ~MultiDerived @ 00013eca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *param_1)

{
 *(undefined ***)param_1 = &PTR_funcA_00018d3c;
 *(undefined ***)(param_1 + 8) = &PTR_funcB_00018d54;
 BaseB_destructor((BaseB *)(param_1 + 8));
 BaseA_destructor((BaseA *)param_1);
 return;
}



/* Function: ~MultiDerived @ 00013f19 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *param_1)

{
 MultiDerived_destructor((MultiDerived*)((char*)param_1 + -8));
 return;
}



/* Function: ~MultiDerived @ 00013f24 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_delete(MultiDerived *param_1)

{
 MultiDerived_destructor(param_1);
 operator_delete(param_1,0x10);
 return;
}



/* Function: ~MultiDerived @ 00013f5d */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(MultiDerived *param_1)

{
 MultiDerived_destructor((MultiDerived*)((char*)param_1 + -8));
 return;
}



/* Function: ~Derived @ 00013f68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::~Derived() */

void Derived_destructor(Derived *param_1)

{
 *(undefined ***)param_1 = &PTR_virtual_func_00018d90;
 Base_destructor((Base *)param_1);
 return;
}



/* Function: ~Derived @ 00013f9a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived_destructor_delete(Derived *param_1)

{
 Derived_destructor(param_1);
 operator_delete(param_1,8);
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
