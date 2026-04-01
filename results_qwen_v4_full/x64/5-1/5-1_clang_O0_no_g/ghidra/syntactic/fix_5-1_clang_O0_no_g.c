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
typedef unsigned long ulong;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef void undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void type;

/* Forward declarations for decompiled C++ types */
typedef void (*code)(void);

/* C++ class forward declarations for lambda types */
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct __2 __2;

/* Lambda struct definitions */
struct __0 {
 int dummy;
};

struct __1 {
 int value;
 int *ptr;
};

struct __2 {
 int dummy;
};

/* Function forward declarations */
int template_max_int(int param_1,int param_2);
double template_max_double(double param_1,double param_2);
void template_swap_int(int *param_1,int *param_2);
int test_cpp_lambda___1_operator(__1 *this_ptr,int param_1);
int test_cpp_lambda___0_operator(__0 *this_ptr,int param_1,int param_2);
type * move_unique_ptr_int_default_delete_int(struct unique_ptr *param_1);
undefined8 get_deleter(void);

/* std namespace stub types */
typedef struct Init Init;
typedef struct type_info type_info;
typedef struct tuple {
 int dummy;
} tuple;
typedef struct _Tuple_impl {
 int dummy;
} _Tuple_impl;
typedef struct _Head_base {
 int dummy;
} _Head_base;
typedef struct __uniq_ptr_impl {
 int dummy;
} __uniq_ptr_impl;

/* Additional forward declarations for smart ptr helper functions */
type * forward_test_cpp_smart_ptr_2___2_const(type *param_1);
void tuple_int_test_cpp_smart_ptr_2__tuple(tuple *this_ptr,int **param_1,__2 *param_2);
void _Tuple_impl_0ul_int_test_cpp_smart_ptr_2___Tuple_impl(_Tuple_impl *this_ptr,int **param_1,__2 *param_2);
void _Tuple_impl_1ul_test_cpp_smart_ptr_2___Tuple_impl(__2 *param_1);
void _Head_base_0ul_int_false___Head_base(_Head_base *this_ptr,int **param_1);
void _Head_base_1ul_test_cpp_smart_ptr_2_true___Head_base(__2 *param_1);
int ** std_forward_int(type *param_1);
void __uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl(__uniq_ptr_impl *this_ptr,int *param_1,__2 *param_2);
typedef struct __uniq_ptr_data {
 int dummy;
} __uniq_ptr_data;
typedef struct unique_ptr unique_ptr;
typedef struct default_delete default_delete;

/* unique_ptr struct definition */
struct unique_ptr {
 void *ptr;
 void *deleter;
};

/* Specialized unique_ptr typedefs */
typedef struct unique_ptr unique_ptr_default_delete_int_t;
typedef struct unique_ptr unique_ptr_default_delete_int_tt;
typedef struct unique_ptr unique_ptr_int_array_default_delete_t;
typedef struct unique_ptr unique_ptr_int_array_default_delete_tt;
typedef struct unique_ptr unique_ptr_test_cpp_smart_ptr_2_t;
typedef struct unique_ptr unique_ptr_test_cpp_smart_ptr_2_tt;


/* unique_ptr function declarations */
void unique_ptr_default_delete_int_void(unique_ptr_default_delete_int_t *this_ptr,int *param_1);
int * unique_ptr_default_delete_int_operator_star(unique_ptr_default_delete_int_t *this_ptr);
void unique_ptr_default_delete_int(unique_ptr_default_delete_int_t *this_ptr,unique_ptr_default_delete_int_t *param_1);
void unique_ptr_default_delete_int_destructor(unique_ptr_default_delete_int_t *this_ptr);
void unique_ptr_int_array_default_delete(unique_ptr_int_array_default_delete_t *this_ptr,int *param_1);
long unique_ptr_int_array_default_delete_operator_bracket(unique_ptr_int_array_default_delete_t *this_ptr,ulong param_1);
void unique_ptr_int_array_default_delete_destructor(unique_ptr_int_array_default_delete_t *this_ptr);
void unique_ptr_test_cpp_smart_ptr_2_void(unique_ptr_test_cpp_smart_ptr_2_t *this_ptr,int *param_1,__2 *param_2);
int * unique_ptr_test_cpp_smart_ptr_2_operator_star(unique_ptr_test_cpp_smart_ptr_2_t *this_ptr);
void unique_ptr_test_cpp_smart_ptr_2_destructor(unique_ptr_test_cpp_smart_ptr_2_t *this_ptr);

/* Additional unique_ptr helper function declarations */
void std___uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl(__uniq_ptr_data *this_ptr,int *param_1,__2 *param_2);
type * std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr(__uniq_ptr_impl *this_ptr);
undefined8 std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter(void);
type * move_int_ptr(int **param_1);
void test_cpp_smart_ptr_2_operator_call(__2 *this_ptr,int *param_1);
type * get(unique_ptr *this_ptr);
undefined8 std_unique_ptr_int_test_cpp_smart_ptr_2__get(unique_ptr *this_ptr);
type * std_get_0ul_int_test_cpp_smart_ptr_2__2_const(tuple *param_1);
void std_get_0ul_int_test_cpp_smart_ptr_2__2_tuple(tuple *param_1);
int ** __get_helper_0ul_int_test_cpp_smart_ptr_2__2(_Tuple_impl *param_1);
void std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1);
_Head_base * _Head_base_0ul_int_false__M_head(_Head_base *this_ptr);
type * std_get_1ul_int_test_cpp_smart_ptr_2__2(tuple *param_1);
__2 * std___get_helper_1ul_test_cpp_smart_ptr_2__2(_Tuple_impl *param_1);
void std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1);
_Head_base * _Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(_Head_base *this_ptr);

/* Init struct definition */
struct Init {
 int dummy;
};
void Init_Init(Init *this_ptr);
void Init_Destroy(Init *this_ptr);

/* std::ios_base namespace types */
typedef struct ios_base_Init ios_base_Init;
struct ios_base_Init {
 int dummy;
};

/* C++ class forward declarations */
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

/* C++ class definitions */
struct Base {
 void **vtable;
};
void Base_Base(Base *this_ptr);
void Base_Destroy(Base *this_ptr);
int Base_virtual_func(Base *this_ptr,int param_1);
undefined * Base_getName(void);

struct Derived {
 void **vtable;
 int value;
};
void Derived_Derived(Derived *this_ptr,int param_1);
void Derived_Destroy(Derived *this_ptr);
int Derived_virtual_func(Derived *this_ptr,int param_1);
char * Derived_getName(void);

