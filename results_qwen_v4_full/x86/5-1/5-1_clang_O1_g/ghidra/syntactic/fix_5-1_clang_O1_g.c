/* Auto-injected type definitions by preprocessor */
#define __thiscall __attribute__((thiscall))

/* Ghidra types */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined3[3];
typedef void (*code)(void);

#include <stdint.h>
#include <stddef.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Forward declarations for classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct Point Point;

/* Function pointer types */
typedef int (*_func_int_ptr)(void *, int);

/* Vtable type - pointer to array of function pointers */
typedef _func_int_ptr *vtable_ptr;

/* Vtable entry type - single function pointer */
typedef int (*vtable_entry_t)(void *, int);

/* Generic function pointer for vtable calls */
typedef int (*vfunc_t)(void *, int);

/* Destructor function pointer type */
typedef void (*destructor_t)(void *);

/* External function declarations - with stub implementations */
void *operator_new(size_t size) {
    return malloc(size);
}

void *operator_new__(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

void operator_delete__(void *ptr) {
    free(ptr);
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso) {
    return 0;
}

void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    /* Stub - does not return in real implementation */
    exit(1);
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags) {
    return 0;
}

/* External variables */
void *__dso_handle = 0;
vtable_entry_t PTR_virtual_func_00015ce4 = 0;
vtable_entry_t PTR_virtual_func_00015d04 = 0;
vtable_entry_t PTR_funcA_00015d28 = 0;
vtable_entry_t PTR__ZThn8_N12MultiDerived5funcBEv_00015d40 = 0;
vtable_entry_t PTR_func_00015db0 = 0;
vtable_entry_t PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8 = 0;
vtable_entry_t PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4 = 0;
void *PTR__RTTIBase_00015ecc = 0;
void *PTR__RTTIBase_00015ee0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *int_typeinfo = 0;

