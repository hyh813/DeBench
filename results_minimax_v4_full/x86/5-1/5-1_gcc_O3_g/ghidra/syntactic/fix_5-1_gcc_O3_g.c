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

/* Calling convention definitions */
#define __thiscall

/* Stack guard offset for x86 */
static const int in_GS_OFFSET = 0x14;

/* Missing function prototypes */
void __stack_chk_fail_local(void);
void __stack_chk_fail(void);

/* Function stubs for missing intrinsics */
#define builtin_strncpy strncpy

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Class definitions */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

struct Base {
    int *_vptr_Base;
    char name[16];
};

struct Derived {
    int *_vptr_Derived;
    char name[16];
    int multiplier;
};

struct MultiDerived {
    int *_vptr_MultiDerived;
    int multiplier;
    int valueA;
    int valueB;
};

struct MiddleA {
    int *_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    int *_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    struct MiddleA super_MiddleA;
    struct MiddleB super_MiddleB;
    int extra;
};

struct RTTIBase {
    int type;
};

struct RTTIDerivedA {
    int base;
};

struct RTTIDerivedB {
    int base;
};

template<typename T>
struct Container {
    int size;
    T data[10];
};


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 size_t sVar2;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 builtin_strncpy(obj.name,"Test",5);
 obj.name[5] = '\0';
 obj.name[6] = '\0';
 obj.name[7] = '\0';
 obj.name[8] = '\0';
 obj.name[9] = '\0';
 obj.name[10] = '\0';
 obj.name[0xb] = '\0';
 obj.name[0xc] = '\0';
 obj.name[0xd] = '\0';
 obj.name[0xe] = '\0';
 obj.name[0xf] = '\0';
 obj.name[0x10] = '\0';
 obj.name[0x11] = '\0';
 obj.name[0x12] = '\0';
 obj.name[0x13] = '\0';
 obj.name[0x14] = '\0';
 obj.name[0x15] = '\0';
 obj.name[0x16] = '\0';
 obj.name[0x17] = '\0';
 obj.name[0x18] = '\0';
 obj.name[0x19] = '\0';
 obj.name[0x1a] = '\0';
 obj.name[0x1b] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
 obj.name[0x1e] = '\0';
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int a;
 int b;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117ef) */
/* WARNING: Removing unreachable block (ram,0x000117f8) */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014e48;
 piVar3 = operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 iVar4 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar4 = 0x14;
 }
 else {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 iVar4 = (-(uint)(iVar4 == 0) & 10) + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar5 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar5 != 0) {
 iVar4 = iVar4 + 100;
 }
 iVar5 = __dynamic_cast(piVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(iVar1 + 4))(piVar2);
 (**(code **)(*piVar3 + 4))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 000118c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 double dVar4;
 int a;
 int b;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013018);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 obj.name[0x1e] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
 builtin_strncpy(obj.name,"Test",5);
 obj.name[5] = '\0';
 obj.name[6] = '\0';
 obj.name[7] = '\0';
 obj.name[8] = '\0';
 obj.name[9] = '\0';
 obj.name[10] = '\0';
 obj.name[0xb] = '\0';
 obj.name[0xc] = '\0';
 obj.name[0xd] = '\0';
 obj.name[0xe] = '\0';
 obj.name[0xf] = '\0';
 obj.name[0x10] = '\0';
 obj.name[0x11] = '\0';
 obj.name[0x12] = '\0';
 obj.name[0x13] = '\0';
 obj.name[0x14] = '\0';
 obj.name[0x15] = '\0';
 obj.name[0x16] = '\0';
 obj.name[0x17] = '\0';
 obj.name[0x18] = '\0';
 obj.name[0x19] = '\0';
 obj.name[0x1a] = '\0';
 obj.name[0x1b] = '\0';
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 __printf_chk(1,&DAT_0001303c,sVar2 + 0x125c);
 /* Unresolved local var: int result@[???] */
 __printf_chk(1,&DAT_0001305a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00013076,0x2a);
 __printf_chk(1,&DAT_00013092,0x47);
 __printf_chk(1,&DAT_000130ae,0x28a);
 __printf_chk(1,&DAT_000130cb,0x16);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 iVar3 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 __printf_chk(1,&DAT_000130e7,(int)ROUND(dVar4) + iVar3 + a + b);
 __printf_chk(1,&DAT_00013103,0x10);
 __printf_chk(1,&DAT_0001311f,0x55);
 iVar3 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313b,iVar3);
 __printf_chk(1,&DAT_00013158,0x2bf);
 iVar3 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013175,iVar3);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011ae0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base::virtual_func(Base *this_ptr, int x)

{
 return x + 1;
}



/* Function: getName @ 00011af0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * Base::getName(void)

{
 return "Base";
}



/* Function: ~Base @ 00011b10 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

Base::~Base()

{
 return;
}



/* Function: virtual_func @ 00011b20 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived::virtual_func(Derived *this_ptr, int x)

{
 return x * this_ptr->multiplier;
}



/* Function: getName @ 00011b40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011b60 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011b70 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011b80 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: func @ 00011b90 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011bb0 */

/* virtual thunk to MiddleA::func() */

int MiddleA::func(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bd0 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB::func(void)

{
 MiddleB *this;
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011bf0 */

/* virtual thunk to MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011c10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011c30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]
 );
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c50 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)this + *(int *)(*(int *)&this[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011c70 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

RTTIDerivedA::getType()

{
 return 1;
}



/* Function: getType @ 00011c80 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

RTTIDerivedB::getType()

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011c90 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

RTTIDerivedB::~RTTIDerivedB()

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011ca0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

RTTIDerivedA::~RTTIDerivedA()

{
 return;
}



/* Function: ~DiamondDerived @ 00011cb0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~DiamondDerived @ 00011cc0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~DiamondDerived @ 00011cd0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

MultiDerived::~MultiDerived()
{
 return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived::~MultiDerived()

{
 return;
}



/* Function: ~Derived @ 00011d00 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived::~Derived()

{
 return;
}



/* Function: ~Base @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

Base::~Base()
{
 operator_delete(this,4);
}



/* Function: ~Derived @ 00011d40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived::~Derived()

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011d70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived::~MultiDerived()

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 operator_delete(&this[-1].super_BaseB,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB::~RTTIDerivedB()

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA()

{
 operator_delete(this,4);
 return;
}



/* Function: ~DiamondDerived @ 00011e30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived()

{
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011e60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived()

{
 operator_delete((_func_int_varargs *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived()

{
 operator_delete(&this[-1].field_0x10,0x18);
 return;
}



/* Function: template_max_int @ 00011ec0 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011ee0 */

/* WARNING: Unknown calling convention */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00011f00 */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011f20 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011f30 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011f50 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container<int>::get(Container<int> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011f80 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00011f90 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011fa0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011fd0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00012000 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: __x86.get_pc_thunk.ax @ 0001200c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00012010 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
