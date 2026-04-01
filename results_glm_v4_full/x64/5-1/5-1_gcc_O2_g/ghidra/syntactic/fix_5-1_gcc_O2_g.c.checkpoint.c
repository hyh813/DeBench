/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

/* Standard types are already defined by included system headers */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Forward declarations for C++ classes used in decompiled code */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;

/* Dummy typeinfo structure - must be defined before use */
typedef struct type_info {
    const char *_name;
} type_info;

/* Define incomplete structs that are used in the code */
struct Base {
    void **_vptr_Base;
};

struct Derived {
    void **_vptr_Derived;
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

struct RTTIBase {
    void **_vptr;
    type_info *typeinfo;
};

struct RTTIDerivedA {
    void **_vptr;
    type_info *typeinfo;
};

struct RTTIDerivedB {
    void **_vptr;
    type_info *typeinfo;
};

struct MultiDerived {
    struct Base super_BaseA;
    void **_vptr_BaseB;
    struct Base super_BaseB;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    void **_vptr;
    int field;
};

static int LifecycleClass_instance_count = 0;

struct DiamondDerived {
    struct MiddleA super_MiddleA;
    struct MiddleB super_MiddleB;
    int field_0x20;
};

/* Container template classes - deconstructed to separate types */
typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* Function pointer type for code */
typedef void (*code)();

/* String data declarations */
char DAT_00102018[] = "";
char DAT_0010203c[] = "";
char DAT_00102058[] = "";
char DAT_00102076[] = "";
char DAT_00102092[] = "";
char DAT_001020a8[] = "";
char DAT_001020cb[] = "";
char DAT_001020e7[] = "";
char DAT_00102103[] = "";
char DAT_0010211f[] = "";
char DAT_0010213b[] = "";
char DAT_00102175[] = "";

/* Function pointer type for varargs functions */
typedef int (*_func_int_varargs)();

/* RTTI typeinfo references */
type_info int_typeinfo = {"int"};

/* RTTI typeinfo instances */
type_info RTTIBase_typeinfo = {"12RTTIBase"};
type_info RTTIDerivedA_typeinfo = {"12RTTIDerivedA"};
type_info RTTIDerivedB_typeinfo = {"12RTTIDerivedB"};

/* Forward declarations for RTTI functions */
int RTTIDerivedA_getType(RTTIDerivedA *self);
int RTTIDerivedB_getType(RTTIDerivedB *self);
void RTTIDerivedA_destructor(RTTIDerivedA *self, int __in_chrg);
void RTTIDerivedA_destructor2(RTTIDerivedA *self, int __in_chrg);
void RTTIDerivedB_destructor(RTTIDerivedB *self, int __in_chrg);
void RTTIDerivedB_destructor2(RTTIDerivedB *self, int __in_chrg);

/* Vtable pointer declarations */
static void *PTR__RTTIDerivedA_00103c70[4] = {
    (void *)&RTTIDerivedA_typeinfo,
    (void *)RTTIDerivedA_getType,
    (void *)RTTIDerivedA_destructor,
    (void *)RTTIDerivedA_destructor2
};
static void *PTR__RTTIDerivedB_00103c98[4] = {
    (void *)&RTTIDerivedB_typeinfo,
    (void *)RTTIDerivedB_getType,
    (void *)RTTIDerivedB_destructor,
    (void *)RTTIDerivedB_destructor2
};
#define PTR__RTTIDerivedA PTR__RTTIDerivedA_00103c70
#define PTR__RTTIDerivedB PTR__RTTIDerivedB_00103c98

/* Function declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Function declarations for test functions */
void test_cpp_oo_features(void);

/* C++ runtime support functions */
void operator_delete(void *ptr, size_t size) { (void)ptr; (void)size; }
void __stack_chk_fail(void) { while(1); }
void *__cxa_allocate_exception(size_t size) { return 0; }
void __cxa_throw(void *exception, void *type, void *dest) { while(1); }
void *__dso_handle;
void __cxa_atexit(void (*func)(void *), void *obj, void *dso) { (void)func; (void)obj; (void)dso; }
void *operator_new(size_t size) { return malloc(size); }
void *__dynamic_cast(void *src, void *from, void *to, int offset) { (void)from; (void)offset; return (to != NULL) ? src : NULL; }


/* Container functions */
void Container_int_Constructor(Container_int *self);
void Container_int_push(Container_int *self, int value);
int Container_int_get(Container_int *self, int idx);
int Container_int_getSize(Container_int *self);

void Container_double_Constructor(Container_double *self);
void Container_double_push(Container_double *self, double value);
double Container_double_get(Container_double *self, int idx);
int Container_double_getSize(Container_double *self);


/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(void (**)(void))0)();
 return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
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
 strncpy(obj.name,"Test",5);
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
 iVar1 = ((int (*)(Base *))(*obj->_vptr_Base))(obj);
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
 void **plVar3;
 void **plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 
 uVar7 = 10;
 plVar3 = (void **)operator_new(8);
 *plVar3 = &PTR__RTTIDerivedA[2];
 plVar4 = (void **)operator_new(8);
 lVar1 = (long)(uintptr_t)*plVar3;
 *plVar4 = &PTR__RTTIDerivedB[2];
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (*(void (**)(void *))(lVar1 + 8))(plVar3);
 (*(void (**)(void *))(*plVar4 + 8))(plVar4);
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
 strncpy(obj.name,"Test",5);
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
 __printf_chk(1,DAT_00102058);
 __printf_chk(1,DAT_00102076);
 __printf_chk(1,DAT_00102092);
 test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001020a8);
 __printf_chk(1,DAT_001020cb,0x16);
 iVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_001020e7,iVar2);
 __printf_chk(1,DAT_00102103,0x10);
 __printf_chk(1,DAT_0010211f,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_0010213b,iVar2);
 test_cpp_smart_ptr();
 __printf_chk(1,"");
 test_cpp_rtti();
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 001018f0 */

