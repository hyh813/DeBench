/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific undefined type definitions */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint64_t undefined8;

/* Function pointer type for virtual calls */
typedef void (*code)(void);

#include <stdlib.h>

/* Standard library function implementations */
size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int puts(const char *s) {
    const char *p = s;
    while (*p) {
        /* Stub implementation */
        p++;
    }
    return 0;
}

int printf(const char *format, ...) {
    /* Stub implementation - just count characters */
    const char *p = format;
    int count = 0;
    while (*p) {
        count++;
        p++;
    }
    return count;
}

/* Base class for virtual function calls */
struct Base {
    void **vtable;
};

/* RTTI structures */
struct RTTIBase {
    const void *typeinfo;
};

struct RTTIDerivedA : RTTIBase {
    const void *typeinfo;
};

struct RTTIDerivedB : RTTIBase {
    const void *typeinfo;
};

/* Stub declarations for C++ library references */
struct Init;
struct ios_base;
struct __ioinit_struct;

extern struct __ioinit_struct std___ioinit;
extern void* __dso_handle;

extern void std_ios_base_Init_Init(struct Init *init_obj);
extern void std_ios_base_Init_dtor(struct Init *init_obj);
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

/* Standard library I/O declarations */
extern int puts(const char *s);
extern int printf(const char *format, ...);

/* C++ ABI exception functions */
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, const void *tinfo, void (*dest)(void*));

/* C++ ABI dynamic_cast support */
extern void* __dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset);

/* LifecycleClass stub for instance_count */
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count = 0;

/* RTTI vtable/typeinfo pointer references */
extern const void* PTR__RTTIBase_00021ed8;
extern const void* PTR__RTTIBase_00021eec;

/* Typeinfo pointers */
extern const void* int_typeinfo;
extern const void* RTTIBase_typeinfo;
extern const void* RTTIDerivedA_typeinfo;
extern const void* RTTIDerivedB_typeinfo;

/* Define missing typeinfo pointers */
const void* int_typeinfo = NULL;
const void* RTTIBase_typeinfo = NULL;
const void* RTTIDerivedA_typeinfo = NULL;
const void* RTTIDerivedB_typeinfo = NULL;

/* Ghidra-specific macros */
#define SUB84(x, y) 0
#define CONCAT44(x, y) ((uint64_t)((uint64_t)(x) << 32 | (uint32_t)(y)))
#define NULL ((void*)0)

/* ARM ABI double comparison implementation */
int __aeabi_dcmpgt(double a, double b) {
    return a > b ? 1 : 0;
}

/* C++ ABI exception function implementations */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

/* __cxa_throw never returns - stub that aborts */
void __cxa_throw(void *thrown_exception, const void *tinfo, void (*dest)(void*)) {
    /* Stub: in real implementation this would unwind stack */
    for (;;);
}

/* __dynamic_cast - stub implementation */
/* In real implementation this would traverse RTTI hierarchy */
void* __dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset) {
    /* Simple stub: if types match, return src_ptr, otherwise NULL */
    if (src_type == dst_type) {
        return (void *)src_ptr;
    }
    /* For derived types, assume cast succeeds if src_ptr is not NULL */
    if (src_ptr != NULL) {
        return (void *)src_ptr;
    }
    return NULL;
}

/* Data references */
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

/* Define missing RTTI vtable pointers */
const void* PTR__RTTIBase_00021ed8 = NULL;
const void* PTR__RTTIBase_00021eec = NULL;

/* Define missing string data constants */
const char DAT_00011294[] = "Testing C++ Features\n";
const char DAT_0001113d[] = "Member function result: %u\n";
const char DAT_0001115b[] = "Constructor result: %u\n";
const char DAT_00011177[] = "Virtual function result: %u\n";
const char DAT_00011193[] = "Multiple inheritance result: %u\n";
const char DAT_000111af[] = "Diamond inheritance result: %u\n";
const char DAT_000111cc[] = "Operator overload result: %u\n";
const char DAT_000111e8[] = "Template function result: %u\n";
const char DAT_00011204[] = "Template class result: %u\n";
const char DAT_00011220[] = "Lambda result: %u\n";
const char DAT_0001123c[] = "Exception result: %u\n";
const char DAT_00011259[] = "Smart pointer result: %u\n";
const char DAT_00011276[] = "RTTI result: %u\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */






