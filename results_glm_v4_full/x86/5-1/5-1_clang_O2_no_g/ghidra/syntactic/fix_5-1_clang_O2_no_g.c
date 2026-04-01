/* Auto-injected type definitions by preprocessor - removed to avoid conflicts with standard headers */

/* Missing type definitions */
typedef int undefined4;
typedef void (*code)(void*);
typedef void (*destructor_t)(void*);

/* Data declarations */
extern const char DAT_000121d8[];
extern const char DAT_00012081[];
extern const char DAT_0001209f[];
extern const char DAT_000120bb[];
extern const char DAT_000120d7[];
extern const char DAT_000120f3[];
extern const char DAT_00012110[];
extern const char DAT_0001212c[];
extern const char DAT_00012148[];
extern const char DAT_00012164[];
extern const char DAT_00012180[];
extern const char DAT_0001219d[];
extern const char DAT_000121ba[];

/* Data definitions */
const char DAT_000121d8[] = "Testing C++ features...\n";
const char DAT_00012081[] = "Member func result: %d\n";
const char DAT_0001209f[] = "Constructor result: %d\n";
const char DAT_000120bb[] = "Virtual func result: %d\n";
const char DAT_000120d7[] = "Multiple inheritance result: %d\n";
const char DAT_000120f3[] = "Diamond inheritance result: %d\n";
const char DAT_00012110[] = "Operator overload result: %d\n";
const char DAT_0001212c[] = "Template func result: %d\n";
const char DAT_00012148[] = "Template class result: %d\n";
const char DAT_00012164[] = "Lambda result: %d\n";
const char DAT_00012180[] = "";
const char DAT_0001219d[] = "";
const char DAT_000121ba[] = "";

/* Standard library includes */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>

/* Forward declarations and stub definitions for C++ runtime symbols */
typedef struct {
    int dummy;
} Init;

typedef struct {
    Init __ioinit;
} std_ios_base;

extern std_ios_base std;
extern Init std___ioinit;
extern void *__dso_handle;

/* type_info structure for RTTI - renamed to avoid conflict with std::type_info */
struct type_info_t {
    const char *_name;
};

extern struct type_info_t int_typeinfo;

/* Define external variables */
std_ios_base std = {0};
Init std___ioinit = {0};
void *__dso_handle = 0;
int LifecycleClass_instance_count = 0;

/* C++ runtime stub declarations */
void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, struct type_info_t *tinfo, void (*dest)(void*));
void *__dynamic_cast(void *src, struct type_info_t *src_type, struct type_info_t *dst_type, int offset);
void *my_operator_new(size_t size);
void my_operator_delete(void *ptr);

/* std_ios_base initialization stubs */
void std_ios_base_Init_Init(Init *init);
void std_ios_base_Init_Destroy(Init *init);

/* RTTI stub declarations */
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;
extern RTTIBase RTTIBase_typeinfo;
extern RTTIDerivedA RTTIDerivedA_typeinfo;
extern RTTIDerivedB RTTIDerivedB_typeinfo;

/* RTTI definitions */
void *PTR__RTTIBase_00013ecc = NULL;
void *PTR__RTTIBase_00013ee0 = NULL;
struct type_info_t RTTIBase_typeinfo = { "RTTIBase" };
struct type_info_t RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
struct type_info_t RTTIDerivedB_typeinfo = { "RTTIDerivedB" };
struct type_info_t int_typeinfo = { "int" };

/* Class stub declarations */
typedef struct {
    int dummy;
} LifecycleClass;

/* Function pointer type for virtual calls - matching Base::virtualFunc(int) signature */
typedef int (*virtual_func_t)(void*, int);
typedef int (*virtual_func_int_t)(void*, int);

extern int LifecycleClass_instance_count;

/* Forward declarations for functions used as function pointers */
int RTTIDerivedA_getType(void);
int RTTIDerivedB_getType(void);

/* Base class for RTTI hierarchy */
struct RTTIBase {
    void **vtable;
};

/* Derived class A */
struct RTTIDerivedA {
    void **vtable;
};

/* Derived class B */
struct RTTIDerivedB {
    void **vtable;
};

/* Base class */
typedef struct Base Base;
struct Base {
    void **vtable;
};

/* Container<int> class - needs space for 10 ints and size field */
struct Container_int {
    int data[10];
    int size;
};

/* Container<double> class - needs space for 10 doubles and size field */
struct Container_double {
    double data[10];
    int size;
    char padding[12]; /* To align with offset 0x50 for size */
};

/* builtin_strncpy stub */
void builtin_strncpy(char *dest, const char *src, size_t n)
{
    strncpy(dest, src, n);
}

/* __cxa_atexit stub */
void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle)
{
}

/* __cxa_allocate_exception stub */
void *__cxa_allocate_exception(size_t size)
{
    return malloc(size);
}

/* __cxa_throw stub */
void __cxa_throw(void *obj, struct type_info_t *tinfo, void (*dest)(void*))
{
}

/* __dynamic_cast stub */
void *__dynamic_cast(void *src, struct type_info_t *src_type, struct type_info_t *dst_type, int offset)
{
    return src;
}

/* operator_new stub */
void *my_operator_new(size_t size)
{
    return malloc(size);
}

/* operator_delete stub */
void my_operator_delete(void *ptr)
{
    free(ptr);
}

/* std_ios_base_Init_Init stub */
void std_ios_base_Init_Init(Init *init)
{
}

/* std_ios_base_Init_Destroy stub */
void std_ios_base_Init_Destroy(Init *init)
{
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub: function pointer call removed */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_Destroy,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ed */

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
 builtin_strncpy(local_28,"Test",5);
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
/* Stub removed - uses uninitialized variable causing compilation errors */
void FUN_00011385(void) {
    return;
}



/* Function: call_virtual_func @ 000113a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 void **vtable;
 virtual_func_t vfunc;
 
 vtable = (void **)*(void **)param_1;
 vfunc = (virtual_func_t)vtable[2];
 vfunc(param_1, param_2);
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
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
 /* WARNING: Subroutine does not return */
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
 void **puVar1;
 void **piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = my_operator_new(4);
 *puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = my_operator_new(4);
 *piVar2 = &PTR__RTTIBase_00013ee0;
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
 my_operator_delete(puVar1);
 if (*piVar2 != NULL) {
     void **vtable = (void **)(*piVar2);
     if (vtable != NULL && vtable[1] != NULL) {
         ((code)vtable[1])(piVar2);
     }
 }
 my_operator_delete(piVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int uVar2;
 void *puVar3;
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
 builtin_strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 printf(&DAT_00012081,sVar1 + 0x125c);
 printf(&DAT_0001209f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);

}



/* Function: main @ 00011810 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00011830 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00011840 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 00011860 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011880 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011890 */

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



/* Function: get @ 000118b0 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 uVar1 = (undefined4)this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 000118d0 */

/* Container<int>::getSize() const */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 000118e0 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000118f0 */

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



/* Function: get @ 00011910 */

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



/* Function: getSize @ 00011930 */

/* Container<double>::getSize() const */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00011940 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 my_operator_delete(this);
 return;
}



/* Function: getType @ 00011970 */

/* RTTIDerivedA::getType() const */

int RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011980 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00011990 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 my_operator_delete(this);
 return;
}



/* Function: getType @ 000119c0 */

/* RTTIDerivedB::getType() const */

int RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
