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

/* Common undefined types */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char undefined;
typedef void (*code)();
typedef unsigned char undefined;

/* Standard library functions */
#include <string.h>
#include <stdio.h>

/* Forward declarations for CRT functions */
extern void deregister_tm_clones(void);
extern void *operator_new(unsigned long);
extern void operator_delete(void *, unsigned long);
extern int strcmp(const char *, const char *);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *__dynamic_cast(void *, const void *, const void *, const void *, long);
extern void *__dynamic_cast(void *, const void *, const void *, const void *, long);

/* Additional types */
typedef unsigned long ulong;
typedef unsigned int uint;

/* Stack protection */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
void __stack_chk_fail(void);
void __stack_chk_fail(unsigned long guard_diff, ...);

/* C++ Exception handling */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, const void *, void *);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_finalize(void *);
extern void *__dso_handle;
extern int __cxa_atexit(void (*)(void *), void *, void *);

/* Global variables for CRT */
extern char completed_0;
extern void __dso_handle;

/* Forward declarations for functions */
void test_cpp_oo_features(void);

/* Simple class structure */
typedef struct SimpleClass {
    char name[32];
} SimpleClass;

/* Base class for virtual function tests */
typedef struct Base {
    void **_vptr_Base;
} Base;

/* RTTIBase class for RTTI tests */
typedef struct RTTIBase {
    void **_vptr_RTTIBase;
} RTTIBase;

/* RTTIDerivedA class */
typedef struct RTTIDerivedA {
    void **_vptr_RTTIBase;
} RTTIDerivedA;

/* RTTIDerivedB class */
typedef struct RTTIDerivedB {
    void **_vptr_RTTIBase;
} RTTIDerivedB;

/* Derived class */
struct Derived {
    void **_vptr_Base;
    int multiplier;
};

/* LifecycleClass for constructor tests */
struct LifecycleClass {
    int instance_count;
};

/* Global variable for LifecycleClass instance count */
int LifecycleClass_instance_count = 0;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
extern uintptr_t ___stack_chk_guard;

/* Forward declarations for classes */
struct SimpleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* MiddleA struct */
typedef struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
} MiddleA;

/* MiddleB struct */
typedef struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
} MiddleB;

/* MultiDerived struct */
typedef struct MultiDerived {
    void **_vptr_Base;
    void **_vptr_MultiDerived;
    int valueA;
    int valueB;
} MultiDerived;

/* DiamondDerived struct */
typedef struct DiamondDerived {
    void **_vptr_Base;
    void **_vptr_MiddleA;
    void **_vptr_MiddleB;
    int dataA;
    int dataB;
} DiamondDerived;

/* RTTIDerivedA struct */
typedef struct RTTIDerivedA {
    void **_vptr_RTTIBase;
} RTTIDerivedA;

/* RTTIDerivedB struct */
typedef struct RTTIDerivedB {
    void **_vptr_RTTIBase;
} RTTIDerivedB;

/* Container<int> struct */
typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

/* Container<double> struct */
typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* RTTI type info pointers */
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

/* Template function declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* std namespace stub for iostream initialization */
typedef struct {
    int __initialization;
} std_ios_base_Init;

extern std_ios_base_Init std___ioinit;
extern void std_ios_base_Init_Init(std_ios_base_Init *);
extern void std_ios_base_Init_Destroy(std_ios_base_Init *);

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward declarations for std::ios_base_Init functions */
extern void std_ios_base_Init_Init(std_ios_base_Init *);
extern void std_ios_base_Init_Destroy(std_ios_base_Init *);

/* String constants */
extern const char *DAT_00101b10;
extern const char *DAT_00101b38;
extern const char *DAT_00101b58;
extern const char *DAT_00101b78;
extern const char *DAT_00101b98;
extern const char *DAT_00101bb8;
extern const char *DAT_00101bd8;
extern const char *DAT_00101bf8;
extern const char *DAT_00101c18;
extern const char *DAT_00101c38;
extern const char *DAT_00101c58;
extern const char *DAT_00101c78;
extern const char *DAT_00101c98;

/* Forward declarations for RTTI typeinfo pointers */
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

/* C++ typeinfo declarations */
extern void *int__typeinfo;
extern void *RTTIBase__typeinfo;
extern void *RTTIDerivedA__typeinfo;
extern void *RTTIDerivedB__typeinfo;

/* Forward declarations for std namespace components */
extern void *__ioinit;

