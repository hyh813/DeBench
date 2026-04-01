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
#define bool _Bool
typedef unsigned int uint;
typedef unsigned long ulong;

/* Ghidra-specific type definitions */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long long undefined7;
typedef unsigned char undefined;
typedef void *code;

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;

/* Incomplete type definitions for virtual classes */
struct DiamondDerived {
    void **vtable;
    int data;
};

struct MiddleA {
    void **vtable;
    int data;
};

struct MiddleB {
    void **vtable;
    int data;
};

struct MultiDerived {
    void **vtable;
    int data;
};

struct Derived {
    void **vtable;
    int data;
};

/* Function forward declarations */
extern int Base_virtual_func(struct Base *this, int param_1);
extern undefined8 MultiDerived_funcA(struct MultiDerived *this);
extern undefined8 MultiDerived_funcB(void);
extern int DiamondDerived_func(struct DiamondDerived *this);

/* Typedefs for C compatibility */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* C++ runtime declarations */
struct std__ioinit_struct {
    int _0;
};

/* C-compatible name for std::__ioinit */
extern struct std__ioinit_struct std___ioinit;

/* std::ios_base::Init type */
typedef struct std_ios_base_Init std_ios_base_Init;

/* std namespace removed - using C-compatible declarations */

/* Declaration for deregister_tm_clones */
extern void deregister_tm_clones(void);

/* String function declarations */
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern void *__dso_handle;
extern char completed_0;
extern void free(void *ptr);

/* External vtable and function pointers */
extern void *PTR_virtual_func_001139a8;
extern void *PTR_virtual_func_001139e8;
extern void *PTR_funcB_00113a60;
extern void *PTR_func_00113ba0;
extern void *PTR__RTTIBase_00113d58;
extern void *PTR__RTTIBase_00113d80;

/* External data variables */

/* Ghidra macros */
#define CONCAT44(high, low) (((uint64_t)(uint)(high) << 32) | ((uint64_t)(uint)(low) & 0xFFFFFFFF))

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
extern char DAT_001025ec;

/* C++ ABI and CRT functions */
extern int __cxa_atexit(void (*)(void*), void*, void*);
extern void __cxa_finalize(void*);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, void*, void*) __attribute__((noreturn));
extern void *__dynamic_cast(void*, void*, void*, int);

/* Typeinfo for int */
extern const void int_typeinfo;
#define int__typeinfo int_typeinfo

/* Memory operators */
extern void *operator_new(size_t);
extern void *operator_new__(size_t);
extern void operator_delete(void*);
extern void operator_delete__(void*);

/* Implementation of operator delete */
void operator_delete(void *ptr) {
    free(ptr);
}

void operator_delete__(void *ptr) {
    free(ptr);
}

/* Implementation of operator new */
void *operator_new(size_t size) {
    (void)size;
    return (void *)0;
}

void *operator_new__(size_t size) {
    (void)size;
    return (void *)0;
}

/* std::ios_base::Init */
typedef struct std_ios_base_Init std_ios_base_Init;
extern void std_ios_base_Init_Init(std_ios_base_Init *this);
extern void std_ios_base_Init_dtor(std_ios_base_Init *this);

struct Base {
    void **vtable;
};

struct Container_int {
    void **vtable;
    int data[10];
    int size;
};

struct Container_double {
    void **vtable;
    double data[10];
    int size;
};

struct LifecycleClass {
    /* static int instance_count; - declared as global for C compatibility */
};

/* C-compatible static member */
extern int LifecycleClass__instance_count;

typedef struct LifecycleClass LifecycleClass;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101630 @ 00101630 */

