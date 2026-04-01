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

/* Additional type definitions for decompiled code */
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)(void);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;

struct Derived {
    void *vtable;
    int data;
};
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

struct BaseA {
    void *vtable;
    int data;
};

struct BaseB {
    void *vtable;
    int data;
};

struct MiddleA {
    void *vtable;
    int data;
};

struct MiddleB {
    void *vtable;
    int data;
};

struct VirtualBase {
    void *vtable;
    int data;
};

struct RTTIBase {
    void *vtable;
    int data;
};

struct RTTIDerivedA {
    void *vtable;
    int data;
};

struct RTTIDerivedB {
    void *vtable;
    int data;
};
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};
typedef struct LifecycleClass LifecycleClass;

/* Global variables for classes */
struct LifecycleClass {
    int instance_count;
};
struct LifecycleClass LifecycleClass_inst = {0};

/* Pointer variables for vtables and function pointers */
void **PTR_virtual_func_001059c8;
void **PTR_virtual_func_00105a08;
void **PTR_funcB_00105a80;
void **PTR_func_00105bc0;
void *PTR__RTTIBase_00105d78;
void *PTR__RTTIBase_00105da0;

struct Base {
    void *vtable;
    int data;
};

struct MultiDerived {
    void *vtable;
    int data;
};

struct DiamondDerived {
    void *vtable;
    int data;
};

/* External function declarations */
extern size_t strlen(const char *s);
extern void *operator_new__(size_t size);
extern void operator_delete__(void *ptr);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *typeinfo, void *dest);
extern long __dynamic_cast(void *src, void *src_type, void *dst_type, long flags);
extern int strcmp(const char *s1, const char *s2);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern char *__builtin_strncpy(char *dest, const char *src, size_t n);

/* C++ member function declarations */
extern int Base_virtual_func(Base *this_ptr, int param_1);
extern int MultiDerived_funcA(void);
extern int MultiDerived_funcB(void);
extern int DiamondDerived_func(DiamondDerived *this_ptr);

/* Function definition for MultiDerived_funcB */
int MultiDerived_funcB(void)
{
 return 0x28;
}

/* External typeinfo declarations */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* Typeinfo definitions */
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

/* External data declarations */
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
extern char DAT_001031d4[];

/* Data definitions for format strings */
char DAT_001030b7[] = "%d\n";
char DAT_001030d3[] = "%d\n";
char DAT_00103160[] = "%d\n";
char DAT_001031e1[] = "Testing C++ OO features\n";
char DAT_0010307d[] = "%d\n";
char DAT_0010309b[] = "%d\n";
char DAT_001030ef[] = "%d\n";
char DAT_0010310c[] = "%d\n";
char DAT_00103128[] = "%d\n";
char DAT_00103144[] = "%d\n";
char DAT_0010317c[] = "%d\n";
char DAT_00103199[] = "%d\n";
char DAT_001031b6[] = "%d\n";
char DAT_001031d4[] = "Base";

/* Additional type definitions */
typedef unsigned long ulong;

/* Ghidra macro for concatenating two 32-bit values into 64-bit */
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00102150 */

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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 puVar1 = (undefined4 *)operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_inst.instance_count = LifecycleClass_inst.instance_count + 1;
 iVar4 = LifecycleClass_inst.instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_inst.instance_count = LifecycleClass_inst.instance_count + -1;
 return LifecycleClass_inst.instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 00102310 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 void ***local_20;
 undefined4 local_18;
 void ***local_10;
 
 local_10 = (void ***)&PTR_virtual_func_001059c8;
 local_20 = (void ***)&PTR_virtual_func_00105a08;
 local_18 = 3;
 iVar1 = Base_virtual_func((Base *)&local_10,5);
 (*(code *)*local_20)();
 iVar2 = 0;
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 void ***local_20;
 undefined4 local_18;
 
 local_20 = (void ***)&PTR_funcB_00105a80;
 local_18 = 200;
 iVar1 = MultiDerived_funcA();
 (*(code *)*local_20)();
 iVar2 = 0;
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 void ***local_20;
 undefined4 local_18;
 
 local_20 = (void ***)&PTR_func_00105bc0;
 local_18 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_18 = 100;
 (*(code *)*local_20)();
 iVar2 = 0;
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00102490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0,0);
}



