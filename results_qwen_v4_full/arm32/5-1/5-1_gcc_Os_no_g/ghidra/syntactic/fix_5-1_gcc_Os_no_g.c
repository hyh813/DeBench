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
typedef unsigned long long ulonglong;

/* Additional types for decompiled code */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)(void);

/* Ghidra macro for extracting lower 32 bits from 64-bit value */
#define SUB84(val, offset) ((undefined4)(val))

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Init Init;
typedef struct type_info type_info;

/* Forward declarations for smart pointers */
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;

/* Container templates */
typedef struct Container_double Container_double;

/* External variables for C++ runtime */
extern Init std___ioinit;
extern void *__dso_handle;
extern char DAT_00011866;
extern char DAT_0001188a;
extern char DAT_000118a8;
extern char DAT_000118e0;
extern char DAT_000118fc;
extern char DAT_00011919;
extern char DAT_00011951;
extern char DAT_0001196d;
extern char DAT_000119a6;
extern char DAT_000119c3;
extern char DAT_00011854;

/* External function declarations */
extern void* PTR_func_00011b2c;
extern void* PTR_func_00011b48;
extern void* PTR_func_00011b68;
extern void* PTR_func_00011b84;
extern void* PTR_func_00011c20;
extern void* PTR_func_00011c38;
extern void* PTR_func_00011c54;
extern void* PTR__RTTIDerivedA_00011c68;
extern void* PTR__RTTIDerivedB_00011c7c;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;
extern void* PTR_virtual_func_00011af0;
extern void* PTR_virtual_func_00011b08;
void* operator_new(size_t size);
void operator_delete(void* ptr, size_t size);
void* operator_new__(size_t size);
void operator_delete__(void* ptr);
void __stack_chk_fail(void);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exc, void* type, void* dest);
void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
void test_cpp_oo_features(void);
void std__ios_base__Init__Init(Init *param_1);
void std__ios_base__Init___Init(Init *param_1);
void __aeabi_atexit(void*, void*, void*);
int template_max_int(int param_1,int param_2);
double template_max_double(double param_1,double param_2);
void template_swap_int(int *param_1,int *param_2);
undefined4 __aeabi_d2iz(undefined4 param_1,undefined4 param_2);
int __aeabi_dcmpgt(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void Container_int_push(Container_int *param_1,int param_2);
int type_info_operator_eq(type_info *param_1,type_info *param_2);
unique_ptr_int_array *unique_ptr_int_array_destructor(unique_ptr_int_array *param_1);
unique_ptr_int *unique_ptr_int_destructor(unique_ptr_int *param_1);
int DiamondDerived_func(DiamondDerived *param_1);
void DiamondDerived__DiamondDerived(DiamondDerived *param_1);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);

/* Structure definitions */
struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int value;
};

struct MultiDerived {
    void *vtable;
    int value;
};

struct VirtualBase {
    void *vtable;
};

struct MiddleA {
    void *vtable;
};

struct MiddleB {
    void *vtable;
};

struct DiamondDerived {
    void *vtable;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

struct Init {
    int dummy;
};

struct type_info {
    void *vtable;
    char *name;
};

struct unique_ptr_int {
    void *ptr;
};

struct unique_ptr_int_array {
    void *ptr;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 ((code)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void*)0x0,0);
}



/* Function: main @ 00010bbc */

int main(void);

