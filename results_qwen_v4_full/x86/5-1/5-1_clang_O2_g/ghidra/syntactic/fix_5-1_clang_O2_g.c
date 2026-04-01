/* Auto-injected type definitions by preprocessor */
/* Standard types removed - defined in <stdint.h> */
typedef unsigned int undefined;
typedef unsigned int undefined4;
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

/* Forward declarations for C++ runtime */
/* builtin_strncpy removed - using standard strncpy */

/* Forward declarations for classes */
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct VirtualBase;
struct DiamondDerived;
struct Point;
struct SimpleClass;
struct LifecycleClass;

/* Forward declarations for functions - moved after struct definitions */
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
__attribute__((noreturn)) void test_cpp_exception(void);
int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
int call_virtual_func(struct Base *obj, int x);

/* Define forward-declared structs */
struct Base {
    void *_vptr_Base;
};

struct Derived {
    void *_vptr_Base;
};

struct BaseA {
    void *_vptr_BaseA;
};

struct BaseB {
    void *_vptr_BaseB;
};

struct MultiDerived {
    void *_vptr_BaseA;
    void *_vptr_BaseB;
};

struct VirtualBase {
    void *_vptr_VirtualBase;
};

struct DiamondDerived {
    void *_vptr_VirtualBase;
};

struct Point {
    int x;
    int y;
};

struct SimpleClass {
    char data[32];
};

struct LifecycleClass {
    int id;
};

struct BaseException {
    int code;
};

struct DerivedException {
    int code;
};

/* Lambda stub types */
struct anon_class_8_2_336b0e7f {
    int dummy;
};

struct anon_class_1_0_00000001 {
    int dummy;
};

/* unique_ptr proper definitions */
struct unique_ptr_int {
    int* ptr;
};

struct unique_ptr_int_array {
    int* ptr;
};

struct deleter_type {
    int dummy;
};

/* RTTI class definitions */
struct RTTIBase {
    void *_vptr;
};

struct RTTIDerivedA {
    void *_vptr;
};

struct RTTIDerivedB {
    void *_vptr;
};

/* Container struct definitions */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* Global variables */
extern int LifecycleClass_instance_count;
extern void* PTR__RTTIBase_00013ecc;
extern void* PTR__RTTIBase_00013ee0;
extern void* RTTIBase_typeinfo;
extern void* RTTIDerivedA_typeinfo;
extern void* RTTIDerivedB_typeinfo;
extern void* int_typeinfo;
extern void* __dso_handle;
extern void* std___ioinit;

/* Define global variables */
int LifecycleClass_instance_count = 0;
void* PTR__RTTIBase_00013ecc = 0;
void* PTR__RTTIBase_00013ee0 = 0;
void* RTTIBase_typeinfo = 0;
void* RTTIDerivedA_typeinfo = 0;
void* RTTIDerivedB_typeinfo = 0;
void* int_typeinfo = 0;
void* __dso_handle = 0;
void* std___ioinit = 0;

/* Data references */
extern char DAT_000121d8[];
extern char DAT_00012081[];
extern char DAT_0001209f[];
extern char DAT_000120bb[];
extern char DAT_000120d7[];
extern char DAT_000120f3[];
extern char DAT_00012110[];
extern char DAT_0001212c[];
extern char DAT_00012148[];
extern char DAT_00012164[];
extern char DAT_00012180[];
extern char DAT_0001219d[];
extern char DAT_000121ba[];

/* Define data references */
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

/* C++ namespace stubs - converted to C */
struct std_ios_base_Init {
    int dummy;
};

/* C++ runtime stubs */
static void* operator_new(size_t size) { return malloc(size); }
static void operator_delete(void* ptr) { free(ptr); }
static void* __cxa_allocate_exception(size_t size) { return malloc(size); }
static __attribute__((noreturn)) void __cxa_throw(void* exc, void* type, void* dest) { (void)exc; (void)type; (void)dest; _exit(1); }
static int __cxa_atexit(void(*func)(void*), void* arg, void* dso) { (void)func; (void)arg; (void)dso; return 0; }
static void* __dynamic_cast(void* src, void* src_type, void* dest_type, int flags) { (void)src; (void)src_type; (void)dest_type; (void)flags; return 0; }

