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

#include <typeinfo>
#include <string.h>

/* Forward declarations */
namespace std { class type_info; }

/* Stack checking function */
void __stack_chk_fail(void);

/* Exception handling functions */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, const type_info *tinfo, void (*dest)(void *));

/* Additional type definitions for decompiled code */
typedef uint8_t undefined1;
typedef uint8_t undefined;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned long long ulonglong;
typedef void (*code)(void);

/* C++ new/delete operator declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete__(void *ptr);

/* I/O and library functions */
int std_ios_base_Init(void *ptr);
int __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle);
int puts(const char *s);
int __printf_chk(int flag, const char *fmt, ...);

/* Math helper functions */
void *__aeabi_d2iz(undefined4 r0, undefined4 r1);
int __aeabi_dcmpgt(undefined4 r0, int r1, undefined4 r2);

/* RTTI support functions */
void *__dynamic_cast(void *src_ptr, const std::type_info *src_type, const std::type_info *dest_type, int offset);

/* Vtable pointer declarations */
extern void *PTR_func_func_00011b2c[4];
extern void *PTR_func_func_00011b48[4];
extern void *PTR_func_func_00011b68[4];
extern void *PTR_func_func_00011b84[4];
extern void *PTR_func_func_func_00011b68[4];
extern void *PTR_func_func_func_00011b84[4];
extern void *PTR_func_00011c20[4];
extern void *PTR_func_00011c38[4];
extern void *PTR_func_00011c54[4];
extern void *PTR_virtual_func_00011af0[4];
extern void *PTR_virtual_func_00011b08[4];
extern void *PTR__RTTIDerivedA_00011c68[4];
extern void *PTR__RTTIDerivedB_00011c7c[4];

/* External symbol declarations */
extern void *__dso_handle;
extern char std___ioinit;
extern char DAT_00011866;
extern char DAT_0001188a;
extern char DAT_000118a8;
extern char DAT_000118c4;
extern char DAT_000118e0;
extern char DAT_000118fc;
extern char DAT_00011919;
extern char DAT_00011935;
extern char DAT_00011951;
extern char DAT_0001196d;
extern char DAT_00011989;
extern char DAT_000119a6;
extern char DAT_000119c3;
extern char DAT_00011854;

/* Base type definition */
struct Base {
    void **vtable;
};

/* SUB84 helper function for double to int conversion */
undefined4 SUB84(double param, int dummy) {
    union {
        double d;
        uint32_t u[2];
    } u;
    u.d = param;
    return u.u[0];
}

/* MiddleA type definition */
struct MiddleA {
    void **vtable;
    void **vtable2;
    int data;
};

/* MiddleB type definition */
struct MiddleB {
    void **vtable;
    void **vtable2;
    int data;
};

/* VirtualBase type definition */
struct VirtualBase {
    void **vtable;
};

/* MultiDerived type definition */
struct MultiDerived {
    void **vtable;
    int data;
};

/* Container type definitions */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* DiamondDerived type definition */
struct DiamondDerived {
    void **vator;
    void **vtable2;
    int data;
    int (*func)(struct DiamondDerived *this_ptr);
};

/* Derived type definition */
struct Derived {
    void **vtable;
    int data;
};

/* RTTIDerivedA type definition */
struct RTTIDerivedA {
    void **vtable;
};

/* RTTIDerivedB type definition */
struct RTTIDerivedB {
    void **vtable;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&typeid(int),0);
}



