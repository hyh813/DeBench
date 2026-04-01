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

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/* External data and function stubs */
extern char DAT_0010207d[];
extern char DAT_0010209b[];
extern char DAT_001020b7[];
extern char DAT_001020d3[];
extern char DAT_001020ef[];
extern char DAT_0010210c[];
extern char DAT_00102128[];
extern char DAT_00102144[];
extern char DAT_00102160[];
extern char DAT_0010217c[];
extern char DAT_00102199[];
extern char DAT_001021b6[];
extern char DAT_001021d4[];

/* Definitions for external data arrays */
char DAT_0010207d[32];
char DAT_0010209b[32];
char DAT_001020b7[32];
char DAT_001020d3[32];
char DAT_001020ef[32];
char DAT_0010210c[32];
char DAT_00102128[32];
char DAT_00102144[32];
char DAT_00102160[32];
char DAT_0010217c[32];
char DAT_00102199[32];
char DAT_001021b6[32];
char DAT_001021d4[32];

/* Complete definition for Init struct used by C++ runtime */
typedef struct Init Init;
struct Init {
    int dummy;  // Placeholder - actual structure may differ
};

/* C++ runtime stubs */
typedef struct std {
    struct Init __ioinit;
} std;
extern std std_obj;
extern Init std___ioinit;
extern void* __dso_handle;

/* Define the global objects */
std std_obj;
Init std___ioinit;

/* Type info stubs */
typedef struct type_info {
    void **vtable;
    const char *name;
} type_info;

/* Forward declarations for classes */
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Struct definitions */
struct Base {
    void **vtable;  // Virtual function table pointer
};

struct LifecycleClass {
    int data[5];  // 0x14 bytes = 5 ints
};

struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

struct Container_int {
    int data[10];  // 10 ints = 40 bytes
    int size;      // at offset 0x28
};

struct Container_double {
    double data[10];  // 10 doubles = 80 bytes
    int size;         // at offset 0x50
};

/* RTTI typeinfo stubs */
type_info int_typeinfo = { NULL, "int" };
type_info RTTIBase_typeinfo = { NULL, "RTTIBase" };
type_info RTTIDerivedA_typeinfo = { NULL, "RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { NULL, "RTTIDerivedB" };

/* Vtable function stubs */
void RTTIDerivedA_virtual1(void *this_ptr) { (void)this_ptr; }
void RTTIDerivedA_virtual2(void *this_ptr) { (void)this_ptr; }
void RTTIDerivedB_virtual1(void *this_ptr) { (void)this_ptr; }
void RTTIDerivedB_virtual2(void *this_ptr) { (void)this_ptr; }

/* Vtables */
void* RTTIDerivedA_vtable[2] = {
    (void*)RTTIDerivedA_virtual1,
    (void*)RTTIDerivedA_virtual2
};

void* RTTIDerivedB_vtable[2] = {
    (void*)RTTIDerivedB_virtual1,
    (void*)RTTIDerivedB_virtual2
};

void* PTR__RTTIBase_00103d78 = RTTIDerivedA_vtable;
void* PTR__RTTIBase_00103da0 = RTTIDerivedB_vtable;

/* Function stubs */
void builtin_strncpy(char *dest, const char *src, size_t n);

/* Function implementations */
void builtin_strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
}

void* operator_new(size_t size) {
    return (void*)malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* Stub implementations for C++ runtime functions */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void *obj, type_info *tinfo, void *dest) __attribute__((noreturn));

void __cxa_throw(void *obj, type_info *tinfo, void *dest) {
    /* Stub - actual exception throwing would require runtime support */
    fprintf(stderr, "Exception thrown: %s\n", tinfo ? tinfo->name : "unknown");
    free(obj);
    exit(1);
}

void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* Stub - atexit registration */
}

void* __dynamic_cast(void *src, const type_info *src_type, const type_info *dst_type, int src2dst_offset) {
    /* Simple stub - return NULL if types don't match */
    if (src_type == dst_type) {
        return src;
    }
    return NULL;
}

/* Stub implementations for ios_base functions */
void std_ios_base_Init_Init(Init *this_ptr) {
    /* Stub - initialize ios_base::Init */
    if (this_ptr) {
        memset(this_ptr, 0, sizeof(Init));
    }
}

void std_ios_base_Init_destructor(Init *this_ptr) {
    /* Stub - cleanup ios_base::Init */
    (void)this_ptr;
}

/* Define dso_handle */
void* __dso_handle = NULL;

/* Static member stubs */
int LifecycleClass_instance_count = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* NULL function pointer call removed - was causing compilation issues */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101140 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_destructor,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0010125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 unsigned int *puVar1;
 long lVar2;
 unsigned int *puVar3;
 int iVar4;
 
 puVar1 = operator_new(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete((void *)puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 001012e5 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012eb. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (void)param_2;  // Suppress unused parameter warning
 if (param_1 && param_1->vtable && param_1->vtable[0]) {
   (*(code *)param_1->vtable[0])();
 }
 return;
}



/* Function: test_cpp_virtual_func @ 001012ed */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

unsigned long test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

unsigned long test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

unsigned long test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

unsigned long test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

unsigned long test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

unsigned long test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101311 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

unsigned long test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101317 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

unsigned long test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

unsigned long test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void *puVar1;
 void *plVar2;
 void *lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = operator_new(8);
 *(void **)puVar1 = &PTR__RTTIBase_00103d78;
 plVar2 = operator_new(8);
 *(void **)plVar2 = &PTR__RTTIBase_00103da0;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete((void *)puVar1);
 /* Call virtual function through vtable */
 {
   void **vtable = *(void **)plVar2;
   void (*vfunc)(void *) = (void (*)(void *))vtable[1];
   vfunc(plVar2);
 }
 operator_delete((void *)plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 0010147f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 char local_24 [36];
 
 puts(&DAT_001021d4);
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
 printf(&DAT_0010207d,(ulong)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(&DAT_0010209b,(ulong)uVar1);
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(ulong)uVar1);
 printf(&DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(&DAT_001021b6,(ulong)uVar1);
 return;
}



/* Function: main @ 001015a8 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 001015b2 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 001015ba */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001015bf */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001015c8 */

/* Container<int>::Container() */

void Container_int_Container(Container_int *this_ptr)

{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 001015d0 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001015e4 */

/* Container<int>::get(int) const */

unsigned long Container_int_get(Container_int *this_ptr,int param_1)

{
 unsigned long uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this_ptr + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001015f6 */

/* Container<int>::getSize() const */

unsigned long Container_int_getSize(Container_int *this_ptr)

{
 return *(unsigned int *)((char *)this_ptr + 0x28);
}



/* Function: Container @ 001015fa */

/* Container<double>::Container() */

void Container_double_Container(Container_double *this_ptr)

{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00101602 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 *(double *)((char *)this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101618 */

/* Container<double>::get(int) const */

double Container_double_get(Container_double *this_ptr,int param_1)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x50))) {
 dVar1 = *(double *)((char *)this_ptr + (ulong)(uint)param_1 * 8);
 }
 return dVar1;
}



/* Function: getSize @ 0010162c */

/* Container<double>::getSize() const */

unsigned long Container_double_getSize(Container_double *this_ptr)

{
 return *(unsigned int *)((char *)this_ptr + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101630 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 return;
}



/* Function: getType @ 00101636 */

/* RTTIDerivedA::getType() const */

unsigned long RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: ~RTTIBase @ 0010163c */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010163e */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 return;
}



/* Function: getType @ 00101644 */

/* RTTIDerivedB::getType() const */

unsigned long RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
