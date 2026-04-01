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
typedef unsigned long ulong;
typedef void (*code)();

/* Ghidra type definitions */
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned long undefined7;
typedef unsigned char undefined1;
typedef unsigned long undefined;

/* Standard library includes */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declarations for all classes */
struct LifecycleClass;

/* Forward declaration for Base class - full definition */
struct Base {
    void* vtable;
};

/* Init struct declaration */
struct Init {
    void* vtable;
};

extern struct std_ios_base_Init __ioinit;

/* Completed flag for static destruction and dso_handle */
int completed_0 = 0;
void* __dso_handle = (void*)0;

/* Forward declarations for all functions */
int test_cpp_oo_features(void);

/* RTTI type info structures */
struct typeinfo {
    void *vtable;
    const char *name;
};

/* RTTI type_info declarations - using C++ scope resolution style */
extern struct typeinfo int_typeinfo;
extern struct typeinfo RTTIBase_typeinfo;
extern struct typeinfo RTTIDerivedA_typeinfo;
extern struct typeinfo RTTIDerivedB_typeinfo;

/* C++ style typeinfo names - using struct directly */
/* Note: These are just typeinfo struct typedef, not class names */
typedef struct typeinfo typeinfo_t;

/* RTTI class names - don't use #define to avoid shadowing struct names */
/* We'll use the actual struct names: RTTIBase, RTTIDerivedA, RTTIDerivedB */

#define int_ typeinfo_t

/* For int::typeinfo usage - we need int_typeinfo to be the typeinfo struct */
/* The code uses int::typeinfo which should resolve to a typeinfo pointer */
/* Define int_typeinfo as a variable that can be used with &int::typeinfo */
extern struct typeinfo int_typeinfo;
/* Macro to make &int::typeinfo work - it should give address of int_typeinfo */
#define int_typeinfo_ (int_typeinfo)
#define int ::typeinfo_

/* Also define macros for RTTIBase::typeinfo, etc. */
#define RTTIBase_TYPEINFO RTTIBase_typeinfo
#define RTTIDerivedA_TYPEINFO RTTIDerivedA_typeinfo
#define RTTIDerivedB_TYPEINFO RTTIDerivedB_typeinfo

/* Helper macros for RTTI - these are used with & to get typeinfo pointers */
#define RTTIBase_typeinfo_ptr (&RTTIBase_typeinfo)
#define RTTIDerivedA_typeinfo_ptr (&RTTIDerivedA_typeinfo)
#define RTTIDerivedB_typeinfo_ptr (&RTTIDerivedB_typeinfo)

/* Forward declaration for Base class */
struct Base;

/* Forward declarations for RTTI type_info */
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* RTTI typeinfo definitions */
struct typeinfo int_typeinfo;
struct typeinfo RTTIBase_typeinfo;
struct typeinfo RTTIDerivedA_typeinfo;
struct typeinfo RTTIDerivedB_typeinfo;

/* C++ style typeinfo macros - these should expand to the typeinfo struct/variables */
#define RTTIBase_TYPEINFO RTTIBase_typeinfo
#define RTTIDerivedA_TYPEINFO RTTIDerivedA_typeinfo
#define RTTIDerivedB_TYPEINFO RTTIDerivedB_typeinfo

/* For &RTTIBase::typeinfo usage - these need to give address of the typeinfo variables */
#define RTTIBase_typeinfo (&RTTIBase_typeinfo)
#define RTTIDerivedA_typeinfo (&RTTIDerivedA_typeinfo)
#define RTTIDerivedB_typeinfo (&RTTIDerivedB_typeinfo)

/* Namespace std declarations - simplified for C compatibility */
struct std_ios_base_Init {
    void* vtable;
};

struct Init {
    void* vtable;
};

extern struct std_ios_base_Init __ioinit;

/* Forward declaration for Base class - full definition */
struct Base {
    void* vtable;
};

/* Forward declarations for all functions */
int test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(struct Base *param_1,int param_2);
undefined8 test_cpp_virtual_func(void);
undefined8 test_cpp_multiple_inheritance(void);
undefined8 test_cpp_diamond_inheritance(void);
undefined8 test_cpp_operator_overload(void);
undefined8 test_cpp_template_func(void);
undefined8 test_cpp_template_class(void);
undefined8 test_cpp_lambda(void);
void test_cpp_exception(void);
undefined8 test_cpp_smart_ptr(void);
int test_cpp_rtti(void);