/* Function: main @ 00010bbc */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 (void)std_ios_base_Init(&std___ioinit);
 (void)__aeabi_atexit(&std___ioinit,(void (*)(void *))std_ios_base_Init,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010cf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010d7c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010d84. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010d88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 int iVar1;
 undefined8 uVar2;
 void *local_18;
 void *local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_18 = &PTR_virtual_func_00011af0;
 local_14 = &PTR_virtual_func_00011b08;
 local_10 = 3;
 call_virtual_func((Base *)&local_18,5);
 call_virtual_func((Base *)&local_14,5);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_multiple_inheritance @ 00010e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00010e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 undefined8 uVar2;
 int local_1c;
 int local_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 extraout_d0 = template_max_double(3.0, 7.0);
 local_1c = 10;
 local_18 = 0x14;
 template_swap_int(&local_1c,&local_18);
 uVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_template_class @ 00010ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

void test_cpp_template_class(void)

{
 undefined4 extraout_r1;
 int iVar1;
 int local_38 [10];
 int local_10;
 int local_c;
 
 local_c = 0;
 local_10 = 1;
 local_38[0] = 10;
 Container_int_push(local_38,0x14);
 Container_int_push(local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_lambda @ 00010f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00010f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_00011c68;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = (strcmp((*(std::type_info **)(*piVar1 + -4))->name(), typeid(struct RTTIDerivedA).name()) == 0);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = (strcmp((*(std::type_info **)(*piVar2 + -4))->name(), typeid(struct RTTIDerivedB).name()) == 0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 __dynamic_cast(piVar1,&typeid(struct RTTIBase),&typeid(struct RTTIDerivedA),0);
 iVar3 = iVar3 + 100;
 __dynamic_cast(piVar2,&typeid(struct RTTIBase),&typeid(struct RTTIDerivedB),0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(code **)(iVar6 + 4))();
 (**(code **)(*piVar2 + 4))();
 return iVar3 + sVar5;
}



/* Function: test_cpp_smart_ptr @ 00011038 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 undefined4 local_18;
 undefined4 *local_14;
 undefined4 *local_10;
 int local_c;
 
 local_c = 0;
 local_14 = operator_new(4);
 *local_14 = 200;
 local_18 = 0;
 local_10 = operator_new__(0x14);
 *local_10 = 1;
 local_10[1] = 2;
 local_10[2] = 3;
 local_10[3] = 4;
 local_10[4] = 5;
 /* stubbed destructor calls */
 /* std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr */
 /* std::unique_ptr<int,std::default_delete<int>>::~unique_ptr */
 /* std::unique_ptr<int,std::default_delete<int>>::~unique_ptr */
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 000110ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 void **local_24 [2];
 void **local_1c;
 void **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_14 = (void **)PTR_func_00011c54;
 local_24[0] = (void **)PTR_func_00011c20;
 local_1c = (void **)PTR_func_00011c38;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_14);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_14);
 DiamondDerived_dtor2((DiamondDerived *)local_24);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00011866);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001188a,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_000118a8,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_000118c4,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_000118e0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000118fc,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00011919,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00011935,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00011951,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_0001196d,uVar1);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00011989,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_000119a6,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_000119c3,uVar1);
 return;
}



/* Function: virtual_func @ 000112b0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 000112b8 */

/* Base::getName() const */

undefined1 * Base_getName(void)

{
 return &DAT_00011854;
}



/* Function: ~Base @ 000112c4 */

/* Base::~Base() */

Base * Base_dtor(Base *this_ptr)

{
 return this_ptr;
}



/* Function: virtual_func @ 000112c8 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)((char *)this_ptr + 4);
}



/* Function: getName @ 000112d4 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return (char *)"Derived";
}



/* Function: funcA @ 000112e0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 000112e8 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 000112f0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 000112f8 */

/* VirtualBase::func() */

undefined4 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011300 */

/* VirtualBase::~VirtualBase() */

VirtualBase * VirtualBase_dtor(VirtualBase *this_ptr)

{
 return this_ptr;
}



/* Function: func @ 00011304 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(((char *)this_ptr) + *(int *)((*(int *)this_ptr) + -0xc) + 4) + 0x96;
}



/* Function: func @ 0001131c */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_func_vthunk(void *this_ptr)

