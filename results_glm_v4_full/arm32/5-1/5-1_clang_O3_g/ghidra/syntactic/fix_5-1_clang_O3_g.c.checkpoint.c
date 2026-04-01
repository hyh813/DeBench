/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef int ssize_t;
typedef unsigned int size_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra placeholder types */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;

/* Forward declarations for C++ classes */
struct Base {
    void **_vptr_Base;
    virtual int func();
};

struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

struct RTTIBase {
    void **_vptr_RTITIBase;
    static struct type_info typeinfo;
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType();
    static struct type_info typeinfo;
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType();
    static struct type_info typeinfo;
};

/* Basic type_info for primitive types */
struct type_info {
    const char *_name;
    
    type_info(const char *name) : _name(name) {}
    virtual ~type_info() {}
    static type_info int_typeinfo;
};

/* Static type_info definitions */
static const char RTTIBase_typeinfo_name[] = "RTTIBase";
static const char RTTIDerivedA_typeinfo_name[] = "RTTIDerivedA";
static const char RTTIDerivedB_typeinfo_name[] = "RTTIDerivedB";
static const char int_typeinfo_name[] = "int";

struct type_info RTTIBase::typeinfo = { RTTIBase_typeinfo_name };
struct type_info RTTIDerivedA::typeinfo = { RTTIDerivedA_typeinfo_name };
struct type_info RTTIDerivedB::typeinfo = { RTTIDerivedB_typeinfo_name };
struct type_info type_info::int_typeinfo = { int_typeinfo_name };

/* Container template class instantiations */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* External data references - defined as placeholder strings */
const char DAT_00011358[] = "Testing C++ features:\n";
const char DAT_00011201[] = "Member function test: %d\n";
const char DAT_0001121f[] = "Constructor test: %d\n";
const char DAT_0001123b[] = "Virtual function test: %d\n";
const char DAT_00011257[] = "Multiple inheritance test: %d\n";
const char DAT_00011273[] = "Diamond inheritance test: %d\n";
const char DAT_00011290[] = "Operator overload test: %d\n";
const char DAT_000112ac[] = "Template function test: %d\n";
const char DAT_000112c8[] = "Template class test: %d\n";
const char DAT_000112e4[] = "Lambda test: %d\n";
const char DAT_00011300[] = "Exception test: %d\n";
const char DAT_0001131d[] = "Smart pointer test: %d\n";
const char DAT_0001133a[] = "RTTI test: %d\n";

/* Stub declarations for C++ std library */
struct __ioinit_struct {
    int dummy;
};
extern void *__dso_handle;
struct __ioinit_struct std___ioinit = {0};

struct ios_base_Init {
    void (*_Init)(struct ios_base_Init *);
    void (*_Destroy)(struct ios_base_Init *);
};
typedef struct ios_base_Init Init;

/* Helper function to split double into high/low 32-bit parts */
static inline int SUB84(double val, int idx) {
    uint64_t bits = *(uint64_t*)&val;
    if (idx == 0) {
        return (int)(bits >> 32);  /* high 32 bits */
    } else {
        return (int)(bits & 0xFFFFFFFF);  /* low 32 bits */
    }
}

/* ARM EABI double compare greater-than function */
/* Returns: 1 if a > b, 0 if a <= b */
static inline int __aeabi_dcmpgt(int a_hi, int a_lo, int b_hi, int b_lo) {
    uint64_t a_bits = ((uint64_t)(uint32_t)a_hi << 32) | (uint32_t)a_lo;
    uint64_t b_bits = ((uint64_t)(uint32_t)b_hi << 32) | (uint32_t)b_lo;
    double a = *(double*)&a_bits;
    double b = *(double*)&b_bits;
    return a > b ? 1 : 0;
}

struct std_ios_base {
    static struct ios_base_Init Init;
};

/* Forward declarations for RTTI functions */
void RTTIBase_destructor(RTTIBase *self);
void RTTIDerivedA_destructor(RTTIDerivedA *self);
int RTTIDerivedA_getType(RTTIDerivedA *self);
void RTTIDerivedB_destructor(RTTIDerivedB *self);
int RTTIDerivedB_getType(RTTIDerivedB *self);

/* External symbols for RTTI vtable pointers - defined as actual vtables */
void *PTR__RTTIBase_00021ed8[] = {
    (void *)&RTTIBase_typeinfo_name,
    (void *)RTTIBase_destructor,
    0
};

