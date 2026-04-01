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

/* Forward declarations for C++ classes/structs */
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
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;
typedef struct DiamondDerived DiamondDerived;



/* Global variables */
extern int LifecycleClass_instance_count;

/* Function pointer types */
typedef int (*_func_int_varargs)(void);
typedef void (*code)(void);
typedef void (*code_int_ptr)(int *);
typedef void (*code_void_ptr)(void *);
typedef int undefined4;
typedef unsigned int uint;
typedef void **pointer_____offset_0x8___;

/* Struct definitions */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};

struct Base {
    _func_int_varargs *_vptr_Base;
};

struct Derived {
    Base super_Base;
    int multiplier;
};

struct Container_int {
    int size;
    int data[10];
};

struct unique_ptr_int {
    int *_M_t;
};

struct unique_ptr_int_array {
    int *_M_t;
};

struct DiamondDerived {
    void *_vptr_DiamondDerived;
    void *_8_4_;
    void *_16_4_;
    int _20_4_;
};

struct MiddleA {
    _func_int_varargs *_vptr_MiddleA;
    void *_8_4_;
};

/* External variables for RTTI */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* External pointers for virtual functions */
extern void *PTR_virtual_func_00015c58;
extern void *PTR_virtual_func_00015c70;
extern void *PTR__RTTIDerivedA_00015dd0;
extern void *PTR__RTTIDerivedB_00015de4;
extern void *PTR_func_00015d88;
extern void *PTR_func_00015da0;
extern void *PTR_func_00015dbc;

/* External variable for DSO handle */
extern void *__dso_handle;

/* External data references */
extern char DAT_0001301a;
extern char DAT_0001303e;
extern char DAT_0001305c;
extern char DAT_00013078;
extern char DAT_00013094;
extern char DAT_000130b0;
extern char DAT_000130cd;
extern char DAT_000130e9;
extern char DAT_00013105;
extern char DAT_00013121;
extern char DAT_0001313d;
extern char DAT_0001315a;
extern char DAT_00013177;

/* Function declarations for C++ runtime */
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr, ...);
void test_cpp_oo_features(void);
void unique_ptr_int_destroy(unique_ptr_int *ptr);
void unique_ptr_int_array_destroy(unique_ptr_int_array *arr);
extern int std___ioinit;
void std_ios_base_Init_Init(int *init);
void std_ios_base_Init_destroy(int *init);
void __stack_chk_fail(void);
int __stack_chk_fail_local(void);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exc, void *typeinfo, void *dest);
int __dynamic_cast(void *src, void *src_type, void *dst_type, int src_type_size, void *dst_type_info);
void *_Unwind_Resume(void *exc);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_push(Container_int *container, int value);

/* Forward declarations for DiamondDerived functions */
int DiamondDerived_func(void);
void DiamondDerived_destroy(DiamondDerived *obj);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_Os_g
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



/* Function: test_cpp_exception @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011303 to 00011307 has its CatchHandler @ 00011308 */
 __cxa_throw(puVar1,(void *)0x0,0);
}



/* Function: main @ 000113c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000113d5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit(std_ios_base_Init_destroy,&std___ioinit,&__dso_handle);
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

int test_cpp_member_func(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 iVar3 = sVar2 + 0x125c;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_constructor @ 000115f1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0001160d */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001161f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011621 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 Base base;
 Derived derived;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 derived.multiplier = 3;
 base._vptr_Base = (_func_int_varargs *)PTR_virtual_func_00015c58;
 derived.super_Base._vptr_Base = (_func_int_varargs *)PTR_virtual_func_00015c70;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 iVar3 = iVar2 + 0x15 + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 0001168f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00011699 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000116a3 */

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
 iVar1 = (int)dVar2 + iVar1 + a + b;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00011735 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 Container_int int_container;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 int_container.size = 1;
 int_container.data[0] = 10;
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar2 = 0;
 if (0 < int_container.size) {
 iVar2 = int_container.data[0];
 }
 iVar2 = int_container.size + 3 + iVar2;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_lambda @ 00011797 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 000117a1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00011836) */
