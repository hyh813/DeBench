/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#include <stddef.h>
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;
/* ptrdiff_t is already defined in stddef.h */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompilation types */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* C++ standard library forward declarations */
namespace std {
    class type_info;
    
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* Global initialization namespace */
namespace _GLOBAL {
    void sub_I_5_1_cpp(void);
}

/* C++ ABI declarations */
extern void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* __dso_handle;


/* CRT stub function _init removed by preprocessor */

#include <string.h>
#include <stdio.h>

/* Function pointer typedef for virtual function calls */
typedef void (*code)(void*);

/* Forward declarations for C++ classes */
class Base {
public:
    void** _vptr_Base;
};

/* Container<int> type definition */
struct Container_int {
    int size;
    int data[10];
};

/* Container<double> type definition */
struct Container_double {
    int size;
    double data[10];
};

class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType();
    static const std::type_info typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType();
    static const std::type_info typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType();
    static const std::type_info typeinfo;
};

/* C++ new/delete operators */
#include <stdlib.h>

/* ARM EABI floating-point comparison helper */
int __aeabi_dcmpgt(int a_hi, int a_lo, int b_hi, int b_lo);

void* operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

/* Placement new operator for in-place construction */
void* operator_new_placement(size_t size, void* ptr) {
    return ptr;
}

/* Placement delete operator */
void operator_delete_placement(void*, void*) {
}

void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* obj, void* tinfo, void (*dest)(void*));
int __dynamic_cast(void* obj, const std::type_info* src, const std::type_info* dst, int offset);

/* Global symbols */
extern void** PTR__RTTIBase_00021ed8;
extern void** PTR__RTTIBase_00021eec;
extern const char DAT_00011294[];
extern const char DAT_0001113d[];
extern const char DAT_0001115b[];
extern const char DAT_00011177[];
extern const char DAT_00011193[];
extern const char DAT_000111af[];
extern const char DAT_000111cc[];
extern const char DAT_000111e8[];
extern const char DAT_00011204[];
extern const char DAT_00011220[];
extern const char DAT_0001123c[];
extern const char DAT_00011259[];
extern const char DAT_00011276[];

/* LifecycleClass static member */
extern int LifecycleClass_instance_count;

/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL::sub_I_5_1_cpp(void)

{
 operator_new_placement(sizeof(std::ios_base::Init),(std::ios_base::Init*)&std::__ioinit);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 code virtual_func;
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 virtual_func = (code)*(obj->_vptr_Base);
 iVar1 = (int)virtual_func(obj);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 return 0x2a;
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = 0x2a;

}



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = (undefined4)(uintptr_t)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *piVar2 = (int)(intptr_t)&PTR__RTTIBase_00021eec;
 iVar3 = 0;
 /* Unresolved: dynamic_cast failed */
 /* iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0); */
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0;
 /* Unresolved: dynamic_cast failed */
 /* iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0); */
 operator_delete(puVar1);
 /* Call destructor via virtual function table */
 {
   void** vtable = (void**)(piVar2);
   void* func_ptr = *(vtable + 1);
   void (*vptr)(void*) = (void (*)(void*))func_ptr;
   if (vptr) vptr(piVar2);
 }
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

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
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
 
 puts((const char*)&DAT_00011294);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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
 printf((const char*)&DAT_0001113d,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf((const char*)&DAT_0001115b,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf((const char*)&DAT_00011177,0x2a);
 printf((const char*)&DAT_00011193,0x47);
 printf((const char*)&DAT_000111af,0x28a);
 printf((const char*)&DAT_000111cc,0x16);
 printf((const char*)&DAT_000111e8,0x27);
 printf((const char*)&DAT_00011204,0x10);
 printf((const char*)&DAT_00011220,0x55);
 iVar2 = test_cpp_exception();
 printf((const char*)&DAT_0001123c,iVar2);
 printf((const char*)&DAT_00011259,0x2bf);
 iVar2 = test_cpp_rtti();
 printf((const char*)&DAT_00011276,iVar2);
 return;
}



/* Function: main @ 00010ef4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010f08 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay (deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (b > a) {
 a = b;
 }
 return a;
}

/* Stub implementation for ARM EABI floating-point comparison */
int __aeabi_dcmpgt(int a_hi, int a_lo, int b_hi, int b_lo) {
    union {
        double d;
        struct {
            uint32_t lo;
            uint32_t hi;
        } parts;
    } a, b;
    a.parts.hi = (uint32_t)a_hi;
    a.parts.lo = (uint32_t)a_lo;
    b.parts.hi = (uint32_t)b_hi;
    b.parts.lo = (uint32_t)b_lo;
    return b.d > a.d ? 1 : 0;
}



/* Function: template_swap<int> @ 00010f48 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00010f5c */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *obj)
{
 obj->size = 0;
 return;
}



/* Function: push @ 00010f68 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *obj,int value)

{
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->size = iVar1 + 1;
 obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00010f80 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *obj,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < obj->size) {
 iVar1 = obj->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00010fa0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *obj)
{
 return obj->size;
}



/* Function: Container @ 00010fa8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *obj)

{
 obj->size = 0;
 return;
}



/* Function: push @ 00010fb4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *obj,double value)

{
 int iVar1;
 unsigned long long *ptr;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 ptr = (unsigned long long*)(obj->data + iVar1);
 *ptr = *(unsigned long long*)&value;
 obj->size = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00010fd8 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *obj,int idx)

{
 double in_d0 = 0.0;
 
 if (idx < 0) {
 return 0.0;
 }
 if (idx < obj->size) {
 unsigned long long *ptr = (unsigned long long*)(obj->data + idx);
 in_d0 = *(double*)ptr;
 }
 return in_d0;
}



/* Function: getSize @ 00011004 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *obj)

{
 return obj->size;
}



/* Function: ~RTTIDerivedA @ 0001100c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *obj)

{
 operator_delete(obj);
 return;
}



/* Function: getType @ 00011010 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *obj)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011018 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *obj)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001101c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *obj)

{
 operator_delete(obj);
 return;
}



/* Function: getType @ 00011020 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *obj)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
