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

/* Additional type definitions for decompiled code */
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef void *type;
typedef void code;
typedef struct undefined undefined;
typedef unsigned long ulong;
typedef unsigned int uint;

/* Forward declarations for C++ types */
struct type_info; typedef struct type_info type_info;
struct ios_base; typedef struct ios_base ios_base;
struct Init; typedef struct Init Init;
struct RTTIBase; typedef struct RTTIBase RTTIBase;
struct Container; typedef struct Container Container;
struct Container_int; typedef struct Container_int Container_int;
struct Container_double; typedef struct Container_double Container_double;
struct Base; typedef struct Base Base;
struct MultiDerived; typedef struct MultiDerived MultiDerived;
struct Point; typedef struct Point Point;
struct _Head_base; typedef struct _Head_base _Head_base;
struct SimpleClass; typedef struct SimpleClass SimpleClass;
struct default_delete; typedef struct default_delete default_delete;
struct default_delete_int;
struct default_delete_int_array;
struct __0; typedef struct __0 __0;
struct __1; typedef struct __1 __1;
struct __2; typedef struct __2 __2;
struct __uniq_ptr_impl; typedef struct __uniq_ptr_impl __uniq_ptr_impl;
struct __uniq_ptr_data; typedef struct __uniq_ptr_data __uniq_ptr_data;
struct tuple; typedef struct tuple tuple;
struct unique_ptr; typedef struct unique_ptr unique_ptr;
struct _Tuple_impl; typedef struct _Tuple_impl _Tuple_impl;
struct Derived; typedef struct Derived Derived;
struct DiamondDerived; typedef struct DiamondDerived DiamondDerived;
struct LifecycleClass; typedef struct LifecycleClass LifecycleClass;
struct RTTIDerivedA; typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedB; typedef struct RTTIDerivedB RTTIDerivedB;
struct BaseA; typedef struct BaseA BaseA;
struct BaseB; typedef struct BaseB BaseB;
struct VirtualBase; typedef struct VirtualBase VirtualBase;
struct MiddleA; typedef struct MiddleA MiddleA;
struct MiddleB; typedef struct MiddleB MiddleB;

/* Template class forward declarations */
template<typename T> struct Container;

/* Template function forward declarations */
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* Container<int> member functions (decompiled names) */
extern void Container_int_constructor(Container_int *);
extern void Container_int_push(Container_int *, int);
extern int Container_int_get(Container_int *, int);
extern int Container_int_getSize(Container_int *);

/* Container<double> member functions (decompiled names) */
extern void Container_double_constructor(Container_double *);
extern void Container_double_push(Container_double *, double);
extern double Container_double_get(Container_double *, int);
extern int Container_double_getSize(Container_double *);

/* ios_base::Init functions */
extern void ios_base_Init_constructor(Init *);
extern void ios_base_Init_destructor(Init *);

/* RTTI type info functions */
extern bool type_info_operator_eq(type_info *, type_info *);

/* RTTIDerivedA class member functions (decompiled names) */
extern void RTTIDerivedA_constructor(RTTIDerivedA *);
extern int RTTIDerivedA_derivedA_data(void);

/* RTTIDerivedB class member functions (decompiled names) */
extern void RTTIDerivedB_constructor(RTTIDerivedB *);
extern int RTTIDerivedB_derivedB_data(void);

/* unique_ptr member functions (decompiled names) */

/* Additional unique_ptr function declarations for decompiled names */
extern void unique_ptr_int_default_delete_int_constructor(unique_ptr *, int *);
extern void unique_ptr_int_default_delete_int_destructor(unique_ptr *);
extern type *unique_ptr_int_default_delete_int_operator_deref(unique_ptr *);
extern void unique_ptr_int_default_delete_int_move_constructor(unique_ptr *, unique_ptr *);
extern type *move_unique_ptr(unique_ptr *);
extern void unique_ptr_int_array_default_delete_int_array_constructor(unique_ptr *, int *);
extern void unique_ptr_int_array_default_delete_int_array_destructor(unique_ptr *);
extern type *unique_ptr_int_array_default_delete_int_array_operator_subscript(unique_ptr *, ulong);
extern void unique_ptr_int_lambda2_constructor(unique_ptr *, int *, __2 *);
extern void unique_ptr_int_lambda2_destructor(unique_ptr *);
extern type *unique_ptr_int_lambda2_operator_deref(unique_ptr *);

/* Lambda2 helper function forward declarations */
extern int ** get_helper_0_int_lambda2(_Tuple_impl *param_1);
extern __2 * get_helper_1_lambda2(_Tuple_impl *param_1);
extern int ** get_helper_0_int_lambda2_const(_Tuple_impl *param_1);
extern void _Head_base_1ul_test_cpp_smart_ptr___2_true___Head_base(_Head_base *param_1);
extern void _Head_base_1ul_test_cpp_smart_ptr___2_true___M_head(_Head_base *param_1);
extern void _Tuple_impl_0ul_int_test_cpp_smart_ptr___2___M_head(_Head_base *param_1);
extern void _Head_base_0ul_int_false___M_head(_Head_base *param_1);
extern void _Tuple_impl_1ul_test_cpp_smart_ptr___2___M_head(_Head_base *param_1);
extern int ** std___get_helper_0ul_int_default_delete_int(_Tuple_impl *param_1);
extern default_delete * std___get_helper_1ul_default_delete_int(_Tuple_impl *param_1);
extern int ** std___get_helper_0ul_int_default_delete_int_array_(_Tuple_impl *param_1);
extern default_delete * std___get_helper_1ul_default_delete_int_array(_Tuple_impl *param_1);

/* Additional tuple helper function forward declarations */
extern int ** __get_helper_0ul_int_default_delete_int(_Tuple_impl *param_1);
extern default_delete * __get_helper_1ul_default_delete_int(_Tuple_impl *param_1);
extern int ** __get_helper_0ul_int_default_delete_int_array(_Tuple_impl *param_1);
extern default_delete * __get_helper_1ul_default_delete_int_array(_Tuple_impl *param_1);
extern _Head_base * _Tuple_impl_0ul_int_default_delete_int___M_head(_Tuple_impl *param_1);
extern void _Head_base_1ul_default_delete_int_true___Head_base(void);
extern _Head_base * _Head_base_1ul_default_delete_int_true___M_head(_Head_base *param_1);
extern _Head_base * _Tuple_impl_0ul_int_default_delete_int_array___M_head(_Tuple_impl *param_1);
extern void _Head_base_1ul_default_delete_int_array_true___Head_base(void);
extern _Head_base * _Head_base_1ul_default_delete_int_array_true___M_head(_Head_base *param_1);
extern _Head_base * _Tuple_impl_1ul_default_delete_int_array___M_head(_Tuple_impl *param_1);
extern _Head_base * _Tuple_impl_1ul_default_delete_int___M_head(_Tuple_impl *param_1);
extern type *unique_ptr_int_default_delete_int_operator_deref(unique_ptr *);
extern void unique_ptr_int_default_delete_int_move_constructor(unique_ptr *, unique_ptr *);
extern type *move_unique_ptr(unique_ptr *);
extern void unique_ptr_int_array_default_delete_int_array_constructor(unique_ptr *, int *);
extern void unique_ptr_int_array_default_delete_int_array_destructor(unique_ptr *);
extern type *unique_ptr_int_array_default_delete_int_array_operator_subscript(unique_ptr *, ulong);
extern void unique_ptr_int_lambda2_constructor(unique_ptr *, int *, __2 *);
extern void unique_ptr_int_lambda2_destructor(unique_ptr *);
extern type *unique_ptr_int_lambda2_operator_deref(unique_ptr *);