/* Function: main @ 00010bbc */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std__ios_base__Init__Init((Init *)&std___ioinit);
 __aeabi_atexit(&std___ioinit,(void*)std__ios_base__Init___Init,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010cf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010d7c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010d84. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010d88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

void test_cpp_virtual_func(void)

{
 int iVar1;
 undefined8 uVar2;
 void **local_18;
 void **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_18 = &PTR_virtual_func_00011af0;
 local_14 = &PTR_virtual_func_00011b08;
 local_10 = 3;
 call_virtual_func((Base *)&local_18,5);
 call_virtual_func((Base *)&local_14,5);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_multiple_inheritance @ 00010e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00010e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 undefined8 uVar2;
 int local_1c;
 int local_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 template_max_double(1.0,2.0);
 local_1c = 10;
 local_18 = 0x14;
 template_swap_int(&local_1c,&local_18);
 uVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_template_class @ 00010ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

void test_cpp_template_class(void)

{
 undefined4 extraout_r1;
 int iVar1;
 int local_38 [10];
 int local_10;
 int local_c;
 
 local_c = 0;
 local_10 = 1;
 local_38[0] = 10;
 Container_int_push((Container_int *)local_38,0x14);
 Container_int_push((Container_int *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: test_cpp_lambda @ 00010f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00010f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)PTR__RTTIDerivedA_00011c68;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)PTR__RTTIDerivedB_00011c7c;
 iVar3 = type_info_operator_eq
 (*(type_info **)(*piVar1 + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = type_info_operator_eq
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
sVar5 = strlen(__s);
(*(void (*)(void))*(int *)(iVar6 + 4))();
(*(void (*)(void))*(int *)(*piVar2 + 4))();
iVar3 = iVar3 + sVar5;
 return iVar3;
}



/* Function: test_cpp_smart_ptr @ 00011038 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 undefined4 local_18;
 undefined4 *local_14;
 undefined4 *local_10;
 int local_c;
 
 local_c = 0;
 local_14 = (undefined4 *)operator_new(4);
 *local_14 = 200;
 local_18 = 0;
 local_10 = (undefined4 *)operator_new__(0x14);
 *local_10 = 1;
 local_10[1] = 2;
 local_10[2] = 3;
 local_10[3] = 4;
 local_10[4] = 5;
 unique_ptr_int_array_destructor((unique_ptr_int_array *)&local_10);
 unique_ptr_int_destructor((unique_ptr_int *)&local_14);
 unique_ptr_int_destructor((unique_ptr_int *)&local_18);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 000110ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 void **local_24 [2];
 void **local_1c;
 void **local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_14 = &PTR_func_00011c54;
 local_24[0] = &PTR_func_00011c20;
 local_1c = &PTR_func_00011c38;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_14);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_14);
 DiamondDerived__DiamondDerived((DiamondDerived *)local_24);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00011866);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001188a,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_000118a8,uVar1);
 test_cpp_virtual_func();
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_000118e0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000118fc,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00011919,uVar1);
 test_cpp_template_func();
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00011951,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_0001196d,uVar1);
 test_cpp_exception();
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_000119a6,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_000119c3,uVar1);
 return;
}



/* Function: virtual_func @ 000112b0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *param_1,int param_2)

{
 return param_2 + 1;
}



/* Function: getName @ 000112b8 */

/* Base::getName() const */

char * Base_getName(void)

{
 return &DAT_00011854;
}



/* Function: ~Base @ 000112c4 */

/* Base::~Base() */

Base * Base__Base(Base *param_1)

{
 return param_1;
}



/* Function: virtual_func @ 000112c8 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *param_1,int param_2)

{
 return param_2 * *(int *)(param_1 + 4);
}



/* Function: getName @ 000112d4 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 000112e0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 000112e8 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 000112f0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *param_1)

{
 return 0x28;
}



/* Function: func @ 000112f8 */

/* VirtualBase::func() */

undefined4 VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011300 */

/* VirtualBase::~VirtualBase() */

VirtualBase * VirtualBase__VirtualBase(VirtualBase *param_1)

{
 return param_1;
}



/* Function: func @ 00011304 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 0001131c */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *param_1)

{
 MiddleA_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}



/* Function: func @ 00011330 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011348 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *param_1)

{
 MiddleB_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}



/* Function: func @ 0001135c */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011374 */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *param_1)

{
 DiamondDerived_func(param_1 + *(int *)(*(int *)param_1 + -0xc));
 return;
}



/* Function: func @ 00011388 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(DiamondDerived *param_1)

{
 DiamondDerived_func(param_1 + -8);
 return;
}



/* Function: ~MiddleA @ 00011390 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA(MiddleA *param_1)

{
 *(undefined **)param_1 = (undefined *)PTR_func_00011b2c;
 *(undefined **)(param_1 + 8) = (undefined *)PTR_func_00011b48;
 return;
}



/* Function: ~MiddleA @ 000113a8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA_thunk(MiddleA *param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)param_1 + -0x10);
 *(undefined **)(param_1 + iVar1) = (undefined *)PTR_func_00011b2c;
 *(undefined **)(param_1 + iVar1 + 8) = (undefined *)PTR_func_00011b48;
 return;
}



/* Function: ~MiddleB @ 000113d0 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB(MiddleB *param_1)

{
 *(undefined **)param_1 = (undefined *)PTR_func_00011b68;
 *(undefined **)(param_1 + 8) = (undefined *)PTR_func_00011b84;
 return;
}



/* Function: ~MiddleB @ 000113e8 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB_thunk(MiddleB *param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)param_1 + -0x10);
 *(undefined **)(param_1 + iVar1) = (undefined *)PTR_func_00011b68;
 *(undefined **)(param_1 + iVar1 + 8) = (undefined *)PTR_func_00011b84;
 return;
}



/* Function: getType @ 00011410 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00011418 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011420 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *param_1)

{
 return param_1;
}



/* Function: ~RTTIDerivedA @ 00011424 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *param_1)

{
 return param_1;
}



/* Function: ~MultiDerived @ 00011428 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived__MultiDerived(MultiDerived *param_1)

{
 return param_1;
}



/* Function: ~MultiDerived @ 0001142c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived__MultiDerived_thunk(MultiDerived *param_1)

{
 return param_1 + -8;
}



/* Function: ~Derived @ 00011434 */

/* Derived::~Derived() */

Derived * Derived__Derived(Derived *param_1)

{
 return param_1;
}



/* Function: ~Base @ 00011438 */

/* Base::~Base() */

Base * Base__Base_destructor(Base *param_1)

{
 operator_delete(param_1,4);
 return param_1;
}



/* Function: ~Derived @ 00011450 */

/* Derived::~Derived() */

Derived * Derived__Derived_destructor(Derived *param_1)

{
 operator_delete(param_1,8);
 return param_1;
}



/* Function: ~MultiDerived @ 00011468 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived__MultiDerived_destructor(MultiDerived *param_1)

{
 operator_delete(param_1,0x10);
 return param_1;
}



/* Function: ~MultiDerived @ 00011480 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_thunk2(MultiDerived *param_1)

{
 MultiDerived__MultiDerived_destructor(param_1 + -8);
 return;
}



/* Function: ~VirtualBase @ 00011488 */

/* VirtualBase::~VirtualBase() */

VirtualBase * VirtualBase__VirtualBase_destructor(VirtualBase *param_1)

{
 operator_delete(param_1,8);
 return param_1;
}



/* Function: ~RTTIDerivedB @ 000114a0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *param_1)

{
 operator_delete(param_1,4);
 return param_1;
}



/* Function: ~RTTIDerivedA @ 000114b8 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *param_1)

{
 operator_delete(param_1,4);
 return param_1;
}



/* Function: ~MiddleA @ 000114d0 */

/* MiddleA::~MiddleA() */

MiddleA * MiddleA__MiddleA_destructor(MiddleA *param_1)

{
 *(undefined **)param_1 = (undefined *)PTR_func_00011b2c;
 *(undefined **)(param_1 + 8) = (undefined *)PTR_func_00011b48;
 operator_delete(param_1,0x10);
 return param_1;
}



/* Function: ~MiddleA @ 000114fc */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA_thunk2(MiddleA *param_1)

{
 MiddleA__MiddleA_destructor(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}



/* Function: ~MiddleB @ 00011510 */

/* MiddleB::~MiddleB() */

MiddleB * MiddleB__MiddleB_destructor(MiddleB *param_1)

{
 *(undefined **)param_1 = (undefined *)PTR_func_00011b68;
 *(undefined **)(param_1 + 8) = (undefined *)PTR_func_00011b84;
 operator_delete(param_1,0x10);
 return param_1;
}



/* Function: ~MiddleB @ 0001153c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB_thunk2(MiddleB *param_1)

{
 MiddleB__MiddleB_destructor(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}



/* Function: ~MiddleA @ 00011550 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA_thunk3(MiddleA *param_1)

{
 int *in_r1;
 int iVar1;
 
 iVar1 = *in_r1;
 *(int *)param_1 = iVar1;
 *(int *)(param_1 + *(int *)(iVar1 + -0xc)) = in_r1[1];
 return;
}



/* Function: ~MiddleB @ 00011568 */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB_thunk3(MiddleB *param_1)

{
 int *in_r1;
 int iVar1;
 
 iVar1 = *in_r1;
 *(int *)param_1 = iVar1;
 *(int *)(param_1 + *(int *)(iVar1 + -0xc)) = in_r1[1];
 return;
}



/* Function: template_max_int @ 00011580 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 0001158c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000115a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 int cmp_result;
 cmp_result = __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
 if (cmp_result > 0) {
  return param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 000115bc */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 000115d0 */

/* Container_int::Container_int() */

void Container_int_Constructor(Container_int *param_1)

{
 *(undefined4 *)(param_1 + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 000115dc */

/* Container_int::push(int) */

void Container_int_push(Container_int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + iVar1 * 4) = param_2;
 }
 return;
}



/* Function: Container_int_get @ 000115f4 */

/* Container_int::get(int) */

undefined4 Container_int_get(Container_int *param_1,int param_2)

{
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
 return *(undefined4 *)(param_1 + param_2 * 4);
 }
 return 0;
}



/* Function: Container_int_getSize @ 00011618 */

/* Container_int::getSize() */

undefined4 Container_int_getSize(Container_int *param_1)

{
 return *(undefined4 *)(param_1 + 0x28);
}



/* Function: Container @ 00011620 */

/* Container<double>::Container() */

void Container_double_Container(Container_double *param_1)

{
 *(undefined4 *)(param_1 + 0x50) = 0;
 return;
}



/* Function: push @ 0001162c */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *param_1,double param_2)

{
 int iVar2;
 undefined4 *puVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 iVar2 = *(int *)(param_1 + 0x50);
 if (9 < iVar2) {
 return SUB84(param_2,0);
 }
 *(int *)(param_1 + 0x50) = iVar2 + 1;
 puVar1 = (undefined4 *)(param_1 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 return SUB84(param_2,0);
}



/* Function: get @ 0001164c */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *param_1,int param_2)

{
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
 return *(undefined8 *)(param_1 + param_2 * 8);
 }
 return 0;
}