/* C++ class definitions */
struct SimpleClass {
 int value;
 char name[32];
 int padding;
};
void SimpleClass_SimpleClass(SimpleClass *this_ptr,int param_1,char *param_2);
void SimpleClass_setValue(SimpleClass *this_ptr,int param_1);
undefined4 SimpleClass_getValue(SimpleClass *this_ptr);
long SimpleClass_compute(SimpleClass *this_ptr,int param_1);
undefined8 SimpleClass_getClassID(void);

struct LifecycleClass {
 void* data;
 unsigned long size;
};
void LifecycleClass_LifecycleClass(LifecycleClass *this_ptr,unsigned long param_1);
undefined4 LifecycleClass_getData(LifecycleClass *this_ptr,unsigned long param_1);
undefined4 LifecycleClass_getInstanceCount(void);
void LifecycleClass_Destroy(LifecycleClass *this_ptr);

/* Additional C++ class definitions */
struct MultiDerived {
 void **vtable;
 void **vtable2;
};
void MultiDerived_MultiDerived(MultiDerived *this_ptr);
void MultiDerived_Destroy(MultiDerived *this_ptr);
undefined8 MultiDerived_funcA(void);
undefined8 MultiDerived_funcB(void);

struct DiamondDerived {
 void **vtable;
 void **vtable2;
 void **vtable3;
};
void DiamondDerived_DiamondDerived(DiamondDerived *this_ptr);
void DiamondDerived_Destroy(DiamondDerived *this_ptr);
int DiamondDerived_func(DiamondDerived *this_ptr);

struct VirtualBase {
 void **vtable;
};
void VirtualBase_VirtualBase(VirtualBase *this_ptr);
void VirtualBase_Destroy(VirtualBase *this_ptr);
undefined8 VirtualBase_func(void);

struct MiddleA {
 void **vtable;
};
void MiddleA_MiddleA(MiddleA *this_ptr);
void MiddleA_Destroy(MiddleA *this_ptr);
int MiddleA_func(MiddleA *this_ptr);

struct MiddleB {
 void **vtable;
};
void MiddleB_MiddleB(MiddleB *this_ptr);
void MiddleB_Destroy(MiddleB *this_ptr);
int MiddleB_func(MiddleB *this_ptr);

struct BaseA {
 void **vtable;
};
void BaseA_BaseA(BaseA *this_ptr);
void BaseA_Destroy(BaseA *this_ptr);
undefined8 BaseA_funcA(void);

struct BaseB {
 void **vtable;
};
void BaseB_BaseB(BaseB *this_ptr);
void BaseB_Destroy(BaseB *this_ptr);
undefined8 BaseB_funcB(void);

struct Point {
 int x;
 int y;
};
void Point_Point(Point *this_ptr,int param_1,int param_2);
undefined8 Point_operator_add(Point *this_ptr,Point *param_1);
bool Point_operator_eq(Point *this_ptr,Point *param_1);
void Point_operator_inc(Point *this_ptr);

struct RTTIBase {
 void **vtable;
};
void RTTIBase_RTTIBase(RTTIBase *this_ptr);
void RTTIBase_Destroy(RTTIBase *this_ptr);
undefined8 RTTIBase_getType(void);

struct RTTIDerivedA {
 void **vtable;
};
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr);
void RTTIDerivedA_Destroy(RTTIDerivedA *this_ptr);
undefined8 RTTIDerivedA_getType(void);
undefined8 RTTIDerivedA_derivedA_data(void);

struct RTTIDerivedB {
 void **vtable;
};
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr);
void RTTIDerivedB_Destroy(RTTIDerivedB *this_ptr);
undefined8 RTTIDerivedB_getType(void);
undefined8 RTTIDerivedB_derivedB_data(void);

struct Container_int {
 int data[10];
 int size;
};
void Container_int_Container(Container_int *this_ptr);
void Container_int_push(Container_int *this_ptr,int param_1);
undefined4 Container_int_get(Container_int *this_ptr,int param_1);
undefined4 Container_int_getSize(Container_int *this_ptr);

struct Container_double {
 double data[10];
 int size;
};
void Container_double_Container(Container_double *this_ptr);
void Container_double_push(Container_double *this_ptr,double param_1);
undefined8 Container_double_get(Container_double *this_ptr,int param_1);
undefined4 Container_double_getSize(Container_double *this_ptr);

/* std namespace objects */
extern Init std___ioinit;
#define std__ioinit std___ioinit
extern void* __dso_handle;

/* String constants for printf */
extern const char DAT_00105025[];
extern const char DAT_0010504a[];
extern const char DAT_00105068[];
extern const char DAT_00105084[];
extern const char DAT_001050a0[];
extern const char DAT_001050bc[];
extern const char DAT_001050d9[];
extern const char DAT_001050f5[];
extern const char DAT_00105111[];
extern const char DAT_0010512d[];
extern const char DAT_00105149[];
extern const char DAT_00105166[];
extern const char DAT_00105183[];
extern const char DAT_001051a1[];

/* RTTI type_info extern declarations */
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;

/* RTTI type_info function declarations */
bool std_type_info_operator_eq(type_info *this,type_info *param_1);
char * std_type_info_name(type_info *this);
extern void* __dynamic_cast(void *obj,void *src_type,void *dst_type,int src_ref);

/* Global variables */
int instance_count = 0;

/* External declarations for C++ runtime */
extern void __cxa_atexit(void (*func)(void*),void *arg,void *dso_handle);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception,void *type_info,void *dest);
extern void __cxa_bad_typeid(void);
extern void* __dso_handle;

/* External declarations for standard library */
extern void* memset(void *s,int c,size_t n);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1,const char *s2);
extern int printf(const char *format,...);

/* Operator new/delete declarations */
extern void* operator_new(size_t size);
extern void operator_delete(void *ptr);
extern void* operator_new__(size_t size);
extern void operator_delete__(void *ptr);

/* Ghidra stack reference */
extern char stack0x00000000;

