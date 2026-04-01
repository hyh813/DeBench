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
typedef unsigned char undefined1;
typedef unsigned long long ulonglong;

/* Ghidra macro for extracting part of a value */
#define SUB84(val, offset) ((int)(val))

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;
struct Point;
struct Container_int;
struct Container_double;
struct type_info;

/* Struct definitions */
struct Base {
    void **_vptr_Base;
};

struct Derived {
    void **_vptr_Base;
    int multiplier;
};

struct BaseA {
    void **_vptr_BaseA;
};

struct BaseB {
    void **_vptr_BaseB;
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

struct VirtualBase {
    void **_vptr_VirtualBase;
};

struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
};

struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x10;
};

struct type_info {
    const char *name;
};

struct RTTIBase {
    void **_vptr_RTTIBase;
};

struct RTTIDerivedA {
    void **_vptr_RTTIBase;
    struct type_info typeinfo;
};

struct RTTIDerivedB {
    void **_vptr_RTTIBase;
    struct type_info typeinfo;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};

/* Static member for LifecycleClass */
int LifecycleClass_instance_count = 0;

struct Point {
    int x;
    int y;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* External function declarations */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern void *__dynamic_cast(void *, void *, void *, int);
extern void *operator_new(size_t);
extern void operator_delete(void *, size_t);
extern int __aeabi_d2iz(double);
extern void __aeabi_dcmpgt(int, int, int);
extern void __stack_chk_fail(void);
extern int __aeabi_atexit(void *, void *, void *);
extern void *memset(void *, int, size_t);
extern char *strncpy(char *, const char *, size_t);
extern size_t strlen(const char *);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *__dso_handle;

/* Define __ioinit */
struct std_ios_base_Init { int dummy; };
struct std_type_info { const char *name; };
struct std_ios_base_Init __ioinit = {0};

/* Stub implementations for external library functions */
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags)
{
 return obj;
}

int puts(const char *s)
{
 return 0;
}

char *strncpy(char *dest, const char *src, size_t n)
{
 size_t i;
 for (i = 0; i < n && src[i] != '\0'; i++)
  dest[i] = src[i];
 for (; i < n; i++)
  dest[i] = '\0';
 return dest;
}

size_t strlen(const char *s)
{
 size_t len = 0;
 while (s[len] != '\0')
  len++;
 return len;
}

int __aeabi_d2iz(double d)
{
 return (int)d;
}

void operator_delete(void *ptr, size_t size)
{
 /* stub */
}

void __cxa_throw(void *exc, void *type, void *dest)
{
 /* stub - does not return */
}

int std_type_info_operator_eq(struct std_type_info *self, struct std_type_info *other)
{
 return self->name == other->name;
}

/* Stub implementations for missing external functions */
void *__cxa_allocate_exception(size_t size)
{
 static char exception_buffer[256];
 return exception_buffer;
}

void *operator_new(size_t size)
{
 static char heap_buffer[4096];
 static size_t heap_offset = 0;
 void *ptr = heap_buffer + heap_offset;
 heap_offset += size;
 return ptr;
}

int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

int __aeabi_atexit(void *obj, void *func, void *dso_handle)
{
 return 0;
}

/* Data references - definitions */
char DAT_000114d8[] = "Starting C++ OO features test\n";
char DAT_000114fc[] = "Member function result: %d\n";
char DAT_0001151c[] = "Constructor result: %d\n";
char DAT_00011538[] = "Virtual function result: %d\n";
char DAT_00011554[] = "Multiple inheritance result: %d\n";
char DAT_00011570[] = "Diamond inheritance result: %d\n";
char DAT_00011590[] = "Operator overload result: %d\n";
char DAT_000115ac[] = "Template function result: %d\n";
char DAT_000115c8[] = "Template class result: %d\n";
char DAT_000115e4[] = "Lambda result: %d\n";
char DAT_00011600[] = "Exception result: %d\n";
char DAT_00011620[] = "Smart pointer result: %d\n";
char DAT_00011640[] = "RTTI result: %d\n";

