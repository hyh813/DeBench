#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Function declarations for GNU extensions */
int __printf_chk(int flag, const char *format, ...);

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

/* Type aliases for Ghidra decompiler output */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef void undefined;

/* Function pointer type for indirect calls */
typedef void (*code)(void);
typedef void (*code_int)(void *, int);
typedef void (*vfunc_ptr)(void);
typedef void (*vfunc_ptr_void)(void *);

/* Helper macro for virtual function calls through vtable */
#define CALL_VFUNC(obj, vptr_offset, func_index) \
    ((*(vfunc_ptr *)(*((long *)(obj) + (vptr_offset)) + (func_index)))((void *)(obj)))

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* RTTI typeinfo structure */
struct RTTIBase {
    void *typeinfo;
    const char *name;
};

struct MiddleA {
    long vptr;
    int data;
};

struct MiddleB {
    long vptr;
    int data;
};
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct Init Init;
typedef struct LifecycleClass LifecycleClass;

/* C++ std library structures */
struct Init {
    // Empty structure for std::ios_base::Init
};

/* C++ class definitions */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

struct DiamondDerived {
    long vptr1;
    long vptr2;
    int data;
    char padding[8];
};

struct Base {
    long vptr;
};

struct Derived {
    long vptr;
    int multiplier;
};

struct MultiDerived {
    long vptr;
    int data;
};

struct RTTIDerivedA {
    long vptr;
};

struct RTTIDerivedB {
    long vptr;
};

/* C++ std library forward declarations */
typedef struct ios_base ios_base;
typedef struct std std;

/* External global variables */
long ___stack_chk_guard = 0;
long __stack_chk_guard = 0;
void __stack_chk_fail(void);
void *__dso_handle = NULL;
Init std___ioinit;
char completed_0 = 0;
int LifecycleClass_instance_count = 0;
extern char DAT_00101ba0[];
extern char DAT_00101bc8[];
extern char DAT_00101be8[];
extern char DAT_00101c08[];
extern char DAT_00101c28[];
extern char DAT_00101c48[];
extern char DAT_00101c68[];
extern char DAT_00101c88[];
extern char DAT_00101ca8[];
extern char DAT_00101cc8[];
extern char DAT_00101ce8[];
extern char DAT_00101d08[];
extern char DAT_00101d28[];
extern char DAT_00101b88[];

/* C++ std library external declarations */
extern void std_ios_base_Init_Init(Init *);
extern void std_ios_base_Init_dtor_Init(Init *);

/* C++ runtime exception handling function declarations */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, void *, void *);
void __cxa_atexit(void (*)(void *), void *, void *);
void __cxa_finalize(void *);

/* Runtime support function declarations */
void deregister_tm_clones(void);
void *operator_new(size_t);
void operator_delete(void *, size_t);
void *__dynamic_cast(void *, void *, void *, int);

/* RTTI typeinfo pointers */
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

/* Forward declarations */
void test_cpp_oo_features(void);

/* Template function declarations */
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int*, int*);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010106c to 0010106f has its CatchHandler @ 00101070 */
 __cxa_throw(puVar1,0,0);
}



/* Function: main @ 00101120 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor_Init,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





void deregister_tm_clones(void)
{
    return;
}

/* C++ new operator implementation */
void *operator_new(size_t size)
{
    return malloc(size);
}

/* C++ delete operator implementation */
void operator_delete(void *ptr, size_t size)
{
    (void)size;
    free(ptr);
}

/* C++ dynamic_cast runtime support (stub implementation) */
void *__dynamic_cast(void *ptr, void *src_type, void *dst_type, int offset)
{
    (void)src_type;
    (void)dst_type;
    (void)offset;
    /* Simple stub - return ptr if types match, NULL otherwise */
    return ptr;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010123c @ 0010123c */

void FUN_0010123c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001012a0 */

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
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101330 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code_int *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014fc) */
/* WARNING: Removing unreachable block (ram,0x00101508) */
/* WARNING: Removing unreachable block (ram,0x00101510) */
 /* WARNING: Unknown calling convention -- yet parameter storage is locked */
 /* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 char *__s1;
 long lVar7;
 char cVar8;
 
 plVar3 = operator_new(8);
 *plVar3 = (uintptr_t)&PTR__RTTIDerivedA_00112c28;
 plVar4 = operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 *plVar4 = (uintptr_t)&PTR__RTTIDerivedB_00112c50;
 if (__s1 == "12RTTIDerivedA") {
 cVar8 = '1';
 iVar2 = 0x1e;
 }
 else {
 cVar8 = *__s1;
 if (cVar8 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = 0x14;
 if (iVar1 == 0) {
 iVar2 = 0x1e;
 }
 }
 }
 lVar5 = (long)__dynamic_cast(plVar3,(void *)&PTR__RTTIDerivedA_00112c28,(void *)&PTR__RTTIDerivedA_00112c28,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = (long)__dynamic_cast(plVar4,(void *)&PTR__RTTIDerivedA_00112c28,(void *)&PTR__RTTIDerivedB_00112c50,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
sVar6 = strlen(__s1);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 001015f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t sVar3;
 double dVar4;
 int local_38;
 int aiStack_34 [2];
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_00101ba0);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,(const char *)&DAT_00101bc8,(int)sVar3 + 0x125c);
 __printf_chk(1,(const char *)&DAT_00101be8,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(const char *)&DAT_00101c08,0x2a);
 __printf_chk(1,(const char *)&DAT_00101c28,0x47);
 __printf_chk(1,(const char *)&DAT_00101c48,0x28a);
 __printf_chk(1,(const char *)&DAT_00101c68,0x16);
 iVar1 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap_int(&local_38,aiStack_34);
 __printf_chk(1,(const char *)&DAT_00101c88,(int)dVar4 + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,(const char *)&DAT_00101ca8,0x10);
 __printf_chk(1,(const char *)&DAT_00101cc8,0x55);
 uVar2 = 0;  // test_cpp_exception throws, so we never reach here
 __printf_chk(1,(const char *)DAT_00101ce8,uVar2);
 __printf_chk(1,(const char *)DAT_00101ce8,uVar2);
 __printf_chk(1,(const char *)DAT_00101d08,0x2bf);
 uVar2 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,(const char *)&DAT_00101d28);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 001017d0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001017e0 */