/* Function: test_cpp_smart_ptr @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char *__s1;
 char *__s1_00;
 uint uVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIBase_00105d78;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00105da0;
 __s1 = *(char **)(*(long *)(*plVar3 + -8) + 8);
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
 __s1_00 = *(char **)(*(long *)(*plVar4 + -8) + 8);
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
 lVar5 = __dynamic_cast(plVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 lVar5 = __dynamic_cast(plVar4,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (*(code *)(*plVar3 + 8))();
 (*(code *)(*plVar4 + 8))();
 return (int)sVar6 + uVar1;
}



/* Function: test_cpp_oo_features @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 undefined4 *puVar4;
 undefined4 *puVar5;
 int iVar6;
 long lVar7;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 auStack_40 [2];
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 local_30;
 undefined4 uStack_2c;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 local_20;
 undefined **local_18;
 
 puts((const char *)&DAT_001031e1);
 uStack_44 = 0x74736554;
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 uStack_38 = 0;
 uStack_34 = 0;
 local_30 = 0;
 uStack_2c = 0;
 local_28 = 0;
 local_48 = 10;
 sVar3 = strlen((char *)&uStack_44);
 lVar7 = 0;
 printf((const char *)&DAT_0010307d,(int)sVar3 + 0x125c);
 puVar4 = (undefined4 *)operator_new__(0x14);
 puVar5 = puVar4;
 do {
 *puVar5 = (int)lVar7;
 lVar7 = lVar7 + 10;
 puVar5 = puVar5 + 1;
 } while (lVar7 != 0x32);
 LifecycleClass_inst.instance_count = LifecycleClass_inst.instance_count + 1;
 iVar6 = LifecycleClass_inst.instance_count + puVar4[2];
 operator_delete__(puVar4);
 LifecycleClass_inst.instance_count = LifecycleClass_inst.instance_count + -1;
 printf((const char *)&DAT_0010309b,(int)(LifecycleClass_inst.instance_count * 1000 + iVar6));
 local_18 = (undefined **)&PTR_virtual_func_001059c8;
 local_48 = 0x105a08;
 uStack_44 = 0;
 auStack_40[0] = 3;
 iVar6 = Base_virtual_func((Base *)&local_18,5);
 (**(code **)CONCAT44(uStack_44,local_48))();
 iVar1 = 0;
 printf((const char *)&DAT_001030b7,(int)(iVar6 + iVar1 + 0x15));
 local_48 = 0x105a50;
 uStack_44 = 0;
 uStack_38 = 0x105a80;
 uStack_34 = 0;
 auStack_40[0] = 100;
 local_30 = 200;
 iVar6 = MultiDerived_funcB();
 printf((const char *)&DAT_001030d3, (int)(iVar6 + 0x1f));
 local_48 = 0x105b58;
 uStack_44 = 0;
 local_28 = 0x105bc0;
 uStack_24 = 0;
 uStack_38 = 0x105b88;
 uStack_34 = 0;
 local_20 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)&local_28);
 *(undefined4 *)((long)auStack_40 + *(long *)(CONCAT44(uStack_44,local_48) + -0x18)) = 100;
 (**(code **)CONCAT44(uStack_24,local_28))();
 iVar1 = 0;
 printf((const char *)&DAT_001030ef,(int)(iVar6 + iVar1));
 printf((const char *)&DAT_0010310c,0x16);
 printf((const char *)&DAT_00103128,0x27);
 printf((const char *)&DAT_00103144,0x10);
 printf((const char *)&DAT_00103160,0x55);
 test_cpp_exception();
 printf((const char *)&DAT_0010317c,0);
 printf((const char *)&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf((const char *)&DAT_001031b6,(int)uVar2);
 return;
}



/* Function: main @ 001028f0 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102900 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00102910 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 8);
}



/* Function: ~Base @ 00102920 */

/* Base::~Base() */

void Base_destructor(Base *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00102930 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102940 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return;
}



/* Function: template_max_int @ 00102950 */

/* int template_max_int(int, int) */

