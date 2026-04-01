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
typedef unsigned int undefined4;
typedef void undefined;
typedef void (*code)(void);

/* Missing function declarations */
static void *operator_new(size_t size);
static void operator_delete(void *ptr, unsigned long size);

/* Function definitions for operators */
static void *operator_new(size_t size) {
    return (void *)0x1000; /* Mock allocation */
}

static void operator_delete(void *ptr, unsigned long size) {
    (void)ptr;
    (void)size;
    /* Mock deallocation */
}

/* Mock implementations for missing functions */
static void *builtin_strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

static void __stack_chk_fail(void) {
    /* Stack check failure - mock implementation */
    while(1);
}

/* Standard library function declarations - mock implementations below */

/* Mock implementations for standard library functions - static to avoid multiple definitions */
static size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

static int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

static int puts(const char *s) {
    (void)s;
    return 1;
}

static int __printf_chk(int flag, const char *format, ...) {
    (void)flag;
    (void)format;
    return 1;
}

static void *__cxa_allocate_exception(size_t size) {
    return (void *)0x2000;
}

static void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    (void)exc;
    (void)typeinfo;
    (void)dest;
    while(1);
}

static void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_flags) {
    (void)obj;
    (void)src_type;
    (void)dst_type;
    (void)src_flags;
    return (void *)0x1;
}

static int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* Helper functions */
static void __stack_chk_fail_local(void);
static int template_max_int(int param_1, int param_2);
static double template_max_double(double param_1, double param_2);
static void template_swap_int(int *param_1, int *param_2);
#define ROUND(x) ((int)(x))

/* C++ typeinfo for int */

/* RTTI typeinfo declarations */

/* C++ typeinfo definition for int */
static void *int_typeinfo = (void *)"int";

/* RTTI typeinfo definitions */
static void *RTTIBase_typeinfo = (void *)"RTTIBase";
static void *RTTIDerivedA_typeinfo = (void *)"RTTIDerivedA";
static void *RTTIDerivedB_typeinfo = (void *)"RTTIDerivedB";

/* RTTI pointer declarations */

/* RTTI pointer definitions */
static void *PTR__RTTIDerivedA_00014e48 = (void *)&RTTIDerivedA_typeinfo;
static void *PTR__RTTIDerivedB_00014e5c = (void *)&RTTIDerivedB_typeinfo;

/* Global variable definitions */
static void *std___ioinit = (void *)"std::ioinit";
static void *__dso_handle = (void *)0x1;
static int LifecycleClass_instance_count = 1;
static void *DAT_00013018 = (void *)"Testing C++ OO features";
static void *DAT_0001303c = (void *)"strlen result: %d\n";
static void *DAT_0001305a = (void *)"constructor result: %d\n";
static void *DAT_00013076 = (void *)"virtual func result: %d\n";
static void *DAT_00013092 = (void *)"multiple inheritance result: %d\n";
static void *DAT_000130ae = (void *)"diamond inheritance result: %d\n";
static void *DAT_000130cb = (void *)"operator overload result: %d\n";
static void *DAT_000130e7 = (void *)"template func result: %d\n";
static void *DAT_00013103 = (void *)"template class result: %d\n";
static void *DAT_0001311f = (void *)"lambda result: %d\n";
static void *DAT_0001313b = (void *)"exception result: %d\n";
static void *DAT_00013158 = (void *)"smart ptr result: %d\n";
static void *DAT_00013175 = (void *)"rtti result: %d\n";
static void *DAT_00013008 = (void *)"Base";

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
typedef struct Init Init;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward function declarations */
static void test_cpp_oo_features(void);
static undefined4 test_cpp_exception(void);
static int test_cpp_member_func(void);
static int test_cpp_constructor(void);
static void call_virtual_func(Base *param_1, int param_2);
static undefined4 test_cpp_virtual_func(void);
static undefined4 test_cpp_multiple_inheritance(void);
static undefined4 test_cpp_diamond_inheritance(void);
static undefined4 test_cpp_operator_overload(void);
static int test_cpp_template_func(void);
static undefined4 test_cpp_template_class(void);
static undefined4 test_cpp_lambda(void);
static undefined4 test_cpp_smart_ptr(void);
static int test_cpp_rtti(void);
static int Base_virtual_func(Base *this_ptr, int param_1);
static undefined4 *Base_getName(Base *this_ptr);
static void Base_destructor(Base *this_ptr);
static int Derived_virtual_func(Derived *this_ptr, int param_1);
static char *Derived_getName(Derived *this_ptr);
static undefined4 MultiDerived_funcA(MultiDerived *this_ptr);
static undefined4 MultiDerived_funcB(MultiDerived *this_ptr);
static undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr);
static int MiddleA_func(MiddleA *this_ptr);
static int MiddleA_func_thunk(MiddleA *this_ptr);
static int MiddleB_func(MiddleB *this_ptr);
static int MiddleB_func_thunk(MiddleB *this_ptr);
static int DiamondDerived_func(DiamondDerived *this_ptr);
static int DiamondDerived_func_thunk(DiamondDerived *this_ptr);
static int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr);
static undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr);
static undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr);
static void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr);
static void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr);
static void DiamondDerived_destructor(DiamondDerived *this_ptr);
static void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr);
static void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr);
static void MultiDerived_destructor(MultiDerived *this_ptr);
static void MultiDerived_destructor_thunk(MultiDerived *this_ptr);
static void Derived_destructor(Derived *this_ptr);
static void Base_destructor_impl(Base *this_ptr);
static void Derived_destructor_impl(Derived *this_ptr);
static void MultiDerived_destructor_impl(MultiDerived *this_ptr);
static void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this_ptr);
static void RTTIDerivedB_destructor_impl(RTTIDerivedB *this_ptr);
static void RTTIDerivedA_destructor_impl(RTTIDerivedA *this_ptr);
static void DiamondDerived_destructor_impl(DiamondDerived *this_ptr);
static void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr);
static void DiamondDerived_destructor_nonvirtual_thunk_impl(DiamondDerived *this_ptr);
static void Container_int_constructor(Container_int *this_ptr);
static void Container_int_push(Container_int *this_ptr, int param_1);
static undefined4 Container_int_get(Container_int *this_ptr, int param_1);
static undefined4 Container_int_getSize(Container_int *this_ptr);
static void Container_double_constructor(Container_double *this_ptr);
static void Container_double_push(Container_double *this_ptr, double param_1);
static double Container_double_get(Container_double *this_ptr, int param_1);
static undefined4 Container_double_getSize(Container_double *this_ptr);

