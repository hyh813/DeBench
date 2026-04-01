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

/* Additional types for decompiled code */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void (*code)(void);
typedef unsigned int uint;
typedef void *pointer_____offset_0x8___;

/* Macro for rounding double to int */
#define ROUND(x) ((int)(x))

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;
typedef struct Init Init;

/* Forward function declarations */
void test_cpp_oo_features(void);
int template_max_int(int param_1,int param_2);
double template_max_double(double param_1,double param_2);
void template_swap_int(int *param_1,int *param_2);
void Container_int_push(Container_int *this_ptr,int param_1);
void std_unique_ptr_int_array__unique_ptr(unique_ptr_int_array *this_ptr);
void std_unique_ptr_int__unique_ptr(unique_ptr_int *this_ptr);
int DiamondDerived_func(DiamondDerived *this_ptr);
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr);

/* Forward declarations for std namespace */
extern Init std___ioinit;
extern void *__dso_handle;

/* Struct definitions for C++ classes */
struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int value;
};

struct MultiDerived {
    void *vtable;
    int value1;
    int value2;
};

struct VirtualBase {
    void *vtable;
    int value;
};

struct MiddleA {
    void *vtable;
    int value;
    int offset;
};

struct MiddleB {
    void *vtable;
    int value;
    int offset;
};

