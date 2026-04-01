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
typedef unsigned int uint;

/* Calling convention macros */
#define __thiscall
#define __stdcall
#define __fastcall

/* External function declarations */
extern size_t strlen(const char *s);
extern void __stack_chk_fail_local(void);
extern void __stack_chk_fail(void);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);
extern int strcmp(const char *s1, const char *s2);
extern int printf(const char *format, ...);
extern int __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern char *builtin_strncpy(char *dest, const char *src, size_t n);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *type, void *dest);
extern int __cxa_atexit(void *func, void *arg, void *dso);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_ref);

/* Additional C++ runtime functions */
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_ref);

/* Implementations for external functions */
int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int __printf_chk(int flag, const char *format, ...) {
    return printf(format);
}

void *operator_new(size_t size) {
    return (void*)0x12345678; /* Stub - returns dummy pointer */
}

void operator_delete(void *ptr, size_t size) {
    /* Stub - does nothing */
    (void)ptr;
    (void)size;
}

void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_ref) {
    /* Stub RTTI - returns non-zero to indicate success */
    (void)obj;
    (void)src_type;
    (void)dst_type;
    (void)src_ref;
    return (void*)0x1;
}

/* Implementations for missing external functions */
int printf(const char *format, ...) {
    /* Stub - does nothing */
    (void)format;
    return 0;
}

size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

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

void *__cxa_allocate_exception(size_t size) {
    /* Stub - returns dummy pointer */
    (void)size;
    return (void*)0x12345678;
}

void __cxa_throw(void *exc, void *type, void *dest) {
    /* Stub - does not return */
    (void)exc;
    (void)type;
    (void)dest;
    while(1) {}
}

int puts(const char *s) {
    /* Stub - does nothing */
    (void)s;
    return 0;
}

void __stack_chk_fail(void) {
    /* Stub - does not return */
    while(1) {}
}

/* RTTI typeinfo variables */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* RTTI typeinfo definitions */
void *RTTIBase_typeinfo = (void*)"Base_typeinfo";
void *RTTIDerivedA_typeinfo = (void*)"DerivedA_typeinfo";
void *RTTIDerivedB_typeinfo = (void*)"DerivedB_typeinfo";

/* RTTI pointer variables */
extern void *PTR__RTTIDerivedA_00013e48;
extern void *PTR__RTTIDerivedB_00013e5c;

/* RTTI pointer definitions */
void *PTR__RTTIDerivedA_00013e48 = (void*)"RTTIDerivedA";
void *PTR__RTTIDerivedB_00013e5c = (void*)"RTTIDerivedB";

/* Data references */
extern char *DAT_00012018;
extern char *DAT_0001203c;
extern char *DAT_0001205a;
extern char *DAT_00012076;
extern char *DAT_00012092;
extern char *DAT_000120ae;
extern char *DAT_000120cb;
extern char *DAT_000120e7;
extern char *DAT_00012103;
extern char *DAT_0001211f;
extern char *DAT_0001213b;
extern char *DAT_00012158;
extern char *DAT_00012175;

/* Data reference definitions */
char *DAT_00012018 = "Test OO Features";
char *DAT_0001203c = "Member func result: %d\n";
char *DAT_0001205a = "Constructor result: %d\n";
char *DAT_00012076 = "Virtual func result: %d\n";
char *DAT_00012092 = "Multiple inheritance result: %d\n";
char *DAT_000120ae = "Diamond inheritance result: %d\n";
char *DAT_000120cb = "Operator overload result: %d\n";
char *DAT_000120e7 = "Template func result: %d\n";
char *DAT_00012103 = "Template class result: %d\n";
char *DAT_0001211f = "Lambda result: %d\n";
char *DAT_0001213b = "Exception result: %d\n";
char *DAT_00012158 = "Smart ptr result: %d\n";
char *DAT_00012175 = "RTTI result: %d\n";

/* Additional type definitions */
typedef struct _func_int_varargs {
    int data;
} _func_int_varargs;

/* Macro for rounding */
#define ROUND(x) ((int)(x))

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward declarations for functions */
extern void test_cpp_oo_features(void);
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

/* Struct definitions for C++ classes */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};

/* Static member for LifecycleClass */
extern int LifecycleClass_instance_count;
int LifecycleClass_instance_count = 0;

struct Base {
    int *_vptr_Base;
};

struct Derived {
    Base super_Base;
    int multiplier;
};

struct MiddleA {
    int *_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    int *_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x10;
};

struct MultiDerived {
    Base super_BaseA;
    Base super_BaseB;
};

struct RTTIBase {
    void *typeinfo;
};

struct RTTIDerivedA {
    RTTIBase super;
};

struct RTTIDerivedB {
    RTTIBase super;
};

/* Struct definitions for container types */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((code)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw((void*)puVar1,(void*)0,0);
}



/* Function: main @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 /* Stub for C++ static initialization - removed std::ios_base references */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 size_t sVar2;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 builtin_strncpy(obj.name,"Test",5);
 obj.name[5] = '\0';
 obj.name[6] = '\0';
 obj.name[7] = '\0';
 obj.name[8] = '\0';
 obj.name[9] = '\0';
 obj.name[10] = '\0';
 obj.name[0xb] = '\0';
 obj.name[0xc] = '\0';
 obj.name[0xd] = '\0';
 obj.name[0xe] = '\0';
 obj.name[0xf] = '\0';
 obj.name[0x10] = '\0';
 obj.name[0x11] = '\0';
 obj.name[0x12] = '\0';
 obj.name[0x13] = '\0';
 obj.name[0x14] = '\0';
 obj.name[0x15] = '\0';
 obj.name[0x16] = '\0';
 obj.name[0x17] = '\0';
 obj.name[0x18] = '\0';
 obj.name[0x19] = '\0';
 obj.name[0x1a] = '\0';
 obj.name[0x1b] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
 obj.name[0x1e] = '\0';
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base*, int))(*obj->_vptr_Base))(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int a;
 int b;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117df) */
