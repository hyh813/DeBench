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

/* Forward declaration for operator_delete */
void operator_delete(void *ptr, size_t size);
void *operator_new(size_t size);

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward declaration for DiamondDerived_func - will be defined after struct */
int DiamondDerived_func(void *this_ptr);

/* Stub implementations for missing functions */
int DiamondDerived_func(void *this_ptr) {
    return 50;
}

void *operator_new(size_t size) {
    static char heap[4096];
    static size_t heap_offset = 0;
    void *ptr = heap + heap_offset;
    heap_offset += size;
    if (heap_offset > sizeof(heap)) heap_offset = 0;
    return ptr;
}

void operator_delete(void *ptr, size_t size) {
    /* Stub - no-op for simple heap */
}

/* Stub implementations for ARM intrinsics */
int __aeabi_d2iz(int a, int b) {
    return a;
}

int __aeabi_dcmpgt(int a, int b, int c) {
    return 0;
}

/* Stub implementations for C++ exception handling */
void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    /* Stub - no-op */
}

int __dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptr_type) {
    return 0;
}

void *__cxa_allocate_exception(size_t size) {
    static char exception_buffer[256];
    return exception_buffer;
}

/* Ghidra type definitions */
typedef void (*code)(void);
typedef int undefined4;
typedef short undefined2;
typedef char undefined1;
typedef void undefined;

/* Forward declarations for ARM intrinsics */
int __aeabi_d2iz(int, int);
int __aeabi_dcmpgt(int, int, int);
void __stack_chk_fail(void);

/* Forward declarations for C++ exception handling */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exc, void *typeinfo, void *dest);
int __dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptr_type);

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;
typedef struct Point Point;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef int (*_func_int_varargs)(void);

/* Global pointer declarations */
extern _func_int_varargs *PTR_virtual_func_0001187c;
extern _func_int_varargs *PTR_virtual_func_00011894;
extern _func_int_varargs *PTR_func_00011934;

/* Define missing PTR variables */
_func_int_varargs *PTR_virtual_func_0001187c = 0;
_func_int_varargs *PTR_virtual_func_00011894 = 0;
extern void *PTR_func_0001194c;
extern void *PTR_func_00011968;
extern void *PTR__RTTIDerivedA_0001197c;
extern void *PTR__RTTIDerivedB_00011990;

/* Define missing PTR variables */
_func_int_varargs *PTR_func_00011934 = 0;
void *PTR_func_0001194c = 0;
void *PTR_func_00011968 = 0;
void *PTR__RTTIDerivedA_0001197c = 0;
void *PTR__RTTIDerivedB_00011990 = 0;

/* External data declarations */
extern const char *DAT_000115e4;
extern const char *DAT_00011608;
extern const char *DAT_00011628;
extern const char *DAT_00011644;
extern const char *DAT_00011660;
extern const char *DAT_0001167c;
extern const char *DAT_0001169c;
extern const char *DAT_000116b8;
extern const char *DAT_000116d4;
extern const char *DAT_000116f0;
extern const char *DAT_0001170c;
extern const char *DAT_0001172c;
extern const char *DAT_0001174c;

/* Define missing DAT strings */
const char *DAT_000115e4 = "Testing C++ OO features\n";
const char *DAT_00011608 = "Member func result: %d\n";
const char *DAT_00011628 = "Constructor result: %d\n";
const char *DAT_00011644 = "Virtual func result: %d\n";
const char *DAT_00011660 = "Multiple inheritance result: %d\n";
const char *DAT_0001167c = "Diamond inheritance result: %d\n";
const char *DAT_0001169c = "Operator overload result: %d\n";
const char *DAT_000116b8 = "Template func result: %d\n";
const char *DAT_000116d4 = "Template class result: %d\n";
const char *DAT_000116f0 = "Lambda result: %d\n";
const char *DAT_0001170c = "Exception result: %d\n";
const char *DAT_0001172c = "Smart ptr result: %d\n";
const char *DAT_0001174c = "RTTI result: %d\n";

/* Forward declaration for __printf_chk */
int __printf_chk(int flag, const char *format, ...);

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int instance_count;
};
int LifecycleClass_instance_count = 0;

struct Base {
    _func_int_varargs **_vptr_Base;
};

struct Derived {
    Base super_Base;
    int multiplier;
};

struct BaseA {
    _func_int_varargs **_vptr_BaseA;
};

struct BaseB {
    _func_int_varargs **_vptr_BaseB;
};

struct MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int _8_4_;
    int dataA;
};

struct MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    int _16_4_;
    int _20_4_;
    int field_0x10;
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
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

struct RTTIBase {
    void *typeinfo;
};

struct RTTIDerivedA {
    void *typeinfo;
};

struct RTTIDerivedB {
    void *typeinfo;
};

typedef struct type_info type_info;
struct type_info {
    void *vptr;
    char *name;
};

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
 ((code)0x0)();
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
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new(0x14);
 /* Unresolved local var: size_t i@[???] */
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete(pvVar1, 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar2 + LifecycleClass_instance_count * 1000;
}



