#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>



/* C++ type_info placeholder */
typedef struct type_info {
    const char *_name;
} type_info;

/* Base class placeholder */
typedef struct Base {
    void **vptr;
} Base;

/* LifecycleClass placeholder */
typedef struct LifecycleClass {
    int unused;
} LifecycleClass;

/* RTTI class placeholders */
typedef struct RTTIBase {
    type_info *typeinfo;
    void (*destructor)(struct RTTIBase*);
} RTTIBase;

typedef struct RTTIDerivedA {
    type_info *typeinfo;
    void (*destructor)(struct RTTIDerivedA*);
    uint64_t (*getType)(struct RTTIDerivedA*);
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    type_info *typeinfo;
    void (*destructor)(struct RTTIDerivedB*);
    uint64_t (*getType)(struct RTTIDerivedB*);
} RTTIDerivedB;

/* Container template class definitions */
typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

/* Function pointer type for virtual calls */
typedef void (*code)(void);

/* Platform-independent type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;



/* std::ios_base::Init placeholder */
typedef struct Init {
    char unused;
} Init;

/* External variable declarations */
extern Init std___ioinit;
extern void *__dso_handle;
extern void **PTR__RTTIBase_00103d78;
extern void **PTR__RTTIBase_00103da0;
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern const char DAT_001021d4[];
extern const char DAT_0010207d[];
extern const char DAT_0010209b[];
extern const char DAT_001020b7[];
extern const char DAT_001020d3[];
extern const char DAT_001020ef[];
extern const char DAT_0010210c[];
extern const char DAT_00102128[];
extern const char DAT_00102144[];
extern const char DAT_00102160[];
extern const char DAT_0010217c[];
extern const char DAT_00102199[];
extern const char DAT_001021b6[];

/* Vtable stub structures */
static void *RTTIBase_vtable[2] = {&RTTIBase_typeinfo, (void *)RTTIBase_destructor};
static void *RTTIDerivedA_vtable[3] = {&RTTIDerivedA_typeinfo, (void *)RTTIDerivedA_destructor, (void *)RTTIDerivedA_getType};
static void *RTTIDerivedB_vtable[3] = {&RTTIDerivedB_typeinfo, (void *)RTTIDerivedB_destructor, (void *)RTTIDerivedB_getType};

/* External variable definitions (stubs) */
Init std___ioinit;
void *__dso_handle;
void **PTR__RTTIBase_00103d78 = RTTIBase_vtable;
void **PTR__RTTIBase_00103da0 = RTTIDerivedA_vtable;
type_info RTTIBase_typeinfo = {"RTTIBase"};
type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB"};
const char DAT_001021d4[] = "Testing C++ features";
const char DAT_0010207d[] = "";
const char DAT_0010209b[] = "";
const char DAT_001020b7[] = "";
const char DAT_001020d3[] = "";
const char DAT_001020ef[] = "";
const char DAT_0010210c[] = "";
const char DAT_00102128[] = "";
const char DAT_00102144[] = "";
const char DAT_00102160[] = "";
const char DAT_0010217c[] = "";
const char DAT_00102199[] = "";
const char DAT_001021b6[] = "";

/* External function declarations */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, type_info*, void (*)(void*));
extern void *operator_new(size_t);
extern void operator_delete(void *);

/* Function prototypes */
void std_ios_base_Init_Init(Init *this);
void std_ios_base_Init_Destructor(Init *this);
void _GLOBAL__sub_I_5_1_cpp(void);
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
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
void RTTIDerivedB_destructor(RTTIBase *this);
unsigned long long RTTIDerivedB_getType(void);

/* Stub implementations for C++ runtime functions */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle)
{
    /* Stub implementation - no actual registration */
    return 0;
}

void *__dynamic_cast(void* src, type_info* src_type, type_info* dest_type, int src2dest)
{
    /* Stub implementation - return NULL for no cast, or src for same type */
    if (src_type == dest_type) {
        return src;
    }
    return NULL;
}

