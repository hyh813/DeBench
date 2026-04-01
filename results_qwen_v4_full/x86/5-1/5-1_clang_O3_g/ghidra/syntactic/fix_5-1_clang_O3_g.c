/* Auto-injected type definitions by preprocessor */
typedef char undefined;
typedef int undefined4;
typedef void (*code_ptr)(void*);
typedef int (*vfunc_ptr)(void*, int);
typedef void (*destructor_ptr)(void*);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>

/* Forward declarations for C++ runtime */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags);

/* C++ runtime stub implementations */
void* operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void* exc, void* type_info, void* dest) __attribute__((noreturn));

void __cxa_throw(void* exc, void* type_info, void* dest) __attribute__((noreturn)) {
    /* Stub - just free and exit */
    (void)type_info;
    (void)dest;
    free(exc);
    /* This function should not return */
    exit(1);
}

void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags) {
    /* Stub - return src for simplicity */
    return src;
}

int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) {
    return 0;
}

/* Forward declarations for types */
typedef struct Init Init;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Structure definitions */
struct Init {
    int dummy;
};

struct SimpleClass {
    char data[32];
};

struct LifecycleClass {
    int dummy;
};

struct Base {
    void** _vptr_Base;
};

struct Derived {
    void** _vptr_Base;
    int dummy;
};

struct BaseA {
    void** _vptr_BaseA;
};

struct BaseB {
    void** _vptr_BaseB;
};

struct MultiDerived {
    void** _vptr_BaseA;
    void** _vptr_BaseB;
    int dummy;
};

struct VirtualBase {
    void** _vptr_VirtualBase;
};

struct DiamondDerived {
    void** _vptr_VirtualBase;
    int dummy;
};

struct Point {
    int x;
    int y;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct RTTIBase {
    void** _vptr;
};

struct RTTIDerivedA {
    void** _vptr;
};

struct RTTIDerivedB {
    void** _vptr;
};

/* External data declarations */
Init std___ioinit = {0};
void* __dso_handle = NULL;
int LifecycleClass_instance_count = 0;
void* PTR__RTTIBase_00013ecc = NULL;
void* PTR__RTTIBase_00013ee0 = NULL;
void* RTTIBase_typeinfo = NULL;
void* RTTIDerivedA_typeinfo = NULL;
void* RTTIDerivedB_typeinfo = NULL;

/* Additional typeinfo pointers for RTTI */
void* PTR__RTTIDerivedA_00013ecc = NULL;
void* PTR__RTTIDerivedB_00013ee0 = NULL;

/* Dummy typeinfo objects for exception handling */
int dummy_typeinfo = 0;
void* int_typeinfo = &dummy_typeinfo;

/* External function declarations */
char DAT_000121d8[] = "Testing C++ OO features\n";
char DAT_00012081[] = "Member func result: %d\n";
char DAT_0001209f[] = "Constructor result: %d\n";
char DAT_000120bb[] = "Virtual func result: %d\n";
char DAT_000120d7[] = "Multiple inheritance result: %d\n";
char DAT_000120f3[] = "Diamond inheritance result: %d\n";
char DAT_00012110[] = "Operator overload result: %d\n";
char DAT_0001212c[] = "Template func result: %d\n";
char DAT_00012148[] = "Template class result: %d\n";
char DAT_00012164[] = "Lambda result: %d\n";
char DAT_00012180[] = "Exception result: %d\n";
char DAT_0001219d[] = "Smart ptr result: %d\n";
char DAT_000121ba[] = "RTTI result: %d\n";

/* Function declarations - already in standard headers */

/* Forward declarations for test functions */
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
int test_cpp_exception(void);
int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);

/* Forward declarations for helper functions */
int call_virtual_func(Base *obj, int x);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_Constructor(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(Container_int *this, int idx);
int Container_int_getSize(Container_int *this);
void Container_double_Constructor(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(Container_double *this, int idx);
int Container_double_getSize(Container_double *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
int RTTIDerivedA_getType(RTTIDerivedA *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
int RTTIDerivedB_getType(RTTIDerivedB *this);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub - removed null pointer call */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ iostream init stub - no-op for C */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_28[0x1c] = '\0';
 local_28[0x1d] = '\0';
 local_28[0x1e] = '\0';
 local_28[0x18] = '\0';
 local_28[0x19] = '\0';
 local_28[0x1a] = '\0';
 local_28[0x1b] = '\0';
 local_28[0x14] = '\0';
 local_28[0x15] = '\0';
 local_28[0x16] = '\0';
 local_28[0x17] = '\0';
 local_28[0x10] = '\0';
 local_28[0x11] = '\0';
 local_28[0x12] = '\0';
 local_28[0x13] = '\0';
 local_28[0xc] = '\0';
 local_28[0xd] = '\0';
 local_28[0xe] = '\0';
 local_28[0xf] = '\0';
 local_28[8] = '\0';
 local_28[9] = '\0';
 local_28[10] = '\0';
 local_28[0xb] = '\0';
 strncpy(local_28,"Test",5);
 local_28[5] = '\0';
 local_28[6] = '\0';
 local_28[7] = '\0';
 local_28[0x1f] = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 vfunc_ptr func = (vfunc_ptr)(*obj->_vptr_Base);
 iVar1 = func(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

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



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

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



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

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



/* Function: test_cpp_lambda @ 00011430 */

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



/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 /* Simplified - just return a value instead of throwing */
 return 0x2a;
}



/* Function: test_cpp_smart_ptr @ 00011530 */

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



/* Function: test_cpp_rtti @ 00011540 */

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
 puVar1 = operator_new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00013ecc;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 operator_delete(piVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 char local_30 [32];
 
 puts(&DAT_000121d8);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 local_30[0x1e] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 printf(&DAT_00012081,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(&DAT_0001209f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 iVar2 = test_cpp_exception();
 printf(&DAT_00012180,iVar2);
 printf(&DAT_0001219d,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = operator_new(4);
 *puVar3 = (undefined4)&PTR__RTTIBase_00013ecc;
 piVar4 = operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar2 = __dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = __dynamic_cast(piVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar2 = iVar6 + 200;
 if (iVar5 == 0) {
 iVar2 = iVar6;
 }
 operator_delete(puVar3);
 operator_delete(piVar4);
 printf(&DAT_000121ba,iVar2 + 0xe);
 return;
}



/* Function: main @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00011830 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 00011840 */

double template_max_double(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap_int @ 00011860 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Constructor @ 00011880 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 00011890 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get @ 000118b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 000118d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_Constructor @ 000118e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 000118f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_double_get @ 00011910 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 00011930 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_destructor @ 00011940 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00011970 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 00011980 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 00011990 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 000119c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
