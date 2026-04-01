/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long long undefined8;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef void (*code)(void);
typedef unsigned int undefined4;
typedef unsigned char byte;

/* Forward declarations for C++ classes */
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
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct type_info type_info;
typedef struct type type;
typedef struct tuple tuple;
typedef struct _Tuple_impl _Tuple_impl;
typedef struct _Head_base _Head_base;
typedef struct unique_ptr unique_ptr;
typedef struct __uniq_ptr_impl __uniq_ptr_impl;
typedef struct __uniq_ptr_data __uniq_ptr_data;
typedef struct default_delete default_delete;
typedef struct __0 __0;
typedef struct __1 __1;
typedef struct __2 __2;
typedef struct Init Init;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Global variables */
extern int instance_count;
extern void *__dso_handle;
extern Init std___ioinit;

/* Forward declarations for SimpleClass functions */
void SimpleClass_SimpleClass(SimpleClass *this_, int param_1, char *param_2);
void SimpleClass_setValue(SimpleClass *this_, int param_1);
undefined4 SimpleClass_getValue(SimpleClass *this_);
int SimpleClass_compute(SimpleClass *this_, int param_1);
undefined4 SimpleClass_getClassID(void);

/* Forward declarations for LifecycleClass functions */
LifecycleClass *LifecycleClass_LifecycleClass(LifecycleClass *this_, uint param_1);
undefined4 LifecycleClass_getData(LifecycleClass *this_, uint param_1);
undefined4 LifecycleClass_getInstanceCount(void);
LifecycleClass *LifecycleClass__LifecycleClass(LifecycleClass *this_);

/* Forward declarations for template functions */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);
int template_max(int param_1, int param_2);
double template_max(double param_1, double param_2);
void template_swap(int *param_1, int *param_2);

/* Forward declarations for Container_int functions */
void Container_int_Container(Container_int *this_);
void Container_int_push(Container_int *this_, int param_1);
undefined4 Container_int_get(Container_int *this_, int param_1);
undefined4 Container_int_getSize(Container_int *this_);

/* Forward declarations for Container_double functions */
void Container_double_Container(Container_double *this_);
undefined4 Container_double_push(Container_double *this_, double param_1);
undefined8 Container_double_get(Container_double *this_, int param_1);
undefined4 Container_double_getSize(Container_double *this_);

/* Additional C++ function forward declarations */
bool std_type_info_operator_eq(type_info *this_, type_info *param_1);
int std_type_info_name(type_info *this_);
undefined4 std_unique_ptr_int_default_delete_int_get_deleter(unique_ptr *this_);
undefined4 std_unique_ptr_int_default_delete_int_get(unique_ptr *this_);
undefined4 std_unique_ptr_int_array_default_delete_int_array_get_deleter(unique_ptr *this_);
undefined4 std_unique_ptr_int_array_default_delete_int_array_get(unique_ptr *this_);

/* Forward declarations for C++ member functions */
void Base_Base(Base *this_);
void Derived_Derived(Derived *this_,int param_1);
int Base_virtual_func(Base *this_,int param_1);
int Derived_virtual_func(Derived *this_,int param_1);
Derived *Derived__Derived(Derived *this_);
Base *Base__Base(Base *this_);
void MultiDerived_MultiDerived(MultiDerived *this_);
MultiDerived *MultiDerived__MultiDerived(MultiDerived *this_);
undefined4 MultiDerived_funcA(void);
undefined4 MultiDerived_funcB(void);
void DiamondDerived_DiamondDerived(DiamondDerived *this_);
DiamondDerived *DiamondDerived__DiamondDerived(DiamondDerived *this_);
void Point_Point(Point *this_,int param_1,int param_2);
void Point_operator_plus(Point *this_,Point *param_1);
bool Point_operator_eq(Point *this_,Point *param_1);
void Point_operator_inc(Point *this_);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_);
undefined4 RTTIDerivedA_derivedA_data(void);
undefined4 RTTIDerivedB_derivedB_data(void);
void BaseA_BaseA(BaseA *this_);
void BaseB_BaseB(BaseB *this_);
undefined4 BaseA_funcA(void);
void BaseA__BaseA(BaseA *this_);
undefined4 BaseB_funcB(void);
void BaseB__BaseB(BaseB *this_);
void VirtualBase_VirtualBase(VirtualBase *this_);
void MiddleA_MiddleA(MiddleA *this_);
void MiddleB_MiddleB(MiddleB *this_);
int MiddleA_func(MiddleA *this_);
MiddleA *MiddleA__MiddleA(MiddleA *this_);
int MiddleB_func(MiddleB *this_);
MiddleB *MiddleB__MiddleB(MiddleB *this_);
int DiamondDerived_func(DiamondDerived *this_);
void DiamondDerived__DiamondDerived(DiamondDerived *this_);
undefined4 VirtualBase_func(void);
void VirtualBase__VirtualBase(VirtualBase *this_);
void DiamondDerived__DiamondDerived(DiamondDerived *this_);
void RTTIBase_RTTIBase(RTTIBase *this_);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_);
undefined4 RTTIDerivedA_getType(void);
void RTTIBase__RTTIBase(RTTIBase *this_);
undefined4 RTTIBase_getType(void);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_);
undefined4 RTTIDerivedB_getType(void);

/* Forward declarations for smart pointer functions */
unique_ptr * std_unique_ptr_int_test_cpp_smart_ptr___2_unique_ptr_template(unique_ptr *this_,int *param_1,__2 *param_2);
undefined4 std_unique_ptr_int_test_cpp_smart_ptr___2_operator_star_template(unique_ptr *this_);
unique_ptr * std_unique_ptr_int_test_cpp_smart_ptr___2__unique_ptr_template(unique_ptr *this_);
undefined4 std_unique_ptr_int_test_cpp_smart_ptr___2_get_deleter_template(unique_ptr *this_);
undefined4 std_unique_ptr_int_test_cpp_smart_ptr___2_get_template(unique_ptr *this_);
unique_ptr * std_unique_ptr_int_default_delete_int_unique_ptr(unique_ptr *this_,int *param_1);
undefined4 std_unique_ptr_int_default_delete_int_operator_star(unique_ptr *this_);
unique_ptr * std_unique_ptr_int_default_delete_int_unique_ptr_move(unique_ptr *this_,unique_ptr *param_1);
unique_ptr * std_unique_ptr_int_array_default_delete_int_array_unique_ptr(unique_ptr *this_,int *param_1);
int std_unique_ptr_int_array_default_delete_int_array_operator_bracket(unique_ptr *this_,uint param_1);
unique_ptr * std_unique_ptr_int_array_default_delete_int_array__unique_ptr(unique_ptr *this_);
unique_ptr * std_unique_ptr_int_default_delete_int__unique_ptr(unique_ptr *this_);
void std_default_delete_int_operator_call(default_delete *this_,int *param_1);
void std_default_delete_int_array_operator_call(default_delete *this_,int *param_1);

