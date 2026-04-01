/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t defined in stddef.h */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra undefined types */
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

/* Function pointer type */
typedef void (*code)();

/* C standard library includes */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* C++ standard library */
#include <new>
#include <cstdlib>
#include <iostream>

/* C++ standard library */
using namespace std;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* External declarations for C++ runtime */
extern "C" {
    extern void *__dso_handle;
}

/* C++ runtime functions */
extern "C" {
    void *__cxa_allocate_exception(size_t);
    void __cxa_throw(void*, const std::type_info*, void (*)(void*));
    int __cxa_atexit(void (*)(void*), void*, void*);
    void *__dynamic_cast(const void *, const void *, const void *, const void *, int);
}

/* Forward declarations for C++ classes */
class Base;
class LifecycleClass {
public:
    static int instance_count;
};

/* RTTI classes with typeinfo - using namespaces for typeinfo to avoid conflicts */
namespace RTTIBase {
    struct type_info;
}
namespace RTTIDerivedA {
    struct type_info;
}
namespace RTTIDerivedB {
    struct type_info;
}

/* Forward declarations for typeinfo - need complete types for RTTI */
namespace RTTIBase {
    struct type_info : public std::type_info {
        virtual ~type_info();
    };
    /* Typeinfo instance - lowercase for RTTI access */
    extern type_info typeinfo;
}
namespace RTTIDerivedA {
    struct type_info : public std::type_info {
        virtual ~type_info();
    };
    extern type_info typeinfo;
}
namespace RTTIDerivedB {
    struct type_info : public std::type_info {
        virtual ~type_info();
    };
    extern type_info typeinfo;
}

/* Exception type info - for int type in exception handling */
/* Using the standard type_info for int */
namespace int_ {
    struct type_info : public std::type_info {
        virtual ~type_info();
    };
    /* Typeinfo instance */
    extern type_info typeinfo;
}

/* Alias for exception type - the code uses int::typeinfo */
typedef int_::type_info int_type_info;

/* External data references from binary */
extern void* PTR__RTTIBase_00021ed8;
extern void* PTR__RTTIBase_00021eec;
extern const char DAT_00011358[];
extern const char DAT_00011201[];
extern const char DAT_0001121f[];
extern const char DAT_0001123b[];
extern const char DAT_00011257[];
extern const char DAT_00011273[];
extern const char DAT_00011290[];
extern const char DAT_000112ac[];
extern const char DAT_000112c8[];
extern const char DAT_000112e4[];
extern const char DAT_00011300[];
extern const char DAT_0001131d[];
extern const char DAT_0001133a[];

/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit([](void* p) { ((std::ios_base::Init*)p)->~Init(); }, &std::__ioinit, &__dso_handle);
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
 char local_28[16];  /* "Test" string buffer */
 
 memset(local_28, 0, sizeof(local_28));
 strcpy(local_28, "Test");
 sVar1 = strlen(local_28);
 return (int)(sVar1 + 0x125c);
}



/* Function: test_cpp_constructor @ 00010b64 */



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) - stub implementation */

void call_virtual_func(Base *param_1,int param_2)

{
 (void)param_1;
 (void)param_2;
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

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(const std::type_info*)&int::typeinfo,(void (*)(void*))0);
}



/* Function: test_cpp_smart_ptr @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void **ppvVar1;
 void **ppvVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 ppvVar1 = (void **)operator new(4);
 *ppvVar1 = PTR__RTTIBase_00021ed8;
 ppvVar2 = (void **)operator new(4u);
 *ppvVar2 = PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(*ppvVar1,(const void*)&RTTIBase::typeinfo,(const void*)&RTTIDerivedA::typeinfo,(const void*)&RTTIBase::typeinfo,0);
 iVar4 = (int)__dynamic_cast(*ppvVar2,(const void*)&RTTIBase::typeinfo,(const void*)&RTTIDerivedB::typeinfo,(const void*)&RTTIBase::typeinfo,0);
 operator delete(ppvVar1);
 (**(code **)((char*)*ppvVar2 + 4))(ppvVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d7c */

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
 
 puts(DAT_00011358);
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
 printf((const char*)DAT_00011201,sVar1 + 0x125c);
 printf(DAT_0001121f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(DAT_0001123b,0x2a);
 printf(DAT_00011257,0x47);
 printf(DAT_00011273,0x28a);
 printf(DAT_00011290,0x16);
 printf(DAT_000112ac,0x27);
 printf(DAT_000112c8,0x10);
 printf(DAT_000112e4,0x55);
 test_cpp_exception();
 /* Note: The following printf is unreachable due to exception */
 // printf(DAT_00011300,0x2bf);
 puVar3 = (undefined4*)operator new(4u);
 *puVar3 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar4 = (int*)operator new(4u);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = (int)__dynamic_cast(puVar3,(const void*)&RTTIBase::typeinfo,(const void*)&RTTIDerivedA::typeinfo,(const void*)&RTTIBase::typeinfo,0);
 iVar6 = (int)__dynamic_cast(piVar4,(const void*)&RTTIBase::typeinfo,(const void*)&RTTIDerivedB::typeinfo,(const void*)&RTTIBase::typeinfo,0);
 operator delete(puVar3);
 (**(code **)(*piVar4 + 4))(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(DAT_0001133a,iVar7 + 0xe);
 return;
}



/* Function: main @ 00010fb8 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010fcc */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 // Compare doubles: return param_1 > param_2
 bool result = param_1 > param_2;
 if (!result) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 0001100c */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011020 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 0001102c */

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



/* Function: get @ 00011044 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)(this + 0x28)) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011064 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 0001106c */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00011078 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
 int in_r0;
 undefined4 *puVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar2;
 
 iVar2 = *(int *)(in_r0 + 0x50);
 if (9 < iVar2) {
 return SUB84(param_1,0);
 }
 puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 return SUB84(param_1,0);
}



/* Function: get @ 0001109c */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this + 0x50)) {
 uVar1 = *(undefined4 *)(this + param_1 * 8);
 uVar2 = *(undefined4 *)(this + param_1 * 8 + 4);
 }
 return (uint64_t)uVar2 << 32 | (uint64_t)uVar1;
 }
 return 0;
}



/* Function: getSize @ 000110c8 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 000110d0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 000110d4 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 000110dc */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return this;
}



/* Function: ~RTTIDerivedB @ 000110e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 000110e4 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