{
 return MiddleA_func((MiddleA *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
}



/* Function: func @ 00011330 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(((char *)this_ptr) + *(int *)((*(int *)this_ptr) + -0xc) + 4) + 200;
}



/* Function: func @ 00011348 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_vthunk(void *this_ptr)
{
 return MiddleB_func((MiddleB *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
}



/* Function: func @ 0001135c */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)(((char *)this_ptr) + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011374 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_vthunk(void *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
}



/* Function: func @ 00011388 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nthunk(DiamondDerived *this_ptr)

{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr - 8));
}



/* Function: ~MiddleA @ 00011390 */

/* MiddleA::~MiddleA() */

MiddleA * MiddleA_dtor(MiddleA *this_ptr)

{
 *(void ***)this_ptr = PTR_func_func_00011b2c;
 *(void ***)(this_ptr + 8) = PTR_func_func_00011b48;
 return this_ptr;
}



/* Function: ~MiddleA @ 000113a8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_vthunk(void *this_ptr)

{
 int iVar1;
 void ***ptr;
 
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 ptr = (void ***)((char *)this_ptr + iVar1);
 *ptr = PTR_func_00011b2c;
 ptr = (void ***)((char *)this_ptr + iVar1 + 8);
 *ptr = PTR_func_func_00011b48;
 return;
}



/* Function: ~MiddleB @ 000113d0 */

/* MiddleB::~MiddleB() */

MiddleB * MiddleB_dtor(MiddleB *this_ptr)

{
 *(void ***)this_ptr = PTR_func_func_00011b68;
 *(void ***)(this_ptr + 8) = PTR_func_func_00011b84;
 return this_ptr;
}



/* Function: ~MiddleB @ 000113e8 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_vthunk(void *this_ptr)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(void ***)((char *)this_ptr + iVar1) = (void **)&PTR_func_00011b68;
 *(void ***)((char *)this_ptr + iVar1 + 8) = (void **)&PTR_func_00011b84;
 return;
}



/* Function: getType @ 00011410 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00011418 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011420 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB_dtor(RTTIDerivedB *this_ptr)

{
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 00011424 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA_dtor(RTTIDerivedA *this_ptr)

{
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011428 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_dtor_noop(MultiDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~MultiDerived @ 0001142c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_dtor_nthunk(MultiDerived *this_ptr)

{
 return this_ptr + -8;
}



/* Function: ~Derived @ 00011434 */

/* Derived::~Derived() */

Derived * Derived_dtor_noop(Derived *this_ptr)

{
 return this_ptr;
}



/* Function: ~Base @ 00011438 */

/* Base::~Base() */

Base * Base_dtor_delete(Base *this_ptr)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~Derived @ 00011450 */

/* Derived::~Derived() */

Derived * Derived_dtor_delete(Derived *this_ptr)

{
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011468 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_dtor_delete(MultiDerived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011480 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_nthunk2(MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -8,0x10);
 return;
}



/* Function: ~VirtualBase @ 00011488 */

/* VirtualBase::~VirtualBase() */

VirtualBase * VirtualBase_dtor_delete(VirtualBase *this_ptr)

{
 operator_delete(this_ptr,8);
 return this_ptr;
}



/* Function: ~RTTIDerivedB @ 000114a0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB_dtor_delete(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 000114b8 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA_dtor_delete(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr,4);
 return this_ptr;
}



/* Function: ~MiddleA @ 000114d0 */

/* MiddleA::~MiddleA() */

MiddleA * MiddleA_dtor_delete(MiddleA *this_ptr)

{
 MiddleA_dtor(this_ptr);
 operator_delete(this_ptr,0x10);
 return this_ptr;
}



/* Function: MiddleA_dtor_vthunk_full @ 000114fc */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_vthunk_full(void *this_ptr)

{
 MiddleA_dtor_vthunk((void *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
 return;
}



/* Function: ~MiddleB @ 00011510 */

/* MiddleB::~MiddleB() */

MiddleB * MiddleB_dtor_delete(MiddleB *this_ptr)

{
 MiddleB_dtor(this_ptr);
 operator_delete(this_ptr,0x10);
 return this_ptr;
}



/* Function: MiddleB_dtor_vthunk_full @ 0001153c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_vthunk_full(void *this_ptr)

{
 MiddleB_dtor_vthunk((void *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
 return;
}



/* Function: ~MiddleA @ 00011550 */

/* MiddleA::~MiddleA() */

MiddleA * MiddleA_dtor_nodel(MiddleA *this_ptr)

{
 MiddleA_dtor(this_ptr);
 return this_ptr;
}



/* Function: ~MiddleB @ 00011568 */

/* MiddleB::~MiddleB() */

MiddleB * MiddleB_dtor_nodel(MiddleB *this_ptr)

{
 MiddleB_dtor(this_ptr);
 return this_ptr;
}



/* Function: template_max<int> @ 00011580 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 0001158c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000115a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 000115bc */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000115d0 */

/* Container<int>::Container() */

void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000115dc */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 000115f4 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < this->size)) {
 return this->data[param_1];
 }
 return 0;
}



/* Function: getSize @ 00011618 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00011620 */

/* Container<double>::Container() */

void Container_double_Container(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 0001162c */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *this_ptr, double param_1)

{
 int iVar2;
 undefined4 *puVar1;
 union {
 double d;
 undefined4 u[2];
 } u;
 
 u.d = param_1;
 iVar2 = this_ptr->size;
 if (9 < iVar2) {
 return SUB84(param_1,0);
 }
 this_ptr->size = iVar2 + 1;
 puVar1 = (undefined4 *)&this_ptr->data[iVar2];
 *puVar1 = u.u[0];
 puVar1[1] = u.u[1];
 return SUB84(param_1,0);
}



/* Function: get @ 0001164c */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < this_ptr->size)) {
 return *(undefined8 *)&this_ptr->data[param_1];
 }
 return 0;
}



