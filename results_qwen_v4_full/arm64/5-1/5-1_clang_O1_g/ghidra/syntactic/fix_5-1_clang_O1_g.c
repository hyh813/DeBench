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
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t undefined7[7];
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef int (*_func_int)(void *, int);
typedef int (*_func_int_base)(struct Base *, int);
typedef void (*_func_void)(void);
typedef int (*_func_int_multi)(struct MultiDerived *);
typedef int (*_func_int_diamond)(struct DiamondDerived *);

/* External declarations for pointers */
extern _func_int PTR_virtual_func_001139a8;
extern _func_int PTR_virtual_func_001139e8;
extern _func_int PTR_funcA_00113a30;
extern _func_int PTR__ZThn16_N12MultiDerived5funcBEv_00113a60;
extern _func_int PTR__ZTv0_n24_N14DiamondDerived4funcEv_00113ba0;
extern void *PTR__RTTIBase_00113d58;
extern void *PTR__RTTIBase_00113d80;

/* External declarations for std namespace */
extern void *std___ioinit;
extern void *__dso_handle;

/* External declarations for typeinfo */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *int_typeinfo;

/* Forward declarations for structs used in function declarations */
struct Base;
typedef struct Base Base;
struct MultiDerived;
typedef struct MultiDerived MultiDerived;

/* External function declarations */
extern int __cxa_atexit(void (*)(void), void *, void *);
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern size_t strlen(const char *);
extern int strcmp(const char *, const char *);
extern void *operator_new__(unsigned long);
extern void operator_delete__(void *);
extern void *operator_new(unsigned long);
extern void operator_delete(void *);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *, void *, void *);
extern void _ZTv0_n24_N14DiamondDerived4funcEv(void);
extern void _ZThn16_N12MultiDerived5funcBEv(void);
extern void *__dynamic_cast(void *, void *, void *, int);
extern int puts(const char *);
extern int printf(const char *, ...);
extern int Base_virtual_func(Base *, int);
extern int MultiDerived_funcA(MultiDerived *);

/* Ghidra macros */
#define CONCAT44(a,b) ((ulong)(uint)(a) | ((ulong)(uint)(b) << 32))

/* External data declarations */
extern char DAT_001025f9;
extern char DAT_00102495;
extern char DAT_001024b3;
extern char DAT_001024cf;
extern char DAT_001024eb;
extern char DAT_00102507;
extern char DAT_00102524;
extern char DAT_00102540;
extern char DAT_0010255c;
extern char DAT_00102578;
extern char DAT_00102594;
extern char DAT_001025b1;
extern char DAT_001025ce;

/* Global variables */
extern char completed_0;
extern int LifecycleClass_instance_count;

