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
typedef unsigned long long undefined8;

/* External function declarations */
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
void __stack_chk_fail(void);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int type_info_operator_eq(struct type_info *ti);

typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned long undefined;
typedef void (*code)(void);

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct type_info {
    char *name;
};
struct Init;
struct Container_int {
    int data[10];
    int size;
};
struct Container_double {
    double data[10];
    int size;
};
struct RTTIDerivedA {
    int typeinfo;
};
struct RTTIDerivedB {
    int typeinfo;
};
struct Base {
    void *vtable;
};
struct Derived {
    void *vtable;
    int value;
};
struct MultiDerived {
    void *vtable;
    int value_a;
    int value_b;
};
struct MiddleA {
    void *vtable;
    int value;
};
struct MiddleB {
    void *vtable;
    int value;
};
struct DiamondDerived {
    void *vtable;
    int value;
    int padding[4];
};
struct LifecycleClass {
    int instance_count;
};


/* External C++ runtime functions */
void* operator_new(size_t);
void operator_delete(void*);
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void* __dynamic_cast(void*, void*, void*, int);
int __aeabi_dcmpgt(double, double);

/* __dynamic_cast stub implementation */
void* __dynamic_cast(void* obj, void* base_type, void* derived_type, int flags)
{
    (void)obj;
    (void)base_type;
    (void)derived_type;
    (void)flags;
    return (void*)0x1000; /* Return non-null to indicate success */
}

/* ARM EABI function stubs */
int __aeabi_d2iz(double val)
{
    return (int)val;
}

/* Standard library function stubs */
int puts(const char *s)
{
    (void)s;
    return 0;
}

int __printf_chk(int flag, const char *format, ...)
{
    (void)flag;
    (void)format;
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

char *strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/* C++ runtime function stubs */
void* operator_new(size_t size)
{
    static char buffer[4096];
    static size_t offset = 0;
    void *ptr = buffer + offset;
    offset += size;
    if (offset > sizeof(buffer)) {
        offset = 0;
    }
    return ptr;
}

void* __cxa_allocate_exception(size_t size)
{
    static char exception_buffer[4096];
    static size_t offset = 0;
    void *ptr = exception_buffer + offset;
    offset += size;
    if (offset > sizeof(exception_buffer)) {
        offset = 0;
    }
    return ptr;
}

int type_info_operator_eq(struct type_info *ti)
{
    if (ti == 0) {
        return 0;
    }
    return 1;
}

/* C++ runtime function stubs */
void __cxa_throw(void *obj, void *type_info, void *dest)
{
    /* Stub implementation - does not return in real code */
    while(1);
}

void operator_delete(void *ptr)
{
    /* Stub implementation */
    (void)ptr;
}

/* Ghidra decompiler macros */
#define SUB84(val, offset) ((int)((unsigned int)(val)))

/* External symbols */
extern int PTR__RTTIDerivedA_0001162c;
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
extern char DAT_00011450[];
extern char DAT_00011474[];
extern char DAT_00011494[];
extern char DAT_000114b0[];
extern char DAT_000114cc[];
extern char DAT_000114e8[];
extern char DAT_00011508[];
extern char DAT_00011524[];
extern char DAT_00011540[];
extern char DAT_0001155c[];
extern char DAT_00011578[];
extern char DAT_00011598[];
extern char DAT_000115b8[];
extern char DAT_00011438[];

/* Defined data symbols */
int PTR__RTTIDerivedA_0001162c = 0;
int PTR__RTTIDerivedB_00011640 = 0;
int RTTIBase_typeinfo = 0;
int RTTIDerivedA_typeinfo = 0;
int RTTIDerivedB_typeinfo = 0;
char DAT_00011450[] = "Testing C++ OO features\n";
char DAT_00011474[] = "String length: %d\n";
char DAT_00011494[] = "Constructor result: %d\n";
char DAT_000114b0[] = "Virtual func result: %d\n";
char DAT_000114cc[] = "Multiple inheritance result: %d\n";
char DAT_000114e8[] = "Diamond inheritance result: %d\n";
char DAT_00011508[] = "Operator overload result: %d\n";
char DAT_00011524[] = "Template func result: %d\n";
char DAT_00011540[] = "Template class result: %d\n";
char DAT_0001155c[] = "Lambda result: %d\n";
char DAT_00011578[] = "Exception result: %d\n";
char DAT_00011598[] = "Smart ptr result: %d\n";
char DAT_000115b8[] = "RTTI result: %d\n";
char DAT_00011438[] = "Base";

/* Template function forward declarations */
int template_max_int(int, int);
void template_swap_int(int*, int*);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void*)0,0);
}



/* Function: main @ 00010b18 */

int main(void);
void test_cpp_oo_features(void);

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

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
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

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
 int iStack_1c;
 int iStack_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 iStack_1c = 10;
 iStack_18 = 0x14;
 template_swap_int(&iStack_1c,&iStack_18);
 uVar2 = __aeabi_d2iz(0.0);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 type_info *ti;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)operator_new(4);
 ti = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = type_info_operator_eq(ti);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = type_info_operator_eq
 (*(type_info **)(*piVar2 + -4));
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
 (*(void (*)(int*))(*(int *)(iVar6 + 4)))(piVar1);
 (*(void (*)(int*))(*(int *)(*piVar2 + 4)))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ec8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 puts(DAT_00011450);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 __printf_chk(1,DAT_00011474,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00011494,uVar2);
 __printf_chk(1,DAT_000114b0,0x2a);
 __printf_chk(1,DAT_000114cc,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000114e8,uVar2);
 __printf_chk(1,DAT_00011508,0x16);
 test_cpp_template_func();
 __printf_chk(1,DAT_00011524,0);
 __printf_chk(1,DAT_00011540,0x10);
 __printf_chk(1,DAT_0001155c,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_00011578,0);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598,uVar2);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,DAT_000115b8,uVar2);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00011048 */

