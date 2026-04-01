#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

/* Forward declarations */
struct type_info;
struct LifecycleClass;
struct Init;
struct RTTIBase;

/* Function forward declarations */
void call_weak_fn(void);
int operator__(type_info *self, type_info *param);
int type_info_operator__(type_info *self, type_info *param);
void *__builtin_dyncast(void *src_ptr, struct type_info *src_type, struct type_info *dest_type, int offset);
void test_cpp_oo_features(void);

/* Implement __builtin_dyncast */
void *__builtin_dyncast(void *src_ptr, struct type_info *src_type, struct type_info *dest_type, int offset)
{
    /* Simple stub - actual implementation would do RTTI-based dynamic casting */
    (void)src_type;
    (void)dest_type;
    (void)offset;
    return src_ptr;
}

/* Stub for __cxa_throw */
void __cxa_throw(void *obj, struct type_info *tinfo, void (*dest)(void*))
{
    (void)obj;
    (void)tinfo;
    (void)dest;
    /* This would normally throw a C++ exception */
}

/* Stub for __cxa_allocate_exception - allocates memory for exceptions */
void *__cxa_allocate_exception(size_t size)
{
    return malloc(size);
}

/* Stub for __aeabi_atexit - registers cleanup functions (ARM-specific) */
void __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle)
{
    (void)obj;
    (void)dtor;
    (void)dso_handle;
    /* This would normally register a cleanup function with atexit */
}

void __gmon_start__(void);
int main(int, char **, char **);
void __builtin_delete(void *);
void *__builtin_new(size_t);
void *__cxa_allocate_exception(size_t size);
void __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle);

/* Type definitions */
struct type_info {
    void **vptr;
    char *name;
};

/* Forward declarations for template functions */
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

struct Base {
    void **vptr;
};

struct Init {
    int dummy;
};

/* Global variables */
static Init __ioinit;
static char completed_0 = 0;
static void *__dso_handle;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;

/* Data constants from original binary */
char DAT_00011438[] = "Base";
char DAT_00011450[] = "";
char DAT_00011474[] = "";
char DAT_00011494[] = "";
char DAT_000114b0[] = "";
char DAT_000114cc[] = "";
char DAT_000114e8[] = "";
char DAT_00011508[] = "";
char DAT_00011524[] = "";
char DAT_00011540[] = "";
char DAT_0001155c[] = "";
char DAT_00011578[] = "";
char DAT_00011598[] = "";
char DAT_000115b8[] = "";

/* Dummy vtable for type_info */
static void *type_info_vtable[] = { (void *)&type_info_operator__ };

/* Define the type_info objects */
type_info RTTIBase_typeinfo = { type_info_vtable, "Base" };
type_info RTTIDerivedA_typeinfo = { type_info_vtable, "DerivedA" };
type_info RTTIDerivedB_typeinfo = { type_info_vtable, "DerivedB" };

/* Define the RTTI pointer objects */
static void *PTR__RTTIDerivedA_0001162c = &RTTIDerivedA_typeinfo;
static void *PTR__RTTIDerivedB_00011640 = &RTTIDerivedB_typeinfo;

struct Derived {
    void **vptr;
    int multiplier;
};

struct MultiDerived {
    void **vptrA;
    void **vptrB;
};

struct MiddleA {
    void **vptr;
};

struct MiddleB {
    void **vptr;
};

struct DiamondDerived {
    void **vptr;
};

struct RTTIDerivedA {
    void **vptr;
    type_info *typeinfo_ptr;
};

struct RTTIDerivedB {
    void **vptr;
    type_info *typeinfo_ptr;
};

struct LifecycleClass {
    int dummy;
    static int instance_count;
};

/* Static member definition */
int LifecycleClass::instance_count = 0;

struct RTTIBase {
    void **vptr;
};

typedef struct Container_int_ {
    unsigned int size;
    int data[10];
} Container_int_;

typedef struct Container_double_ {
    unsigned int size;
    double data[10];
} Container_double_;

// Decompiled by BinaryAI
// SHA256: d6d691cee1d75fe7dc5d11c56ff757a9a383d6d2a2760d38bd09c970c69ee27f

// Function: _init @ 0x10920
int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x10940
void * operator_new(size_t param_1)
{
 void *pvVar1;
 pvVar1 = __builtin_new(param_1);
 return pvVar1;
}

