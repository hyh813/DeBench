/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned long long undefined8;
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>

/* Declare _exit for C++ exception handling */
void _exit(int status);

/* Forward declarations for C++ runtime and types */
typedef struct Init Init;
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* std::ios_base::Init */
struct Init {
    int unused;
};

/* Global variables */
Init std___ioinit = {0};
void *__dso_handle = 0;
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00013ecc = 0;
void *PTR__RTTIBase_00013ee0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
int int_typeinfo = 0;
char DAT_000121d8[] = "Testing C++ OO features\n";
char DAT_00012081[] = "Member function result: %d\n";
char DAT_0001209f[] = "Constructor result: %d\n";
char DAT_000120bb[] = "Virtual function result: %d\n";
char DAT_000120d7[] = "Multiple inheritance result: %d\n";
char DAT_000120f3[] = "Diamond inheritance result: %d\n";
char DAT_00012110[] = "Operator overload result: %d\n";
char DAT_0001212c[] = "Template function result: %d\n";
char DAT_00012148[] = "Template class result: %d\n";
char DAT_00012164[] = "Lambda result: %d\n";
char DAT_00012180[] = "Exception caught: %d\n";
char DAT_0001219d[] = "Smart pointer result: %d\n";
char DAT_000121ba[] = "RTTI result: %d\n";

/* C++ runtime functions - stub implementations */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exc, void *typeinfo, void *dest);
int __cxa_atexit(void (*func)(void*), void *arg, void *dso);
void *operator_new(size_t size);
void operator_delete(void *ptr);
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags);



void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}
void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    free(exc);
    _exit(1);
}
int __cxa_atexit(void (*func)(void*), void *arg, void *dso) {
    return 0;
}
void *operator_new(size_t size) {
    return malloc(size);
}
void operator_delete(void *ptr) {
    free(ptr);
}
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) {
    return obj;
}
void std__ios_base__Init__Init(Init *this);
void std__ios_base__Init__dtor(Init *this);

void std__ios_base__Init__Init(Init *this) {
    this->unused = 0;
}
void std__ios_base__Init__dtor(Init *this) {
}

/* Base class with vtable */
struct Base {
    void **vtable;
};

/* LifecycleClass */
struct LifecycleClass {
    int instance_count;
};

/* RTTI classes */
struct RTTIBase {
    void **vtable;
};
struct RTTIDerivedA {
    void **vtable;
};
struct RTTIDerivedB {
    void **vtable;
};

/* Container templates */
struct Container_int {
    int data[10];
    int size;
};
struct Container_double {
    double data[10];
    int size;
};

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std__ios_base__Init__Init((Init *)&std___ioinit);
 __cxa_atexit(std__ios_base__Init__dtor,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686_get_pc_thunk_bx @ 000111ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86_get_pc_thunk_bx @ 000111b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86_get_pc_thunk_dx @ 000112e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86_get_pc_thunk_di @ 000112ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: FUN_00011385 @ 00011385 */

int FUN_00011385(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 ((void (*)(Base *, int))**(void ***)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011540 */

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
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
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
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 char local_30 [32];
 
 puts(&DAT_000121d8);
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
 printf(DAT_00012081,sVar1 + 0x125c);
 printf(DAT_0001209f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(DAT_000120bb,0x2a);
 printf(DAT_000120d7,0x47);
 printf(DAT_000120f3,0x28a);
 printf(DAT_00012110,0x16);
 printf(DAT_0001212c,0x27);
 printf(DAT_00012148,0x10);
 printf(DAT_00012164,0x55);
 test_cpp_exception();
 printf(DAT_00012180,0);
 printf(DAT_0001219d,0x2bf);
 puVar3 = operator_new(4);
 *puVar3 = (undefined4)&PTR__RTTIBase_00013ecc;
 piVar4 = operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00013ee0;
 iVar5 = (int)__dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = (int)__dynamic_cast(piVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator_delete(puVar3);
 operator_delete(piVar4);
 printf(DAT_000121ba,iVar5 + 0xe);
 return;
}



/* Function: main @ 00011810 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00011830 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00011840 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 00011860 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_ctor @ 00011880 */

/* Container_int::Container_int() */

void Container_int_ctor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 00011890 */

/* Container_int::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: Container_int_get @ 000118b0 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 000118d0 */

/* Container_int::getSize() const */

int Container_int_getSize(Container_int *this)

{
 return *(int *)(this + 0x28);
}



/* Function: Container_double_ctor @ 000118e0 */

/* Container_double::Container_double() */

void Container_double_ctor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 000118f0 */

/* Container_double::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: Container_double_get @ 00011910 */

/* Container_double::get(int) const */

double Container_double_get(Container_double *this,int param_1)

{
 double lVar1;
 
 lVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 lVar1 = *(double *)(this + param_1 * 8);
 }
 return lVar1;
}



/* Function: Container_double_getSize @ 00011930 */

/* Container_double::getSize() const */

int Container_double_getSize(Container_double *this)

{
 return *(int *)(this + 0x50);
}



/* Function: RTTIDerivedA_dtor @ 00011940 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00011970 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_dtor @ 00011980 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_dtor @ 00011990 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 000119c0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
