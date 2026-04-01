/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef __SIZE_TYPE__
typedef unsigned long size_t;
#define __SIZE_TYPE__ unsigned long
#endif

/* Standard library declarations */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
void *malloc(size_t size);
void free(void *ptr);

/* Forward declarations for C++ runtime functions */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, void *type_info, void *destructor);

/* Forward declarations for C++ operators */
void *operator new(size_t size);
void operator delete(void *ptr);
int __dynamic_cast(void *ptr, void *src_typeinfo, void *dst_typeinfo, long flags);

/* Forward declarations for RTTI classes */
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Forward declaration for LifecycleClass */
struct LifecycleClass {
    static int instance_count;
};

/* Base class for virtual function testing */
struct Base {
    void (**vtable)();
};

/* RTTI type info structures */
struct type_info {
    const char *name;
};

/* RTTI class structures */
struct RTTIBase {
    virtual ~RTTIBase() {}
    virtual int getType() const { return 0; }
};

struct RTTIDerivedA : public RTTIBase {
    ~RTTIDerivedA() override {}
    int getType() const override { return 1; }
};

struct RTTIDerivedB : public RTTIBase {
    ~RTTIDerivedB() override {}
    int getType() const override { return 2; }
};

/* External type_info objects */
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* String constants for formatted output */
const char DAT_0001134c[] = "Testing C++ Object-Oriented Features\n";
const char DAT_000111f5[] = "test_cpp_member_func: %d\n";
const char DAT_00011213[] = "test_cpp_constructor: %d\n";
const char DAT_0001122f[] = "test_cpp_virtual_func: %d\n";
const char DAT_0001124b[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_00011267[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_00011284[] = "test_cpp_operator_overload: %d\n";
const char DAT_000112a0[] = "test_cpp_template_func: %d\n";
const char DAT_000112bc[] = "test_cpp_template_class: %d\n";
const char DAT_000112d8[] = "test_cpp_lambda: %d\n";
const char DAT_000112f4[] = "test_cpp_exception: %d\n";
const char DAT_00011311[] = "test_cpp_smart_ptr: %d\n";
const char DAT_0001132e[] = "test_cpp_rtti: %d\n";

/* type_info for int type (used by exception) */
extern type_info int_typeinfo;

/* Pointers to RTTIBase vtable for RTTI testing */
void *PTR__RTTIBase_00021ed8;
void *PTR__RTTIBase_00021eec;

/* ARM-specific intrinsics */
int __aeabi_dcmpgt(double a, double b);
int __aeabi_dcmplt(double a, double b);
#define SUB84(x, off) (*(int *)((char *)&(x) + (off)))
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

/* LifecycleClass static member definition */
int LifecycleClass::instance_count = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */
/* Stub for C++ runtime initialization - not needed for decompiled void (*)(void) */

void _GLOBAL__sub_I_5_1_cpp(void)
{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int local_28;
 int uStack_24;
 int uStack_20;
 int local_1c;
 int uStack_18;
 int uStack_14;
 int uStack_10;
 short local_c;
 char local_a;
 char local_9;
 
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(void (*)(void) *)**(int **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void *pvVar1;
 void *pvVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 pvVar1 = (void *)operator new(4);
 *(void **)pvVar1 = &PTR__RTTIBase_00021ed8;
 pvVar2 = (void *)operator new(4);
 *(void **)pvVar2 = &PTR__RTTIBase_00021eec;
 iVar3 = __dynamic_cast(pvVar1,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar4 = __dynamic_cast(pvVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 operator delete(pvVar1);
 (**(void (***)(void))(*(char **)pvVar2 + 4))();
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int uVar2;
 int *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int local_38;
 int uStack_34;
 int uStack_30;
 int local_2c;
 int uStack_28;
 int uStack_24;
 int uStack_20;
 short local_1c;
 char local_1a;
 char local_19;
 
 puts(DAT_0001134c);
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf(DAT_000111f5,sVar1 + 0x125c);
 printf(DAT_00011213,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(DAT_0001122f,0x2a);
 printf(DAT_0001124b,0x47);
 printf(DAT_00011267,0x28a);
 printf(DAT_00011284,0x16);
 printf(DAT_000112a0,0x27);
 printf(DAT_000112bc,0x10);
 printf(DAT_000112d8,0x55);
 uVar2 = test_cpp_exception();
 printf(DAT_000112f4,0);
 printf(DAT_00011311,0x2bf);
 puVar3 = (int *)operator new(4);
 *(void **)puVar3 = &PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator new(4);
 *(void **)piVar4 = &PTR__RTTIBase_00021eec;
 iVar5 = __dynamic_cast(puVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar6 = __dynamic_cast(piVar4,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 operator delete((void *)puVar3);
 (**(void (*)(void) **)(*piVar4 + 4))(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(DAT_0001132e,iVar7 + 0xe);
 return;
}



/* Function: main @ 00010fac */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010fc0 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00010fcc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fe0 */
/* WARNING: Restarted to delay deadvoid (*)(void) elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 int cmp_result;
 cmp_result = __aeabi_dcmpgt(param_1,param_2);
 if (cmp_result == 0) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00011000 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011014 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(int *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00011020 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011038 */

/* Container<int>::get(int) const */

int __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 int uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)(this + 0x28)) {
 uVar1 = *(int *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011058 */

/* Container<int>::getSize() const */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(int *)(this + 0x28);
}



/* Function: Container @ 00011060 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(int *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 0001106c */

/* Container<double>::push(double) */

int Container<double>::push(double param_1)

{
 int in_r0;
 int *puVar1;
 int in_r2;
 int in_r3;
 int iVar2;
 
 iVar2 = *(int *)(in_r0 + 0x50);
 if (9 < iVar2) {
 return 0;
 }
 puVar1 = (int *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 return 1;
}



/* Function: get @ 00011090 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 int uVar1;
 int uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this + 0x50)) {
 uVar1 = *(int *)(this + param_1 * 8);
 uVar2 = *(int *)(this + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize @ 000110bc */

/* Container<double>::getSize() const */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(int *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 000110c4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 000110c8 */

/* RTTIDerivedA::getType() const */

int RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 000110d0 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return this;
}



/* Function: ~RTTIDerivedB @ 000110d4 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 000110d8 */

/* RTTIDerivedB::getType() const */

int RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
