#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
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

/* Ghidra undefined type definitions */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint64_t undefined8;
typedef void (*code)(void *);

/* Helper macros for type concatenation */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* C++ runtime stubs */
extern void *__dumb_ptr;
extern void *__dso_handle;

/* Forward declarations for C++ classes */
struct Base;
struct LifecycleClass {
    static int instance_count;
};
struct RTTIBase {
    static struct type_info typeinfo;
};
struct RTTIDerivedA {
    static struct type_info typeinfo;
};
struct RTTIDerivedB {
    static struct type_info typeinfo;
};
struct type_info {
    const char *name;
};
/* Type info for int */
extern struct type_info std_type_info_int;

/* External RTTI vtable pointers */
extern void *PTR__RTTIBase_00021ed8;
extern void *PTR__RTTIBase_00021eec;

/* External data references */
extern undefined4 DAT_000111f5;
extern undefined4 DAT_00011213;
extern undefined4 DAT_0001122f;
;
extern undefined4 DAT_0001124b;
extern undefined4 DAT_00011267;
extern undefined4 DAT_00011284;
extern undefined4 DAT_000112a0;
extern undefined4 DAT_000112bc;
extern undefined4 DAT_000112d8;
extern undefined4 DAT_000112f4;
extern undefined4 DAT_00011311;
extern undefined4 DAT_0001132c;
extern undefined4 DAT_0001134c;
extern undefined4 DAT_0001132e;

/* Additional data symbol definitions */
undefined4 DAT_000112a0 = 0;
undefined4 DAT_000112d8 = 0;
undefined4 DAT_00011311 = 0;
undefined4 DAT_000112f4 = 0;
undefined4 DAT_0001122f = 0;
undefined4 DAT_00011267 = 0;
undefined4 DAT_0001132e = 0;
undefined4 DAT_0001134c = 0;
undefined4 DAT_000111f5 = 0;
undefined4 DAT_00011213 = 0;
void *PTR__RTTIBase_00021ed8 = NULL;
void *PTR__RTTIBase_00021eec = NULL;
struct type_info std_type_info_int = { { "int" } };

/* Additional data symbol definitions for format strings */
undefined4 DAT_0001124b = 0;
undefined4 DAT_00011284 = 0;
undefined4 DAT_000112bc = 0;

/* Forward declarations for static members */
int LifecycleClass_instance_count = 0;
struct type_info RTTIBase_typeinfo = { { "RTTIBase" } };
struct type_info RTTIDerivedA_typeinfo = { { "RTTIDerivedA" } };
struct type_info RTTIDerivedB_typeinfo = { { "RTTIDerivedB" } };

/* C++ operator declarations */
void *operator_new(size_t size) { return malloc(size); }
void operator_delete(void *ptr) { free(ptr); }
void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}
void __cxa_throw(void *obj, struct type_info *tinfo, void *dest) {
    /* Stub implementation - just exit */
    exit(1);
}

/* ARM ABI functions */
int __aeabi_dcmpgt(double a, double b) {
    return a > b ? 1 : 0;
}

/* RTTI functions */
void *__dynamic_cast(void *src, struct type_info *src_type, struct type_info *dest_type, int offset) {
    /* Stub implementation - always returns NULL for now */
    return NULL;
}

/* Specialized Container structs to match compiled binary layout */
struct Container_int {
    char _padding[40];  // Match binary layout
    int size;
};

struct Container_double {
    char _padding[80];  // Match binary layout  
    int size;
};

/* namespace std declaration */
namespace std {
    struct Init {
    };
    void std_Init_Init_fn(std::Init *this_ptr);
    void std_Init_D1Ev(std::Init *this_ptr);

    struct ios_base {
        static struct Init __ioinit;
    };
}
using namespace std;

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { return 0; }




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* CRT stub function removed - references CRT artifacts */




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
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined2 local_c;
 undefined1 local_a;
 undefined1 local_9;
 
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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)((void *)(intptr_t)param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined4 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1, &std_type_info_int, 0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = (undefined4)PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast((void *)puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast((void *)piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (**(code **)((char *)(void *)*piVar2 + 4))((void *)piVar2);
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
 undefined4 uVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined2 local_1c;
 undefined1 local_1a;
 undefined1 local_19;
 
 puts((const char *)&DAT_0001134c);
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
 printf((const char *)&DAT_000111f5,sVar1 + 0x125c);
 printf((const char *)&DAT_00011213,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf((const char *)&DAT_0001122f,0x2a);
 printf((const char *)&DAT_0001124b,0x47);
 printf((const char *)&DAT_00011267,0x28a);
 printf((const char *)&DAT_00011284,0x16);
 printf((const char *)&DAT_000112a0,0x27);
 printf((const char *)&DAT_000112bc,0x10);
 printf((const char *)&DAT_000112d8,0x55);
 uVar2 = test_cpp_exception();
 printf((const char *)&DAT_000112f4,uVar2);
 printf((const char *)&DAT_00011311,0x2bf);
 puVar3 = (undefined4 *)operator_new(4);
 *puVar3 = (undefined4)PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)PTR__RTTIBase_00021eec;
 iVar5 = (int)__dynamic_cast((void *)puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = (int)__dynamic_cast((void *)piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (**(code **)((char *)*(void **)piVar4 + 4))((void *)piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf((const char *)&DAT_0001132e,iVar7 + 0xe);
 return;
}



/* Function: main @ 00010fac */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010fc0 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00010fcc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fe0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (__aeabi_dcmpgt(param_1, param_2)) {
     return param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 00011000 */

/* void template_swap<int>(int&, int&) */

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

void Container_int_Constructor(Container_int *obj)

{
 *(undefined4 *)((char *)obj + 0x28) = 0;
 return;
}



/* Function: push @ 00011020 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *obj,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)obj + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)obj + 0x28) = iVar1 + 1;
 *(int *)((char *)obj + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011038 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *obj,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)((char *)obj + 0x28)) {
 uVar1 = *(undefined4 *)((char *)obj + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011058 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *obj)

{
 return *(undefined4 *)((char *)obj + 0x28);
}



/* Function: Container @ 00011060 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *obj)

{
 *(undefined4 *)((char *)obj + 0x50) = 0;
 return;
}



/* Function: push @ 0001106c */

/* Container<double>::push(double) */

undefined4 Container_double_push(void *_this, double param_1)

{
 int iVar2;
 
 iVar2 = *(int *)((char *)_this + 0x50);
 if (iVar2 < 10) {
 *(double *)((char *)_this + iVar2 * 8) = param_1;
 *(int *)((char *)_this + 0x50) = iVar2 + 1;
 }
 return 0;
}



/* Function: get @ 00011090 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *obj,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)((char *)obj + 0x50)) {
 uVar1 = *(undefined4 *)((char *)obj + param_1 * 8);
 uVar2 = *(undefined4 *)((char *)obj + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize @ 000110bc */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *obj)

{
 return *(undefined4 *)((char *)obj + 0x50);
}



/* Function: ~RTTIDerivedA @ 000110c4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *obj)

{
 if (obj) {
     operator_delete(obj);
 }
 return;
}



/* Function: getType @ 000110c8 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 000110d0 */

/* RTTIBase::~RTTIBase() */

RTTIBase * RTTIBase_destructor(RTTIBase *obj)

{
 if (obj) {
     operator_delete(obj);
 }
 return (RTTIBase *)0;
}



/* Function: ~RTTIDerivedB @ 000110d4 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *obj)

{
 if (obj) {
     operator_delete(obj);
 }
 return;
}



/* Function: getType @ 000110d8 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