/* Additional forward declarations */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);
void *operator_new(unsigned long param_1);
void *operator_new__(unsigned long param_1);
void operator_delete(void *param_1);
void operator_delete__(void *param_1);
void *__cxa_allocate_exception(unsigned long param_1);
void __cxa_throw(void *param_1, void *param_2, void *param_3);
void __cxa_bad_typeid(void);
void __cxa_begin_catch(void);
void std_terminate(void);
int __aeabi_d2iz(int param_1, int param_2);
int strcmp(char *param_1, char *param_2);
size_t strlen(char *param_1);
int printf(char *param_1, ...);
int __dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


/* Simple class definitions */
struct SimpleClass {
 int value;
 char name[32];
};

struct LifecycleClass {
 void *data;
 uint32_t size;
};

struct Base {
 void **vtable;
};

struct Derived {
 void **vtable;
 int value;
};

struct BaseA {
 void **vtable;
};

struct BaseB {
 void **vtable;
};

struct MultiDerived {
 BaseA baseA;
 BaseB baseB;
};

struct VirtualBase {
 void **vtable;
 int data;
};

struct MiddleA {
 void **vtable;
 int offset;
};

struct MiddleB {
 void **vtable;
 int offset;
};

struct DiamondDerived {
 MiddleA middleA;
 MiddleB middleB;
 VirtualBase virtualBase;
};

struct Point {
 int x;
 int y;
};

struct RTTIBase {
 void **vtable;
};

struct RTTIDerivedA {
 RTTIBase base;
};

struct RTTIDerivedB {
 RTTIBase base;
};

struct type_info {
 char *name;
};

struct type {
 int data;
};

struct tuple {
 int data[4];
};

struct _Tuple_impl {
 int data[4];
};

struct _Head_base {
 int data;
};

struct unique_ptr {
 void *ptr;
};

struct __uniq_ptr_impl {
 int data[8];
};

struct __uniq_ptr_data {
 int data[8];
};

struct default_delete {
 int data;
};

struct __0 {
 int data;
};

struct __1 {
 int data;
};

struct __2 {
 int data;
};

struct Init {
 int data;
};

struct Container_int {
 int data[10];
 int size;
};

struct Container_double {
 double data[10];
 int size;
};

/* Global variables */
int instance_count = 0;
void *__dso_handle = 0;
Init std___ioinit = {0};

/* Function: __cxx_global_var_init @ 00010e84 */

void __cxx_global_var_init(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010ed0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_2c [36];
 
 SimpleClass_SimpleClass(aSStack_2c,5,"Test");
 SimpleClass_setValue(aSStack_2c,10);
 iVar1 = SimpleClass_getValue(aSStack_2c);
 iVar2 = SimpleClass_compute(aSStack_2c,3);
 iVar3 = SimpleClass_getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 000110c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass aLStack_14 [8];
 int local_c;
 
 local_c = 0;
 LifecycleClass_LifecycleClass(aLStack_14,5);
 iVar1 = LifecycleClass_getData(aLStack_14,2);
 local_c = local_c + iVar1;
 iVar1 = LifecycleClass_getInstanceCount();
 local_c = local_c + iVar1;
 LifecycleClass__LifecycleClass(aLStack_14);
 iVar1 = LifecycleClass_getInstanceCount();
 return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 00011174 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived aDStack_14 [8];
 Base aBStack_c [4];
 
 Base::Base(aBStack_c);
 Derived::Derived(aDStack_14,3);
 iVar1 = Base::virtual_func(aBStack_c,5);
 iVar2 = Derived::virtual_func(aDStack_14,5);
 iVar3 = call_virtual_func(aBStack_c,5);
 iVar4 = call_virtual_func((Base *)aDStack_14,5);
 Derived::~Derived(aDStack_14);
 Base::~Base(aBStack_c);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 000112c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived *local_38;
 MultiDerived *local_18;
 undefined4 local_14;
 MultiDerived local_10 [4];
 undefined4 local_c;
 
 MultiDerived_MultiDerived(local_10);
 local_14 = 100;
 local_c = 200;
 local_38 = (MultiDerived *)0x0;
 local_18 = local_10;
 if (local_18 != (MultiDerived *)0x0) {
 local_38 = local_10;
 }
 iVar1 = MultiDerived_funcA();
 iVar2 = MultiDerived_funcB();
 MultiDerived__MultiDerived(local_10);
 return iVar1 + iVar2 + (uint)(local_18 != local_38);
}



/* Function: test_cpp_diamond_inheritance @ 000113c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 DiamondDerived *local_38;
 DiamondDerived local_20 [6];
 
 DiamondDerived_DiamondDerived(local_20);
 *(undefined4 *)((int)local_20 + *(int *)(local_20[0].vtable + -0xc) + 4) = 0x32;
 local_38 = (DiamondDerived *)0x0;
 if (local_20 != (DiamondDerived *)0x0) {
 local_38 = local_20;
 }
 iVar1 = DiamondDerived_func(local_38);
 *(undefined4 *)((int)local_20 + *(int *)(local_20[0].vtable + -0xc) + 4) = 100;
 iVar2 = DiamondDerived_func(local_38);
 DiamondDerived__DiamondDerived(local_20);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 000114c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 byte bVar1;
 int iVar2;
 int local_20;
 int local_1c;
 Point aPStack_18 [8];
 Point aPStack_10 [8];
 
 Point::Point(aPStack_10,1,2);
 Point::Point(aPStack_18,3,4);
 Point::operator+((Point *)&local_20,aPStack_10);
 bVar1 = Point::operator==(aPStack_10,aPStack_18);
 Point::operator++((Point *)&local_20);
 iVar2 = local_20 + local_1c + 10;
 if ((bVar1 & 1) != 0) {
 iVar2 = local_20 + local_1c;
 }
 return iVar2;
}



/* Function: test_cpp_template_func @ 00011550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 int local_20;
 int local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_c;
 
 local_c = template_max_int(3,7);
 template_max_double(extraout_d0,extraout_d1);
 local_1c = 10;
 local_20 = 0x14;
 local_18 = extraout_r0;
 local_14 = extraout_r1;
 template_swap_int(&local_1c,&local_20);
 iVar1 = local_c;
 iVar2 = __aeabi_d2iz(local_18,local_14);
 return iVar1 + iVar2 + local_1c + local_20;
}



/* Function: test_cpp_template_class @ 000115e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 undefined4 extraout_s1;
 undefined8 uVar4;
 Container_double aCStack_98 [92];
 int local_3c;
 int local_38;
 Container_int aCStack_34 [44];
 
 Container_int_Container(aCStack_34);
 Container_int_push(aCStack_34,10);
 Container_int_push(aCStack_34,0x14);
 Container_int_push(aCStack_34,0x1e);
 local_38 = Container_int_get(aCStack_34,0);
 local_3c = Container_int_getSize(aCStack_34);
 uVar3 = Container_double_Container(aCStack_98);
 Container_double_push(aCStack_98,(double)CONCAT44(extraout_s1,uVar3));
 uVar4 = Container_double_get(aCStack_98,0);
 iVar1 = local_38 + local_3c;
 iVar2 = __aeabi_d2iz((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
 return iVar1 + iVar2;
}



/* Function: test_cpp_lambda @ 000116b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 __0 a_Stack_1c [4];
 undefined4 local_18;
 undefined4 *local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 10;
 local_10 = 0x14;
 local_18 = 10;
 local_14 = &local_10;
 iVar1 = test_cpp_lambda()::$_1::operator()((__1 *)&local_18,3);
 iVar2 = test_cpp_lambda()::$_0::operator()(a_Stack_1c,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 00011724 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int test_cpp_lambda()::$_1::operator()(__1 *this,int param_1)

{
 **(int **)(this + 4) = **(int **)(this + 4) + 5;
 return param_1 * *(int *)this + **(int **)(this + 4);
}



/* Function: operator() @ 00011760 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int test_cpp_lambda()::$_0::operator()(__0 *this,int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: test_cpp_exception @ 00011784 */

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



