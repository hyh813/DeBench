/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>

/* External declarations for C++ runtime functions */
/* These are defined as stubs below */

/* Forward declarations for C++ classes */
typedef struct Init Init;

/* Define Init struct for std::ios_base::Init */
struct Init {
    int _vptr_Init;
};

/* External declarations for global variables */
extern Init std___ioinit;
extern void* __dso_handle;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct LifecycleClass LifecycleClass;
typedef struct SimpleClass SimpleClass;
typedef struct MultiDerived MultiDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* External global variables */

/* Define Init struct for std::ios_base::Init */
struct Init {
    int _vptr_Init;
};

/* Define Base struct with vptr */
struct Base {
    int *_vptr_Base;
    int value;
};

/* Define Derived struct */
struct Derived {
    int *_vptr_Base;
    int value;
    int derived_value;
};

/* Define LifecycleClass struct */
struct LifecycleClass {
    int _vptr_LifecycleClass;
    int data[3];
};
extern int LifecycleClass_instance_count;

/* Define SimpleClass struct */
struct SimpleClass {
    int _vptr_SimpleClass;
    int value;
};

/* Define MultiDerived struct */
struct MultiDerived {
    int *_vptr_BaseA;
    int *_vptr_BaseB;
    int value;
};

/* Define BaseA struct */
struct BaseA {
    int *_vptr_BaseA;
    int value_a;
};

/* Define BaseB struct */
struct BaseB {
    int *_vptr_BaseB;
    int value_b;
};

/* Define VirtualBase struct */
struct VirtualBase {
    int *_vptr_VirtualBase;
    int value;
};

/* Define DiamondDerived struct */
struct DiamondDerived {
    int *_vptr_VirtualBase;
    int *_vptr_BaseA;
    int *_vptr_BaseB;
    int value;
};

/* Define Point struct */
struct Point {
    int x;
    int y;
};

/* Define Container_int struct */
struct Container_int {
    int size;
    int data[10];
};

/* Define Container_double struct */
struct Container_double {
    int size;
    double data[10];
};

/* Define RTTIBase struct */
struct RTTIBase {
    void *typeinfo;
    int value;
};

/* Define RTTIDerivedA struct */
struct RTTIDerivedA {
    void *typeinfo;
    int value;
};

/* Define RTTIDerivedB struct */
struct RTTIDerivedB {
    void *typeinfo;
    int value;
};

/* Define exception types for test_cpp_exception */
typedef struct BaseException BaseException;
typedef struct DerivedException DerivedException;

struct BaseException {
    int value;
};

struct DerivedException {
    int value;
};



/* External data declarations */
extern char DAT_000121fc[];
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

/* CRT stub function _init removed by preprocessor */

/* Define missing types from Ghidra decompilation */
/* typedefs removed to avoid conflicts with system headers */

/* Define missing global variables */
Init std___ioinit = {0};
int LifecycleClass_instance_count = 0;

void* _ZTIi = NULL; /* typeinfo for int - stub definition */
void *PTR__RTTIBase_00013ecc = NULL;
void *PTR__RTTIBase_00013ee0 = NULL;
void *RTTIBase_typeinfo = NULL;
void *RTTIDerivedA_typeinfo = NULL;
void *RTTIDerivedB_typeinfo = NULL;
void *int_typeinfo = NULL; /* alias for _ZTIi */

/* Function prototypes */
void FUN_00011030(void);
void _GLOBAL__sub_I_5_1_cpp(void);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int call_virtual_func(Base *obj, int x);
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
int main(void);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_constructor(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(Container_int *this, int idx);
int Container_int_getSize(Container_int *this);
void Container_double_constructor(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(Container_double *this, int idx);
int Container_double_getSize(Container_double *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
int RTTIDerivedA_getType(RTTIDerivedA *this);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
int RTTIDerivedB_getType(RTTIDerivedB *this);

/* Define data arrays */
char DAT_000121fc[] = "test_cpp_member_func";
char DAT_000121d8[] = "Testing C++ OO features";
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

/* Stub implementations for C++ runtime functions */
void* operator_new(size_t size) { return malloc(size); }
void* operator_new__(size_t size) { return malloc(size); }
void operator_delete(void* ptr) { free(ptr); }
void operator_delete__(void* ptr) { free(ptr); }
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) { return 0; }
void* __cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void* exc, void* type_info, void* dest) { exit(1); }
void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags) { return NULL; }
void* __dso_handle = NULL;

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* std::ios_base::Init::Init((Init *)&std::__ioinit); */
 /* __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle); */
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

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [31];
 undefined1 local_9;
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00011370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 iVar3 = 0;
 piVar1 = operator_new__(0x14);
 piVar2 = piVar1;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete__(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 000113cf */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 typedef int (*vfunc_t)(Base*, int);
 iVar1 = ((vfunc_t)(*obj->_vptr_Base))(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113f4 */

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



/* Function: test_cpp_multiple_inheritance @ 000113fa */

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



/* Function: test_cpp_diamond_inheritance @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011406 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011412 */

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



/* Function: test_cpp_lambda @ 00011418 */

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



/* Function: test_cpp_exception @ 0001141e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,_ZTIi,NULL);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00011502 */

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



/* Function: test_cpp_rtti @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 void **puVar1;
 void **piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (void **)operator_new(4);
 *puVar1 = PTR__RTTIBase_00013ecc;
 piVar2 = (void **)operator_new(4);
 *piVar2 = PTR__RTTIBase_00013ee0;
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



/* Function: test_cpp_oo_features @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 char local_28 [31];
 undefined1 local_9;
 
 puts(&DAT_000121d8);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 printf(&DAT_00012081,sVar1 + 0x125c);
 iVar2 = test_cpp_constructor();
 printf(&DAT_0001209f,iVar2);
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
 iVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,iVar2);
 return;
}



/* Function: main @ 00011722 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 0001173e */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 0001174c */

double template_max_double(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap_int @ 0001175d */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_constructor @ 00011770 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 0001177c */

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



/* Function: Container_int_get @ 00011798 */

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



/* Function: Container_int_getSize @ 000117b0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_constructor @ 000117b8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 000117c4 */

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



/* Function: Container_double_get @ 000117e2 */

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



/* Function: Container_double_getSize @ 000117fc */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_destructor @ 00011804 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00011826 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 0001182a */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 0001182c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 0001184e */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