/* WARNING: Removing unreachable block (ram,0x0001183b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 *piVar2 = (int)&PTR__RTTIDerivedA_00015dd0;
 piVar3 = (int *)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00015de4;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar6 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = -(unsigned int)(iVar4 == 0) & 10;
 }
 iVar7 = uVar6 + 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 ppuVar8 = (pointer_____offset_0x8___ *)&RTTIBase_typeinfo;
 iVar4 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0,(void *)ppuVar8);
 if (iVar4 != 0) {
 iVar7 = uVar6 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar3,ppuVar8,(void *)0x0,0,(void *)0x0);
 if (iVar4 != 0) {
 iVar7 = iVar7 + 200;
 }
  if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 iVar7 = sVar5 + iVar7;
  ((code_int_ptr)(*(int *)(iVar1 + 4)))(piVar2);
  ((code_int_ptr)(*(int *)(*piVar3 + 4)))(piVar3);
 return iVar7;
}



/* Function: test_cpp_smart_ptr @ 000118c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 int in_stack_ffffffa8;
 int in_stack_ffffffb8;
 unique_ptr_int ptr1;
 unique_ptr_int ptr2;
 unique_ptr_int_array arr;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 ptr2._M_t = (int *)operator_new(4);
 ptr1._M_t = (int *)0x0;
 *ptr2._M_t = 200;
 /* try { // try from 00011918 to 0001191c has its CatchHandler @ 0001196e */
 arr._M_t = (int *)operator_new__(0x14);
 arr._M_t[0] = 1;
 arr._M_t[1] = 2;
 arr._M_t[2] = 3;
 arr._M_t[3] = 4;
 arr._M_t[4] = 5;
 unique_ptr_int_array_destroy(&arr);
 unique_ptr_int_destroy(&ptr2);
 unique_ptr_int_destroy(&ptr1);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 /* catch() { ... } // from try @ 00011918 with catch @ 0001196e */
 unique_ptr_int_destroy(&ptr2);
 unique_ptr_int_destroy(&ptr1);
  /* WARNING: Subroutine does not return */
  _Unwind_Resume((void *)uVar2);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0001199d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 DiamondDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 obj._20_4_ = 0x32;
 obj._8_4_ = (_func_int_varargs **)&PTR_func_00015d88;
 obj._16_4_ = &PTR_func_00015da0;
 obj._16_4_ = &PTR_func_00015dbc;
 iVar2 = DiamondDerived_func();
 obj._20_4_ = 100;
 iVar3 = DiamondDerived_func();
 iVar3 = iVar3 + iVar2;
 DiamondDerived_destroy(&obj);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_oo_features @ 00011a22 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 extraout_ECX;
 undefined4 extraout_ECX_00;
 undefined4 extraout_EDX;
 undefined4 extraout_EDX_00;
 undefined4 extraout_EDX_01;
 
 puts(&DAT_0001301a);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001303e,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001305c,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00013078,iVar1,extraout_EDX);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00013094,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000130b0,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_000130cd,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000130e9,iVar1,extraout_ECX);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00013105,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_00013121,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313d,iVar1,extraout_EDX_00);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001315a,iVar1,extraout_ECX_00);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013177,iVar1,extraout_EDX_01);
 return;
}



