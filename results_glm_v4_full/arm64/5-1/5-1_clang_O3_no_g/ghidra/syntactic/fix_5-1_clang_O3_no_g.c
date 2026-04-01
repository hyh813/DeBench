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
typedef unsigned long ulong;
typedef unsigned int uint;
typedef void (*code)(void);

#define NULL ((void*)0)

/* Ghidra undefined type definitions */
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char undefined7[7];
typedef void *undefined;

/* Forward declarations */
struct Base;
struct LifecycleClass;

/* C++ runtime stub declarations */
struct ios_base_Init {
    int _dummy;
};
typedef struct ios_base_Init ios_base_Init;
extern ios_base_Init std___ioinit;
#define __ioinit std___ioinit
typedef ios_base_Init Init;



/* C++ runtime support declarations */
extern void *__dso_handle;
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_finalize(void *);

/* C++ exception handling declarations */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);

/* C++ memory management declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr);

/* Static variables */
extern char completed_0;

/* External data references */
extern char DAT_00101734[];
extern char DAT_001015dd[];
extern char DAT_001015fb[];
extern char DAT_00101617[];
extern char DAT_00101633[];
extern char DAT_0010164f[];
extern char DAT_0010166c[];
extern char DAT_00101688[];
extern char DAT_001016a4[];
extern char DAT_001016c0[];
extern char DAT_001016dc[];
extern char DAT_001016f9[];
extern char DAT_00101716[];

/* RTTI vtable pointers */
extern void *PTR__RTTIBase_00111d58;
extern void *PTR__RTTIBase_00111d80;

/* Constructor/destructor stubs */
void std_ios_base_Init_Init(Init *init);
void std_ios_base_Init_Destroy(Init *init);
void deregister_tm_clones(void);

void std_ios_base_Init_Init(Init *init) {
    (void)init;
}

void std_ios_base_Init_Destroy(Init *init) {
    (void)init;
}

void deregister_tm_clones(void) {
}

/* Standard library function declarations */
size_t strlen(const char *);
int puts(const char *);
int printf(const char *, ...);
void *malloc(size_t);
void free(void *);

/* C++ memory management implementations */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* Alias functions for C++ operator new/delete symbols */
void *operator_new_alias(size_t size) __asm__("_Znwm");
void *operator_new_alias(size_t size) {
    return operator_new(size);
}

void operator_delete_alias(void *ptr) __asm__("_ZdlPv");
void operator_delete_alias(void *ptr) {
    operator_delete(ptr);
}

long __dynamic_cast(void *obj, void *src_type, void *dst_type, ptrdiff_t src2dst_offset) {
    (void)obj;
    (void)src_type;
    (void)dst_type;
    (void)src2dst_offset;
    return 0;
}

/* Base class for virtual function tests */
struct Base {
    void **vtable;  // Virtual table pointer
};
typedef struct Base Base;

/* LifecycleClass with static instance count */
struct LifecycleClass {
};
typedef struct LifecycleClass LifecycleClass;

/* Static instance count for LifecycleClass */
extern int LifecycleClass_instance_count;

/* Container template instantiations */
struct Container_int {
    int data[10];
    int count;
};
typedef struct Container_int Container_int;

struct Container_double {
    double data[10];
    int count;
};
typedef struct Container_double Container_double;

