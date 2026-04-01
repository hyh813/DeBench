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

/* Additional type definitions for decompiled code */
typedef uint32_t undefined4;
typedef uint32_t undefined;
typedef void (*code)(void);
typedef int (*virtual_func_ptr)(void *self, int x);

/* Forward declarations for template types */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Standard library declarations */
#define NULL 0

/* strlen implementation */
size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

/* strncpy implementation */
char *strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

extern int __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *obj, void *tinfo, void *dest);
extern void __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle);

/* operator_delete implementation */
void operator_delete(void *ptr, size_t size) {
    /* Stub for delete operator */
}
extern int __aeabi_dcmpgt(double a_hi, double a_lo, double b_lo);
extern int __aeabi_d2iz(double a_hi, double a_lo);
extern double SUB84(double x, int y);
extern void __stack_chk_fail(void);
extern void *malloc(size_t size);
extern void free(void *ptr);

/* operator_new implementation */
void *operator_new(size_t size) {
    return malloc(size);
}

/* ARM EABI double to integer conversion stub */
int __aeabi_d2iz(double a_hi, double a_lo) {
    return (int)a_hi;
}

/* ARM EABI double comparison stub (greater than) */
int __aeabi_dcmpgt(double a_hi, double a_lo, double b_lo) {
    return a_hi > b_lo ? 1 : 0;
}

/* C++ dynamic_cast stub */
void *__dynamic_cast(void *src, void *src_type, void *dst_type, ...) {
    return src;  /* Simplified: just return the source pointer */
}
extern void operator_delete(void *ptr, size_t size);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, ...);

/* Placement new operator - simplified for C compilation */
inline void* placement_new(size_t size, void* ptr) {
    return ptr;
}

/* std namespace declarations */
namespace std {
    struct __ioinit_struct {};
    __ioinit_struct __ioinit;
    
    namespace ios_base {
        struct Init {
            static void init(void *ptr);
            static void destroy(void *ptr);
        };
    }
}

/* Implementation of std::ios_base::Init static methods */
inline void std::ios_base::Init::init(void *ptr) {
    /* Initialization stub */
}

inline void std::ios_base::Init::destroy(void *ptr) {
    /* Destruction stub */
}

/* Forward declaration for type_info */
struct type_info {
    const char *_vptr_type_info;
};

/* type_info methods (declared as standalone functions for C compilation) */
const char* type_info_name(const struct type_info *self);
bool type_info_equals(const struct type_info *self, const struct type_info *rhs);

/* type_info implementations */
const char* type_info_name(const struct type_info *self) {
    return self ? self->_vptr_type_info : "";
}

bool type_info_equals(const struct type_info *self, const struct type_info *rhs) {
    return self && rhs && self->_vptr_type_info == rhs->_vptr_type_info;
}

/* Type definitions */
typedef void (*_func_int_varargs)(int, ...);

/* Forward declarations for classes */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

struct Base {
    void **_vptr_Base;
};

struct Derived {
    void **_vptr_Derived;
    int multiplier;
};

struct BaseA {
    void **_vptr_BaseA;
};

struct BaseB {
    void **_vptr_BaseB;
};

struct MultiDerived {
    void **_vptr_MultiDerived;
    BaseA super_BaseA;
    BaseB super_BaseB;
};

struct VirtualBase {
    void **_vptr_VirtualBase;
};

struct MiddleA : VirtualBase {
    void **_vptr_MiddleA;
    int dataA;
};

struct MiddleB : VirtualBase {
    void **_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
};

struct Point {
    int x, y;
};

struct RTTIBase {
    void **_vptr_RTTIBase;
    static type_info typeinfo;
};

struct RTTIDerivedA : RTTIBase {
    static type_info typeinfo;
};

struct RTTIDerivedB : RTTIBase {
    static type_info typeinfo;
};

/* Static type_info definitions */
type_info RTTIBase::typeinfo = {NULL};
type_info RTTIDerivedA::typeinfo = {NULL};
type_info RTTIDerivedB::typeinfo = {NULL};