/* Struct definitions */
struct Base {
    char data[4];
};

struct Derived {
    char data[8];
};

struct MultiDerived {
    char data[16];
};

struct MiddleA {
    char data[16];
};

struct MiddleB {
    char data[16];
};

struct DiamondDerived {
    char data[24];
};

struct RTTIBase {
    char data[4];
};

struct RTTIDerivedA {
    char data[4];
};

struct RTTIDerivedB {
    char data[4];
};

struct Init {
    char data[4];
};

struct Container_int {
    char data[44];
};

struct Container_double {
    char data[84];
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

static void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

static undefined4 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}



/* Function: main @ 00011380 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

static void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

static void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86_get_pc_thunk_bx @ 00011410 */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

static int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1156c;
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



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

static int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

/* call_virtual_func(Base*, int) */

static void call_virtual_func(Base *param_1, int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

static undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

static undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

static undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

static undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

static int test_cpp_template_func(void)

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
 return (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

static undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

static undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

static undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117ef) */
/* WARNING: Removing unreachable block (ram,0x000117f8) */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

static int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014e48;
 piVar3 = (int *)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 iVar4 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar4 = 0x14;
 }
 else {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 iVar4 = (-(unsigned int)(iVar4 == 0) & 10) + 0x14;
 }
 iVar5 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 100;
 }
 iVar5 = (int)__dynamic_cast(piVar3,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (*(code *)(iVar1 + 4))();
 (*(code *)(*piVar3 + 4))();
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 000118c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

static void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 uVar3;
 int in_GS_OFFSET;
 double dVar4;
 int local_3c;
 int local_38 [2];
 char local_30 [32];
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x118cb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts((const char *)&DAT_00013018);
 local_30[0x1e] = 0;
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
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
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 __printf_chk(1,(const char *)&DAT_0001303c,sVar1 + 0x125c);
 __printf_chk(1,(const char *)&DAT_0001305a,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(const char *)&DAT_00013076,0x2a);
 __printf_chk(1,(const char *)&DAT_00013092,0x47);
 __printf_chk(1,(const char *)&DAT_000130ae,0x28a);
 __printf_chk(1,(const char *)&DAT_000130cb,0x16);
 iVar2 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 local_3c = 10;
 local_38[0] = 0x14;
 template_swap_int(&local_3c,local_38);
 __printf_chk(1,(const char *)&DAT_000130e7,(int)ROUND(dVar4) + iVar2 + local_3c + local_38[0]);
 __printf_chk(1,(const char *)&DAT_00013103,0x10);
 __printf_chk(1,(const char *)&DAT_0001311f,0x55);
 uVar3 = test_cpp_exception();
 __printf_chk(1,(const char *)&DAT_0001313b,uVar3);
 __printf_chk(1,(const char *)&DAT_00013158,0x2bf);
 uVar3 = test_cpp_rtti();
 __printf_chk(1,(const char *)&DAT_00013175,uVar3);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011ae0 */

/* Base::virtual_func(int) */

static int Base_virtual_func(Base *this_ptr, int param_1)

{
 (void)this_ptr;
 return param_1 + 1;
}



/* Function: getName @ 00011af0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

static undefined4 *Base_getName(Base *this_ptr)

{
 (void)this_ptr;
 return (undefined4 *)&DAT_00013008;
}



/* Function: ~Base @ 00011b10 */

/* Base::~Base() */

static void Base_destructor(Base *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: virtual_func @ 00011b20 */

/* Derived::virtual_func(int) */

static int Derived_virtual_func(Derived *this_ptr, int param_1)

{
 return param_1 * *(int *)(this_ptr + 4);
}



/* Function: getName @ 00011b40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

static char *Derived_getName(Derived *this_ptr)

{
 (void)this_ptr;
 return "Derived";
}



/* Function: funcA @ 00011b60 */

/* MultiDerived::funcA() */

static undefined4 MultiDerived_funcA(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return 0x1e;
}



/* Function: funcB @ 00011b70 */

/* MultiDerived::funcB() */

static undefined4 MultiDerived_funcB(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return 0x28;
}



/* Function: funcB @ 00011b80 */

/* non-virtual thunk to MultiDerived::funcB() */

static undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return 0x28;
}



/* Function: func @ 00011b90 */

/* MiddleA::func() */

static int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bb0 */

/* virtual thunk to MiddleA::func() */

static int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bd0 */

/* MiddleB::func() */

static int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 00011bf0 */

/* virtual thunk to MiddleB::func() */

static int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011c10 */

/* DiamondDerived::func() */

static int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c30 */

/* virtual thunk to DiamondDerived::func() */

static int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c50 */

/* non-virtual thunk to DiamondDerived::func() */

static int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011c70 */

/* RTTIDerivedA::getType() const */

static undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 (void)this_ptr;
 return 1;
}



