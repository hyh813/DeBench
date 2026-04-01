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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Ghidra undefined types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef uint8_t undefined7;

/* Include C library headers */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* C++ runtime function declarations (compatible with both C and C++ modes) */
extern unsigned char completed_0;
extern void *__dso_handle;
void __cxa_finalize(void*);
void deregister_tm_clones(void);
void __cxa_atexit(void (*destructor)(void*), void* arg, void* dso_handle);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* thrown_exception, void* type_info, void* (*destructor)(void*));

/* Forward declarations for C++ type info */
struct __class_type_info;
extern void* int_typeinfo;

/* Forward declarations for C++ classes - use these for function prototypes */
struct Base;
struct Derived;
struct MultiDiamond;
struct DiamondDerived;
struct BaseException;
struct DerivedException;
struct LifecycleClass;
struct SimpleClass;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;

/* Forward declarations for C++ operators */
void* operator_new(size_t size);
void operator_delete(void* ptr);
void* __dynamic_cast(void* ptr, void* src_type, void* dst_type, long src_typeinfo);

/* Define std namespace for iostream initialization */
struct std_ios_base_Init {
    void* vtable;
};
struct ios_base_Init {
    void* vtable;
};
/* std::ios_base_Init instance for iostream initialization */
struct std_ios_base_Init std___ioinit;

/* Define RTTIBase::typeinfo for RTTI */
void* RTTIBase_typeinfo;
void* RTTIDerivedA_typeinfo;
void* RTTIDerivedB_typeinfo;

/* Forward declare methods for C++ classes - defined later as C functions */
void Base_dtor(struct Base* this);
int Base_virtual_method(struct Base* this, int x);
void Derived_dtor(struct Derived* this);
void LifecycleClass_ctor(struct LifecycleClass* this);
void LifecycleClass_dtor(struct LifecycleClass* this);
int Point_equals(struct Point* this, struct Point* other);
void RTTIBase_dtor(struct RTTIBase* this);
int RTTIBase_getType(struct RTTIBase* this);
void RTTIDerivedA_dtor(struct RTTIDerivedA* this);
int RTTIDerivedA_getType(struct RTTIDerivedA* this);
void RTTIDerivedB_dtor(struct RTTIDerivedB* this);
int RTTIDerivedB_getType(struct RTTIDerivedB* this);

/* Define Base class with virtual table */
struct Base {
    void** _vptr_Base;
};

/* Define Derived class */
struct Derived {
    void** _vptr_Base;
    int value;
};

/* Define LifecycleClass with static member */
struct LifecycleClass {
};
int LifecycleClass_instance_count = 0;

/* Define SimpleClass */
struct SimpleClass {
    int value;
};

/* Define Point class */
struct Point {
    int x;
    int y;
};

/* Define RTTIBase class */
struct RTTIBase {
    void** _vptr_RTTIBase;
};

/* Define RTTIDerivedA class */
struct RTTIDerivedA {
    void** _vptr_RTTIDerivedA;
};

/* Define RTTIDerivedB class */
struct RTTIDerivedB {
    void** _vptr_RTTIDerivedB;
};

/* Define Container template class */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* C++ type info structures (for RTTI) - no virtual in C */
struct __class_type_info {
    void* vtable;
};
struct __pbase_type_info {
    void* vtable;
};

/* Define RTTI type info symbols */
extern void* PTR__RTTIBase_00111d58;
extern void* PTR__RTTIBase_00111d80;
extern void* PTR__RTTIDerivedA_00111d80;
extern void* PTR__RTTIDerivedB_00111d98;

/* RTTI type info structures */
struct __class_type_info type_info_for__RTTIBase;
struct __class_type_info type_info_for__RTTIDerivedA;
struct __class_type_info type_info_for__RTTIDerivedB;

/* RTTI typeinfo symbols */
void* RTTIBase_typeinfo = &type_info_for__RTTIBase;
void* RTTIDerivedA_typeinfo = &type_info_for__RTTIDerivedA;
void* RTTIDerivedB_typeinfo = &type_info_for__RTTIDerivedB;
void* int_typeinfo = 0;

/* Define string constants */
const char* DAT_00101680 = "Testing C++ features:\n";
const char* DAT_00101529 = "Member function call: %d\n";
const char* DAT_00101547 = "Constructor/destructor: %d\n";
const char* DAT_00101563 = "Virtual function: %d\n";
const char* DAT_0010157f = "Multiple inheritance: %d\n";
const char* DAT_0010159b = "Diamond inheritance: %d\n";
const char* DAT_001015b8 = "Operator overload: %d\n";
const char* DAT_001015d4 = "Template function: %d\n";
const char* DAT_001015f0 = "Template class: %d\n";
const char* DAT_0010160c = "Lambda: %d\n";
const char* DAT_00101628 = "Exception: %d\n";
const char* DAT_00101645 = "Smart pointer: %d\n";
const char* DAT_00101662 = "RTTI: %d\n";

/* Define undefined type */
typedef uint64_t undefined;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_Os_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* Initialize std::ios_base::Init - call the constructor */
 ((void (*)(void))(*(code *)((intptr_t)&std___ioinit + 8)))();
 __cxa_atexit((void (*)(void*))((intptr_t)&std___ioinit + 0x10),&std___ioinit,&__dso_handle);
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
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(struct Base *obj, int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**(int (**)(struct Base*, unsigned long))obj->_vptr_Base)(obj, (unsigned long)(unsigned int)x);
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
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001011b0 */

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



/* Function: test_cpp_rtti @ 001011b8 */

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
 *puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 (**(code **)(*plVar2 + 8))(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 puts(&DAT_00101680);
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
 sVar2 = strlen((char *)((ulong)&local_38 | 4));
 printf(&DAT_00101529,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(&DAT_00101547,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(&DAT_00101563,0x2a);
 printf(&DAT_0010157f,0x47);
 printf(&DAT_0010159b,0x28a);
 printf(&DAT_001015b8,0x16);
 printf(&DAT_001015d4,0x27);
 printf(&DAT_001015f0,0x10);
 printf(&DAT_0010160c,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_00101628,(ulong)uVar1);
 printf(&DAT_00101645,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(&DAT_00101662,(ulong)uVar1);
 return;
}



/* Function: main @ 001013a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 001013bc */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 001013c8 */

double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001013d4 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Container @ 001013e8 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001013f0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0010140c */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 0010142c */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00101434 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 0010143c */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = value;
 this->size = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00101458 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 00101474 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 0010147c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101480 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00101488 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010148c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101490 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
