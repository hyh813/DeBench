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

/* Forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;

/* Missing type declarations */
struct std__ios_base {
    int dummy;
};

struct type_info {
    const char *name;
};

/* External symbols */
extern void *__dso_handle;
extern struct type_info int_typeinfo;
extern struct type_info RTTIBase_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;
extern const char DAT_00102018[];
extern const char DAT_0010203c[];
extern const char DAT_0010205a[];
extern const char DAT_00102076[];
extern const char DAT_00102092[];
extern const char DAT_001020ae[];
extern const char DAT_001020cb[];
extern const char DAT_001020e7[];
extern const char DAT_00102103[];
extern const char DAT_0010211f[];
extern const char DAT_0010213b[];
extern const char DAT_00102158[];
extern const char DAT_00102175[];

/* Function prototypes */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete_sized(void *ptr, size_t size);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, struct type_info *tinfo, void *dest);
void __stack_chk_fail(void);
int __printf_chk(int flag, const char *format, ...);
char *builtin_strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void puts(const char *s);
void test_cpp_oo_features(void);
void *__dynamic_cast(void *obj, struct type_info *src_type, struct type_info *dest_type, int ptr2mem);
int Base_virtual_func(struct Base *this_obj, int x);
int Derived_virtual_func(struct Derived *this_obj, int x);
char * Base_getName(struct Base *this_obj);
char * Derived_getName(struct Derived *this_obj);
void *PTR__RTTIDerivedA_00103c70;
void *PTR__RTTIDerivedB_00103c98;
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Missing symbol definitions */
struct type_info RTTIBase_typeinfo = {"RTTIBase"};
struct type_info RTTIDerivedA_typeinfo = {"12RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {"12RTTIDerivedB"};
struct type_info int_typeinfo = {"i"};

const char DAT_00102018[] = "Testing C++ OO Features\n";
const char DAT_0010203c[] = "Test cpp member func result: %d\n";
const char DAT_0010205a[] = "Test cpp constructor result: %d\n";
const char DAT_00102076[] = "Test cpp virtual func result: %d\n";
const char DAT_00102092[] = "Test cpp multiple inheritance result: %d\n";
const char DAT_001020ae[] = "Test cpp diamond inheritance result: %d\n";
const char DAT_001020cb[] = "Test cpp operator overload result: %d\n";
const char DAT_001020e7[] = "Test cpp template func result: %d\n";
const char DAT_00102103[] = "Test cpp template class result: %d\n";
const char DAT_0010211f[] = "Test cpp lambda result: %d\n";
const char DAT_0010213b[] = "Test cpp exception result: %d\n";
const char DAT_00102158[] = "Test cpp smart ptr result: %d\n";
const char DAT_00102175[] = "All C++ OO tests completed\n";

void operator_delete(void *ptr, size_t size) {
    (void)ptr;
    (void)size;
}

void __stack_chk_fail(void) {
    while(1) {}
}

size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

void *__cxa_allocate_exception(size_t size) {
    return operator_new(size);
}

void *__dynamic_cast(void *obj, struct type_info *src_type, struct type_info *dest_type, int ptr2mem) {
    (void)src_type;
    (void)dest_type;
    (void)ptr2mem;
    return obj;
}

void *operator_new(size_t size) {
    (void)size;
    return (void *)0; /* Stub implementation */
}

void __cxa_throw(void *obj, struct type_info *tinfo, void *dest) {
    (void)obj;
    (void)tinfo;
    (void)dest;
    while(1) {} /* Stub implementation - never returns */
}

void puts(const char *s) {
    __printf_chk(1, "%s\n", s);
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

int __printf_chk(int flag, const char *format, ...) {
    (void)flag;
    (void)format;
    return 0; /* Stub implementation */
}

/* Struct definitions */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count;

struct Base {
    void **_vptr_Base;
};

struct Derived {
    void **_vptr_Base;
    int multiplier;
};

struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
};

struct MultiDerived {
    void **_vptr_Base;
    int field1;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x20;
};

struct RTTIDerivedA {
    void **_vptr;
};

struct RTTIDerivedB {
    void **_vptr;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

typedef int (*_func_int_varargs)();
typedef void code;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(void (*)())0)();
 return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 uint32_t *puVar1;
 
