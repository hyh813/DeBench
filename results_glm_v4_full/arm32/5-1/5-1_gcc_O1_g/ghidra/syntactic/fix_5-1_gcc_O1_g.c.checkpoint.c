#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#if !defined(__GLIBC__) && !defined(ssize_t)
typedef long ssize_t;
#endif
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int undefined4;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef void (*code)(void);

/* Type definition for function pointers used in vtables */
typedef int (*_func_int_varargs)(void *self, ...);

/* Forward declarations of Base and Derived */
typedef struct Base Base;
typedef struct Base BaseB;

/* Definition of Base struct */
struct Base {
    void **_vptr_Base;
};

/* Definition of Derived struct */
struct Derived {
    void **_vptr_Base;
    int multiplier;
};

/* ARM runtime library functions */
int __aeabi_d2iz(double a);

/* Stub implementation of __aeabi_d2iz */
int __aeabi_d2iz(double a) {
    return (int)a;
}

/* Missing pointer definitions from decompiled code */
extern void *PTR_func_00011934;
extern void *PTR_func_0001194c;
extern void *PTR_func_00011968;
extern void *PTR_virtual_func_0001187c;
extern void *PTR_virtual_func_00011894;
extern void *PTR__RTTIDerivedA_0001197c;
extern void *PTR__RTTIDerivedB_00011990;

/* Define the undefined pointer symbols to satisfy linker */
void *PTR_func_00011934 = (void *)0x11934;
void *PTR_func_0001194c = (void *)0x1194c;
void *PTR_func_00011968 = (void *)0x11968;
void *PTR__RTTIDerivedA_0001197c = (void *)0x1197c;
void *PTR__RTTIDerivedB_00011990 = (void *)0x11990;

/* Forward declarations for virtual functions */
int Base_virtual_func(Base *self, int x);
int Derived_virtual_func(Derived *self, int x);

/* Define virtual function pointers */
void *PTR_virtual_func_0001187c = (void *)Base_virtual_func;
void *PTR_virtual_func_00011894 = (void *)Derived_virtual_func;

/* Define format strings for printf */
const char DAT_000115e4[] = "Testing C++ OO Features:\n";
const char DAT_00011608[] = "test_cpp_member_func() = %d\n";
const char DAT_00011628[] = "test_cpp_constructor() = %d\n";
const char DAT_00011644[] = "test_cpp_virtual_func() = %d\n";
const char DAT_00011660[] = "test_cpp_multiple_inheritance() = %d\n";
const char DAT_0001167c[] = "test_cpp_diamond_inheritance() = %d\n";
const char DAT_0001169c[] = "test_cpp_operator_overload() = %d\n";
const char DAT_000116b8[] = "test_cpp_template_func() = %d\n";
const char DAT_000116d4[] = "test_cpp_template_class() = %d\n";
const char DAT_000116f0[] = "test_cpp_lambda() = %d\n";
const char DAT_0001170c[] = "test_cpp_exception() = %d\n";
const char DAT_0001172c[] = "test_cpp_smart_ptr() = %d\n";
const char DAT_0001174c[] = "test_cpp_rtti() = %d\n";

/* Data references */
extern const char DAT_000115e4[];
extern const char DAT_00011608[];
extern const char DAT_00011628[];
extern const char DAT_00011644[];
extern const char DAT_00011660[];
extern const char DAT_0001169c[];
extern const char DAT_000116b8[];
extern const char DAT_000116d4[];
extern const char DAT_0001170c[];
extern const char DAT_0001172c[];
extern const char DAT_0001174c[];

/* Minimal type_info struct for RTTI support (replaces <typeinfo> for C compilation) */
typedef struct type_info {
    const char *_name;
} type_info;

/* Forward declarations for RTTI types */
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Forward declarations for other types */
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;

/* Forward declaration for DiamondDerived_func */
int DiamondDerived_func(DiamondDerived *self);

/* MiddleA and MiddleB struct definitions */
struct MiddleA {
    void **_vptr_MiddleA;
    char _8_4_;
    int dataA;
};

struct MiddleB {
    void **_vptr_MiddleB;
    char _8_4_;
    int dataB;
};

/* DiamondDerived struct definition */
struct DiamondDerived {
    char field_0x10[16];
    struct MiddleA super_MiddleA;
    char _16_4_;
    int _20_4_;
};

