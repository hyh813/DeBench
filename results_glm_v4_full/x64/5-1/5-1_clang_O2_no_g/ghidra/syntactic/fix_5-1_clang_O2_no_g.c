/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>

/* Forward declarations */
struct Base;
int main(void);
void call_virtual_func(struct Base *param_1, int param_2);

/* Forward declarations and type definitions */
typedef void (*code)(void);

/* External symbol declarations */
extern void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* obj, void* tinfo, void* dest);
extern void* __dynamic_cast(void* obj, void* from, void* to, int offset);

/* Standard library function declarations */
extern int puts(const char *s);
extern int putchar(int c);

/* Stub operator new/delete - C compatible wrappers */
static void* cpp_operator_new(size_t size) {
    return malloc(size);
}
static void cpp_operator_delete(void* ptr) {
    free(ptr);
}
static void cpp_operator_delete_sized(void* ptr, size_t size) {
    (void)size;
    free(ptr);
}

/* Built-in stub */
void builtin_strncpy(char* dest, const char* src, size_t n) {
    strncpy(dest, src, n);
}

/* RTTI stubs */
static void* PTR__RTTIBase_00103d78 = 0;
static void* PTR__RTTIBase_00103da0 = 0;

struct type_info {
    const char* name;
};

/* Base class stub */
struct Base {
    void** vtable;
};

/* LifecycleClass stub */
static int LifecycleClass_instance_count = 0;

/* RTTI class stubs */
struct RTTIBase {
    struct type_info *typeinfo;
};

struct RTTIDerivedA {
    struct RTTIBase base;
    struct type_info *typeinfo;
};

struct RTTIDerivedB {
    struct RTTIBase base;
    struct type_info *typeinfo;
};

extern struct type_info RTTIBase_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;

/* int typeinfo */
static struct type_info int_typeinfo = { "int" };
static struct type_info* int_typeinfo_ref = &int_typeinfo;

/* RTTI typeinfo definitions */
static struct type_info RTTIBase_typeinfo = { "RTTIBase" };
static struct type_info RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
static struct type_info RTTIDerivedB_typeinfo = { "RTTIDerivedB" };

/* std namespace stubs */
struct std_ios_base_Init {
    void (*Init_)(struct std_ios_base_Init*);
    void (*Init_destructor)(struct std_ios_base_Init*);
};

void std_ios_base_Init_Init(struct std_ios_base_Init *this_) {}
void std_ios_base_Init_destructor(struct std_ios_base_Init *this_) {}

static struct std_ios_base_Init __ioinit = {
    std_ios_base_Init_Init,
    std_ios_base_Init_destructor
};

/* Global handles */
static void* __dso_handle = 0;

/* Data stubs */
static const char DAT_001021d4[] = "";
static const char DAT_0010207d[] = "";
static const char DAT_0010209b[] = "";
static const char DAT_001020b7[] = "";
static const char DAT_001020d3[] = "";
static const char DAT_001020ef[] = "";
static const char DAT_0010210c[] = "";
static const char DAT_00102128[] = "";
static const char DAT_00102144[] = "";
static const char DAT_00102160[] = "";
static const char DAT_0010217c[] = "";
static const char DAT_00102199[] = "";
static const char DAT_001021b6[] = "";

/* Template class Container stubs - C-compatible explicit types */
struct Container_int {
    int count;
    int data[10];
};

struct Container_double {
    int count;
    double data[10];
};

/* External functions - all defined inline */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* Stub - original code dereferenced null pointer */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __ioinit.Init_(&__ioinit);
 __cxa_atexit((void (*)(void*))__ioinit.Init_destructor,&__ioinit,&__dso_handle);
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



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(struct Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (void)param_2; /* unused parameter */
 (*(code *)(*(void**)param_1))();
 return;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

uint64_t test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

uint64_t test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

uint64_t test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

uint64_t test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

uint64_t test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

uint64_t test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

uint64_t test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 /* Stub: throws exception but stubbed to avoid compilation issues */
 return;
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

uint64_t test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void **puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (void **)cpp_operator_new(8);
 *puVar1 = &PTR__RTTIBase_00103d78;
 plVar2 = (long *)cpp_operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103da0;
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
 cpp_operator_delete(puVar1);
 cpp_operator_delete(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 void **puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(&DAT_001021d4);
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
 builtin_strncpy(local_4c,"Test",5);
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
 /* Stub output */
 putchar(((int)sVar2 + 0x125c) & 0xFF);
 putchar((LifecycleClass_instance_count * 0x3e9 + 0x15) & 0xFF);
 putchar(0x2a);
 putchar(0x47);
 putchar(0x28a);
 putchar(0x16);
 putchar(0x27);
 putchar(0x10);
 putchar(0x55);
 /* test_cpp_exception(); - stub: throws exception */
 putchar(0);
 putchar(0x2bf);
 puVar3 = (void **)cpp_operator_new(8);
 *puVar3 = &PTR__RTTIBase_00103d78;
 plVar4 = (long *)cpp_operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00103da0;
 lVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 cpp_operator_delete(puVar3);
 cpp_operator_delete(plVar4);
 putchar((iVar7 + 0xe) & 0xFF);
 return;
}



/* Function: main @ 00101680 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Template function declarations */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* Function: template_max @ 00101690 */

/* template_max<T>(T, T) */

/* Explicit instantiations of template_max */
int template_max_int(int param_1, int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

double template_max_double(double param_1, double param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap @ 001016b0 */

/* template_swap<int>(int&, int&) */

void template_swap_int(int *param_1, int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001016c0 */

/* Container<int>::Container_() */

void Container_int_Container_(struct Container_int *this)

{
 this->count = 0;
 return;
}



/* Function: push @ 001016d0 */

/* Container<int>::push(int) */

void Container_int_push(struct Container_int *this, int param_1)

{
 int iVar1;

 iVar1 = this->count;
 if ((long)iVar1 < 10) {
 this->count = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 001016f0 */

/* Container<int>::get(int) */

int Container_int_get(struct Container_int *this, int param_1)

{
 int uVar1;

 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->count)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00101710 */

/* Container<int>::getSize() */

int Container_int_getSize(struct Container_int *this)

{
 return this->count;
}



/* Function: Container @ 00101720 */

/* Container<double>::Container_() */

void Container_double_Container_(struct Container_double *this)

{
 this->count = 0;
 return;
}



/* Function: push @ 00101730 */

/* Container<double>::push(double) */

void Container_double_push(struct Container_double *this, double param_1)

{
 int iVar1;

 iVar1 = this->count;
 if ((long)iVar1 < 10) {
 this->count = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00101750 */

/* Container<double>::get(int) */

double Container_double_get(struct Container_double *this, int param_1)

{
 double uVar1;

 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->count)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00101770 */

/* Container<double>::getSize() */

int Container_double_getSize(struct Container_double *this)

{
 return this->count;
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* RTTIDerivedA::RTTIDerivedA_destructor() */

void RTTIDerivedA_destructor(void)

{
 return;
}

/* Function: getType @ 00101790 */

/* RTTIDerivedA::getType() */

unsigned long RTTIDerivedA_getType(void)

{
 return 1;
}

/* Function: ~RTTIBase @ 001017a0 */

/* RTTIBase::RTTIBase_destructor() */

void RTTIBase_destructor(void)

{
 return;
}

/* Function: ~RTTIDerivedB @ 001017b0 */

/* RTTIDerivedB::RTTIDerivedB_destructor() */

void RTTIDerivedB_destructor(void)

{
 return;
}

/* Function: getType @ 001017c0 */

/* RTTIDerivedB::getType() */

unsigned long RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