/* SimpleClass member functions (decompiled names) */
extern void SimpleClass_constructor(SimpleClass *, int, char *);
extern void setValue_SimpleClass(SimpleClass *, int);
extern int getValue_SimpleClass(SimpleClass *);
extern long compute_SimpleClass(SimpleClass *, int);
extern long SimpleClass_getClassID(void);

/* LifecycleClass member functions (decompiled names) */
extern void LifecycleClass_constructor(LifecycleClass *, ulong);
extern void LifecycleClass_destructor(LifecycleClass *);
extern int LifecycleClass_getData(LifecycleClass *, ulong);
extern uint LifecycleClass_getInstanceCount(void);

/* Base class member functions (decompiled names) */
extern void Base_constructor(Base *);
extern void Base_destructor(Base *);
extern int Base_virtual_func(Base *, int);

/* Derived class member functions (decompiled names) */
extern void Derived_constructor(Derived *, int);
extern int Derived_virtual_func(Derived *, int);
extern void Derived_destructor(Derived *);

/* MultiDerived class member functions (decompiled names) */
extern void MultiDerived_constructor(MultiDerived *);
extern void MultiDerived_destructor(MultiDerived *);

/* DiamondDerived class member functions (decompiled names) */
extern void DiamondDerived_constructor(DiamondDerived *);
extern void DiamondDerived_destructor(DiamondDerived *);

/* Point class member functions (decompiled names) */
extern void Point_constructor(Point *, int, int);
extern undefined8 Point_operator_add(Point *, Point *);
extern bool Point_operator_eq(Point *, Point *);
extern void Point_operator_increment(Point *);

typedef struct Base Base;
struct MultiDerived;
typedef struct MultiDerived MultiDerived;
struct Point;
typedef struct Point Point;
struct _Head_base;
typedef struct _Head_base _Head_base;
struct SimpleClass;
typedef struct SimpleClass SimpleClass;
struct default_delete;
typedef struct default_delete default_delete;
struct __0;
typedef struct __0 __0;
struct __1;
typedef struct __1 __1;
struct __2;
typedef struct __2 __2;
typedef unsigned long ulong;
typedef unsigned int uint;
struct Derived;
typedef struct Derived Derived;
struct DiamondDerived;
typedef struct DiamondDerived DiamondDerived;
struct LifecycleClass;
typedef struct LifecycleClass LifecycleClass;
struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Standard C library declarations */
extern int printf(const char *format, ...);
extern size_t strlen(const char *s);

/* C++ runtime declarations */
struct ios_base {
};

/* Separate typedef for Init to work with C */
struct Init; typedef struct Init Init;

/* C++ runtime declarations */
struct Init_ios_base {
  void (*Init)(struct Init_ios_base *);
  void (*destructor)(struct Init_ios_base *);
};

struct type_info {
  bool operator==(type_info *param_1);
  long name();
};
extern char *type_info_name(type_info *);
void terminate(void);

/* C++ ABI function declarations */
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void __cxa_begin_catch(void);
extern void __cxa_bad_typeid(void);
extern void *__dynamic_cast(void *, type_info *, type_info *, int);
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern char *type_info_name_internal(type_info *);
extern int strcmp(const char *, const char *);