/* Stub implementations for operator new/delete */
void *operator_new(size_t size)
{
    return malloc(size);
}

void operator_delete(void *ptr)
{
    free(ptr);
}

/* Static member initialization */
int LifecycleClass_instance_count = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* Decompilation artifact - function pointer at NULL, replaced with stub */
 return;
}



/* Stub for std::ios_base::Init::Init() at 0x1010b0 */
void std_ios_base_Init_Init(Init *this)
{
    /* Stub implementation */
    return;
}



/* Stub for std::ios_base::Init::~Init() at 0x1010d0 */
void std_ios_base_Init_Destructor(Init *this)
{
    /* Stub implementation */
    return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_Destructor,&std___ioinit,&__dso_handle);
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
 char local_24 [36] = {0};
 
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
 strncpy(local_24,"Test",5);
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
 void **vtable = param_1->vptr;
 if (vtable != NULL && *vtable != NULL) {
     (*(code *)*vtable)();
 }
 return;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

unsigned int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

unsigned int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

unsigned int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

unsigned int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

unsigned int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

unsigned int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

unsigned int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

unsigned int test_cpp_exception(void)

{
 unsigned int *puVar1;
 
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* Exception handling replaced with direct throw for C compatibility */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&RTTIBase_typeinfo,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

unsigned int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void **puVar1;
 void **plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (void **)operator_new(8);
 *puVar1 = &PTR__RTTIBase_00103d78;
 plVar2 = (void **)operator_new(8);
 *plVar2 = &PTR__RTTIBase_00103da0;
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
 operator_delete(puVar1);
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
 void **puVar3;
 void **plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36] = {0};
 
 puts("Testing C++ features");
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
 strncpy(local_4c,"Test",5);
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
 printf("Member func: %lu\n",(ulong)((int)sVar2 + 0x125c));
 printf("Constructor: %lu\n",(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf("Virtual func: %lu\n",0x2a);
 printf("Multiple inheritance: %lu\n",0x47);
 printf("Diamond inheritance: %lu\n",0x28a);
 printf("Operator overload: %lu\n",0x16);
 printf("Template func: %lu\n",0x27);
 printf("Template class: %lu\n",0x10);
 printf("Lambda: %lu\n",0x55);
 /* Exception test - function does not return, skip in C */
 uVar1 = 0x2a;
 printf("Exception: %lu\n",(ulong)uVar1);
 printf("Smart ptr: %lu\n",0x2bf);
 puVar3 = (void **)operator_new(8);
 *puVar3 = &PTR__RTTIBase_00103d78;
 plVar4 = (void **)operator_new(8);
 *plVar4 = &PTR__RTTIBase_00103da0;
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
 operator_delete(puVar3);
 operator_delete(plVar4);
 /* Virtual function call on plVar4 skipped (object was deleted) */
 printf("RTTI: %lu\n",(ulong)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 001016a0 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001016b0 */

/* void template_swap<int>(int&, int&) */

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

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001016d0 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 001016f0 */

/* Container<int>::get(int) const */

unsigned int Container_int_get(Container_int *this,int param_1)

{
 unsigned int uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 uVar1 = (unsigned int)this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00101710 */

/* Container<int>::getSize() const */

unsigned int Container_int_getSize(Container_int *this)

{
 return (unsigned int)this->size;
}



/* Function: Container @ 00101720 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101730 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00101750 */

/* Container<double>::get(int) const */

unsigned long long Container_double_get(Container_double *this,int param_1)

{
 unsigned long long uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 uVar1 = (unsigned long long)this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00101770 */

/* Container<double>::getSize() const */

unsigned int Container_double_getSize(Container_double *this)

{
 return (unsigned int)this->size;
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 return;
}



/* Function: getType @ 00101790 */

/* RTTIDerivedA::getType() const */

unsigned long long RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIBase *this)

{
 return;
}



/* Function: getType @ 001017c0 */

/* RTTIDerivedB::getType() const */

unsigned long long RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
