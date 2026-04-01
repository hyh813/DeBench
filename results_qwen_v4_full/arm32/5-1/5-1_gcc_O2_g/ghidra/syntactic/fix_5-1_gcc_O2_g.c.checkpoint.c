/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef void (*_func_int_varargs)(void);
typedef void (*code)(void);

/* Ghidra macro definitions */
#define SUB84(val, offset) ((uint32_t)((val)))

/* Forward declarations and struct definitions for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;
struct Point;
struct Container_int;
struct Container_double;

struct Base {
    void **_vptr_Base;
};

struct Derived {
    void **_vptr_Base;
    int multiplier;
};

struct BaseA {
    void **_vptr_BaseA;
};

struct BaseB {
    void **_vptr_BaseB;
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x10;
};

struct RTTIBase {
    void **_vptr_Base;
};

struct RTTIDerivedA {
    void **_vptr_Base;
};

struct RTTIDerivedB {
    void **_vptr_Base;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int dummy;
};

struct Point {
    int x;
    int y;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct type_info {
    void *vptr;
    char *name;
};

/* Global variables */
int LifecycleClass_instance_count = 0;
int PTR__RTTIDerivedA_0001162c = 0;
int PTR__RTTIDerivedB_00011640 = 0;
int RTTIDerivedA_typeinfo = 0;
int RTTIDerivedB_typeinfo = 0;
int RTTIBase_typeinfo = 0;
char *DAT_00011450 = "Testing C++ OO features:\n";
char *DAT_00011474 = "Member function result: %d\n";
char *DAT_00011494 = "Constructor result: %d\n";
char *DAT_000114b0 = "Virtual function result: %d\n";
char *DAT_000114cc = "Multiple inheritance result: %d\n";
char *DAT_000114e8 = "Diamond inheritance result: %d\n";
char *DAT_00011508 = "Operator overload result: %d\n";
char *DAT_00011524 = "Template function result: %d\n";
char *DAT_00011540 = "Template class result: %d\n";
char *DAT_0001155c = "Lambda result: %d\n";
char *DAT_00011578 = "Exception result: %d\n";
char *DAT_00011598 = "Smart pointer result: %d\n";
char *DAT_000115b8 = "RTTI result: %d\n";

/* Function declarations */
void *operator_delete(void *ptr);
void *operator_new(size_t size);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, void *type_info, void *destructor);
void test_cpp_oo_features(void);
int template_max_int(int a,int b);
double template_max_double(double a,double b);
void template_swap_int(int *a,int *b);
int __aeabi_d2iz(undefined4, undefined4);
void __stack_chk_fail(void);
int type_info_operator_eq(type_info *a, type_info *b);
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst);

/* Stub function definitions for missing symbols */
#include <stdlib.h>

void *operator_new(size_t size) {
    return malloc(size);
}

void *operator_delete(void *ptr) {
    free(ptr);
    return ptr;
}

int __aeabi_d2iz(undefined4 val_low, undefined4 val_high) {
    /* Convert double (passed in registers) to int - stub implementation */
    return (int)val_low;
}

void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void *exception, void *type_info, void *destructor) {
    /* Stub implementation - does not return */
    (void)exception;
    (void)type_info;
    (void)destructor;
    while(1);
}

int type_info_operator_eq(type_info *a, type_info *b) {
    /* Stub implementation - compare type_info pointers */
    if (a == b) return 1;
    if (a == 0 || b == 0) return 0;
    if (a->name == b->name) return 1;
    return 0;
}

void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst) {
    /* Stub implementation - return obj if non-null */
    if (obj != 0) return obj;
    return 0;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O2_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0,0);
}



