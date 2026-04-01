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

/* Ghidra type definitions removed - causing compilation issues */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

/* Standard library prototypes */
void* malloc(size_t);
void free(void*);
int puts(const char*);
int printf(const char*, ...);
size_t strlen(const char*);
void* memcpy(void*, const void*, size_t);
void abort(void);

/* C++ Runtime forward declarations */
typedef struct { int dummy; } Init;
typedef struct { int dummy; } std_ios_base_Init;
typedef struct { int dummy; } type_info;

extern std_ios_base_Init std___ioinit;
extern void *__dso_handle;

std_ios_base_Init std___ioinit;
void *__dso_handle = NULL;

/* C++ runtime function declarations - use extern "C" for C linkage */
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, type_info* type, void* destructor);
void* __dynamic_cast(const void* ptr, const void* src_type, const void* dst_type, int offset);

/* Operator new/delete implementations */
void* custom_new(size_t size) {
    void* ptr = malloc(size);
    if (!ptr && size > 0) {
        abort();  // Handle allocation failure
    }
    return ptr;
}

void custom_delete(void* ptr) {
    free(ptr);
}

void* custom_new_array(size_t size) {
    void* ptr = malloc(size);
    if (!ptr && size > 0) {
        abort();  // Handle allocation failure
    }
    return ptr;
}

void custom_delete_array(void* ptr) {
    free(ptr);
}

/* C++ runtime function implementations */
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle) {
    /* Stub implementation - atexit handler registration */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

void* __dynamic_cast(const void* ptr, const void* src_type, const void* dst_type, int offset) {
    /* Stub implementation - dynamic cast */
    (void)ptr;
    (void)src_type;
    (void)dst_type;
    (void)offset;
    return NULL;
}

void* __cxa_allocate_exception(size_t size) {
    /* Stub implementation - exception allocation */
    return custom_new(size);
}

void __cxa_throw(void* exception, type_info* type, void* destructor) {
    /* Stub implementation - exception throwing */
    (void)exception;
    (void)type;
    (void)destructor;
    abort();  /* Exception throwing not fully supported */
}

/* std::ios_base::Init constructor/destructor stubs */
void std_ios_base_Init_Constructor(std_ios_base_Init* this) {
    (void)this;
}

void std_ios_base_Init_Destructor(void* this) {
    (void)this;
}

/* LifecycleClass forward declaration */
typedef struct { int dummy; } LifecycleClass;
extern int LifecycleClass_instance_count;
int LifecycleClass_instance_count = 0;

/* Base class for virtual functions - Base is just a vtable pointer */
typedef void** Base;

/* RTTI type forward declarations */
typedef struct RTTIBase { void** vtable; } RTTIBase;
typedef struct RTTIDerivedA { void** vtable; } RTTIDerivedA;
typedef struct RTTIDerivedB { void** vtable; } RTTIDerivedB;

/* RTTI function forward declarations */
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedA_getType(RTTIDerivedA *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
void RTTIDerivedB_getType(RTTIDerivedB *this);
void RTTIBase_destructor(RTTIBase *this);

extern type_info int_typeinfo;
#define int__typeinfo (&int_typeinfo)

extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
#define RTTIBase__typeinfo (&RTTIBase_typeinfo)
#define RTTIDerivedA__typeinfo (&RTTIDerivedA_typeinfo)
#define RTTIDerivedB__typeinfo (&RTTIDerivedB_typeinfo)

/* Define type_info instances */
type_info int_typeinfo = { NULL };
type_info RTTIBase_typeinfo = { NULL };
type_info RTTIDerivedA_typeinfo = { NULL };
type_info RTTIDerivedB_typeinfo = { NULL };

extern void* PTR__RTTIBase_00013ecc;
extern void* PTR__RTTIBase_00013ee0;

/* Data definitions for vtable pointers */
/* Initialize with vtable arrays for RTTI classes */
void* RTTIDerivedA_vtable[] = {
    (void*)&RTTIDerivedA_destructor,
    (void*)&RTTIDerivedA_getType
};
void* RTTIDerivedB_vtable[] = {
    (void*)&RTTIDerivedB_destructor,
    (void*)&RTTIDerivedB_getType
};
void* PTR__RTTIBase_00013ecc = RTTIDerivedA_vtable;
void* PTR__RTTIBase_00013ee0 = RTTIDerivedB_vtable;

/* Template class Container declarations */
typedef struct Container_int { int data[10]; int size; char padding[32]; } Container_int;
typedef struct Container_double { double data[10]; int size; char padding[32]; } Container_double;

/* Data references */

/* Test function prototypes */
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1, int param_2);
unsigned int test_cpp_virtual_func(void);
unsigned int test_cpp_multiple_inheritance(void);
unsigned int test_cpp_diamond_inheritance(void);
unsigned int test_cpp_operator_overload(void);
unsigned int test_cpp_template_func(void);
unsigned int test_cpp_template_class(void);
unsigned int test_cpp_lambda(void);
unsigned int test_cpp_exception(void);
unsigned int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);
int main(void);