/* C++ operator new/delete declarations */
extern void *operator_new(size_t);
extern void *operator_new__(size_t);
extern void operator_delete(void *);
extern void operator_delete__(void *);
extern type *move(type *);
extern type *move<unique_ptr<int,default_delete<int>>&>(unique_ptr *);

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
extern Init __ioinit;
extern uint instance_count;
extern type_info typeinfo_int;
extern char DAT_00104bd5[];
extern char DAT_00104bfa[];
extern char DAT_00104c18[];
extern char DAT_00104c34[];
extern char DAT_00104c50[];
extern char DAT_00104c6c[];
extern char DAT_00104c89[];
extern char DAT_00104ca5[];
extern char DAT_00104cc1[];
extern char DAT_00104cdd[];
extern char DAT_00104cf9[];
extern char DAT_00104d16[];
extern char DAT_00104d33[];
extern char DAT_00104d51[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001019a0 @ 001019a0 */

void FUN_001019a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 00101b40 */

void __cxx_global_var_init(void)

{
 ios_base_Init_constructor((Init *)&__ioinit);
 __cxa_atexit(ios_base_Init_destructor,&__ioinit,&__dso_handle);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101b80 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00101c7c @ 00101c7c */

void FUN_00101c7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101cd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_34 [36];
 
 SimpleClass_constructor(aSStack_34,5,"Test");
 setValue_SimpleClass(aSStack_34,10);
 iVar1 = getValue_SimpleClass(aSStack_34);
 iVar2 = compute_SimpleClass(aSStack_34,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00101d4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass aLStack_28 [20];
 int local_14;
 
 local_14 = 0;
 LifecycleClass_constructor(aLStack_28,5);
 /* try { // try from 00101d70 to 00101d97 has its CatchHandler @ 00101ddc */
 iVar1 = LifecycleClass_getData(aLStack_28,2);
 local_14 = local_14 + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_14 = local_14 + iVar1;
 LifecycleClass_destructor(aLStack_28);
 iVar1 = LifecycleClass_getInstanceCount();
 return local_14 + iVar1 * 1000;
}



/* Function: call_virtual_func @ 00101dfc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101e30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived aDStack_28 [16];
 Base aBStack_18 [8];
 
 Base_constructor(aBStack_18);
 /* try { // try from 00101e44 to 00101e4f has its CatchHandler @ 00101f14 */
 Derived_constructor(aDStack_28,3);
 /* try { // try from 00101e54 to 00101ec7 has its CatchHandler @ 00101f24 */
 iVar1 = Base_virtual_func(aBStack_18,5);
 iVar2 = Derived_virtual_func(aDStack_28,5);
 iVar3 = call_virtual_func(aBStack_18,5);
 iVar4 = call_virtual_func((Base *)aDStack_28,5);
 Derived_destructor(aDStack_28);
 Base_destructor(aBStack_18);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00101f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived *local_68;
 undefined8 *local_30;
 undefined4 local_28;
 MultiDerived local_20 [8];
 undefined4 local_18;
 
 MultiDerived_constructor((MultiDerived *)&local_30);
 local_28 = 100;
 local_18 = 200;
 local_68 = (MultiDerived *)0x0;
 if ((MultiDerived *)&local_30 != (MultiDerived *)0x0) {
 local_68 = local_20;
 }
 /* try { // try from 00101fb8 to 00101fdf has its CatchHandler @ 00102030 */
 iVar1 = (*(code *)*local_30)();
 iVar2 = (*(code *)**(undefined8 **)local_68)();
 MultiDerived_destructor((MultiDerived *)&local_30);
 return iVar1 + iVar2 + (uint)((MultiDerived *)&local_30 != local_68);
}



/* Function: test_cpp_diamond_inheritance @ 00102050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 *local_68;
 long local_40;
 undefined4 auStack_38 [10];
 
 DiamondDerived_constructor((DiamondDerived *)&local_40);
 *(undefined4 *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 0x32;
 local_68 = (undefined8 *)0x0;
 if ((DiamondDerived *)&local_40 != (DiamondDerived *)0x0) {
 local_68 = (undefined8 *)((long)auStack_38 + *(long *)(local_40 + -0x18) + -8);
 }
 /* try { // try from 001020c0 to 001020ff has its CatchHandler @ 00102134 */
 iVar1 = (**(code **)*local_68)();
 *(undefined4 *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 100;
 iVar2 = (**(code **)*local_68)();
 DiamondDerived_destructor((DiamondDerived *)&local_40);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00102154 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 byte bVar1;
 int iVar2;
 undefined8 local_28;
 Point aPStack_20 [8];
 Point aPStack_18 [8];
 
 Point_constructor(aPStack_18,1,2);
 Point_constructor(aPStack_20,3,4);
 local_28 = Point_operator_add(aPStack_18,aPStack_20);
 bVar1 = Point_operator_eq(aPStack_18,aPStack_20);
 Point_operator_increment((Point *)&local_28);
 iVar2 = 0;
 if ((bVar1 & 1) == 0) {
 iVar2 = 10;
 }
 return (int)local_28 + local_28._4_4_ + iVar2;
}



/* Function: test_cpp_template_func @ 001021fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int local_28;
 int local_24;
 double local_20;
 int local_14;
 
 local_14 = template_max_int(3,7);
 local_20 = template_max_double(2.5,1.5);
 local_24 = 10;
 local_28 = 0x14;
 template_swap_int(&local_24,&local_28);
 return local_14 + (int)local_20 + local_24 + local_28;
}



/* Function: test_cpp_template_class @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 double dVar1;
 Container_double aCStack_a0 [92];
 int local_44;
 int local_40;
 Container_int local_3c [44];
 Container_int *aCStack_3c;
 
 aCStack_3c = local_3c;
 Container_int_constructor(aCStack_3c);
 Container_int_push(aCStack_3c,10);
 Container_int_push(aCStack_3c,0x14);
 Container_int_push(aCStack_3c,0x1e);
 local_40 = Container_int_get(aCStack_3c,0);
 local_44 = Container_int_getSize(aCStack_3c);
 Container_double_constructor(aCStack_a0);
 Container_double_push(aCStack_a0,3.14);
 dVar1 = (double)Container_double_get(aCStack_a0,0);
 return local_40 + local_44 + (int)dVar1;
}



/* Function: test_cpp_lambda @ 00102330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 __0 _Stack_29;
 undefined4 local_28 [2];
 undefined4 *local_20;
 undefined4 local_18;
 undefined4 local_14;
 
 local_14 = 10;
 local_20 = &local_18;
 local_18 = 0x14;
 local_28[0] = 10;
 iVar1 = test_cpp_lambda()::$_1::operator()((__1 *)local_28,3);
 iVar2 = test_cpp_lambda()::$_0::operator()(&_Stack_29,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 001023a0 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda__1_operator(__1 *this,int param_1)

{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return param_1 * *(int *)this + **(int **)(this + 8);
}



/* Function: operator() @ 001023e0 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda__0_operator(__0 *this,int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: test_cpp_exception @ 00102404 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00102424 to 00102433 has its CatchHandler @ 00102438 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(struct type_info *)&typeinfo_int,0);
}



/* Function: test_cpp_smart_ptr @ 00102574 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 undefined4 *puVar4;
 type *ptVar5;
 unique_ptr auStack_50 [11];
 __2 _Stack_45;
 int local_44;
 unique_ptr auStack_40 [12];
 int local_34;
 unique_ptr auStack_30 [24];
 unique_ptr auStack_18 [8];
 
 piVar3 = operator_new(4);
 *piVar3 = 100;
 unique_ptr_int_default_delete_int_constructor(auStack_18,piVar3);
 /* try { // try from 001025a4 to 001025ab has its CatchHandler @ 001026e8 */
 puVar4 = (undefined4 *)unique_ptr_int_default_delete_int_operator_deref(auStack_18);
 *puVar4 = 200;
 ptVar5 = move_unique_ptr((unique_ptr *)auStack_18);
 unique_ptr_int_default_delete_int_move_constructor(auStack_30,(unique_ptr *)ptVar5);
 /* try { // try from 001025d8 to 001025fb has its CatchHandler @ 001026f8 */
 piVar3 = (int *)unique_ptr_int_default_delete_int_operator_deref(auStack_30);
 local_34 = *piVar3;
 piVar3 = operator_new__(0x14);
 *piVar3 = 1;
 piVar3[1] = 2;
 piVar3[2] = 3;
 piVar3[3] = 4;
 piVar3[4] = 5;
 unique_ptr_int_array_default_delete_int_array_constructor(auStack_40,piVar3);
 /* try { // try from 0010263c to 00102663 has its CatchHandler @ 00102708 */
 piVar3 = (int *)unique_ptr_int_array_default_delete_int_array_operator_subscript(auStack_40,2);
 local_44 = *piVar3;
 piVar3 = operator_new(4);
 *piVar3 = 500;
 unique_ptr_int_lambda2_constructor(auStack_50,piVar3,&_Stack_45);
 /* try { // try from 00102688 to 0010268f has its CatchHandler @ 00102718 */
 piVar3 = (int *)unique_ptr_int_lambda2_operator_deref(auStack_50);
 iVar2 = *piVar3;
 iVar1 = local_34 + local_44;
 unique_ptr_int_lambda2_destructor(auStack_50);
 unique_ptr_int_array_default_delete_int_array_destructor(auStack_40);
 unique_ptr_int_default_delete_int_destructor(auStack_30);
 unique_ptr_int_default_delete_int_destructor(auStack_18);
 return iVar1 + iVar2;
}



