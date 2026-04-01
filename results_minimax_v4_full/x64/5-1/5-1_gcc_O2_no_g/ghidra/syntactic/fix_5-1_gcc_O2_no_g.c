/* Auto-injected type definitions by preprocessor */
#include <stdint.h>

/* Function pointer type for indirect calls */
typedef void (*code)();
typedef void* undefined;
typedef unsigned int undefined4;

/* Define __thiscall as empty (MSVC calling convention not valid in standard C) */
#define __thiscall

/* Provide strlen and other standard functions */
#include <string.h>
#include <stdlib.h>

/* Mock operators for C++ */
void* operator_new(size_t size);
void operator_delete(void* ptr, size_t size);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* thrown_exception, void* type_info, void* destructor);
void* __dynamic_cast(void* ptr, void* src_type, void* dst_type, int is_virtual);

/* Macros to handle C++ template syntax in C code */
/* Note: Template syntax <type> conflicts with preprocessor, so we use wrapper functions */
#define template_max_int(a,b) template_max_impl(a,b)
#define template_max_double(a,b) template_max_impl_double(a,b)
#define template_swap_int(a,b) template_swap_impl(a,b)

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Forward declarations for classes */
struct LifecycleClass {
    static int instance_count;
};

/* Stack protection */
void __stack_chk_fail(void);

/* Minimal struct definitions for C++ classes */
struct Base {
    void* vtable;
};

struct Derived {
    void* vtable;
    int value;
};

struct MultiDerived {
    void* vtable;      /* Base */
    void* vtable2;     /* MiddleA */
    void* vtable3;     /* MiddleB */
    int a;
    int b;
    int c;
    int d;
};

struct MiddleA {
    void* vtable;
    int value;
};

struct MiddleB {
    void* vtable;
    int value;
};

struct DiamondDerived {
    void* vtable;      /* DiamondDerived vtable */
    int value;
};

struct RTTIBase {
    void* vtable;
    void* typeinfo;
};

struct RTTIDerivedA {
    void* vtable;
    void* typeinfo;
};

struct RTTIDerivedB {
    void* vtable;
    void* typeinfo;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct Container_int;
struct Container_double;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
 __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: main @ 00101310 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* _GLOBAL__sub_I_test_cpp_member_func() - mock initialization */
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 /* std::ios_base::Init initialization mocked */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34[0x1e] = 0;
 strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1f] = 0;
 sVar1 = strlen(local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(uint64_t **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

uint64_t test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

uint64_t test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

uint64_t test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

uint64_t test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

uint64_t test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

uint64_t test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

uint64_t test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x0010169f) */
/* WARNING: Removing unreachable block (ram,0x001016a4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 
 uVar7 = 10;
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(lVar1 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102018);
 strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1e] = 0;
 local_34[0x1f] = 0;
 sVar2 = strlen(local_34);
 __printf_chk(1,&DAT_0010203c,(int)sVar2 + 0x125c);
 test_cpp_constructor();
 __printf_chk(1,"%d\n",test_cpp_constructor());
 __printf_chk(1,&DAT_00102076,0x2a);
 __printf_chk(1,&DAT_00102092,0x47);
 test_cpp_diamond_inheritance();
 __printf_chk(1,"%d\n",test_cpp_diamond_inheritance());
 __printf_chk(1,&DAT_001020cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_001020e7,uVar1);
 __printf_chk(1,&DAT_00102103,0x10);
 __printf_chk(1,&DAT_0010211f,0x55);
 test_cpp_exception();
 __printf_chk(1,&DAT_0010213b,0x2a);
 test_cpp_smart_ptr();
 __printf_chk(1,"%d\n",test_cpp_smart_ptr());
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 001018f0 */

/* Base::virtual_func(int) */

int Base_virtual_func(struct Base *self, int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00101900 */

/* Base::getName() const */

void * Base_getName(void)

{
 return &DAT_00102004;
}



/* Function: ~Base @ 00101910 */

/* Base::~Base() */

void Base_destructor(struct Base *self)

{
 return;
}



/* Function: virtual_func @ 00101920 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(struct Derived *self, int param_1)

{
 return *(int *)((char *)self + 8) * param_1;
}



/* Function: getName @ 00101930 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101940 */

/* MultiDerived::funcA() */

uint64_t MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00101950 */

/* MultiDerived::funcB() */

uint64_t MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101960 */

/* non-virtual thunk to MultiDerived::funcB() */

uint64_t MultiDerived_funcB_thunk(void *self)

{
 return 0x28;
}



/* Function: func @ 00101970 */

/* MiddleA::func() */

int MiddleA_func(void *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101990 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(void *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 001019b0 */

/* MiddleB::func() */

int MiddleB_func(void *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}



/* Function: func @ 001019d0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(void *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 001019f0 */

/* DiamondDerived::func() */

int DiamondDerived_func(void *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101a10 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(void *self)

{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101a30 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk_nonvirtual(void *self)

{
 return *(int *)(self + *(long *)(*(long *)(self + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101a50 */

/* RTTIDerivedA::getType() const */

uint64_t RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00101a60 */

/* RTTIDerivedB::getType() const */

uint64_t RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101a70 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(void)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101a80 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(void)

{
 return;
}



/* Function: ~DiamondDerived @ 00101a90 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(void)

{
 return;
}



/* Function: ~DiamondDerived @ 00101aa0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(void *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00101ab0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(void *self)

{
 return;
}



/* Function: ~MultiDerived @ 00101ac0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(void)

{
 return;
}



/* Function: ~MultiDerived @ 00101ad0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(void *self)

{
 return;
}



/* Function: ~Derived @ 00101ae0 */

/* Derived::~Derived() */

void Derived_destructor(void)

{
 return;
}



/* Function: ~Base @ 00101af0 */

/* Base::~Base() */

void Base_destructor_with_delete(void *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~Derived @ 00101b00 */

/* Derived::~Derived() */

void Derived_destructor_with_delete(void *self)

{
 operator_delete(self,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101b10 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_with_delete(void *self)

{
 operator_delete(self,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101b20 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk_with_delete(void *self)

{
 operator_delete((char *)this - 0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101b40 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_with_delete(void *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101b50 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_with_delete(void *self)

{
 operator_delete(self,8);
 return;
}



/* Function: ~DiamondDerived @ 00101b60 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_with_delete(void *self)

{
 operator_delete(self,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b70 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk_with_delete(void *self)

{
 operator_delete((char *)self + *(long *)(*(long *)self + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b90 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk_with_delete(void *self)

{
 operator_delete((char *)self - 0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00101bb0 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00101bc0 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00101bd0 */

/* void template_swap<int>(int&, int&) */

void template_swap_int_ptr(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101be0 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *self)

{
 *(undefined4 *)(self + 0x28) = 0;
 return;
}



/* Function: push @ 00101bf0 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *self, int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00101c10 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *self, int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 return *(undefined4 *)(self + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101c30 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *self)

{
 return *(undefined4 *)(self + 0x28);
}



/* Function: Container @ 00101c40 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *self)

{
 *(undefined4 *)(self + 0x50) = 0;
 return;
}



/* Function: push @ 00101c50 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *self, double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
 *(int *)(self + 0x50) = iVar1 + 1;
 *(double *)(self + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101c70 */

/* Container<double>::get(int) const */

uint64_t Container_double_get(Container_double *self, int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return *(uint64_t *)(self + (long)param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00101ca0 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *self)

{
 return *(undefined4 *)(self + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
