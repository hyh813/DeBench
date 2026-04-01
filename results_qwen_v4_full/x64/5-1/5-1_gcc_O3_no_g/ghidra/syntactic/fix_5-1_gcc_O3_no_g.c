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
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef void (*code)(void);

/* External function declarations */
extern size_t strlen(const char *s);
extern void __stack_chk_fail(void);
extern int strcmp(const char *s1, const char *s2);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);

/* operator_new definition */
void *operator_new(size_t size) {
    return (void*)0; /* stub - actual implementation would allocate memory */
}
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *tinfo, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, size_t src_ptr_diff);
extern char *builtin_strncpy(char *dest, const char *src, size_t n);
extern void __printf_chk(int flag, const char *format, ...);

/* Stack check fail stub */
void __stack_chk_fail(void) {
    /* stub - stack check failed */
}

/* __cxa_allocate_exception stub */
void *__cxa_allocate_exception(size_t size) {
    return (void*)0; /* stub */
}

/* __printf_chk stub - variadic function wrapper */
void __printf_chk(int flag, const char *format, ...) {
    /* stub - printf with check flag */
}

/* puts stub */
int puts(const char *s) {
    return 0; /* stub */
}

/* operator_delete stub */
void operator_delete(void *ptr, size_t size) {
    /* stub - actual implementation would free memory */
}

/* builtin_strncpy stub */
char *builtin_strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/* strlen stub */
size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

/* External RTTI typeinfo declarations */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* RTTI typeinfo definitions */
void *RTTIBase_typeinfo = (void*)0x1;
void *RTTIDerivedA_typeinfo = (void*)0x2;
void *RTTIDerivedB_typeinfo = (void*)0x3;

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct LifecycleClass LifecycleClass;
extern int LifecycleClass_instance_count;

/* Struct definitions for C++ classes */
struct Base {
    void *vtable;
    int value;
};

struct Derived {
    void *vtable;
    int value;
    int derived_value;
};

struct MiddleA {
    void *vtable;
    int value;
    int middleA_value;
};

struct MiddleB {
    void *vtable;
    int value;
    int middleB_value;
};

struct DiamondDerived {
    char pad[0x30];
};

struct MultiDerived {
    void *vtable;
    int value;
    int derived_value;
    int multi_value;
};

struct RTTIDerivedA {
    void *vtable;
    int type;
};

