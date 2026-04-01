/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;

/* Forward declarations for C++ classes */
typedef struct Base {
    void **_vptr_Base;
} Base;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
extern LifecycleClass LifecycleClass_instance;
LifecycleClass LifecycleClass_instance = {0};

typedef struct RTTIBase {
    void *_vptr_Base;
} RTTIBase;

typedef struct RTTIDerivedA {
    void *_vptr_Base;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *_vptr_Base;
} RTTIDerivedB;

/* External typeinfo objects */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* Define typeinfo objects */
void *RTTIBase_typeinfo = (void*)0x1;
void *RTTIDerivedA_typeinfo = (void*)0x2;
void *RTTIDerivedB_typeinfo = (void*)0x3;

/* External vtable pointers */
extern void *PTR__RTTIBase_00021ed8;
extern void *PTR__RTTIBase_00021eec;

/* Define vtable pointers */
void *PTR__RTTIBase_00021ed8 = (void*)0x100;
void *PTR__RTTIBase_00021eec = (void*)0x200;

/* External data references */
extern char DAT_00011358[];
extern char DAT_00011201[];
extern char DAT_0001121f[];
extern char DAT_0001123b[];
extern char DAT_00011257[];
extern char DAT_00011273[];
extern char DAT_00011290[];
extern char DAT_000112ac[];
extern char DAT_000112c8[];
extern char DAT_000112e4[];
extern char DAT_00011300[];
extern char DAT_0001131d[];
extern char DAT_0001133a[];

/* Define DAT_ string arrays */
char DAT_00011358[] = "Testing C++ OO features\n";
char DAT_00011201[] = "test_cpp_member_func result: %d\n";
char DAT_0001121f[] = "test_cpp_constructor result: %d\n";
char DAT_0001123b[] = "test_cpp_virtual_func result: %d\n";
char DAT_00011257[] = "test_cpp_multiple_inheritance result: %d\n";
char DAT_00011273[] = "test_cpp_diamond_inheritance result: %d\n";
char DAT_00011290[] = "test_cpp_operator_overload result: %d\n";
char DAT_000112ac[] = "test_cpp_template_func result: %d\n";
char DAT_000112c8[] = "test_cpp_template_class result: %d\n";
char DAT_000112e4[] = "test_cpp_lambda result: %d\n";
char DAT_00011300[] = "test_cpp_exception result: %d\n";
char DAT_0001131d[] = "test_cpp_smart_ptr result: %d\n";
char DAT_0001133a[] = "test_cpp_rtti result: %d\n";

/* Container type definitions */
typedef struct {
    int size;
    int data[10];
} Container_int;

typedef struct {
    int size;
    double data[10];
} Container_double;

/* C++ std namespace stubs */
typedef struct { int dummy; } Init;

/* C++ std namespace stub functions */
extern void std_ios_base_Init_Init(Init *init);
extern void std_ios_base_Init_dtor(Init *init);

/* Function pointer type for vtable calls */
typedef void (*code)(void*);
typedef struct { Init __ioinit; } std_ios_base;
typedef struct { std_ios_base ios_base; } std_namespace;
extern std_namespace std;
extern void* __dso_handle;

/* External function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *typeinfo, void *dest);
extern int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle);

/* C++ runtime stub implementations */
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) { return obj; }
void *__cxa_allocate_exception(size_t size) { return (void*)0x1000; }
void __cxa_throw(void *exc, void *typeinfo, void *dest) { while(1); }
int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle) { return 0; }
void *operator_new(size_t size) { return (void*)0x2000; }
void operator_delete(void *ptr) { }

/* strlen stub implementation */
size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */









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
 return LifecycleClass_instance.instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base*,int))(*obj->_vptr_Base))(obj,x);
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
 __cxa_throw(puVar1,&RTTIBase_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010ca4 */

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



/* Function: test_cpp_rtti @ 00010cb0 */

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
 *(void **)puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *(void **)piVar2 = &PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d7c */

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
 
 puts(DAT_00011358);
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
 printf(DAT_00011201,(int)(sVar1 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_0001121f,(int)(LifecycleClass_instance.instance_count * 0x3e9 + 0x15));
 printf(DAT_0001123b,(int)0x2a);
 printf(DAT_00011257,(int)0x47);
 printf(DAT_00011273,(int)0x28a);
 printf(DAT_00011290,(int)0x16);
 printf(DAT_000112ac,(int)0x27);
 printf(DAT_000112c8,(int)0x10);
 printf(DAT_000112e4,(int)0x55);
 iVar2 = test_cpp_exception();
 printf(DAT_00011300,iVar2);
 printf(DAT_0001131d,(int)0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4 *)operator_new(4);
 *(void **)puVar3 = &PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *(void **)piVar4 = &PTR__RTTIBase_00021eec;
 iVar2 = (int)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = (int)__dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (**(code **)(*piVar4 + 4))(piVar4);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 if (iVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 printf(DAT_0001133a,(int)(iVar6 + 0xe));
 return;
}



/* Function: main @ 00010fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010fcc */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) {
  return a;
 }
 return b;
}



/* Function: template_swap_int @ 0001100c */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00011020 */

void Container_int_ctor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push_int @ 0001102c */

void Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get_int @ 00011044 */

int Container_int_get(Container_int *this_ptr,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < this_ptr->size) {
 iVar1 = this_ptr->data[idx];
 }
 return iVar1;
}



/* Function: getSize_int @ 00011064 */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 0001106c */

void Container_double_ctor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push_double @ 00011078 */

void Container_double_push(Container_double *this_ptr,double value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (9 < iVar1) {
 return;
 }
 this_ptr->data[iVar1] = value;
 this_ptr->size = iVar1 + 1;
 return;
}



/* Function: get_double @ 0001109c */

double Container_double_get(Container_double *this_ptr,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if (idx < 0) {
 return 0.0;
 }
 if (idx < this_ptr->size) {
 dVar1 = this_ptr->data[idx];
 }
 return dVar1;
}



/* Function: getSize_double @ 000110c8 */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: RTTIDerivedA_dtor @ 000110d0 */

void RTTIDerivedA_dtor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedA_getType @ 000110d4 */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: RTTIBase_dtor @ 000110dc */

void RTTIBase_dtor(RTTIBase *this_ptr)

{
 return;
}



/* Function: RTTIDerivedB_dtor @ 000110e0 */

void RTTIDerivedB_dtor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedB_getType @ 000110e4 */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
