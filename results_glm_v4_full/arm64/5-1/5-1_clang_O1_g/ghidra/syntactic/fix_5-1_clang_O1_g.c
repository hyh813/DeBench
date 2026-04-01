/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>

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

/* C++ runtime support declarations */
extern void *__dso_handle;
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_finalize(void *dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, const void *typeinfo, void *dest);
extern void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, ptrdiff_t src2dst_offset);

/* Global completion flag for runtime */
static char completed_0 = 0;

/* Ghidra-specific type definitions */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t undefined1;
typedef struct { uint8_t data[7]; } undefined7;
typedef void undefined;
typedef void (*code)(void);

/* C++ class forward declarations and definitions */
typedef struct _func_int _func_int;
typedef int (*_func_int_func)(void *, int);

/* Additional type definitions */
typedef unsigned long ulong;
#include <stdbool.h>
#define true 1
#define false 0

/* C++ std namespace forward declarations - converted to C */
typedef struct std_ios_base_Init std_ios_base_Init;

struct std_ios_base_Init {
    /* Empty structure for C compatibility */
};

/* Function declarations for C++ std::ios_base::Init */
extern void std_ios_base_Init_ctor(std_ios_base_Init *this);
extern void std_ios_base_Init_dtor(std_ios_base_Init *this);

/* Global instance */
std_ios_base_Init std___ioinit;

