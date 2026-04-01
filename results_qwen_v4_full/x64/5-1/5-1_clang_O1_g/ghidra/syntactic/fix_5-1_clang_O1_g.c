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
typedef unsigned long ulong;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned int uint;
typedef void (*code)(void *);
typedef int (*_func_int)(void);

/* Ghidra macro for concatenating 4+4 bytes */
#define CONCAT44(hi,lo) ((unsigned long)(hi) << 32 | (unsigned long)(lo))

/* Forward declarations for C++ classes */
struct Base;
struct LifecycleClass;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* C++ class definitions */
struct Base {
  void **_vptr_Base;
};

struct LifecycleClass {
  int instance_count;
};

static int LifecycleClass_instance_count = 0;

struct Derived {
  Base super_Base;
  int multiplier;
};

struct BaseA {
  void **_vptr_BaseA;
  int dataA;
};

struct BaseB {
  void **_vptr_BaseB;
  int dataB;
};

struct MultiDerived {
  BaseA super_BaseA;
  BaseB super_BaseB;
};

/* MultiDerived method declarations */
int MultiDerived_funcA(MultiDerived *this_ptr);

/* Additional function declarations */
int Base_virtual_func(Base *this_ptr, int x);
int BaseB_funcB(BaseB *this_ptr);

struct VirtualBase {
  void **_vptr_VirtualBase;
  int data;
};

struct MiddleA {
  VirtualBase super_VirtualBase;
  void **_vptr_MiddleA;
  int dataA;
};

struct MiddleB {
  VirtualBase super_VirtualBase;
  void **_vptr_MiddleB;
  int dataB;
};

struct DiamondDerived {
  MiddleA super_MiddleA;
  MiddleB super_MiddleB;
};

struct RTTIBase {
  void **_vptr_RTTIBase;
};

struct RTTIDerivedA {
  RTTIBase super_RTTIBase;
};

struct RTTIDerivedB {
  RTTIBase super_RTTIBase;
};

/* Container class definitions */
struct Container_int {
  int size;
  int data[10];
};

struct Container_double {
  int size;
  double data[10];
};

/* Typeinfo declarations */

/* Typeinfo objects */
static void *_ZTI8RTTIBase = (void *)0x1;
static void *_ZTI12RTTIDerivedA = (void *)0x2;
static void *_ZTI12RTTIDerivedB = (void *)0x3;
static void *_ZTIi = (void *)0x4;

/* Typeinfo stubs */
static void *RTTIBase_typeinfo = &_ZTI8RTTIBase;
static void *RTTIDerivedA_typeinfo = &_ZTI12RTTIDerivedA;
static void *RTTIDerivedB_typeinfo = &_ZTI12RTTIDerivedB;
static void *int_typeinfo = &_ZTIi;

/* C++ standard library stubs */
static void *__dso_handle;
static int __cxa_atexit(void (*)(void *), void *, void *) { return 0; }
static void *__cxa_allocate_exception(unsigned long size) { return (void *)0x3000; }
static void __cxa_throw(void *exc, void *type, void *dest) { while(1); }

/* External function declarations */
void puts(const char *);
int printf(const char *, ...);
void _ZTv0_n24_N14DiamondDerived4funcEv(void);

/* Operator new/delete stubs */
static void *operator_new(unsigned long size) { return (void *)0x1000; }
static void operator_delete(void *ptr) { }
static void *operator_new__(unsigned long size) { return (void *)0x2000; }
static void operator_delete__(void *ptr) { }
static void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags) { return src; }

/* String function stubs */
static size_t strlen(const char *s) {
 size_t len = 0;
 while (s[len] != '\0') { len++; }
 return len;
}

