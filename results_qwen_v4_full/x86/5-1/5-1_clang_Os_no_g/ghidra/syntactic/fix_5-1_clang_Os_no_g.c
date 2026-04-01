/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>

/* Ghidra-specific type definitions */
typedef char undefined;
typedef unsigned int undefined4;
typedef void (*ghidra_code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Forward declarations for C++ runtime and classes */
typedef struct Init Init;
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Struct definitions */
struct Init {
    char data[64];
};

struct Base {
    void **vtable;
};

struct LifecycleClass {
    char data[64];
};

struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
    char data[64];
};

struct RTTIDerivedB {
    void **vtable;
    char data[64];
};

struct Container_int {
    char data[128];
};

struct Container_double {
    char data[256];
};

/* External variables */
extern Init std___ioinit;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *int_typeinfo;
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

/* Definitions for external variables */
Init std___ioinit = {0};
void *__dso_handle = 0;
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00013ecc = 0;
void *PTR__RTTIBase_00013ee0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *int_typeinfo = 0;
char DAT_000121fc[] = "test_cpp_member_func";
char DAT_000121d8[] = "Testing C++ OO features";
char DAT_00012081[] = "Member func result: %d\n";
char DAT_0001209f[] = "Constructor result: %d\n";
char DAT_000120bb[] = "Virtual func result: %d\n";
char DAT_000120d7[] = "Multiple inheritance: %d\n";
char DAT_000120f3[] = "Diamond inheritance: %d\n";
char DAT_00012110[] = "Operator overload: %d\n";
char DAT_0001212c[] = "Template func: %d\n";
char DAT_00012148[] = "Template class: %d\n";
char DAT_00012164[] = "Lambda: %d\n";
char DAT_00012180[] = "Exception: %d\n";
char DAT_0001219d[] = "Smart ptr: %d\n";
char DAT_000121ba[] = "RTTI: %d\n";

/* C++ runtime function declarations */
void *__cxa_allocate_exception(size_t size);
__attribute__((noreturn)) void __cxa_throw(void *exc, void *typeinfo, void *dest);
int __cxa_atexit(void (*func)(void*), void *arg, void *dso);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags);

/* Operator new/delete declarations */
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr);
void operator_delete__(void *ptr);

/* Class method declarations */
void std__ios_base__Init__Init(Init *this);
void std__ios_base__Init___Init(Init *this);

/* Stub implementations for C++ iostream init */
void std__ios_base__Init__Init(Init *this) {
    /* Stub - initialize iostream */
}

void std__ios_base__Init___Init(Init *this) {
    /* Stub - cleanup iostream */
}

/* Stub implementations for C++ runtime functions */
void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

__attribute__((noreturn)) void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    free(exc);
    exit(1);
}

int __cxa_atexit(void (*func)(void*), void *arg, void *dso) {
    return 0;
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags) {
    return src;
}

/* Operator new/delete stub implementations */
void *operator_new(size_t size) {
    return malloc(size);
}

void *operator_new__(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

void operator_delete__(void *ptr) {
    free(ptr);
}

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Null function pointer call removed - was calling address 0x0 */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std__ios_base__Init__Init((Init *)&std___ioinit);
 __cxa_atexit(std__ios_base__Init___Init,&std___ioinit,&__dso_handle);
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

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [31];
 undefined1 local_9;
 
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
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
 piVar1 = operator_new__(0x14);
 piVar2 = piVar1;
 do {
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

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 ((void (*)(Base*, int))**(void ***)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000113f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011406 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 0001141e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

__attribute__((noreturn)) void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011502 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = operator_new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00013ecc;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 iVar3 = (int)(intptr_t)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = (int)(intptr_t)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
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
 /* test_cpp_exception() - skipped as it never returns */
 /* printf(&DAT_00012180,0x2a); - unreachable */
 /* printf(&DAT_0001219d,0x2bf); - unreachable */
 uVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,uVar2);
 return;
}



/* Function: main @ 00011722 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 0001173e */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 0001174c */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 0001175d */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_Constructor @ 00011770 */

/* Container_int::Container_int() */

void Container_int_Constructor(Container_int *this)

{
 *(undefined4 *)((char *)this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 0001177c */

/* Container_int::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: Container_int_get @ 00011798 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x28))) {
 uVar1 = *(undefined4 *)((char *)this + param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 000117b0 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)((char *)this + 0x28);
}



/* Function: Container_double_Constructor @ 000117b8 */

/* Container_double::Container_double() */

void Container_double_Constructor(Container_double *this)

{
 *(undefined4 *)((char *)this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 000117c4 */

/* Container_double::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: Container_double_get @ 000117e2 */

/* Container_double::get(int) const */

double Container_double_get(Container_double *this,int param_1)

{
 double lVar1;
 
 lVar1 = (double)0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x50))) {
 lVar1 = *(double *)((char *)this + param_1 * 8);
 }
 return lVar1;
}



/* Function: Container_double_getSize @ 000117fc */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)((char *)this + 0x50);
}



/* Function: RTTIDerivedA_destructor @ 00011804 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00011826 */

/* RTTIDerivedA::getType() const */

int RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 0001182a */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 0001182c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 0001184e */

/* RTTIDerivedB::getType() const */

int RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