/* Function: virtual_func @ 00011b66 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(int x)

{
 return x + 1;
}



/* Function: getName @ 00011b74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(void)

{
 return "Base";
}



/* Function: ~Base @ 00011b8a */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destroy(int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00011b90 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(int x)

{
 return x * 3;
}



/* Function: getName @ 00011ba4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011bba */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011bc4 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011bce */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(void)

{
 return 0x28;
}



/* Function: func @ 00011bd8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011be2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_destroy(int __in_chrg)

{
 return;
}



/* Function: func @ 00011be8 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(void)

{
 return 0x96;
}



/* Function: func @ 00011c02 */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(void)

{
 MiddleA_func();
 return;
}



/* Function: func @ 00011c16 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(void)

{
 return 200;
}



/* Function: func @ 00011c30 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(void)

{
 MiddleB_func();
 return;
}



/* Function: func @ 00011c44 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(void)

{
 return 0xfa;
}



/* Function: func @ 00011c5e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(void)

{
 DiamondDerived_func();
 return;
}



/* Function: func @ 00011c71 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(void)

{
 DiamondDerived_func();
 return;
}



/* Function: ~MiddleA @ 00011c7c */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destroy(void)

{
 return;
}



/* Function: ~MiddleA @ 00011ca1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destroy_thunk(void)

{
 return;
}



/* Function: ~MiddleB @ 00011ccc */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destroy(void)

{
 return;
}



/* Function: ~MiddleB @ 00011cf1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destroy_thunk(void)

{
 return;
}



/* Function: getType @ 00011d1c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00011d26 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011d30 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destroy(int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011d36 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destroy(int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d3c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destroy(int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d41 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destroy_thunk(void)

{
 return;
}



/* Function: ~Derived @ 00011d46 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destroy(int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00011d4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destroy_method(int __in_chrg)

{
 return;
}



/* Function: ~Derived @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destroy_method(int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destroy_method(int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011dc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destroy_thunk2(void)

{
 return;
}



/* Function: ~VirtualBase @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_destroy_method(int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00011df8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destroy_method(int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destroy_method(int __in_chrg)

{
 return;
}



/* Function: ~MiddleA @ 00011e48 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destroy_method(void)

{
 return;
}



/* Function: ~MiddleA @ 00011e7f */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destroy_thunk2(void)

{
 return;
}



/* Function: ~MiddleB @ 00011e92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destroy_method(void)

{
 return;
}



/* Function: ~MiddleB @ 00011ec9 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destroy_thunk2(void)

{
 return;
}



/* Function: ~MiddleA @ 00011edc */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void MiddleA_destroy_vtt(int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~MiddleA @ 00011f26 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void MiddleA_destroy_vtt2(void **__vtt_parm)

{
 MiddleA_destroy_vtt(0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00011f42 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void MiddleB_destroy_vtt(int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~MiddleB @ 00011f8c */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void MiddleB_destroy_vtt2(void **__vtt_parm)

{
 MiddleB_destroy_vtt(0,__vtt_parm);
 return;
}



/* Function: template_max_int @ 00011fa8 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011fbc */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00011fd5 */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00011fee */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_init(void)

{
 return;
}



/* Function: push @ 00012002 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(int value)

{
 return;
}



/* Function: get @ 00012022 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(int idx)

{
 return 0;
}



/* Function: getSize @ 00012040 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(void)

{
 return 0;
}



/* Function: Container_double @ 00012050 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_init(void)

{
 return;
}



/* Function: push @ 00012064 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(double value)

{
 return;
}



/* Function: get @ 00012088 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(int idx)

{
 return 0.0;
}



/* Function: getSize @ 000120a8 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(void)

{
 return 0;
}



/* Function: ~unique_ptr @ 000120b8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
 __in_chrg) */

void unique_ptr_int_destroy(void)

{
 return;
}



/* Function: ~unique_ptr @ 000120e8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void unique_ptr_int_array_destroy(void)

{
 return;
}



/* Function: ~DiamondDerived @ 00012116 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destroy_vtt(int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 000121b0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destroy(void)

{
 DiamondDerived_destroy_vtt(2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 000121cb */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destroy_thunk(void)

{
 DiamondDerived_destroy();
 return;
}



/* Function: ~DiamondDerived @ 000121d6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destroy_thunk2(void)

{
 DiamondDerived_destroy();
 return;
}



/* Function: ~DiamondDerived @ 000121ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destroy_method(void)

{
 DiamondDerived_destroy();
 return;
}



/* Function: ~DiamondDerived @ 0001221e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destroy_thunk3(void)

{
 DiamondDerived_destroy();
 return;
}



/* Function: ~DiamondDerived @ 00012229 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destroy_thunk4(void)

{
 DiamondDerived_destroy();
 return;
}



/* Function: ~DiamondDerived @ 0001223c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void DiamondDerived_destroy_vtt2(void **__vtt_parm)

{
 DiamondDerived_destroy_vtt(0,__vtt_parm);
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