/* Function: test_cpp_smart_ptr @ 000118f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int *piVar1;
 undefined4 *puVar2;
 type *ptVar3;
 int iVar4;
 int iVar5;
 unique_ptr auStack_2c [4];
 __2 a_Stack_28 [4];
 int local_24;
 unique_ptr auStack_20 [4];
 int local_1c;
 unique_ptr auStack_18 [12];
 unique_ptr auStack_c [4];
 
 piVar1 = operator_new(4);
 *piVar1 = 100;
 std_unique_ptr_int_default_delete_int_unique_ptr(auStack_c,piVar1);
 puVar2 = (undefined4 *)std_unique_ptr_int_default_delete_int_operator_star(auStack_c);
 *puVar2 = 200;
 ptVar3 = std_move_unique_ptr_int_default_delete_int(auStack_c);
 std_unique_ptr_int_default_delete_int_unique_ptr_move(auStack_18,ptVar3);
 piVar1 = (int *)std_unique_ptr_int_default_delete_int_operator_star(auStack_18);
 local_1c = *piVar1;
 piVar1 = operator_new__(0x14);
 *piVar1 = 1;
 piVar1[1] = 2;
 piVar1[2] = 3;
 piVar1[3] = 4;
 piVar1[4] = 5;
 std_unique_ptr_int_array_default_delete_int_array_unique_ptr(auStack_20,piVar1);
 piVar1 = (int *)std_unique_ptr_int_array_default_delete_int_array_operator_bracket(auStack_20,2);
 local_24 = *piVar1;
 piVar1 = operator_new(4);
 *piVar1 = 500;
 std_unique_ptr_int_test_cpp_smart_ptr___2_unique_ptr_template(auStack_2c,piVar1,a_Stack_28);
 piVar1 = (int *)std_unique_ptr_int_test_cpp_smart_ptr___2_operator_star_template(auStack_2c);
 iVar4 = *piVar1;
 iVar5 = local_1c + local_24;
 std_unique_ptr_int_test_cpp_smart_ptr___2__unique_ptr_template(auStack_2c);
 std_unique_ptr_int_array_default_delete_int_array__unique_ptr(auStack_20);
 std_unique_ptr_int_default_delete_int__unique_ptr(auStack_18);
 std_unique_ptr_int_default_delete_int__unique_ptr(auStack_c);
 return iVar5 + iVar4;
}



/* Function: unique_ptr @ 00011acc */

/* std::unique_ptr<int, test_cpp_smart_ptr>::unique_ptr(int*, test_cpp_smart_ptr const&) */

unique_ptr * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2_unique_ptr_template
 (unique_ptr *this,int *param_1,__2 *param_2)

{
 __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
 __uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 ((__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *)this,param_1,param_2);
 return this;
}



/* Function: operator* @ 00011b10 */

/* std::unique_ptr<int, test_cpp_smart_ptr>::operator*() const */

void __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2_operator_star_template
 (unique_ptr *this)

{
 get(this);
 return;
}



/* Function: ~unique_ptr @ 00011b44 */

/* std::unique_ptr<int, test_cpp_smart_ptr>::~unique_ptr() */

unique_ptr * __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2__unique_ptr_template
 (unique_ptr *this)

{
 int **ppiVar1;
 __2 *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ptVar2 = move<int*&>(ppiVar1);
 test_cpp_smart_ptr()::$_2::operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}



/* Function: test_cpp_rtti @ 00011bd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 int iVar1;
 char *__s;
 size_t sVar2;
 int local_44;
 int local_3c;
 int local_14;
 
 this = operator_new(4);
 *(undefined4 *)this = 0;
 RTTIDerivedA_RTTIDerivedA(this);
 this_00 = operator_new(4);
 *(undefined4 *)this_00 = 0;
 RTTIDerivedB_RTTIDerivedB(this_00);
 local_14 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 iVar1 = std_type_info_operator_eq
 (*(type_info **)(*(int *)this + -4),(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar1 != 0) {
 local_14 = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 iVar1 = std_type_info_operator_eq
 (*(type_info **)(*(int *)this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar1 != 0) {
 local_14 = local_14 + 0x14;
 }
 if (this == (RTTIDerivedA *)0x0) {
 local_3c = 0;
 }
 else {
 local_3c = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_3c != 0) {
 iVar1 = RTTIDerivedA_derivedA_data();
 local_14 = local_14 + iVar1;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_44 = 0;
 }
 else {
 local_44 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (local_44 != 0) {
 iVar1 = RTTIDerivedB_derivedB_data();
 local_14 = local_14 + iVar1;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std_type_info_name(*(type_info **)(*(int *)this + -4));
 sVar2 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (**(code **)(*(int *)this + 4))();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(int *)this_00 + 4))();
 }
 return local_14 + sVar2;
}



/* Function: test_cpp_oo_features @ 00011e74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 printf(&DAT_00014221);
 uVar1 = test_cpp_member_func();
 printf(&DAT_00014246,uVar1);
 uVar1 = test_cpp_constructor();
 printf(&DAT_00014264,uVar1);
 uVar1 = test_cpp_virtual_func();
 printf(&DAT_00014280,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 printf(&DAT_0001429c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 printf(&DAT_000142b8,uVar1);
 uVar1 = test_cpp_operator_overload();
 printf(&DAT_000142d5,uVar1);
 uVar1 = test_cpp_template_func();
 printf(&DAT_000142f1,uVar1);
 uVar1 = test_cpp_template_class();
 printf(&DAT_0001430d,uVar1);
 uVar1 = test_cpp_lambda();
 printf(&DAT_00014329,uVar1);
 uVar1 = test_cpp_exception();
 printf(&DAT_00014345,uVar1);
 uVar1 = test_cpp_smart_ptr();
 printf(&DAT_00014362,uVar1);
 uVar1 = test_cpp_rtti();
 printf(&DAT_0001437f,uVar1);
 return;
}



/* Function: main @ 00011fb4 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl @ 00011fe0 */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr, true, false>::__uniq_ptr_impl(int*, test_cpp_smart_ptr const&) */

__uniq_ptr_data * __thiscall
std___uniq_ptr_data_int_test_cpp_smart_ptr___2_true_false___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1,__2 *param_2
 )

{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this,param_1,param_2);
 return this;
}