/* Data definitions for string constants */
char DAT_000121d8[32] = "Testing C++ OO features\n";
char DAT_000121fc[32] = "Hello, World! Testing string.";
char DAT_00012081[32] = "String length: %d\n";
char DAT_0001209f[32] = "Constructor test: %d\n";
char DAT_000120bb[32] = "Virtual func test: %d\n";
char DAT_000120d7[32] = "Multiple inheritance: %d\n";
char DAT_000120f3[32] = "Diamond inheritance: %d\n";
char DAT_00012110[32] = "Operator overload: %d\n";
char DAT_0001212c[32] = "Template func: %d\n";
char DAT_00012148[32] = "Template class: %d\n";
char DAT_00012164[32] = "Lambda test: %d\n";
char DAT_00012180[32] = "Exception test: %d\n";
char DAT_0001219d[32] = "Smart ptr test: %d\n";
char DAT_000121ba[32] = "RTTI test: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */
/* Removed - decompilation artifact with null function pointer call */



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Constructor(&std___ioinit);
 __cxa_atexit(&std_ios_base_Init_Destructor,&std___ioinit,&__dso_handle);
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
 unsigned char local_9;
 
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
 piVar1 = (int *)custom_new_array(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 custom_delete_array(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 000113cf */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 void (*vfunc)(void*, int);
 void **vtable = (void**)param_1;
 vfunc = (void (*)(void*, int))vtable[0];
 vfunc(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000113f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

unsigned int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

unsigned int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

unsigned int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011406 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

unsigned int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

unsigned int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

unsigned int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

unsigned int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 0001141e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

unsigned int test_cpp_exception(void)

{
 return 0x2a;
}



/* Function: test_cpp_smart_ptr @ 00011502 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

unsigned int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void* puVar1;
 void* piVar2;
 void* iVar3;
 void* iVar4;
 uintptr_t iVar5;
 
 puVar1 = custom_new(sizeof(void*));
 *(void**)puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = custom_new(sizeof(void*));
 *(void**)piVar2 = &PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast(puVar1,RTTIBase__typeinfo,RTTIDerivedA__typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,RTTIBase__typeinfo,RTTIDerivedB__typeinfo,0);
 iVar3 = (void*)(iVar5 + 200);
 if (iVar4 == 0) {
 iVar3 = (void*)iVar5;
 }
 custom_delete(puVar1);
 ((void (*)(void*))(*((void***)piVar2)[1]))(piVar2);
 return (int)((uintptr_t)iVar3 + 0xe);
}



/* Function: test_cpp_oo_features @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 unsigned int uVar2;
 char local_28 [31];
 unsigned char local_9;
 
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
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
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



/* Function: template_max<int> @ 0001173e */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 0001174c */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 0001175d */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011770 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 0001177c */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00011798 */

/* Container<int>::get(int) const */

unsigned int Container_int_get(Container_int *this,int param_1)

{
 unsigned int uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 000117b0 */

/* Container<int>::getSize() const */

unsigned int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 000117b8 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000117c4 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 000117e2 */

/* Container<double>::get(int) const */

double Container_double_get(Container_double *this,int param_1)

{
 double lVar1;
 
 lVar1 = 0.0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 lVar1 = this->data[param_1];
 }
 return lVar1;
}



/* Function: getSize @ 000117fc */

/* Container<double>::getSize() const */

unsigned int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00011804 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 custom_delete(this);
 return;
}



/* Function: getType @ 00011826 */

/* RTTIDerivedA::getType() const */

unsigned int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 0001182a */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001182c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 custom_delete(this);
 return;
}



/* Function: getType @ 0001184e */

/* RTTIDerivedB::getType() const */

unsigned int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