/* Function: call_virtual_func @ 00010cd0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)();
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
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_0001187c;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00011894;
 derived.multiplier = 3;
 iVar1 = call_virtual_func(&base,5);
 iVar2 = call_virtual_func(&derived.super_Base,5);
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
 DiamondDerived obj;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011934;
 obj._20_4_ = 0x32;
 obj.super_MiddleA._8_4_ = (int)&PTR_func_0001194c;
 obj._16_4_ = (int)&PTR_func_00011968;
 iVar1 = DiamondDerived_func((void *)&obj);
 obj._20_4_ = 100;
 iVar2 = DiamondDerived_func((void *)&obj);
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
 __cxa_throw(puVar1,(void *)0,0);
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
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = 10;
 iVar4 = 20;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar4 = __dynamic_cast(piVar1,(void *)0,(void *)0,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar2,(void *)0,(void *)0,0);
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
 return;
}



/* Function: virtual_func @ 000111dc */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 000111e4 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 000111f0 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(Base *this_ptr,int __in_chrg)

{
 return this_ptr;
}



/* Function: virtual_func @ 000111f4 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return x * this_ptr->multiplier;
}



/* Function: getName @ 00011200 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 0001120c */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00011214 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 0001121c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00011224 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((int)&this_ptr->dataA + (int)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001123c */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)((int)&this_ptr->dataA +
 (int)(this_ptr->_vptr_MiddleA[-3] +
 *(int *)(*(int *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]) +
 -0xc))) + 0x96;
}



/* Function: func @ 00011260 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((int)&this_ptr->dataB + (int)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011278 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)((int)&this_ptr->dataB +
 (int)(this_ptr->_vptr_MiddleB[-3] +
 *(int *)(*(int *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]) +
 -0xc))) + 200;
}



/* Function: func @ 0001129c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((int)&(this_ptr->super_MiddleA).dataA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 000112b4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (this_ptr->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((int)&(this_ptr->super_MiddleA).dataA +
 (int)(p_Var1 + *(int *)(*(int *)((int)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 000112d8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)((int)this_ptr + *(int *)(*(int *)&this_ptr[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000112f0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 000112f8 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011300 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(RTTIDerivedB *this_ptr,int __in_chrg)

{
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 00011304 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor(RTTIDerivedA *this_ptr,int __in_chrg)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011308 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 0001130c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

_func_int_varargs * DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 return (_func_int_varargs *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]);
}



/* Function: ~DiamondDerived @ 0001131c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return (undefined1 *)&this_ptr[-1].field_0x10;
}



/* Function: ~MultiDerived @ 00011324 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor(MultiDerived *this_ptr,int __in_chrg)

{
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011328 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 return &this_ptr[-1].super_BaseB;
}



/* Function: ~Derived @ 00011330 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(Derived *this_ptr,int __in_chrg)

{
 return this_ptr;
}



/* Function: ~Base @ 00011334 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor_impl(Base *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~Derived @ 0001134c */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor_impl(Derived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011364 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor_impl(MultiDerived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x10);
 return this_ptr;
}



/* Function: ~MultiDerived @ 0001137c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_impl_thunk(MultiDerived *this_ptr)

{
 operator_delete(&this_ptr[-1].super_BaseB,0x10);
 return &this_ptr[-1].super_BaseB;
}



/* Function: ~RTTIDerivedA @ 00011398 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor_impl(RTTIDerivedA *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~RTTIDerivedB @ 000113b0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor_impl(RTTIDerivedB *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 000113c8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor_impl(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this_ptr,0x18);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 000113e0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

_func_int_varargs * DiamondDerived_destructor_impl_thunk(DiamondDerived *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]
 );
 operator_delete(p_Var1,0x18);
 return p_Var1;
}



/* Function: ~DiamondDerived @ 00011404 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * DiamondDerived_destructor_impl_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 operator_delete(&this_ptr[-1].field_0x10,0x18);
 return (undefined1 *)&this_ptr[-1].field_0x10;
}



/* Function: template_max_int @ 00011420 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 0001142c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 __aeabi_dcmpgt((int)((unsigned long long)a & 0xFFFFFFFF),(int)((unsigned long long)a >> 0x20),(int)((unsigned long long)b & 0xFFFFFFFF));
 return a;
}



/* Function: template_swap_int @ 0001145c */

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

Container_int * Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return this_ptr;
}



/* Function: push @ 0001147c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011494 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 if (idx < 0) {
 return 0;
 }
 if (this_ptr->size <= idx) {
 return 0;
 }
 return this_ptr->data[idx];
}



/* Function: getSize @ 000114c0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container @ 000114c8 */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container_double * Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return this_ptr;
}



/* Function: push @ 000114d4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this_ptr,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 *(undefined4 *)(this_ptr->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this_ptr->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 000114f0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 double in_d0;
 
 if (idx < 0) {
 return in_d0;
 }
 if (this_ptr->size <= idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011528 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