/* Function: getSize @ 00011678 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *param_1)

{
 return *(undefined4 *)(param_1 + 0x50);
}



/* Function: ~unique_ptr @ 00011680 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

unique_ptr_int *
unique_ptr_int_destructor
 (unique_ptr_int *param_1)

{
 if (*(void **)param_1 != (void *)0x0) {
 operator_delete(*(void **)param_1,4);
 }
 return param_1;
}



/* Function: ~unique_ptr @ 000116a4 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

unique_ptr_int_array *
unique_ptr_int_array_destructor
 (unique_ptr_int_array *param_1)

{
 if (*(void **)param_1 != (void *)0x0) {
 operator_delete__(*(void **)param_1);
 }
 return param_1;
}



/* Function: ~DiamondDerived @ 000116c4 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived__DiamondDerived_destructor(DiamondDerived *param_1)

{
 int in_r1;
 undefined4 *in_r2;
 undefined **ppuVar1;
 undefined *puVar2;
 
 if (in_r1 == 0) {
 ppuVar1 = (undefined **)*in_r2;
 }
 else {
 ppuVar1 = (undefined **)PTR_func_00011c20;
 }
 *(undefined ***)param_1 = ppuVar1;
 if (in_r1 == 0) {
 puVar2 = ppuVar1[-3];
 ppuVar1 = (undefined **)in_r2[5];
 }
 else {
 puVar2 = (undefined *)0x10;
 ppuVar1 = (undefined **)PTR_func_00011c54;
 }
 *(undefined ***)(param_1 + (int)puVar2) = ppuVar1;
 if (in_r1 == 0) {
 ppuVar1 = (undefined **)in_r2[6];
 }
 else {
 ppuVar1 = (undefined **)PTR_func_00011c38;
 }
 *(undefined ***)(param_1 + 8) = ppuVar1;
 MiddleB__MiddleB_destructor((MiddleB *)(param_1 + 8));
 MiddleA__MiddleA_destructor((MiddleA *)param_1);
 return param_1;
}



/* Function: ~DiamondDerived @ 00011748 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1);
 return;
}



/* Function: ~DiamondDerived @ 00011754 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk2(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1 + -8);
 return;
}



/* Function: ~DiamondDerived @ 0001175c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk3(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00011770 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived__DiamondDerived_destructor2(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1);
 operator_delete(param_1,0x18);
 return param_1;
}



/* Function: ~DiamondDerived @ 00011790 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk4(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1 + -8);
 return;
}



/* Function: ~DiamondDerived @ 00011798 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk5(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1 + *(int *)(*(int *)param_1 + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 000117ac */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk6(DiamondDerived *param_1)

{
 DiamondDerived__DiamondDerived_destructor(param_1);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
