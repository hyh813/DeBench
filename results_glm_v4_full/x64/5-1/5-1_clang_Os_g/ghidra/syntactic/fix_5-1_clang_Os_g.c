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
typedef long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <inttypes.h>
#include <stdlib.h>

/* Type definitions */

typedef unsigned int uint;
typedef unsigned long ulong;

/* C++ runtime declarations */
extern void* __dso_handle;
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, const void* type_info, void (*destructor)(void));
void* __dynamic_cast(const void* obj, const void* from_type, const void* to_type, ptrdiff_t offset);

/* Standard library operator new/delete - forward declarations */
void* operator_new__(size_t size);
void operator_delete__(void* ptr);
void* cpp_new(size_t size);
void cpp_delete(void* ptr);

/* String functions */
#define builtin_strncpy strncpy

/* C++ class stubs */
struct ios_base {
    struct Init {
        void (*ctor)(void);
        void (*dtor)(void);
    };
};
struct std___ios_base_Init {
    void (*ctor)(void);
    void (*dtor)(void);
};

/* RTTI type_info stub */
struct type_info {};

/* int typeinfo for exceptions */
struct type_info int_typeinfo;

/* Exception type stubs - incomplete for decompiled code */
struct BaseException {
    struct type_info* type_info;
};

struct DerivedException {
    struct type_info* type_info;
};

/* Forward declarations for classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct VirtualBase;
struct Point;
struct SimpleClass;
struct LifecycleClass;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Global vtable pointers */
void* PTR__RTTIBase_00103d78 = 0;
void* PTR__RTTIBase_00103da0 = 0;

/* Data string references */
char DAT_001021d4[] = "Testing C++ Object-Oriented Features:\n";
char DAT_0010207d[] = "  test_cpp_member_func: %d\n";
char DAT_0010209b[] = "  test_cpp_constructor: %d\n";
char DAT_001020b7[] = "  test_cpp_virtual_func: %d\n";
char DAT_001020d3[] = "  test_cpp_multiple_inheritance: %d\n";
char DAT_001020ef[] = "  test_cpp_diamond_inheritance: %d\n";
char DAT_0010210c[] = "  test_cpp_operator_overload: %d\n";
char DAT_00102128[] = "  test_cpp_template_func: %d\n";
char DAT_00102144[] = "  test_cpp_template_class: %d\n";
char DAT_00102160[] = "  test_cpp_lambda: %d\n";
char DAT_0010217c[] = "  test_cpp_exception: %d\n";
char DAT_00102199[] = "  test_cpp_smart_ptr: %d\n";
char DAT_001021b6[] = "  test_cpp_rtti: %d\n";

/* std::ios_base::Init implementation */
static void std___ios_base_Init_ctor(void) {
}

static void std___ios_base_Init_dtor(void) {
}

/* Global std::__ioinit object */
struct std___ios_base_Init std___ioinit = {
    .ctor = std___ios_base_Init_ctor,
    .dtor = std___ios_base_Init_dtor
};

/* Class definitions for typeinfo access */
struct type_info RTTIBase_typeinfo;
struct type_info RTTIDerivedA_typeinfo;
struct type_info RTTIDerivedB_typeinfo;

/* Container template stubs - C does not support templates */

/* Container type aliases */
typedef struct Container_int_ {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double_ {
    int size;
    double data[10];
} Container_double;

/* LifecycleClass - C does not support static members in structs */
struct LifecycleClass {
    int dummy;
};

int LifecycleClass_instance_count = 0;

/* Base class with vtable */
struct Base {
    void** _vptr_Base;
};

/* Additional class definitions with vtable */
struct Derived {
    void** _vptr_Base;
};

struct MultiDerived {
    void** _vptr_Base;
};

struct DiamondDerived {
    void** _vptr_Base;
};

struct VirtualBase {
    void** _vptr_Base;
};

struct Point {
    void** _vptr_Base;
};

struct SimpleClass {
    void** _vptr_Base;
};

/* RTTI class definitions */
struct RTTIBase {
    void** _vptr_RTTIBase;
};

struct RTTIDerivedA {
    void** _vptr_RTTIBase;
};

struct RTTIDerivedB {
    void** _vptr_RTTIBase;
};

/* Template function declarations */
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int* a, int* b);

/* Container template instantiations - forward declarations */
extern void Container_int_Constructor(Container_int*);
extern void Container_int_push(Container_int*, int);
extern int Container_int_get(Container_int*, int);
extern int Container_int_getSize(Container_int*);
extern void Container_double_Constructor(Container_double*);
extern void Container_double_push(Container_double*, double);
extern double Container_double_get(Container_double*, int);
extern int Container_double_getSize(Container_double*);

/* RTTI class method instantiations - forward declarations */
extern void RTTIDerivedA_destructor(RTTIDerivedA*);
extern int RTTIDerivedA_getType(RTTIDerivedA*);
extern void RTTIBase_destructor(RTTIBase*);
extern void RTTIDerivedB_destructor(RTTIDerivedB*);
extern int RTTIDerivedB_getType(RTTIDerivedB*);


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((void (*)(void))0)();
 return;
}








/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0010125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 builtin_strncpy(local_24,"Test",5);
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

int test_cpp_constructor(void)

{
 uint32_t *puVar1;
 long lVar2;
 uint32_t *puVar3;
 int iVar4;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 puVar1 = operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 /* Unresolved local var: size_t i@[???] */
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 001012e5 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001012eb. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012ed */

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



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

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



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

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



/* Function: test_cpp_lambda @ 00101311 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00101317 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 uint32_t *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (uint32_t *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 uint64_t *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar1 = cpp_new(8);
 *puVar1 = &PTR__RTTIBase_00103d78;
 plVar2 = cpp_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar3 = (long)__dynamic_cast((void*)plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
cpp_delete(puVar1);
cpp_delete(plVar2);
return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 0010147f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 char local_24 [36];
 
 puts(&DAT_001021d4);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 builtin_strncpy(local_24,"Test",5);
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
 printf(&DAT_0010207d,(uint)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(&DAT_0010209b,(uint)uVar1);
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(uint)uVar1);
 printf(&DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(&DAT_001021b6,(uint)uVar1);
 return;
}



/* Function: main @ 001015a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 001015b2 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 001015ba */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 001015bf */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Constructor @ 001015c8 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 001015d0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get @ 001015e4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 001015f6 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_Constructor @ 001015fa */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 00101602 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_double_get @ 00101618 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 0010162c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_destructor @ 00101630 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
    return;
}



/* Function: RTTIDerivedA_getType @ 00101636 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 0010163c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 0010163e */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
    return;
}



/* Function: RTTIDerivedB_getType @ 00101644 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* C++ runtime stub implementations */

void* __dso_handle = (void*)0;

int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle) {
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void* exception, const void* type_info, void (*destructor)(void)) {
    (void)type_info;
    (void)destructor;
    free(exception);
}

void* __dynamic_cast(const void* obj, const void* from_type, const void* to_type, ptrdiff_t offset) {
    (void)from_type;
    (void)to_type;
    (void)offset;
    return (void*)obj;
}

/* Operator new/delete stub implementations */
void* operator_new__(size_t size) {
    return malloc(size);
}

void operator_delete__(void* ptr) {
    free(ptr);
}

void* cpp_new(size_t size) {
    return malloc(size);
}

void cpp_delete(void* ptr) {
    free(ptr);
}

/* Total functions decompiled: 43 */
