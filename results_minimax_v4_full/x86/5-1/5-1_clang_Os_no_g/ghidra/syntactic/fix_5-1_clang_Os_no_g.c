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

/* Ghidra types with calling convention */
// Use standard C++ types instead of Ghidra-specific types
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint64_t undefined8;
typedef void (*code)(void);
/* Define undefined as a generic pointer type for compatibility */
typedef void* undefined;

/* Additional integer types */
typedef int8_t undefined8_t;
typedef int16_t undefined16_t;
typedef int32_t undefined32_t;
typedef int64_t undefined64_t;

/* Calling convention - x86 32-bit uses cdecl by default in GCC */
/* __thiscall is MSVC specific, for GCC we just use regular calling conventions */
#ifndef __thiscall
#define __thiscall
#endif

/* Standard C/C++ headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#include <typeinfo>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Missing runtime declarations */
extern void* __dso_handle;
extern "C" void __cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void*, const std::type_info*, void(*)(void*));
extern "C" int __cxa_atexit(void(*)(void*), void*, void*);

/* __dynamic_cast needs C++ linkage since it uses std::type_info */
void* __dynamic_cast(const void*, const std::type_info*, const std::type_info*, ptrdiff_t);

/* Memory allocation operators */
void* operator new(size_t);
void operator delete(void*);
void* operator new[](size_t);
void operator delete[](void*);

/* Standard library iostream initialization */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
    };
    extern ios_base::Init __ioinit;
}

/* Global ioinit object - define properly */
std::ios_base::Init __ioinit;

/* Data references */
static const char DAT_000121fc[] = "Hello, World! This is a test.";
static const char DAT_000121d8[] = "\n=== C++ Features Test ===\n";
static const char DAT_00012081[] = "String length: %d\n";
static const char DAT_0001209f[] = "Constructor result: %d\n";
static const char DAT_000120bb[] = "Virtual function: %d\n";
static const char DAT_000120d7[] = "Multiple inheritance: %d\n";
static const char DAT_000120f3[] = "Diamond inheritance: %d\n";
static const char DAT_00012110[] = "Operator overload: %d\n";
static const char DAT_0001212c[] = "Template function: %d\n";
static const char DAT_00012148[] = "Template class: %d\n";
static const char DAT_00012164[] = "Lambda: %d\n";
static const char DAT_00012180[] = "Exception: %d\n";
static const char DAT_0001219d[] = "Smart pointer: %d\n";
static const char DAT_000121ba[] = "RTTI: %d\n";

/* RTTI typeinfo pointers */
static const std::type_info* PTR__RTTIBase_00013ecc = &typeid(int);
static const std::type_info* PTR__RTTIDerivedA_00013ee0 = &typeid(int);

/* LifecycleClass */
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Base class for virtual function test */
class Base {
public:
    virtual void virtual_func(int) {}
};

/* RTTI classes */
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    static const std::type_info typeinfo;
};
const std::type_info RTTIBase::typeinfo = typeid(RTTIBase);

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    static const std::type_info typeinfo;
};
const std::type_info RTTIDerivedA::typeinfo = typeid(RTTIDerivedA);

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    static const std::type_info typeinfo;
};
const std::type_info RTTIDerivedB::typeinfo = typeid(RTTIDerivedB);

/* Int typeinfo for exception - use proper runtime type info */
/* The type_info for int is provided by the C++ runtime */
namespace int_ {
    // Use a proper type_info reference from the runtime
    static const std::type_info& typeinfo = typeid(int);
}

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */
/* NOTE: This function was calling through null pointer - likely a decompilation artifact */
/* The original binary may have contained invalid code or this was a jump to undefined memory */

void FUN_00011030(void)
{
 // Original code: (*(code *)(undefined *)0x0)();
 // This would call function at address 0x0, which is clearly invalid
 // Returning without doing anything to avoid null pointer dereference
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011324 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

undefined4 test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [31];
 uint8_t local_9;
 
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 return (undefined4)(sVar1 + 0x125c);
}



/* Function: test_cpp_constructor @ 00011370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 iVar3 = 0;
 piVar1 = (int*)operator new(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + piVar1[2];
 operator delete(piVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 000113cf */

/* call_virtual_func(Base*, int) - calling virtual function through vtable */

void call_virtual_func(Base *param_1, int param_2)
{
    // Virtual function call through vtable - first entry is vtable pointer
    typedef void (__thiscall *VirtualFunc)(void*, int);
    VirtualFunc vf = *(VirtualFunc*)(*(undefined4*)param_1);
    vf(param_1, param_2);
    return;
}



/* Function: test_cpp_virtual_func @ 000113f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011406 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 0001141e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

// Note: __cxa_throw never returns, so this function never actually returns a value
// The return value would be set before throw but never used
uint32_t test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011443 to 0001145c has its CatchHandler @ 0001145f */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_::typeinfo,0);
 
 // This line is unreachable but needed for valid C++ syntax
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00011502 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined4*)operator new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00013ecc;
 puVar2 = (undefined4*)operator new(4);
 *puVar2 = (undefined4)&PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(puVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator delete(puVar1);
 // Virtual destructor call through vtable at offset + 4
 typedef void (__thiscall *VirtualDtor)(void*);
 VirtualDtor vdtor = *(VirtualDtor*)((*(undefined4*)puVar2) + 4);
 vdtor(puVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 char local_28 [31];
 undefined1 local_9;
 
 puts(&DAT_000121d8);
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 printf(&DAT_00012081,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 printf(&DAT_0001209f,uVar2);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,uVar2);
 return;
}



/* Function: main @ 00011722 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Primary template declarations for template functions */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

/* Function: template_max<int> @ 0001173e */

/* int template_max<int>(int, int) */

template<>
int template_max(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 0001174c */

/* double template_max<double>(double, double) */

template<>
double template_max(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 0001175d */

/* void template_swap<int>(int&, int&) */

template<> void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011770 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 0001177c */

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



/* Function: get @ 00011798 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 000117b0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 000117b8 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 000117c4 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 000117e2 */

/* Container<double>::get(int) const */

longdouble __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 longdouble lVar1;
 
 lVar1 = (longdouble)0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 lVar1 = (longdouble)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}



/* Function: getSize @ 000117fc */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00011804 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 00011826 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 0001182a */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001182c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 0001184e */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
