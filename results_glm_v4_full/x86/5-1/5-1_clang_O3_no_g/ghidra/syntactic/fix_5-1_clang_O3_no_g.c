/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t already defined by system headers */
/* ssize_t already defined by system headers */
/* uintptr_t already defined by system headers */
/* intptr_t already defined by system headers */
/* ptrdiff_t already defined by system headers */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef void (*code)(void);
typedef void (*virtual_func)(void*, int);
typedef void (*destructor_func)(void*);
typedef unsigned int undefined4;
typedef char undefined8;
typedef long double longdouble;

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

/* Forward declarations for C++ types */
struct std_ios_base_Init {
    /* Stub for std::ios_base::Init */
};

/* External variables and functions */
extern void *__dso_handle;
extern struct std_ios_base_Init std___ioinit;
void *__dso_handle = 0;
struct std_ios_base_Init std___ioinit;

extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *obj, void *tinfo, void *dest);

int __dynamic_cast(void *src, void *from_type, void *to_type, int src2dst_offset)
{
    /* Stub implementation for dynamic_cast - always returns NULL (cast fails) */
    /* In a real C++ implementation, this would check type hierarchy */
    (void)from_type;
    (void)to_type;
    (void)src2dst_offset;
    return 0;
}

/* Stub operator new/delete */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* Use standard operator new/delete from global namespace */
/* Note: C++ operators removed - not used in this C implementation */

/* Forward declarations for classes (as C structs) */
struct Base {
    void **vptr;  /* Virtual table pointer */
};

struct LifecycleClass {
    /* static member instance_count is declared separately as extern */
};

struct RTTIBase {
    void **vptr;  /* Virtual table pointer */
};

struct RTTIDerivedA {
    void **vptr;  /* Virtual table pointer */
};

struct RTTIDerivedB {
    void **vptr;  /* Virtual table pointer */
};

/* Container type definitions (replacing C++ templates with C structs) */
typedef struct {
    int data[10];
    int size;
} Container_int;

typedef struct {
    double data[10];
    int size;
} Container_double;

/* Static member declarations */
extern int LifecycleClass_instance_count;
int LifecycleClass_instance_count = 0;

/* RTTI type info stubs */
extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;
extern void *int_typeinfo;
void *PTR__RTTIBase_00013ecc = 0;
void *PTR__RTTIBase_00013ee0 = 0;
void *int_typeinfo = 0;
#define INT_TYPEINFO int_typeinfo

/* RTTI type info placeholder symbols */
extern void *RTTIBase_type_00012390;
void *RTTIBase_type_00012390 = 0;
#define RTTIBase_typeinfo RTTIBase_type_00012390

extern void *RTTIDerivedA_type_00012398;
void *RTTIDerivedA_type_00012398 = 0;
#define RTTIDerivedA_typeinfo RTTIDerivedA_type_00012398

extern void *RTTIDerivedB_type_000123a0;
void *RTTIDerivedB_type_000123a0 = 0;
#define RTTIDerivedB_typeinfo RTTIDerivedB_type_000123a0

/* Data references */
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

/* Data array definitions */
char DAT_000121d8[1] = {0};
char DAT_00012081[1] = {0};
char DAT_0001209f[1] = {0};
char DAT_000120bb[1] = {0};
char DAT_000120d7[1] = {0};
char DAT_000120f3[1] = {0};
char DAT_00012110[1] = {0};
char DAT_0001212c[1] = {0};
char DAT_00012148[1] = {0};
char DAT_00012164[1] = {0};
char DAT_00012180[1] = {0};
char DAT_0001219d[1] = {0};
char DAT_000121ba[1] = {0};

/* Inline wrappers */
#define builtin_strncpy strncpy
#define puts puts
#define printf printf
#define strlen strlen

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */



/* Forward declarations for Init wrapper functions */
static inline void std_ios_base_Init_ctor(struct std_ios_base_Init *obj);
static inline void std_ios_base_Init_dtor(struct std_ios_base_Init *obj);


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub - original code had NULL pointer dereference */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_ctor(&std___ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_dtor,&std___ioinit,&__dso_handle);
 return;
}

/* Stub implementations for Init constructor/destructor */
static inline void std_ios_base_Init_ctor(struct std_ios_base_Init *obj)
{
    /* Constructor stub - initialization happens in real std::ios_base::Init */
    (void)obj;
}

static inline void std_ios_base_Init_dtor(struct std_ios_base_Init *obj)
{
    /* Destructor stub - cleanup happens in real std::ios_base::Init */
    (void)obj;
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

int FUN_00011385(void)

{
 /* Stub - accessing uninitialized memory removed */
 return 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(struct Base *param_1,int param_2)

{
 virtual_func vfunc;
 vfunc = (virtual_func)*(void **)(*(void **)param_1);
 vfunc(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

int test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&INT_TYPEINFO,0);
 return 0; /* Never reached, but needed for compilation */
}



/* Function: test_cpp_smart_ptr @ 00011530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void *puVar1;
 void * *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = operator_new(4);
 *(void **)puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = operator_new(4);
 *(void **)piVar2 = &PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 (*(destructor_func *)(*(void ***)piVar2)[1])(piVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 void *puVar3;
 void *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int uVar2;
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
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
 puVar3 = operator_new(4);
 *(void **)puVar3 = &PTR__RTTIBase_00013ecc;
 piVar4 = operator_new(4);
 *(void **)piVar4 = &PTR__RTTIBase_00013ee0;
 iVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator_delete(puVar3);
 (*(destructor_func *)(*(void ***)piVar4)[1])(piVar4);
 printf(&DAT_000121ba,iVar5 + 0xe);
 return;
}



/* Function: main @ 00011810 */

int main(void)

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



/* Function: template_max_double @ 11840 */

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



/* Function: Container @ 00011880 */

/* Container_int::Container() */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011890 */

/* Container_int::push(int) */

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

/* Container_int::get(int) const */

int Container_int_get(Container_int *this,int param_1)

{
 int uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 000118d0 */

/* Container_int::getSize() const */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 000118e0 */

/* Container_double::Container() */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000118f0 */

/* Container_double::push(double) */

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

/* Container_double::get(int) const */

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

/* Container_double::getSize() const */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00011940 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
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
 operator_delete(this);
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