void FUN_00101630(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001017c0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((std_ios_base_Init *)&std___ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_dtor,&std___ioinit,&__dso_handle);
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
/* test_cpp_member_func() */

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



/* Function: test_cpp_constructor @ 00101964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 long lVar3;
 
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 lVar3 = 0;
 do {
 *(int *)((long)pvVar1 + lVar3) = iVar2;
 lVar3 = lVar3 + 4;
 iVar2 = iVar2 + 10;
 } while (lVar3 != 0x14);
 LifecycleClass__instance_count = LifecycleClass__instance_count + 1;
 iVar2 = *(int *)((long)pvVar1 + 8) + LifecycleClass__instance_count;
 operator_delete__(pvVar1);
 LifecycleClass__instance_count = LifecycleClass__instance_count + -1;
 return iVar2 + LifecycleClass__instance_count * 1000;
}



/* Function: call_virtual_func @ 001019d0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(int (*)(Base*, int))**(void **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 001019ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_30;
 undefined4 local_28;
 undefined **local_8;
 
 local_8 = &PTR_virtual_func_001139a8;
 local_30 = &PTR_virtual_func_001139e8;
 local_28 = 3;
 iVar1 = ((int (*)(Base*, int))(*local_8))((Base *)&local_8,5);
 iVar2 = ((int (*)(Base*, int))(*local_30))((Base *)local_30,5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00101a5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_30;
 undefined4 local_28;
 
 local_30 = &PTR_funcB_00113a60;
 local_28 = 200;
 iVar1 = MultiDerived_funcA((struct MultiDerived *)local_30);
 iVar2 = ((undefined8 (*)(void*))(*local_30))(local_30);
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 00101acc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_40;
 undefined4 local_38;
 
 local_40 = &PTR_func_00113ba0;
 local_38 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_40);
 local_38 = 100;
 iVar2 = ((int (*)(DiamondDerived*))(*local_40))((DiamondDerived *)&local_40);
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 00101b54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101b6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00101b94 to 00101ba3 has its CatchHandler @ 00101ba8 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00101c64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

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
 
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00113d58;
 plVar5 = operator_new(8);
 lVar8 = *plVar4;
 *plVar5 = 0;
 *plVar5 = (long)&PTR__RTTIBase_00113d80;
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
 if (!bVar2) {
 uVar1 = uVar7;
 }
 lVar8 = (long)__dynamic_cast(plVar4,&int_typeinfo,&int_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 100;
 }
 lVar8 = (long)__dynamic_cast(plVar5,&int_typeinfo,&int_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 200;
 }
 if (*__s1_00 == '*') {
 __s1_00 = __s1_00 + 1;
 }
 sVar6 = strlen(__s1_00);
 {
 void (*dtor1)(void*) = (void (*)(void*))(*(void **)(*(void **)plVar4 + 1));
 dtor1(plVar4);
 }
 {
 void (*dtor2)(void*) = (void (*)(void*))(*(void **)(*plVar5 + 8));
 dtor2(plVar5);
 }
 return uVar1 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 int iVar2;
 size_t sVar3;
 void *pvVar4;
 ulong uVar5;
 long lVar6;
 undefined **local_68;
 undefined4 local_60;
 undefined4 uStack_5c;
 undefined4 auStack_58 [2];
 undefined4 uStack_50;
 undefined4 uStack_4c;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 local_40;
 undefined4 uStack_3c;
 undefined4 local_38;
 
 puts(&DAT_001025f9);
 local_60 = 10;
 auStack_58[1] = 0;
 uStack_5c = 0x74736554;
 auStack_58[0] = 0;
 uStack_44 = 0;
 local_40 = 0;
 uStack_50 = 0;
 uStack_4c = 0;
 local_48 = 0;
 sVar3 = strlen((char *)((ulong)&local_60 | 4));
 printf(&DAT_00102495,(ulong)((int)sVar3 + 0x125c));
 pvVar4 = operator_new__(0x14);
 iVar1 = 0;
 lVar6 = 0;
 do {
 *(int *)((long)pvVar4 + lVar6) = iVar1;
 lVar6 = lVar6 + 4;
 iVar1 = iVar1 + 10;
 } while (lVar6 != 0x14);
 LifecycleClass__instance_count = LifecycleClass__instance_count + 1;
 iVar1 = *(int *)((long)pvVar4 + 8) + LifecycleClass__instance_count;
 operator_delete__(pvVar4);
 LifecycleClass__instance_count = LifecycleClass__instance_count + -1;
 printf(&DAT_001024b3,(ulong)(uint)(iVar1 + LifecycleClass__instance_count * 1000));
 auStack_58[0] = 3;
 local_68 = &PTR_virtual_func_001139a8;
 local_60 = 0x1139e8;
 uStack_5c = 0;
 iVar1 = Base_virtual_func((Base *)&local_68,5);
 iVar2 = Base_virtual_func((Base *)local_68,5);
 printf(&DAT_001024cf,(ulong)(iVar1 + iVar2 + 0x15));
 local_60 = 0x113a30;
 uStack_5c = 0;
 uStack_50 = 0x113a60;
 uStack_4c = 0;
 auStack_58[0] = 100;
 local_48 = 200;
 iVar1 = MultiDerived_funcB();
 printf(&DAT_001024eb,(ulong)(iVar1 + 0x1f));
 local_60 = 0x113b38;
 uStack_5c = 0;
 local_40 = 0x113ba0;
 uStack_3c = 0;
 uStack_50 = 0x113b68;
 uStack_4c = 0;
 local_38 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_40);
 *(undefined4 *)((long)auStack_58 + *(long *)(((void *)CONCAT44(uStack_5c,local_60) + -0x18))) = 100;
 iVar2 = ((int (*)(DiamondDerived*))(*(void **)local_40))((DiamondDerived *)&local_40);
 printf(&DAT_00102507,(ulong)(uint)(iVar2 + iVar1));
 printf(&DAT_00102524,0x16);
 printf(&DAT_00102540,0x27);
 printf(&DAT_0010255c,0x10);
 printf(&DAT_00102578,0x55);
 uVar5 = test_cpp_exception();
 printf(&DAT_00102594,uVar5 & 0xffffffff);
 printf(&DAT_001025b1,0x2bf);
 uVar5 = test_cpp_rtti();
 iVar1 = printf(&DAT_001025ce,uVar5 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00102050 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102068 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00102070 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return *(int *)(this + 8) * param_1;
}



/* Function: ~Base @ 0010207c */

/* Base::~Base() */

void Base_dtor(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102080 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102084 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 00102088 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00102094 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001020a0 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001020b4 */

/* Container<int>::Container() */

void Container_int__ctor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001020bc */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001020d8 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001020f8 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00102100 */

/* Container<double>::Container() */

void Container_double__ctor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00102108 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00102124 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00102140 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00102148 */

/* Base::getName() const */

char * Base_getName(Base *this)

{
 return (char *)&DAT_001025ec;
}



/* Function: ~Base @ 00102154 */

/* Base::~Base() */

void Base_dtor_delete(Base *this)

{
 operator_delete(this);
}



/* Function: getName @ 00102168 */

/* Derived::getName() const */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00102174 */

/* Derived::~Derived() */

void Derived_dtor(Derived *this)

{
 return;
}



/* Function: ~Derived @ 00102178 */

/* Derived::~Derived() */

void Derived_dtor_delete(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00102188 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(struct MultiDerived *this)

{
 return 0x1e;
}







/* Function: ~MultiDerived @ 00102194 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor_delete(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 001021a4 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 001021ac */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: ~MultiDerived @ 001021b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk1(MultiDerived *this)

{
    return;
}



/* Function: ~MultiDerived @ 001021b8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk2(MultiDerived *this)

{
 operator_delete(this + -0x10);
 return;
}



/* Function: funcA @ 001021d0 */

/* BaseA::funcA() */

undefined8 BaseA_funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 001021d8 */

/* BaseA::~BaseA() */

void BaseA_dtor(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 001021dc */

/* BaseA::~BaseA() */

void BaseA_dtor_delete(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 001021f0 */

/* BaseB::funcB() */

undefined8 BaseB_funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 001021f8 */

/* BaseB::~BaseB() */

void BaseB_dtor(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 001021fc */

/* BaseB::~BaseB() */

void BaseB_dtor_delete(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00102210 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00102228 */

/* MiddleA::~MiddleA() */

void MiddleA_dtor(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 0010222c */

/* MiddleA::~MiddleA() */

void MiddleA_dtor_delete(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00102240 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_virtual_thunk(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00102264 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_virtual_thunk1(MiddleA *this)

{
    return;
}



/* Function: ~MiddleA @ 00102268 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_virtual_thunk2(MiddleA *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00102288 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 001022a0 */

/* MiddleB::~MiddleB() */

void MiddleB_dtor(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 001022a4 */

/* MiddleB::~MiddleB() */

void MiddleB_dtor_delete(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 001022b8 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 001022dc */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_virtual_thunk1(MiddleB *this)

{
    return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_virtual_thunk2(MiddleB *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00102300 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}







/* Function: ~DiamondDerived @ 0010231c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 0010232c */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk1(DiamondDerived *this)

{
 return *(int *)(this + -0x10 + *(long *)(*(long *)(this + -0x10) + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102344 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk1(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102348 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk2(DiamondDerived *this)

{
 operator_delete(this + -0x10);
 return;
}



/* Function: func @ 00102360 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_virtual_thunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102384 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_virtual_thunk1(DiamondDerived *this)

{
    (void)this;
    return;
}



/* Function: ~DiamondDerived @ 00102388 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_virtual_thunk2(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 001023a8 */

/* VirtualBase::func() */

undefined8 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 001023b0 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_dtor(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 001023b4 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_dtor_delete(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 001023c8 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor_delete(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 001023dc */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 001023e4 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001023e8 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor_delete(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 001023fc */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 85 */