/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined4 *)malloc(4);
 *(void**)puVar1 = (void *)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)malloc(4);
 *(void**)piVar2 = (void *)&PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 free(puVar1);
 ((void (*)(int*))(*(code **)(*piVar2 + 4)))(piVar2);
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
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
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
 
 puts(DAT_00011294);
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
 printf(DAT_0001113d,(uint32_t)(sVar1 + 0x125c));
 printf(DAT_0001115b,(uint32_t)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00011177,(uint32_t)0x2a);
 printf(DAT_00011193,(uint32_t)0x47);
 printf(DAT_000111af,(uint32_t)0x28a);
 printf(DAT_000111cc,(uint32_t)0x16);
 printf(DAT_000111e8,(uint32_t)0x27);
 printf(DAT_00011204,(uint32_t)0x10);
 printf(DAT_00011220,(uint32_t)0x55);
 test_cpp_exception();
 printf(DAT_0001123c,uVar2);
 printf(DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(DAT_00011276,uVar2);
 return;
}



/* Function: main @ 00010ef4 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010f08 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 __aeabi_dcmpgt(param_1, param_2);
 return param_1;
}



/* Function: template_swap_int @ 00010f48 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Template class Container definition */
template<typename T>
struct Container {
    int count;
    T data[10];
};

/* Function: Container @ 00010f5c */

/* Container<int>::Container() */

void Container_int__Container(Container<int> *this_ptr)

{
 *(uint32_t *)((uint8_t *)this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00010f68 */

/* Container<int>::push(int) */

void Container_int__push(Container<int> *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((uint8_t *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((uint8_t *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((uint8_t *)this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00010f80 */

/* Container<int>::get(int) const */

uint32_t Container_int__get(Container<int> *this_ptr,int param_1)

{
 uint32_t uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)((uint8_t *)this_ptr + 0x28)) {
 uVar1 = *(uint32_t *)((uint8_t *)this_ptr + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00010fa0 */

/* Container<int>::getSize() const */

uint32_t Container_int__getSize(Container<int> *this_ptr)

{
 return *(uint32_t *)((uint8_t *)this_ptr + 0x28);
}



/* Function: Container @ 00010fa8 */

/* Container<double>::Container() */

void Container_double__Container(Container<double> *this_ptr)

{
 *(uint32_t *)((uint8_t *)this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00010fb4 */

/* Container<double>::push(double) */

uint64_t Container_double__push(Container<double> *this_ptr, double param_1)

{
 union { double d; uint64_t i; } u;
 uint32_t *puVar1;
 int iVar2;
 
 u.d = param_1;
 iVar2 = *(int *)((uint8_t *)this_ptr + 0x50);
 if (9 < iVar2) {
 return 0;
 }
 puVar1 = (uint32_t *)((uint8_t *)this_ptr + iVar2 * 8);
 *puVar1 = (uint32_t)(u.i & 0xffffffff);
 puVar1[1] = (uint32_t)(u.i >> 32);
 *(int *)((uint8_t *)this_ptr + 0x50) = iVar2 + 1;
 return u.i;
}



/* Function: get @ 00010fd8 */

/* Container<double>::get(int) const */

uint64_t Container_double__get(Container<double> *this_ptr,int param_1)

{
 uint32_t uVar1;
 uint32_t uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)((uint8_t *)this_ptr + 0x50)) {
 uVar1 = *(uint32_t *)((uint8_t *)this_ptr + param_1 * 8);
 uVar2 = *(uint32_t *)((uint8_t *)this_ptr + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize @ 00011004 */

/* Container<double>::getSize() const */

uint32_t Container_double__getSize(Container<double> *this_ptr)

{
 return *(uint32_t *)((uint8_t *)this_ptr + 0x50);
}



/* Function: ~RTTIDerivedA @ 0001100c */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__dtor(RTTIDerivedA *this_ptr)

{
 free(this_ptr);
 return;
}



/* Function: getType @ 00011010 */

/* RTTIDerivedA::getType() const */

uint32_t RTTIDerivedA__getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011018 */

/* RTTIBase::~RTTIBase() */

RTTIBase * RTTIBase__dtor(RTTIBase *this_ptr)

{
 return this_ptr;
}



/* Function: ~RTTIDerivedB @ 0001101c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__dtor(RTTIDerivedB *this_ptr)

{
 free(this_ptr);
 return;
}



/* Function: getType @ 00011020 */

/* RTTIDerivedB::getType() const */

uint32_t RTTIDerivedB__getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