/* Function: unique_ptr test_cpp_smart_ptr()::$_2,void @ 0010275c */

/* unique_ptr int test_cpp_smart_ptr()::$_2 unique_ptr test_cpp_smart_ptr()::$_2 void
 (int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
unique_ptr_int_lambda2_constructor
 (unique_ptr_int_lambda2 *this,int *param_1,__2 *param_2)

{
 /* try { // try from 00102780 to 00102783 has its CatchHandler @ 00102794 */
 __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
 __uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 ((__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *)this,param_1,param_2);
 return;
}



/* Function: operator_star @ 00102798 */

/* unique_ptr int test_cpp_smart_ptr()::$_2 TEMPNAMEPLACEHOLDERVALUE const */

void __thiscall
unique_ptr_int_lambda2_operator_deref
 (unique_ptr_int_lambda2 *this)

{
 get(this);
 return;
}



/* Function: unique_ptr_destructor @ 001027cc */

/* unique_ptr int test_cpp_smart_ptr()::$_2 unique_ptr_destructor */

void __thiscall
unique_ptr_int_lambda2_destructor
 (unique_ptr_int_lambda2 *this)

{
 int **ppiVar1;
 __2 *this_00;
 type *ptVar2;
 
 /* try { // try from 001027e4 to 0010282b has its CatchHandler @ 00102848 */
 ppiVar1 = (int **)__uniq_ptr_impl_int_test_cpp_smart_ptr___2___M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ptVar2 = move<int*&>(ppiVar1);
 test_cpp_smart_ptr()::$_2::operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: test_cpp_rtti @ 0010284c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 ulong uVar2;
 char *__s;
 size_t sVar3;
 long local_80;
 long local_70;
 int local_24;
 
 this = operator_new(8);
 *(undefined8 *)this = 0;
 RTTIDerivedA_constructor(this);
 this_00 = operator_new(8);
 *(undefined8 *)this_00 = 0;
 RTTIDerivedB_constructor(this_00);
 local_24 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = type_info_operator_eq
 (*(type_info **)(*(long *)this + -8),(type_info *)&RTTIDerivedA_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_24 = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = type_info_operator_eq
 (*(type_info **)(*(long *)this_00 + -8),(type_info *)&RTTIDerivedB_typeinfo);
 if ((uVar2 & 1) != 0) {
 local_24 = local_24 + 0x14;
 }
 if (this == (RTTIDerivedA *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_70 != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_80 = 0;
 }
 else {
 local_80 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (local_80 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)type_info_name_internal(*(type_info **)(*(long *)this + -8));
 sVar3 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (**(code **)(*(long *)this + 8))();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(long *)this_00 + 8))();
 }
 return local_24 + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 ulong uVar2;
 
 printf(&DAT_00104bd5);
 uVar2 = test_cpp_member_func();
 printf(&DAT_00104bfa,uVar2 & 0xffffffff);
 uVar2 = test_cpp_constructor();
 printf(&DAT_00104c18,uVar2 & 0xffffffff);
 uVar2 = test_cpp_virtual_func();
 printf(&DAT_00104c34,uVar2 & 0xffffffff);
 uVar2 = test_cpp_multiple_inheritance();
 printf(&DAT_00104c50,uVar2 & 0xffffffff);
 uVar2 = test_cpp_diamond_inheritance();
 printf(&DAT_00104c6c,uVar2 & 0xffffffff);
 uVar2 = test_cpp_operator_overload();
 printf(&DAT_00104c89,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_func();
 printf(&DAT_00104ca5,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_class();
 printf(&DAT_00104cc1,uVar2 & 0xffffffff);
 uVar2 = test_cpp_lambda();
 printf(&DAT_00104cdd,uVar2 & 0xffffffff);
 uVar2 = test_cpp_exception();
 printf(&DAT_00104cf9,uVar2 & 0xffffffff);
 uVar2 = test_cpp_smart_ptr();
 printf(&DAT_00104d16,uVar2 & 0xffffffff);
 uVar2 = test_cpp_rtti();
 iVar1 = printf(&DAT_00104d33,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00102b90 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 00102bbc */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true,
 false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)
 */

void __thiscall
std__uniq_ptr_data_int_test_cpp_smart_ptr___2_true_false___uniq_ptr_impl_test_cpp_smart_ptr___2_const_ref
 (__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *this,int *param_1,__2 *param_2
 )

{
 __uniq_ptr_impl_int_test_cpp_smart_ptr___2___uniq_ptr_impl_test_cpp_smart_ptr___2_const_ref
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 00102bf0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2
 const&>(int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
 __2 *p_Var1;
 int *local_20;
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *local_18;
 
 local_20 = param_1;
 local_18 = this;
 p_Var1 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
 ((tuple<int*,test_cpp_smart_ptr()::__2> *)this,&local_20,p_Var1);
 return;
}



/* Function: forward_lambda2 @ 00102c3c */

__2 * forward_lambda2(type *param_1)

{
 return (__2 *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 00102c50 */

/* std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&,
 true>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
 (tuple<int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 __2 *p_Var2;
 
 ppiVar1 = forward<int*&>((type *)param_1);
 p_Var2 = forward<test_cpp_smart_ptr()::$_2_const&>((type *)param_2);
 /* try { // try from 00102c90 to 00102c93 has its CatchHandler @ 00102ca4 */
 _Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
 _Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
 ((_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::__2> *)this,ppiVar1,p_Var2);
 return;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 00102ca8 */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,
 test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
 (_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 
 forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 _Tuple_impl_1ul_test_cpp_smart_ptr___2___Tuple_impl((__2 *)this);
 ppiVar1 = forward<int*&>((type *)param_1);
 _Head_base_0ul_int_false___Head_base_int_ref((_Head_base<0ul,int*,false> *)this,ppiVar1);
 return;
}



/* Function: Tuple_impl_1_lambda2 @ 00102cfc */

void Tuple_impl_1_lambda2(__2 *param_1)

{
 _Head_base_1ul_test_cpp_smart_ptr___2_true___Head_base(param_1);
 return;
}



/* Function: Head_base_1_lambda2 @ 00102d28 */

void Head_base_1_lambda2(__2 *param_1)

{
 return;
}



/* Function: uniq_ptr_impl_M_ptr @ 00102d3c */

void __thiscall
uniq_ptr_impl_M_ptr
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
 get_0_int_lambda2((tuple *)this);
 return;
}



/* Function: unique_ptr_get_deleter @ 00102d60 */

undefined8 __thiscall
unique_ptr_get_deleter
 (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00102d74 to 00102d7b has its CatchHandler @ 00102d90 */
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr___2___M_deleter
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 return uVar1;
}



/* Function: operator() @ 00102d94 */

void __thiscall test_cpp_smart_ptr__2_operator(__2 *this,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: get_0_int_lambda2 @ 00102ddc */

type * get_0_int_lambda2(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)get_helper_0_int_lambda2((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: get_helper_0_int_lambda2 @ 00102e00 */

int ** get_helper_0_int_lambda2(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_test_cpp_smart_ptr___2___M_head(param_1);
 return ppiVar1;
}



/* Function: Tuple_impl_0_M_head @ 00102e24 */

void Tuple_impl_0_M_head(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false___M_head((_Head_base *)param_1);
 return;
}



/* Function: uniq_ptr_impl_M_deleter @ 00102e48 */

void __thiscall
uniq_ptr_impl_M_deleter
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
 get_1_int_lambda2((tuple *)this);
 return;
}



/* Function: get_1_int_lambda2 @ 00102e6c */

type * get_1_int_lambda2(tuple *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = get_helper_1_lambda2((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: get_helper_1_lambda2 @ 00102e90 */

__2 * get_helper_1_lambda2(_Tuple_impl *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = (__2 *)_Tuple_impl_1ul_test_cpp_smart_ptr___2___M_head(param_1);
 return p_Var1;
}



/* Function: Tuple_impl_1_M_head @ 00102eb4 */

void Tuple_impl_1_M_head(_Tuple_impl *param_1)

{
 _Head_base_1ul_test_cpp_smart_ptr___2_true___M_head((_Head_base *)param_1);
 return;
}



/* Function: Head_base_1_M_head @ 00102ed8 */

_Head_base * Head_base_1_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: unique_ptr_get @ 00102eec */

undefined8 __thiscall
unique_ptr_get(unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00102f00 to 00102f07 has its CatchHandler @ 00102f1c */
 uVar1 = __uniq_ptr_impl_int_test_cpp_smart_ptr___2___M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 return uVar1;
}



/* Function: uniq_ptr_impl_M_ptr_const @ 00102f20 */

undefined8 __thiscall
uniq_ptr_impl_M_ptr_const
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
 type *ptVar1;
 
 ptVar1 = get_0_int_lambda2_const((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get_0_int_lambda2_const @ 00102f48 */

type * get_0_int_lambda2_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)get_helper_0_int_lambda2_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: get_helper_0_int_lambda2_const @ 00102f6c */

int ** get_helper_0_int_lambda2_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl_0ul_int_test_cpp_smart_ptr___2___M_head(param_1);
 return ppiVar1;
}



/* Function: Tuple_impl_0_M_head_const @ 00102f90 */

void Tuple_impl_0_M_head_const(_Tuple_impl *param_1)

{
 _Head_base_0ul_int_false___M_head((_Head_base *)param_1);
 return;
}



/* Function: SimpleClass @ 00102fb4 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}



/* Function: setValue @ 00103000 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass_setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return;
}



/* Function: getValue @ 00103020 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass_getValue(SimpleClass *this)

{
 return *(undefined4 *)this;
}



/* Function: compute @ 00103038 */

/* SimpleClass::compute(int) const */

ulong __thiscall SimpleClass_compute(SimpleClass *this,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return sVar2 + (long)(iVar1 * param_1) & 0xffffffff;
}



/* Function: getClassID @ 00103080 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103088 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass_LifecycleClass(LifecycleClass *this,ulong param_1)

{
 undefined1 auVar1 [16];
 void *pvVar2;
 ulong uVar3;
 ulong local_28;
 
 *(ulong *)(this + 8) = param_1;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_1;
 uVar3 = param_1 * 4;
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar3 = 0xffffffffffffffff;
 }
 pvVar2 = operator_new__(uVar3);
 *(void **)this = pvVar2;
 for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
 *(int *)(*(long *)this + local_28 * 4) = (int)local_28 * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 00103138 */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass_getData(LifecycleClass *this,ulong param_1)

{
 undefined4 local_1c;
 
 if (param_1 < *(ulong *)(this + 8)) {
 local_1c = *(undefined4 *)(*(long *)this + param_1 * 4);
 }
 else {
 local_1c = 0xffffffff;
 }
 return local_1c;
}



/* Function: getInstanceCount @ 00103190 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 0010319c */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass_destructor(LifecycleClass *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 001031e8 */

/* Base::Base() */

void __thiscall Base_Base(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00117858;
 return;
}



/* Function: Derived @ 0010320c */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
 Base::Base((Base *)this);
 *(undefined ***)this = &PTR_virtual_func_00117898;
 *(int *)(this + 8) = param_1;
 return;
}



/* Function: virtual_func @ 0010325c */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00103278 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: ~Derived @ 0010329c */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 Base::~Base((Base *)this);
 return;
}



/* Function: ~Base @ 001032c0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: MultiDerived @ 001032d0 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
 BaseA::BaseA((BaseA *)this);
 BaseB::BaseB((BaseB *)(this + 0x10));
 *(undefined ***)this = &PTR_funcA_001178e0;
 *(undefined ***)(this + 0x10) = &PTR_funcB_00117910;
 return;
}



/* Function: ~MultiDerived @ 00103330 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 BaseB::~BaseB((BaseB *)(this + 0x10));
 BaseA::~BaseA((BaseA *)this);
 return;
}



/* Function: DiamondDerived @ 00103364 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
 VirtualBase::VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA::MiddleA((MiddleA *)this);
 MiddleB::MiddleB((MiddleB *)(this + 0x10));
 *(undefined ***)this = &PTR_func_001179e8;
 *(undefined ***)(this + 0x20) = &PTR_func_00117a50;
 *(undefined ***)(this + 0x10) = &PTR_func_00117a18;
 return;
}



/* Function: ~DiamondDerived @ 00103400 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 VirtualBase::~VirtualBase((VirtualBase *)(this + 0x20));
 return;
}



/* Function: Point @ 0010343c */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}



/* Function: operator+ @ 00103468 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point::operator+(Point *this,Point *param_1)

{
 undefined8 local_18;
 
 Point((Point *)&local_18,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 return local_18;
}



/* Function: operator== @ 001034b8 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point::operator==(Point *this,Point *param_1)

{
 bool bVar1;
 
 bVar1 = false;
 if (*(int *)this == *(int *)param_1) {
 bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return bVar1;
}



/* Function: operator++ @ 0010351c */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point::operator++(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}



/* Function: template_max_int @ 00103548 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 int local_c;
 
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}



/* Function: template_max_double @ 0010358c */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 double local_18;
 
 local_18 = param_2;
 if (param_2 < param_1) {
 local_18 = param_1;
 }
 return local_18;
}



/* Function: template_swap_int @ 001035d4 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00103610 */

/* Container_int__Container() */

void __thiscall Container_int__Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00103628 */

/* Container_int__push(int) */

void __thiscall Container_int__push(Container<int> *this,int param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00103674 */

/* Container_int__get(int) const */

undefined4 __thiscall Container_int__get(Container<int> *this,int param_1)

{
 undefined4 local_4;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_4 = 0;
 }
 else {
 local_4 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return local_4;
}



/* Function: getSize @ 001036d4 */

/* Container_int__getSize() const */

undefined4 __thiscall Container_int__getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001036ec */

/* Container_double__Container() */

void __thiscall Container_double__Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00103704 */

/* Container_double__push(double) */

void __thiscall Container_double__push(Container<double> *this,double param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00103750 */

/* Container_double__get(int) const */

undefined1 [16] __thiscall Container_double__get(Container<double> *this,int param_1)

{
 undefined1 auVar1 [16];
 ulong local_8;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_8 = 0;
 }
 else {
 local_8 = *(ulong *)(this + (long)param_1 * 8);
 }
 auVar1._8_8_ = 0;
 auVar1._0_8_ = local_8;
 return auVar1;
}



/* Function: getSize @ 001037b4 */

/* Container_double__getSize() const */

undefined4 __thiscall Container_double__getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr_default_delete_int_constructor @ 001037cc */

void __thiscall
unique_ptr_default_delete_int_constructor
 (unique_ptr<int,std::default_delete<int>> *this,int *param_1)

{
 /* try { // try from 001037e8 to 001037eb has its CatchHandler @ 001037fc */
 __uniq_ptr_data<int,default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,default_delete<int>,true,true> *)this,param_1);
 return;
}



/* Function: unique_ptr_operator_star @ 00103800 */

void __thiscall
unique_ptr_operator_star
 (unique_ptr<int,std::default_delete<int>> *this)

{
 get(this);
 return;
}



/* Function: move_unique_ptr_int @ 00103834 */

type * move_unique_ptr_int(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: unique_ptr_move_constructor @ 00103848 */

void __thiscall
unique_ptr_move_constructor
 (unique_ptr<int,std::default_delete<int>> *this,unique_ptr *param_1)

{
 __uniq_ptr_data<int,default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data<int,default_delete<int>,true,true> *)this,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00103874 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

void __thiscall
unique_ptr_int_array_default_delete_int_array::
unique_ptr<int*,std::default_delete<int[]>,void,bool>
 (unique_ptr<int[],std::default_delete<int[]>> *this,int *param_1)

{
 /* try { // try from 00103890 to 00103893 has its CatchHandler @ 001038a4 */
 __uniq_ptr_data<int,default_delete<int[]>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,default_delete<int[]>,true,true> *)this,param_1);
 return;
}



/* Function: operator[] @ 001038a8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
unique_ptr_int_array_default_delete_int_array::operator[]
 (unique_ptr<int[],std::default_delete<int[]>> *this,ulong param_1)

{
 long lVar1;
 
 lVar1 = get(this);
 return lVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 001038e8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
unique_ptr_int_array_default_delete_int_array::~unique_ptr
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 long *plVar1;
 default_delete<int[]> *this_00;
 
 plVar1 = (long)__uniq_ptr_impl<int,default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,default_delete<int[]>> *)this);
 if (*plVar1 != 0) {
 this_00 = (default_delete<int[]> *)get_deleter(this);
 /* try { // try from 00103928 to 0010392b has its CatchHandler @ 00103948 */
 default_delete<int[]>::operator()(this_00,(int *)*plVar1);
 }
 *plVar1 = 0;
 return;
}



/* Function: ~unique_ptr @ 0010394c */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
unique_ptr_int_default_delete_int::~unique_ptr
 (unique_ptr<int,std::default_delete<int>> *this)

{
 int **ppiVar1;
 default_delete<int> *this_00;
 type *ptVar2;
 
 ppiVar1 = (int *)__uniq_ptr_impl<int,default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,default_delete<int>> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete<int> *)get_deleter(this);
 ptVar2 = move<int*&>(ppiVar1);
 /* try { // try from 0010399c to 0010399f has its CatchHandler @ 001039bc */
 default_delete<int>::operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: RTTIDerivedA @ 001039c0 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedA_00117d30;
 return;
}



/* Function: RTTIDerivedB @ 00103a04 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedB_00117d80;
 return;
}



/* Function: operator== @ 00103a48 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
 bool bVar1;
 int iVar2;
 
 bVar1 = true;
 if ((*(long *)(this + 8) != *(long *)(param_1 + 8)) &&
 (bVar1 = false, **(char **)(this + 8) != '*')) {
 iVar2 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 bVar1 = iVar2 == 0;
 }
 return bVar1;
}



/* Function: derivedA_data @ 00103ae8 */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA::derivedA_data(void)

{
 return 100;
}



/* Function: derivedB_data @ 00103afc */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB::derivedB_data(void)

{
 return 200;
}



/* Function: name @ 00103b10 */

/* std::type_info::name() const */

long __thiscall std::type_info::name(type_info *this)

{
 long local_18;
 
 if (**(char **)(this + 8) == '*') {
 local_18 = *(long *)(this + 8) + 1;
 }
 else {
 local_18 = *(long *)(this + 8);
 }
 return local_18;
}



/* Function: getName @ 00103b64 */

/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00104d51;
}



/* Function: ~Base @ 00103b7c */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 ~Base(this);
 operator_delete(this);
 return;
}



