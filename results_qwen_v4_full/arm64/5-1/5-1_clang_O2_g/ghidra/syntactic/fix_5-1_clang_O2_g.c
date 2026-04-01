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

/* CRT global variables */
static int __dso_handle = 0;
char completed_0 = 0;

/* CRT function declarations */
void __cxa_finalize(void *);
void deregister_tm_clones(void);
int __cxa_atexit(void (*)(void *), void *, void *);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, void *, void *);
void *operator_new(size_t);
void operator_delete(void *);
long __dynamic_cast(void *, void *, void *, int);

/* CRT function stub implementations */
void __cxa_finalize(void *dso) { (void)dso; }
void deregister_tm_clones(void) { }
int __cxa_atexit(void (*func)(void *), void *arg, void *dso) { (void)func; (void)arg; (void)dso; return 0; }
void *__cxa_allocate_exception(size_t size) { return (void *)0; }
void __cxa_throw(void *exc, void *type, void *dest) { (void)exc; (void)type; (void)dest; }
void *operator_new(size_t size) { (void)size; return (void *)0; }
void operator_delete(void *ptr) { (void)ptr; }
long __dynamic_cast(void *src, void *src_type, void *dst_type, int flags) { (void)src; (void)src_type; (void)dst_type; (void)flags; return 0; }

/* String function declarations */
size_t strlen(const char *);

/* String function stub implementations */
size_t strlen(const char *s) { size_t len = 0; while (s[len]) len++; return len; }

/* Stdio function declarations */
int puts(const char *);
int printf(const char *, ...);

/* Stdio function stub implementations */
int puts(const char *s) { (void)s; return 0; }
int printf(const char *fmt, ...) { (void)fmt; return 0; }

/* External data declarations */

/* String data definitions */
char DAT_00101728[] = "Testing C++ OO features\n";
char DAT_001015d1[] = "test_cpp_member_func result: %d\n";
char DAT_001015ef[] = "test_cpp_constructor result: %d\n";
char DAT_0010160b[] = "test_cpp_virtual_func result: %d\n";
char DAT_00101627[] = "test_cpp_multiple_inheritance result: %d\n";
char DAT_00101643[] = "test_cpp_diamond_inheritance result: %d\n";
char DAT_00101660[] = "test_cpp_operator_overload result: %d\n";
char DAT_0010167c[] = "test_cpp_template_func result: %d\n";
char DAT_00101698[] = "test_cpp_template_class result: %d\n";
char DAT_001016b4[] = "test_cpp_lambda result: %d\n";
char DAT_001016d0[] = "test_cpp_exception result: %d\n";
char DAT_001016ed[] = "test_cpp_smart_ptr result: %d\n";
char DAT_0010170a[] = "test_cpp_rtti result: %d\n";

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char undefined7[7];
typedef unsigned long undefined8;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O2_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 if (completed_0 == '\0') {
 __cxa_finalize((void *)&__dso_handle);
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
 *(uint32_t*)&uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 *(uint32_t*)&uStack_24 = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* LifecycleClass definition */
typedef struct LifecycleClass {
 int instance_count;
} LifecycleClass;

/* External declaration for LifecycleClass static member */
static int LifecycleClass_instance_count = 0;

/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

/* Base class with virtual table pointer */
typedef struct Base {
 void *_vptr_Base;
} Base;

/* RTTI class definitions */
typedef struct RTTIBase {
 void *_vptr_RTTIBase;
} RTTIBase;

typedef struct RTTIDerivedA {
 void *_vptr_RTTIDerivedA;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
 void *_vptr_RTTIDerivedB;
} RTTIDerivedB;

/* Container class definitions */
typedef struct Container_int {
 int size;
 int data[10];
} Container_int;

typedef struct Container_double {
 int size;
 double data[10];
} Container_double;

/* RTTI pointer definitions (actual storage) */
extern void *int_typeinfo;
extern void *_ZTIi;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *PTR__RTTIBase_00111d58;
extern void *PTR__RTTIBase_00111d80;

void *int_typeinfo = (void *)0;
void *_ZTIi = (void *)0;
void *RTTIBase_typeinfo = (void *)0;
void *RTTIDerivedA_typeinfo = (void *)0;
void *RTTIDerivedB_typeinfo = (void *)0;
void *PTR__RTTIBase_00111d58 = (void *)0;
void *PTR__RTTIBase_00111d80 = (void *)0;

/* RTTI function declarations */
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
void RTTIBase_destructor(RTTIBase *this);

/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 typedef int (*virt_func_t)(Base *, ulong);
 virt_func_t func;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 func = *(virt_func_t *)(obj->_vptr_Base);
 iVar1 = func(obj,(ulong)(uint)x);
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
 __cxa_throw(puVar1,int_typeinfo,0);
 return 0;
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
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101278 */

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
 
 puts(DAT_00101728);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_35 = 0;
 local_58 = 10;
 *(uint32_t*)&uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 *(uint32_t*)&uStack_44 = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf((const char*)&DAT_001015d1,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf((const char*)&DAT_001015ef,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((const char*)&DAT_0010160b,0x2a);
 printf((const char*)&DAT_00101627,0x47);
 printf((const char*)&DAT_00101643,0x28a);
 printf((const char*)&DAT_00101660,0x16);
 printf((const char*)&DAT_0010167c,0x27);
 printf((const char*)&DAT_00101698,0x10);
 printf((const char*)&DAT_001016b4,0x55);
 uVar1 = test_cpp_exception();
 printf((const char*)&DAT_001016d0,(ulong)uVar1);
 printf((const char*)&DAT_001016ed,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined8 *)operator_new(8);
 *puVar3 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00111d80;
 lVar5 = __dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar6 = 0x1e;
 if (lVar5 != 0) {
 iVar6 = 0x82;
 }
 lVar5 = __dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 operator_delete(puVar3);
 operator_delete(plVar4);
 printf((const char*)&DAT_0010170a,(ulong)(iVar6 + 0xe));
 return;
}



/* Function: main @ 0010144c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101464 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00101470 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 0010147c */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_constructor @ 00101490 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 00101498 */

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



/* Function: Container_int_get @ 001014b4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 001014d4 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_constructor @ 001014dc */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 001014e4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = value;
 this->size = iVar1 + 1;
 }
 return;
}



/* Function: Container_double_get @ 00101500 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 0010151c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_destructor @ 00101524 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101528 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 00101530 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 (void)this;
 return;
}



/* Function: RTTIDerivedB_destructor @ 00101534 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101538 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