/* Function: __uniq_ptr_impl @ 0001201c */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr>::__uniq_ptr_impl(int*, test_cpp_smart_ptr const&) */

__uniq_ptr_impl * __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2___uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1,__2 *param_2)

{
 __2 *p_Var1;
 int *local_10;
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *local_c;
 
 local_10 = param_1;
 local_c = this;
 p_Var1 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
 ((tuple<int*,test_cpp_smart_ptr()::__2> *)this,&local_10,p_Var1);
 return this;
}



/* Function: forward @ 00012064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr const& std::forward<test_cpp_smart_ptr const&>(type&) */

__2 * std_forward_test_cpp_smart_ptr___2_const(type *param_1)

{
 return (__2 *)param_1;
}



/* Function: tuple @ 00012078 */

/* std::tuple<int*, test_cpp_smart_ptr>::tuple(int*&, test_cpp_smart_ptr const&) */

tuple * __thiscall
std_tuple_int_test_cpp_smart_ptr___2_tuple
 (tuple *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 __2 *p_Var2;
 
 ppiVar1 = forward<int*&>((type *)param_1);
 p_Var2 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 _Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
 _Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
 ((_Tuple_impl<0u,int*,test_cpp_smart_ptr()::__2> *)this,ppiVar1,p_Var2);
 return this;
}



/* Function: _Tuple_impl @ 000120d4 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr>::_Tuple_impl(int*&, test_cpp_smart_ptr const&) */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int_test_cpp_smart_ptr___2__Tuple_impl
 (_Tuple_impl *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 
 forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 _Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
 ppiVar1 = forward<int*&>((type *)param_1);
 _Head_base<0u,int*,false>::_Head_base<int*&>((_Head_base<0u,int*,false> *)this,ppiVar1);
 return this;
}



/* Function: _Tuple_impl @ 0001212c */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr>::_Tuple_impl(test_cpp_smart_ptr const&) */

__2 * std__Tuple_impl_1u_test_cpp_smart_ptr___2__Tuple_impl(__2 *param_1)

{
 _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
 return param_1;
}



/* Function: _Head_base @ 00012160 */

/* std::_Head_base<1u, test_cpp_smart_ptr, true>::_Head_base(test_cpp_smart_ptr const&) */

__2 * std__Head_base_1u_test_cpp_smart_ptr___2_true__Head_base(__2 *param_1)

{
 return param_1;
}



/* Function: _M_ptr @ 00012178 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr>::_M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr
 (__uniq_ptr_impl *this)

{
 get<0u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
 return;
}



/* Function: get_deleter @ 0001219c */

/* std::unique_ptr<int, test_cpp_smart_ptr>::get_deleter() */

undefined4 __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2_get_deleter_template
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 return uVar1;
}



/* Function: operator() @ 000121d0 */

/* test_cpp_smart_ptr::operator()(int*) const */

void __thiscall test_cpp_smart_ptr___2_operator_call(__2 *this,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: get @ 0001221c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr> >::type& std::get<0u>(std::tuple<int*, test_cpp_smart_ptr>&) */

type * std_get_0u_int_test_cpp_smart_ptr___2(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper @ 00012240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr>&) */

int ** std___get_helper_0u_int_test_cpp_smart_ptr___2(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00012264 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr>&) */

void std__Tuple_impl_0u_int_test_cpp_smart_ptr___2__M_head(_Tuple_impl *param_1)

{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_deleter @ 00012288 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr>::_M_deleter() */

void __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_deleter
 (__uniq_ptr_impl *this)

{
 get<1u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
 return;
}



/* Function: get @ 000122ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr> >::type& std::get<1u>(std::tuple<int*, test_cpp_smart_ptr>&) */

type * std_get_1u_int_test_cpp_smart_ptr___2(tuple *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = __get_helper<1u,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: __get_helper @ 000122d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr& std::__get_helper<1u>(std::_Tuple_impl<1u, test_cpp_smart_ptr>&) */

__2 * std___get_helper_1u_test_cpp_smart_ptr___2(_Tuple_impl *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = (__2 *)_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
 return p_Var1;
}



/* Function: _M_head @ 000122f4 */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr>&) */

void std__Tuple_impl_1u_test_cpp_smart_ptr___2__M_head(_Tuple_impl *param_1)

{
 _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00012318 */

/* std::_Head_base<1u, test_cpp_smart_ptr, true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr, true>&) */

_Head_base * std__Head_base_1u_test_cpp_smart_ptr___2_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 0001232c */

/* std::unique_ptr<int, test_cpp_smart_ptr>::get() const */

undefined4 __thiscall
std_unique_ptr_int_test_cpp_smart_ptr___2_get_template(unique_ptr *this)

{
 undefined4 uVar1;
 
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00012360 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr>::_M_ptr() const */

undefined4 __thiscall
std___uniq_ptr_impl_int_test_cpp_smart_ptr___2__M_ptr_const
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = get<0u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
 return *(undefined4 *)ptVar1;
}



/* Function: get @ 00012388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr> >::type const& std::get<0u>(std::tuple<int*, test_cpp_smart_ptr> const&) */

type * std_get_0u_int_test_cpp_smart_ptr___2_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper @ 000123ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr> const&) */

int ** std___get_helper_0u_int_test_cpp_smart_ptr___2_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 000123d0 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr> const&) */

void std__Tuple_impl_0u_int_test_cpp_smart_ptr___2__M_head_const(_Tuple_impl *param_1)

{
 _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: SimpleClass @ 000123f4 */

/* SimpleClass::SimpleClass(int, char const*) */

void SimpleClass_SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}



/* Function: setValue @ 00012444 */

/* SimpleClass::setValue(int) */

void SimpleClass_setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return;
}



/* Function: getValue @ 00012464 */

/* SimpleClass::getValue() const */

undefined4 SimpleClass_getValue(SimpleClass *this)

{
 return *(undefined4 *)this;
}



/* Function: compute @ 0001247c */

/* SimpleClass::compute(int) const */

int SimpleClass_compute(SimpleClass *this,int param_1)

{
 size_t sVar1;
 int iVar2;
 
 iVar2 = *(int *)this;
 sVar1 = strlen((char *)(this + 4));
 return iVar2 * param_1 + sVar1;
}



/* Function: getClassID @ 000124c4 */

/* SimpleClass::getClassID() */

undefined4 SimpleClass_getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 000124d0 */

/* LifecycleClass::LifecycleClass(unsigned int) */

LifecycleClass *LifecycleClass_LifecycleClass(LifecycleClass *this,uint param_1)

{
 uint uVar1;
 void *pvVar2;
 uint local_18;
 
 *(uint *)(this + 4) = param_1;
 uVar1 = param_1 << 2;
 if (param_1 != (param_1 & 0x3fffffff)) {
 uVar1 = 0xffffffff;
 }
 pvVar2 = operator_new__(uVar1);
 *(void **)this = pvVar2;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 *(uint *)(*(int *)this + local_18 * 4) = local_18 * 10;
 }
 instance_count = instance_count + 1;
 return this;
}



/* Function: getData @ 0001259c */