int template_max_int(int param_1, int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00102960 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00102970 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1, int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_Container @ 00102980 */

/* Container_int::Container_int() */

void Container_int_Container(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 00102990 */

/* Container_int::push(int) */

void Container_int_push(Container_int *this_ptr, int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: Container_int_get @ 001029b0 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr, int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(undefined4 *)(this_ptr + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 001029d0 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container_double_Container @ 001029e0 */

/* Container_double::Container_double() */

void Container_double_Container(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 001029f0 */

/* Container_double::push(double) */

void Container_double_push(Container_double *this_ptr, double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: Container_double_get @ 00102a10 */

/* Container_double::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr, int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 uVar1 = *(undefined8 *)(this_ptr + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: Container_double_getSize @ 00102a30 */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: getName @ 00102a40 */

/* Base::getName() const */

char * Base_getName(void)

{
 return (char *)&DAT_001031d4;
}



/* Function: ~Base @ 00102a50 */

/* Base::~Base() */

void Base_destructor_wrapper(Base *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getName @ 00102a60 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 00102a70 */

/* Derived::~Derived() */

void Derived_destructor_wrapper(Derived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcA @ 00102a80 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA_wrapper(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00102a90 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_wrapper(MultiDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 00102aa0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB_wrapper(void)

{
 return 0x28;
}



/* Function: funcB @ 00102ab0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: ~MultiDerived @ 00102ac0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00102ad0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -0x10);
 return;
}



/* Function: funcA @ 00102ae0 */

/* BaseA::funcA() */

undefined8 BaseA_funcA(void)

{
 return 10;
}



/* Function: BaseA_destructor @ 00102af0 */

/* BaseA::~BaseA() */

void BaseA_destructor(BaseA *this_ptr)

{
 return;
}



/* Function: ~BaseA @ 00102b00 */

/* BaseA::~BaseA() */

undefined8 BaseA_destructor_wrapper(BaseA *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: funcB @ 00102b10 */

/* BaseB::funcB() */

undefined8 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: BaseB_destructor @ 00102b20 */

/* BaseB::~BaseB() */

void BaseB_destructor(BaseB *this_ptr)

{
 return;
}



/* Function: ~BaseB @ 00102b30 */

/* BaseB::~BaseB() */

undefined8 BaseB_destructor_wrapper(BaseB *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: func @ 00102b40 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00102b60 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor(MiddleA *this_ptr)

{
 return;
}



/* Function: ~MiddleA @ 00102b70 */

/* MiddleA::~MiddleA() */

undefined8 MiddleA_destructor_wrapper(MiddleA *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: func @ 00102b80 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this_ptr + -0x18)) + 0x96;
}



/* Function: ~MiddleA @ 00102ba0 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk(MiddleA *this_ptr)

{
 return;
}



/* Function: ~MiddleA @ 00102bb0 */

/* virtual thunk to MiddleA::~MiddleA() */

undefined8 MiddleA_destructor_thunk2(MiddleA *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr + *(long *)(*(long *)this_ptr + -0x20));
 return in_RAX;
}



/* Function: func @ 00102bc0 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 00102be0 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor(MiddleB *this_ptr)

{
 return;
}



/* Function: ~MiddleB @ 00102bf0 */

/* MiddleB::~MiddleB() */

undefined8 MiddleB_destructor_wrapper(MiddleB *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: func @ 00102c00 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this_ptr + -0x18)) + 200;
}



/* Function: ~MiddleB @ 00102c20 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk(MiddleB *this_ptr)

{
 return;
}



/* Function: ~MiddleB @ 00102c30 */

/* virtual thunk to MiddleB::~MiddleB() */

undefined8 MiddleB_destructor_thunk2(MiddleB *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr + *(long *)(*(long *)this_ptr + -0x20));
 return in_RAX;
}



/* Function: func @ 00102c40 */

/* DiamondDerived::func() */

int DiamondDerived_func_wrapper(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c60 */

/* DiamondDerived::~DiamondDerived() */

undefined8 DiamondDerived_destructor_wrapper(DiamondDerived *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: func @ 00102c70 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)(this_ptr + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c90 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ca0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined8 DiamondDerived_destructor_thunk2(DiamondDerived *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr + -0x10);
 return in_RAX;
}



/* Function: func @ 00102cb0 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this_ptr + -0x18)) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102cd0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk3(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ce0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

undefined8 DiamondDerived_destructor_thunk4(DiamondDerived *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr + *(long *)(*(long *)this_ptr + -0x20));
 return in_RAX;
}



/* Function: func @ 00102cf0 */

/* VirtualBase::func() */

undefined8 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102d00 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor(VirtualBase *this_ptr)

{
 return;
}



/* Function: ~VirtualBase @ 00102d10 */

/* VirtualBase::~VirtualBase() */

undefined8 VirtualBase_destructor_wrapper(VirtualBase *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: ~RTTIDerivedA @ 00102d20 */

/* RTTIDerivedA::~RTTIDerivedA() */

undefined8 RTTIDerivedA_destructor_wrapper(RTTIDerivedA *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: getType @ 00102d30 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00102d40 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00102d50 */

/* RTTIDerivedB::~RTTIDerivedB() */

undefined8 RTTIDerivedB_destructor_wrapper(RTTIDerivedB *this_ptr)

{
 undefined8 in_RAX;
 
 operator_delete(this_ptr);
 return in_RAX;
}



/* Function: getType @ 00102d60 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}

/* Stub implementations for external C++ runtime functions */

void *operator_new__(size_t size)
{
 return (void *)0x1000;
}

void operator_delete__(void *ptr)
{
 return;
}

void *operator_new(size_t size)
{
 return (void *)0x1000;
}

void operator_delete(void *ptr)
{
 return;
}

void *__cxa_allocate_exception(size_t size)
{
 return (void *)0x2000;
}

void __cxa_throw(void *exc, void *typeinfo, void *dest)
{
 return;
}

long __dynamic_cast(void *src, void *src_type, void *dst_type, long flags)
{
 return 0;
}

int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return 0;
}

int MultiDerived_funcA(void)
{
 return 0;
}

/* Stub implementations for standard C library functions */

int printf(const char *format, ...)
{
 return 0;
}

size_t strlen(const char *s)
{
 size_t len = 0;
 while (s[len] != '\0') {
  len++;
 }
 return len;
}

int puts(const char *s)
{
 return 0;
}

int strcmp(const char *s1, const char *s2)
{
 while (*s1 && (*s1 == *s2)) {
  s1++;
  s2++;
 }
 return *(unsigned char *)s1 - *(unsigned char *)s2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