/* Forward declaration for Base class - full definition */
struct Base {
    void* vtable;
};

/* Completed flag for static destruction and dso_handle */
int completed_0 = 0;
void* __dso_handle = (void*)0;

/* C++ runtime declarations - operator new/delete defined manually below */
void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void __cxa_finalize(void* ptr);
void __cxa_rethrow();
void __cxa_get_globals();
void deregister_tm_clones();
void* __dynamic_cast(void* ptr, void* src_type, void* dst_type, long offset);

/* C++ std::ios_base::Init runtime functions */
void std_ios_base_Init_Init(struct std_ios_base_Init*);
void std_ios_base_Init___dtor(struct std_ios_base_Init*);

void* operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

void* __cxa_allocate_exception(size_t throw_type) {
    void* ptr = malloc(throw_type);
    return ptr;
}

void __cxa_throw(void* thrown_exception, void* type_info, void* dest) {
    // Stub - actual implementation would throw
    while(1) {}
}

/* Forward declaration for Base class - full definition */
struct Base {
    void* vtable;
};

/* LifecycleClass definition */
struct LifecycleClass {
    static int instance_count;
};

/* Initialize static member */
int LifecycleClass::instance_count = 0;

/* RTTI Base class definition */
struct RTTIBase {
    virtual ~RTTIBase() {}
    virtual int getType() const = 0;
};

/* RTTI DerivedA class definition */
struct RTTIDerivedA : public RTTIBase {
    virtual ~RTTIDerivedA() {}
    virtual int getType() const override { return 1; }
};

/* RTTI DerivedB class definition */
struct RTTIDerivedB : public RTTIBase {
    virtual ~RTTIDerivedB() {}
    virtual int getType() const override { return 2; }
};

/* Pointer variables for RTTI */
void* PTR__RTTIBase_00111d58 = nullptr;
void* PTR__RTTIBase_00111d80 = nullptr;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((struct std_ios_base_Init *)&__ioinit);
 __cxa_atexit(std_ios_base_Init___dtor,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101014 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return ::LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001011bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001011c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 
 puVar1 = operator_new(8);
 *puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 (**(code **)(*plVar2 + 8))(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 ulong uVar3;
 undefined8 *puVar4;
 long *plVar5;
 long lVar6;
 undefined4 local_58;
 undefined8 local_54;
 undefined7 uStack_4c;
 undefined1 uStack_45;
 undefined7 uStack_44;
 undefined8 uStack_3d;
 undefined1 local_35;
 
 puts(&DAT_00101734);
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(&DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
 printf(&DAT_001015fb,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(&DAT_00101617,0x2a);
 printf(&DAT_00101633,0x47);
 printf(&DAT_0010164f,0x28a);
 printf(&DAT_0010166c,0x16);
 printf(&DAT_00101688,0x27);
 printf(&DAT_001016a4,0x10);
 printf(&DAT_001016c0,0x55);
 uVar3 = test_cpp_exception();
 printf(&DAT_001016dc,uVar3 & 0xffffffff);
 printf(&DAT_001016f9,0x2bf);
 puVar4 = operator_new(8);
 *puVar4 = &PTR__RTTIBase_00111d58;
 plVar5 = operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 (**(code **)(*plVar5 + 8))(plVar5);
 iVar1 = printf(&DAT_00101716,(ulong)(iVar1 + 0xe));
 return iVar1;
}



/* Function: main @ 00101458 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101470 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 0010147c */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00101488 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 0010149c */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001014a4 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001014c0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001014e0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001014e8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 001014f0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}



/* Function: get @ 0010150c */

/* Container<double>::get(int) const */

undefined1 [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 ulong uVar1;
 undefined1 auVar2 [16];
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)(uint)param_1 * 8);
 }
 auVar2._8_8_ = 0;
 auVar2._0_8_ = uVar1;
 return auVar2;
}



/* Function: getSize @ 00101528 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101530 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101534 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 0010153c */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00101540 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101544 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