/* MultiDerived struct definition */
struct MultiDerived {
    char super_BaseB[8];
    /* Additional fields would go here */
};



/* Forward declarations for template functions */
int template_max_int(int a, int b);
void template_swap_int(int *a, int *b);

/* Container template class definitions */
typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

/* RTTI type definitions - simplified for C compilation */
struct RTTIBase {
    type_info *type_info_ptr;  /* Pointer to type_info */
};

struct RTTIDerivedA {
    type_info *type_info_ptr;  /* Pointer to type_info */
    int data;  /* Additional data */
};

struct RTTIDerivedB {
    type_info *type_info_ptr;  /* Pointer to type_info */
    int data;  /* Additional data */
};

/* Static type_info instances for each class */
type_info RTTIBase_typeinfo = {"RTTIBase"};
type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB"};
type_info int_typeinfo = {"int"};

/* Helper macros to simulate C++ scope resolution */
#define RTTIBase_typeinfo_ref (&RTTIBase_typeinfo)
#define RTTIDerivedA_typeinfo_ref (&RTTIDerivedA_typeinfo)
#define RTTIDerivedB_typeinfo_ref (&RTTIDerivedB_typeinfo)
#define int_typeinfo_ref (&int_typeinfo)
#define std_type_info_operator_eq(a,b) type_info_operator_eq(a,b)

/* C++ ABI exception handling functions */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, type_info *tinfo, void (*dest)(void *));

/* Stub implementation of __cxa_allocate_exception */
void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

/* Stub implementation of __cxa_throw - does not return */
void __cxa_throw(void *thrown_exception, type_info *tinfo, void (*dest)(void *)) {
    (void)thrown_exception;
    (void)tinfo;
    (void)dest;
    /* In real C++ this would unwind the stack and not return */
    abort();
}

/* C++ ABI dynamic cast function */
void *__dynamic_cast(void *src_ptr, type_info *src_type, type_info *dst_type, int src2dst_offset);

/* Simple stub implementation of __dynamic_cast */
void *__dynamic_cast(void *src_ptr, type_info *src_type, type_info *dst_type, int src2dst_offset) {
    (void)src_type;
    (void)dst_type;
    (void)src2dst_offset;
    /* For this decompiled code, just return the source pointer */
    return src_ptr;
}

/* Helper function to compare type_info objects */
static int type_info_operator_eq(type_info *a, type_info *b) {
    if (a == NULL || b == NULL) return 0;
    if (a == b) return 1;
    return strcmp(a->_name, b->_name) == 0;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c00 */

/* WARNING: Removing unreachable block (ram,0x00010c60) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 struct {
     char name[32];
 } obj;
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* LifecycleClass stub definition */
typedef struct {
    int dummy;
} LifecycleClass;

/* operator_delete - accepts either 1 or 2 arguments */
void operator_delete(void *ptr, size_t size);
void *operator_new__(size_t size);
void operator_delete__(void *ptr);
void *operator_new(size_t size);

void operator_delete(void *ptr, size_t size) {
    (void)size;
    free(ptr);
}

void operator_delete__(void *ptr) {
    free(ptr);
}

void *operator_new(size_t size) {
    return malloc(size);
}

void *operator_new__(size_t size) {
    return malloc(size);
}

int LifecycleClass_instance_count = 0;

/* Function: test_cpp_constructor @ 00010c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int result;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new__(0x14);
 if (pvVar1 == NULL) return 0;
 /* Unresolved local var: size_t i@[???] */
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar2 + LifecycleClass_instance_count * 1000;
}



/* Function: call_virtual_func @ 00010cd0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 _func_int_varargs func;
 
 func = (_func_int_varargs)*obj->_vptr_Base;
 iVar1 = func(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010ce4 */

/* WARNING: Removing unreachable block (ram,0x00010d58) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

 int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 Base base;
 Derived derived;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 base._vptr_Base = (void **)&PTR_virtual_func_0001187c;
 derived._vptr_Base = (void **)&PTR_virtual_func_00011894;
 derived.multiplier = 3;
 iVar1 = call_virtual_func(&base,5);
 iVar2 = call_virtual_func((Base *)&derived,5);
 return iVar1 + 0x15 + iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00010d68 */

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



