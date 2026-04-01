/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, uintptr_t, intptr_t, intmax_t, uintmax_t provided by system headers */
typedef long ptrdiff_t;

/* Ghidra-specific types */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef void* code;

/* Standard library includes */
#include <string.h>
#include <stdio.h>

/* Forward declarations for C++ class stubs */
struct Base;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;
struct Init;

/* Base class stub */
struct Base {
    void (**_vptr_Base)(void);
};

struct ios_base_Init {
    void (*init_func)(struct Init*);
    void (*destroy_func)(void);
};

struct std_ios_base {
    struct ios_base_Init Init;
};

/* Global std_ios_base instance */
struct std_ios_base std_ios_base_instance = { { NULL, NULL } };

/* std___ioinit global */
void* std___ioinit = NULL;

/* RTTI class stubs */
struct RTTIBase {
    void **vptr;
};

struct RTTIDerivedA {
    void **vptr;
};

struct RTTIDerivedB {
    void **vptr;
};

/* Type info stubs */
extern struct type_info {
    void* vptr;
} RTTIBase_typeinfo, RTTIDerivedA_typeinfo, RTTIDerivedB_typeinfo, int_typeinfo;

/* Type info instances */
struct type_info RTTIBase_typeinfo = { NULL };
struct type_info RTTIDerivedA_typeinfo = { NULL };
struct type_info RTTIDerivedB_typeinfo = { NULL };
struct type_info int_typeinfo = { NULL };

/* LifecycleClass stub */
struct LifecycleClass {
    static int instance_count;
};

/* Static member definition */
int LifecycleClass::instance_count = 0;

/* Container template instantiations */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* C++ runtime stub declarations */
extern void* std___ioinit;
extern void* __dso_handle;
extern int __cxa_atexit(void (*)(void*), void*, void*);
extern void* __cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, struct type_info*, void (*)(void*));
extern void* __dynamic_cast(void*, struct type_info*, struct type_info*, ptrdiff_t);

/* Operator new/delete stubs */
void* operator_new(size_t size) {
    /* Stub implementation */
    (void)size;
    return NULL;
}
void operator_delete(void* ptr) {
    /* Stub implementation */
    (void)ptr;
}

/* __cxa_atexit stub */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) {
    /* Stub implementation */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* __cxa_allocate_exception stub */
void* __cxa_allocate_exception(size_t size) {
    /* Stub implementation - just allocate memory */
    (void)size;
    return NULL;
}

/* External data references */
extern char DAT_000111f5[];
extern char DAT_0001134c[];
extern char DAT_00011213[];
extern char DAT_0001122f[];
extern char DAT_0001124b[];
extern char DAT_00011267[];
extern char DAT_000112a0[];
extern char DAT_000112bc[];
extern char DAT_000112d8[];
extern char DAT_000112f4[];
extern char DAT_00011311[];
extern char DAT_0001132e[];

/* Vtable stubs */
void* PTR__RTTIBase_00021ed8 = NULL;  /* RTTIBase vtable */
void* PTR__RTTIBase_00021eec = NULL;  /* RTTIDerivedA vtable */

/* String data constants */
/* Moved DAT_000111f5 and DAT_0001124b to extern declarations above */
char DAT_000111f5[] = "%d\n";
char DAT_00011213[] = "%d\n";
char DAT_0001122f[] = "%d\n";
char DAT_0001124b[] = "%d\n";
char DAT_00011267[] = "%d\n";
char DAT_00011284[] = "%d\n";
char DAT_000112a0[] = "%d\n";
char DAT_000112bc[] = "%d\n";
char DAT_000112d8[] = "%d\n";
char DAT_000112f4[] = "%d\n";
char DAT_00011311[] = "%d\n";
char DAT_0001134c[] = "";
char DAT_0001132e[] = "%d\n";

/* C++ runtime stub declarations */
extern void* std___ioinit;
extern void* __dso_handle;
extern int __cxa_atexit(void (*)(void*), void*, void*);


/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O2_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 ((struct ios_base_Init *)&std_ios_base_instance)->init_func((struct Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))((struct ios_base_Init *)&std_ios_base_instance)->destroy_func,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(void*))(*(void**)obj->_vptr_Base))(obj);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

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



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

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



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

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



/* Function: test_cpp_lambda @ 00010bc0 */

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



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

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



/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (*(void (**)(void*))((char*)piVar2 + 4))(piVar2);
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

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined2 local_1c;
 undefined1 local_1a;
 undefined1 local_19;
 
 puts((const char*)DAT_0001134c);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf((const char*)DAT_000111f5,(int)(sVar1 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf((const char*)DAT_00011213,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf((const char*)DAT_0001122f,0x2a);
 printf((const char*)DAT_0001124b,0x47);
 printf((const char*)DAT_00011267,0x28a);
 printf((const char*)DAT_00011284,0x16);
 printf((const char*)DAT_000112a0,0x27);
 printf((const char*)DAT_000112bc,0x10);
 printf((const char*)DAT_000112d8,0x55);
 test_cpp_exception();
 iVar2 = 0;
 printf((const char*)DAT_000112f4,(int)iVar2);
 printf((const char*)DAT_00011311,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4 *)operator_new(4);
 *puVar3 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar2 = (int)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = (int)__dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (*(void (**)(void*))((char*)piVar4 + 4))(piVar4);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 if (iVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
	printf((const char*)DAT_0001132e,(int)(iVar6 + 0xe));
	return;
}



/* Function: main @ 00010fac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010fc0 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00010fcc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fe0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00011000 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011014 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *obj)

{
 obj->size = 0;
 return;
}



/* Function: push @ 00011020 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *obj,int value)

{
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->size = iVar1 + 1;
 obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011038 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *obj,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < obj->size) {
 iVar1 = obj->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011058 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *obj)

{
 return obj->size;
}



/* Function: Container @ 00011060 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *obj)

{
 obj->size = 0;
 return;
}



/* Function: push @ 0001106c */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *obj,double value)
{
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->data[iVar1] = value;
 obj->size = iVar1 + 1;
 }
}



/* Function: get @ 00011090 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *obj,int idx)
{
 if (idx < 0) {
 return 0.0;
 }
 if (idx >= obj->size) {
 return 0.0;
 }
 return *(double *)((char *)obj->data + idx * sizeof(double));
}



/* Function: getSize @ 000110bc */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *obj)

{
 return obj->size;
}



/* Function: ~RTTIDerivedA @ 000110c4 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *obj)

{
 operator_delete(obj);
 return;
}



/* Function: getType @ 000110c8 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *obj)

{
 return 1;
}



/* Function: ~RTTIBase @ 000110d0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *obj)

{
 return;
}



/* Function: ~RTTIDerivedB @ 000110d4 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *obj)

{
 operator_delete(obj);
 return;
}



/* Function: getType @ 000110d8 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *obj)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