/* String data constants used in test functions */
char DAT_001025f9[] = "Testing C++ OO Features\n";
char DAT_00102495[] = "test_cpp_member_func: %d\n";
char DAT_001024b3[] = "test_cpp_constructor: %d\n";
char DAT_001024cf[] = "test_cpp_virtual_func: %d\n";
char DAT_001024eb[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_00102507[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_00102524[] = "test_cpp_operator_overload: %d\n";
char DAT_00102540[] = "test_cpp_template_func: %d\n";
char DAT_0010255c[] = "test_cpp_template_class: %d\n";
char DAT_00102578[] = "test_cpp_lambda: %d\n";
char DAT_00102594[] = "test_cpp_exception: %d\n";
char DAT_001025b1[] = "test_cpp_smart_ptr: %d\n";
char DAT_001025ce[] = "test_cpp_rtti: %d\n";

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;

/* Container template definitions */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* C++ typeinfo objects - simplified for C compatibility */
typedef struct { const char *name; } __type_info;

static const __type_info int_typeinfo = { "i" };
__type_info Base_typeinfo = { "4Base" };
__type_info RTTIBase_typeinfo = { "7RTTIBase" };
__type_info RTTIDerivedA_typeinfo = { "12RTTIDerivedA" };
__type_info RTTIDerivedB_typeinfo = { "12RTTIDerivedB" };

/* Template forward declarations - removed for C compatibility */

struct Base {
    _func_int_func *_vptr_Base;
    int multiplier;
};

typedef unsigned int uint;

/* LifecycleClass definition */
struct LifecycleClass {
    int data[5];
};

/* Static member for LifecycleClass */
int LifecycleClass_instance_count = 0;

/* BaseA definition */
struct BaseA {
    _func_int_func *_vptr_BaseA;
    int dataA;
};

/* BaseB definition */
struct BaseB {
    _func_int_func *_vptr_BaseB;
    int dataB;
};

/* MultiDerived definition */
struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

/* Derived definition */
struct Derived {
    _func_int_func *_vptr_Base;
    int multiplier;
};

/* MiddleA definition */
struct MiddleA {
    _func_int_func *_vptr_MiddleA;
    int dataA;
};

/* MiddleB definition */
struct MiddleB {
    _func_int_func *_vptr_MiddleB;
    int dataB;
};

/* DiamondDerived definition */
struct DiamondDerived {
    MiddleA super_MiddleA;
    /* MiddleB super_MiddleB overlaps with MiddleA in this decompilation */
};

/* VirtualBase definition */
struct VirtualBase {
    _func_int_func *_vptr_VirtualBase;
};

/* RTTIBase definition */
struct RTTIBase {
    _func_int_func *_vptr_RTTIBase;
};

/* RTTIDerivedA definition */
struct RTTIDerivedA {
    _func_int_func *_vptr_RTTIDerivedA;
};

/* RTTIDerivedB definition */
struct RTTIDerivedB {
    _func_int_func *_vptr_RTTIDerivedB;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Forward declarations for functions used before definition */
extern int Base_virtual_func(Base *this,int x);
extern int Derived_virtual_func(Derived *this,int x);
extern int BaseA_funcA(BaseA *this);
extern int MultiDerived_funcA(MultiDerived *this);
extern int DiamondDerived_func(DiamondDerived *this);
extern int BaseB_funcB(BaseB *this);
extern int MultiDerived_funcB(MultiDerived *this);

/* Vtable function definitions */
int PTR_virtual_func_001139a8(Base *this, int x) {
    return Base_virtual_func(this, x);
}

int PTR_virtual_func_001139e8(Derived *this, int x) {
    return Derived_virtual_func(this, x);
}

void PTR_funcA_00113a30(BaseA *this) {
    BaseA_funcA(this);
}

int PTR__ZTv0_n24_N14DiamondDerived4funcEv_00113ba0(DiamondDerived *this) {
    return DiamondDerived_func(this);
}

int PTR__ZThn16_N12MultiDerived5funcBEv_00113a60(MultiDerived *this) {
    return MultiDerived_funcB(this);
}

/* RTTI vtable pointers */
static void *PTR__RTTIBase_00113d58[] = {
    (void *)0,
    (void *)&RTTIBase_typeinfo,
    (void *)RTTIBase_destructor,
    (void *)0
};

static void *PTR__RTTIBase_00113d80[] = {
    (void *)0,
    (void *)&RTTIBase_typeinfo,
    (void *)RTTIBase_destructor,
    (void *)0
};




/* RTTI type info structures */
typedef struct {
    void *vptr;
    const char *name;
} type_info;

/* Additional function declarations for CRT and C++ operators */
extern void deregister_tm_clones(void);
void *operator_new__(size_t size);
void operator_delete__(void *ptr);
extern void operator_delete(void *ptr);
extern void *operator_new(size_t size);
extern int _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this);
extern int _ZThn16_N12MultiDerived5funcBEv(void *this);
extern int puts(const char *s);
extern int DiamondDerived_func(DiamondDerived *this);
extern int printf(const char *format, ...);
extern char DAT_001025f9[];
extern char DAT_00102495[];
extern char DAT_001024b3[];
extern char DAT_001024cf[];
extern char DAT_001024eb[];
extern char DAT_00102507[];
extern char DAT_00102524[];
extern char DAT_00102540[];
extern char DAT_0010255c[];
extern char DAT_00102578[];
extern char DAT_00102594[];
extern char DAT_001025b1[];
extern char DAT_001025ce[];

/* Helper macro to concatenate two 32-bit values into a 64-bit value */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint32_t)(low)))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101630 @ 00101630 */