struct RTTIDerivedB {
    void *vtable;
    int type;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

struct LifecycleClass {
    int id;
};

/* External pointer declarations */
extern void *PTR__RTTIDerivedA_00103c70;
extern void *PTR__RTTIDerivedB_00103c98;

/* External data declarations */
extern char DAT_00102018[];
extern char DAT_0010203c[];
extern char DAT_0010205a[];
extern char DAT_00102076[];
extern char DAT_00102092[];
extern char DAT_001020ae[];
extern char DAT_001020cb[];
extern char DAT_001020e7[];
extern char DAT_00102103[];
extern char DAT_0010211f[];
extern char DAT_0010213b[];
extern char DAT_00102158[];
extern char DAT_00102175[];
extern char DAT_00102004[];

/* LifecycleClass instance count definition */
int LifecycleClass_instance_count = 0;

/* Data definitions */
char DAT_00102018[] = "Testing C++ OO Features\n";
char DAT_0010203c[] = "String length: %d\n";
char DAT_0010205a[] = "Constructor count: %d\n";
char DAT_00102076[] = "Virtual func result: %d\n";
char DAT_00102092[] = "Multiple inheritance: %d\n";
char DAT_001020ae[] = "Diamond inheritance: %d\n";
char DAT_001020cb[] = "Operator overload: %d\n";
char DAT_001020e7[] = "Template func result: %d\n";
char DAT_00102103[] = "Template class: %d\n";
char DAT_0010211f[] = "Lambda result: %d\n";
char DAT_0010213b[] = "Exception caught: %d\n";
char DAT_00102158[] = "Smart ptr: %d\n";
char DAT_00102175[] = "All tests passed!\n";
char DAT_00102004[] = "Base";

/* Forward declarations for test functions */
extern void test_cpp_oo_features(void);

/* Forward declarations for template functions */
extern int template_max_int(int param_1, int param_2);
extern double template_max_double(double param_1, double param_2);
extern void template_swap_int(int *param_1, int *param_2);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((code)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
 __cxa_throw(puVar1,(void*)0,0);
}



/* Function: main @ 00101310 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34[0x1e] = 0;
 builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1f] = 0;
 sVar1 = strlen(local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x001016b2) */
/* WARNING: Removing unreachable block (ram,0x001016b7) */
/* WARNING: Removing unreachable block (ram,0x001016be) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 iVar2 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = (-(uint)(iVar2 == 0) & 10) + 0x14;
 }
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 100;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (*(code *)(lVar1 + 8))();
 (*(code *)(*plVar4 + 8))();
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t sVar3;
 long in_FS_OFFSET;
 double dVar4;
 int local_40;
 int local_3c [2];
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(DAT_00102018);
 builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1e] = 0;
 local_34[0x1f] = 0;
 sVar3 = strlen(local_34);
 __printf_chk(1,DAT_0010203c,(int)sVar3 + 0x125c);
 __printf_chk(1,DAT_0010205a,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00102076,0x2a);
 __printf_chk(1,DAT_00102092,0x47);
 __printf_chk(1,DAT_001020ae,0x28a);
 __printf_chk(1,DAT_001020cb,0x16);
 iVar1 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 local_40 = 10;
 local_3c[0] = 0x14;
 template_swap_int(&local_40,local_3c);
 __printf_chk(1,DAT_001020e7,(int)dVar4 + iVar1 + local_40 + local_3c[0]);
 __printf_chk(1,DAT_00102103,0x10);
 __printf_chk(1,DAT_0010211f,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_0010213b,0);
 __printf_chk(1,DAT_00102158,0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00101990 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *param_1,int param_2)

{
 return param_2 + 1;
}



/* Function: getName @ 001019a0 */

/* Base::getName() const */

char * Base_getName(void)

{
 return DAT_00102004;
}



/* Function: ~Base @ 001019b0 */

/* Base::~Base() */

void Base_destructor(Base *param_1)

{
 return;
}



/* Function: virtual_func @ 001019c0 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *param_1,int param_2)

{
 return *(int *)(param_1 + 8) * param_2;
}



/* Function: getName @ 001019d0 */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 001019e0 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(MultiDerived *param_1)

{
 return 0x1e;
}



/* Function: funcB @ 001019f0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(MultiDerived *param_1)

{
 return 0x28;
}



/* Function: funcB @ 00101a00 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_nonvirtual_thunk(MultiDerived *param_1)

{
 return 0x28;
}



/* Function: func @ 00101a10 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a30 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) +
 *(long *)(*(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a50 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 200;
}



/* Function: func @ 00101a70 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) +
 *(long *)(*(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 00101a90 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ab0 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) +
 *(long *)(*(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ad0 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)(param_1 + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101af0 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *param_1)

{
 return 1;
}



/* Function: getType @ 00101b00 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *param_1)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101b10 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *param_1)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101b20 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *param_1)

{
 return;
}



/* Function: ~DiamondDerived @ 00101b30 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(DiamondDerived *param_1)

{
 return;
}



/* Function: ~DiamondDerived @ 00101b40 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(DiamondDerived *param_1)

{
 return;
}



/* Function: ~DiamondDerived @ 00101b50 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *param_1)

{
 return;
}



/* Function: ~MultiDerived @ 00101b60 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *param_1)

{
 return;
}



/* Function: ~MultiDerived @ 00101b70 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *param_1)

{
 return;
}



/* Function: ~Derived @ 00101b80 */

/* Derived::~Derived() */

void Derived_destructor(Derived *param_1)

{
 return;
}



/* Function: ~Base @ 00101b90 */

/* Base::~Base() */

void Base_destructor2(Base *param_1)

{
 operator_delete(param_1,8);
 return;
}



/* Function: ~Derived @ 00101ba0 */

/* Derived::~Derived() */

void Derived_destructor2(Derived *param_1)

{
 operator_delete(param_1,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101bb0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor3(MultiDerived *param_1)

{
 operator_delete(param_1,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101bc0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor3_nonvirtual_thunk(MultiDerived *param_1)

{
 operator_delete(param_1 + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101be0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor3(RTTIDerivedB *param_1)

{
 operator_delete(param_1,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101bf0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor3(RTTIDerivedA *param_1)

{
 operator_delete(param_1,8);
 return;
}



/* Function: ~DiamondDerived @ 00101c00 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor3(DiamondDerived *param_1)

{
 operator_delete(param_1,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101c10 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor3_thunk(DiamondDerived *param_1)

{
 operator_delete(param_1 + *(long *)(*(long *)param_1 + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101c30 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor3_nonvirtual_thunk(DiamondDerived *param_1)

{
 operator_delete(param_1 + -0x10,0x30);
 return;
}



/* Function: template_max_int @ 00101c50 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00101c60 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00101c70 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101c80 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *param_1)

{
 *(undefined4 *)(param_1 + 0x28) = 0;
 return;
}



/* Function: push @ 00101c90 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + (long)iVar1 * 4) = param_2;
 }
 return;
}



/* Function: get @ 00101cb0 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *param_1,int param_2)

{
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101cd0 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *param_1)

{
 return *(undefined4 *)(param_1 + 0x28);
}



/* Function: Container @ 00101ce0 */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *param_1)

{
 *(undefined4 *)(param_1 + 0x50) = 0;
 return;
}



/* Function: push @ 00101cf0 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *param_1,double param_2)

{
 int iVar1;
 
 iVar1 = *(int *)(param_1 + 0x50);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x50) = iVar1 + 1;
 *(double *)(param_1 + (long)iVar1 * 8) = param_2;
 }
 return;
}



/* Function: get @ 00101d10 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *param_1,int param_2)

{
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
 return *(undefined8 *)(param_1 + (long)param_2 * 8);
 }
 return 0;
}



/* Function: getSize @ 00101d40 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *param_1)

{
 return *(undefined4 *)(param_1 + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