/* LifecycleClass::getData(unsigned int) const */

undefined4 LifecycleClass_getData(LifecycleClass *this,uint param_1)

{
 undefined4 local_10;
 
 if (param_1 < *(uint *)(this + 4)) {
 local_10 = *(undefined4 *)(*(int *)this + param_1 * 4);
 }
 else {
 local_10 = 0xffffffff;
 }
 return local_10;
}



/* Function: getInstanceCount @ 000125f4 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass_getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 00012604 */

/* LifecycleClass::~LifecycleClass() */

LifecycleClass *LifecycleClass__LifecycleClass(LifecycleClass *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return this;
}



/* Function: Base @ 0001266c */

/* Base::Base() */

void Base_Base(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00024c48;
 return;
}



/* Function: Derived @ 00012694 */

/* Derived::Derived(int) */

void Derived_Derived(Derived *this,int param_1)

{
 Base_Base((Base *)this);
 *(undefined ***)this = &PTR_virtual_func_00024c68;
 *(int *)(this + 4) = param_1;
 return;
}



/* Function: virtual_func @ 000126e0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 000126fc */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: ~Derived @ 00012720 */

/* Derived::~Derived() */

Derived *Derived__Derived(Derived *this)

{
 Base__Base((Base *)this);
 return this;
}



/* Function: ~Base @ 0001274c */

/* Base::~Base() */

Base *Base__Base(Base *this)

{
 return this;
}



/* Function: MultiDerived @ 00012760 */

/* MultiDerived::MultiDerived() */

void MultiDerived_MultiDerived(MultiDerived *this)

{
 BaseA_BaseA((BaseA *)this);
 BaseB_BaseB((BaseB *)(this + 8));
 *(undefined ***)this = &PTR_funcA_00024c8c;
 *(undefined ***)(this + 8) = &PTR_funcB_00024ca4;
 return;
}



/* Function: ~MultiDerived @ 000127b4 */

/* MultiDerived::~MultiDerived() */

MultiDerived *MultiDerived__MultiDerived(MultiDerived *this)

{
 BaseB__BaseB((BaseB *)(this + 8));
 BaseA__BaseA((BaseA *)this);
 return this;
}



/* Function: DiamondDerived @ 000127ec */

/* DiamondDerived::DiamondDerived() */

void DiamondDerived_DiamondDerived(DiamondDerived *this)

{
 VirtualBase_VirtualBase((VirtualBase *)(this + 0x10));
 MiddleA_MiddleA((MiddleA *)this);
 MiddleB_MiddleB((MiddleB *)(this + 8));
 *(undefined ***)this = &PTR_func_00024d14;
 *(undefined ***)(this + 0x10) = &PTR_func_00024d48;
 *(undefined ***)(this + 8) = &PTR_func_00024d2c;
 return;
}



/* Function: ~DiamondDerived @ 00012870 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 0x10));
 return this;
}



/* Function: Point @ 000128b4 */

/* Point::Point(int, int) */

void Point_Point(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}



/* Function: operator+ @ 000128e0 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

void Point_operator+(Point *this,Point *param_1)

{
 int *in_r2;
 
 Point_Point(this,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
 return;
}



/* Function: operator== @ 00012924 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool Point_operator==(Point *this,Point *param_1)

{
 bool bVar1;
 
 bVar1 = false;
 if (*(int *)this == *(int *)param_1) {
 bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return bVar1;
}



/* Function: operator++ @ 0001298c */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void Point_operator++(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}



/* Function: template_max_int @ 000129b8 */

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



/* Function: template_max_double @ 000129fc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012a28 */
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



/* Function: template_swap_int @ 00012a74 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00012ab0 */

/* Container_int::Container_int() */

void Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00012acc */

/* Container_int::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00012b14 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 local_4;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_4 = 0;
 }
 else {
 local_4 = *(undefined4 *)(this + param_1 * 4);
 }
 return local_4;
}



/* Function: getSize @ 00012b7c */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00012b94 */

/* Container<double>::Container() */

void Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00012bb0 */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *this,double param_1)

{
 int in_r0;
 undefined4 *puVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar2;
 
 if (*(int *)(in_r0 + 0x50) < 10) {
 iVar2 = *(int *)(in_r0 + 0x50);
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 }
 return SUB84(param_1,0);
}



/* Function: get @ 00012c04 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this,int param_1)

{
 undefined4 local_8;
 undefined4 local_4;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_4 = 0;
 local_8 = 0;
 }
 else {
 local_8 = *(undefined4 *)(this + param_1 * 8);
 local_4 = *(undefined4 *)(this + param_1 * 8 + 4);
 }
 return CONCAT44(local_4,local_8);
}



/* Function: getSize @ 00012c7c */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr @ 00012c94 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(int*)
 */

unique_ptr * __thiscall
std_unique_ptr_int_default_delete_int_unique_ptr
 (unique_ptr *this,int *param_1)

{
 std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1);
 return this;
}



/* Function: operator* @ 00012cd0 */

/* std::unique_ptr<int, std::default_delete<int> >::operator*() const */

void __thiscall
std_unique_ptr_int_default_delete_int_operator_star
 (unique_ptr *this)

{
 std_unique_ptr_int_default_delete_int_get(this);
 return;
}



/* Function: move @ 00012d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move<std::unique_ptr<int,std::default_delete<int>>&> */

type * std_move_unique_ptr_int_default_delete_int(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: unique_ptr @ 00012d18 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr&&) */

unique_ptr * __thiscall
std_unique_ptr_int_default_delete_int_unique_ptr_move
 (unique_ptr *this,unique_ptr *param_1)

{
 std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data
 ((__uniq_ptr_data *)this,
 (__uniq_ptr_data *)param_1);
 return this;
}



/* Function: unique_ptr @ 00012d4c */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr(int*) */

unique_ptr * __thiscall
std_unique_ptr_int_array_default_delete_int_array_unique_ptr
 (unique_ptr *this,int *param_1)

{
 std___uniq_ptr_data_int_default_delete_int_array_true_true___uniq_ptr_impl
 ((__uniq_ptr_data *)this,param_1);
 return this;
}



/* Function: operator[] @ 00012d88 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int __thiscall
std_unique_ptr_int_array_default_delete_int_array_operator_bracket
 (unique_ptr *this,uint param_1)

{
 int iVar1;
 
 iVar1 = std_unique_ptr_int_array_default_delete_int_array_get(this);
 return iVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 00012dc8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

unique_ptr * __thiscall
std_unique_ptr_int_array_default_delete_int_array__unique_ptr
 (unique_ptr *this)

{
 int *piVar1;
 default_delete *this_00;
 
 piVar1 = (int *)std___uniq_ptr_impl_int_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl *)this);
 if (*piVar1 != (int *)0x0) {
 this_00 = (default_delete *)std_unique_ptr_int_array_default_delete_int_array_get_deleter(this);
 std_default_delete_int_array_operator()(this_00,(int *)*piVar1);
 }
 *piVar1 = (int *)0x0;
 return this;
}



/* Function: ~unique_ptr @ 00012e3c */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