/* Type definitions */
typedef unsigned int uint;
typedef unsigned char byte;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 ((code)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 00102180 */

void __cxx_global_var_init(void)

{
 Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void*))Init_Destroy,&std___ioinit,&__dso_handle);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001021b0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct SimpleClass local_30;
 
 SimpleClass_SimpleClass(&local_30,5,"Test");
 SimpleClass_setValue(&local_30,10);
 iVar1 = SimpleClass_getValue(&local_30);
 iVar2 = SimpleClass_compute(&local_30,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00102310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass local_20;
 int local_c;
 
 local_c = 0;
 LifecycleClass_LifecycleClass(&local_20,5);
 /* try { // try from 00102335 to 00102356 has its CatchHandler @ 0010238b */
 iVar1 = LifecycleClass_getData(&local_20,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = iVar1 + local_c;
 LifecycleClass_Destroy(&local_20);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 001023b0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived local_20 [16];
 Base local_10 [8];
 
 Base_Base(local_10);
 /* try { // try from 001023f1 to 001023fe has its CatchHandler @ 001024ae */
 Derived_Derived(local_20,3);
 /* try { // try from 00102404 to 00102475 has its CatchHandler @ 001024bf */
 iVar1 = Base_virtual_func(local_10,5);
 iVar2 = Derived_virtual_func(local_20,5);
 call_virtual_func(local_10,5);
 iVar3 = 0;
 call_virtual_func((Base *)local_20,5);
 iVar4 = 0;
 Derived_Destroy(local_20);
 Base_Destroy(local_10);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 001024f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 **local_60;
 undefined8 *local_28;
 undefined4 local_20;
 undefined8 *local_18;
 undefined4 local_10;
 
 MultiDerived_MultiDerived((MultiDerived *)&local_28);
 local_20 = 100;
 local_10 = 200;
 local_60 = (undefined8 **)0x0;
 if ((char*)&stack0x00000000 != (char*)0x28) {
 local_60 = &local_18;
 }
 /* try { // try from 00102549 to 00102564 has its CatchHandler @ 001025a9 */
 iVar1 = (int)(*(undefined8 (*)())*local_28)();
 iVar2 = (int)(*(undefined8 (*)())**local_60)();
 MultiDerived_Destroy((MultiDerived *)&local_28);
 return iVar1 + iVar2 + (uint)(&local_28 != local_60);
}



/* Function: test_cpp_diamond_inheritance @ 001025d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 *local_60;
 long local_38;
 undefined4 auStack_30 [10];
 
 DiamondDerived_DiamondDerived((DiamondDerived *)&local_38);
 *(undefined4 *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 0x32;
 local_60 = (undefined8 *)0x0;
 if ((char*)&stack0x00000000 != (char*)0x38) {
 local_60 = (undefined8 *)((long)auStack_30 + (long)*(long *)(local_38 + -0x18) + -8);
 }
 /* try { // try from 0010262a to 00102655 has its CatchHandler @ 0010267f */
 iVar1 = (int)(*(undefined8 (*)())*local_60)();
 *(undefined4 *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 100;
 iVar2 = (int)(*(undefined8 (*)())*local_60)();
 DiamondDerived_Destroy((DiamondDerived *)&local_38);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 byte bVar1;
 int iVar2;
 undefined8 local_20;
 Point local_18 [8];
 Point local_10 [8];
 
 Point_Point(local_10,1,2);
 Point_Point(local_18,3,4);
 local_20 = Point_operator_add(local_10,local_18);
 bVar1 = Point_operator_eq(local_10,local_18);
 Point_operator_inc((Point *)&local_20);
 iVar2 = 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = 0;
 }
 return (int)local_20 + local_20._4_4_ + iVar2;
}



/* Function: test_cpp_template_func @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int local_20;
 int local_1c;
 double local_18;
 int local_c;
 
 local_c = template_max_int(3,7);
 local_18 = template_max_double(2.5,1.5);
 local_1c = 10;
 local_20 = 0x14;
 template_swap_int(&local_1c,&local_20);
 return local_c + (int)local_18 + local_1c + local_20;
}



/* Function: test_cpp_template_class @ 00102790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 double dVar1;
 Container_double local_98 [88];
 int local_40;
 int local_3c;
 Container_int local_38 [48];
 
 Container_int_Container(local_38);
 Container_int_push(local_38,10);
 Container_int_push(local_38,0x14);
 Container_int_push(local_38,0x1e);
 local_3c = Container_int_get(local_38,0);
 local_40 = Container_int_getSize(local_38);
 Container_double_Container(local_98);
 Container_double_push(local_98,3.14);
 dVar1 = (double)Container_double_get(local_98,0);
 return local_3c + local_40 + (int)dVar1;
}



/* Function: test_cpp_lambda @ 00102840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 __0 local_28 [8];
 undefined4 local_20 [2];
 undefined4 *local_18;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 10;
 local_10 = 0x14;
 local_20[0] = 10;
 local_18 = &local_10;
 iVar1 = test_cpp_lambda___1_operator(local_20,3);
 iVar2 = test_cpp_lambda___0_operator(local_28,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 001028a0 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda___1_operator(__1 *this_ptr,int param_1)

{
 **(int **)(this_ptr + 8) = **(int **)(this_ptr + 8) + 5;
 return param_1 * *(int *)this_ptr + **(int **)(this_ptr + 8);
}



/* Function: operator() @ 001028d0 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda___0_operator(__0 *this_ptr,int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: test_cpp_exception @ 001028f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00102912 to 00102921 has its CatchHandler @ 00102927 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 undefined4 *puVar4;
 type *ptVar5;
 unique_ptr local_48 [8];
 __2 local_40 [4];
 int local_3c;
 unique_ptr local_38 [12];
 int local_2c;
 unique_ptr local_28 [24];
 unique_ptr local_10 [8];
 
 piVar3 = (int *)operator_new(4);
 *piVar3 = 100;
 unique_ptr_default_delete_int_void
 ((unique_ptr_default_delete_int *)local_10,piVar3);
 /* try { // try from 00102a7f to 00102a83 has its CatchHandler @ 00102bce */
 puVar4 = (undefined4 *)unique_ptr_default_delete_int_operator_star(local_10);
 *puVar4 = 200;
 ptVar5 = move_unique_ptr_int_default_delete_int((unique_ptr *)local_10);
 unique_ptr_default_delete_int(local_28,(unique_ptr *)ptVar5);
 /* try { // try from 00102ab4 to 00102ad4 has its CatchHandler @ 00102bdf */
 piVar3 = (int *)unique_ptr_default_delete_int_operator_star(local_28);
 local_2c = *piVar3;
 piVar3 = (int *)operator_new__(0x14);
 *piVar3 = 1;
 piVar3[1] = 2;
 piVar3[2] = 3;
 piVar3[3] = 4;
 piVar3[4] = 5;
 unique_ptr_int_array_default_delete
 ((unique_ptr_int_array_default_delete_t *)local_38,piVar3);
 /* try { // try from 00102b15 to 00102b3a has its CatchHandler @ 00102bf0 */
 piVar3 = (int *)unique_ptr_int_array_default_delete_operator_bracket(local_38,2);
 local_3c = *piVar3;
 piVar3 = (int *)operator_new(4);
 *piVar3 = 500;
 unique_ptr_test_cpp_smart_ptr_2_void
 ((unique_ptr_test_cpp_smart_ptr_2_t *)local_48,piVar3,local_40);
 /* try { // try from 00102b6f to 00102b73 has its CatchHandler @ 00102c01 */
 piVar3 = (int *)unique_ptr_test_cpp_smart_ptr_2_operator_star(local_48);
 iVar1 = *piVar3;
 iVar2 = local_2c + local_3c;
 unique_ptr_test_cpp_smart_ptr_2_destructor(local_48);
 unique_ptr_int_array_default_delete_destructor(local_38);
 unique_ptr_default_delete_int_destructor(local_28);
 unique_ptr_default_delete_int_destructor(local_10);
 return iVar2 + iVar1;
}