/* Data section string constants */
extern const char *DAT_00101b10;
extern const char *DAT_00101b38;
extern const char *DAT_00101b58;
extern const char *DAT_00101b78;
extern const char *DAT_00101b98;
extern const char *DAT_00101bb8;
extern const char *DAT_00101bd8;
extern const char *DAT_00101bf8;
extern const char *DAT_00101c18;
extern const char *DAT_00101c38;
extern const char *DAT_00101c58;
extern const char *DAT_00101c78;
extern const char *DAT_00101c98;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010106c to 0010106f has its CatchHandler @ 00101070 */
 __cxa_throw(puVar1,&int__typeinfo,0);
}



/* Function: main @ 00101120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit(std_ios_base_Init_Destroy,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010123c @ 0010123c */

void FUN_0010123c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001012a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 char *__s;
 size_t sVar2;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = ___stack_chk_guard;
 __s = strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(__s);
 if (lVar1 - ___stack_chk_guard == 0) {
 return (int)sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101330 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101340 */

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



/* Function: test_cpp_multiple_inheritance @ 00101350 */

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



/* Function: test_cpp_diamond_inheritance @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_8 == ___stack_chk_guard) {
 return (int)dVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00101420 */

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



/* Function: test_cpp_lambda @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_16_2_484633fb lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101440 */

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



/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014f8) */
/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 iVar7 = 10;
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = operator_new(8);
 lVar8 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 cVar1 = *__s1;
 if ((__s1 != "12RTTIDerivedA") && (iVar7 = 0, cVar1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(plVar3,&RTTIBase__typeinfo,&RTTIDerivedA__typeinfo,0,0);
 iVar2 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar2 = iVar7 + 0x14;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase__typeinfo,&RTTIDerivedB__typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar2;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar8 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar7 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 001015b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 long lVar1;
 int iVar2;
 size_t sVar3;
 SimpleClass obj;
 
 lVar1 = ___stack_chk_guard;
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 puts(DAT_00101b10);
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar3 = strlen(obj.name);
 __printf_chk(1,DAT_00101b38,(int)sVar3 + 0x125c);
 iVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00101b58,iVar2);
 __printf_chk(1,DAT_00101b78,0x2a);
 __printf_chk(1,DAT_00101b98,0x47);
 iVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_00101bb8,iVar2);
 __printf_chk(1,DAT_00101bd8,0x16);
 iVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_00101bf8,iVar2);
 __printf_chk(1,DAT_00101c18,0x10);
 __printf_chk(1,DAT_00101c38,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_00101c58,iVar2);
 iVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00101c78,iVar2);
 iVar2 = test_cpp_rtti();
 if (lVar1 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101c98);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(lVar1 - ___stack_chk_guard,&__stack_chk_guard,iVar2,0);
}



/* Function: virtual_func @ 00101740 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 00101750 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00101760 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base_destructor(Base *this,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00101770 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 00101780 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00101790 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 001017a0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 001017b0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 001017c0 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 001017e0 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA_func_thunk(MiddleA *this)

{
 return *(int *)((long)&this->dataA +
 (long)(this->_vptr_MiddleA[-3] +
 *(long *)(*(long *)((long)&this->_vptr_MiddleA +
 (long)this->_vptr_MiddleA[-3]) + -0x18))) + 0x96;
}



/* Function: func @ 00101810 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00101830 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)((long)&this->dataB +
 (long)(this->_vptr_MiddleB[-3] +
 *(long *)(*(long *)((long)&this->_vptr_MiddleB +
 (long)this->_vptr_MiddleB[-3]) + -0x18))) + 200;
}



/* Function: func @ 00101860 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00101880 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (this->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((long)&(this->super_MiddleA).dataA +
 (long)(p_Var1 + *(long *)(*(long *)((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)p_Var1) + -0x18))) + 0xfa;
}



/* Function: func @ 001018a4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((long)this + *(long *)(*(long *)&this[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 001018c0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 001018d0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 001018e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 001018f0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00101900 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived_destructor_vtt(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00101904 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101910 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101920 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived_destructor(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00101924 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_nonvirtual(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00101930 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived_destructor_nonvirtual(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00101940 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base_destructor(Base *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00101950 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101960 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101970 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(&this[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101980 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101990 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 001019a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 001019b0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 operator_delete((_func_int_varargs *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 001019c4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 operator_delete(&this[-1].field_0x20,0x30);
 return;
}



/* Function: template_max_int @ 001019d0 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 001019e0 */

double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001019f0 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00101a10 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101a20 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

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



/* Function: get @ 00101a40 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00101a70 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00101a80 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101a90 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101ab0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00101ad0 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