struct DiamondDerived {
    void *vtable;
    int value1;
    int value2;
    int value3;
    int offset1;
    int offset2;
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

struct unique_ptr_int {
    int *ptr;
};

struct unique_ptr_int_array {
    int *ptr;
};

struct Init {
    int dummy;
};

/* External function declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void *operator_new__(size_t size);
void operator_delete__(void *ptr);
void __stack_chk_fail(void);
int __stack_chk_fail_local(void);
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags, void *src_type2);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int printf(const char *format, ...);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, void *type_info, void *dest);
void _Unwind_Resume(void *exception);

/* Global pointer declarations */
undefined *PTR_func_00015c94;
undefined *PTR_func_00015cb0;
undefined *PTR_func_00015cd0;
undefined *PTR_func_00015cec;
undefined *PTR_func_00015d88;
undefined *PTR_func_00015da0;
undefined *PTR_func_00015dbc;
undefined *PTR_virtual_func_00015c58;
undefined *PTR_virtual_func_00015c70;
undefined *PTR__RTTIDerivedA_00015dd0;
undefined *PTR__RTTIDerivedB_00015de4;

/* External data declarations */
extern char DAT_0001301a[];
extern char DAT_0001303e[];
extern char DAT_0001305c[];
extern char DAT_00013078[];
extern char DAT_00013094[];
extern char DAT_000130b0[];
extern char DAT_000130cd[];
extern char DAT_000130e9[];
extern char DAT_00013105[];
extern char DAT_00013121[];
extern char DAT_0001313d[];
extern char DAT_0001315a[];
extern char DAT_00013177[];
extern char DAT_00013008[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011303 to 00011307 has its CatchHandler @ 00011308 */
 __cxa_throw(puVar1,(void *)0,(void *)0);
}



/* Function: main @ 000113c2 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113d5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 /* std::ios_base::Init::Init((Init *)&std::__ioinit); */
 /* __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001144c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011450 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011589 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001158d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011591 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_30 [31];
 undefined1 local_11;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = strlen(local_30);
 iVar2 = sVar1 + 0x125c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_constructor @ 000115f1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0001160d */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001161f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00011621 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined **local_1c;
 undefined **local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &PTR_virtual_func_00015c58;
 local_18 = &PTR_virtual_func_00015c70;
 local_14 = 3;
 call_virtual_func((Base *)&local_1c,5);
 iVar1 = 5;
 call_virtual_func((Base *)&local_18,5);
 iVar2 = 5;
 iVar2 = iVar1 + 0x15 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 0001168f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00011699 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000116a3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 iVar1 = (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00011735 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_3c [10];
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int_push((Container_int *)local_3c,0x14);
 Container_int_push((Container_int *)local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 iVar1 = local_14 + 3 + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_lambda @ 00011797 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 000117a1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00011836) */
/* WARNING: Removing unreachable block (ram,0x0001183b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 size_t sVar5;
 uint uVar6;
 int iVar7;
 char *__s1;
 pointer_____offset_0x8___ *ppuVar8;
 
 uVar6 = 10;
 piVar2 = (int *)operator_new(4);
 *piVar2 = 1;
 piVar3 = (int *)operator_new(4);
 *piVar3 = 2;
 iVar1 = (int)piVar2;
 __s1 = (char *)(*(int *)((uintptr_t)iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar6 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = -(uint)(iVar4 == 0) & 10;
 }
 iVar7 = uVar6 + 0x14;
 iVar4 = (int)(uintptr_t)__dynamic_cast((void *)piVar2,(void *)0,(void *)0,0,(void *)0);
 if (iVar4 != 0) {
  iVar7 = uVar6 + 0x78;
 }
 iVar4 = (int)(uintptr_t)__dynamic_cast((void *)piVar3,(void *)0,(void *)0,0,(void *)0);
 if (iVar4 != 0) {
 iVar7 = iVar7 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 iVar7 = sVar5 + iVar7;
 (*(code *)(iVar1 + 4))();
 (*(code *)(*piVar3 + 4))();
 return iVar7;
}



/* Function: test_cpp_smart_ptr @ 000118c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 *local_2c;
 undefined4 *local_28;
 undefined4 *local_24;
 int local_20;
 
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = (undefined4 *)operator_new(4);
 local_2c = 0;
 *local_28 = 200;
 /* try { // try from 00011918 to 0001191c has its CatchHandler @ 0001196e */
 local_24 = (undefined4 *)operator_new__(0x14);
 *(int *)local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 std_unique_ptr_int_array__unique_ptr
 ((unique_ptr_int_array *)&local_24);
 std_unique_ptr_int__unique_ptr
 ((unique_ptr_int *)&local_28);
 std_unique_ptr_int__unique_ptr
 ((unique_ptr_int *)&local_2c);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = __stack_chk_fail_local();
 /* catch() { ... } // from try @ 00011918 with catch @ 0001196e */
 std_unique_ptr_int__unique_ptr
 ((unique_ptr_int *)&local_28);
 std_unique_ptr_int__unique_ptr
 ((unique_ptr_int *)&local_2c);
 /* WARNING: Subroutine does not return */
 _Unwind_Resume(uVar1);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0001199d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined **local_38 [2];
 undefined **local_30;
 undefined **local_28;
 undefined4 local_24;
 int local_20;
 
 local_38[0] = &PTR_func_00015d88;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = &PTR_func_00015dbc;
 local_30 = &PTR_func_00015da0;
 local_24 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_28);
 local_24 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_28);
 iVar2 = iVar2 + iVar1;
 DiamondDerived__DiamondDerived((DiamondDerived *)local_38);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_oo_features @ 00011a22 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 undefined4 extraout_ECX;
 undefined4 extraout_ECX_00;
 undefined8 uVar2;
 
 puts(DAT_0001301a);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0001303e,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0001305c,uVar1);
 uVar2 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00013078,uVar2);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00013094,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000130b0,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,DAT_000130cd,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_000130e9,uVar1,extraout_ECX);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00013105,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,DAT_00013121,uVar1);
 test_cpp_exception();
 __printf_chk(1,DAT_0001313d,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_0001315a,uVar1,extraout_ECX_00);
 uVar2 = test_cpp_rtti();
 __printf_chk(1,DAT_00013177,uVar2);
 return;
}



/* Function: virtual_func @ 00011b66 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011b74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base_getName(void)

{
 return (undefined *)DAT_00013008;
}



/* Function: ~Base @ 00011b8a */

/* Base::~Base() */

void Base__Base(Base *this_ptr)

{
 return;
}



/* Function: virtual_func @ 00011b90 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 4);
}



/* Function: getName @ 00011ba4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011bba */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00011bc4 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00011bce */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00011bd8 */