static int strcmp(const char *s1, const char *s2) {
 while (*s1 && (*s1 == *s2)) { s1++; s2++; }
 return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/* Vtable pointers */
static void *PTR_virtual_func_001059c8 = (void *)0x1059c8;
static void *PTR_virtual_func_00105a08 = (void *)0x105a08;
static void *PTR_funcA_00105a50 = (void *)0x105a50;
static void *PTR__ZThn16_N12MultiDerived5funcBEv_00105a80 = (void *)0x105a80;
static void *PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0 = (void *)0x105bc0;
static void *PTR__RTTIBase_00105d78 = (void *)0x105d78;
static void *PTR__RTTIBase_00105da0 = (void *)0x105da0;

/* Data references */
extern char DAT_001031e1[];
extern char DAT_0010307d[];
extern char DAT_0010309b[];
extern char DAT_001030b7[];
extern char DAT_001030d3[];
extern char DAT_001030ef[];
extern char DAT_0010310c[];
extern char DAT_00103128[];
extern char DAT_00103144[];
extern char DAT_00103160[];
extern char DAT_0010317c[];
extern char DAT_00103199[];
extern char DAT_001031b6[];

/* Data definitions */
char DAT_001031e1[] = "=== C++ OO Features Test ===";
char DAT_0010307d[] = "Test";
char DAT_0010309b[] = "MultiDerived funcA called";
char DAT_001030b7[] = "DiamondDerived func called";
char DAT_001030d3[] = "%d\n";
char DAT_001030ef[] = "%s\n";
char DAT_0010310c[] = "Base";
char DAT_00103128[] = "Derived";
char DAT_00103144[] = "12RTTIDerivedA";
char DAT_00103160[] = "12RTTIDerivedB";
char DAT_0010317c[] = "*";
char DAT_00103199[] = "";
char DAT_001031b6[] = "";


/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)((void *)0);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00102150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 puVar1 = (undefined4 *)operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 /* Unresolved local var: size_t i@[???] */
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 00102310 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = Base_virtual_func(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_20;
 undefined4 local_18;
 Base local_10;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_10._vptr_Base = (void **)&PTR_virtual_func_001059c8;
 local_20 = (undefined **)&PTR_virtual_func_00105a08;
 local_18 = 3;
  iVar1 = Base_virtual_func(&local_10, 0);
 iVar1 = 0;
 (*(code *)*local_20)((void *)0);
 iVar2 = 0;
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_30;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 local_30.super_BaseA._vptr_BaseA = (void **)&PTR_funcA_00105a50;
 local_30.super_BaseB._vptr_BaseB = (void **)&PTR__ZThn16_N12MultiDerived5funcBEv_00105a80;
 local_30.super_BaseA.dataA = 100;
 local_30.super_BaseB.dataB = 200;
  iVar1 = MultiDerived_funcA(&local_30);
 iVar2 = BaseB_funcB(&local_30.super_BaseB);
 iVar2 = 0;
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_EAX;
 int iVar1;
 undefined **local_20;
 undefined4 local_18;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_20 = (undefined **)&PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0;
 local_18 = 0x32;
  _ZTv0_n24_N14DiamondDerived4funcEv();
 local_18 = 100;
 (*(code *)*local_20)((void *)0);
 iVar1 = 0;
 extraout_EAX = 0;
 return iVar1 + extraout_EAX;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

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



/* Function: test_cpp_lambda @ 00102480 */

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



/* Function: test_cpp_exception @ 00102490 */

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
 /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,int_typeinfo,0);
 return 0x2a;
}