/* Function: test_cpp_diamond_inheritance @ 00010d70 */

/* WARNING: Removing unreachable block (ram,0x00010de8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 struct {
     char field_0x10[16];
     struct {
         void **_vptr_MiddleA;
         char _8_4_;
         int dataA;
     } super_MiddleA;
     char _16_4_;
     int _20_4_;
 } obj;
 obj.super_MiddleA._vptr_MiddleA = (void **)PTR_func_00011934;
 obj._20_4_ = 0x32;
 obj.super_MiddleA._8_4_ = (char)(int)(intptr_t)PTR_func_0001194c;
 obj._16_4_ = (char)(int)(intptr_t)PTR_func_00011968;
 iVar1 = DiamondDerived_func((DiamondDerived *)&obj);
 obj._20_4_ = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00010df4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010dfc */

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
 int temp;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 iVar2 = __aeabi_d2iz(a_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_14 == 0) {
 return iVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 abort();
}



/* Function: test_cpp_template_class @ 00010eac */

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



/* Function: test_cpp_lambda @ 00010eb4 */

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



/* Function: test_cpp_exception @ 00010ebc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,int_typeinfo_ref,0);
}



/* Function: test_cpp_smart_ptr @ 00010f78 */

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



/* Function: test_cpp_rtti @ 00010f84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)(intptr_t)operator_new(4);
 *piVar1 = (int)(intptr_t)PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)(intptr_t)operator_new(4);
 *piVar2 = (int)(intptr_t)PTR__RTTIDerivedB_00011990;
 iVar3 = std_type_info_operator_eq(*(type_info **)((intptr_t)*piVar1 - 4),RTTIDerivedA_typeinfo_ref);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq(*(type_info **)((intptr_t)*piVar2 - 4),RTTIDerivedB_typeinfo_ref);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar4 = *(int *)__dynamic_cast(piVar1,RTTIBase_typeinfo_ref,RTTIDerivedA_typeinfo_ref,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = *(int *)__dynamic_cast(piVar2,RTTIBase_typeinfo_ref,RTTIDerivedB_typeinfo_ref,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 iVar4 = *piVar1;
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00011074 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(DAT_000115e4);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_00011608,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_00011628,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00011644,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00011660,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_0001167c,iVar1);
 __printf_chk(1,DAT_0001169c,0x16);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_000116b8,iVar1);
 __printf_chk(1,DAT_000116d4,0x10);
 __printf_chk(1,DAT_000116f0,0x55);
 iVar1 = test_cpp_exception();
 __printf_chk(1,DAT_0001170c,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_0001172c,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_0001174c,iVar1);
 return;
}



/* Function: main @ 0001119c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 /* Stub for std::ios_base initialization - removed for C compilation */
 return;
}



/* Function: virtual_func @ 000111dc */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *self,int x)

{
 return x + 1;
}



/* Function: getName @ 000111e4 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *self)

{
 return "Base";
}



/* Function: ~Base @ 000111f0 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(Base *self,int __in_chrg)

{
 return self;
}



/* Function: virtual_func @ 000111f4 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *self,int x)

{
 return x * self->multiplier;
}



/* Function: getName @ 00011200 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 0001120c */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: funcB @ 00011214 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *self)

{
 return 0x28;
}



/* Function: funcB @ 0001121c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00011224 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *self)

{
 return *(int *)((int)&self->dataA + (int)self->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001123c */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_vthunk(MiddleA *self)

{
 return *(int *)((int)&self->dataA +
 (int)(self->_vptr_MiddleA[-3] +
 *(int *)(*(int *)((int)&self->_vptr_MiddleA + (int)self->_vptr_MiddleA[-3]) +
 -0xc))) + 0x96;
}