unique_ptr * __thiscall
std_unique_ptr_int_default_delete_int__unique_ptr
 (unique_ptr *this)

{
 int **ppiVar1;
 default_delete *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)std___uniq_ptr_impl_int_default_delete_int__M_ptr
 ((__uniq_ptr_impl *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete *)std_unique_ptr_int_default_delete_int_get_deleter(this);
 ptVar2 = std_move_int_ptr(ppiVar1);
 std_default_delete_int_operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return this;
}



/* Function: RTTIDerivedA @ 00012ec0 */

/* RTTIDerivedA::RTTIDerivedA() */

void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedA_00024ec4;
 return;
}



/* Function: RTTIDerivedB @ 00012f00 */

/* RTTIDerivedB::RTTIDerivedB() */

void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase_RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedB_00024eec;
 return;
}



/* Function: operator== @ 00012f40 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool std_type_info_operator_eq(type_info *this,type_info *param_1)

{
 int iVar1;
 bool bVar2;
 
 bVar2 = true;
 if ((*(int *)(this + 4) != *(int *)(param_1 + 4)) && (bVar2 = false, **(char **)(this + 4) != '*')
 ) {
 iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
 bVar2 = iVar1 == 0;
 }
 return bVar2;
}



/* Function: derivedA_data @ 00012fe0 */

/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA_derivedA_data(void)

{
 return 100;
}



/* Function: derivedB_data @ 00012ff4 */

/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB_derivedB_data(void)

{
 return 200;
}



/* Function: name @ 00013008 */

/* std::type_info::name() const */

int std_type_info_name(type_info *this)

{
 int local_c;
 
 if (**(char **)(this + 4) == '*') {
 local_c = *(int *)(this + 4) + 1;
 }
 else {
 local_c = *(int *)(this + 4);
 }
 return local_c;
}



/* Function: getName @ 0001305c */

/* Base::getName() const */

undefined4 Base_getName(void)

{
 return (undefined4)&DAT_0001439d;
}



/* Function: ~Base @ 00013078 */

/* Base::~Base() */

void Base__Base(Base *this)

{
 Base__Base(this);
 operator_delete(this);
 return;
}



/* Function: getName @ 000130a8 */

/* Derived::getName() const */

undefined4 Derived_getName(void)

{
 return (undefined4)"Derived";
}



/* Function: ~Derived @ 000130c4 */

/* Derived::~Derived() */

void Derived__Derived(Derived *this)

{
 Derived__Derived(this);
 operator_delete(this);
 return;
}



/* Function: BaseA @ 000130f4 */

/* BaseA::BaseA() */

void BaseA_BaseA(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_00024ce8;
 return;
}



/* Function: BaseB @ 0001311c */

/* BaseB::BaseB() */

void BaseB_BaseB(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_00024cfc;
 return;
}



/* Function: funcA @ 00013144 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00013158 */

/* MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived(MultiDerived *this)

{
 MultiDerived__MultiDerived(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00013188 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 0001319c */

/* non-virtual thunk to MultiDerived::funcB() */

void MultiDerived_funcB_thunk(MultiDerived *this)

{
 MultiDerived_funcB();
 return;
}



/* Function: ~MultiDerived @ 000131b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived(MultiDerived *this)

{
 MultiDerived__MultiDerived(this + -8);
 return;
}



/* Function: ~MultiDerived @ 000131d0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__MultiDerived(MultiDerived *this)

{
 MultiDerived__MultiDerived(this + -8);
 return;
}



/* Function: funcA @ 000131e8 */

/* BaseA::funcA() */

undefined4 BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 000131fc */

/* BaseA::~BaseA() */

BaseA *BaseA__BaseA(BaseA *this)

{
 return this;
}



/* Function: ~BaseA @ 00013210 */

/* BaseA::~BaseA() */

void BaseA__BaseA(BaseA *this)