/* Function: unique_ptr_test_cpp_smart_ptr_2_void @ 00102c40 */

/* unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,
 void>(int*, test_cpp_smart_ptr()::$_2 const&) */

void unique_ptr_test_cpp_smart_ptr_2_void
 (unique_ptr *this_ptr,int *param_1,__2 *param_2)

{
 /* try { // try from 00102c60 to 00102c64 has its CatchHandler @ 00102c70 */
 std___uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl
 ((__uniq_ptr_data *)this_ptr,param_1,param_2);
 return;
}



/* Function: operator_star @ 00102c80 */

/* unique_ptr<int, test_cpp_smart_ptr()::$_2>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
unique_ptr_test_cpp_smart_ptr_2_operator_star
 (unique_ptr *this_ptr)

{
 std_unique_ptr_int_test_cpp_smart_ptr_2__get(this_ptr);
 return;
}



/* Function: unique_ptr_destructor @ 00102cb0 */

/* unique_ptr<int, test_cpp_smart_ptr()::$_2>::~unique_ptr() */

void __thiscall
unique_ptr_test_cpp_smart_ptr_2_destructor
 (unique_ptr *this_ptr)

{
 int **ppiVar1;
 __2 *this_00;
 type *ptVar2;
 
 /* try { // try from 00102cc4 to 00102d09 has its CatchHandler @ 00102d25 */
 ppiVar1 = (int **)std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 ((__uniq_ptr_impl *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter();
 ptVar2 = move_int_ptr(ppiVar1);
 test_cpp_smart_ptr_2_operator_call(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: _M_ptr @ 001033d0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const */

undefined8 __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 (__uniq_ptr_impl *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0ul_int_test_cpp_smart_ptr_2__2_const((tuple *)this_ptr);
 return *(undefined8 *)ptVar1;
}



/* Function: test_cpp_rtti @ 00102d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 RTTIDerivedA *pDerivedA;
 RTTIDerivedB *pDerivedB;
 ulong uVar2;
 char *__s;
 size_t sVar3;
 long local_70;
 long local_60;
 int local_1c;
 
 pDerivedA = (RTTIDerivedA *)operator_new(8);
 memset(pDerivedA,0,8);
 RTTIDerivedA_RTTIDerivedA(pDerivedA);
 pDerivedB = (RTTIDerivedB *)operator_new(8);
 memset(pDerivedB,0,8);
 RTTIDerivedB_RTTIDerivedB(pDerivedB);
 local_1c = 0;
 if (pDerivedA == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator_eq
 (*(type_info **)(*(long *)pDerivedA + -8),(type_info *)&RTTIDerivedA_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_1c = 10;
 }
 if (pDerivedB == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std_type_info_operator_eq
 (*(type_info **)(*(long *)pDerivedB + -8),(type_info *)&RTTIDerivedB_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_1c = local_1c + 0x14;
 }
 if (pDerivedA == (RTTIDerivedA *)0x0) {
 local_60 = 0;
 }
 else {
 local_60 = (long)__dynamic_cast(pDerivedA,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 }
 if (local_60 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_1c = iVar1 + local_1c;
 }
 if (pDerivedB == (RTTIDerivedB *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = (long)__dynamic_cast(pDerivedB,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 }
 if (local_70 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_1c = iVar1 + local_1c;
 }
 if (pDerivedA == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std_type_info_name(*(type_info **)(*(long *)pDerivedA + -8));
 sVar3 = strlen(__s);
 if (pDerivedA != (RTTIDerivedA *)0x0) {
 (**(code **)(*(long *)pDerivedA + 8))();
 }
 if (pDerivedB != (RTTIDerivedB *)0x0) {
 (**(code **)(*(long *)pDerivedB + 8))();
 }
 return local_1c + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 
 printf((const char*)&DAT_00105025);
 uVar1 = test_cpp_member_func();
 printf((const char*)&DAT_0010504a,(ulong)uVar1);
 uVar1 = test_cpp_constructor();
 printf((const char*)&DAT_00105068,(ulong)uVar1);
 uVar1 = test_cpp_virtual_func();
 printf((const char*)&DAT_00105084,(ulong)uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf((const char*)&DAT_001050a0,(ulong)uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf((const char*)&DAT_001050bc,(ulong)uVar1);
 uVar1 = test_cpp_operator_overload();
 printf((const char*)&DAT_001050d9,(ulong)uVar1);
 uVar1 = test_cpp_template_func();
 printf((const char*)&DAT_001050f5,(ulong)uVar1);
 uVar1 = test_cpp_template_class();
 printf((const char*)&DAT_00105111,(ulong)uVar1);
 uVar1 = test_cpp_lambda();
 printf((const char*)&DAT_0010512d,(ulong)uVar1);
 uVar1 = test_cpp_exception();
 printf((const char*)&DAT_00105149,(ulong)uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf((const char*)&DAT_00105166,(ulong)uVar1);
 uVar1 = test_cpp_rtti();
 printf((const char*)&DAT_00105183,(ulong)uVar1);
 return;
}



/* Function: main @ 00103080 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 001030a0 */

/* __uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true,
 false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)
 */

void __thiscall
__uniq_ptr_data_int_test_cpp_smart_ptr_2_true_false___uniq_ptr_impl
 (__uniq_ptr_data *this_ptr,int *param_1,__2 *param_2
 )

{
 __uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl
 ((__uniq_ptr_impl *)this_ptr,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 001030d0 */

/* __uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2
 const&>(int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr_2___uniq_ptr_impl
 (__uniq_ptr_impl *this_ptr,int *param_1,__2 *param_2)

{
 __2 *p_Var1;
 int *local_18;
 __uniq_ptr_impl *local_10;
 
 local_18 = param_1;
 local_10 = this_ptr;
 p_Var1 = forward_test_cpp_smart_ptr_2___2_const((type *)param_2);
 tuple_int_test_cpp_smart_ptr_2__tuple
 ((tuple *)this_ptr,&local_18,p_Var1);
 return;
}



/* Function: forward<test_cpp_smart_ptr()::$_2_const&> @ 00103110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2 const& forward<test_cpp_smart_ptr()::$_2
 const&>(remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&) */

__2 * forward_test_cpp_smart_ptr_2___2_const(type *param_1)

{
 return (__2 *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 00103120 */

/* tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&,
 true>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
tuple_int_test_cpp_smart_ptr_2__tuple
 (tuple *this_ptr,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 __2 *p_Var2;
 
 ppiVar1 = std_forward_int((type *)param_1);
 p_Var2 = (__2 *)forward_test_cpp_smart_ptr_2___2_const((type *)param_2);
 /* try { // try from 0010315d to 00103161 has its CatchHandler @ 0010316d */
 _Tuple_impl_0ul_int_test_cpp_smart_ptr_2___Tuple_impl
 ((_Tuple_impl *)this_ptr,ppiVar1,p_Var2);
 return;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 00103180 */

/* _Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,
 test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
_Tuple_impl_0ul_int_test_cpp_smart_ptr_2___Tuple_impl
 (_Tuple_impl *this_ptr,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 
 forward_test_cpp_smart_ptr_2___2_const((type *)param_2);
 _Tuple_impl_1ul_test_cpp_smart_ptr_2___Tuple_impl((_Head_base *)this_ptr);
 ppiVar1 = std_forward_int((type *)param_1);
 _Head_base_0ul_int_false___Head_base((_Head_base *)this_ptr,ppiVar1);
 return;
}



/* Function: _Tuple_impl @ 001031e0 */

/* _Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&)
 */

void _Tuple_impl_1ul_test_cpp_smart_ptr_2___Tuple_impl(__2 *param_1)

{
 _Head_base_1ul_test_cpp_smart_ptr_2_true___Head_base(param_1);
 return;
}



/* Function: _Head_base @ 00103210 */

/* _Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2
 const&) */

void _Head_base_1ul_test_cpp_smart_ptr_2_true___Head_base(__2 *param_1)

{
 return;
}



/* Function: _M_ptr @ 00103220 */

/* __uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() */

undefined8 __thiscall
__uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 (__uniq_ptr_impl *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0ul_int_test_cpp_smart_ptr_2__2_tuple((tuple *)this_ptr);
 return *(undefined8 *)ptVar1;
}



/* Function: get_deleter @ 00103240 */

/* unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter() */

undefined8 unique_ptr_int_test_cpp_smart_ptr_2_get_deleter(void)

{
 undefined8 uVar1;
 
 /* try { // try from 00103250 to 00103254 has its CatchHandler @ 00103268 */
 uVar1 = std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter();
 return uVar1;
}



/* Function: operator() @ 00103270 */

/* test_cpp_smart_ptr()::$_2::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall test_cpp_smart_ptr_2___2_operator_call(__2 *this_ptr,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 001032b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<0ul, int*,
 test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std_get_0ul_int_test_cpp_smart_ptr_2__2_tuple(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_test_cpp_smart_ptr_2__2((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 001032d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2>&) */

int ** std___get_helper_0ul_int_test_cpp_smart_ptr_2__2(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 001032f0 */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2>&) */

void std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_deleter @ 00103310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter() */

type * std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_deleter_func(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = std_get_1ul_int_test_cpp_smart_ptr_2__2(param_1);
 return ptVar1;
}



/* Function: get<1ul,int*,test_cpp_smart_ptr()::$_2> @ 00103330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<1ul, int*,
 test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std_get_1ul_int_test_cpp_smart_ptr_2__2(tuple *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = std___get_helper_1ul_test_cpp_smart_ptr_2__2((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: __get_helper<1ul,test_cpp_smart_ptr()::$_2> @ 00103350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2& std::__get_helper<1ul,
 test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&) */

__2 * std___get_helper_1ul_test_cpp_smart_ptr_2__2(_Tuple_impl *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = (__2 *)std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(param_1);
 return p_Var1;
}



/* Function: _M_head @ 00103370 */

/* std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1ul,
 test_cpp_smart_ptr()::$_2>&) */

void std__Tuple_impl_1ul_test_cpp_smart_ptr_2__M_head(_Tuple_impl *param_1)

{
 _Head_base_1ul_test_cpp_smart_ptr_2_true__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00103390 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1ul,
 test_cpp_smart_ptr()::$_2, true>&) */

_Head_base * _Head_base_1ul_test_cpp_smart_ptr_2_true__M_head(_Head_base *this_ptr)

{
 return this_ptr;
}



/* Function: get @ 001033a0 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const */

undefined8 __thiscall
std_unique_ptr_int_test_cpp_smart_ptr_2__get(unique_ptr *this_ptr)

{
 undefined8 uVar1;
 
 /* try { // try from 001033b0 to 001033b4 has its CatchHandler @ 001033c8 */
 uVar1 = std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 ((__uniq_ptr_impl *)this_ptr);
 return uVar1;
}



/* Function: _M_ptr @ 001033d0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const */

undefined8 __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr_2__M_ptr
 (__uniq_ptr_impl *this_ptr)

{
 type *ptVar1;
 
 ptVar1 = std_get_0ul_int_test_cpp_smart_ptr_2__2_const((tuple *)this_ptr);
 return *(undefined8 *)ptVar1;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 00103410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2> const&) */

int ** __get_helper_0ul_int_test_cpp_smart_ptr_2__2_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head_const(param_1);
 return ppiVar1;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 00103410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type const& std::get<0ul, int*,
 test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&) */

type * std_get_0ul_int_test_cpp_smart_ptr_2__2_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper_0ul_int_test_cpp_smart_ptr_2__2_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: _M_head @ 00103430 */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2> const&) */

void std__Tuple_impl_0ul_int_test_cpp_smart_ptr_2__M_head_const(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false__M_head_const((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00103430 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * _Head_base_0ul_int_false__M_head_const(_Head_base *this_ptr)

{
 return this_ptr;
}



/* Function: SimpleClass @ 00103450 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this_ptr,int param_1,char *param_2)

{
 *(int *)this_ptr = param_1;
 strncpy((char *)(this_ptr + 4),param_2,0x1f);
 this_ptr[0x23] = (SimpleClass)0x0;
 return;
}



/* Function: setValue @ 00103490 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this_ptr,int param_1)

{
 *(int *)this_ptr = param_1;
 return;
}



/* Function: getValue @ 001034b0 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this_ptr)

{
 return *(undefined4 *)this_ptr;
}



/* Function: compute @ 001034c0 */

/* SimpleClass::compute(int) const */

long __thiscall SimpleClass::compute(SimpleClass *this_ptr,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this_ptr;
 sVar2 = strlen((char *)(this_ptr + 4));
 return (long)(iVar1 * param_1) + sVar2;
}



/* Function: getClassID @ 00103500 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass::getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103510 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this_ptr,ulong param_1)

{
 undefined1 auVar1 [16];
 ulong uVar2;
 void *pvVar3;
 ulong local_20;
 
 *(ulong *)(this_ptr + 8) = param_1;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_1;
 uVar2 = SUB168(auVar1 * ZEXT816(4),0);
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar2 = 0xffffffffffffffff;
 }
 pvVar3 = operator_new__(uVar2);
 *(void **)this_ptr = pvVar3;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 *(int *)(*(long *)this_ptr + local_20 * 4) = (int)local_20 * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 001035b0 */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this_ptr,ulong param_1)

{
 undefined4 local_24;
 
 if (param_1 < *(ulong *)(this_ptr + 8)) {
 local_24 = *(undefined4 *)(*(long *)this_ptr + param_1 * 4);
 }
 else {
 local_24 = 0xffffffff;
 }
 return local_24;
}



/* Function: getInstanceCount @ 00103600 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 00103610 */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this_ptr)
{
 if (*(void **)this_ptr != (void *)0x0) {
 operator_delete__(*(void **)this_ptr);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 00103650 */

/* Base::Base() */

void __thiscall Base::Base(Base *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_virtual_func_00108878;
 return;
}



/* Function: Derived @ 00103670 */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this_ptr,int param_1)

{
 Base::Base((Base *)this_ptr);
 *(undefined ***)this_ptr = &PTR_virtual_func_001088b8;
 *(int *)(this_ptr + 8) = param_1;
 return;
}



/* Function: virtual_func @ 001036b0 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 001036d0 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 8);
}



/* Function: ~Derived @ 001036f0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this_ptr)

{
 Base::~Base((Base *)this_ptr);
 return;
}



/* Function: ~Base @ 00103710 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this_ptr)

{
 return;
}



/* Function: MultiDerived @ 00103720 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this_ptr)

{
 BaseA::BaseA((BaseA *)this_ptr);
 BaseB::BaseB((BaseB *)(this_ptr + 0x10));
 *(undefined ***)this_ptr = &PTR_funcA_00108900;
 *(undefined ***)(this_ptr + 0x10) = &PTR_funcB_00108930;
 return;
}



/* Function: ~MultiDerived @ 00103770 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this_ptr)

{
 BaseB::~BaseB((BaseB *)(this_ptr + 0x10));
 BaseA::~BaseA((BaseA *)this_ptr);
 return;
}



/* Function: DiamondDerived @ 001037a0 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this_ptr)

{
 VirtualBase::VirtualBase((VirtualBase *)(this_ptr + 0x20));
 MiddleA::MiddleA((MiddleA *)this_ptr);
 MiddleB::MiddleB((MiddleB *)(this_ptr + 0x10));
 *(undefined8 *)this_ptr = 0x108a08;
 *(undefined8 *)(this_ptr + 0x20) = 0x108a70;
 *(undefined8 *)(this_ptr + 0x10) = 0x108a38;
 return;
}



/* Function: ~DiamondDerived @ 00103830 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this_ptr)

{
 MiddleB::~MiddleB((MiddleB *)(this_ptr + 0x10));
 MiddleA::~MiddleA((MiddleA *)this_ptr);
 VirtualBase::~VirtualBase((VirtualBase *)(this_ptr + 0x20));
 return;
}



/* Function: Point @ 00103870 */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this_ptr,int param_1,int param_2)

{
 *(int *)this_ptr = param_1;
 *(int *)(this_ptr + 4) = param_2;
 return;
}



/* Function: operator+ @ 00103890 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point::operator+(Point *this_ptr,Point *param_1)

{
 undefined8 local_10;
 
 Point((Point *)&local_10,*(int *)this_ptr + *(int *)param_1,*(int *)(this_ptr + 4) + *(int *)(param_1 + 4)
 );
 return local_10;
}



/* Function: operator== @ 001038d0 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point::operator==(Point *this_ptr,Point *param_1)

{
 bool local_19;
 
 local_19 = false;
 if (*(int *)this_ptr == *(int *)param_1) {
 local_19 = *(int *)(this_ptr + 4) == *(int *)(param_1 + 4);
 }
 return local_19;
}



/* Function: operator++ @ 00103920 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point::operator++(Point *this_ptr)

{
 *(int *)this_ptr = *(int *)this_ptr + 1;
 *(int *)(this_ptr + 4) = *(int *)(this_ptr + 4) + 1;
 return;
}



/* Function: template_max_int @ 00103940 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 int local_14;
 
 local_14 = param_2;
 if (param_2 < param_1) {
 local_14 = param_1;
 }
 return local_14;
}



/* Function: template_max_double @ 00103970 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 double local_20;
 
 local_20 = param_2;
 if (param_2 < param_1) {
 local_20 = param_1;
 }
 return local_20;
}



/* Function: template_swap_int @ 001039b0 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001039e0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00103a00 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this_ptr,int param_1)

{
 int iVar1;
 
 if (*(int *)(this_ptr + 0x28) < 10) {
 iVar1 = *(int *)(this_ptr + 0x28);
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00103a40 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this_ptr,int param_1)

{
 undefined4 local_c;
 
 if ((param_1 < 0) || (*(int *)(this_ptr + 0x28) <= param_1)) {
 local_c = 0;
 }
 else {
 local_c = *(undefined4 *)(this_ptr + (long)param_1 * 4);
 }
 return local_c;
}



/* Function: getSize @ 00103a90 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 00103ab0 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00103ad0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this_ptr,double param_1)

{
 int iVar1;
 
 if (*(int *)(this_ptr + 0x50) < 10) {
 iVar1 = *(int *)(this_ptr + 0x50);
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00103b10 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this_ptr,int param_1)

{
 undefined8 local_10;
 
 if ((param_1 < 0) || (*(int *)(this_ptr + 0x50) <= param_1)) {
 local_10 = 0;
 }
 else {
 local_10 = *(undefined8 *)(this_ptr + (long)param_1 * 8);
 }
 return local_10;
}



/* Function: getSize @ 00103b70 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: unique_ptr_default_delete_int_void @ 00103b90 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
 */

void __thiscall
unique_ptr_default_delete_int_void
 (unique_ptr_default_delete_int *this_ptr,int *param_1)

{
 /* try { // try from 00103ba8 to 00103bac has its CatchHandler @ 00103bb8 */
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this_ptr,param_1);
 return;
}



/* Function: operator_star @ 00103bc0 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
unique_ptr_default_delete_int_operator_star
 (unique_ptr_default_delete_int *this_ptr)

{
 get(this_ptr);
 return;
}



/* Function: move_unique_ptr_int_default_delete_int @ 00103bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
 std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
 std::default_delete<int> >&) */

type * move_unique_ptr_int_default_delete_int(unique_ptr_default_delete_int *param_1)

{
 return (type *)param_1;
}



/* Function: unique_ptr_default_delete_int @ 00103c00 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
 std::default_delete<int> >&&) */

void __thiscall
unique_ptr_default_delete_int
 (unique_ptr_default_delete_int *this_ptr,unique_ptr_default_delete_int *param_1)

{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this_ptr,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: unique_ptr_int_array_default_delete @ 00103c30 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

void __thiscall
unique_ptr_int_array_default_delete
 (unique_ptr *this_ptr,int *param_1)

{
 /* try { // try from 00103c48 to 00103c4c has its CatchHandler @ 00103c58 */
 std___uniq_ptr_data_int_default_delete_int_array_true_true___uniq_ptr_impl
 ((__uniq_ptr_data *)this_ptr,param_1);
 return;
}



/* Function: operator_bracket @ 00103c60 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
unique_ptr_int_array_default_delete_operator_bracket
 (unique_ptr *this_ptr,ulong param_1)

{
 long lVar1;
 
 lVar1 = get(this_ptr);
 return lVar1 + param_1 * 4;
}



/* Function: unique_ptr_int_array_destructor @ 00103ca0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
unique_ptr_int_array_default_delete_destructor
 (unique_ptr *this_ptr)

{
 long *plVar1;
 default_delete<int[]> *this_00;
 
 plVar1 = (long *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this_ptr);
 if (*plVar1 != 0) {
 this_00 = (default_delete<int[]> *)get_deleter(this_ptr);
 /* try { // try from 00103cde to 00103ce2 has its CatchHandler @ 00103cfe */
 default_delete<int[]>::operator()(this_00,(int *)*plVar1);
 }
 *plVar1 = 0;
 return;
}



/* Function: unique_ptr_default_delete_int_destructor @ 00103d10 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
unique_ptr_default_delete_int_destructor
 (unique_ptr *this_ptr)

{
 int **ppiVar1;
 default_delete *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)std___uniq_ptr_impl_int_default_delete_int__M_ptr
 ((__uniq_ptr_impl *)this_ptr);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete *)get_deleter(this_ptr);
 ptVar2 = std_move_int_ptr(ppiVar1);
 /* try { // try from 00103d58 to 00103d5c has its CatchHandler @ 00103d78 */
 std_default_delete_int_operator_call(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: RTTIDerivedA @ 00103d80 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIBase::RTTIBase((RTTIBase *)this_ptr);
 *(undefined ***)this_ptr = &PTR__RTTIDerivedA_00108d50;
 return;
}



/* Function: RTTIDerivedB @ 00103dc0 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIBase::RTTIBase((RTTIBase *)this_ptr);
 *(undefined ***)this_ptr = &PTR__RTTIDerivedB_00108da0;
 return;
}



/* Function: operator== @ 00103e00 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
 int iVar1;
 bool local_29;
 bool local_19;
 
 local_19 = true;
 if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
 local_29 = false;
 if (**(char **)(this + 8) != '*') {
 iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 local_29 = iVar1 == 0;
 }
 local_19 = local_29;
 }
 return local_19;
}



/* Function: derivedA_data @ 00103e80 */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA::derivedA_data(void)

{
 return 100;
}



/* Function: derivedB_data @ 00103e90 */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB::derivedB_data(void)

{
 return 200;
}



/* Function: name @ 00103ea0 */

/* std::type_info::name() const */

long __thiscall std::type_info::name(type_info *this)

{
 long local_20;
 
 if (**(char **)(this + 8) == '*') {
 local_20 = *(long *)(this + 8) + 1;
 }
 else {
 local_20 = *(long *)(this + 8);
 }
 return local_20;
}



/* Function: getName @ 00103ef0 */

/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_001051a1;
}



/* Function: ~Base @ 00103f10 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this_ptr)

{
 ~Base(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getName @ 00103f40 */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 00103f60 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this_ptr)

{
 ~Derived(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: BaseA @ 00103f90 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcA_001089b0;
 return;
}



/* Function: BaseB @ 00103fb0 */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_funcB_001089d8;
 return;
}



/* Function: funcA @ 00103fd0 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00103fe0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this_ptr)

{
 ~MultiDerived(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 00104010 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00104020 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this_ptr)

{
 funcB();
 return;
}



/* Function: ~MultiDerived @ 00104040 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: ~MultiDerived @ 00104060 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: funcA @ 00104080 */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00104090 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this_ptr)

{
 return;
}



/* Function: ~BaseA @ 001040a0 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this_ptr)

{
 ~BaseA(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 001040d0 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 001040e0 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this_ptr)

{
 return;
}



/* Function: ~BaseB @ 001040f0 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this_ptr)

{
 ~BaseB(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: VirtualBase @ 00104120 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00108c38;
 return;
}



/* Function: MiddleA @ 00104140 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this_ptr)

{
 undefined8 *param_1;
 
 *(undefined8 *)this_ptr = *param_1;
 *(undefined8 *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) = param_1[1];
 return;
}



/* Function: MiddleB @ 00104170 */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this_ptr)

{
 undefined8 *param_1;
 
 *(undefined8 *)this_ptr = *param_1;
 *(undefined8 *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) = param_1[1];
 return;
}



/* Function: func @ 001041a0 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 001041c0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this_ptr)

{
 ~MiddleA(this_ptr);
 VirtualBase::~VirtualBase((VirtualBase *)(this_ptr + 0x10));
 return;
}



/* Function: ~MiddleA @ 00104200 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this_ptr)

{
 ~MiddleA(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00104230 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this_ptr)

{
 func(this_ptr + *(long *)(*(long *)this_ptr + -0x18));
 return;
}



/* Function: ~MiddleA @ 00104250 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 00104270 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00104290 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 001042b0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this_ptr)

{
 ~MiddleB(this_ptr);
 VirtualBase::~VirtualBase((VirtualBase *)(this_ptr + 0x10));
 return;
}



/* Function: ~MiddleB @ 001042f0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this_ptr)

{
 ~MiddleB(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00104320 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this_ptr)

{
 func(this_ptr + *(long *)(*(long *)this_ptr + -0x18));
 return;
}



/* Function: ~MiddleB @ 00104340 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 00104360 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00104380 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 001043a0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this_ptr)

{
 ~DiamondDerived(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 001043d0 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this_ptr)

{
 func(this_ptr + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 001043f0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104410 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: func @ 00104430 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this_ptr)

{
 func(this_ptr + *(long *)(*(long *)this_ptr + -0x18));
 return;
}



/* Function: ~DiamondDerived @ 00104450 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 00104470 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00104490 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 001044a0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this_ptr)

{
 return;
}



/* Function: ~VirtualBase @ 001044b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this_ptr)

{
 ~VirtualBase(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: ~MiddleA @ 001044e0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this_ptr)

{
 return;
}



/* Function: ~MiddleB @ 001044f0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00104500 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this_ptr)

{
 MiddleB::~MiddleB((MiddleB *)(this_ptr + 0x10));
 MiddleA::~MiddleA((MiddleA *)this_ptr);
 return;
}



/* Function: __uniq_ptr_data @ 00104550 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104580 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined8 *puVar2;
 
 ptVar1 = move<std::tuple<int*,std::default_delete<int>>&>((tuple *)param_1);
 tuple<int*,std::default_delete<int>>::tuple
 ((tuple<int*,std::default_delete<int>> *)this,(tuple *)ptVar1);
 /* try { // try from 001045b1 to 001045b5 has its CatchHandler @ 001045d0 */
 puVar2 = (undefined8 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 001045e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
 >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: tuple @ 001045f0 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
 (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this,(_Tuple_impl *)param_1);
 return;
}



/* Function: _M_ptr @ 00104620 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 get<0ul,int*,std::default_delete<int>>((tuple *)this);
 return;
}



/* Function: __clang_call_terminate @ 00104640 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 std::terminate();
}



/* Function: _Tuple_impl @ 00104650 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&&) */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this,_Tuple_impl *param_1)