 puVar1 = (uint32_t *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: main @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}








/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 obj.name[0x1e] = '\0';
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
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = Base_virtual_func(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int a;
 int b;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
iVar1 = template_max_int(3,7);
	dVar2 = template_max_double(2.5,1.5);
	a = 10;
	b = 0x14;
	template_swap_int(&a,&b);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x001016b2) */
/* WARNING: Removing unreachable block (ram,0x001016b7) */
/* WARNING: Removing unreachable block (ram,0x001016be) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 
 plVar3 = (long *)(uintptr_t)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)(uintptr_t)operator_new(8);
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
 iVar2 = (-(unsigned int)(iVar2 == 0) & 10) + 0x14;
 }
/* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar5 = (long)(uintptr_t)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
  /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  if (lVar5 != 0) {
 iVar2 = iVar2 + 100;
 }
lVar5 = (long)(uintptr_t)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
  if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(long *))(*(long **)(lVar1 + 8)))(plVar3);
 ((void (*)(long *))(*(long **)(*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 long lVar1;
 int iVar2;
 size_t sVar3;
 long in_FS_OFFSET;
 double dVar4;
 int a;
 int b;
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(DAT_00102018);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 sVar3 = strlen(obj.name);
 __printf_chk(1,DAT_0010203c,(int)sVar3 + 0x125c);
 /* Unresolved local var: int result@[???] */
 __printf_chk(1,DAT_0010205a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00102076,0x2a);
 __printf_chk(1,DAT_00102092,0x47);
 __printf_chk(1,DAT_001020ae,0x28a);
 __printf_chk(1,DAT_001020cb,0x16);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 iVar2 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 __printf_chk(1,DAT_001020e7,(int)dVar4 + iVar2 + a + b);
 __printf_chk(1,DAT_00102103,0x10);
 __printf_chk(1,DAT_0010211f,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_0010213b,iVar2);
 __printf_chk(1,DAT_00102158,0x2bf);
 test_cpp_rtti();
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00101990 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(struct Base *this_obj,int x)

{
 return x + 1;
}



/* Function: getName @ 001019a0 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(struct Base *this_obj)

{
 return "Base";
}



/* Function: ~Base @ 001019b0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base__dtor(Base *this_obj,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 001019c0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(struct Derived *this_obj,int x)

{
 return this_obj->multiplier * x;
}



/* Function: getName @ 001019d0 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(struct Derived *this_obj)

{
 return "Derived";
}



/* Function: funcA @ 001019e0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(struct MultiDerived *this_obj)

{
 return 0x1e;
}



/* Function: funcB @ 001019f0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(struct MultiDerived *this_obj)

{
 return 0x28;
}



/* Function: funcB @ 00101a00 */

/* non-virtual thunk to MultiDerived::funcB() */

unsigned long long MultiDerived_funcB_thunk(struct MultiDerived *this_obj)

{
 return 0x28;
}



/* Function: func @ 00101a10 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(struct MiddleA *this_obj)

{
 return *(int *)((long)&this_obj->dataA + (long)this_obj->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00101a30 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_obj)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_obj->_vptr_MiddleA + (long)this_obj->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a50 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_obj)

{
 return *(int *)((long)&this_obj->dataB + (long)this_obj->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00101a70 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_obj)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_obj->_vptr_MiddleB + (long)this_obj->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 00101a90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_obj)

{
 return *(int *)((long)&(this_obj->super_MiddleA).dataA + (long)(this_obj->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00101ab0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_obj)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((long)&(this_obj->super_MiddleA)._vptr_MiddleA +
 (long)(this_obj->super_MiddleA)._vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ad0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this_obj)

{
 return *(int *)((long)this_obj + *(long *)(*(long *)&this_obj[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101af0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_obj)

{
 return 1;
}



/* Function: getType @ 00101b00 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_obj)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101b10 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_dtor(RTTIDerivedB *this_obj,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101b20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA__dtor(struct RTTIDerivedA *this_obj,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00101b30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_dtor(DiamondDerived *this_obj,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00101b40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_virtual_thunk(DiamondDerived *this_obj)

{
 return;
}



/* Function: ~DiamondDerived @ 00101b50 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk(DiamondDerived *this_obj)

{
 return;
}



/* Function: ~MultiDerived @ 00101b60 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_dtor2(MultiDerived *this_obj,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00101b70 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk(MultiDerived *this_obj)

{
 return;
}



/* Function: ~Derived @ 00101b80 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_dtor(Derived *this_obj,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00101b90 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_dtor(struct Base *this_obj,int __in_chrg)

{
 operator_delete(this_obj,8);
 return;
}



/* Function: ~Derived @ 00101ba0 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_dtor_delete(Derived *this_obj,int __in_chrg)

{
 operator_delete(this_obj,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101bb0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_dtor_delete(MultiDerived *this_obj,int __in_chrg)

{
 operator_delete(this_obj,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101bc0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk2(MultiDerived *this_obj)

{
 operator_delete(this_obj,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101be0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB__dtor_delete(RTTIDerivedB *this_obj,int __in_chrg)

{
 operator_delete(this_obj,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101bf0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA__dtor_delete(RTTIDerivedA *this_obj,int __in_chrg)

{
 operator_delete(this_obj,8);
 return;
}



/* Function: ~DiamondDerived @ 00101c00 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_dtor_delete(DiamondDerived *this_obj,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this_obj,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101c10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_virtual_thunk_delete(DiamondDerived *this_obj)

{
 operator_delete((_func_int_varargs *)
 ((long)&(this_obj->super_MiddleA)._vptr_MiddleA +
 (long)(this_obj->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101c30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk_delete(DiamondDerived *this_obj)

{
 operator_delete(&this_obj[-1].field_0x20,0x30);
 return;
}



/* Function: template_max<int> @ 00101c50 */

int template_max_int(int a,int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00101c60 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00101c70 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00101c80 */

/* Function: Container_int__Container */

void Container_int__Container(Container_int *this_obj)

{
 this_obj->size = 0;
 return;
}



/* Function: push @ 00101c90 */

/* Function: Container_int__push */

void Container_int__push(Container_int *this_obj,int value)

{
 int iVar1;
 
 iVar1 = this_obj->size;
 if (iVar1 < 10) {
 this_obj->size = iVar1 + 1;
 this_obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101cb0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int__get(Container_int *this_obj,int idx)

{
 if ((-1 < idx) && (idx < this_obj->size)) {
 return this_obj->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00101cd0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int__getSize(Container_int *this_obj)

{
 return this_obj->size;
}



/* Function: Container @ 00101ce0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double__Container(Container_double *this_obj)

{
 this_obj->size = 0;
 return;
}



/* Function: push @ 00101cf0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double__push(Container_double *this_obj,double value)

{
 int iVar1;
 
 iVar1 = this_obj->size;
 if (iVar1 < 10) {
 this_obj->size = iVar1 + 1;
 this_obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101d10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double__get(Container_double *this_obj,int idx)

{
 if ((-1 < idx) && (idx < this_obj->size)) {
 return this_obj->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00101d40 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double__getSize(Container_double *this_obj)

{
 return this_obj->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
