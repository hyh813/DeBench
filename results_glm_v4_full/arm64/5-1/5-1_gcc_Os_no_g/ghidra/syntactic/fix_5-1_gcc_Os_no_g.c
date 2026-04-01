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
#ifndef NULL
#define NULL ((void *)0)
#endif

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Type definitions for decompiler-generated types */
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef int undefined;

/* Forward declaration for Base class */
typedef struct Base Base;
struct Base {
    undefined8 **vtable;
};

/* Forward declarations for derived classes */
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;

/* MultiDerived structure definition */
struct MultiDerived {
    void *vtable;
    void *vtable2;
    void *vtable3;
};
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Derived structure definition */
struct Derived {
    void *vtable;
    int multiplier;
};

/* MiddleA structure definition (virtual inheritance from VirtualBase) */
struct MiddleA {
    void *vtable;      // vtable for MiddleA
    int data_middleA;
    void *virtualbase;  // VirtualBase subobject
};

/* MiddleB structure definition (virtual inheritance from VirtualBase) */
struct MiddleB {
    void *vtable;      // vtable for MiddleB
    int data_middleB;
    void *virtualbase;  // VirtualBase subobject
};

/* DiamondDerived structure definition (virtual inheritance) */
struct DiamondDerived {
    void *vtable_middleA;  // vtable for MiddleA subobject
    int data_middleA;
    void *vtable_middleB;  // vtable for MiddleB subobject
    int data_middleB;
    int value;
};

/* Function pointer type for indirect calls */
typedef void (*code)(void *);
typedef int (*virtual_func_type)(Base *, int);

/* Stack protection variables (extern declarations) */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;

/* String functions */
extern char *strncpy(char *, const char *, size_t);
extern size_t strlen(const char *);
extern int strcmp(const char *, const char *);
extern int puts(const char *);

/* CRT function declarations */
extern void deregister_tm_clones(void);
extern void __stack_chk_fail(void *, void *, int, long);

/* C++ runtime function declarations */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void (*)(void *));
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_finalize(void *);
extern void *__dso_handle;

/* Typeinfo declarations */
typedef struct type_info type_info;
struct type_info {
    const char *name;
};
extern type_info int_typeinfo;
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* Forward declaration needed for __dynamic_cast */
extern void *__dynamic_cast(void *, const type_info *, const type_info *, ptrdiff_t);

/* C++ namespace stub - converted to C */
struct std_ios_base_Init {
    void *vtable;
};

/* Forward declarations for smart pointer types */
typedef struct unique_ptr_int_unique_ptr unique_ptr_int_unique_ptr;
struct unique_ptr_int_unique_ptr {
    void *ptr;
    void *deleter;
};
typedef struct unique_ptr_int_array_unique_ptr unique_ptr_int_array_unique_ptr;
struct unique_ptr_int_array_unique_ptr {
    void *ptr;
    void *deleter;
};
typedef struct unique_ptr_int unique_ptr_int;
struct unique_ptr_int {
    void *ptr;
};
typedef struct unique_ptr_int_array unique_ptr_int_array;
struct unique_ptr_int_array {
    void *ptr;
};
struct std___default_delete {
    void *vtable;
};
extern struct std_ios_base_Init std___ioinit;

/* Global variables for atexit handlers */
extern char completed_0;

/* String data constants */
extern char DAT_001025a0;
extern char DAT_001025b2;
extern char DAT_001025d6;
extern char DAT_001025f4;
extern char DAT_00102610;
extern char DAT_0010262c;
extern char DAT_00102648;
extern char DAT_00102665;
extern char DAT_00102681;
extern char DAT_0010269d;
extern char DAT_001026b9;
extern char DAT_001026d5;
extern char DAT_001026f2;
extern char DAT_0010270f;

/* Formatted output function */
extern int __printf_chk(int, const char *, ...);

/* LifecycleClass forward declaration */
typedef struct LifecycleClass LifecycleClass;
extern int LifecycleClass_instance_count;

/* Global vtable pointers */
extern void *PTR_virtual_func_00113868;
extern void *PTR_virtual_func_00113898;
extern void *PTR_func_001138e0;
extern void *PTR_func_00113918;
extern void *PTR_func_00113958;
extern void *PTR_func_00113990;
extern void *PTR_func_00113ac8;
extern void *PTR_func_00113b30;
extern void *PTR_func_00113af8;

/* RTTI typeinfo pointers */
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;

