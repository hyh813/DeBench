/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

/* Explicit standard library function declarations */
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void exit(int status);

/* Ghidra-specific types */
typedef unsigned int undefined4;
typedef unsigned char undefined;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations and type definitions for C++ decompilation */

typedef void (*code)(void);

/* Standard library stubs */
void *__dso_handle = 0;

/* Memory allocation function declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr);

/* Memory allocation implementation */
void *operator_new(size_t size)
{
    return malloc(size);
}

void operator_delete(void *ptr)
{
    if (ptr != NULL) {
        free(ptr);
    }
}

/* Init structure for std::ios_base::Init */
struct Init {
    void **vtable;
};

struct Init std___ioinit = {0};
struct std_ios_base_Init {
    struct Init *vtable;
};
struct std_type_info {
    const char *name;
};

/* RTTI type_info for int */
struct std_type_info int_typeinfo = {"int"};

/* C++ runtime functions */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub implementation - ignore registration */
    return 0;
}

void *__cxa_allocate_exception(size_t size)
{
    /* Stub implementation - allocate memory for exception */
    return malloc(size);
}

void __cxa_throw(void *obj, void *typeinfo, void (*dest)(void *))
{
    /* Stub implementation - cannot properly implement without C++ runtime */
    /* For compilation purposes, we'll just abort */
    exit(1);
}
void *__dynamic_cast(void *obj, void *src, void *dest, int offset)
{
    /* Stub implementation - always return NULL indicating cast failed */
    return NULL;
}

/* Safe wrapper for calling code function pointers */
static void safe_call_code(void *obj, void *func_ptr)
{
    void (*func)(void *) = (void (*)(void *))func_ptr;
    if (func != NULL && obj != NULL) {
        func(obj);
    }
}

/* Vtable structure for virtual function calls */
struct vtable {
    void *destructor;
    void *virtual_func1;
    void *virtual_func2;
    void *virtual_func3;
    void *virtual_func4;
};

/* Helper for calling virtual methods through vtable */
static void call_virtual_method(void *obj, int vtable_offset)
{
    struct vtable **vtbl = (struct vtable **)obj;
    if (vtbl && *vtbl) {
        void (*method)(void *) = (void (*)(void *))((void *)(*vtbl) + vtable_offset);
        if (method) {
            method(obj);
        }
    }
}

/* Virtual function pointer type */
typedef int (*VirtualFunc)(void *obj, int x);

/* Base class with vtable */
struct Base {
    void **_vptr_Base;
};

/* Derived class */
struct Derived {
    struct Base base;
};

/* Multiple inheritance classes */
struct BaseA {
    void **_vptr_BaseA;
};

struct BaseB {
    void **_vptr_BaseB;
};

struct MultiDerived {
    struct BaseA baseA;
    struct BaseB baseB;
};

/* Diamond inheritance */
struct VirtualBase {
    void **_vptr_VirtualBase;
};

struct DiamondDerived {
    struct VirtualBase virtualBase;
};

/* SimpleClass */
struct SimpleClass {
    char data[32];
    int value;
};

/* LifecycleClass */
struct LifecycleClass {
};

int LifecycleClass_instance_count = 0;

/* Point class */
struct Point {
    int x;
    int y;
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

/* RTTI classes */
struct RTTIBase {
    void **vptr;
};

struct RTTIDerivedA {
    struct RTTIBase base;
};

struct RTTIDerivedB {
    struct RTTIBase base;
};

/* Static typeinfo definitions */
struct std_type_info RTTIBase_typeinfo = {"RTTIBase"};
struct std_type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
struct std_type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB"};

/* Vtable pointers */
void *PTR__RTTIBase_00013ecc = 0;
void *PTR__RTTIBase_00013ee0 = 0;

/* Data references */
char DAT_000121d8[] = "Testing C++ Object Oriented Features\n";
char DAT_00012081[] = "test_cpp_member_func: %d\n";
char DAT_0001209f[] = "test_cpp_constructor: %d\n";
char DAT_000120bb[] = "test_cpp_virtual_func: %d\n";
char DAT_000120d7[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_000120f3[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_00012110[] = "test_cpp_operator_overload: %d\n";
char DAT_0001212c[] = "test_cpp_template_func: %d\n";
char DAT_00012148[] = "test_cpp_template_class: %d\n";
char DAT_00012164[] = "test_cpp_lambda: %d\n";
char DAT_00012180[] = "test_cpp_exception: %d\n";
char DAT_0001219d[] = "test_cpp_smart_ptr: %d\n";
char DAT_000121ba[] = "test_cpp_rtti: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub - original code attempted null pointer dereference */
 return;
}



/* Function: std_ios_base_Init_Init @ 00011140 */

void std_ios_base_Init_Init(struct Init *this)

{
  this->vtable = (struct Init *)0x13000;
  return;
}

/* Function: std_ios_base_Init_Destroy @ 00011140 */

void std_ios_base_Init_Destroy(void *this_ptr)

{
  struct Init *this = (struct Init *)this_ptr;
  this->vtable = (struct Init *)0;
  return;
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void global_sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((struct Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Destroy,&std___ioinit,&__dso_handle);
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

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 
 if (obj && obj->_vptr_Base) {
     int (*vfunc)(struct Base *, int) = (int (*)(struct Base *, int))*obj->_vptr_Base;
     iVar1 = vfunc(obj, x);
 } else {
     iVar1 = 0;
 }
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0; /* Unreachable but needed for compilation */
}



/* Function: test_cpp_smart_ptr @ 00011530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 void **puVar1;
 void **piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (void **)operator_new(4);
 *puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = (void **)operator_new(4);
 *piVar2 = &PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = (int)(long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)(long)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 /* Skip virtual destructor call - simplified for compilation */
 operator_delete(piVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 void **puVar3;
 void **piVar4;
 int iVar5;
 int iVar6;
 char local_30 [32];
 
 puts(&DAT_000121d8);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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
 printf(&DAT_00012081,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(&DAT_0001209f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 iVar2 = test_cpp_exception();
 printf(&DAT_00012180,iVar2);
 printf(&DAT_0001219d,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (void **)operator_new(4);
 *puVar3 = &PTR__RTTIBase_00013ecc;
 piVar4 = (void **)operator_new(4);
 *piVar4 = &PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar2 = (int)(long)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = (int)(long)__dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar2 = iVar6 + 200;
 if (iVar5 == 0) {
 iVar2 = iVar6;
 }
 operator_delete(puVar3);
 /* Skip virtual destructor call - simplified for compilation */
 operator_delete(piVar4);
 printf(&DAT_000121ba,iVar2 + 0xe);
 return;
}



/* Function: main @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00011830 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 00011840 */

double template_max_double(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap_int @ 00011860 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Container @ 00011880 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 00011890 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get @ 000118b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 000118d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_Container @ 000118e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Container(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 000118f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_double_get @ 00011910 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 00011930 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_Destroy @ 00011940 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_Destroy(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00011970 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_Destroy @ 00011980 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_Destroy(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_Destroy @ 00011990 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_Destroy(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 000119c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