{
 _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
 *(undefined8 *)this = *(undefined8 *)param_1;
 return;
}



/* Function: _Tuple_impl @ 00104690 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1ul,
 std::default_delete<int> >&&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
 return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 001046a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 001046c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 001046e0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104700 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: RTTIBase @ 00104710 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00108d78;
 return;
}



/* Function: ~RTTIDerivedA @ 00104730 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 RTTIBase::~RTTIBase((RTTIBase *)this_ptr);
 return;
}



/* Function: ~RTTIDerivedA @ 00104750 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 ~RTTIDerivedA(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00104780 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00104790 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this_ptr)

{
 return;
}



/* Function: ~RTTIBase @ 001047a0 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this_ptr)

{
 ~RTTIBase(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 001047d0 */

/* RTTIBase::getType() const */

undefined8 RTTIBase::getType(void)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 001047e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 RTTIBase::~RTTIBase((RTTIBase *)this_ptr);
 return;
}



/* Function: ~RTTIDerivedB @ 00104800 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 ~RTTIDerivedB(this_ptr);
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00104830 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 00104840 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104870 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,std::default_delete<int>>::tuple<true,true>
 ((tuple<int*,std::default_delete<int>> *)this);
 puVar1 = (undefined8 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 001048b0 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
 (tuple<int*,std::default_delete<int>> *this)

{
 /* try { // try from 001048c0 to 001048c4 has its CatchHandler @ 001048d0 */
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this);
 return;
}