/* std::ios_base::Init methods */
extern void std_ios_base_Init__Init(struct std_ios_base_Init *this);
extern void std_ios_base_Init__dtor(struct std_ios_base_Init *this);

/* Memory operators */
extern void *operator_new(size_t);
extern void *operator_new__(size_t);
extern void operator_delete(void *, size_t);
extern void operator_delete__(void *);

/* unique_ptr constructors */
extern void std_unique_ptr_int_array_default_delete_int_array__unique_ptr(unique_ptr_int_array_unique_ptr *this);
extern void std_unique_ptr_int_default_delete_int__unique_ptr(unique_ptr_int_unique_ptr *this);

/* Template function forward declarations */
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* DiamondDerived function forward declarations */
extern int DiamondDerived_func(DiamondDerived *this);
extern void DiamondDerived_destructor(DiamondDerived *this);
extern void DiamondDerived_destructor_internal(DiamondDerived *this, int, undefined *);
extern void DiamondDerived_deleting_destructor(DiamondDerived *this);

/* Template macro definitions */
#define template_max(type) template_max_##type
#define template_swap(type) template_swap_##type

/* Container template forward declarations */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Container template definitions */
struct Container_int {
    int data[10];
    uint32_t size;
};

struct Container_double {
    double data[10];
    uint32_t size;
};

/* Container template macro definitions */
#define Container(type) Container_##type

extern void Container_int__Container(Container_int *this);
extern void Container_int__push(Container_int *this, int param_1);
extern int Container_int__get(Container_int *this, int param_1);
extern int Container_int__getSize(Container_int *this);

extern void Container_double__Container(Container_double *this);
extern void Container_double__push(Container_double *this, double param_1);
extern void Container_double__get(Container_double *this, int param_1);
extern int Container_double__getSize(Container_double *this);


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101650 @ 00101650 - CRT stub removed */



/* Function: test_cpp_exception @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Forward declaration */
void test_cpp_oo_features(void);

/* Function: main @ 001018d0 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
std_ios_base_Init__Init(&std___ioinit);
__cxa_atexit((void (*)(void *))std_ios_base_Init__dtor,&std___ioinit,&__dso_handle);
return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001019fc @ 001019fc */