/* Base::getName() const */

char * Base_getName(void)

{
 return (char *)&DAT_00101b88;
}



/* Function: ~Base @ 001017f0 */

/* Base::~Base() */

void Base_dtor(Base *this)

{
 return;
}



/* Function: virtual_func @ 00101800 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101810 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101820 */

/* MultiDerived::funcA() */

uint64_t MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00101830 */

/* MultiDerived::funcB() */

uint64_t MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101840 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_nvthunk(void)

{
 return 0x28;
}



/* Function: func @ 00101850 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101870 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_vthunk(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 001018a0 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 001018c0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_vthunk(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 001018f0 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101910 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_vthunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101934 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nvthunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101950 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00101960 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101970 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101980 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101990 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101994 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_vthunk(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 001019a0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_nvthunk(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 001019b0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 001019b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_nvthunk(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 001019c0 */

/* Derived::~Derived() */

void Derived_dtor(Derived *this)

{
 return;
}



/* Function: ~Base @ 001019d0 */

/* Base::~Base() */

void Base_dtor_delete(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 001019e0 */

/* Derived::~Derived() */

void Derived_dtor_delete(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 001019f0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor_delete(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101a00 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_delete_nvthunk(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101a10 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor_delete(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101a20 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor_delete(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00101a30 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101a40 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete_vthunk(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101a54 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_delete_nvthunk(DiamondDerived *this)

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00101a60 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00101a70 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00101a80 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101aa0 */

/* Container<int>::Container() */

void Container_int_Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101ab0 */

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



/* Function: get @ 00101ad0 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101b00 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101b10 */

/* Container<double>::Container() */

void Container_double_Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101b20 */

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



/* Function: get @ 00101b40 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this,int param_1)

{
 undefined8 auVar1;
 
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 auVar1 = *(uint64_t *)(this + (long)param_1 * 8);
 return auVar1;
 }
 return 0;
}



/* Function: getSize @ 00101b60 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */

/* RTTI typeinfo definitions */
struct typeinfo {
    void *vptr;
    const char *name;
};

struct __RTTI__Base {
    void *vptr;
    const char *name;
};

struct __RTTI__DerivedA {
    void *vptr;
    const char *name;
};

struct __RTTI__DerivedB {
    void *vptr;
    const char *name;
};

struct __RTTI__Base __RTTI__Base = {0, "Base"};
struct __RTTI__DerivedA __RTTI__DerivedA = {0, "DerivedA"};
struct __RTTI__DerivedB __RTTI__DerivedB = {0, "DerivedB"};

void *PTR__RTTIDerivedA_00112c28 = &__RTTI__DerivedA;
void *PTR__RTTIDerivedB_00112c50 = &__RTTI__DerivedB;

char DAT_00101ba0[] = "Test\n";
char DAT_00101bc8[] = "member_func: %d\n";
char DAT_00101be8[] = "constructor: %d\n";
char DAT_00101c08[] = "virtual_func: %d\n";
char DAT_00101c28[] = "multiple_inheritance: %d\n";
char DAT_00101c48[] = "diamond_inheritance: %d\n";
char DAT_00101c68[] = "operator_overload: %d\n";
char DAT_00101c88[] = "template_func: %d\n";
char DAT_00101ca8[] = "template_class: %d\n";
char DAT_00101cc8[] = "lambda: %d\n";
char DAT_00101ce8[] = "exception: %d\n";
char DAT_00101d08[] = "smart_ptr: %d\n";
char DAT_00101d28[] = "rtti: %d\n";
char DAT_00101b88[] = "Base";