/* Function: _Tuple_impl @ 001048e0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this)

{
 _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
 _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
 return;
}



/* Function: _Tuple_impl @ 00104910 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)

{
 _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
 return;
}



/* Function: _Head_base @ 00104930 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base<0ul,int*,false> *this)

{
 *(undefined8 *)this = 0;
 return;
}



/* Function: _Head_base @ 00104950 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)

{
 return;
}



/* Function: get_deleter @ 00104960 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
 (unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104970 to 00104974 has its CatchHandler @ 00104988 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 return uVar1;
}



/* Function: operator() @ 00104990 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: move<int*&> @ 001049d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
 return (type *)param_1;
}



/* Function: _M_deleter @ 001049e0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 get<1ul,int*,std::default_delete<int>>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 00104a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1ul,int*,std::default_delete<int>>(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper<1ul,std::default_delete<int>>((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 00104a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
 std::default_delete<int>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int>>(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00104a40 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104a60 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00104a70 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104a80 to 00104a84 has its CatchHandler @ 00104a98 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104aa0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,std::default_delete<int>>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
 int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 00104ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104b00 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104b20 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __uniq_ptr_impl @ 00104b30 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104b60 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,std::default_delete<int[]>>::tuple<true,true>
 ((tuple<int*,std::default_delete<int[]>> *)this);
 puVar1 = (undefined8 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 00104ba0 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
 (tuple<int*,std::default_delete<int[]>> *this)

{
 /* try { // try from 00104bb0 to 00104bb4 has its CatchHandler @ 00104bc0 */
 _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int[]>> *)this);
 return;
}



/* Function: _M_ptr @ 00104bd0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
 return;
}



/* Function: _Tuple_impl @ 00104bf0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int[]>> *this)

{
 _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
 _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
 return;
}



/* Function: _Tuple_impl @ 00104c20 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)

{
 _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
 return;
}



/* Function: _Head_base @ 00104c40 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)

{
 return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104c90 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: get_deleter @ 00104cb0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104cc0 to 00104cc4 has its CatchHandler @ 00104cd8 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: operator() @ 00104ce0 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
 []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: _M_deleter @ 00104d20 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 get<1ul,int*,std::default_delete<int[]>>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 00104d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper<1ul,std::default_delete<int[]>>((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 00104d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
 []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00104d80 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int []> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104da0 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00104db0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104dc0 to 00104dc4 has its CatchHandler @ 00104dd8 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104de0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
 std::get<0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
 const&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
 int*, std::default_delete<int []> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104e40 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: forward<int*&> @ 00104e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std_forward_int(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00104e70 */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
_Head_base_0ul_int_false___Head_base(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 214 */