/* RTTI type info structures */
struct RTTIBase {
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* C++ RTTI type_info structure */
struct type_info_t {
    void **vtable;
    const char *name;
};
typedef struct type_info_t type_info_t;

/* RTTI type info global variables */
const type_info_t RTTIBase_typeinfo = { NULL, "Base" };

const type_info_t RTTIDerivedA_typeinfo = { NULL, "RTTIDerivedA" };

const type_info_t RTTIDerivedB_typeinfo = { NULL, "RTTIDerivedB" };

const type_info_t int_typeinfo = { NULL, "int" };

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Destroy,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101014 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 local_15 = 0;
 local_38 = 10;
 uStack_2c[0] = 0; uStack_2c[1] = 0; uStack_2c[2] = 0; uStack_2c[3] = 0; uStack_2c[4] = 0; uStack_2c[5] = 0; uStack_2c[6] = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24[0] = 0; uStack_24[1] = 0; uStack_24[2] = 0; uStack_24[3] = 0; uStack_24[4] = 0; uStack_24[5] = 0; uStack_24[6] = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(void *, int))**(void ***)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001011bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001011c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 
 puVar1 = operator_new(8);
 *(void **)puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 *(void **)plVar2 = &PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(void *))*(void **)((void *)(*plVar2) + 8))(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 ulong uVar3;
 undefined8 *puVar4;
 long *plVar5;
 long lVar6;
 undefined4 local_58;
 undefined8 local_54;
 undefined7 uStack_4c;
 undefined1 uStack_45;
 undefined7 uStack_44;
 undefined8 uStack_3d;
 undefined1 local_35;
 
 puts(DAT_00101734);
 local_35 = 0;
 local_58 = 10;
 uStack_4c[0] = 0; uStack_4c[1] = 0; uStack_4c[2] = 0; uStack_4c[3] = 0; uStack_4c[4] = 0; uStack_4c[5] = 0; uStack_4c[6] = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44[0] = 0; uStack_44[1] = 0; uStack_44[2] = 0; uStack_44[3] = 0; uStack_44[4] = 0; uStack_44[5] = 0; uStack_44[6] = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
 printf(DAT_001015fb,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101617,0x2a);
 printf(DAT_00101633,0x47);
 printf(DAT_0010164f,0x28a);
 printf(DAT_0010166c,0x16);
 printf(DAT_00101688,0x27);
 printf(DAT_001016a4,0x10);
 printf(DAT_001016c0,0x55);
 test_cpp_exception();
 printf(DAT_001016dc,0);
 printf(DAT_001016f9,0x2bf);
 puVar4 = operator_new(8);
 *(void **)puVar4 = &PTR__RTTIBase_00111d58;
 plVar5 = operator_new(8);
 *(void **)plVar5 = &PTR__RTTIBase_00111d80;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 ((void (*)(void *))*(void **)((void *)(*plVar5) + 8))(plVar5);
 iVar1 = printf(DAT_00101716,(ulong)(iVar1 + 0xe));
 return iVar1;
}



/* Function: main @ 00101458 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101470 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 0010147c */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00101488 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 0010149c */

/* Container_int::Container() */

void Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push_int @ 001014a4 */

/* Container_int::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get_int @ 001014c0 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize_int @ 001014e0 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double @ 001014e8 */

/* Container_double::Container() */

void Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push_double @ 001014f0 */

/* Container_double::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}



/* Function: get_double @ 0010150c */

/* Container_double::get(int) const */

undefined8 Container_double_get(Container_double *this,int param_1)

{
 ulong uVar1;
 undefined8 uVar2;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)(unsigned int)param_1 * 8);
 }
 uVar2 = uVar1;
 return uVar2;
}



/* Function: getSize_double @ 00101528 */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: RTTIDerivedA_destructor @ 00101530 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101534 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 0010153c */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 00101540 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101544 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */



/* Data definitions */
char DAT_00101734[] = "All";
char DAT_001015dd[] = "Member: %lu\n";
char DAT_001015fb[] = "Constructor: %lu\n";
char DAT_00101617[] = "Virtual: %lu\n";
char DAT_00101633[] = "Multi: %lu\n";
char DAT_0010164f[] = "Diamond: %lu\n";
char DAT_0010166c[] = "Operator: %lu\n";
char DAT_00101688[] = "Template: %lu\n";
char DAT_001016a4[] = "TmplClass: %lu\n";
char DAT_001016c0[] = "Lambda: %lu\n";
char DAT_001016dc[] = "Exception: %lu\n";
char DAT_001016f9[] = "SmartPtr: %lu\n";
char DAT_00101716[] = "RTTI: %lu\n";

char completed_0 = 0;
int LifecycleClass_instance_count = 0;

/* C++ runtime symbols */
ios_base_Init std___ioinit;
void *__dso_handle = 0;

/* RTTI vtable definitions */
typedef void (*destructor_func)(void *);

struct vtable_t {
    void *type_info;
    destructor_func destructor;
};
typedef struct vtable_t vtable_t;

const vtable_t RTTIBase_vtable = { &RTTIBase_typeinfo, (destructor_func)RTTIBase_destructor };

const vtable_t RTTIDerivedA_vtable = { &RTTIDerivedA_typeinfo, (destructor_func)RTTIDerivedA_destructor };

const vtable_t RTTIDerivedB_vtable = { &RTTIDerivedB_typeinfo, (destructor_func)RTTIDerivedB_destructor };

const vtable_t int_vtable = { &int_typeinfo, NULL };

/* RTTI vtable pointers */
void *PTR__RTTIBase_00111d58 = (void *)&RTTIDerivedA_vtable;
void *PTR__RTTIBase_00111d80 = (void *)&RTTIDerivedB_vtable;

/* Total functions decompiled: 41 */