/* Function: test_cpp_smart_ptr @ 00102550 */

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



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char *__s1;
 char *__s1_00;
 uint uVar1;
 int iVar2;
 void **plVar3;
 void **plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 plVar3 = (void **)operator_new(8);
 *plVar3 = (void *)&PTR__RTTIBase_00105d78;
 plVar4 = (void **)operator_new(8);
 *plVar4 = (void *)&PTR__RTTIBase_00105da0;
 __s1 = *(char **)(*(long *)((char *)*plVar3 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else {
 uVar7 = 0;
 if (*__s1 != '*') {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar2 != 0) {
 uVar7 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(long *)((char *)*plVar4 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else if (*__s1_00 == '*') {
 bVar8 = false;
 }
 else {
 iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar8 = iVar2 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar8) {
 uVar1 = uVar7;
 }
  /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar5 = (long)__dynamic_cast(plVar3,(void *)&PTR__RTTIBase_00105d78,(void *)&PTR__RTTIBase_00105da0,0);
  uVar7 = uVar1 + 100;
  if (lVar5 == 0) {
    uVar7 = uVar1;
  }
  /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  lVar5 = (long)__dynamic_cast(plVar4,(void *)&PTR__RTTIBase_00105d78,(void *)&PTR__RTTIBase_00105da0,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(void *))(*(code *)(*(char **)plVar3 + 8)))(plVar3);
 ((void (*)(void *))(*(code *)(*(char **)plVar4 + 8)))(plVar4);
 return (int)sVar6 + uVar1;
}







/* Function: test_cpp_oo_features @ 001028e0 */

int test_cpp_oo_features(void)

{
 test_cpp_member_func();
 test_cpp_constructor();
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 test_cpp_diamond_inheritance();
 test_cpp_operator_overload();
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
 return 0;
}



/* Function: main @ 001028f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102900 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00102910 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return x * this_ptr->multiplier;
}















/* Function: template_max_int @ 00102950 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 00102960 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00102970 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102980 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00102990 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if ((long)iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001029b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this_ptr->size)) {
 iVar1 = this_ptr->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 001029d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container @ 001029e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 001029f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this_ptr,double value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if ((long)iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102a10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this_ptr->size)) {
 dVar1 = this_ptr->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102a30 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: getName @ 00102a40 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 00102a50 */

/* DWARF original prototype: void ~Base(Base * this) */

void Base_destructor_deleting(Base *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getName @ 00102a60 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: ~Derived @ 00102a70 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void Derived_destructor(Derived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcA @ 00102a80 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00102a90 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void MultiDerived_destructor_deleting(MultiDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 00102aa0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00102ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
 return;
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00102ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00102ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
 long in_RDI;
 
 operator_delete((void *)(in_RDI + -0x10));
 return;
}



/* Function: funcA @ 00102ae0 */

/* DWARF original prototype: int funcA(BaseA * this) */

int BaseA_funcA(BaseA *this_ptr)

{
 return 10;
}







/* Function: ~BaseA @ 00102b00 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void BaseA_destructor_deleting(BaseA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 00102b10 */

/* DWARF original prototype: int funcB(BaseB * this) */

int BaseB_funcB(BaseB *this_ptr)

{
 return 0x14;
}







/* Function: ~BaseB @ 00102b30 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void BaseB_destructor(BaseB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00102b40 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((long)&this_ptr->dataA + (long)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}







/* Function: ~MiddleA @ 00102b70 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor(MiddleA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00102b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00102ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00102bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
 long *in_RDI;
 
 operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00102bc0 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((long)&this_ptr->dataB + (long)this_ptr->_vptr_MiddleB[-3]) + 200;
}







/* Function: ~MiddleB @ 00102bf0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor(MiddleB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00102c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00102c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00102c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
 long *in_RDI;
 
 operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00102c40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((long)&(this_ptr->super_MiddleA).dataA + (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor_deleting(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 00102c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 00102c90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00102ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
 long in_RDI;
 
 operator_delete((void *)(in_RDI + -0x10));
 return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00102cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00102ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
 long *in_RDI;
 
 operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00102cf0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this_ptr)

{
 return 100;
}







/* Function: ~VirtualBase @ 00102d10 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void VirtualBase_destructor_deleting(VirtualBase *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~RTTIDerivedA @ 00102d20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00102d30 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}







/* Function: ~RTTIDerivedB @ 00102d50 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00102d60 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