/* VirtualBase::func() */

undefined4 VirtualBase_func(VirtualBase *this_ptr)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011be2 */

/* VirtualBase::~VirtualBase() */

void VirtualBase__VirtualBase(VirtualBase *this_ptr)

{
 return;
}



/* Function: func @ 00011be8 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011c02 */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *this_ptr)

{
 MiddleA_func(this_ptr + *(int *)(*(int *)this_ptr + -0xc));
 return;
}



/* Function: func @ 00011c16 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 00011c30 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *this_ptr)

{
 MiddleB_func(this_ptr + *(int *)(*(int *)this_ptr + -0xc));
 return;
}



/* Function: func @ 00011c44 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c5e */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_func(this_ptr + *(int *)(*(int *)this_ptr + -0xc));
 return;
}



/* Function: func @ 00011c71 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_func(this_ptr + -8);
 return;
}



/* Function: ~MiddleA @ 00011c7c */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* MiddleA::~MiddleA() */

void MiddleA__MiddleA(MiddleA *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00015c94;
 *(undefined ***)(this_ptr + 8) = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleA @ 00011ca1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA_thunk(MiddleA *this_ptr)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(undefined ***)(this_ptr + iVar1) = &PTR_func_00015c94;
 *(undefined ***)(this_ptr + iVar1 + 8) = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleB @ 00011ccc */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* MiddleB::~MiddleB() */

void MiddleB__MiddleB(MiddleB *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00015cd0;
 *(undefined ***)(this_ptr + 8) = &PTR_func_00015cec;
 return;
}



/* Function: ~MiddleB @ 00011cf1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB_thunk(MiddleB *this_ptr)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(undefined ***)(this_ptr + iVar1) = &PTR_func_00015cd0;
 *(undefined ***)(this_ptr + iVar1 + 8) = &PTR_func_00015cec;
 return;
}



/* Function: getType @ 00011d1c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00011d26 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011d30 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011d36 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00011d3c */

/* MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00011d41 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_thunk(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~Derived @ 00011d46 */

/* Derived::~Derived() */

void Derived__Derived(Derived *this_ptr)

{
 return;
}



/* Function: ~Base @ 00011d4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void Base__Base2(Base *this_ptr)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~Derived @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived__Derived2(Derived *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~MultiDerived @ 00011d9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived2(MultiDerived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011dc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_thunk2(MultiDerived *this_ptr)

{
 MultiDerived__MultiDerived(this_ptr + -8);
 return;
}



/* Function: ~VirtualBase @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* VirtualBase::~VirtualBase() */

void VirtualBase__VirtualBase2(VirtualBase *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00011df8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~MiddleA @ 00011e48 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MiddleA::~MiddleA() */

void MiddleA__MiddleA2(MiddleA *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00015c94;
 *(undefined ***)(this_ptr + 8) = &PTR_func_00015cb0;
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MiddleA @ 00011e7f */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA__MiddleA_vthunk(MiddleA *this_ptr)

{
 MiddleA__MiddleA(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: ~MiddleB @ 00011e92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MiddleB::~MiddleB() */

void MiddleB__MiddleB2(MiddleB *this_ptr)

{
 *(undefined ***)this_ptr = &PTR_func_00015cd0;
 *(undefined ***)(this_ptr + 8) = &PTR_func_00015cec;
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MiddleB @ 00011ec9 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB__MiddleB_vthunk(MiddleB *this_ptr)

{
 MiddleB__MiddleB(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: ~MiddleA @ 00011edc */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* MiddleA::~MiddleA() */

void MiddleA__MiddleA3(MiddleA *this_ptr)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 int in_stack_00000008;
 undefined4 *in_stack_0000000c;
 
 ppuVar1 = &PTR_func_00015c94;
 if (in_stack_00000008 == 0) {
 ppuVar1 = (undefined **)*in_stack_0000000c;
 }
 *(undefined ***)this_ptr = ppuVar1;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)in_stack_0000000c[1];
 puVar2 = ppuVar1[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cb0;
 puVar2 = (undefined *)0x8;
 }
 *(undefined ***)(this_ptr + (int)puVar2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00011f26 */

/* MiddleA::~MiddleA() */

void MiddleA__MiddleA4(MiddleA *this_ptr)

{
 MiddleA__MiddleA(this_ptr);
 return;
}



/* Function: ~MiddleB @ 00011f42 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* MiddleB::~MiddleB() */

void MiddleB__MiddleB3(MiddleB *this_ptr)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 int in_stack_00000008;
 undefined4 *in_stack_0000000c;
 
 ppuVar1 = &PTR_func_00015cd0;
 if (in_stack_00000008 == 0) {
 ppuVar1 = (undefined **)*in_stack_0000000c;
 }
 *(undefined ***)this_ptr = ppuVar1;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)in_stack_0000000c[1];
 puVar2 = ppuVar1[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cec;
 puVar2 = (undefined *)0x8;
 }
 *(undefined ***)(this_ptr + (int)puVar2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00011f8c */

/* MiddleB::~MiddleB() */

void MiddleB__MiddleB4(MiddleB *this_ptr)

{
 MiddleB__MiddleB(this_ptr);
 return;
}



/* Function: template_max<int> @ 00011fa8 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011fbc */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011fd5 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011fee */

/* Container<int>::Container() */

void Container_int_Container(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00012002 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00012022 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(undefined4 *)(this_ptr + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00012040 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 00012050 */

/* Container<double>::Container() */

void Container_double_Container(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00012064 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00012088 */

/* Container<double>::get(int) const */

double Container_double_get(Container_double *this_ptr,int param_1)

{
 double lVar1;
 
 lVar1 = (double)0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 lVar1 = *(double *)(this_ptr + param_1 * 8);
 }
 return lVar1;
}



/* Function: getSize @ 000120a8 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: ~unique_ptr @ 000120b8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void
std_unique_ptr_int__unique_ptr
 (unique_ptr_int *this_ptr)

{
 if (*(void **)this_ptr != (void *)0x0) {
 operator_delete(*(void **)this_ptr,4);
 }
 return;
}



/* Function: ~unique_ptr @ 000120e8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void
std_unique_ptr_int_array__unique_ptr
 (unique_ptr_int_array *this_ptr)

{
 if (*(void **)this_ptr != (void *)0x0) {
 operator_delete__(*(void **)this_ptr);
 }
 return;
}



/* Function: ~DiamondDerived @ 00012116 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 int in_stack_00000008;
 undefined4 *in_stack_0000000c;
 
 ppuVar3 = &PTR_func_00015d88;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)*in_stack_0000000c;
 }
 *(undefined ***)this_ptr = ppuVar3;
 if (in_stack_00000008 == 0) {
 ppuVar1 = (undefined **)in_stack_0000000c[5];
 puVar2 = ppuVar3[-3];
 }
 else {
 ppuVar1 = &PTR_func_00015dbc;
 puVar2 = (undefined *)0x10;
 }
 *(undefined ***)(this_ptr + (int)puVar2) = ppuVar1;
 ppuVar3 = &PTR_func_00015da0;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)in_stack_0000000c[6];
 }
 *(undefined ***)(this_ptr + 8) = ppuVar3;
 MiddleB__MiddleB((MiddleB *)(this_ptr + 8));
 MiddleA__MiddleA((MiddleA *)this_ptr);
 return;
}



/* Function: ~DiamondDerived @ 000121b0 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived2(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr);
 return;
}



/* Function: ~DiamondDerived @ 000121cb */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr + -8);
 return;
}



/* Function: ~DiamondDerived @ 000121d6 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_vthunk(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 000121ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived3(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr);
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 0001221e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr + -8);
 return;
}



/* Function: ~DiamondDerived @ 00012229 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_vthunk2(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 0001223c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived4(DiamondDerived *this_ptr)

{
 DiamondDerived__DiamondDerived(this_ptr);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012258 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 0001225c */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 00012260 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012270 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 96 */
