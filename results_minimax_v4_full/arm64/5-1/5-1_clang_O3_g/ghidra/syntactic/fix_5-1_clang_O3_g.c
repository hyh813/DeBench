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
/* Remove duplicate ptrdiff_t - already defined in stddef.h */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)();

/* C includes */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Forward declarations for classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;
struct Container;

/* Container template class stubs */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* RTTI type info declarations */
struct type_info {
    const char *type_name;
    void *(*__rtti)(void*, void*, void*);
};
typedef struct type_info typeinfo;

/* Forward declarations for C++ classes with vtables */
struct Base {
    void **_vptr_Base;
};
typedef struct Base Base;

struct Derived {
    void **_vptr_Derived;
};
typedef struct Derived Derived;

struct LifecycleClass {
    void **_vptr_LifecycleClass;
};
typedef struct LifecycleClass LifecycleClass;
static int LifecycleClass_instance_count;

struct RTTIBase {
    void **_vptr_RTTIBase;
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    void **_vptr_RTTIDerivedA;
    void (*destructor)(void*);
    int (*getType)(void*);
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    void **_vptr_RTTIDerivedB;
    void (*destructor)(void*);
    int (*getType)(void*);
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* C++ standard library stubs for C compilation - single definition */
struct InitStub {
    char data[1];
};
static struct InitStub std___ioinit;

/* std namespace stubs - converted to C structs */
struct std_ios_base_Init {
    char placeholder;  /* C structs can't have functions */
};
typedef struct std_ios_base_Init Init;

/* std::ios_base::Init::Init - call the Init method on std___ioinit */
void Init_Constructor(struct std_ios_base_Init *this) {}

/* std::ios_base::Init::~Init */
void Init_Destructor(struct std_ios_base_Init *this) {}

/* String literals for printf statements */
char DAT_00101734[] = "Testing C++ OO Features:\n";
char DAT_001015dd[] = "test_cpp_member_func: %d\n";
char DAT_001015fb[] = "test_cpp_constructor: %d\n";
char DAT_00101617[] = "test_cpp_virtual_func: %d\n";
char DAT_00101633[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_0010164f[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_0010166c[] = "test_cpp_operator_overload: %d\n";
char DAT_00101688[] = "test_cpp_template_func: %d\n";
char DAT_001016a4[] = "test_cpp_template_class: %d\n";
char DAT_001016c0[] = "test_cpp_lambda: %d\n";
char DAT_001016dc[] = "test_cpp_exception: %d\n";
char DAT_001016f9[] = "test_cpp_smart_ptr: %d\n";
char DAT_00101716[] = "test_cpp_rtti: %d\n";

/* Typeinfo definitions */
typeinfo int_typeinfo = {"int", 0};
typeinfo RTTIBase_typeinfo = {"RTTIBase", 0};
typeinfo RTTIDerivedA_typeinfo = {"RTTIDerivedA", 0};
typeinfo RTTIDerivedB_typeinfo = {"RTTIDerivedB", 0};

/* std namespace stubs - converted to C */
/* Note: std_ios_base_Init already defined above */

/* C++ exception and runtime functions */
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void __cxa_begin_catch(void*);
void __cxa_end_catch();

/* CRT stub functions */
void deregister_tm_clones(void);

/* Global variable */
char completed_0;

/* C++ runtime functions */
void __cxa_finalize(void *);
int __cxa_atexit(void (*)(void*), void*, void*);
void* __dso_handle;

/* Memory allocation stubs */
void* operator_new(size_t);
void operator_delete(void*);

/* RTTI dynamic_cast */
void* __dynamic_cast(void*, typeinfo*, typeinfo*, unsigned long);

/* RTTI type info pointers */
void* PTR__RTTIBase_00111d58;
void* PTR__RTTIBase_00111d80;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


/* Ghidra type definitions */
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
/* undefined7 is 7 bytes - we'll use int to represent it for simple assignments */
typedef int32_t undefined7;
typedef int8_t undefined; /* for general undefined values */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* std::ios_base::Init::Init - call the Init method on std___ioinit */
 Init_Constructor((struct std_ios_base_Init *)&std___ioinit);
 __cxa_atexit((void(*)(void*))Init_Destructor,&std___ioinit,&__dso_handle);
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
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
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
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete((void*)puVar1);
 (**(code **)(*plVar2 + 8))(plVar2);
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
 
 puts(&DAT_00101734);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_001015fb,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
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
 *puVar3 = &PTR__RTTIBase_00111d58;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00111d80;
 lVar5 = (long)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x1e;
 if (lVar5 != 0) {
 iVar6 = 0x82;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 operator_delete(puVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 printf(&DAT_00101716,(ulong)(iVar6 + 0xe));
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



/* Function: Container_int_Constructor @ 0010149c */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Constructor(struct Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 001014a4 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container_int_push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get @ 001014c0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container_int_get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 001014e0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container_int_getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container_double_Constructor @ 001014e8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container_double_Constructor(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 001014f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container_double_push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = value;
 this->size = iVar1 + 1;
 }
 return;
}



/* Function: Container_double_get @ 0010150c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container_double_get(Container<double> *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 00101528 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container_double_getSize(Container<double> *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_destructor @ 00101530 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101534 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 0010153c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 00101540 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101544 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