/* RTTI and vtable symbols - definitions */
void *PTR__RTTIDerivedA_000116b4 = (void *)0x1;
void *PTR__RTTIDerivedB_000116c8 = (void *)0x2;
struct type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB"};
struct type_info RTTIBase_typeinfo = {"RTTIBase"};

/* Template function declarations */
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(int *, int *);

/* std namespace stubs */

/* std::type_info operator== stub */
extern int std_type_info_operator_eq(struct std_type_info *self, struct std_type_info *other);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0,0);
}



/* Function declarations */
extern void test_cpp_oo_features(void);

/* Function: main @ 00010b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 __aeabi_atexit(&__ioinit,(void *)0,__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

/* WARNING: Removing unreachable block (ram,0x00010cb0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(void *))(*obj->_vptr_Base))(obj);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar2 = __aeabi_d2iz(0.0);
 if (local_14 == 0) {
 return iVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_8_2_35feab7f lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int_[],_std::default_delete<int_[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 type_info *pTypeInfo;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)operator_new(4);
 pTypeInfo = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
 iVar3 = std_type_info_operator_eq((struct std_type_info *)pTypeInfo,(struct std_type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = std_type_info_operator_eq(
 *(struct std_type_info **)(*piVar2 + -4),(struct std_type_info *)&RTTIDerivedB_typeinfo);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 iVar3 = (int)__dynamic_cast(piVar1,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar3 != 0) {
 iVar6 = iVar6 + 100;
 }
 iVar3 = (int)__dynamic_cast(piVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(int *))(*(int *)(iVar4 + 4)))(piVar1);
 ((void (*)(int *))(*(int *)(*piVar2 + 4)))(piVar2);
 return iVar6 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ed4 */

/* WARNING: Removing unreachable block (ram,0x0001107c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 extraout_r0;
 int iVar3;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 SimpleClass obj;
 
 puts(DAT_000114d8);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 __printf_chk(1,DAT_000114fc,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 __printf_chk(1,DAT_0001151c,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00011538,0x2a);
 __printf_chk(1,DAT_00011554,0x47);
 __printf_chk(1,DAT_00011570,0x28a);
 __printf_chk(1,DAT_00011590,0x16);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 iVar2 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar3 = __aeabi_d2iz(0.0);
 __printf_chk(1,DAT_000115ac,iVar3 + iVar2 + a + b);
 __printf_chk(1,DAT_000115c8,0x10);
 __printf_chk(1,DAT_000115e4,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_00011600,iVar2);
 __printf_chk(1,DAT_00011620,0x2bf);
 iVar2 = test_cpp_rtti();
 __printf_chk(1,DAT_00011640,iVar2);
 return;
}



/* Function: virtual_func @ 000110d0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *self,int x)

{
 return x + 1;
}



/* Function: getName @ 000110d8 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *self)

{
 return "Base";
}



/* Function: ~Base @ 000110e4 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(Base *self,int __in_chrg)

{
 return self;
}



/* Function: virtual_func @ 000110e8 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *self,int x)

{
 return x * self->multiplier;
}



/* Function: getName @ 000110f4 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00011100 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: funcB @ 00011108 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *self)

{
 return 0x28;
}



/* Function: funcB @ 00011110 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00011118 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *self)

{
 return *(int *)((int)&self->dataA + (int)self->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011130 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *self)

{
 return *(int *)((int)&self->dataA +
 (int)(self->_vptr_MiddleA[-3] +
 *(int *)(*(int *)((int)&self->_vptr_MiddleA + (int)self->_vptr_MiddleA[-3]) +
 -0xc))) + 0x96;
}



/* Function: func @ 00011154 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *self)

{
 return *(int *)((int)&self->dataB + (int)self->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 0001116c */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *self)

{
 return *(int *)((int)&self->dataB +
 (int)(self->_vptr_MiddleB[-3] +
 *(int *)(*(int *)((int)&self->_vptr_MiddleB + (int)self->_vptr_MiddleB[-3]) +
 -0xc))) + 200;
}



