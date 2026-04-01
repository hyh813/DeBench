/* Auto-injected type definitions by preprocessor */
#ifndef __SIZE_TYPE__
typedef unsigned long size_t;
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char undefined1;
typedef unsigned char uchar;

/* Standard C library includes */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>

/* C++ runtime headers */
#if defined(__cplusplus) || defined(__CPLUSPLUS)
#include <new>
#endif

/* Ensure C linkage for C++ runtime functions */
#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions - must be defined before any code uses them */
struct Base {
    void **_vptr_Base;
};

struct Init {
    int dummy;
};

struct std___ioinit {
    int dummy;
};

struct LifecycleClass {
    void **_vptr_LifecycleClass;
    int dummy1[3];
};

struct Derived {
    void **_vptr_Derived;
};

struct SimpleClass {
    void **_vptr_SimpleClass;
};

struct MultiDerived {
    void **_vptr_MultiDerived;
};

struct BaseA {
    void **_vptr_BaseA;
};

struct BaseB {
    void **_vptr_BaseB;
};

struct DiamondDerived {
    void **_vptr_DiamondDerived;
};

struct VirtualBase {
    void **_vptr_VirtualBase;
};

struct Point {
    void **_vptr_Point;
};

struct BaseException {
    void **_vptr_BaseException;
    int code;
};

struct DerivedException {
    void **_vptr_DerivedException;
    int code;
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
    void **_vptr_RTTIBase;
};

struct RTTIDerivedA {
    void **_vptr_RTTIDerivedA;
};

struct RTTIDerivedB {
    void **_vptr_RTTIDerivedB;
};

/* type_info struct definition */
struct type_info {
    void *_vptr_type_info;
    const char *name;
};

/* Simplified type_info for inline use */
struct type_info_inline {
    void *_vptr_type_info;
};

/* Global variable declarations */
extern struct std___ioinit std___ioinit;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;

/* Global variable definitions */
struct std___ioinit std___ioinit;
void *__dso_handle = NULL;
int LifecycleClass_instance_count = 0;

/* Data symbol declarations */
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
extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;

/* Data symbol definitions */
char DAT_000121fc[32];
char DAT_000121d8[32];
char DAT_00012081[32];
char DAT_0001209f[32];
char DAT_000120bb[32];
char DAT_000120d7[32];
char DAT_000120f3[32];
char DAT_00012110[32];
char DAT_0001212c[32];
char DAT_00012148[32];
char DAT_00012164[32];
char DAT_00012180[32];
char DAT_0001219d[32];
char DAT_000121ba[32];
void *PTR__RTTIBase_00013ecc;
void *PTR__RTTIBase_00013ee0;

/* Inline type_info objects to match allocation pattern */
struct type_info_inline typeinfo_RTTIBase_00013ecc = { NULL };
struct type_info_inline typeinfo_RTTIBase_00013ee0 = { NULL };

/* Typeinfo declarations */
extern struct type_info int_typeinfo;
extern struct type_info RTTIBase_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;

/* Typeinfo definitions */
struct type_info int_typeinfo = { NULL, "int" };
struct type_info RTTIBase_typeinfo = { NULL, "RTTIBase" };
struct type_info RTTIDerivedA_typeinfo = { NULL, "RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo = { NULL, "RTTIDerivedB" };

/* C++ runtime function declarations */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, void *tinfo, void *dest);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dynamic_cast(void *obj, void *from, void *to, int offset);

/* C++ runtime function stub implementations */
void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void *obj, void *tinfo, void *dest) {
    /* Stub - in real implementation this would unwind and not return */
    fprintf(stderr, "Exception thrown\n");
    exit(1);
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* Stub - ignore exit handler registration */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

void *__dynamic_cast(void *obj, void *from, void *to, int offset) {
    /* Stub - simplified dynamic_cast implementation */
    (void)from;
    (void)to;
    (void)offset;
    return obj;
}

/* Operator new/delete declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr);

/* std::ios_base::Init declarations */
void std_ios_base_Init_Init(struct std___ioinit *init);
void std_ios_base_Init__Init(struct std___ioinit *init);

/* Operator new/delete implementations */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* std::ios_base::Init implementations */
void std_ios_base_Init_Init(struct std___ioinit *init) {
    /* Stub implementation */
}

void std_ios_base_Init__Init(struct std___ioinit *init) {
    /* Stub implementation */
}

/* Wrapper function for atexit compatibility */
static void std_ios_base_wrapper(void *arg) {
    std_ios_base_Init__Init((struct std___ioinit *)arg);
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub function - null function call removed */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get.pc_thunk.bx @ 000111dc - Removed inline assembly stub */



/* Function: __x86.get_pc_thunk.bx @ 000111e0 - Removed inline assembly stub */




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011319 - Removed inline assembly stub */



/* Function: __x86.get_pc_thunk.di @ 0001131d - Removed inline assembly stub */



/* Function: test_cpp_member_func @ 00011324 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [31];
 unsigned char local_9;
 
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
 
 iVar3 = 0;
 piVar1 = operator_new(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count - 1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 000113cf */

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 typedef int (*vfunc_t)(struct Base *, int);
 vfunc_t vfunc = (vfunc_t)(obj->_vptr_Base[0]);
 iVar1 = vfunc(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011406 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 0001141e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 unsigned int *puVar1;
 
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00011502 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 void *puVar1;
 void *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = operator_new(4);
 *(void **)puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = operator_new(4);
 *(void **)piVar2 = &PTR__RTTIBase_00013ee0;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
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
 unsigned char local_9;
 
 puts(&DAT_000121d8);
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



/* Function: swap @ 00011765 */

void swap(int *a, int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011770 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(struct Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 0001177c */

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



/* Function: get @ 00011798 */

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



/* Function: getSize @ 000117b0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(struct Container_int *this)

{
 return this->size;
}



/* Function: Container @ 000117b8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(struct Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000117c4 */

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



/* Function: get @ 000117e2 */

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



/* Function: getSize @ 000117fc */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(struct Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00011804 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(struct RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011826 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(struct RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 0001182a */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(struct RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001182c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(struct RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 0001184e */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(struct RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