/* Forward function declarations */
int Base_virtual_func(Base *this, int x);
int Derived_virtual_func(Derived *this, int x);
void Base_destructor(Base *this);
void MultiDerived_destructor(MultiDerived *this);
void DiamondDerived_destructor(DiamondDerived *this);
int MultiDerived_funcA(MultiDerived *this);
int MultiDerived_funcB(MultiDerived *this);
void _ZThn8_N12MultiDerived5funcBEv(void);
void _ZThn8_N12MultiDerivedD1Ev(void);
void _ZThn8_N12MultiDerivedD0Ev(int in_stack_00000004);
int BaseA_funcA(BaseA *this);
void BaseA_destructor(BaseA *this);
void BaseA_destructor_delete(BaseA *this);
int BaseB_funcB(BaseB *this);
void BaseB_destructor(BaseB *this);
void BaseB_destructor_delete(BaseB *this);
int MiddleA_func(MiddleA *this);
void MiddleA_destructor(MiddleA *this);
void MiddleA_destructor_delete(MiddleA *this);
void _ZTv0_n12_N7MiddleA4funcEv(void);
void _ZTv0_n16_N7MiddleAD1Ev(void);
void _ZTv0_n16_N7MiddleAD0Ev(int *in_stack_00000004);
int MiddleB_func(MiddleB *this);
void MiddleB_destructor(MiddleB *this);
void MiddleB_destructor_delete(MiddleB *this);
void _ZTv0_n12_N7MiddleB4funcEv(void);
void _ZTv0_n16_N7MiddleBD1Ev(void);
void _ZTv0_n16_N7MiddleBD0Ev(int *in_stack_00000004);
int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived_destructor_delete(DiamondDerived *this);
void _ZThn8_N14DiamondDerived4funcEv(void);
void _ZThn8_N14DiamondDerivedD1Ev(void);
void _ZThn8_N14DiamondDerivedD0Ev(int in_stack_00000004);
void _ZTv0_n12_N14DiamondDerived4funcEv(void);
void _ZTv0_n16_N14DiamondDerivedD1Ev(void);
void _ZTv0_n16_N14DiamondDerivedD0Ev(int *in_stack_00000004);
int VirtualBase_func(VirtualBase *this);
void VirtualBase_destructor(VirtualBase *this);
void VirtualBase_destructor_delete(VirtualBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
int RTTIDerivedA_getType(RTTIDerivedA *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
int RTTIDerivedB_getType(RTTIDerivedB *this);
int test_cpp_exception(void);
int test_cpp_rtti(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
int test_cpp_smart_ptr(void);
void test_cpp_oo_features(void);

/* Additional forward declarations */
void Derived_destructor(Derived *this);
char *Base_getName(Base *this);
void Base_destructor_delete(Base *this);
char *Derived_getName(Derived *this);
void Derived_destructor_delete(Derived *this);
void MultiDerived_destructor_delete(MultiDerived *this);
void MiddleA_destructor_delete(MiddleA *this);
void MiddleB_destructor_delete(MiddleB *this);
void Container_int_constructor(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(Container_int *this, int idx);
int Container_int_getSize(Container_int *this);
void Container_double_constructor(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(Container_double *this, int idx);
int Container_double_getSize(Container_double *this);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
/* std namespace stubs - converted to C */
typedef struct std_ios_base_Init {
    void *_this;
} std_ios_base_Init;

std_ios_base_Init std___ioinit = {0};

/* std namespace stubs - implementation */
void std_ios_base_Init_Init(std_ios_base_Init *this, void *param)
{
    this->_this = param;
    return;
}

void std_ios_base_Init_destroy(std_ios_base_Init *this)
{
    return;
}

/* External data arrays - printf format strings and messages */
char DAT_000131e5[] = "Testing C++ OO features\n";
char DAT_00013081[] = "Member func result: %d\n";
char DAT_0001309f[] = "Constructor result: %d\n";
char DAT_000130bb[] = "Virtual func result: %d\n";
char DAT_000130d7[] = "Multiple inheritance result: %d\n";
char DAT_000130f3[] = "Diamond inheritance result: %d\n";
char DAT_00013110[] = "Operator overload result: %d\n";
char DAT_0001312c[] = "Template func result: %d\n";
char DAT_00013148[] = "Template class result: %d\n";
char DAT_00013164[] = "Lambda result: %d\n";
char DAT_00013180[] = "Exception result: %d\n";
char DAT_0001319d[] = "Smart ptr result: %d\n";
char DAT_000131ba[] = "RTTI result: %d\n";

/* Class definitions */
struct Base {
    vtable_ptr _vptr_Base;
    int data;
};

struct Derived {
    vtable_ptr _vptr_Base;
    int data;
    int multiplier;
};

struct BaseA {
    vtable_ptr _vptr_BaseA;
    int dataA;
};

struct BaseB {
    vtable_ptr _vptr_BaseB;
    int dataB;
};

struct MiddleA {
    vtable_ptr _vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    vtable_ptr _vptr_MiddleB;
    int dataB;
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

struct VirtualBase {
    vtable_ptr _vptr_VirtualBase;
    int data;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
};

struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct SimpleClass {
    char data[36];
};

struct LifecycleClass {
    int data[5];
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct Point {
    int x;
    int y;
};

/* Global variables */
int LifecycleClass_instance_count = 0;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init(&std___ioinit, (void *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_destroy, &std___ioinit, &__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 strncpy(local_28,"Test",5);
 local_28[5] = '\0';
 local_28[6] = '\0';
 local_28[7] = '\0';
 local_28[8] = '\0';
 local_28[9] = '\0';
 local_28[10] = '\0';
 local_28[0xb] = '\0';
 local_28[0xc] = '\0';
 local_28[0xd] = '\0';
 local_28[0xe] = '\0';
 local_28[0xf] = '\0';
 local_28[0x10] = '\0';
 local_28[0x11] = '\0';
 local_28[0x12] = '\0';
 local_28[0x13] = '\0';
 local_28[0x14] = '\0';
 local_28[0x15] = '\0';
 local_28[0x16] = '\0';
 local_28[0x17] = '\0';
 local_28[0x18] = '\0';
 local_28[0x19] = '\0';
 local_28[0x1a] = '\0';
 local_28[0x1b] = '\0';
 local_28[0x1c] = '\0';
 local_28[0x1d] = '\0';
 local_28[0x1e] = '\0';
 local_28[0x1f] = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 iVar3 = 0;
 piVar1 = operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete__(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 00011420 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = obj->_vptr_Base[0]((void *)obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 vtable_entry_t local_14;
 undefined4 local_10;
 Base local_c;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_c._vptr_Base = (vtable_ptr)&PTR_virtual_func_00015ce4;
 local_14 = PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base_virtual_func(&local_c,5);
 iVar2 = local_14((void *)&local_c,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = 0x1e;
 iVar2 = 0x28;
 _ZThn8_N12MultiDerived5funcBEv();
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 _ZTv0_n12_N14DiamondDerived4funcEv();
 iVar1 = 0x64;
 return iVar1;
}



/* Function: test_cpp_operator_overload @ 00011580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 000115e5 to 000115fe has its CatchHandler @ 00011601 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char *__s1;
 char *__s1_00;
 int *piVar1;
 int *piVar2;
 int iVar3;
 size_t sVar4;
 uint uVar5;
 uint uVar6;
 bool bVar7;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (strcmp(__s1, "12RTTIDerivedA") == 0) {
 uVar6 = 10;
 }
 else {
 uVar6 = 0;
 if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = 10;
 if (iVar3 != 0) {
 uVar6 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (strcmp(__s1_00, "12RTTIDerivedB") == 0) {
 bVar7 = true;
 }
 else if (*__s1_00 == '*') {
 bVar7 = false;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar7 = iVar3 == 0;
 }
 uVar5 = uVar6 | 0x14;
 if (!bVar7) {
 uVar5 = uVar6;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(piVar1,(void *)PTR__RTTIBase_00015ecc,(void *)PTR__RTTIBase_00015ee0,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar3 = __dynamic_cast(piVar2,(void *)PTR__RTTIBase_00015ecc,(void *)PTR__RTTIBase_00015ee0,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + (*__s1 == '*'));
 ((destructor_t)*(destructor_t *)(*piVar1 + 4))(piVar1);
 ((destructor_t)*(destructor_t *)(*piVar2 + 4))(piVar2);
 return sVar4 + uVar5;
}



/* Function: test_cpp_oo_features @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 char *pcVar1;
 size_t sVar2;
 int *piVar3;
 int iVar4;
 int *piVar5;
 int iVar6;
 vtable_entry_t *local_3c;
 char local_38 [4];
 vtable_entry_t *local_34;
 undefined4 local_30;
 vtable_entry_t *local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined3 uStack_1c;
 undefined1 local_19;
 Base local_14 [2];
 
 puts(&DAT_000131e5);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 strncpy(local_38,"Test",4);
 local_34 = (undefined **)0x0;
 local_30 = 0;
 local_2c = (undefined **)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_19 = 0;
 local_3c = (undefined **)0xa;
 sVar2 = strlen(local_38);
 printf(&DAT_00013081,sVar2 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 iVar6 = 0;
 piVar3 = operator_new__(0x14);
 piVar5 = piVar3;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar6 = LifecycleClass_instance_count + piVar3[2];
 operator_delete__(piVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar6);
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_14[0]._vptr_Base = (vtable_ptr)&PTR_virtual_func_00015ce4;
 local_3c = (undefined **)&PTR_virtual_func_00015d04;
 local_38[0] = '\x03';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 iVar6 = Base_virtual_func(local_14,5);
 iVar4 = ((vtable_ptr)local_3c)[0]((void *)local_3c,5);
 printf(&DAT_000130bb,iVar4 + iVar6 + 0x15);
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_3c = (undefined **)&PTR_funcA_00015d28;
 local_34 = (undefined **)&PTR__ZThn8_N12MultiDerived5funcBEv_00015d40;
 local_38[0] = 'd';
 local_38[1] = '\0';
 local_38[2] = '\0';
 local_38[3] = '\0';
 local_30 = 200;
 _ZThn8_N12MultiDerived5funcBEv();
 printf(&DAT_000130d7,0x1f);
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_3c = (undefined **)&PTR_func_00015db0;
 local_2c = (undefined **)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00015de4;
 local_34 = (undefined **)&PTR__ZThn8_N14DiamondDerived4funcEv_00015dc8;
 local_28 = 0x32;
 _ZTv0_n12_N14DiamondDerived4funcEv();
 pcVar1 = local_38 + (int)((vtable_ptr)local_3c)[-3];
 pcVar1[0] = 'd';
 pcVar1[1] = '\0';
 pcVar1[2] = '\0';
 pcVar1[3] = '\0';
 iVar6 = ((vtable_ptr)local_2c)[0]((void *)local_2c, 0);
 printf(&DAT_000130f3,iVar6);
 printf(&DAT_00013110,0x16);
 printf(&DAT_0001312c,0x27);
 printf(&DAT_00013148,0x10);
 printf(&DAT_00013164,0x55);
 iVar6 = test_cpp_exception();
 printf(&DAT_00013180,iVar6);
 printf(&DAT_0001319d,0x2bf);
 iVar6 = test_cpp_rtti();
 printf(&DAT_000131ba,iVar6);
 return;
}



/* Function: main @ 00011ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00011ad0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00011ae0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this,int x)

{
 return this->multiplier * x;
}



/* Function: ~Base @ 00011af0 */

/* DWARF original prototype: void _Base_destructor(Base * this) */

void __thiscall Base_destructor(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011b00 */

/* DWARF original prototype: void _MultiDerived_destructor(MultiDerived * this) */

void __thiscall MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011b10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void _DiamondDerived_destructor(DiamondDerived * this) */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 00011b20 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00011b30 */

double template_max_double(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap<int> @ 00011b50 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011b70 */

/* DWARF original prototype: void Container_int_constructor(Container_int * this) */

void __thiscall Container_int_constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011b80 */

/* DWARF original prototype: void push(Container_int * this, int value) */

void __thiscall Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011ba0 */

/* DWARF original prototype: int get(Container_int * this, int idx) */

int __thiscall Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011bc0 */

/* DWARF original prototype: int getSize(Container_int * this) */

int __thiscall Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00011bd0 */

/* DWARF original prototype: void Container_double_constructor(Container_double * this) */

void __thiscall Container_double_constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011be0 */

/* DWARF original prototype: void push(Container_double * this, double value) */

void __thiscall Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011c00 */

/* DWARF original prototype: double get(Container_double * this, int idx) */

double __thiscall Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00011c20 */

/* DWARF original prototype: int getSize(Container_double * this) */

int __thiscall Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: getName @ 00011c30 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011c50 */

/* DWARF original prototype: void _Base_destructor_delete(Base * this) */

void __thiscall Base_destructor_delete(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 00011c80 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00011ca0 */

/* DWARF original prototype: void _Derived_destructor(Derived * this) */

void __thiscall Derived_destructor(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00011cd0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* DWARF original prototype: void _MultiDerived_destructor_delete(MultiDerived * this) */

void __thiscall MultiDerived_destructor_delete(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00011d10 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 00011d20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerived5funcBEv(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 00011d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 00011d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(int in_stack_00000004)

{
 operator_delete((void *)(in_stack_00000004 + -8));
 return;
}



/* Function: funcA @ 00011d70 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA_funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00011d80 */

/* DWARF original prototype: void _BaseA_destructor(BaseA * this) */

void __thiscall BaseA_destructor(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00011d90 */

/* DWARF original prototype: void _BaseA_destructor_delete(BaseA * this) */

void __thiscall BaseA_destructor_delete(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00011dc0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB_funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011dd0 */

/* DWARF original prototype: void _BaseB_destructor(BaseB * this) */

void __thiscall BaseB_destructor(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00011de0 */

/* DWARF original prototype: void _BaseB_destructor_delete(BaseB * this) */

void __thiscall BaseB_destructor_delete(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011e10 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00011e30 */

/* DWARF original prototype: void _MiddleA_destructor(MiddleA * this) */

void __thiscall MiddleA_destructor(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 00011e40 */

/* DWARF original prototype: void _MiddleA_destructor_delete(MiddleA * this) */

void __thiscall MiddleA_destructor_delete(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00011e70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleA4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00011ea0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(int *in_stack_00000004)

{
 operator_delete((void *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
 return;
}



/* Function: func @ 00011ed0 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00011ef0 */

/* DWARF original prototype: void _MiddleB_destructor(MiddleB * this) */

void __thiscall MiddleB_destructor(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 00011f00 */

/* DWARF original prototype: void _MiddleB_destructor_delete(MiddleB * this) */

void __thiscall MiddleB_destructor_delete(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 00011f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleB4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 00011f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 00011f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(int *in_stack_00000004)

{
 operator_delete((void *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
 return;
}



/* Function: func @ 00011f90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: ~DiamondDerived @ 00011fb0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void _DiamondDerived_destructor_delete(DiamondDerived * this) */

void __thiscall DiamondDerived_destructor_delete(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00011fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00012000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00012010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD0Ev(int in_stack_00000004)

{
 operator_delete((void *)(in_stack_00000004 + -8));
 return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00012040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00012060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 00012070 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD0Ev(int *in_stack_00000004)

{
 operator_delete((void *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
 return;
}



/* Function: func @ 000120a0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 000120b0 */

/* DWARF original prototype: void _VirtualBase_destructor(VirtualBase * this) */

void __thiscall VirtualBase_destructor(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 000120c0 */

/* DWARF original prototype: void _VirtualBase_destructor_delete(VirtualBase * this) */

void __thiscall VirtualBase_destructor_delete(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 000120f0 */

/* DWARF original prototype: void _RTTIDerivedA_destructor(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00012120 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00012130 */

/* DWARF original prototype: void _RTTIBase_destructor(RTTIBase * this) */

void __thiscall RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00012140 */

/* DWARF original prototype: void _RTTIDerivedB_destructor(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00012170 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 88 */