/* Function: func @ 00011190 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)((int)&(self->super_MiddleA).dataA + (int)(self->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 000111a8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *self)

{
 int *p_Var1;
 
 p_Var1 = (int *)(self->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((int)&(self->super_MiddleA).dataA +
 (int)(p_Var1 + *(int *)(*(int *)((int)&(self->super_MiddleA)._vptr_MiddleA +
 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 000111cc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *self)

{
 return *(int *)((int)self + *(int *)(*(int *)&self[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000111e4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: getType @ 000111ec */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 000111f4 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(RTTIDerivedB *self,int __in_chrg)

{
 return self;
}



/* Function: ~RTTIDerivedA @ 000111f8 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor(RTTIDerivedA *self,int __in_chrg)

{
 return self;
}



/* Function: ~DiamondDerived @ 000111fc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void * DiamondDerived_destructor(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 return self;
}



/* Function: ~DiamondDerived @ 00011200 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_thunk(DiamondDerived *self)

{
 return (void *)
 ((int)&(self->super_MiddleA)._vptr_MiddleA + (int)(self->super_MiddleA)._vptr_MiddleA[-4]);
}



/* Function: ~DiamondDerived @ 00011210 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *self)

{
 return (void *)&self[-1].field_0x10;
}



/* Function: ~MultiDerived @ 00011218 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor(MultiDerived *self,int __in_chrg)

{
 return self;
}



/* Function: ~MultiDerived @ 0001121c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_thunk(MultiDerived *self)

{
 return &self[-1].super_BaseB;
}



/* Function: ~Derived @ 00011224 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(Derived *self,int __in_chrg)

{
 return self;
}



/* Function: ~Base @ 00011228 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor_impl(Base *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~Derived @ 00011240 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor_impl(Derived *self,int __in_chrg)

{
 operator_delete(self,8);
 return self;
}



/* Function: ~MultiDerived @ 00011258 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor_impl(MultiDerived *self,int __in_chrg)

{
 operator_delete(self,0x10);
 return self;
}



/* Function: ~MultiDerived @ 00011270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_impl_thunk(MultiDerived *self)

{
 operator_delete(&self[-1].super_BaseB,0x10);
 return &self[-1].super_BaseB;
}



/* Function: ~RTTIDerivedB @ 0001128c */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor_impl(RTTIDerivedB *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~RTTIDerivedA @ 000112a4 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor_impl(RTTIDerivedA *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~DiamondDerived @ 000112bc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void * DiamondDerived_destructor_impl(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 operator_delete(self,0x18);
 return self;
}



/* Function: ~DiamondDerived @ 000112d4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_impl_thunk(DiamondDerived *self)

{
 void *p_Var1;
 
 p_Var1 = (void *)
 ((int)&(self->super_MiddleA)._vptr_MiddleA + (int)(self->super_MiddleA)._vptr_MiddleA[-4]
 );
 operator_delete(p_Var1,0x18);
 return p_Var1;
}



/* Function: ~DiamondDerived @ 000112f8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_impl_nonvirtual_thunk(DiamondDerived *self)

{
 operator_delete(&self[-1].field_0x10,0x18);
 return &self[-1].field_0x10;
}



/* Function: template_max_int @ 00011314 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011320 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011334 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) {
  return a;
 }
 return b;
}



/* Function: template_swap_int @ 00011350 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_constructor @ 00011364 */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

Container_int * Container_int_constructor(Container_int *self)

{
 self->size = 0;
 return self;
}



/* Function: push @ 00011370 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *self,int value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011388 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *self,int idx)

{
 if ((-1 < idx) && (idx < self->size)) {
 return self->data[idx];
 }
 return 0;
}



/* Function: getSize @ 000113ac */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container_double_constructor @ 000113b4 */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container_double * Container_double_constructor(Container_double *self)

{
 self->size = 0;
 return self;
}



/* Function: push @ 000113c0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *self,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 *(undefined4 *)(self->data + iVar1) = in_r2;
 *(undefined4 *)((int)(self->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 000113f0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *self,int idx)

{
 double in_d0;
 
 if ((-1 < idx) && (idx < self->size)) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 0001141c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *self)

{
 return self->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