/* WARNING: Removing unreachable block (ram,0x000117e4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 uVar7 = 10;
 piVar2 = (int*)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00013e48;
 piVar3 = (int*)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00013e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar4 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar5 = (int)__dynamic_cast(piVar2,(void*)&RTTIBase_typeinfo,(void*)&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 iVar5 = (int)__dynamic_cast(piVar3,(void*)&RTTIBase_typeinfo,(void*)&RTTIDerivedB_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(int*))(*(int*)(iVar1 + 4)))(piVar2);
 ((void (*)(int*))(*(int*)(*piVar3 + 4)))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(DAT_00012018);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 obj.name[0x1e] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
 builtin_strncpy(obj.name,"Test",5);
 obj.name[5] = '\0';
 obj.name[6] = '\0';
 obj.name[7] = '\0';
 obj.name[8] = '\0';
 obj.name[9] = '\0';
 obj.name[10] = '\0';
 obj.name[0xb] = '\0';
 obj.name[0xc] = '\0';
 obj.name[0xd] = '\0';
 obj.name[0xe] = '\0';
 obj.name[0xf] = '\0';
 obj.name[0x10] = '\0';
 obj.name[0x11] = '\0';
 obj.name[0x12] = '\0';
 obj.name[0x13] = '\0';
 obj.name[0x14] = '\0';
 obj.name[0x15] = '\0';
 obj.name[0x16] = '\0';
 obj.name[0x17] = '\0';
 obj.name[0x18] = '\0';
 obj.name[0x19] = '\0';
 obj.name[0x1a] = '\0';
 obj.name[0x1b] = '\0';
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 __printf_chk(1,DAT_0001203c,sVar2 + 0x125c);
 iVar3 = test_cpp_constructor();
 __printf_chk(1,DAT_0001205a,iVar3);
 __printf_chk(1,DAT_00012076,0x2a);
 __printf_chk(1,DAT_00012092,0x47);
 iVar3 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000120ae,iVar3);
 __printf_chk(1,DAT_000120cb,0x16);
 iVar3 = test_cpp_template_func();
 __printf_chk(1,DAT_000120e7,iVar3);
 __printf_chk(1,DAT_00012103,0x10);
 __printf_chk(1,DAT_0001211f,0x55);
 iVar3 = test_cpp_exception();
 __printf_chk(1,DAT_0001213b,iVar3);
 iVar3 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00012158,iVar3);
 iVar3 = test_cpp_rtti();
 __printf_chk(1,DAT_00012175,iVar3);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011a30 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 00011a40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}







/* Function: virtual_func @ 00011a70 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return x * this_ptr->multiplier;
}



/* Function: getName @ 00011a90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00011ab0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00011ac0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00011ad0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00011ae0 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((int)&this_ptr->dataA + (int)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011b00 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this_ptr->_vptr_MiddleA + (int)this_ptr->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b20 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((int)&this_ptr->dataB + (int)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011b40 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this_ptr->_vptr_MiddleB + (int)this_ptr->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011b60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((int)&(this_ptr->super_MiddleA).dataA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011b80 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]
 );
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011ba0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)((int)this_ptr + *(int *)(*(int *)&this_ptr[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bc0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00011bd0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}















/* Function: ~DiamondDerived @ 00011c10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c20 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return;
}















/* Function: ~Base @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base__Base(Base *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~Derived @ 00011c90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived__Derived(Derived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~MultiDerived @ 00011cc0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived__MultiDerived(MultiDerived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived__MultiDerived_nonvirtual_thunk(MultiDerived *this_ptr)

{
 operator_delete(&this_ptr[-1].super_BaseB,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011d20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~DiamondDerived @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011db0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_thunk2(DiamondDerived *this_ptr)

{
 operator_delete((_func_int_varargs *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011de0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived__DiamondDerived_nonvirtual_thunk2(DiamondDerived *this_ptr)

{
 operator_delete(&this_ptr[-1].field_0x10,0x18);
 return;
}



/* Function: template_max_int @ 00011e10 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011e30 */

/* WARNING: Unknown calling convention */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00011e50 */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00011e70 */

/* DWARF original prototype: void Container(Container_int * this) */

void Container_int_Container_int(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00011e80 */

/* DWARF original prototype: void push(Container_int * this, int value) */

void Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011ea0 */

/* DWARF original prototype: int get(Container_int * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 if ((-1 < idx) && (idx < this_ptr->size)) {
 return this_ptr->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011ed0 */

/* DWARF original prototype: int getSize(Container_int * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 00011ee0 */

/* DWARF original prototype: void Container_double(Container_double * this) */

void Container_double_Container_double(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00011ef0 */

/* DWARF original prototype: void push(Container_double * this, double value) */

void Container_double_push(Container_double *this_ptr,double value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011f20 */

/* DWARF original prototype: double get(Container_double * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 if ((-1 < idx) && (idx < this_ptr->size)) {
 return this_ptr->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00011f50 */

/* DWARF original prototype: int getSize(Container_double * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: __x86.get_pc_thunk.ax @ 00011f5c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011f60 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011f70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