/* Forward declarations for C++ classes */
struct Base {
    _func_int _vptr_Base;
};
typedef struct Base Base;
struct Derived {
    _func_int _vptr_Derived;
    int multiplier;
};
typedef struct Derived Derived;
struct BaseA {
    _func_int _vptr_BaseA;
    int dataA;
};
typedef struct BaseA BaseA;
struct BaseB {
    _func_int _vptr_BaseB;
    int dataB;
};
typedef struct BaseB BaseB;
struct MultiDerived {
    struct BaseA super_BaseA;
    struct BaseB super_BaseB;
};
typedef struct MultiDerived MultiDerived;
struct MiddleA {
    _func_int _vptr_MiddleA;
    int dataA;
};
typedef struct MiddleA MiddleA;
struct MiddleB {
    _func_int _vptr_MiddleB;
    int dataB;
};
typedef struct MiddleB MiddleB;
struct DiamondDerived {
    struct MiddleA super_MiddleA;
    struct MiddleB super_MiddleB;
};
typedef struct DiamondDerived DiamondDerived;
struct VirtualBase {
    _func_int _vptr_VirtualBase;
};
typedef struct VirtualBase VirtualBase;
struct RTTIBase {
    _func_int _vptr_RTTIBase;
};
typedef struct RTTIBase RTTIBase;
struct RTTIDerivedA {
    struct RTTIBase super_RTTIBase;
};
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedB {
    struct RTTIBase super_RTTIBase;
};
typedef struct RTTIDerivedB RTTIDerivedB;
struct SimpleClass {
    int value;
};
typedef struct SimpleClass SimpleClass;
struct LifecycleClass {
    int instance_count;
};
typedef struct LifecycleClass LifecycleClass;
struct Point {
    int x;
    int y;
};
typedef struct Point Point;
struct Container_int {
    int data[10];
    int size;
};
typedef struct Container_int Container_int;
struct Container_double {
    double data[10];
    int size;
};
typedef struct Container_double Container_double;

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
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




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
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
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

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 
 iVar1 = obj->_vptr_Base(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001019ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 code *local_30;
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
  local_8._vptr_Base = PTR_virtual_func_001139a8;
  local_28 = 3;
  iVar1 = Base_virtual_func(&local_8, 5);
  PTR_virtual_func_001139e8(&local_8, 5);
 return iVar1 + 0x15;
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
  local_40.super_BaseA._vptr_BaseA = PTR_funcA_00113a30;
  local_40.super_BaseB._vptr_BaseB = PTR__ZThn16_N12MultiDerived5funcBEv_00113a60;
  local_40.super_BaseA.dataA = 100;
  local_40.super_BaseB.dataB = 200;
  iVar1 = MultiDerived_funcA(&local_40);
  _ZThn16_N12MultiDerived5funcBEv();
 return iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00101acc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_w0;
 int iVar1;
 _func_int local_40;
 undefined4 local_38;
 
 /* Unresolved local var: DiamondDerived obj@[DW_OP_breg31(sp): 0]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 local_40 = PTR__ZTv0_n24_N14DiamondDerived4funcEv_00113ba0;
 local_38 = 0x32;
 _ZTv0_n24_N14DiamondDerived4funcEv();
 local_38 = 100;
 local_40(0, 0);
 return extraout_w0;
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
 void *plVar4;
 void *plVar5;
 char *__s1;
 size_t sVar6;
 uint uVar7;
 long lVar8;
 char *__s1_00;
 void *temp_ptr;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
  plVar4 = operator_new(8);
  *(void **)plVar4 = PTR__RTTIBase_00113d58;
  plVar5 = operator_new(8);
  lVar8 = (long)*(void **)plVar4;
  temp_ptr = PTR__RTTIBase_00113d80;
  *(void **)plVar5 = temp_ptr;
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
 lVar8 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (lVar8 != 0) {
 uVar1 = uVar1 + 100;
 }
 lVar8 = (long)__dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 200;
 }
 if (*__s1_00 == '*') {
 __s1_00 = __s1_00 + 1;
 }
 sVar6 = strlen(__s1_00);
 (**(code **)(*plVar4 + 8))(plVar4);
 (**(code **)(*plVar5 + 8))(plVar5);
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
 undefined4 uStack_2c;
 undefined4 auStack_58 [10];
 
 puts(&DAT_001025f9);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +16]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
  local_60 = 10;
  uStack_5c = 0;
  *(undefined4 *)&uStack_2c = 0;
 auStack_58[0] = 0;
 auStack_58[5] = 0;
 auStack_58[6] = 0;
 auStack_58[2] = 0;
 auStack_58[3] = 0;
 auStack_58[4] = 0;
 sVar4 = strlen((char *)((ulong)&local_60));
 printf(&DAT_00102495,(ulong)((int)sVar4 + 0x125c));
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
 printf(&DAT_001024b3,(ulong)(uint)(iVar1 + LifecycleClass_instance_count * 1000));
 /* Unresolved local var: Base base@[DW_OP_breg31(sp): +8]
 Unresolved local var: Derived derived@[DW_OP_breg31(sp): +16]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
  local_60 = 3;
  local_68._vptr_Base = PTR_virtual_func_001139a8;
  uStack_5c = 0;
  auStack_58[8] = 0;
  auStack_58[9] = 0;
  auStack_58[8] = 0;
  iVar1 = Base_virtual_func(&local_68, 5);
  PTR_virtual_func_001139e8(&local_68, 5);
  iVar1 = iVar1 + 0x15;
 printf(&DAT_001024cf,(ulong)(iVar1));
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
 _ZThn16_N12MultiDerived5funcBEv();
  iVar1 = 0x1f;
 printf(&DAT_001024eb,(ulong)(iVar1));
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
  _ZTv0_n24_N14DiamondDerived4funcEv();
  auStack_58[8] = 100;
  ((void (*)(void))PTR__ZTv0_n24_N14DiamondDerived4funcEv_00113ba0)(0, 0);
 printf(&DAT_00102507,0);
 printf(&DAT_00102524,0x16);
 printf(&DAT_00102540,0x27);
 printf(&DAT_0010255c,0x10);
 printf(&DAT_00102578,0x55);
 uVar3 = test_cpp_exception();
 printf(&DAT_00102594,(ulong)uVar3);
 printf(&DAT_001025b1,0x2bf);
 uVar3 = test_cpp_rtti();
 printf(&DAT_001025ce,(ulong)uVar3);
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



/* Function: ~DiamondDerived @ 00102084 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: template_max_int @ 00102088 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00102094 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 001020a0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_constructor @ 001020b4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_constructor(Container_int *this)

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



/* Function: Container_double_constructor @ 00102100 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_constructor(Container_double *this)

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



/* Function: ~Base @ 00102154 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_destructor_delete(Base *this)

{
 operator_delete(this);
 return;
}



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



/* Function: ~MultiDerived @ 00102190 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_destructor_delete(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 001021a4 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 001021ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
 return;
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



/* Function: ~BaseA @ 001021d8 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_destructor(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 001021dc */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_destructor_delete(BaseA *this)

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



/* Function: ~BaseB @ 001021f8 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_destructor(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 001021fc */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_destructor_delete(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00102210 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + ((long *)(this->_vptr_MiddleA))[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00102228 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 0010222c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor_delete(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00102240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
 return;
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
 return *(int *)((long)&this->dataB + ((long *)(this->_vptr_MiddleB))[-3]) + 200;
}



/* Function: ~MiddleB @ 001022a0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 001022a4 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor_delete(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 001022b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
 return;
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
 return *(int *)((long)&(this->super_MiddleA).dataA + ((long *)((this->super_MiddleA)._vptr_MiddleA))[-3]
 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102318 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor_delete(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0010232c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
 return;
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

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
 return;
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



/* Function: ~VirtualBase @ 001023b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_destructor(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 001023b4 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_destructor_delete(VirtualBase *this)

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



/* Function: getType @ 001023fc */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 85 */
