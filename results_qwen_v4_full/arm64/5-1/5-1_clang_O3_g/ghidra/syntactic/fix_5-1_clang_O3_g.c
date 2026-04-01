/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* Standard library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern void *memset(void *s, int c, size_t n);

/* Ghidra decompiler placeholder types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char undefined7[7];
typedef unsigned long long undefined8;

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Forward declarations for C++ classes */
typedef struct Base Base;
struct Base {
    void **_vptr_Base;
};
static void *_vptr_Base_table = 0;

/* Forward declarations for other classes */
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    int instance_count;
};

/* Global instance of LifecycleClass */
LifecycleClass LifecycleClass_instance = {0};

/* RTTI class declarations */
typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    void **_vptr_RTTIBase;
};

typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    void **_vptr_RTTIDerivedA;
};
static void *_vptr_RTTIDerivedA_table = 0;

typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    void **_vptr_RTTIDerivedB;
};
static void *_vptr_RTTIDerivedB_table = 0;

/* External declarations */
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;
void *typeinfo_RTTIBase = 0;
void *typeinfo_RTTIDerivedA = 0;
void *typeinfo_RTTIDerivedB = 0;
void *__dso_handle = 0;
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void deregister_tm_clones(void);
static void *__cxa_allocate_exception(size_t size) { return malloc(size); }
static void __cxa_throw(void *exc, void *type, void *dest) { while(1); }
static void *operator_new(size_t size) { return malloc(size); }
static void operator_delete(void *ptr) { free(ptr); }
static long __dynamic_cast(void *obj, void *src_type, void *dest_type, int flags) { return 0; }
static int __cxa_atexit(void (*func)(void), void *arg, void *dso) { return 0; }
static void __cxa_finalize(void *dso) { }

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

/* Global variables */
char completed_0 = 0;

/* std namespace declarations */
typedef struct Init Init;
struct Init {
    int _Placeholder;
};
typedef struct StdNamespace StdNamespace;
struct StdNamespace {
    Init __ioinit;
};
StdNamespace g_std_namespace = {{0}};

/* Init function declarations */
void Init_Init(Init *);
void Init_destroy(Init *);

/* Init function implementations */
void Init_Init(Init *this)
{
 this->_Placeholder = 0;
 return;
}

void Init_destroy(Init *this)
{
 return;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 Init_Init((Init *)&g_std_namespace.__ioinit);
 __cxa_atexit((void (*)(void))Init_destroy,&g_std_namespace.__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




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
 
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_15 = 0;
 local_38 = 10;
 memset(uStack_2c, 0, sizeof(uStack_2c));
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 memset(uStack_24, 0, sizeof(uStack_24));
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance.instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base *, int))(*obj->_vptr_Base))(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101088 */

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



/* Function: test_cpp_multiple_inheritance @ 00101090 */

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



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

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



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

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
 /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0,0);
 /* unreachable - throw does not return */
 return 0;
}



/* Function: test_cpp_smart_ptr @ 001011bc */

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



/* Function: test_cpp_rtti @ 001011c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,typeinfo_RTTIBase,typeinfo_RTTIDerivedA,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,typeinfo_RTTIBase,typeinfo_RTTIDerivedB,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 undefined4 local_58;
 undefined8 local_54;
 undefined7 uStack_4c;
 undefined1 uStack_45;
 undefined7 uStack_44;
 undefined8 uStack_3d;
 undefined1 local_35;
 
 puts(DAT_00101734);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_35 = 0;
 local_58 = 10;
 memset(uStack_4c, 0, sizeof(uStack_4c));
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 memset(uStack_44, 0, sizeof(uStack_44));
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_001015fb,(ulong)(LifecycleClass_instance.instance_count * 0x3e9 + 0x15));
 printf(DAT_00101617,0x2a);
 printf(DAT_00101633,0x47);
 printf(DAT_0010164f,0x28a);
 printf(DAT_0010166c,0x16);
 printf(DAT_00101688,0x27);
 printf(DAT_001016a4,0x10);
 printf(DAT_001016c0,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_001016dc,(ulong)uVar1);
 printf(DAT_001016f9,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = operator_new(8);
 *puVar3 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00111d80;
 lVar5 = __dynamic_cast(puVar3,typeinfo_RTTIBase,typeinfo_RTTIDerivedA,0);
 iVar6 = 0x1e;
 if (lVar5 != 0) {
 iVar6 = 0x82;
 }
 lVar5 = __dynamic_cast(plVar4,typeinfo_RTTIBase,typeinfo_RTTIDerivedB,0);
 if (lVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 operator_delete(puVar3);
 operator_delete(plVar4);
 printf(DAT_00101716,(ulong)(iVar6 + 0xe));
 return;
}



/* Function: main @ 00101458 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101470 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 0010147c */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00101488 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 0010149c */

void Container_int_Constructor(void *this)

{
 ((int*)this)[0] = 0;
 return;
}



/* Function: push_int @ 001014a4 */

void Container_int_push(void *this,int value)

{
 int iVar1;
 
 iVar1 = ((int*)this)[0];
 if (iVar1 < 10) {
 ((int*)this)[0] = iVar1 + 1;
 ((int*)this)[iVar1 + 1] = value;
 }
 return;
}



/* Function: get_int @ 001014c0 */

int Container_int_get(void *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < ((int*)this)[0])) {
 iVar1 = ((int*)this)[(uint)idx + 1];
 }
 return iVar1;
}



/* Function: getSize_int @ 001014e0 */

int Container_int_getSize(void *this)

{
 return ((int*)this)[0];
}



/* Function: Container_double @ 001014e8 */

void Container_double_Constructor(void *this)

{
 ((int*)this)[0] = 0;
 return;
}



/* Function: push_double @ 001014f0 */

void Container_double_push(void *this,double value)

{
 int iVar1;
 
 iVar1 = ((int*)this)[0];
 if (iVar1 < 10) {
 ((double*)this)[iVar1 + 1] = value;
 ((int*)this)[0] = iVar1 + 1;
 }
 return;
}



/* Function: get_double @ 0010150c */

double Container_double_get(void *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < ((int*)this)[0])) {
 dVar1 = ((double*)this)[(uint)idx + 1];
 }
 return dVar1;
}



/* Function: getSize_double @ 00101528 */

int Container_double_getSize(void *this)

{
 return ((int*)this)[0];
}



/* Function: RTTIDerivedA_destructor @ 00101530 */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101534 */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 0010153c */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 00101540 */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101544 */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