/* Template Container structures */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* Global variables */
void *PTR__RTTIDerivedA_000116b4;
void *PTR__RTTIDerivedB_000116c8;
extern void *__dso_handle;
char DAT_000114d8[] = "test_cpp_member_func: %d\n";
char DAT_000114fc[] = "test_cpp_member_func: %d\n";
char DAT_0001151c[] = "test_cpp_constructor: %d\n";
char DAT_00011538[] = "test_cpp_virtual_func: %d\n";
char DAT_00011554[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_00011570[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_00011590[] = "test_cpp_operator_overload: %d\n";
char DAT_000115ac[] = "test_cpp_template_func: %d\n";
char DAT_000115c8[] = "test_cpp_template_class: %d\n";
char DAT_000115e4[] = "test_cpp_lambda: %d\n";
char DAT_00011600[] = "test_cpp_exception: %d\n";
char DAT_00011620[] = "test_cpp_smart_ptr: %d\n";
char DAT_00011640[] = "test_cpp_rtti: %d\n";

/* Template function declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

/* Non-template versions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

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
 ((code (*)(undefined *))0x0)(NULL);
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
 __cxa_throw(puVar1,(type_info *)0,0);
}



/* Forward declaration */
void test_cpp_oo_features(void);

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
 std::ios_base::Init::init(&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,(void (*)(void *))std::ios_base::Init::destroy,&__dso_handle);
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
 int r1;
 int r2;
 int r3;
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
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((virtual_func_ptr)(obj->_vptr_Base[0]))(obj, x);
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
 iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
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
 type_info *ti;
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
 ti = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
 iVar3 = type_info_equals(ti,(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = type_info_equals
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 iVar3 = (int)__dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar3 != 0) {
 iVar6 = iVar6 + 100;
 }
 iVar3 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 void *vtable_ptr = (void *)*piVar1;
 __s = *(char **)(*(int *)vtable_ptr + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (*(void (*)(void *))(void *)*(int *)(iVar4 + 4))(piVar1);
 (*(void (*)(void *))(void *)*(int *)(*piVar2 + 4))(piVar2);
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
 
 puts((const char*)&DAT_000114d8);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 __printf_chk(1,(const char*)&DAT_000114fc,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 __printf_chk(1,(const char*)&DAT_0001151c,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(const char*)&DAT_00011538,0x2a);
 __printf_chk(1,(const char*)&DAT_00011554,0x47);
 __printf_chk(1,(const char*)&DAT_00011570,0x28a);
 __printf_chk(1,(const char*)&DAT_00011590,0x16);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 iVar2 = template_max_int(3,7);
 iVar3 = template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar3 = __aeabi_d2iz(extraout_r0,extraout_r1);
 __printf_chk(1,(const char*)&DAT_000115ac,iVar3 + iVar2 + a + b);
 __printf_chk(1,(const char*)&DAT_000115c8,0x10);
 __printf_chk(1,(const char*)&DAT_000115e4,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,(const char*)&DAT_00011600,iVar2);
 __printf_chk(1,(const char*)&DAT_00011620,0x2bf);
 iVar2 = test_cpp_rtti();
 __printf_chk(1,(const char*)&DAT_00011640,iVar2);
 return;
}



/* Function: virtual_func @ 000110d0 */

/* DWARF original prototype: int virtual_func(Base * _this, int x) */

int Base_virtual_func(Base *_this,int x)

{
 return x + 1;
}



/* Function: getName @ 000110d8 */

/* DWARF original prototype: char * getName(Base * _this) */

char * Base_getName(Base *_this)

{
 return (char*)"Base";
}



/* Function: ~Base @ 000110e4 */

/* DWARF original prototype: void * ~Base(Base * _this, int __in_chrg) */

void * Base_dtor(Base *_this,int __in_chrg)

{
 return _this;
}



/* Function: virtual_func @ 000110e8 */

/* DWARF original prototype: int virtual_func(Derived * _this, int x) */

int Derived_virtual_func(Derived *_this,int x)

{
 return x * _this->multiplier;
}



/* Function: getName @ 000110f4 */

/* DWARF original prototype: char * getName(Derived * _this) */

char * Derived_getName(Derived *_this)

{
 return "Derived";
}



/* Function: funcA @ 00011100 */

/* DWARF original prototype: int funcA(MultiDerived * _this) */

int MultiDerived_funcA(MultiDerived *_this)

{
 return 0x1e;
}



/* Function: funcB @ 00011108 */

/* DWARF original prototype: int funcB(MultiDerived * _this) */

int MultiDerived_funcB(MultiDerived *_this)

{
 return 0x28;
}



/* Function: funcB @ 00011110 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *_this)

{
 return 0x28;
}



/* Function: func @ 00011118 */

/* DWARF original prototype: int func(MiddleA * _this) */

int MiddleA_func(MiddleA *_this)

{
 return *(int *)((int)&_this->dataA + (int)_this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011130 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *_this)

{
 return *(int *)((int)&_this->dataA +
 (int)(_this->_vptr_MiddleA[-3] +
 *(int *)(*(int *)((int)&_this->_vptr_MiddleA + (int)_this->_vptr_MiddleA[-3]) +
 -0xc))) + 0x96;
}



/* Function: func @ 00011154 */

/* DWARF original prototype: int func(MiddleB * _this) */

int MiddleB_func(MiddleB *_this)

{
 return *(int *)((int)&_this->dataB + (int)_this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 0001116c */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *_this)

{
 return *(int *)((int)&_this->dataB +
 (int)(_this->_vptr_MiddleB[-3] +
 *(int *)(*(int *)((int)&_this->_vptr_MiddleB + (int)_this->_vptr_MiddleB[-3]) +
 -0xc))) + 200;
}



/* Function: func @ 00011190 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * _this) */

int DiamondDerived_func(DiamondDerived *_this)

{
 return *(int *)((int)&(_this->super_MiddleA).dataA + (int)(_this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 000111a8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk1(DiamondDerived *_this)

{
 void *p_Var1;
 
 p_Var1 = (_this->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((int)&(_this->super_MiddleA).dataA +
 (int)(p_Var1 + *(int *)(*(int *)((int)&(_this->super_MiddleA)._vptr_MiddleA +
 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 000111cc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *_this)

{
 return *(int *)((int)_this + *(int *)(*(int *)((char*)_this - 4 + 0x10) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000111e4 */

/* DWARF original prototype: int getType(RTTIDerivedA * _this) */

int RTTIDerivedA_getType(RTTIDerivedA *_this)

{
 return 1;
}



/* Function: getType @ 000111ec */

/* DWARF original prototype: int getType(RTTIDerivedB * _this) */

int RTTIDerivedB_getType(RTTIDerivedB *_this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 000111f4 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * _this, int __in_chrg) */

void * RTTritederivedB_dtor(RTTIDerivedB *_this,int __in_chrg)

{
 return _this;
}



/* Function: ~RTTIDerivedA @ 000111f8 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * _this, int __in_chrg) */

void * RTTritederivedA_dtor(RTTIDerivedA *_this,int __in_chrg)

{
 return _this;
}



/* Function: ~DiamondDerived @ 000111fc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * _this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_dtor(DiamondDerived *_this,int __in_chrg,void **__vtt_parm)

{
 return _this;
}



/* Function: ~DiamondDerived @ 00011200 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void ** DiamondDerived_dtor_thunk1(DiamondDerived *_this)

{
 return (void **)
 ((char *)&_this->super_MiddleA + (intptr_t)_this->super_MiddleA._vptr_MiddleA[-4]);
}



/* Function: ~DiamondDerived @ 00011210 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

unsigned char * DiamondDerived_dtor_thunk2(DiamondDerived *_this)

{
 return (unsigned char *)_this - 1;
}



/* Function: ~MultiDerived @ 00011218 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * _this, int __in_chrg) */

void * MultiDerived_dtor(MultiDerived *_this,int __in_chrg)

{
 return _this;
}



/* Function: ~MultiDerived @ 0001121c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_dtor_thunk2(MultiDerived *_this)

{
 return (BaseB*)((char*)_this - 4);
}



/* Function: ~Derived @ 00011224 */

/* DWARF original prototype: void * ~Derived(Derived * _this, int __in_chrg) */

void * Derived_dtor2(Derived *_this,int __in_chrg)

{
 return _this;
}



/* Function: ~Base @ 00011228 */

/* DWARF original prototype: void * ~Base(Base * _this, int __in_chrg) */

void * Base_dtor2(Base *_this,int __in_chrg)

{
 operator_delete(_this,4);
 return _this;
}



/* Function: ~Derived @ 00011240 */

/* DWARF original prototype: void * ~Derived(Derived * _this, int __in_chrg) */

void * Derived_dtor3(Derived *_this,int __in_chrg)

{
 operator_delete(_this,8);
 return _this;
}



/* Function: ~MultiDerived @ 00011258 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * _this, int __in_chrg) */

void * MultiDerived_dtor2(MultiDerived *_this,int __in_chrg)

{
 operator_delete(_this,0x10);
 return _this;
}



/* Function: ~MultiDerived @ 00011270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_dtor_thunk3(MultiDerived *_this)

{
 void *ptr = (void*)((char*)_this - 4);
 operator_delete(ptr, 0x10);
 return (BaseB*)ptr;
}



/* Function: ~RTTIDerivedB @ 0001128c */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * _this, int __in_chrg) */

void * RTTritederivedB_dtor2(RTTIDerivedB *_this,int __in_chrg)

{
 operator_delete(_this,4);
 return _this;
}



/* Function: ~RTTIDerivedA @ 000112a4 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * _this, int __in_chrg) */

void * RTTritederivedA_dtor2(RTTIDerivedA *_this,int __in_chrg)

{
 operator_delete(_this,4);
 return _this;
}



/* Function: ~DiamondDerived @ 000112bc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * _this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_dtor2(DiamondDerived *_this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(_this,0x18);
 return _this;
}



/* Function: ~DiamondDerived @ 000112d4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_dtor3(DiamondDerived *_this)

{
 void *p_Var1;
 
 p_Var1 = (void *)((char *)&_this->super_MiddleA + (intptr_t)_this->super_MiddleA._vptr_MiddleA[-4]);
 operator_delete((void*)((char*)_this + (intptr_t)_this->super_MiddleA._vptr_MiddleA[-4]),0x18);
 return p_Var1;
}



/* Function: ~DiamondDerived @ 000112f8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_dtor4(DiamondDerived *_this)

{
 void *ptr = (void*)((char*)_this - 4);
 operator_delete(ptr, 0x18);
 return ptr;
}



/* Function: template_max<int> @ 00011314 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011320 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011334 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (a > b) return a;
 return b;
}



/* Function: template_swap<int> @ 00011350 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011364 */

/* DWARF original prototype: Container<int> * Container(Container<int> * _this) */

Container_int * Container_int_Constructor(Container_int *_this)

{
 _this->size = 0;
 return _this;
}



/* Function: push @ 00011370 */

/* DWARF original prototype: void push(Container<int> * _this, int value) */

void Container_int_push(Container_int *_this,int value)

{
 int iVar1;
 
 iVar1 = _this->size;
 if (iVar1 < 10) {
 _this->size = iVar1 + 1;
 _this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011388 */

/* DWARF original prototype: int get(Container<int> * _this, int idx) */

int Container_int_get(Container_int *_this,int idx)

{
 if ((-1 < idx) && (idx < _this->size)) {
 return _this->data[idx];
 }
 return 0;
}



/* Function: getSize @ 000113ac */

/* DWARF original prototype: int getSize(Container<int> * _this) */

int Container_int_getSize(Container_int *_this)

{
 return _this->size;
}



/* Function: Container @ 000113b4 */

/* DWARF original prototype: Container<double> * Container(Container<double> * _this) */

Container_double * Container_double_Constructor(Container_double *_this)

{
 _this->size = 0;
 return _this;
}



/* Function: push @ 000113c0 */

/* DWARF original prototype: void push(Container<double> * _this, double value) */

void Container_double_push(Container_double *_this,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = _this->size;
 if (iVar1 < 10) {
 _this->size = iVar1 + 1;
 *(undefined4 *)(_this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(_this->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 000113f0 */

/* DWARF original prototype: double get(Container<double> * _this, int idx) */

double Container_double_get(Container_double *_this,int idx)

{
 if ((-1 < idx) && (idx < _this->size)) {
 return _this->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 0001141c */

/* DWARF original prototype: int getSize(Container<double> * _this) */

int Container_double_getSize(Container_double *_this)

{
 return _this->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