/* Function: getName @ 00103bac */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 00103bc4 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 ~Derived(this);
 operator_delete(this);
 return;
}



/* Function: BaseA @ 00103bf4 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_00117990;
 return;
}



/* Function: BaseB @ 00103c18 */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_001179b8;
 return;
}



/* Function: funcA @ 00103c3c */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00103c50 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00103c80 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00103c94 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
 funcB();
 return;
}



/* Function: ~MultiDerived @ 00103cac */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: ~MultiDerived @ 00103cc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: funcA @ 00103cdc */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00103cf0 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00103d00 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 ~BaseA(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00103d30 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 00103d44 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00103d54 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 ~BaseB(this);
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00103d84 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00117c18;
 return;
}



/* Function: MiddleA @ 00103da8 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
 undefined8 *in_x1;
 
 *(undefined8 *)this = *in_x1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
 return;
}



/* Function: MiddleB @ 00103ddc */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
 undefined8 *in_x1;
 
 *(undefined8 *)this = *in_x1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
 return;
}



/* Function: func @ 00103e10 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00103e38 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this);
 VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
 return;
}



/* Function: ~MiddleA @ 00103e74 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00103ea4 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~MiddleA @ 00103ec4 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 00103ee4 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00103f04 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 00103f2c */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this);
 VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
 return;
}