void FUN_00101630(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_ctor(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start implementation - placeholder */
void _start(void)
{
    return;
}





/* CRT stub function call_weak_fn implementation - placeholder */
void call_weak_fn(void)
{
    return;
}





/* CRT stub function deregister_tm_clones implementation */
void deregister_tm_clones(void)
{
    return;
}





/* CRT stub function register_tm_clones implementation */
void register_tm_clones(void)
{
    return;
}




/* Function: FUN_001018bc @ 001018bc */

void FUN_001018bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101914 */

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
 uStack_2c.data[0] = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24.data[0] = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 long lVar3;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 lVar3 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((long)pvVar1 + lVar3) = iVar2;
 lVar3 = lVar3 + 4;
 iVar2 = iVar2 + 10;
 } while (lVar3 != 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar2 = *(int *)((long)pvVar1 + 8) + LifecycleClass_instance_count;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar2 + LifecycleClass_instance_count * 1000;
}



/* Function: call_virtual_func @ 001019d0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001019ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_30;
 undefined4 local_28;
 Base local_8;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[DW_OP_breg31(sp): 0]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_8._vptr_Base = (_func_int_func *)&PTR_virtual_func_001139a8;
 local_30 = (undefined **)(code*)&PTR_virtual_func_001139e8;
 local_28 = 3;
 iVar1 = Base_virtual_func(&local_8,5);
 ((void (*)(void *))(code *)*local_30)(&local_30);
 iVar2 = 0;
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00101a5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_40;
 
 /* Unresolved local var: MultiDerived obj@[DW_OP_breg31(sp): 0]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_40.super_BaseA._vptr_BaseA = (_func_int_func *)&PTR_funcA_00113a30;
 local_40.super_BaseB._vptr_BaseB = (_func_int_func *)(code*)&PTR__ZThn16_N12MultiDerived5funcBEv_00113a60;
 local_40.super_BaseA.dataA = 100;
 local_40.super_BaseB.dataB = 200;
 iVar1 = MultiDerived_funcA(&local_40);
 iVar2 = (**local_40.super_BaseB._vptr_BaseB)(&local_40.super_BaseB, 0);
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00101acc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_w0;
 int iVar1;
 undefined **local_40;
 undefined4 local_38;
 DiamondDerived local_obj;
 
 /* Unresolved local var: DiamondDerived obj@[DW_OP_breg31(sp): 0]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 local_40 = (undefined **)(code*)&PTR__ZTv0_n24_N14DiamondDerived4funcEv_00113ba0;
 local_38 = 0x32;
 _ZTv0_n24_N14DiamondDerived4funcEv(&local_obj);
 local_38 = 100;
 extraout_w0 = 100;
 iVar1 = 0;
 return iVar1 + extraout_w0;
}



/* Function: test_cpp_operator_overload @ 00101b54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101b6c */

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



/* Function: test_cpp_exception @ 00101b74 */

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
 /* try { // try from 00101b94 to 00101ba3 has its CatchHandler @ 00101ba8 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00101c64 */

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



/* Function: test_cpp_rtti @ 00101c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 uint uVar1;
 bool bVar2;
 int iVar3;
 long *plVar4;
 long *plVar5;
 char *__s1;
 size_t sVar6;
 uint uVar7;
 long lVar8;
 char *__s1_00;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 plVar4 = operator_new(8);
 *(void **)plVar4 = &PTR__RTTIBase_00113d58;
 plVar5 = operator_new(8);
 lVar8 = (long)*plVar4;
 *plVar5 = 0;
 *(void **)plVar5 = &PTR__RTTIBase_00113d80;
 __s1_00 = *(char **)(*(long *)(lVar8 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1_00 == '*') {
 uVar7 = 0;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar3 != 0) {
 uVar7 = 0;
 }
 }
 __s1 = *(char **)(*(long *)(*plVar5 + -8) + 8);
 if (__s1 == "12RTTIDerivedB") {
 bVar2 = true;
 }
 else if (*__s1 == '*') {
 bVar2 = false;
 }
 else {
 iVar3 = strcmp(__s1,"12RTTIDerivedB");
 bVar2 = iVar3 == 0;
 }
 uVar1 = uVar7 | 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (!bVar2) {
 uVar1 = uVar7;
 }
 lVar8 = (long)__dynamic_cast(plVar4,(void *)&Base_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (lVar8 != 0) {
 uVar1 = uVar1 + 100;
 }
 lVar8 = (long)__dynamic_cast(plVar5,(void *)&Base_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 200;
 }
 if (*__s1_00 == '*') {
 __s1_00 = __s1_00 + 1;
 }
 sVar6 = strlen(__s1_00);
 ((void (*)(void *))(*(void **)(*plVar4 + 8)))(plVar4);
 ((void (*)(void *))(*(void **)(*plVar5 + 8)))(plVar5);
 return uVar1 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 int iVar2;
 int extraout_w0;
 int extraout_w0_00;
 uint uVar3;
 size_t sVar4;
 void *pvVar5;
 long lVar6;
 Base local_68;
 undefined4 local_60;
 undefined4 uStack_5c;
 undefined4 auStack_58 [10];
 
 puts((char *)&DAT_001025f9);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +16]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_60 = 10;
 auStack_58[1] = 0;
 uStack_5c = 0x74736554;
 auStack_58[0] = 0;
 auStack_58[5] = 0;
 auStack_58[6] = 0;
 auStack_58[2] = 0;
 auStack_58[3] = 0;
 auStack_58[4] = 0;
 sVar4 = strlen((char *)((ulong)&local_60 | 4));
 printf((char *)&DAT_00102495,(ulong)((int)sVar4 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 pvVar5 = operator_new__(0x14);
 iVar1 = 0;
 lVar6 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((long)pvVar5 + lVar6) = iVar1;
 lVar6 = lVar6 + 4;
 iVar1 = iVar1 + 10;
 } while (lVar6 != 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar1 = *(int *)((long)pvVar5 + 8) + LifecycleClass_instance_count;
 operator_delete__(pvVar5);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf((char *)&DAT_001024b3,(ulong)(uint)(iVar1 + LifecycleClass_instance_count * 1000));
 /* Unresolved local var: Base base@[DW_OP_breg31(sp): +8]
 Unresolved local var: Derived derived@[DW_OP_breg31(sp): +16]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 auStack_58[0] = 3;
 local_68._vptr_Base = (_func_int_func *)&PTR_virtual_func_001139a8;
 local_60 = 0x1139e8;
 uStack_5c = 0;
 iVar1 = Base_virtual_func(&local_68,5);
 ((void (*)(void *, int))(*(void **)CONCAT44(uStack_5c,local_60)))(&local_60,5);
 iVar2 = 0;
 printf((char *)&DAT_001024cf,(ulong)(uint)(iVar1 + iVar2 + 0x15));
 /* Unresolved local var: MultiDerived obj@[DW_OP_breg31(sp): +16]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_60 = 0x113a30;
 uStack_5c = 0;
 auStack_58[2] = 0x113a60;
 auStack_58[3] = 0;
 auStack_58[0] = 100;
 auStack_58[4] = 200;
 ((void (*)(void *))_ZThn16_N12MultiDerived5funcBEv)(auStack_58 + 2);
 printf((char *)&DAT_001024eb,(ulong)(extraout_w0 + 0x1f));
 /* Unresolved local var: DiamondDerived obj@[DW_OP_breg31(sp): +16]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_60 = 0x113b38;
 uStack_5c = 0;
 auStack_58[6] = 0x113ba0;
 auStack_58[7] = 0;
 auStack_58[2] = 0x113b68;
 auStack_58[3] = 0;
 auStack_58[8] = 0x32;
 ((void (*)(void *))_ZTv0_n24_N14DiamondDerived4funcEv)(auStack_58 + 2);
 *(undefined4 *)((long)auStack_58 + *(long *)(CONCAT44(uStack_5c,local_60) + -0x18)) = 100;
 iVar1 = ((int (*)(void *))(*(void **)CONCAT44(auStack_58[7],auStack_58[6])))(auStack_58 + 6);
 printf((char *)&DAT_00102507,(ulong)(uint)(iVar1 + extraout_w0_00));
 printf((char *)&DAT_00102524,0x16);
 printf((char *)&DAT_00102540,0x27);
 printf((char *)&DAT_0010255c,0x10);
 printf((char *)&DAT_00102578,0x55);
 uVar3 = test_cpp_exception();
 printf((char *)&DAT_00102594,(ulong)uVar3);
 printf((char *)&DAT_001025b1,0x2bf);
 uVar3 = test_cpp_rtti();
 printf((char *)&DAT_001025ce,(ulong)uVar3);
 return;
}



/* Function: main @ 00102050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102068 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00102070 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 return this->multiplier * x;
}



/* Function: ~Base @ 0010207c */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_destructor(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102080 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102084 - duplicate removed */



/* Function: template_max<int> @ 00102088 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00102094 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001020a0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001020b4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001020bc */

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



/* Function: get @ 001020d8 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 001020f8 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00102100 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00102108 */

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



/* Function: get @ 00102124 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102140 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: getName @ 00102148 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00102154 - duplicate removed */



/* Function: getName @ 00102168 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00102174 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void Derived_destructor(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00102188 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00102190 - duplicate removed */



/* Function: funcB @ 001021a4 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 001021ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZThn16_N12MultiDerived5funcBEv(void *this)

{
    MultiDerived *multiderived = (MultiDerived *)((char *)this - 16);
    return MultiDerived_funcB(multiderived);
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 001021b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 001021b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
 long in_x0;
 
 operator_delete((void *)(in_x0 + -0x10));
 return;
}



/* Function: funcA @ 001021d0 */

/* DWARF original prototype: int funcA(BaseA * this) */

int BaseA_funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 001021d8 - duplicate removed */



/* Function: ~BaseA @ 001021dc */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_destructor(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 001021f0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int BaseB_funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 001021f8 - duplicate removed */



/* Function: ~BaseB @ 001021fc */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_destructor(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00102210 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((long)this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00102228 - duplicate removed */



/* Function: ~MiddleA @ 0010222c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00102240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n24_N7MiddleA4funcEv(MiddleA *this)

{
    return MiddleA_func(this);
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00102264 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00102268 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
 long *in_x0;
 
 operator_delete((void *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: func @ 00102288 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 return *(int *)((long)this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}







/* Function: ~MiddleB @ 001022a4 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 001022b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n24_N7MiddleB4funcEv(MiddleB *this)

{
    return MiddleB_func(this);
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 001022dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 001022e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
 long *in_x0;
 
 operator_delete((void *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: func @ 00102300 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102318 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0010232c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZThn16_N14DiamondDerived4funcEv(void *this)

{
    DiamondDerived *dd = (DiamondDerived *)((char *)this - 16);
    return DiamondDerived_func(dd);
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 00102344 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00102348 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
 long in_x0;
 
 operator_delete((void *)(in_x0 + -0x10));
 return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00102360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n24_N14DiamondDerived4funcEv(DiamondDerived *this)

{
    return DiamondDerived_func(this);
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00102384 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00102388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
 long *in_x0;
 
 operator_delete((void *)((long)in_x0 + *(long *)(*in_x0 + -0x20)));
 return;
}



/* Function: func @ 001023a8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this)

{
 return 100;
}







/* Function: ~VirtualBase @ 001023b4 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_destructor(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 001023c8 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 001023dc */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 001023e4 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001023e8 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: std_ios_base_Init_ctor - C++ std::ios_base::Init constructor stub */
void std_ios_base_Init_ctor(std_ios_base_Init *this)
{
    /* Stub for std::ios_base::Init constructor */
    return;
}

/* Function: std_ios_base_Init_dtor - C++ std::ios_base::Init destructor stub */
void std_ios_base_Init_dtor(std_ios_base_Init *this)
{
    /* Stub for std::ios_base::Init destructor */
    return;
}

/* Function: operator_new__ */

void *operator_new__(size_t size)

{
 /* Simple allocation using malloc */
 extern void *malloc(size_t);
 return malloc(size);
}



/* Function: operator_delete__ */

void operator_delete__(void *ptr)

{
 /* Simple deallocation using free */
 extern void free(void *);
 free(ptr);
}

/* Function: operator_new */

void *operator_new(size_t size)

{
 extern void *malloc(size_t);
 return malloc(size);
}

/* Function: operator_delete */

void operator_delete(void *ptr)

{
 extern void free(void *);
 free(ptr);
}



/* Function: getType @ 001023fc */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 85 */
