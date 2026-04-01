/* Auto-injected type definitions by preprocessor - only define if not already defined */
#ifndef _STDINT_H
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#endif

/* Standard size_t and related types from stddef.h (included above) */

/* Standard library stubs */
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>
void* malloc(size_t size);
void free(void* ptr);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* ex, void* typeinfo, void* dest);
void* __dynamic_cast(void* ptr, void* src_typeinfo, void* dst_typeinfo, ptrdiff_t offset);
int printf(const char* format, ...);
int puts(const char* s);
int strlen(const char* s);

/* Exception typeinfo for int */
struct __cxa_type_info {
    void* vtable;
    const char* name;
};
static const char int_typeinfo_name[] = "int";
static struct __cxa_type_info int_typeinfo = { 0, int_typeinfo_name };
void* int_typeinfo_ptr = &int_typeinfo;

/* Ghidra types for decompiled code - use standard stdint.h - defined earlier */

/* RTTI typeinfo stubs */
struct typeinfo {
    void* vtable;
    const char* name;
};

/* Forward declarations for RTTI classes */
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* RTTI class definitions with typeinfo */
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    virtual int getType() const { return 0; }
    static struct typeinfo typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    ~RTTIDerivedA() override;
    int getType() const override;
    static struct typeinfo typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    ~RTTIDerivedB() override;
    int getType() const override;
    static struct typeinfo typeinfo;
};

/* Initialize typeinfo for RTTI classes */
typeinfo RTTIBase::typeinfo = { 0, "RTTIBase" };
typeinfo RTTIDerivedA::typeinfo = { 0, "RTTIDerivedA" };
typeinfo RTTIDerivedB::typeinfo = { 0, "RTTIDerivedB" };

/* int typeinfo for exception handling */
struct typeinfo* int_typeinfo_ptr = (struct typeinfo*)&"int";

/* RTTI typeinfo pointers */
void* PTR__RTTIBase_00021ed8 = &RTTIBase::typeinfo;
void* PTR__RTTIBase_00021eec = &RTTIDerivedB::typeinfo;

/* String data references */
const char DAT_00011294[] = "Testing C++ OOP Features:\n";
const char DAT_0001113d[] = "test_cpp_member_func: %d\n";
const char DAT_0001115b[] = "test_cpp_constructor: %d\n";
const char DAT_00011177[] = "test_cpp_virtual_func: %d\n";
const char DAT_00011193[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_000111af[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_000111cc[] = "test_cpp_operator_overload: %d\n";
const char DAT_000111e8[] = "test_cpp_template_func: %d\n";
const char DAT_00011204[] = "test_cpp_template_class: %d\n";
const char DAT_00011220[] = "test_cpp_lambda: %d\n";
const char DAT_0001123c[] = "test_cpp_exception: %d\n";
const char DAT_00011259[] = "test_cpp_smart_ptr: %d\n";
const char DAT_00011276[] = "test_cpp_rtti: %d\n";

/* Ghidra types for decompiled code */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint64_t undefined8;
typedef void (*code)(void);

/* undefined4 is already defined as uint32_t */

/* Minimal std namespace stub */
namespace std {
    namespace ios_base {
        class Init {
        public:
            Init();
            ~Init();
        };
    }
}

/* __cxa_atexit and __dso_handle stubs */
int __cxa_atexit(void (*destructor)(void*), void* arg, void* handle);
void* __dso_handle = 0;

/* Global Init object - declared and initialized properly */
std::ios_base::Init __ioinit_instance;
std::ios_base::Init* __ioinit = &__ioinit_instance;

/* Init constructor/destructor implementations */
std::ios_base::Init::Init() {}
std::ios_base::Init::~Init() {}

/* LifecycleClass stub */
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Base class forward declaration */
class Base;

/* operator_new stub - maps to standard new */
void* operator_new(size_t size) {
    return malloc(size);
}

/* operator_delete stub */
void operator_delete(void* ptr) {
    free(ptr);
}

/* Destructor helper for std::ios_base::Init */
static void ios_init_destructor(void* arg) {
    ((std::ios_base::Init*)arg)->~Init();
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::ios_base::Init::Init(&__ioinit);
 __cxa_atexit((void (*)(void*))std::ios_base::Init::~Init,&__ioinit,&__dso_handle);
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
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
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
 __cxa_throw(puVar1,&int::typeinfo,0);
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
 
 puVar1 = (undefined4*)operator_new(4);
 *puVar1 = (int)&PTR__RTTIBase_00021ed8;
 piVar2 = (undefined4*)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator_delete(puVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
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
 
 puts(&DAT_00011294);
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
 printf(&DAT_0001113d,(int)(sVar1 + 0x125c));
 printf(&DAT_0001115b,(int)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(&DAT_00011177,0x2a);
 printf(&DAT_00011193,0x47);
 printf(&DAT_000111af,0x28a);
 printf(&DAT_000111cc,0x16);
 printf(&DAT_000111e8,0x27);
 printf(&DAT_00011204,0x10);
 printf(&DAT_00011220,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0001123c,(int)uVar2);
 printf(&DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_00011276,(int)uVar2);
 return;
}



/* Function: main @ 00010ef4 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010f08 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
 return param_1;
}



/* Function: template_swap<int> @ 00010f48 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00010f5c */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00010f68 */

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



/* Function: get @ 00010f80 */

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



/* Function: getSize @ 00010fa0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00010fa8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00010fb4 */

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



/* Function: get @ 00010fd8 */

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
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize @ 00011004 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 0001100c */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011010 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011018 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return this;
}



/* Function: ~RTTIDerivedB @ 0001101c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011020 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