/* Function: func @ 00011260 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *self)

{
 return *(int *)((int)&self->dataB + (int)self->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011278 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_vthunk(MiddleB *self)

{
 return *(int *)((int)&self->dataB +
 (int)(self->_vptr_MiddleB[-3] +
 *(int *)(*(int *)((int)&self->_vptr_MiddleB + (int)self->_vptr_MiddleB[-3]) +
 -0xc))) + 200;
}



/* Function: func @ 0001129c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)((int)&(self->super_MiddleA).dataA + (int)(self->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 000112b4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_vthunk(DiamondDerived *self)

{
 _func_int_varargs **p_Var1;
 
 p_Var1 = (_func_int_varargs **)(self->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((int)&(self->super_MiddleA).dataA +
 (int)(p_Var1 + *(int *)(*(int *)((int)&(self->super_MiddleA)._vptr_MiddleA +
 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 000112d8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nvthunk(DiamondDerived *self)

{
 return *(int *)((int)self + *(int *)(*(int *)&self[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000112f0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: getType @ 000112f8 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011300 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(RTTIDerivedB *self,int __in_chrg)

{
 return self;
}



/* Function: ~RTTIDerivedA @ 00011304 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor(RTTIDerivedA *self,int __in_chrg)

{
 return self;
}



/* Function: ~DiamondDerived @ 00011308 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 return self;
}



/* Function: ~DiamondDerived @ 0001130c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_vthunk(DiamondDerived *self)

{
 return (_func_int_varargs *)
 ((int)&(self->super_MiddleA)._vptr_MiddleA + (int)(self->super_MiddleA)._vptr_MiddleA[-4]);
}



/* Function: ~DiamondDerived @ 0001131c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * DiamondDerived_destructor_nvthunk(DiamondDerived *self)

{
 return (undefined1 *)&self[-1].field_0x10;
}



/* Function: ~MultiDerived @ 00011324 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor(MultiDerived *self,int __in_chrg)

{
 return self;
}



/* Function: ~MultiDerived @ 00011328 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_nvthunk(MultiDerived *self)

{
 return (BaseB *)&self[-1].super_BaseB;
}



/* Function: ~Derived @ 00011330 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(Derived *self,int __in_chrg)

{
 return self;
}



/* Function: ~Base @ 00011334 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor_2(Base *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~Derived @ 0001134c */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor_2(Derived *self,int __in_chrg)

{
 operator_delete(self,8);
 return self;
}



/* Function: ~MultiDerived @ 00011364 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor_2(MultiDerived *self,int __in_chrg)

{
 operator_delete(self,0x10);
 return self;
}



/* Function: ~MultiDerived @ 0001137c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_2_nvthunk(MultiDerived *self)

{
 operator_delete(&self[-1].super_BaseB,0x10);
 return (BaseB *)&self[-1].super_BaseB;
}



/* Function: ~RTTIDerivedA @ 00011398 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor_2(RTTIDerivedA *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~RTTIDerivedB @ 000113b0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor_2(RTTIDerivedB *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~DiamondDerived @ 000113c8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor_2(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 operator_delete(self,0x18);
 return self;
}



/* Function: ~DiamondDerived @ 000113e0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_2_vthunk(DiamondDerived *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(self->super_MiddleA)._vptr_MiddleA + (int)(self->super_MiddleA)._vptr_MiddleA[-4]
 );
 operator_delete(p_Var1,0x18);
 return p_Var1;
}



/* Function: ~DiamondDerived @ 00011404 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * DiamondDerived_destructor_2_nvthunk(DiamondDerived *self)

{
 operator_delete(&self[-1].field_0x10,0x18);
 return (undefined1 *)&self[-1].field_0x10;
}



/* Function: template_max<int> @ 00011420 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 0001142c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a < b) {
 return b;
 }
 return a;
}



/* Function: template_swap<int> @ 0001145c */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011470 */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

Container_int * Container_int_Constructor(Container_int *self)

{
 self->size = 0;
 return self;
}



/* Function: push @ 0001147c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *self,int value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011494 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *self,int idx)

{
 if (idx < 0) {
 return 0;
 }
 if (self->size <= idx) {
 return 0;
 }
 return self->data[idx];
}



/* Function: getSize @ 000114c0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container @ 000114c8 */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container_double * Container_double_Constructor(Container_double *self)

{
 self->size = 0;
 return self;
}



/* Function: push @ 000114d4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *self,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 union {
     double d;
     struct { uint32_t low; uint32_t high; } parts;
 } converter;
 
 converter.d = value;
 in_r2 = converter.parts.low;
 in_r3 = converter.parts.high;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 *(undefined4 *)(self->data + iVar1) = in_r2;
 *(undefined4 *)((int)(self->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 000114f0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *self,int idx)

{
 double in_d0;
 
 if (idx < 0) {
 return in_d0;
 }
 if (self->size <= idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011528 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *self)

{
 return self->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