/* Function: getType @ 00011c80 */

/* RTTIDerivedB::getType() const */

static undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 (void)this_ptr;
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011c90 */

/* RTTIDerivedB::~RTTIDerivedB() */

static void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~RTTIDerivedA @ 00011ca0 */

/* RTTIDerivedA::~RTTIDerivedA() */

static void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~DiamondDerived @ 00011cb0 */

/* DiamondDerived::~DiamondDerived() */

static void DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~DiamondDerived @ 00011cc0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

static void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~DiamondDerived @ 00011cd0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

static void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* MultiDerived::~MultiDerived() */

static void MultiDerived_destructor(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

static void MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~Derived @ 00011d00 */

/* Derived::~Derived() */

static void Derived_destructor(Derived *this_ptr)

{
 (void)this_ptr;
 return;
}



/* Function: ~Base @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

static void Base_destructor_impl(Base *this_ptr)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~Derived @ 00011d40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

static void Derived_destructor_impl(Derived *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~MultiDerived @ 00011d70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

static void MultiDerived_destructor_impl(MultiDerived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

static void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -8,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

static void RTTIDerivedB_destructor_impl(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

static void RTTIDerivedA_destructor_impl(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~DiamondDerived @ 00011e30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

static void DiamondDerived_destructor_impl(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011e60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

static void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + *(int *)(*(int *)this_ptr + -0x10),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

static void DiamondDerived_destructor_nonvirtual_thunk_impl(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + -8,0x18);
 return;
}



/* Function: template_max_int @ 00011ec0 */

/* int template_max_int(int, int) */

static int template_max_int(int param_1, int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00011ee0 */

/* double template_max_double(double, double) */

static double template_max_double(double param_1, double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00011f00 */

/* void template_swap_int(int*, int*) */

static void template_swap_int(int *param_1, int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00011f20 */

/* Container_int::Container_int() */

static void Container_int_constructor(Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00011f30 */

/* Container_int::push(int) */

static void Container_int_push(Container_int *this_ptr, int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011f50 */

/* Container_int::get(int) const */

static undefined4 Container_int_get(Container_int *this_ptr, int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 return *(undefined4 *)(this_ptr + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011f80 */

/* Container_int::getSize() const */

static undefined4 Container_int_getSize(Container_int *this_ptr)

{
 (void)this_ptr;
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container_double @ 00011f90 */

/* Container_double::Container_double() */

static void Container_double_constructor(Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00011fa0 */

/* Container_double::push(double) */

static void Container_double_push(Container_double *this_ptr, double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00011fd0 */

/* Container_double::get(int) const */

static double Container_double_get(Container_double *this_ptr, int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return *(double *)(this_ptr + param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00012000 */

/* Container_double::getSize() const */

static undefined4 Container_double_getSize(Container_double *this_ptr)

{
 (void)this_ptr;
 return *(undefined4 *)(this_ptr + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 0001200c */

/* WARNING: This is an inlined function */

static undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00012010 */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

static void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
