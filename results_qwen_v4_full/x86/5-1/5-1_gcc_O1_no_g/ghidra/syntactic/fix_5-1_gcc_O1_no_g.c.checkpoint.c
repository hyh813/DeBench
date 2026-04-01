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

/* Ghidra decompiler types */
typedef int undefined4;
typedef char undefined;
typedef void (*code)(void *, int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Forward declarations for C++ classes */
typedef struct Base Base;
struct Base {
    int vtable_ptr;
};
typedef struct Derived Derived;
struct Derived {
    int vtable_ptr;
    int value;
};
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Struct definitions */
struct DiamondDerived {
    int vtable_ptr;
    int data[10];
};

struct MiddleA {
    int vtable_ptr;
    int data[10];
};

struct MiddleB {
    int vtable_ptr;
    int data[10];
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* LifecycleClass declaration */
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count;

/* External function declarations */
extern void __stack_chk_fail(void);
extern void __stack_chk_fail_local(void);
extern void *operator_new(size_t);
extern void *operator_new__(size_t);
extern void operator_delete(void *);
extern void operator_delete__(void *);
extern size_t strlen(const char *);
extern char *builtin_strncpy(char *, const char *, size_t);
extern int strcmp(const char *, const char *);
extern void __cxa_throw(void *, void *, void *);
extern void *__cxa_allocate_exception(size_t);
extern void *__dynamic_cast(void *, void *, void *, int);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern int __cxa_atexit(void (*)(void *), void *, void *);

/* Macro definitions */
#define ROUND(x) ((int)(x))
typedef unsigned int uint;

/* External data declarations */
undefined4 PTR_virtual_func_00014cd4 = 0;
undefined4 PTR_virtual_func_00014cec = 0;
int RTTIBase_typeinfo = 0;
int RTTIDerivedA_typeinfo = 0;
int RTTIDerivedB_typeinfo = 0;
int PTR__RTTIDerivedA_00014dd4 = 0;
int PTR__RTTIDerivedB_00014de8 = 0;
char DAT_00012018 = 0;
char DAT_0001203c = 0;
char DAT_0001205a = 0;
char DAT_00012076 = 0;
char DAT_00012092 = 0;
char DAT_000120ae = 0;
char DAT_000120cb = 0;
char DAT_000120e7 = 0;
char DAT_00012103 = 0;
char DAT_0001211f = 0;
char DAT_0001213b = 0;
char DAT_00012158 = 0;
char DAT_00012175 = 0;
char DAT_00012008 = 0;

/* External function declarations */
extern int DiamondDerived_func(DiamondDerived *);
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* Stub implementations for external library functions */
void __stack_chk_fail(void) {
    /* Stack check failure - stub */
    return;
}

void __cxa_throw(void *exc, void *tinfo, void *dest) {
    /* C++ exception throw - stub */
    (void)exc;
    (void)tinfo;
    (void)dest;
    return;
}

int strcmp(const char *s1, const char *s2) {
    /* String compare - stub */
    (void)s1;
    (void)s2;
    return 0;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* C++ atexit - stub */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

int puts(const char *s) {
    /* Print string - stub */
    (void)s;
    return 0;
}

int __printf_chk(int flag, const char *format, ...) {
    /* Printf with security check - stub */
    (void)flag;
    (void)format;
    return 0;
}

void operator_delete(void *ptr) {
    /* C++ delete operator - stub */
    (void)ptr;
    return;
}

void operator_delete__(void *ptr) {
    /* C++ delete operator variant - stub */
    (void)ptr;
    return;
}

void *operator_new__(size_t size) {
    /* C++ new operator variant - stub */
    (void)size;
    return (void *)0;
}

void *__dynamic_cast(void *ptr, void *tinfo, void *vptr, int flags) {
    /* C++ RTTI dynamic cast - stub */
    (void)ptr;
    (void)tinfo;
    (void)vptr;
    (void)flags;
    return (void *)0;
}

char *builtin_strncpy(char *dest, const char *src, size_t n) {
    /* String copy with length limit - stub */
    (void)dest;
    (void)src;
    (void)n;
    return dest;
}

void *__cxa_allocate_exception(size_t size) {
    /* C++ exception allocation - stub */
    (void)size;
    return (void *)0;
}

void *operator_new(size_t size) {
    /* C++ new operator - stub */
    (void)size;
    return (void *)0;
}

size_t strlen(const char *s) {
    /* String length - stub */
    (void)s;
    return 0;
}

/* C++ std namespace stubs */
typedef struct std_ios_base_Init std_ios_base_Init;
struct std_ios_base_Init_Init {
    int dummy;
};
extern std_ios_base_Init std___ioinit;
extern void *__dso_handle;
extern int __cxa_atexit(void (*)(void *), void *, void *);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000112dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000112e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011419 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001141d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011421 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 builtin_strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 local_30[0x1e] = 0;
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 pvVar1 = operator_new__(0x14);
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar2;
}



/* Function: call_virtual_func @ 00011523 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 0001153b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 *local_1c;
 undefined4 *local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &PTR_virtual_func_00014cd4;
 local_18 = &PTR_virtual_func_00014cec;
 local_14 = 3;
 (*(code *)*local_1c)(local_1c,5);
 iVar1 = 5;
 (*(code *)*local_18)(local_18,5);
 iVar2 = 5;
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x15 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_multiple_inheritance @ 000115b1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000115bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 0x14dc0;
 local_14 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_operator_overload @ 00011634 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001163e */

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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 000116e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000116ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000116f6 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011729 to 0001172d has its CatchHandler @ 0001172e */
 __cxa_throw(puVar1,(void *)&RTTIDerivedA_typeinfo,0);
 __builtin_unreachable();
}



/* Function: test_cpp_smart_ptr @ 00011806 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011810 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000118a2) */
/* WARNING: Removing unreachable block (ram,0x000118a7) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 uint uVar7;
 
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar3 = (int *)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar4 == 0) & 10;
 }
 iVar5 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 iVar5 = (int)__dynamic_cast(piVar3,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(void *))**(void ***)(iVar1 + 4))(piVar2);
 ((void (*)(void *))**(void ***)(*piVar3 + 4))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001193a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001203c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001205a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00012076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00012092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000120ae,uVar1);
 __printf_chk(1,&DAT_000120cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000120e7,uVar1);
 __printf_chk(1,&DAT_00012103,0x10);
 __printf_chk(1,&DAT_0001211f,0x55);
 test_cpp_exception();
 __printf_chk(1,&DAT_0001213b,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00012158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00012175,uVar1);
 return;
}



/* Function: main @ 00011a75 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00011a8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 /* std::ios_base::Init constructor stub - no-op */
 __cxa_atexit((void (*)(void *))0,&std___ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00011ac8 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this_,int param_1)

{
 (void)this_;
 return param_1 + 1;
}



/* Function: getName @ 00011ad4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base_getName(void)

{
 return &DAT_00012008;
}



/* Function: ~Base @ 00011aea */

/* Base::~Base() */

void Base_destructor(Base *this_)

{
 (void)this_;
 return;
}



/* Function: virtual_func @ 00011af0 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_,int param_1)

{
 return param_1 * *(int *)(this_ + 4);
}



/* Function: getName @ 00011b02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011b18 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011b22 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011b2c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_)

{
 (void)this_;
 return 0x28;
}



/* Function: func @ 00011b36 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_)

{
 return *(int *)(this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b4d */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) +
 *(int *)(*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b6a */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_)

