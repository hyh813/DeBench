/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)();
typedef void *undefined;

/* C++ standard library stubs */
#include <stdlib.h>
void *operator new(size_t size) { return malloc(size); }
void operator delete(void *ptr) { free(ptr); }
void *operator new[](size_t size) { return malloc(size); }
void operator delete[](void *ptr) { free(ptr); }

/* Base class for virtual function test */
struct Base {
    virtual ~Base() {}
};

/* LifecycleClass for constructor test */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Template class Container - full definition */
template<typename T>
struct Container {
    T data[10];
    int count;
    Container();
    void push(T value);
    T get(int index) const;
    int getSize() const;
};

template<typename T>
Container<T>::Container() {
    count = 0;
}

template<typename T>
void Container<T>::push(T value) {
    if (count < 10) {
        data[count++] = value;
    }
}

template<typename T>
T Container<T>::get(int index) const {
    if (index >= 0 && index < count) {
        return data[index];
    }
    return T();
}

template<typename T>
int Container<T>::getSize() const {
    return count;
}

/* Template function declarations (primary templates) */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

/* C++ runtime stubs */
extern "C" {
    void *__dso_handle = 0;
    
    void *__cxa_allocate_exception(size_t size) {
        return malloc(size);
    }
    
    int __cxa_atexit(void (*destructor)(void*), void *arg, void *dso_handle) {
        return 0;
    }
    
    void *__dynamic_cast(const void *sub, const void *from, const void *to, long offset) {
        // Simplified RTTI dynamic_cast stub
        // Check if from is base of to
        const char *from_type = (const char *)from;
        const char *to_type = (const char *)to;
        if (from_type == to_type) {
            return (void *)sub;
        }
        return nullptr;
    }
    
    // Type info for int - used by exception handling
    namespace int_typeinfo {
        struct type_info {
            const char *name;
            type_info(const char *n) : name(n) {}
        };
        type_info typeinfo("int");
    }
}

/* RTTI type info structures */
// Forward declarations removed to avoid conflict with namespaces

// Define the type_info objects - using simple structs with name pointer
namespace RTTIBase {
    struct type_info {
        const char *name;
        type_info(const char *n) : name(n) {}
    };
    type_info typeinfo("RTTIBase");
}
namespace RTTIDerivedA {
    struct type_info {
        const char *name;
        type_info(const char *n) : name(n) {}
    };
    type_info typeinfo("RTTIDerivedA");
}
namespace RTTIDerivedB {
    struct type_info {
        const char *name;
        type_info(const char *n) : name(n) {}
    };
    type_info typeinfo("RTTIDerivedB");
}

void *PTR__RTTIBase_00103d78 = &RTTIBase::typeinfo;
void *PTR__RTTIBase_00103da0 = &RTTIDerivedB::typeinfo;

namespace std {
    struct __ioinit { };
}
std::__ioinit __ioinit;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* String constants */
char DAT_001021d4[] = "Testing C++ Features:\n";
char DAT_0010207d[] = "test_cpp_member_func returned: %d\n";
char DAT_0010209b[] = "test_cpp_constructor returned: %u\n";
char DAT_001020b7[] = "test_cpp_virtual_func returned: %d\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance returned: %d\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance returned: %d\n";
char DAT_0010210c[] = "test_cpp_operator_overload returned: %d\n";
char DAT_00102128[] = "test_cpp_template_func returned: %d\n";
char DAT_00102144[] = "test_cpp_template_class returned: %d\n";
char DAT_00102160[] = "test_cpp_lambda returned: %d\n";
char DAT_0010217c[] = "test_cpp_exception returned: %d\n";
char DAT_00102199[] = "test_cpp_smart_ptr returned: %d\n";
char DAT_001021b6[] = "test_cpp_rtti returned: %d\n";

#include <cstdio>
#include <cstdlib>
using namespace std;




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101140 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 // Simplified C++ iostream initialization stub
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0010125c */

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



/* Function: test_cpp_constructor @ 00101294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 puVar1 = (undefined4 *)operator new(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar4 = LifecycleClass::instance_count + puVar1[2];
 operator delete(puVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 001012e5 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012eb. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 001012ed */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101311 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101317 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined8 *)operator new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar2 = (long *)operator new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103da0;
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator delete(puVar1);
 (**(code **)(*plVar2 + 8))(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 0010147f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 char local_24 [36];
 
 puts(DAT_001021d4);
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
 sVar2 = strlen(local_24);
 printf(DAT_0010207d,(int)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(DAT_0010209b,(unsigned long)uVar1);
 printf(DAT_001020b7,(unsigned long)0x2a);
 printf(DAT_001020d3,(unsigned long)0x47);
 printf(DAT_001020ef,(unsigned long)0x28a);
 printf(DAT_0010210c,(unsigned long)0x16);
 printf(DAT_00102128,(unsigned long)0x27);
 printf(DAT_00102144,(unsigned long)0x10);
 printf(DAT_00102160,(unsigned long)0x55);
 test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)0);
 printf(DAT_00102199,(unsigned long)0x2bf);
 uVar1 = test_cpp_rtti();
 printf(DAT_001021b6,(unsigned long)uVar1);
 return;
}



/* Function: main @ 001015a8 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 001015b2 */

/* int template_max<int>(int, int) */

// Explicit specialization
template<>
int template_max(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 001015ba */

/* double template_max<double>(double, double) */

template<>
double template_max(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001015bf */

/* void template_swap<int>(int&, int&) */

template<>
void template_swap(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001015c8 */

/* Container<int>::Container() */

template<>
Container<int>::Container()

{
 this->count = 0;
 return;
}



/* Function: push @ 001015d0 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *pThis,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(pThis + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(pThis + 0x28) = iVar1 + 1;
 *(int *)(pThis + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001015e4 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *pThis,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001015f6 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *pThis)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001015fa */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *pThis)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101602 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *pThis,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101618 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *pThis,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(undefined8 *)(this + (ulong)(uint)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 0010162c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *pThis)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101630 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 00101636 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 0010163c */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010163e */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101644 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
