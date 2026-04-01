/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long intptr_t;
// typedef unsigned long ptrdiff_t; // Already defined in cstddef
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef void * undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void code;
typedef void (*func_ptr)();
/* Forward declarations for classes */
class Base;
class LifecycleClass {
public:
    static int instance_count;
};

#include <cstdio>
#include <cstddef>
#include <cstring>
#include <new>

namespace std {
    class Init;
    extern Init __ioinit;
}

/* C++ operators */
extern "C" {
    void* operator_new(size_t);
    void operator_delete(void*);
}

extern "C" {
    void __cxa_atexit(void (*)(void*), void*, void*);
    void* __dso_handle;
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, void*, void*);
    void __cxa_free_exception(void*);
    void* __dynamic_cast(const void*, const void*, const void*, long);
}

/* Forward declarations for RTTI classes */
class RTTIBase_Class;
class RTTIDerivedA_Class;
class RTTIDerivedB_Class;

/* RTTI type info structures */
struct type_info {
    virtual ~type_info();
    const char *name;
    type_info() : name(nullptr) {}
    type_info(const char* n) : name(n) {}
};

namespace {
    type_info int_typeinfo("int");
    type_info RTTIBase_typeinfo("RTTIBase");
    type_info RTTIDerivedA_typeinfo("RTTIDerivedA");
    type_info RTTIDerivedB_typeinfo("RTTIDerivedB");
}

/* RTTI pointers */
void* PTR__RTTIBase_00103d78 = nullptr;
void* PTR__RTTIBase_00103da0 = nullptr;

/* RTTI type_info for classes */
namespace RTTIBase {
    type_info typeinfo("RTTIBase");
}
namespace RTTIDerivedA {
    type_info typeinfo("RTTIDerivedA");
}
namespace RTTIDerivedB {
    type_info typeinfo("RTTIDerivedB");
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


const char* DAT_001021d4 = "Hello from C++!\n";
const char* DAT_0010207d = "strlen: %lu\n";
const char* DAT_0010209b = "instance_count: %lu\n";
const char* DAT_001020b7 = "test_cpp_virtual_func: %lu\n";
const char* DAT_001020d3 = "test_cpp_multiple_inheritance: %lu\n";
const char* DAT_001020ef = "test_cpp_diamond_inheritance: %lu\n";
const char* DAT_0010210c = "test_cpp_operator_overload: %lu\n";
const char* DAT_00102128 = "test_cpp_template_func: %lu\n";
const char* DAT_00102144 = "test_cpp_template_class: %lu\n";
const char* DAT_00102160 = "test_cpp_lambda: %lu\n";
const char* DAT_0010217c = "test_cpp_exception: %lu\n";
const char* DAT_00102199 = "test_cpp_smart_ptr: %lu\n";
const char* DAT_001021b6 = "test_cpp_rtti: %lu\n";




/* Function: FUN_00101020 @ 00101020 */
/* CRT stub - removed by preprocessor */



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 __builtin_strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(func_ptr *)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00101335 to 00101348 has its CatchHandler @ 0010134b */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined8*)operator_new(8);
 *(void**)puVar1 = (void*)&PTR__RTTIBase_00103d78;
 plVar2 = (undefined8*)operator_new(8);
 *(void**)plVar2 = (void*)&PTR__RTTIBase_00103da0;
 lVar3 = (long)(intptr_t)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = (long)(intptr_t)__dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 (*(func_ptr *)*(void**)((char*)plVar2 + 8))(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(&DAT_001021d4);
 local_4c[0x10] = '\0';
 local_4c[0x11] = '\0';
 local_4c[0x12] = '\0';
 local_4c[0x13] = '\0';
 local_4c[0x14] = '\0';
 local_4c[0x15] = '\0';
 local_4c[0x16] = '\0';
 local_4c[0x17] = '\0';
 local_4c[0x18] = '\0';
 local_4c[0x19] = '\0';
 local_4c[0x1a] = '\0';
 local_4c[0x1b] = '\0';
 local_4c[0x1c] = '\0';
 local_4c[0x1d] = '\0';
 local_4c[0x1e] = '\0';
 __builtin_strncpy(local_4c,"Test",5);
 local_4c[5] = '\0';
 local_4c[6] = '\0';
 local_4c[7] = '\0';
 local_4c[8] = '\0';
 local_4c[9] = '\0';
 local_4c[10] = '\0';
 local_4c[0xb] = '\0';
 local_4c[0xc] = '\0';
 local_4c[0xd] = '\0';
 local_4c[0xe] = '\0';
 local_4c[0xf] = 0;
 local_4c[0x1f] = 0;
 sVar2 = strlen(local_4c);
 printf(DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_0010209b,(unsigned long)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,(unsigned long)0x2a);
 printf(DAT_001020d3,(unsigned long)0x47);
 printf(DAT_001020ef,(unsigned long)0x28a);
 printf(DAT_0010210c,(unsigned long)0x16);
 printf(DAT_00102128,(unsigned long)0x27);
 printf(DAT_00102144,(unsigned long)0x10);
 printf(DAT_00102160,(unsigned long)0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)uVar1);
 printf(DAT_00102199,(unsigned long)0x2bf);
 puVar3 = (undefined8*)operator_new(8);
 *(void**)puVar3 = &PTR__RTTIBase_00103d78;
 plVar4 = (undefined8*)operator_new(8);
 *(void**)plVar4 = &PTR__RTTIBase_00103da0;
 lVar5 = (long)(intptr_t)__dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 lVar5 = (long)(intptr_t)__dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator_delete(puVar3);
 (*(func_ptr *)(*(void**)plVar4 + 8))(plVar4);
 printf(DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

/* int template_max<int>(int, int) */

template<>
int template_max<int>(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 001016a0 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001016b0 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int index) const;
    int getSize() const;
};

template<typename T>
Container<T>::Container() : size(0) {}

template<>
Container<int>::Container() {
    size = 0;
}

template<>
void Container<int>::push(int value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<>
int Container<int>::get(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return 0;
}

template<>
int Container<int>::getSize() const {
    return size;
}

template<>
Container<double>::Container() {
    size = 0;
}

template<>
void Container<double>::push(double value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<>
double Container<double>::get(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return 0.0;
}

template<>
int Container<double>::getSize() const {
    return size;
}



/* Function: push @ 001016d0 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *self,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001016f0 */

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



/* Function: getSize @ 00101710 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101720 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101730 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101750 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(undefined8 *)(this + (ulong)(uint)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00101770 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101790 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 001017c0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