/* DWARF original prototype: int virtual_func(Base * self, int x) */

int Base_virtual_func(Base *self,int x)

{
 return x + 1;
}



/* Function: getName @ 00101900 */

/* DWARF original prototype: char * getName(Base * self) */

char * Base_getName(Base *self)

{
 return "Base";
}



/* Function: ~Base @ 00101910 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *self,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00101920 */

/* DWARF original prototype: int virtual_func(Derived * self, int x) */

int Derived_virtual_func(Derived *self,int x)

{
 return self->multiplier * x;
}



/* Function: getName @ 00101930 */

/* DWARF original prototype: char * getName(Derived * self) */

char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00101940 */

/* DWARF original prototype: int funcA(MultiDerived * self) */

int MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: funcB @ 00101950 */

/* DWARF original prototype: int funcB(MultiDerived * self) */

int MultiDerived_funcB(MultiDerived *self)

{
 return 0x28;
}



/* Function: funcB @ 00101960 */
/* non-virtual thunk to MultiDerived::funcB() */

unsigned long MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00101970 */

/* DWARF original prototype: int func(MiddleA * self) */

int MiddleA_func(MiddleA *self)

{
 return *(int *)((long)&self->dataA + (long)self->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00101990 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&self->_vptr_MiddleA + (long)self->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 001019b0 */

/* DWARF original prototype: int func(MiddleB * self) */

int MiddleB_func(MiddleB *self)

{
 return *(int *)((long)&self->dataB + (long)self->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 001019d0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&self->_vptr_MiddleB + (long)self->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 001019f0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * self) */

int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)((long)&(self->super_MiddleA).dataA + (long)(self->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00101a10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk1(DiamondDerived *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((long)&(self->super_MiddleA)._vptr_MiddleA +
 (long)(self->super_MiddleA)._vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101a30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *self)

{
 return *(int *)((long)self + *(long *)(*(long *)&self[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101a50 */

/* DWARF original prototype: int getType(RTTIDerivedA * self) */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: getType @ 00101a60 */

/* DWARF original prototype: int getType(RTTIDerivedB * self) */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101a70 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *self,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101a80 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *self,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00101a90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor2(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
  return;
}



/* Function: ~DiamondDerived @ 00101aa0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk1(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00101ab0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2a(DiamondDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00101ac0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *self,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00101ad0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *self)

{
 return;
}



/* Function: ~Derived @ 00101ae0 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor3(Derived *self,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00101af0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor2(Base *self,int __in_chrg)

{
 operator_delete((void *)self,8);
 return;
}



/* Function: ~Derived @ 00101b00 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *self,int __in_chrg)

{
 operator_delete((void *)self,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101b10 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor2(MultiDerived *self,int __in_chrg)

{
 operator_delete((void *)self,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101b20 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(MultiDerived *self)

{
 operator_delete((void *)&self[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101b40 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor2(RTTIDerivedB *self,int __in_chrg)

{
 operator_delete((void *)self,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101b50 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor2(RTTIDerivedA *self,int __in_chrg)

{
 operator_delete((void *)self,8);
 return;
}



/* Function: ~DiamondDerived @ 00101b60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor3(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
  operator_delete((self),0x30);
  return;
}



/* Function: ~DiamondDerived @ 00101b70 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(DiamondDerived *self)

{
 operator_delete((DiamondDerived *)
 ((long)&(self->super_MiddleA)._vptr_MiddleA +
 (long)(self->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk3(DiamondDerived *self)

{
 operator_delete(&self[-1].field_0x20,0x30);
 return;
}



/* Function: template_max<int> @ 00101bb0 */

int template_max_int(int a,int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00101bc0 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00101bd0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00101be0 */

/* DWARF original prototype: void Container(Container<int> * self) */

void Container_int_Constructor(Container_int *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00101bf0 */

/* DWARF original prototype: void push(Container<int> * self, int value) */

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



/* Function: get @ 00101c10 */

/* DWARF original prototype: int get(Container<int> * self, int idx) */

int Container_int_get(Container_int *self,int idx)

{
 if ((-1 < idx) && (idx < self->size)) {
 return self->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00101c30 */

/* DWARF original prototype: int getSize(Container<int> * self) */

int Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container @ 00101c40 */

/* DWARF original prototype: void Container(Container<double> * self) */

void Container_double_Constructor(Container_double *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00101c50 */

/* DWARF original prototype: void push(Container<double> * self, double value) */

void Container_double_push(Container_double *self,double value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101c70 */

/* DWARF original prototype: double get(Container<double> * self, int idx) */

double Container_double_get(Container_double *self,int idx)

{
 if ((-1 < idx) && (idx < self->size)) {
 return self->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00101ca0 */

/* DWARF original prototype: int getSize(Container<double> * self) */

int Container_double_getSize(Container_double *self)

{
 return self->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