/* Base_virtual_func(int) */

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011050 */

/* Base_getName() const */

char * Base_getName(Base *this_ptr)

{
 return DAT_00011438;
}







/* Function: virtual_func @ 00011060 */

/* Derived_virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 4);
}



/* Function: getName @ 0001106c */

/* Derived_getName() const */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00011078 */

/* MultiDerived_funcA() */

undefined4 MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00011080 */

/* MultiDerived_funcB() */

undefined4 MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00011088 */

/* non-virtual thunk to MultiDerived_funcB() */

undefined4 MultiDerived_funcB_nonvirtual_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00011090 */

/* MiddleA_func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 000110a8 */

/* virtual thunk to MiddleA_func() */

int MiddleA_func_virtual_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: func @ 000110cc */

/* MiddleB_func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 000110e4 */

/* virtual thunk to MiddleB_func() */

int MiddleB_func_virtual_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: func @ 00011108 */

/* DiamondDerived_func() */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011120 */

/* virtual thunk to DiamondDerived_func() */

int DiamondDerived_func_virtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011144 */

/* non-virtual thunk to DiamondDerived_func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 0001115c */

/* RTTIDerivedA_getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00011164 */

/* RTTIDerivedB_getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}











/* Function: ~DiamondDerived @ 00011174 */

/* DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011178 */

/* virtual thunk to DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr)

{
 return this_ptr + *(int *)(*(int *)this_ptr + -0x10);
}



/* Function: ~DiamondDerived @ 00011188 */

/* non-virtual thunk to DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return this_ptr + -8;
}







/* Function: ~MultiDerived @ 00011194 */

/* non-virtual thunk to MultiDerived_destructor() */

MultiDerived * MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this_ptr)

{
 return this_ptr + -8;
}







/* Function: ~Base @ 000111a0 */

/* Base_destructor() */

Base * Base_destructor(Base *this_ptr)

{
 operator_delete(this_ptr);
 return this_ptr;
}



/* Function: ~Derived @ 000111b8 */

/* Derived_destructor() */

Derived * Derived_destructor(Derived *this_ptr)

{
 operator_delete(this_ptr);
 return this_ptr;
}



/* Function: ~MultiDerived @ 000111d0 */

/* MultiDerived_destructor() */

MultiDerived * MultiDerived_destructor(MultiDerived *this_ptr)

{
 operator_delete(this_ptr);
 return this_ptr;
}



/* Function: ~MultiDerived @ 000111e8 */

/* non-virtual thunk to MultiDerived_destructor() */

MultiDerived * MultiDerived_destructor_nonvirtual_thunk_2(MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -8);
 return this_ptr + -8;
}



/* Function: ~RTTIDerivedB @ 00011204 */

/* RTTIDerivedB_destructor() */

RTTIDerivedB * RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return this_ptr;
}



/* Function: ~RTTIDerivedA @ 0001121c */

/* RTTIDerivedA_destructor() */

RTTIDerivedA * RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011234 */

/* DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor_2(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr);
 return this_ptr;
}



/* Function: ~DiamondDerived @ 0001124c */

/* virtual thunk to DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor_virtual_thunk_2(DiamondDerived *this_ptr)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 operator_delete(this_ptr + iVar1);
 return this_ptr + iVar1;
}



/* Function: ~DiamondDerived @ 00011270 */

/* non-virtual thunk to DiamondDerived_destructor() */

DiamondDerived * DiamondDerived_destructor_nonvirtual_thunk_2(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + -8);
 return this_ptr + -8;
}



/* Function: template_max_int @ 0001128c */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00011298 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000112ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 > param_2) {
 return param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 000112c8 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000112dc */

/* Container_int_constructor() */

void Container_int_constructor(struct Container_int *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 000112e8 */

/* Container_int_push(int) */

void Container_int_push(struct Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011300 */

/* Container_int_get(int) const */

undefined4 Container_int_get(struct Container_int *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 return *(undefined4 *)(this_ptr + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011324 */

/* Container_int_getSize() const */

undefined4 Container_int_getSize(struct Container_int *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 0001132c */

/* Container_double_constructor() */

void Container_double_constructor(struct Container_double *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00011338 */

/* Container_double_push(double) */

void Container_double_push(struct Container_double *this_ptr,double param_1)

{
 int iVar1;
 undefined4 *puVar2;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 puVar2 = (undefined4 *)(this_ptr + iVar1 * 8);
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *puVar2 = (undefined4)param_1;
 puVar2[1] = (undefined4)((ulonglong)param_1 >> 0x20);
 }
 return;
}



/* Function: get @ 00011368 */

/* Container_double_get(int) const */

undefined8 Container_double_get(struct Container_double *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return *(undefined8 *)(this_ptr + param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00011394 */

/* Container_double_getSize() const */

undefined4 Container_double_getSize(struct Container_double *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
