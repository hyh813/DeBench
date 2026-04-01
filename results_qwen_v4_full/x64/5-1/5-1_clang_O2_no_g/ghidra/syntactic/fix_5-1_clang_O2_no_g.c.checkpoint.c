#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Auto-injected type definitions by preprocessor */
/* Standard integer types now from stdint.h */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Additional type definitions for decompiled code */
typedef void undefined;
typedef void (*code)(void);
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned long ulong;

/* Remove intmax_t and uintmax_t typedefs - already defined in stdint.h */

/* External function declarations */
extern size_t strlen(const char *);
extern int printf(const char *, ...);
extern int puts(const char *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void *operator_new(size_t);
extern void operator_delete(void *);
extern long __dynamic_cast(void *, void *, void *, int);
extern void *malloc(size_t);
extern void free(void *);

/* Forward declarations for classes */
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
extern int LifecycleClass_instance_count;

/* Forward declarations for C++ classes */
typedef struct Base {
    void **vtable;
} Base;

typedef struct Init {
    int dummy;
} Init;

typedef struct RTTIBase {
    void **vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **vtable;
} RTTIDerivedB;

/* Forward declaration for Container template */
typedef struct Container_int {
    undefined4 data[10];
    undefined4 size;
} Container_int;

typedef struct Container_double {
    undefined8 data[10];
    undefined4 size;
} Container_double;

/* RTTI typeinfo pointers */
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;
void *PTR_int_typeinfo_00103d50 = 0;
void *PTR_RTTIBase_typeinfo_00103d80 = 0;
void *PTR_RTTIDerivedA_typeinfo_00103da8 = 0;
void *PTR_RTTIDerivedB_typeinfo_00103dd0 = 0;

/* Define LifecycleClass_instance_count */
int LifecycleClass_instance_count = 0;

namespace std {
    struct ios_base {
        struct Init {
            void (*Init)(void *);
            void (*_Init)(void);
        };
    };
}
extern void *std___ioinit;
extern void std__ios_base__Init__Init(void *);
extern void std__ios_base__Init___Init(void);

extern void *__dso_handle;
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);

/* C++ runtime stubs */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

long __dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) {
    /* Stub implementation - returns non-zero to indicate successful cast */
    return 1;
}
/* Format strings for printf */
char DAT_001021d4[] = "Testing C++ OO features:\n";
char DAT_0010207d[] = "test_cpp_member_func: %d\n";
char DAT_0010209b[] = "test_cpp_constructor: %d\n";
char DAT_001020b7[] = "test_cpp_virtual_func: %d\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_0010210c[] = "test_cpp_operator_overload: %d\n";
char DAT_00102128[] = "test_cpp_template_func: %d\n";
char DAT_00102144[] = "test_cpp_template_class: %d\n";
char DAT_00102160[] = "test_cpp_lambda: %d\n";
char DAT_0010217c[] = "test_cpp_exception: %d\n";
char DAT_00102199[] = "test_cpp_smart_ptr: %d\n";
char DAT_001021b6[] = "test_cpp_rtti: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}








/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

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
 __builtin_strncpy(local_24,"Test",5);
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined4 test_cpp_exception(void)

{
 return 0x2a;
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103da0;
 lVar3 = __dynamic_cast(puVar1,PTR_RTTIBase_typeinfo_00103d80,PTR_RTTIDerivedA_typeinfo_00103da8,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = __dynamic_cast(plVar2,PTR_RTTIBase_typeinfo_00103d80,PTR_RTTIDerivedB_typeinfo_00103dd0,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 (*(code *)(*plVar2 + 8))();
 operator_delete(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(DAT_001021d4);
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
 __builtin_strncpy(local_4c,"Test",5);
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
 puVar3 = (undefined8 *)operator_new(8);
 *puVar3 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00103da0;
 lVar5 = __dynamic_cast(puVar3,PTR_RTTIBase_typeinfo_00103d80,PTR_RTTIDerivedA_typeinfo_00103da8,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 lVar5 = __dynamic_cast(plVar4,PTR_RTTIBase_typeinfo_00103d80,PTR_RTTIDerivedB_typeinfo_00103dd0,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator_delete(puVar3);
 (*(code *)(*plVar4 + 8))();
 operator_delete(plVar4);
 printf(DAT_001021b6,(ulong)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101690 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 001016a0 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 001016b0 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001016c0 */

/* Container<int>::Container() */

void __thiscall Container_int__Container(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 001016d0 */

/* Container<int>::push(int) */

void __thiscall Container_int__push(Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001016f0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container_int__get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(undefined4 *)(this_ptr + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00101710 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container_int__getSize(Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 00101720 */

/* Container<double>::Container() */

void __thiscall Container_double__Container(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00101730 */

/* Container<double>::push(double) */

void __thiscall Container_double__push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101750 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container_double__get(Container_double *this_ptr,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 uVar1 = *(undefined8 *)(this_ptr + (ulong)(uint)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00101770 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container_double__getSize(Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00101790 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 001017c0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