/* Function: main @ 00010b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

/* WARNING: Removing unreachable block (ram,0x00010cb0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base*,int))(*obj->_vptr_Base))(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 == 0) {
 return iVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_8_2_35feab7f lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int_[],_std::default_delete<int_[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 type_info *type_info_ptr;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)operator_new(4);
 type_info_ptr = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = type_info_operator_eq(type_info_ptr,(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = type_info_operator_eq
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))(**(void ***)(iVar6 + 4)))(piVar1);
 ((void (*)(void *))(**(void ***)(*piVar2 + 4)))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ec8 */

/* WARNING: Removing unreachable block (ram,0x00011008) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 SimpleClass obj;
 
 puts(DAT_00011450);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 __printf_chk(1,DAT_00011474,sVar1 + 0x125c);
 iVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00011494,iVar2);
 __printf_chk(1,DAT_000114b0,0x2a);
 __printf_chk(1,DAT_000114cc,0x47);
 iVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000114e8,iVar2);
 __printf_chk(1,DAT_00011508,0x16);
 iVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_00011524,iVar2);
 __printf_chk(1,DAT_00011540,0x10);
 __printf_chk(1,DAT_0001155c,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_00011578,iVar2);
 iVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598,iVar2);
 iVar2 = test_cpp_rtti();
 __printf_chk(1,DAT_000115b8,iVar2);
 return;
}



/* Function: virtual_func @ 00011048 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *obj,int x)

{
 return x + 1;
}



/* Function: getName @ 00011050 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *obj)

{
 return "Base";
}



/* Function: _Base_destructor @ 0001105c */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(Base *obj,int __in_chrg)

{
 return obj;
}



/* Function: virtual_func @ 00011060 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *obj,int x)

{
 return x * obj->multiplier;
}



/* Function: getName @ 0001106c */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *obj)

{
 return "Derived";
}



/* Function: funcA @ 00011078 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *obj)

{
 return 0x1e;
}



/* Function: funcB @ 00011080 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *obj)

{
 return 0x28;
}



/* Function: funcB @ 00011088 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *obj)

{
 return 0x28;
}



/* Function: func @ 00011090 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *obj)

{
 return *(int *)((int)&obj->dataA + (int)obj->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 000110a8 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *obj)

{
 return *(int *)((int)&obj->dataA +
 (int)(obj->_vptr_MiddleA[-3] +
 *(int *)(*(int *)((int)&obj->_vptr_MiddleA + (int)obj->_vptr_MiddleA[-3]) +
 -0xc))) + 0x96;
}



/* Function: func @ 000110cc */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *obj)