/* Function: ~MiddleB @ 00103f68 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00103f98 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~MiddleB @ 00103fb8 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 00103fd8 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00103ff8 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00104020 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00104050 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104068 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104080 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: func @ 00104098 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~DiamondDerived @ 001040b8 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 001040d8 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 001040f8 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 0010410c */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 0010411c */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 ~VirtualBase(this);
 operator_delete(this);
 return;
}



/* Function: ~MiddleA @ 0010414c */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return;
}



/* Function: ~MiddleB @ 00104160 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00104174 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 MiddleB::~MiddleB((MiddleB *)(this + 0x10));
 MiddleA::~MiddleA((MiddleA *)this);
 return;
}



/* Function: __uniq_ptr_data @ 001041c0 */

/* std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data */

void __thiscall
std::__uniq_ptr_data<int,default_delete<int>,true,true>::__uniq_ptr_data
 (__uniq_ptr_data<int,default_delete<int>,true,true> *this,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl<int,default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,default_delete<int>> *)this,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 001041ec */

/* std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined8 *puVar2;
 
 ptVar1 = move<tuple<int*,default_delete<int>>&>((tuple *)param_1);
 tuple<int*,default_delete<int>>::tuple
 ((tuple<int*,default_delete<int>> *)this,(tuple *)ptVar1);
 /* try { // try from 00104220 to 00104227 has its CatchHandler @ 00104240 */
 puVar2 = (undefined8 *)_M_ptr((__uniq_ptr_impl<int,default_delete<int>> *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00104244 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std_move_std_tuple_int_default_delete_int_ref_(std::tuple<int*, std::default_delete<int>
 >&) */

type * move<tuple<int*,default_delete<int>>&>(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: tuple @ 00104258 */

/* std_tuple_int_default_delete_int__tuple
 */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
 (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
 _Tuple_impl<0ul,int*,default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,default_delete<int>> *)this,(_Tuple_impl *)param_1);
 return;
}



/* Function: _M_ptr @ 00104284 */

/* std___uniq_ptr_impl_int_default_delete_int___M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int___M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  std_get_0ul_int_default_delete_int((tuple *)this);
  return;
}



/* Function: __clang_call_terminate @ 001042a8 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 terminate();
}



/* Function: _Tuple_impl @ 001042b4 */

/* std__Tuple_impl_0ul_int_default_delete_int___Tuple_impl */

void __thiscall
std__Tuple_impl_0ul_int_default_delete_int___Tuple_impl
 (_Tuple_impl<0ul,int*,default_delete<int>> *this,_Tuple_impl *param_1)

{
  _Tuple_impl_1ul_default_delete_int___Tuple_impl((_Tuple_impl *)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* Function: _Tuple_impl @ 001042f4 */

/* std__Tuple_impl_1ul_default_delete_int___Tuple_impl */

void std__Tuple_impl_1ul_default_delete_int___Tuple_impl(_Tuple_impl *param_1)

{
  return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104308 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std_get_0ul_int_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)_Tuple_impl_0ul_int_default_delete_int___M_head((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 0010432c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std___get_helper_0ul_int_default_delete_int(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

int ** std___get_helper_0ul_int_default_delete_int(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Head_base_0ul_int_false___M_head((_Head_base *)param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00104350 */

/* std__Tuple_impl_0ul_int_default_delete_int___M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

_Head_base * std__Tuple_impl_0ul_int_default_delete_int___M_head(_Tuple_impl *param_1)

{
  return _Head_base_0ul_int_false___M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 00104374 */

/* std__Head_base_0ul_int_false___M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * std::_Head_base_0ul_int_false___M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: RTTIBase @ 00104388 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00117d58;
 return;
}



/* Function: ~RTTIDerivedA @ 001043ac */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::~RTTIBase((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedA @ 001043d0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 ~RTTIDerivedA(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104400 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00104414 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIBase @ 00104424 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 ~RTTIBase(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104454 */

/* RTTIBase::getType() const */

undefined8 RTTIBase::getType(void)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 00104468 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::~RTTIBase((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedB @ 0010448c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 ~RTTIDerivedB(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 001044bc */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 001044d0 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,default_delete<int>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,default_delete<int>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 001044fc */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,default_delete<int>>::tuple<true,true>
 ((tuple<int*,default_delete<int>> *)this);
 puVar1 = (undefined8 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 00104540 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
 (tuple<int*,std::default_delete<int>> *this)

{
 /* try { // try from 00104554 to 00104557 has its CatchHandler @ 00104568 */
 _Tuple_impl<0ul,int*,default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,default_delete<int>> *)this);
 return;
}



/* Function: _Tuple_impl @ 0010456c */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std__Tuple_impl_0ul_int_default_delete_int___Tuple_impl_void
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this)

{
  _Tuple_impl_1ul_default_delete_int___Tuple_impl();
  _Head_base_0ul_int_false___Head_base((_Head_base<0ul,int*,false> *)this);
  return;
}



/* Function: _Tuple_impl @ 0010459c */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void std__Tuple_impl_1ul_default_delete_int___Tuple_impl(void)

{
  _Head_base_1ul_default_delete_int_true___Head_base();
  return;
}



/* Function: _Head_base @ 001045c0 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall _Head_base_0ul_int_false___Head_base(_Head_base<0ul,int*,false> *this)

{
  *(undefined8 *)this = 0;
  return;
}



/* Function: _Head_base @ 001045d8 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void _Head_base_1ul_default_delete_int_true___Head_base(void)

{
  return;
}



/* Function: get_deleter @ 001045e8 */

/* unique_ptr_int_default_delete_int__get_deleter() */

undefined8 __thiscall
unique_ptr_int_default_delete_int::get_deleter
 (unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 001045fc to 00104603 has its CatchHandler @ 00104618 */
 uVar1 = uniq_ptr_impl_M_deleter_default_delete
 ((__uniq_ptr_impl<int,default_delete<int>> *)this);
 return uVar1;
}



/* Function: operator() @ 0010461c */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall default_delete_int__operator_call(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}



/* Function: move<int*&> @ 00104658 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std_move_int_ref_(int*&) */

type * std_move_int_ref_(int **param_1)

{
 return (type *)param_1;
}



/* Function: _M_deleter @ 0010466c */

/* std___uniq_ptr_impl_int_default_delete_int___M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 get<1ul,int*,default_delete<int>>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 00104690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std_get_1ul_int_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1ul_default_delete_int___M_head((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 001046b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
 std::default_delete<int>>&) */

default_delete * std___get_helper_1ul_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Head_base_1ul_default_delete_int_true___M_head((_Head_base *)param_1);
 return pdVar1;
}



/* Function: _M_head @ 001046d8 */

/* std__Tuple_impl_1ul_default_delete_int___M_head(std::_Tuple_impl<1ul,
 std::default_delete<int> >&) */

_Head_base * _Tuple_impl_1ul_default_delete_int___M_head(_Tuple_impl *param_1)

{
  return _Head_base_1ul_default_delete_int_true___M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 001046fc */

/* std__Head_base_1ul_default_delete_int_true___M_head(std::_Head_base<1ul,
 std::default_delete<int>, true>&) */

_Head_base * _Head_base_1ul_default_delete_int_true___M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 00104710 */

/* unique_ptr_int_default_delete_int__get() const */

undefined8 __thiscall
unique_ptr_int_default_delete_int::get(unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104724 to 0010472b has its CatchHandler @ 00104740 */
 uVar1 = __uniq_ptr_impl<int,default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,default_delete<int>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104744 */

/* std___uniq_ptr_impl_int_default_delete_int___M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,default_delete<int>>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 0010476c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
 int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std_get_0ul_int_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)_Tuple_impl_0ul_int_default_delete_int___M_head((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 00104790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std___get_helper_0ul_int_default_delete_int(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

int ** std___get_helper_0ul_int_default_delete_int(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Head_base_0ul_int_false___M_head((_Head_base *)param_1);
  return ppiVar1;
}



/* Function: _M_head @ 001047b4 */

/* std__Tuple_impl_0ul_int_default_delete_int___M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

_Head_base * std__Tuple_impl_0ul_int_default_delete_int___M_head(_Tuple_impl *param_1)

{
  return _Head_base_0ul_int_false___M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 001047d8 */

/* std__Head_base_0ul_int_false___M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * std::_Head_base_0ul_int_false___M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __uniq_ptr_impl @ 001047ec */

/* std___uniq_ptr_data_int_default_delete_int_array__true_true___uniq_ptr_impl */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,default_delete<int[]>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104818 */

/* std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,default_delete<int[]>>::tuple<true,true>
 ((tuple<int*,default_delete<int[]>> *)this);
 puVar1 = (undefined8 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 0010485c */

/* std_tuple_int_default_delete_int_array___tuple_true_true_ */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
 (tuple<int*,std::default_delete<int[]>> *this)

{
 /* try { // try from 00104870 to 00104873 has its CatchHandler @ 00104884 */
 _Tuple_impl<0ul,int*,default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,default_delete<int[]>> *)this);
 return;
}



/* Function: _M_ptr @ 00104888 */

/* std___uniq_ptr_impl_int_default_delete_int_array___M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int_array___M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  std_get_0ul_int_default_delete_int_array((tuple *)this);
  return;
}



/* Function: _Tuple_impl @ 001048ac */

/* std__Tuple_impl_0ul_int_default_delete_int_array___Tuple_impl() */

void __thiscall
std__Tuple_impl_0ul_int_default_delete_int_array___Tuple_impl_void
 (_Tuple_impl<0ul,int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl_1ul_default_delete_int_array___Tuple_impl();
  _Head_base_0ul_int_false___Head_base((_Head_base<0ul,int*,false> *)this);
  return;
}



/* Function: _Tuple_impl @ 001048dc */

/* std__Tuple_impl_1ul_default_delete_int_array___Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)

{
 _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
 return;
}



/* Function: _Head_base @ 00104900 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void _Head_base_1ul_default_delete_int_array_true___Head_base(void)

{
  return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_0ul_int_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)_Tuple_impl_0ul_int_default_delete_int_array___M_head((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std___get_helper_0ul_int_default_delete_int_array_(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

int ** std___get_helper_0ul_int_default_delete_int_array_(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Head_base_0ul_int_false___M_head((_Head_base *)param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00104958 */

/* std__Tuple_impl_0ul_int_default_delete_int_array___M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

_Head_base * std__Tuple_impl_0ul_int_default_delete_int_array___M_head(_Tuple_impl *param_1)

{
  return _Head_base_0ul_int_false___M_head((_Head_base *)param_1);
}



/* Function: get_deleter @ 0010497c */

/* unique_ptr_int_array_default_delete_int_array__get_deleter() */

undefined8 __thiscall
unique_ptr_int_array_default_delete_int_array::get_deleter
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104990 to 00104997 has its CatchHandler @ 001049ac */
 uVar1 = __uniq_ptr_impl<int,default_delete<int[]>>::_M_deleter
 ((__uniq_ptr_impl<int,default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: operator() @ 001049b0 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
 []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall default_delete_int_array__operator_call(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: _M_deleter @ 001049ec */

/* std___uniq_ptr_impl_int_default_delete_int_array___M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 get<1ul,int*,default_delete<int[]>>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 00104a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_1ul_int_default_delete_int_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl_1ul_default_delete_int_array___M_head((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 00104a34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
 []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * std___get_helper_1ul_default_delete_int_array(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Head_base_1ul_default_delete_int_array_true___M_head((_Head_base *)param_1);
  return pdVar1;
}



/* Function: _M_head @ 00104a58 */

/* std__Tuple_impl_1ul_default_delete_int_array___M_head(std::_Tuple_impl<1ul,
 std::default_delete<int []> >&) */

_Head_base * std__Tuple_impl_1ul_default_delete_int_array___M_head(_Tuple_impl *param_1)

{
  return _Head_base_1ul_default_delete_int_array_true___M_head((_Head_base *)param_1);
}



/* Function: _M_head @ 00104a7c */

/* std__Head_base_1ul_default_delete_int_array_true___M_head(std::_Head_base<1ul,
 std::default_delete<int []>, true>&) */

_Head_base * std__Head_base_1ul_default_delete_int_array_true___M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 00104a90 */

/* unique_ptr_int_array_default_delete_int_array__get() const */

undefined8 __thiscall
unique_ptr_int_array_default_delete_int_array::get
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104aa4 to 00104aab has its CatchHandler @ 00104ac0 */
 uVar1 = __uniq_ptr_impl<int,default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104ac4 */

/* std___uniq_ptr_impl_int_default_delete_int_array___M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,default_delete<int[]>>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104aec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
 std::get<0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
 const&) */

type * std_get_0ul_int_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)_Tuple_impl_0ul_int_default_delete_int_array___M_head((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std___get_helper_0ul_int_default_delete_int_array_(std::_Tuple_impl<0ul,
 int*, std::default_delete<int []> > const&) */

int ** std___get_helper_0ul_int_default_delete_int_array_(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Head_base_0ul_int_false___M_head((_Head_base *)param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00104b34 */

/* std__Tuple_impl_0ul_int_default_delete_int_array___M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> > const&) */

_Head_base * std__Tuple_impl_0ul_int_default_delete_int_array___M_head(_Tuple_impl *param_1)

{
  return _Head_base_0ul_int_false___M_head((_Head_base *)param_1);
}



/* Function: forward<int*&> @ 00104b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std_forward_int_ref_(std::remove_reference<int*&>::type&) */

int ** std_forward_int_ref_(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00104b6c */

/* std__Head_base_0ul_int_false___Head_base_int_ref_(int*&) */

void __thiscall
_Head_base_0ul_int_false___Head_base_int_ref(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ref_((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 216 */