/* Forward declarations for RTTI functions */
void RTTIDerivedA_destructor(struct RTTIDerivedA *this);
int RTTIDerivedA_getType(struct RTTIDerivedA *this);
void RTTIBase_destructor(struct RTTIBase *this);
void RTTIDerivedB_destructor(struct RTTIDerivedB *this);
int RTTIDerivedB_getType(struct RTTIDerivedB *this);

/* Forward declarations for other functions */
void FUN_00011030(void);
void _GLOBAL__sub_I_5_1_cpp(void);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);

/* Additional forward declarations */
void Base_destructor(struct Base *this);
void Derived_destructor(struct Derived *this);
void BaseA_destructor(struct BaseA *this);
void BaseB_destructor(struct BaseB *this);
void MultiDerived_destructor(struct MultiDerived *this);
void VirtualBase_destructor(struct VirtualBase *this);
void DiamondDerived_destructor(struct DiamondDerived *this);

/* Forward declarations for Container functions */
void Container_int_Constructor(struct Container_int *this);
void Container_int_push(struct Container_int *this, int value);
int Container_int_get(struct Container_int *this, int idx);
int Container_int_getSize(struct Container_int *this);
void Container_double_Constructor(struct Container_double *this);
void Container_double_push(struct Container_double *this, double value);
double Container_double_get(struct Container_double *this, int idx);
int Container_double_getSize(struct Container_double *this);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Null function pointer call removed - was causing crash */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* std::ios_base::Init stub - no-op in C */
 __cxa_atexit((void(*)(void*))0,&std___ioinit,&__dso_handle);
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



/* Base vtable structure */
struct Base_vtable {
    int (*func)(struct Base*, int);
};

/* Function: call_virtual_func @ 000113a0 */

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 struct Base_vtable *vtable;
 
 vtable = (struct Base_vtable *)obj->_vptr_Base;
 iVar1 = vtable->func(obj,x);
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

__attribute__((noreturn)) void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,int_typeinfo,0);
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
 struct RTTIDerivedA *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4*)operator_new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00013ecc;
 piVar2 = (struct RTTIDerivedA*)operator_new(4);
 *(undefined4*)piVar2 = (undefined4)&PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast((void*)piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 RTTIDerivedA_destructor(piVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 *puVar3;
 struct RTTIDerivedA *piVar4;
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
 test_cpp_exception();
 printf(&DAT_00012180,0);
 printf(&DAT_0001219d,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4*)operator_new(4);
 *puVar3 = (undefined4)&PTR__RTTIBase_00013ecc;
 piVar4 = (struct RTTIDerivedA*)operator_new(4);
 *(undefined4*)piVar4 = (undefined4)&PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar2 = __dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = __dynamic_cast((void*)piVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar2 = iVar6 + 200;
 if (iVar5 == 0) {
 iVar2 = iVar6;
 }
 operator_delete(puVar3);
 RTTIDerivedA_destructor(piVar4);
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



/* Function: Container @ 00011880 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(struct Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011890 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(struct Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 000118b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(struct Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 000118d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(struct Container_int *this)

{
 return this->size;
}



/* Function: Container @ 000118e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(struct Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000118f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(struct Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011910 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(struct Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00011930 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(struct Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00011940 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(struct RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011970 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(struct RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011980 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(struct RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00011990 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(struct RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000119c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(struct RTTIDerivedB *this)

{
 return 2;
}

/* Stub destructor implementations for forward-declared functions */
void Base_destructor(struct Base *this) { }
void Derived_destructor(struct Derived *this) { }
void BaseA_destructor(struct BaseA *this) { }
void BaseB_destructor(struct BaseB *this) { }
void MultiDerived_destructor(struct MultiDerived *this) { }
void VirtualBase_destructor(struct VirtualBase *this) { }
void DiamondDerived_destructor(struct DiamondDerived *this) { }




/* CRT stub function __do_global_ctors_aux removed by preprocessor */

/* Additional stub implementations */
void Base_vtable_init(struct Base *this, int (*func)(struct Base*, int)) {
    struct Base_vtable *vtable = (struct Base_vtable *)malloc(sizeof(struct Base_vtable));
    vtable->func = func;
    this->_vptr_Base = vtable;
}

/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
