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

/* C++ class/struct definitions */
typedef struct {
    void *_vptr_Base;
} Base;

typedef struct {
    Base super_Base;
    int multiplier;
} Derived;

typedef struct {
    Base super_BaseA;
    Base super_BaseB;
    int dataA;
    int dataB;
} MultiDerived;

typedef struct {
    Base super_Base;
    int dataA;
    void *_vptr_MiddleA;
} MiddleA;

typedef struct {
    Base super_Base;
    int dataB;
    void *_vptr_MiddleB;
} MiddleB;

typedef struct {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
} DiamondDerived;

typedef struct {
    Base super_Base;
} RTTIBase;

typedef struct {
    RTTIBase super_RTTIBase;
} RTTIDerivedA;

typedef struct {
    RTTIBase super_RTTIBase;
} RTTIDerivedB;

typedef struct {
    char name[32];
} SimpleClass;

typedef struct {
    int instance_count;
} LifecycleClass;

typedef struct {
    int size;
    int data[10];
} Container_int;

typedef struct {
    int size;
    double data[10];
} Container_double;

typedef struct {
    void *data;
} _func_int_varargs;

typedef int undefined4;
typedef long long undefined8;
typedef unsigned int uint;

/* Global variables */
int LifecycleClass_instance_count = 0;
void *PTR__RTTIDerivedA_00103c70 = (void*)0;
void *PTR__RTTIDerivedB_00103c98 = (void*)0;
void *RTTIBase_typeinfo = (void*)0;
void *RTTIDerivedA_typeinfo = (void*)0;
void *RTTIDerivedB_typeinfo = (void*)0;
char DAT_00102018[] = "Testing C++ OO features\n";
char DAT_0010203c[] = "String length: %d\n";
char DAT_0010205a[] = "Constructor test\n";
char DAT_00102076[] = "Virtual func result: %d\n";
char DAT_00102092[] = "Multiple inheritance: %d\n";
char DAT_001020af[] = "Diamond inheritance test\n";
char DAT_001020cb[] = "Operator overload: %d\n";
char DAT_001020e7[] = "Template func result: %d\n";
char DAT_00102103[] = "Template class: %d\n";
char DAT_0010211f[] = "Lambda test: %d\n";
char DAT_0010213b[] = "Exception test: %d\n";
char DAT_00102157[] = "Smart pointer test\n";
char DAT_00102175[] = "All tests passed\n";

/* External function declarations */
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);
extern size_t strlen(const char *s);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *type, void *dest);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src2dst);
extern void *__stack_chk_fail(void);
extern int __printf_chk(int flag, const char *format, ...);
extern void builtin_strncpy(char *dest, const char *src, size_t n);
extern int strcmp(const char *s1, const char *s2);
extern int puts(const char *s);

/* Forward declarations */
extern void test_cpp_oo_features(void);
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
 __cxa_throw(puVar1,(void*)0,(void*)0);
}



/* Function: main @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 return;
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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base *, int))(*(void ***)obj->_vptr_Base)[0])(obj, x);
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

/* WARNING: Removing unreachable block (ram,0x0010169f) */
/* WARNING: Removing unreachable block (ram,0x001016a4) */
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
 unsigned int uVar7;
 
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(plVar3,(void *)(uintptr_t)RTTIBase_typeinfo,(void *)(uintptr_t)RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,(void *)(uintptr_t)RTTIBase_typeinfo,(void *)(uintptr_t)RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(long *))(*(void **)(lVar1 + 8)))(plVar3);
 ((void (*)(long *))(*(void **)(*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 long lVar1;
 int iVar2;
 size_t sVar3;
 long in_FS_OFFSET;
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
 test_cpp_constructor();
 __printf_chk(1,DAT_0010205a);
 __printf_chk(1,DAT_00102076,0x2a);
 __printf_chk(1,DAT_00102092,0x47);
 test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001020af);
 __printf_chk(1,DAT_001020cb,0x16);
 iVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_001020e7,iVar2);
 __printf_chk(1,DAT_00102103,0x10);
 __printf_chk(1,DAT_0010211f,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_0010213b,iVar2);
 test_cpp_smart_ptr();
 __printf_chk(1,DAT_00102157);
 test_cpp_rtti();
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 001018f0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 00101900 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 00101910 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *this_ptr,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00101920 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return this_ptr->multiplier * x;
}