void *PTR__RTTIBase_00021eec[] = {
    (void *)&RTTIDerivedA_typeinfo_name,
    (void *)RTTIDerivedA_destructor,
    (void *)RTTIDerivedA_getType,
    0
};

void *PTR__RTTIDerivedB_00021f00[] = {
    (void *)&RTTIDerivedB_typeinfo_name,
    (void *)RTTIDerivedB_destructor,
    (void *)RTTIDerivedB_getType,
    0
};

extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void*));

/* Stub implementations for C++ runtime functions */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

void *__cxa_allocate_exception(size_t size) {
    (void)size;
    /* Return a static buffer as stub - real implementation would malloc */
    static char exception_buffer[64];
    return exception_buffer;
}

void *__dynamic_cast(void *obj, struct type_info *src, struct type_info *dst, int offset) {
    (void)src;
    (void)dst;
    (void)offset;
    /* Stub: return obj if not null, otherwise null */
    return obj;
}

void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void*)) {
    (void)exception;
    (void)tinfo;
    (void)dest;
    for(;;);
}
extern void *operator new(size_t size);
extern void operator delete(void *ptr);
extern void *__dynamic_cast(void *obj, struct type_info *src, struct type_info *dst, int offset);
extern int __aeabi_dcmpgt(int a_hi, int a_lo, int b_hi);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdio.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std___ioinit.dummy = 1;
 __cxa_atexit((void (*)(void *))0,(void *)&std___ioinit,&__dso_handle);
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
 typedef int (*vfunc_t)(Base *);
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((vfunc_t)*obj->_vptr_Base)(obj);
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
 __cxa_throw(puVar1,&type_info::int_typeinfo,0);
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
 puVar1 = (undefined4 *)operator new(4);
 *puVar1 = (int)(intptr_t)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *piVar2 = (int)(intptr_t)&PTR__RTTIBase_00021eec;
 iVar3 = (int)(intptr_t)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)(intptr_t)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator delete(puVar1);
 ((void (*)(void *))(*(void **)((char *)(*(void **)piVar2) + 4)))(piVar2);
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
 
 puts((const char *)&DAT_00011358);
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
 printf((const char *)&DAT_00011201,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf((const char *)&DAT_0001121f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf((const char *)&DAT_0001123b,0x2a);
 printf((const char *)&DAT_00011257,0x47);
 printf((const char *)&DAT_00011273,0x28a);
 printf((const char *)&DAT_00011290,0x16);
 printf((const char *)&DAT_000112ac,0x27);
 printf((const char *)&DAT_000112c8,0x10);
 printf((const char *)&DAT_000112e4,0x55);
 iVar2 = test_cpp_exception();
 printf((const char *)&DAT_00011300,iVar2);
 printf((const char *)&DAT_0001131d,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4 *)operator new(4);
 *puVar3 = (int)(intptr_t)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator new(4);
 *piVar4 = (int)(intptr_t)&PTR__RTTIBase_00021eec;
 iVar2 = (int)(intptr_t)__dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = (int)(intptr_t)__dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator delete(puVar3);
 ((void (*)(void *))(*(void **)((char *)(*(void **)piVar4) + 4)))(piVar4);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 if (iVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 printf((const char *)&DAT_0001133a,iVar6 + 0xe);
 return;
}



/* Function: main @ 00010fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010fcc */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (__aeabi_dcmpgt(SUB84(a,0),SUB84(a,1),SUB84(b,0),SUB84(b,1)) <= 0) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 0001100c */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011020 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 0001102c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *self,int value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011044 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *self,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < self->size) {
 iVar1 = self->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011064 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container @ 0001106c */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00011078 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *self,double value)

{
 uint64_t bits;
 int iVar1;
 
 iVar1 = self->size;
 if (9 < iVar1) {
 return;
 }
 bits = *(uint64_t *)&value;
 self->data[iVar1] = *(double *)&bits;
 self->size = iVar1 + 1;
 return;
}



/* Function: get @ 0001109c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *self,int idx)

{
 if (idx < 0) {
 return 0.0;
 }
 if (idx < self->size) {
 return self->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 000110c8 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *self)

{
 return self->size;
}



/* Function: ~RTTIDerivedA @ 000110d0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *self)

{
 operator delete(self);
 return;
}



/* Function: getType @ 000110d4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: ~RTTIBase @ 000110dc */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *self)

{
 return;
}



/* Function: ~RTTIDerivedB @ 000110e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *self)

{
 operator delete(self);
 return;
}



/* Function: getType @ 000110e4 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