{
 return *(int *)(this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 200;
}



/* Function: func @ 00011b81 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) +
 *(int *)(*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011b9e */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this_)

{
 return *(int *)(this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bb5 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk_impl(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) +
 *(int *)(*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bd1 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_)

{
 return *(int *)(this_ + *(int *)(*(int *)(this_ + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bea */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00011bf4 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011bfe */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *param_1)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011c04 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *param_1)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0a */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_impl2(DiamondDerived *param_1)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0f */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c14 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1a */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *this_)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1f */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this_)

{
 return;
}



/* Function: ~Derived @ 00011c24 */

/* Derived::~Derived() */

void Derived_destructor(Derived *this_)

{
 return;
}



/* Function: ~Base @ 00011c2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void Base_destructor_impl(Base *this_)

{
 operator_delete(this_);
 return;
}



/* Function: ~Derived @ 00011c4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived_destructor_impl(Derived *this_)

{
 operator_delete(this_);
 return;
}



/* Function: ~MultiDerived @ 00011c72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_impl(MultiDerived *param_1)

{
 operator_delete(param_1);
 return;
}



/* Function: ~MultiDerived @ 00011c95 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk_impl(MultiDerived *param_1)

{
 operator_delete((char *)param_1 + -8);
 return;
}



/* Function: ~RTTIDerivedA @ 00011cbc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_impl(RTTIDerivedA *this_)

{
 operator_delete(this_);
 return;
}



/* Function: ~RTTIDerivedB @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_impl(RTTIDerivedB *this_)

{
 operator_delete(this_);
 return;
}



/* Function: ~DiamondDerived @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_impl(DiamondDerived *this_)

{
 operator_delete(this_);
 return;
}



/* Function: ~DiamondDerived @ 00011d27 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk_impl(DiamondDerived *this_)

{
 operator_delete(this_ + *(int *)(*(int *)this_ + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk_impl(DiamondDerived *this_)

{
 operator_delete(this_ + -8);
 return;
}



/* Function: template_max_int @ 00011d77 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00011d89 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00011d9c */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011db4 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this_)

{
 *(undefined4 *)(this_ + 0x28) = 0;
 return;
}



/* Function: push @ 00011dc4 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this_,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x28) = iVar1 + 1;
 *(int *)(this_ + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011de2 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this_,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x28))) {
 uVar1 = *(undefined4 *)(this_ + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011e02 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this_)

{
 return *(undefined4 *)(this_ + 0x28);
}



/* Function: Container @ 00011e0e */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this_)

{
 *(undefined4 *)(this_ + 0x50) = 0;
 return;
}



/* Function: push @ 00011e1e */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this_,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x50) = iVar1 + 1;
 *(double *)(this_ + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00011e40 */

/* Container<double>::get(int) const */

double Container_double_get(Container_double *this_,int param_1)

{
 if (param_1 < 0) {
 return (double)0;
 }
 if (*(int *)(this_ + 0x50) <= param_1) {
 return (double)0;
 }
 return *(double *)(this_ + param_1 * 8);
}



/* Function: getSize @ 00011e60 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this_)

{
 return *(undefined4 *)(this_ + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 00011e6c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011e70 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