/* Function: getName @ 00101930 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00101940 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00101950 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00101960 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00101970 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((long)&this_ptr->dataA + (long)((void **)this_ptr->_vptr_MiddleA)[-3]) + 0x96;
}



/* Function: func @ 00101990 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_ptr->_vptr_MiddleA + (long)((void **)this_ptr->_vptr_MiddleA)[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 001019b0 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((long)&this_ptr->dataB + (long)((void **)this_ptr->_vptr_MiddleB)[-3]) + 200;
}



/* Function: func @ 001019d0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_ptr->_vptr_MiddleB + (long)((void **)this_ptr->_vptr_MiddleB)[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 001019f0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((long)&(this_ptr->super_MiddleA).dataA + (long)((void **)(this_ptr->super_MiddleA)._vptr_MiddleA)[-3]
 ) + 0xfa;
}



/* Function: func @ 00101a10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)((void **)(this_ptr->super_MiddleA)._vptr_MiddleA)[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101a30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)((long)this_ptr + 0xfa);
}



/* Function: getType @ 00101a50 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00101a60 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101a70 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101a80 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00101a90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00101aa0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_impl(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00101ab0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk_impl(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00101ac0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00101ad0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk_impl(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~Derived @ 00101ae0 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00101af0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor_impl(Base *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~Derived @ 00101b00 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor_impl(Derived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101b10 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor_impl(MultiDerived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101b20 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 operator_delete(&((MultiDerived *)this_ptr)[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101b40 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor_impl(RTTIDerivedB *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101b50 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor_impl(RTTIDerivedA *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~DiamondDerived @ 00101b60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor_impl(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b70 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 operator_delete((_func_int_varargs *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)((void **)(this_ptr->super_MiddleA)._vptr_MiddleA)[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: template_max_int @ 00101bb0 */

int template_max_int(int a,int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max_double @ 00101bc0 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00101bd0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00101be0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00101bf0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

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



/* Function: get @ 00101c10 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 if ((-1 < idx) && (idx < this_ptr->size)) {
 return this_ptr->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00101c30 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 00101c40 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00101c50 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

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



/* Function: get @ 00101c70 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 if ((-1 < idx) && (idx < this_ptr->size)) {
 return this_ptr->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00101ca0 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */

/* Stub implementations for external library functions */
void *__cxa_allocate_exception(size_t size)
{
 static char exception_buffer[256];
 return exception_buffer;
}

void *operator_new(size_t size)
{
 static char heap_buffer[4096];
 static size_t offset = 0;
 void *ptr = heap_buffer + offset;
 offset += size;
 return ptr;
}

void operator_delete(void *ptr, size_t size)
{
 /* Stub - no-op for now */
 return;
}

int puts(const char *s)
{
 return __printf_chk(1, "%s\n", s);
}

void builtin_strncpy(char *dest, const char *src, size_t n)
{
 size_t i;
 for (i = 0; i < n && src[i] != '\0'; i++) {
  dest[i] = src[i];
 }
 for (; i < n; i++) {
  dest[i] = '\0';
 }
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src2dst)
{
 /* Stub - return src for now */
 return src;
}

int __printf_chk(int flag, const char *format, ...)
{
 /* Stub - no-op for now */
 return 0;
}

void __cxa_throw(void *exc, void *type, void *dest)
{
 /* Stub - no-op for now */
 return;
}

int strcmp(const char *s1, const char *s2)
{
 while (*s1 && (*s1 == *s2)) {
  s1++;
  s2++;
 }
 return *(unsigned char *)s1 - *(unsigned char *)s2;
}

size_t strlen(const char *s)
{
 size_t len = 0;
 while (s[len] != '\0') {
  len++;
 }
 return len;
}