/* Function: getSize @ 00011678 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 00011680 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void *
std_unique_ptr_int_unique_ptr
 (void *this_ptr)

{
 if (*(void **)this_ptr != (void *)0x0) {
 operator_delete(*(void **)this_ptr,4);
 }
 return this_ptr;
}



/* Function: ~unique_ptr @ 000116a4 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void *
std_unique_ptr_int_array_unique_ptr
 (void *this_ptr)

{
 if (*(void **)this_ptr != (void *)0x0) {
 operator_delete__(*(void **)this_ptr);
 }
 return this_ptr;
}



/* Function: ~DiamondDerived @ 000116c4 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_dtor1(DiamondDerived *this_ptr)

{
 void ***ptr;
 
 ptr = (void ***)this_ptr;
 *ptr = PTR_func_00011c20;
 ptr = (void ***)((char *)this_ptr + 0x10);
 *ptr = PTR_func_00011c54;
 ptr = (void ***)((char *)this_ptr + 8);
 *ptr = PTR_func_00011c38;
 MiddleA_dtor_vthunk((void *)this_ptr);
 MiddleB_dtor_vthunk((void *)(((char *)this_ptr) + 8));
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011748 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor2(DiamondDerived *this_ptr)

{
 DiamondDerived *ignored = DiamondDerived_dtor1(this_ptr);
 (void)ignored;
 return;
}



/* Function: ~DiamondDerived @ 00011754 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_nthunk1(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor2((DiamondDerived *)(((char *)this_ptr) - 8));
 return;
}



/* Function: ~DiamondDerived @ 0001175c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_vthunk1(void *this_ptr)

{
 DiamondDerived_dtor2((DiamondDerived *)(((char *)this_ptr) + *(int *)(*(int *)this_ptr + -0x10)));
 return;
}



/* Function: ~DiamondDerived @ 00011770 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_dtor3(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor2(this_ptr);
 operator_delete(this_ptr,0x18);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011790 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_nthunk2(void *param_1)

{
 DiamondDerived_dtor3((DiamondDerived *)(((char *)param_1) - 8));
 return;
}



/* Function: ~DiamondDerived @ 00011798 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_vthunk2(void *param_1)

{
 DiamondDerived_dtor3((DiamondDerived *)((char *)param_1 + *(int *)(*(int *)param_1 + -0x10)));
 return;
}



/* Function: ~DiamondDerived @ 000117ac */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor4(void *this_ptr)

{
 DiamondDerived_dtor3((DiamondDerived *)this_ptr);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
