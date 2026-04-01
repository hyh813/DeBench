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

/* Additional type definitions for decompiled code */
typedef void undefined;
typedef void (*code)(void);
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;

/* External function declarations */
size_t strlen(const char *s);
void *operator_new(size_t size);
void operator_delete(void *ptr);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, void *typeinfo, void *destructor);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst);
int printf(const char *format, ...);
int puts(const char *s);

/* External variable declarations */
extern void *PTR__RTTIBase_00103d78;
extern void *PTR__RTTIBase_00103da0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern char DAT_001021d4[];
extern char DAT_0010207d[];
extern char DAT_0010209b[];
extern char DAT_001020b7[];
extern char DAT_001020d3[];
extern char DAT_001020ef[];
extern char DAT_0010210c[];
extern char DAT_00102128[];
extern char DAT_00102144[];
extern char DAT_00102160[];
extern char DAT_0010217c[];
extern char DAT_00102199[];
extern char DAT_001021b6[];

/* Define missing symbols */
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
char DAT_001021d4[] = "Testing C++ OO features\n";
char DAT_0010207d[] = "Member func result: %d\n";
char DAT_0010209b[] = "Constructor result: %d\n";
char DAT_001020b7[] = "Virtual func result: %d\n";
char DAT_001020d3[] = "Multiple inheritance result: %d\n";
char DAT_001020ef[] = "Diamond inheritance result: %d\n";
char DAT_0010210c[] = "Operator overload result: %d\n";
char DAT_00102128[] = "Template func result: %d\n";
char DAT_00102144[] = "Template class result: %d\n";
char DAT_00102160[] = "Lambda result: %d\n";
char DAT_0010217c[] = "Exception result: %d\n";
char DAT_00102199[] = "Smart ptr result: %d\n";
char DAT_001021b6[] = "RTTI result: %d\n";
int LifecycleClass_instance_count = 0;

/* Stub implementations for missing functions */
void operator_delete(void *ptr) {
    return;
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst) {
    return 0;
}

void __cxa_throw(void *exception, void *typeinfo, void *destructor) {
    return;
}

int puts(const char *s) {
    return 0;
}

void *operator_new(size_t size) {
    return 0;
}

void *__cxa_allocate_exception(size_t size) {
    return 0;
}

size_t strlen(const char *s) {
    return 0;
}

int printf(const char *format, ...) {
    return 0;
}

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};
/* Make instance_count accessible as static */
extern int LifecycleClass_instance_count;

/* RTTIBase definition */
struct RTTIBase {
    void *typeinfo;
};

/* RTTIDerivedA definition */
struct RTTIDerivedA {
    void *typeinfo;
};

/* RTTIDerivedB definition */
struct RTTIDerivedB {
    void *typeinfo;
};

/* Container template definition */
template<typename T>
struct Container {
    int size;
    T data[10];
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((void (*)(void))0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 __builtin_strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = 0;
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

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



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

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



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

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



/* Function: test_cpp_lambda @ 00101310 */

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



/* Function: test_cpp_exception @ 00101320 */

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
 /* try { // try from 00101335 to 00101348 has its CatchHandler @ 0010134b */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0x103d80,0);
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(DAT_001021d4);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_4c[0x10] = '\0';
 local_4c[0x11] = '\0';
 local_4c[0x12] = '\0';
 local_4c[0x13] = '\0';
 local_4c[0x14] = '\0';
 local_4c[0x15] = '\0';
 local_4c[0x16] = '\0';
 local_4c[0x17] = '\0';
 local_4c[0x18] = '\0';
 local_4c[0x19] = '\0';
 local_4c[0x1a] = '\0';
 local_4c[0x1b] = '\0';
 local_4c[0x1c] = '\0';
 local_4c[0x1d] = '\0';
 local_4c[0x1e] = '\0';
 __builtin_strncpy(local_4c,"Test",5);
 local_4c[5] = '\0';
 local_4c[6] = '\0';
 local_4c[7] = '\0';
 local_4c[8] = '\0';
 local_4c[9] = '\0';
 local_4c[10] = '\0';
 local_4c[0xb] = '\0';
 local_4c[0xc] = '\0';
 local_4c[0xd] = '\0';
 local_4c[0xe] = '\0';
 local_4c[0xf] = 0;
 local_4c[0x1f] = 0;
 sVar2 = strlen(local_4c);
 printf(DAT_0010207d,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_0010209b,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(ulong)uVar1);
 printf(DAT_00102199,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar3 = (undefined8 *)operator_new(8);
 *puVar3 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = (long)__dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator_delete(puVar3);
 operator_delete(plVar4);
 printf(DAT_001021b6,(ulong)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00101690 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 001016a0 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 001016b0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 001016c0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_constructor(Container<int> *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push_int @ 001016d0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container<int> *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if ((long)iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get_int @ 001016f0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container<int> *this_ptr,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this_ptr->size)) {
 iVar1 = this_ptr->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize_int @ 00101710 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container<int> *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 00101720 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_constructor(Container<double> *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push_double @ 00101730 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container<double> *this_ptr,double value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if ((long)iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get_double @ 00101750 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container<double> *this_ptr,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this_ptr->size)) {
 dVar1 = this_ptr->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize_double @ 00101770 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container<double> *this_ptr)

{
 return this_ptr->size;
}



/* Function: RTTIDerivedA_destructor @ 00101780 */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101790 */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 001017a0 */

void RTTIBase_destructor(RTTIBase *this_ptr)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 001017b0 */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedB_getType @ 001017c0 */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