{
 return *(int *)((int)&obj->dataB + (int)obj->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 000110e4 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *obj)

{
 return *(int *)((int)&obj->dataB +
 (int)(obj->_vptr_MiddleB[-3] +
 *(int *)(*(int *)((int)&obj->_vptr_MiddleB + (int)obj->_vptr_MiddleB[-3]) +
 -0xc))) + 200;
}



/* Function: func @ 00011108 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *obj)

{
 return *(int *)((int)&(obj->super_MiddleA).dataA + (int)(obj->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011120 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *obj)

{
 void *p_Var1;
 
 p_Var1 = (obj->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((int)&(obj->super_MiddleA).dataA +
 (int)((int *)p_Var1 + *(int *)(*(int *)((int)&(obj->super_MiddleA)._vptr_MiddleA +
 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 00011144 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *obj)

{
 return *(int *)((int)obj + *(int *)(*(int *)&obj[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 0001115c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *obj)

{
 return 1;
}



/* Function: getType @ 00011164 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *obj)

{
 return 2;
}



/* Function: RTTIDerivedB_destructor @ 0001116c */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(RTTIDerivedB *obj,int __in_chrg)

{
 return obj;
}



/* Function: RTTIDerivedA_destructor @ 00011170 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor(RTTIDerivedA *obj,int __in_chrg)

{
 return obj;
}



/* Function: DiamondDerived_destructor @ 00011174 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor(DiamondDerived *obj,int __in_chrg,void **__vtt_parm)

{
 return obj;
}



/* Function: DiamondDerived_destructor_thunk @ 00011178 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_thunk(DiamondDerived *obj)

{
 return (void *)
 ((int)&(obj->super_MiddleA)._vptr_MiddleA + (int)((void **)(obj->super_MiddleA)._vptr_MiddleA)[-4]);
}



/* Function: DiamondDerived_destructor_thunk2 @ 00011188 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_thunk2(DiamondDerived *obj)

{
 return (void *)&obj[-1];
}



/* Function: MultiDerived_destructor @ 00011190 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor(MultiDerived *obj,int __in_chrg)

{
 return obj;
}



/* Function: MultiDerived_destructor_thunk @ 00011194 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_thunk(MultiDerived *obj)

{
 return &obj[-1].super_BaseB;
}



/* Function: Derived_destructor @ 0001119c */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(Derived *obj,int __in_chrg)

{
 return obj;
}



/* Function: Base_destructor @ 000111a0 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor2(Base *obj,int __in_chrg)

{
 operator_delete(obj);
 return obj;
}



/* Function: Derived_destructor @ 000111b8 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor2(Derived *obj,int __in_chrg)

{
 operator_delete(obj);
 return obj;
}



/* Function: MultiDerived_destructor @ 000111d0 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor2(MultiDerived *obj,int __in_chrg)

{
 operator_delete(obj);
 return obj;
}



/* Function: MultiDerived_destructor_thunk2 @ 000111e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_thunk2(MultiDerived *obj)

{
 operator_delete(&obj[-1].super_BaseB);
 return &obj[-1].super_BaseB;
}



/* Function: RTTIDerivedB_destructor @ 00011204 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor2(RTTIDerivedB *obj,int __in_chrg)

{
 operator_delete(obj);
 return obj;
}



/* Function: RTTIDerivedA_destructor @ 0001121c */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor2(RTTIDerivedA *obj,int __in_chrg)

{
 operator_delete(obj);
 return obj;
}



/* Function: DiamondDerived_destructor @ 00011234 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor2(DiamondDerived *obj,int __in_chrg,void **__vtt_parm)

{
 operator_delete(obj);
 return obj;
}



/* Function: DiamondDerived_destructor_thunk @ 0001124c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_thunk3(DiamondDerived *obj)

{
 void *p_Var1;
 
 p_Var1 = (void *)
 ((int)&(obj->super_MiddleA)._vptr_MiddleA + (int)((void **)(obj->super_MiddleA)._vptr_MiddleA)[-4]
 );
 operator_delete(p_Var1);
 return p_Var1;
}



/* Function: DiamondDerived_destructor_thunk2 @ 00011270 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_thunk4(DiamondDerived *obj)

{
 operator_delete((void *)&obj[-1]);
 return (void *)&obj[-1];
}



/* Function: template_max_int @ 0001128c */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011298 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000112ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) {
 return a;
 }
 return b;
}



/* Function: template_swap_int @ 000112c8 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_constructor @ 000112dc */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

Container_int * Container_int_constructor(Container_int *obj)

{
 obj->size = 0;
 return obj;
}



/* Function: push @ 000112e8 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *obj,int value)

{
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->size = iVar1 + 1;
 obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011300 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *obj,int idx)

{
 if ((-1 < idx) && (idx < obj->size)) {
 return obj->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011324 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *obj)

{
 return obj->size;
}



/* Function: Container_double_constructor @ 0001132c */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container_double * Container_double_constructor(Container_double *obj)

{
 obj->size = 0;
 return obj;
}



/* Function: push @ 00011338 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *obj,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->size = iVar1 + 1;
 *(undefined4 *)(obj->data + iVar1) = in_r2;
 *(undefined4 *)((int)(obj->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 00011368 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *obj,int idx)

{
 double in_d0;
 
 if ((-1 < idx) && (idx < obj->size)) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011394 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *obj)

{
 return obj->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