// Built-in allocation functions
void *__builtin_new(size_t size)
{
    return malloc(size);
}

void __builtin_delete(void *ptr)
{
    free(ptr);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void *__cxa_allocate_exception(size_t size);

// Function: <EXTERNAL>::puts @ 0x10970
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1097c
void operator_delete(void *obj, size_t size)
{
 extern void __builtin_delete(void *);
 __builtin_delete(obj);
 return;
}

int operator__(type_info *self, type_info *param)
{
    if (self == param) return 1;
    if (self == NULL || param == NULL) return 0;
    return (self->name == param->name) ? 1 : 0;
}

int type_info_operator__(type_info *self, type_info *param)
{
    if (self == param) return 1;
    if (self == NULL || param == NULL) return 0;
    return (self->name == param->name) ? 1 : 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
void __libc_start_main(int (*main_func)(int, char **, char **), int argc, char **argv, 
                       int (*init_func)(int, char **, char **), void (*fini_func)(void), void *stack_end)
{
 __libc_start_main(main_func, argc, argv, init_func, fini_func, stack_end);
}

// Function: <EXTERNAL>::abort @ 0x10994
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
void type_info_operator_eq(type_info *self,type_info *param_1)
{
 operator__(self,param_1);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void *__dynamic_cast(void *src_ptr, type_info *src_type, type_info *dest_type, int offset)
{
 return __builtin_dyncast(src_ptr, src_type, dest_type, offset);
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x109dc
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: std_ios_base_Init_Init @ 0x109e8
void std_ios_base_Init_Init(Init *self)
{
 (void)self;
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
int __aeabi_d2iz(double param_1)
{
 return (int)param_1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
void __cxa_throw(void *obj, struct type_info *tinfo, void (*dest)(void*));

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

// Function: test_cpp_exception @ 0x10a60
int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
 return 0;
}

// Function: main @ 0x10b18
int main(int argc, char **argv, char **envp)
{
 (void)envp;
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&__ioinit);
 __aeabi_atexit(&__ioinit,(void (*)(void *))std_ios_base_Init_Init,&__dso_handle);
 return;
}











// Function: test_cpp_member_func @ 0x10c50
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x10cbc
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *param_1,int param_2)
{
 typedef void (*vfunc_t)(Base *, int);
 ((vfunc_t)(**(void ***)param_1))(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce8
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10cf0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10cf8
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10d04
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10d0c
void test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int extraout_r1;
 int iVar3;
 unsigned long long uVar4;
 unsigned int in_stack_ffffffe0;
 int in_stack_ffffffe4;
 int iVar5;
 int in_stack_ffffffe8;
 int iVar6;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 (3.0,
 7.0);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&iVar5,&iVar6);
 uVar4 = __aeabi_d2iz(uVar2);
 if (iVar3 == 0) {
 return;
 }
 (void)((int)uVar4 + iVar1 + iVar5 + iVar6);
 (void)((uint64_t)uVar4 >> 0x20);
 (void)iVar3;
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x10db4
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10dbc
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x10dc4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10dd0
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
 iVar3 = type_info_operator__(ti,&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = type_info_operator__
 (*(type_info **)(*piVar2 + -4),&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
	iVar3 = iVar3 + 100;
	__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))(*(void **)(iVar6 + 4)))(piVar1);
 ((void (*)(void *))(*(void **)(*piVar2 + 4)))(piVar2);
 return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ec8
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 puts(DAT_00011450);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 __printf_chk(1,(const char*)&DAT_00011474,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,(const char*)&DAT_00011494,uVar2);
 __printf_chk(1,(const char*)&DAT_000114b0,0x2a);
 __printf_chk(1,(const char*)&DAT_000114cc,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,(const char*)&DAT_000114e8,uVar2);
 __printf_chk(1,(const char*)&DAT_00011508,0x16);
 test_cpp_template_func();
 uVar2 = 0;
 __printf_chk(1,(const char*)&DAT_00011524,uVar2);
 __printf_chk(1,(const char*)&DAT_00011540,0x10);
 __printf_chk(1,(const char*)&DAT_0001155c,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,(const char*)&DAT_00011578,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,(const char*)&DAT_00011598,uVar2);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,(const char*)&DAT_000115b8,uVar2);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x11048
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11050
unsigned char * Base_getName(Base *self)
{
 return (unsigned char *)&DAT_00011438;
}

// Function: Base::~Base @ 0x1105c
void Base_destructor_1(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x11060
int Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)(self + 4);
}

// Function: Derived::getName @ 0x1106c
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11078
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11080
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11088
unsigned int MultiDerived_funcB_with_this(MultiDerived *self)
{
    return 0x28;
}

// Function: MiddleA::func @ 0x11090
int MiddleA_func_1(MiddleA *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x110a8
int MiddleA_func_2(MiddleA *self)
{
 return *(int *)(self + *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x110cc
int MiddleB_func_1(MiddleB *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x110e4
int MiddleB_func_2(MiddleB *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + *(int *)(*(int *)obj + -0xc)) + -0xc) +
 *(int *)(*(int *)obj + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11108
int DiamondDerived_func_1(DiamondDerived *self)
{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11120
int DiamondDerived_func_2(DiamondDerived *self)
{
 return *(int *)(self + *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11144
int DiamondDerived_func_3(DiamondDerived *self)
{
 return *(int *)(self + *(int *)(*(int *)(self + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1115c
unsigned int RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11164
unsigned int RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1116c
void RTTIDerivedB_destructor_1(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11170
void RTTIDerivedA_destructor_1(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11174
void DiamondDerived_destructor_1(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11178
DiamondDerived * DiamondDerived_destructor_2(DiamondDerived *self)
{
 return self + *(int *)(*(int *)self + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11188
DiamondDerived * DiamondDerived_destructor_3(DiamondDerived *self)
{
 return self + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11190
void MultiDerived_destructor_1(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11194
MultiDerived * MultiDerived_destructor_2(MultiDerived *self)
{
 return self + -8;
}

// Function: Derived::~Derived @ 0x1119c
void Derived_destructor_1(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x111a0
Base * Base_deleting_destructor(Base *self)
{
 operator_delete(self,4);
 return self;
}

// Function: Derived::~Derived @ 0x111b8
Derived * Derived_deleting_destructor(Derived *self)
{
 operator_delete(self,8);
 return self;
}

// Function: MultiDerived::~MultiDerived @ 0x111d0
MultiDerived * MultiDerived_deleting_destructor(MultiDerived *self)
{
 operator_delete(self,0x10);
 return self;
}

// Function: MultiDerived::~MultiDerived @ 0x111e8
MultiDerived * MultiDerived_deleting_destructor_2(MultiDerived *self)
{
 operator_delete(self + -8,0x10);
 return self + -8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11204
RTTIDerivedB * RTTIDerivedB_deleting_destructor(RTTIDerivedB *self)
{
 operator_delete(self,4);
 return self;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1121c
RTTIDerivedA * RTTIDerivedA_deleting_destructor(RTTIDerivedA *self)
{
 operator_delete(self,4);
 return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11234
DiamondDerived * DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator_delete(self,0x18);
 return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1124c
DiamondDerived * DiamondDerived_deleting_destructor_2(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 operator_delete(self + iVar1,0x18);
 return self + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11270
DiamondDerived * DiamondDerived_deleting_destructor_3(DiamondDerived *self)
{
 operator_delete(self + -8,0x18);
 return self + -8;
}

// Function: template_max<int> @ 0x1128c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11298
double template_max_double_(double param_1,double param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x112c8
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x112dc
void Container_int__constructor(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x112e8
void Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11300
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 return *(unsigned int *)(self + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11324
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x1132c
void Container_double__constructor(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11338
void Container_double__push(Container_double_ *self,double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)(self + iVar1 * 8);
 *(int *)(self + 0x50) = iVar1 + 1;
 *puVar2 = (unsigned int)(*(uint64_t *)&param_1 & 0xffffffff);
 puVar2[1] = (unsigned int)((*(uint64_t *)&param_1 >> 32) & 0xffffffff);
 }
 return;
}

// Function: Container<double>::get @ 0x11368
unsigned long long Container_double__get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return *(unsigned long long *)(self + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11394
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)(self + 0x50);
}

// Function: _fini @ 0x1139c
void _fini(void)
{
 return;
}