{
 BaseA__BaseA(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00013240 */

/* BaseB::funcB() */

undefined4 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 00013254 */

/* BaseB::~BaseB() */

BaseB *BaseB__BaseB(BaseB *this)

{
 return this;
}



/* Function: ~BaseB @ 00013268 */

/* BaseB::~BaseB() */

void BaseB__BaseB(BaseB *this)

{
 BaseB__BaseB(this);
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00013298 */

/* VirtualBase::VirtualBase() */

void VirtualBase_VirtualBase(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00024e38;
 return;
}



/* Function: MiddleA @ 000132c0 */

/* MiddleA::MiddleA() */

void MiddleA_MiddleA(MiddleA *this)

{
 undefined4 *in_r1;
 
 *(undefined4 *)this = *in_r1;
 *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return;
}



/* Function: MiddleB @ 000132f4 */

/* MiddleB::MiddleB() */

void MiddleB_MiddleB(MiddleB *this)

{
 undefined4 *in_r1;
 
 *(undefined4 *)this = *in_r1;
 *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
 return;
}



/* Function: func @ 00013328 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00013350 */

/* MiddleA::~MiddleA() */

MiddleA *MiddleA__MiddleA(MiddleA *this)

{
 MiddleA__MiddleA(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 8));
 return this;
}



/* Function: ~MiddleA @ 00013394 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA(MiddleA *this)

{
 MiddleA__MiddleA(this);
 operator_delete(this);
 return;
}



/* Function: func @ 000133c4 */

/* virtual thunk to MiddleA::func() */

void MiddleA_func(MiddleA *this)

{
 MiddleA_func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: ~MiddleA @ 000133e4 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA(MiddleA *this)

{
 MiddleA__MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MiddleA @ 00013408 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA__MiddleA(MiddleA *this)

{
 MiddleA__MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00013428 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 00013450 */

/* MiddleB::~MiddleB() */

MiddleB *MiddleB__MiddleB(MiddleB *this)

{
 MiddleB__MiddleB(this);
 VirtualBase__VirtualBase((VirtualBase *)(this + 8));
 return this;
}



/* Function: ~MiddleB @ 00013494 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB(MiddleB *this)

{
 MiddleB__MiddleB(this);
 operator_delete(this);
 return;
}



/* Function: func @ 000134c4 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func(MiddleB *this)

{
 MiddleB_func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: ~MiddleB @ 000134e4 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB(MiddleB *this)

{
 MiddleB__MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MiddleB @ 00013508 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB__MiddleB(MiddleB *this)

{
 MiddleB__MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00013528 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00013550 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00013580 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func(DiamondDerived *this)

{
 DiamondDerived_func(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 00013598 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 000135b4 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + -8);
 return;
}



/* Function: func @ 000135cc */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func(DiamondDerived *this)

{
 DiamondDerived_func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: ~DiamondDerived @ 000135ec */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00013610 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 DiamondDerived__DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00013630 */

/* VirtualBase::func() */

undefined4 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00013644 */

/* VirtualBase::~VirtualBase() */

VirtualBase *VirtualBase__VirtualBase(VirtualBase *this)

{
 return this;
}



/* Function: ~VirtualBase @ 00013658 */

/* VirtualBase::~VirtualBase() */

void VirtualBase__VirtualBase(VirtualBase *this)

{
 VirtualBase__VirtualBase(this);
 operator_delete(this);
 return;
}



/* Function: ~MiddleA @ 00013688 */

/* MiddleA::~MiddleA() */

MiddleA *MiddleA__MiddleA(MiddleA *this)

{
 return this;
}



/* Function: ~MiddleB @ 000136a0 */

/* MiddleB::~MiddleB() */

MiddleB *MiddleB__MiddleB(MiddleB *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 000136b8 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived__DiamondDerived(DiamondDerived *this)

{
 MiddleB__MiddleB((MiddleB *)(this + 8));
 MiddleA__MiddleA((MiddleA *)this);
 return this;
}



/* Function: __uniq_ptr_data @ 00013708 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

__uniq_ptr_data * __thiscall
std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data
 (__uniq_ptr_data *this,__uniq_ptr_data *param_1)

{
 std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,(__uniq_ptr_impl *)param_1);
 return this;
}



/* Function: __uniq_ptr_impl @ 0001373c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

__uniq_ptr_impl * __thiscall
std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined4 *puVar2;
 
 ptVar1 = std_move_tuple_int_default_delete_int((tuple *)param_1);
 std_tuple_int_default_delete_int_tuple
 ((tuple *)this,(tuple *)ptVar1);
 puVar2 = (undefined4 *)std___uniq_ptr_impl_int_default_delete_int__M_ptr((__uniq_ptr_impl *)param_1);
 *puVar2 = 0;
 return this;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 0001379c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
 >&) */

type * std_move_tuple_int_default_delete_int(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: tuple @ 000137b0 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

tuple * __thiscall
std_tuple_int_default_delete_int_tuple
 (tuple *this,tuple *param_1)

{
 std__Tuple_impl_0u_int_default_delete_int__Tuple_impl
 ((_Tuple_impl *)this,(_Tuple_impl *)param_1);
 return this;
}



/* Function: _M_ptr @ 000137e4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int__M_ptr
 (__uniq_ptr_impl *this)

{
 std_get_0u_int_default_delete_int((tuple *)this);
 return;
}



/* Function: __clang_call_terminate @ 00013808 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 std::terminate();
}



/* Function: _Tuple_impl @ 00013810 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0u, int*,
 std::default_delete<int> >&&) */

void __thiscall
std__Tuple_impl_0u_int_default_delete_int__Tuple_impl
 (_Tuple_impl *this,_Tuple_impl *param_1)

{
 std__Tuple_impl_1u_default_delete_int__Tuple_impl((_Tuple_impl *)this);
 *(undefined4 *)this = *(undefined4 *)param_1;
 return;
}



/* Function: _Tuple_impl @ 00013850 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
 std::default_delete<int> >&&) */

_Tuple_impl * std__Tuple_impl_1u_default_delete_int__Tuple_impl(_Tuple_impl *param_1)

{
 return param_1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00013868 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type& std::get<0u, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std_get_0u_int_default_delete_int(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_default_delete_int((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 0001388c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
 std::default_delete<int> >&) */

int ** std___get_helper_0u_int_default_delete_int(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_default_delete_int__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 000138b0 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int> >&) */

void std__Tuple_impl_0u_int_default_delete_int__M_head(_Tuple_impl *param_1)

{
 std__Head_base_0u_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 000138d4 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false>&) */

_Head_base * std__Head_base_0u_int_false__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: RTTIBase @ 000138e8 */

/* RTTIBase::RTTIBase() */

void RTTIBase_RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00024ed8;
 return;
}



/* Function: ~RTTIDerivedA @ 00013910 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA *RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return this;
}



/* Function: ~RTTIDerivedA @ 0001393c */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIDerivedA__RTTIDerivedA(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 0001396c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00013980 */

/* RTTIBase::~RTTIBase() */

RTTIBase *RTTIBase__RTTIBase(RTTIBase *this)

{
 return this;
}



/* Function: ~RTTIBase @ 00013994 */

/* RTTIBase::~RTTIBase() */

void RTTIBase__RTTIBase(RTTIBase *this)

{
 RTTIBase__RTTIBase(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 000139c4 */

/* RTTIBase::getType() const */

undefined4 RTTIBase_getType(void)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 000139d8 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB *RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase__RTTIBase((RTTIBase *)this);
 return this;
}



/* Function: ~RTTIDerivedB @ 00013a04 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIDerivedB__RTTIDerivedB(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00013a34 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 00013a48 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data * __thiscall
std___uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return this;
}



/* Function: __uniq_ptr_impl @ 00013a7c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

__uniq_ptr_impl * __thiscall
std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1)

{
 undefined4 *puVar1;
 
 std_tuple_int_default_delete_int_tuple_true_true
 ((tuple *)this);
 puVar1 = (undefined4 *)std___uniq_ptr_impl_int_default_delete_int__M_ptr(this);
 *puVar1 = param_1;
 return this;
}



/* Function: tuple<true,true> @ 00013ac8 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

tuple * __thiscall
std_tuple_int_default_delete_int_tuple_true_true
 (tuple *this)

{
 std__Tuple_impl_0u_int_default_delete_int__Tuple_impl
 ((_Tuple_impl *)this);
 return this;
}



/* Function: _Tuple_impl @ 00013afc */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int_default_delete_int__Tuple_impl
 (_Tuple_impl *this)

{
 std__Tuple_impl_1u_default_delete_int__Tuple_impl
 ((_Tuple_impl *)this);
 std__Head_base_0u_int_false__Head_base((_Head_base *)this);
 return this;
}



/* Function: _Tuple_impl @ 00013b30 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_1u_default_delete_int__Tuple_impl
 (_Tuple_impl *this)

{
 std__Head_base_1u_default_delete_int_true__Head_base
 ((_Head_base *)this);
 return this;
}



/* Function: _Head_base @ 00013b5c */

/* std::_Head_base<0u, int*, false>::_Head_base() */

void std__Head_base_0u_int_false__Head_base(_Head_base *this)

{
 *(undefined4 *)this = 0;
 return;
}



/* Function: _Head_base @ 00013b78 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_Head_base() */

_Head_base * __thiscall
std__Head_base_1u_default_delete_int_true__Head_base
 (_Head_base *this)

{
 return this;
}



/* Function: get_deleter @ 00013b8c */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined4 __thiscall
std_unique_ptr_int_default_delete_int_get_deleter
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 uVar1 = std___uniq_ptr_impl_int_default_delete_int__M_deleter
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: operator() @ 00013bc0 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void std_default_delete_int_operator_call(default_delete *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: move<int*&> @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std_move_int_ptr(int **param_1)

{
 return (type *)param_1;
}



/* Function: _M_deleter @ 00013c14 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int__M_deleter
 (__uniq_ptr_impl *this)

{
 std_get_1u_int_default_delete_int((tuple *)this);
 return;
}



/* Function: get<1u,int*,std::default_delete<int>> @ 00013c38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int> > >::type& std::get<1u, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std_get_1u_int_default_delete_int(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std___get_helper_1u_default_delete_int((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1u,std::default_delete<int>> @ 00013c5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1u, std::default_delete<int>>(std::_Tuple_impl<1u,
 std::default_delete<int>>&) */

default_delete * std___get_helper_1u_default_delete_int(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std__Tuple_impl_1u_default_delete_int__M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00013c80 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_M_head(std::_Tuple_impl<1u,
 std::default_delete<int> >&) */

void std__Tuple_impl_1u_default_delete_int__M_head(_Tuple_impl *param_1)

{
 std__Head_base_1u_default_delete_int_true__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00013ca4 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_M_head(std::_Head_base<1u,
 std::default_delete<int>, true>&) */

_Head_base * std__Head_base_1u_default_delete_int_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00013cb8 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined4 __thiscall
std_unique_ptr_int_default_delete_int_get(unique_ptr *this)

{
 undefined4 uVar1;
 
 uVar1 = std___uniq_ptr_impl_int_default_delete_int__M_ptr
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00013cec */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined4 __thiscall
std___uniq_ptr_impl_int_default_delete_int__M_ptr_const
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_default_delete_int_const((tuple *)this);
 return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00013d14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0u,
 int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std_get_0u_int_default_delete_int_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_default_delete_int_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00013d38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
 std::default_delete<int> > const&) */

int ** std___get_helper_0u_int_default_delete_int_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_default_delete_int__M_head_const(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00013d5c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int> > const&) */

void std__Tuple_impl_0u_int_default_delete_int__M_head_const(_Tuple_impl *param_1)

{
 std__Head_base_0u_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00013d80 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false> const&) */

_Head_base * std__Head_base_0u_int_false__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __uniq_ptr_impl @ 00013d94 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data * __thiscall
std___uniq_ptr_data_int_default_delete_int_array_true_true___uniq_ptr_impl
 (__uniq_ptr_data *this,int *param_1)

{
 std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl
 ((__uniq_ptr_impl *)this,param_1);
 return this;
}



/* Function: __uniq_ptr_impl @ 00013dc8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

__uniq_ptr_impl * __thiscall
std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl
 (__uniq_ptr_impl *this,int *param_1)

{
 undefined4 *puVar1;
 
 std_tuple_int_default_delete_int_array_tuple_true_true
 ((tuple *)this);
 puVar1 = (undefined4 *)std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(this);
 *puVar1 = param_1;
 return this;
}



/* Function: tuple<true,true> @ 00013e14 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

tuple * __thiscall
std_tuple_int_default_delete_int_array_tuple_true_true
 (tuple *this)

{
 std__Tuple_impl_0u_int_default_delete_int_array__Tuple_impl
 ((_Tuple_impl *)this);
 return this;
}



/* Function: _M_ptr @ 00013e48 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int_array__M_ptr
 (__uniq_ptr_impl *this)

{
 std_get_0u_int_default_delete_int_array((tuple *)this);
 return;
}



/* Function: _Tuple_impl @ 00013e6c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_0u_int_default_delete_int_array__Tuple_impl
 (_Tuple_impl *this)

{
 std__Tuple_impl_1u_default_delete_int_array__Tuple_impl
 ((_Tuple_impl *)this);
 std__Head_base_0u_int_false__Head_base((_Head_base *)this);
 return this;
}



/* Function: _Tuple_impl @ 00013ea0 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl * __thiscall
std__Tuple_impl_1u_default_delete_int_array__Tuple_impl
 (_Tuple_impl *this)

{
 std__Head_base_1u_default_delete_int_array_true__Head_base
 ((_Head_base *)this);
 return this;
}



/* Function: _Head_base @ 00013ecc */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_Head_base() */

_Head_base * __thiscall
std__Head_base_1u_default_delete_int_array_true__Head_base
 (_Head_base *this)

{
 return this;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00013ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0u, int*,
 std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_0u_int_default_delete_int_array(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_default_delete_int_array((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00013f04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
 std::default_delete<int []> >&) */

int ** std___get_helper_0u_int_default_delete_int_array(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_default_delete_int_array__M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00013f28 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int []> >&) */

void std__Tuple_impl_0u_int_default_delete_int_array__M_head(_Tuple_impl *param_1)

{
 std__Head_base_0u_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: get_deleter @ 00013f4c */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined4 __thiscall
std_unique_ptr_int_array_default_delete_int_array_get_deleter
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 uVar1 = std___uniq_ptr_impl_int_default_delete_int_array__M_deleter
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: operator() @ 00013f80 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
 []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void std_default_delete_int_array_operator_call(default_delete *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: _M_deleter @ 00013fc0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std___uniq_ptr_impl_int_default_delete_int_array__M_deleter
 (__uniq_ptr_impl *this)

{
 std_get_1u_int_default_delete_int_array((tuple *)this);
 return;
}



/* Function: get<1u,int*,std::default_delete<int[]>> @ 00013fe4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1u, int*,
 std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std_get_1u_int_default_delete_int_array(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = std___get_helper_1u_default_delete_int_array((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1u,std::default_delete<int[]>> @ 00014008 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1u, std::default_delete<int
 []>>(std::_Tuple_impl<1u, std::default_delete<int []>>&) */

default_delete * std___get_helper_1u_default_delete_int_array(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)std__Tuple_impl_1u_default_delete_int_array__M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 0001402c */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1u,
 std::default_delete<int []> >&) */

void std__Tuple_impl_1u_default_delete_int_array__M_head(_Tuple_impl *param_1)

{
 std__Head_base_1u_default_delete_int_array_true__M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00014050 */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_M_head(std::_Head_base<1u,
 std::default_delete<int []>, true>&) */

_Head_base * std__Head_base_1u_default_delete_int_array_true__M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00014064 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined4 __thiscall
std_unique_ptr_int_array_default_delete_int_array_get
 (unique_ptr *this)

{
 undefined4 uVar1;
 
 uVar1 = std___uniq_ptr_impl_int_default_delete_int_array__M_ptr
 ((__uniq_ptr_impl *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00014098 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined4 __thiscall
std___uniq_ptr_impl_int_default_delete_int_array__M_ptr_const
 (__uniq_ptr_impl *this)

{
 type *ptVar1;
 
 ptVar1 = std_get_0u_int_default_delete_int_array_const((tuple *)this);
 return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 000140c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type const& std::get<0u,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> > const&) */

type * std_get_0u_int_default_delete_int_array_const(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)std___get_helper_0u_int_default_delete_int_array_const((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 000140e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
 std::default_delete<int []> > const&) */

int ** std___get_helper_0u_int_default_delete_int_array_const(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)std__Tuple_impl_0u_int_default_delete_int_array__M_head_const(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00014108 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
 std::default_delete<int []> > const&) */

void std__Tuple_impl_0u_int_default_delete_int_array__M_head_const(_Tuple_impl *param_1)

{
 std__Head_base_0u_int_false__M_head((_Head_base *)param_1);
 return;
}



/* Function: forward<int*&> @ 0001412c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std_forward_int_ptr(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00014140 */

/* std::_Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std__Head_base_0u_int_false__Head_base_int_ptr(_Head_base *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = std_forward_int_ptr((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 214 */
