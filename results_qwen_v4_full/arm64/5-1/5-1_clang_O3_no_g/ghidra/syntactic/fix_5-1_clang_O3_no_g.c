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

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char undefined7[7];
typedef unsigned long long undefined8;

/* Forward declarations for C++ classes */
typedef struct Base Base;
struct Base {
    undefined8 *vtable;
};

typedef struct Init Init;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    undefined8 *vtable;
};

typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    undefined8 *vtable;
};

typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    undefined8 *vtable;
};
typedef struct Container_int Container_int;
struct Container_int {
    undefined8 vtable_ptr;
    int data[10];
    int size;
};

typedef struct Container_double Container_double;
struct Container_double {
    undefined8 vtable_ptr;
    double data[10];
    int size;
};

/* Definitions for RTTI pointers */
undefined8 PTR__RTTIBase_00111d58 = 0;
undefined8 PTR__RTTIBase_00111d80 = 0;

/* Definitions for typeinfo */
undefined8 RTTIBase_typeinfo = 0;
undefined8 RTTIDerivedA_typeinfo = 0;
undefined8 RTTIDerivedB_typeinfo = 0;

/* Additional RTTI structures */
undefined8 _ZTI8RTTIBase = 0;
undefined8 _ZTI12RTTIDerivedA = 0;
undefined8 _ZTI12RTTIDerivedB = 0;

/* External declarations for data strings */
char DAT_00101734[] = "Test output";
char DAT_001015dd[] = "%d\n";
char DAT_001015fb[] = "%d\n";
char DAT_00101617[] = "%d\n";
char DAT_00101633[] = "%d\n";
char DAT_0010164f[] = "%d\n";
char DAT_0010166c[] = "%d\n";
char DAT_00101688[] = "%d\n";
char DAT_001016a4[] = "%d\n";
char DAT_001016c0[] = "%d\n";
char DAT_001016dc[] = "%d\n";
char DAT_001016f9[] = "%d\n";
char DAT_00101716[] = "%d\n";

/* C++ runtime function stub implementations */
void __cxa_atexit(void (*a)(void), void *b, void *c) { }
void __cxa_finalize(void *a) { }
void __cxa_throw(void *a, void *b, void *c) { for(;;); }
void __cxa_begin_catch(void *a) { }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { for(;;); }
void *operator_new(unsigned long a) { return (void *)0; }
void operator_delete(void *a) { }
long __dynamic_cast(void *a, void *b, void *c, int d) { return 0; }
void *__cxa_allocate_exception(unsigned long a) { return operator_new(a); }



/* Standard library function declarations */
extern unsigned long strlen(const char *);
extern int printf(const char *, ...);
extern int puts(const char *);

/* Global variable for completion flag */
char completed_0 = 0;

/* Global variable for LifecycleClass instance count */
int LifecycleClass_instance_count = 0;

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
 (*(code *)(undefined8 *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Forward declarations for test functions */
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1,int param_2);
undefined8 test_cpp_virtual_func(void);
undefined8 test_cpp_multiple_inheritance(void);
undefined8 test_cpp_diamond_inheritance(void);
undefined8 test_cpp_operator_overload(void);
undefined8 test_cpp_template_func(void);
undefined8 test_cpp_template_class(void);
undefined8 test_cpp_lambda(void);
void test_cpp_exception(void);
undefined8 test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
int test_cpp_oo_features(void);
int template_max_int(int param_1,int param_2);
double template_max_double(double param_1,double param_2);
void template_swap_int(int *param_1,int *param_2);
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this,int param_1);
undefined4 Container_int_get(Container_int *this,int param_1);
undefined4 Container_int_getSize(Container_int *this);
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this,double param_1);
undefined1 *Container_double_get(Container_double *this,int param_1);
undefined4 Container_double_getSize(Container_double *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
undefined8 RTTIDerivedA_getType(void);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
undefined8 RTTIDerivedB_getType(void);

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
 ((void (*)(Base *, int))**(undefined8 **)param_1)(param_1,param_2);
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
 __cxa_throw(puVar1,(void *)0,0);
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
 
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
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
 printf(DAT_001016dc,0x2a);
 printf(DAT_001016f9,0x2bf);
 puVar4 = (undefined8 *)operator_new(8);
 *puVar4 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 iVar1 = printf(DAT_00101716,(ulong)(iVar1 + 0xe));
 return iVar1;
}



/* Function: main @ 00101458 */

int main(void)

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



/* Function: Container_int_Container @ 0010149c */

/* Container<int>::Container() */

void Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 001014a4 */

/* Container<int>::push(int) */

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



/* Function: Container_int_get @ 001014c0 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 001014e0 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double_Container @ 001014e8 */

/* Container<double>::Container() */

void Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 001014f0 */

/* Container<double>::push(double) */

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



/* Function: Container_double_get @ 0010150c */

/* Container<double>::get(int) const */

undefined1 *Container_double_get(Container_double *this,int param_1)

{
 ulong uVar1;
 static undefined1 auVar2 [16];
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)(uint)param_1 * 8);
 }
 auVar2[8] = 0; auVar2[9] = 0; auVar2[10] = 0; auVar2[11] = 0; auVar2[12] = 0; auVar2[13] = 0; auVar2[14] = 0; auVar2[15] = 0;
 auVar2[0] = uVar1 & 0xFF; auVar2[1] = (uVar1 >> 8) & 0xFF; auVar2[2] = (uVar1 >> 16) & 0xFF; auVar2[3] = (uVar1 >> 24) & 0xFF;
 auVar2[4] = (uVar1 >> 32) & 0xFF; auVar2[5] = (uVar1 >> 40) & 0xFF; auVar2[6] = (uVar1 >> 48) & 0xFF; auVar2[7] = (uVar1 >> 56) & 0xFF;
 return auVar2;
}



/* Function: Container_double_getSize @ 00101528 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101530 */

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



/* Function: ~RTTIBase @ 0010153c */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00101540 */

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




/* Total functions decompiled: 41 */
