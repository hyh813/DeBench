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

/* undefined4 and undefined8 replaced with concrete types */
typedef void (*code)(void);
typedef unsigned long ulong;

/* Standard library includes */
#include <stddef.h>
#include <string.h>

/* Standard library function declarations */
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern size_t strlen(const char *s);
extern char *builtin_strncpy(char *dest, const char *src, size_t n);
extern void *__cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(void *src, void *from, void *to, int offset);
extern void *malloc(size_t size);
extern void free(void *ptr);

/* Class stub declarations */
struct std_ios_base_Init {
    void (*Init)(struct std_ios_base_Init *p);
    void (*Destroy)(struct std_ios_base_Init *p);
};

struct Base_vtable {
    int (*virtual_func)(struct Base *this, int x);
};

struct Base {
    struct Base_vtable **_vptr_Base;
};

struct Derived_vtable {
    int (*virtual_func)(struct Base *this, int x);
};

struct Derived {
    struct Derived_vtable **_vptr_Base;
};

struct BaseA_vtable {
    int (*func)(struct BaseA *this);
};

struct BaseA {
    struct BaseA_vtable **_vptr_BaseA;
};

struct BaseB_vtable {
    int (*func)(struct BaseB *this);
};

struct BaseB {
    struct BaseB_vtable **_vptr_BaseB;
};

struct MultiDerived {
    struct BaseA_vtable **_vptr_BaseA;
    struct BaseB_vtable **_vptr_BaseB;
};

struct VirtualBase_vtable {
    int (*func)(struct VirtualBase *this);
};

struct VirtualBase {
    struct VirtualBase_vtable **_vptr_VirtualBase;
};

struct DiamondDerived {
    struct VirtualBase_vtable **_vptr_VirtualBase;
};

struct Point {
    int x;
    int y;
};

struct SimpleClass {
    char str[20];
    int len;
};

struct BaseException {
    void *vtable;
};

struct DerivedException {
    void *vtable;
};

struct RTTIBase_vtable {
    void (*destructor)(struct RTTIBase *this);
    int (*getType)(struct RTTIBase *this);
};

struct RTTIBase {
    struct RTTIBase_vtable **_vptr_RTTIBase;
};

struct RTTIDerivedA_vtable {
    void (*destructor)(struct RTTIDerivedA *this);
    int (*getType)(struct RTTIDerivedA *this);
};

struct RTTIDerivedA {
    struct RTTIDerivedA_vtable **_vptr_RTTIBase;
};

struct RTTIDerivedB_vtable {
    void (*destructor)(struct RTTIDerivedB *this);
    int (*getType)(struct RTTIDerivedB *this);
};

struct RTTIDerivedB {
    struct RTTIDerivedB_vtable **_vptr_RTTIBase;
};

struct LifecycleClass {
    int instance_count;
};

/* operator new/delete implementations */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* C++ runtime stubs */
void std__ioinit_Init(struct std_ios_base_Init *p) {
    /* Dummy iostream init */
}

void std__ioinit_Destroy(struct std_ios_base_Init *p) {
    /* Dummy iostream cleanup */
}

struct std_ios_base_Init std__ioinit = {
    .Init = std__ioinit_Init,
    .Destroy = std__ioinit_Destroy
};

void *__dso_handle = &__dso_handle;






/* Global variable stubs */
void *PTR__RTTIBase_00103d78 = (void *)0x103d78;
void *PTR__RTTIBase_00103da0 = (void *)0x103da0;
int LifecycleClass_instance_count = 0;
void *int_typeinfo_typeinfo = (void *)0x104000;
void *RTTIBase_typeinfo = (void *)0x104020;
void *RTTIDerivedA_typeinfo = (void *)0x104040;
void *RTTIDerivedB_typeinfo = (void *)0x104060;
const char *DAT_001021d4 = "Testing C++ Member Functions";
const char *DAT_0010207d = "test_cpp_member_func: %lu\n";
const char *DAT_0010209b = "test_cpp_constructor: %lu\n";
const char *DAT_001020b7 = "test_cpp_virtual_func: %lu\n";
const char *DAT_001020d3 = "test_cpp_multiple_inheritance: %lu\n";
const char *DAT_001020ef = "test_cpp_diamond_inheritance: %lu\n";
const char *DAT_0010210c = "test_cpp_operator_overload: %lu\n";
const char *DAT_00102128 = "test_cpp_template_func: %lu\n";
const char *DAT_00102144 = "test_cpp_template_class: %lu\n";
const char *DAT_00102160 = "test_cpp_lambda: %lu\n";
const char *DAT_0010217c = "test_cpp_exception: %lu\n";
const char *DAT_00102199 = "test_cpp_smart_ptr: %lu\n";
const char *DAT_001021b6 = "test_cpp_rtti: %lu\n";

/* Container template instantiations */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std__ioinit.Init(&std__ioinit);
 __cxa_atexit((void (*)(void *))std__ioinit.Destroy,&std__ioinit,__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

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



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 if (obj->_vptr_Base && *obj->_vptr_Base && (*obj->_vptr_Base)->virtual_func) {
   iVar1 = (*obj->_vptr_Base)->virtual_func(obj, x);
 } else {
   iVar1 = 0;
 }
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

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



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

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



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

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



/* Function: test_cpp_lambda @ 00101310 */

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



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_exception(void)

{
 unsigned int *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e[]@[???]
 Unresolved local var: BaseException * e[]@[???]
 Unresolved local var: DerivedException * e[]@[???] */
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00101335 to 00101348 has its CatchHandler @ 0010134b */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

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



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 unsigned long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar1 = operator_new(8);
 *puVar1 = &PTR__RTTIBase_00103d78;
 plVar2 = operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103d78;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar3 = __dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 unsigned int uVar1;
 size_t sVar2;
 unsigned long *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(DAT_001021d4);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 builtin_strncpy(local_4c,"Test",5);
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
 printf(DAT_0010207d,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_0010209b,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(ulong)uVar1);
 printf(DAT_00102199,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar3 = operator_new(8);
 *puVar3 = &PTR__RTTIBase_00103d78;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00103d78;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator_delete(puVar3);
 operator_delete(plVar4);
 printf(DAT_001021b6,(ulong)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 001016a0 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001016b0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001016c0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001016d0 */

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



/* Function: get @ 001016f0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data[(unsigned int)idx];
 }
 return iVar1;
}



/* Function: getSize @ 00101710 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00101720 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101730 */

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



/* Function: get @ 00101750 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(unsigned int)idx];
 }
 return dVar1;
}



/* Function: getSize @ 00101770 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101790 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 001017c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