void FUN_001019fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 return (*(virtual_func_type)*(void **)param_1)(param_1,param_2);
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 void **local_20;
 void **local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113868;
 local_18 = &PTR_virtual_func_00113898;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(iVar1 + 0x15 + iVar2),&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)((int)dVar2 + iVar1 + local_10 + local_c),&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int local_38 [10];
 int local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_10 = 1;
 local_38[0] = 10;
 Container_int__push((Container_int *)local_38,0x14);
 Container_int__push((Container_int *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(local_10 + iVar1),&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return local_10 + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 void (*f1)(void *);
 void (*f2)(void *);
 uintptr_t uVar1;
 uintptr_t uVar2;
 
 plVar3 = (long *)operator_new(8);
 *plVar3 = *(long *)&PTR__RTTIDerivedA_00113b58;
 plVar4 = (long *)operator_new(8);
 lVar8 = (long)*plVar3;
 *plVar4 = *(long *)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if (__s1 == "12RTTIDerivedA") {
 iVar7 = 10;
 }
 else if (cVar1 == '*') {
 iVar7 = 0;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 iVar2 = iVar7 + 0x14;
 lVar5 = (long)__dynamic_cast((void *)plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 uVar1 = (uintptr_t)*(long *)(lVar8 + 8);
 f1 = (void (*)(void *))uVar1;
 f1((void *)plVar3);
 uVar2 = (uintptr_t)*(long *)(*plVar4 + 8);
 f2 = (void (*)(void *))uVar2;
 f2((void *)plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 undefined8 local_20;
 undefined4 *puStack_18;
 void *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puStack_18 = operator_new(4);
 local_20 = 0;
 *puStack_18 = 200;
 /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
 local_10 = operator_new__(0x14);
 *(undefined8 *)local_10 = 0x200000001;
 *((undefined8 *)local_10 + 1) = 0x400000003;
 *(undefined4 *)((char *)local_10 + 16) = 5;
 std_unique_ptr_int_array_default_delete_int_array__unique_ptr
 ((unique_ptr_int_array_unique_ptr *)&local_10);
 std_unique_ptr_int_default_delete_int__unique_ptr
 ((unique_ptr_int_unique_ptr *)&puStack_18);
 std_unique_ptr_int_default_delete_int__unique_ptr
 ((unique_ptr_int_unique_ptr *)&local_20);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 DiamondDerived *local_38 [2];
 DiamondDerived *local_28;
 DiamondDerived *local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_38[0] = (DiamondDerived *)(void *)&PTR_func_00113ac8;
 local_18 = (DiamondDerived *)(void *)&PTR_func_00113b30;
 local_28 = (DiamondDerived *)(void *)&PTR_func_00113af8;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_18);
 DiamondDerived_destructor((DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_001025b2);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,uVar1);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,uVar1);
 return;
}



/* Function: virtual_func @ 001020d8 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001020e0 */

/* Base::getName() const */

void * Base_getName(void)

{
 return (void *)&DAT_001025a0;
}



/* Function: ~Base @ 001020ec */

/* Base::~Base() */

void Base_destructor(Base *this)

{
 return;
}



/* Function: virtual_func @ 001020f0 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 001020fc */

/* Derived::getName() const */

void * Derived_getName(void)

{
 return (void *)"Derived";
}



/* Function: funcA @ 00102108 */

/* MultiDerived::funcA() */

unsigned long MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00102110 */

/* MultiDerived::funcB() */

unsigned long MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00102118 */

/* non-virtual thunk to MultiDerived::funcB() */

unsigned long MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102120 */

/* VirtualBase::func() */

unsigned long VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor(VirtualBase *this)

{
 return;
}



/* Function: func @ 0010212c */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_virtual_thunk(MiddleA *this)

{
 return MiddleA_func(this + *(long *)(*(long *)this + -0x18));
}



/* Function: func @ 00102154 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *this)

{
 return MiddleB_func(this + *(long *)(*(long *)this + -0x18));
}



/* Function: func @ 0010217c */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102194 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_virtual_thunk(DiamondDerived *this)

{
 return DiamondDerived_func(this + *(long *)(*(long *)this + -0x18));
}



/* Function: func @ 001021a4 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this)

{
 return DiamondDerived_func(this + -0x10);
}



/* Function: ~MiddleA @ 001021ac */

/* MiddleA::~MiddleA() */

void MiddleA_destructor(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_virtual_thunk(MiddleA *this)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(void **)(this + lVar1) = *(void **)&PTR_func_001138e0;
 *(void **)(this + lVar1 + 0x10) = *(void **)&PTR_func_00113918;
}



/* Function: ~MiddleB @ 001021f0 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_virtual_thunk(MiddleB *this)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(void **)(this + lVar1) = *(void **)&PTR_func_00113958;
 *(void **)(this + lVar1 + 0x10) = *(void **)&PTR_func_00113990;
}



/* Function: getType @ 00102234 */

/* RTTIDerivedA::getType() const */

unsigned long RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 0010223c */

/* RTTIDerivedB::getType() const */

unsigned long RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102244 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102248 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 return;
}



/* Function: ~MultiDerived @ 0010224c */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102254 */

/* Derived::~Derived() */

void Derived_destructor(Derived *this)

{
 return;
}



/* Function: ~Base @ 00102258 */

/* Base::~Base() */

void Base_deleting_destructor(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102260 */

/* Derived::~Derived() */

void Derived_deleting_destructor(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102268 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_deleting_destructor(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_deleting_destructor_thunk(MultiDerived *this)

{
 MultiDerived_deleting_destructor(this + -0x10);
 return;
}



/* Function: ~VirtualBase @ 00102278 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_deleting_destructor(VirtualBase *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_deleting_destructor(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_deleting_destructor(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MiddleA @ 00102290 */

/* MiddleA::~MiddleA() */

void MiddleA_deleting_destructor(MiddleA *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_deleting_destructor_virtual_thunk(MiddleA *this)

{
 MiddleA_deleting_destructor(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 001022c0 */

/* MiddleB::~MiddleB() */

void MiddleB_deleting_destructor(MiddleB *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_deleting_destructor_virtual_thunk(MiddleB *this)

{
 MiddleB_deleting_destructor(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 001022f0 */

/* MiddleA::~MiddleA() */

void MiddleA_deleting_destructor_2(MiddleA *this, int in_w1, void *in_x2)

{
 void **ppuVar1;
 void *puVar2;
 void *pvVar3;
 
 if (in_w1 == 0) {
 pvVar3 = *(void **)in_x2;
 }
 else {
 pvVar3 = *(void **)&PTR_func_001138e0;
 }
 *(void **)this = pvVar3;
 if (in_w1 == 0) {
 ppuVar1 = (void **)((void **)in_x2)[1];
 puVar2 = (void *)(((void **)pvVar3)[-3]);
 }
 else {
 puVar2 = (void *)0x10;
 ppuVar1 = *(void **)&PTR_func_00113918;
 }
 *(void **)((char *)this + (long)puVar2) = ppuVar1;
 return;
}



/* Function: ~MiddleA @ 0010232c */

/* MiddleA::~MiddleA() */

void MiddleA_deleting_destructor_3(MiddleA *this)

{
 MiddleA_deleting_destructor_2(this, 1, NULL);
 return;
}



/* Function: ~MiddleB @ 00102338 */

/* MiddleB::~MiddleB() */

void MiddleB_deleting_destructor_2(MiddleB *this, int in_w1, void *in_x2)

{
 void **ppuVar1;
 void *puVar2;
 void *pvVar3;
 
 if (in_w1 == 0) {
 pvVar3 = *(void **)in_x2;
 }
 else {
 pvVar3 = *(void **)&PTR_func_00113958;
 }
 *(void **)this = pvVar3;
 if (in_w1 == 0) {
 ppuVar1 = (void **)((void **)in_x2)[1];
 puVar2 = (void *)(((void **)pvVar3)[-3]);
 }
 else {
 puVar2 = (void *)0x10;
 ppuVar1 = *(void **)&PTR_func_00113990;
 }
 *(void **)((char *)this + (long)puVar2) = ppuVar1;
 return;
}



/* Function: ~MiddleB @ 00102374 */

/* MiddleB::~MiddleB() */

void MiddleB_deleting_destructor_3(MiddleB *this)

{
 MiddleB_deleting_destructor_2(this, 1, NULL);
 return;
}



/* Function: template_max<int> @ 00102380 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 0010238c */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00102398 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001023ac */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this)

{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001023b4 */

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



/* Function: get @ 001023d0 */

/* Container<int>::get(int) const */

unsigned int Container_int_get(Container_int *this,int param_1)

{
 unsigned int uVar1;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001023f0 */

/* Container<int>::getSize() const */

unsigned int Container_int_getSize(Container_int *this)

{
 return *(unsigned int *)(this + 0x28);
}



/* Function: Container @ 001023f8 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this)

{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00102400 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 0010241c */

/* Container<double>::get(int) const */

unsigned long Container_double_get(Container_double *this,int param_1)

{
 unsigned long uVar1;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 0010243c */

/* Container<double>::getSize() const */

unsigned int Container_double_getSize(Container_double *this)

{
 return *(unsigned int *)(this + 0x50);
}



/* Function: ~unique_ptr @ 00102444 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void
std_unique_ptr_int_destructor
 (unique_ptr_int *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete(*(void **)this,4);
 }
 return;
}



/* Function: ~unique_ptr @ 00102458 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void
std_unique_ptr_int_array_destructor
 (unique_ptr_int_array *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_internal(DiamondDerived *this, int in_w1, undefined *in_x2)

{
 void **ppuVar1;
 void *puVar2;

 if (in_w1 == 0) {
 ppuVar1 = (void **)*(void **)in_x2;
 }
 else {
 ppuVar1 = (void **)&PTR_func_00113ac8;
 }
 *(void **)this = *ppuVar1;
 if (in_w1 == 0) {
 puVar2 = (void *)(long)ppuVar1[-3];
 ppuVar1 = (void **)((void **)in_x2)[5];
 }
 else {
 puVar2 = (void *)0x20;
 ppuVar1 = (void **)&PTR_func_00113b30;
 }
 *(void **)((char *)this + (long)puVar2) = *ppuVar1;
 if (in_w1 == 0) {
 ppuVar1 = (void **)((void **)in_x2)[6];
 }
 else {
 ppuVar1 = (void **)&PTR_func_00113af8;
 }
 *(void **)((char *)this + 0x10) = *ppuVar1;
 return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this, 1, NULL);
}



/* Function: ~DiamondDerived @ 00102524 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this + -0x10, 1, NULL);
}



/* Function: ~DiamondDerived @ 0010252c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this + *(long *)(*(long *)this + -0x20), 1, NULL);
}



/* Function: ~DiamondDerived @ 0010253c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this, 1, NULL);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk2(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this + -0x10, 1, NULL);
 return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk2(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this + *(long *)(*(long *)this + -0x20), 1, NULL);
 return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_2(DiamondDerived *this)

{
 DiamondDerived_destructor_internal(this, 1, NULL);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 89 */
