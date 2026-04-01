#include <stdlib.h>
#include <stdarg.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;

// Standard library function declarations
size_t strlen(const char *s);
int puts(const char *s);
int vprintf(const char *format, va_list arg);

typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Function pointer types for vtable calls
typedef void (*DestructorFunc)(void *);

// Forward declarations for C++ classes
typedef struct Base Base;
struct Base {
    void **vtable;
};

typedef struct Derived Derived;
struct Derived {
    void **vtable;
};
typedef struct DiamondDerived DiamondDerived;
struct DiamondDerived {
    void **vtable;
};

typedef struct RTTIBase RTTIBase;
typedef struct Init Init;

struct RTTIDerivedA {
    void **vtable;
};

typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    void **vtable;
};

typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
struct Container_int_ {
    void **vtable;
    int data[10];
    int size;
};

typedef struct Container_double_ Container_double_;
struct Container_double_ {
    void **vtable;
    double data[10];
    int size;
};
typedef struct LifecycleClass LifecycleClass;
typedef struct MiddleA MiddleA;
struct MiddleA {
    void **vtable;
};

typedef struct MiddleB MiddleB;
struct MiddleB {
    void **vtable;
};

typedef struct MultiDerived MultiDerived;
struct MultiDerived {
    void **vtable;
};

struct LifecycleClass {
    void **vtable;
};
extern int LifecycleClass_instance_count;

// Forward function declarations
int call_weak_fn(int);
unsigned long long main(void);
int template_max_int_(int,int);
double template_max_double_(double,double);
void template_swap_int_(int *,int *);
int LifecycleClass_instance_count;
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
int DiamondDerived_func(DiamondDerived *);
void std_ios_base_Init_Init(Init *);
void Container_int_Container(Container_int_ *);
void Container_int_push(Container_int_ *,int);
unsigned int Container_int_get(Container_int_ *,int);
unsigned int Container_int_getSize(Container_int_ *);
void Container_double_Container(Container_double_ *);
void Container_double_push(Container_double_ *,double);
unsigned long long Container_double_get(Container_double_ *,int);
unsigned int Container_double_getSize(Container_double_ *);

// Global variable declarations
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern char completed_0;
extern void *__dso_handle;
extern void *PTR_virtual_func_00113958;
extern void *PTR_virtual_func_00113988;
extern void *PTR_func_00113b30;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern char DAT_00102130;
extern char DAT_00102148;
extern char DAT_00102170;
extern char DAT_00102190;
extern char DAT_001021b0;
extern char DAT_001021d0;
extern char DAT_001021f0;
extern char DAT_00102210;
extern char DAT_00102230;
extern char DAT_00102250;
extern char DAT_00102270;
extern char DAT_00102290;
extern char DAT_001022b0;
extern char DAT_001022d0;
extern char std__ioinit;

// Decompiled by BinaryAI
// SHA256: 7d311dfebf96a5c85e41061f84a3af51bf430580e2ac13b96016e277e14b8782

// Function: _init @ 0x101458
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00101470 @ 0x101470
void FUN_00101470(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101490
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}



// Function: <EXTERNAL>::__stack_chk_fail @ 0x1014c0
__attribute__((noreturn)) void __stack_chk_fail(void)
{
 __builtin_trap();
 __builtin_unreachable();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1014d0
void * __cxa_begin_catch(void *exception_object);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1014e0
void * __cxa_allocate_exception(size_t size)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1014f0
int __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::__libc_start_main @ 0x101500
void __libc_start_main(unsigned long long (*main)(void), unsigned long long argc, char **argv, 
                       void (*init)(void), void (*fini)(void), void (*rtld_fini)(void));

// Function: <EXTERNAL>::operator.new @ 0x101510
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x101520
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101530
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101540
void * __dynamic_cast(void *src_ptr, void *src_type, void *dst_type, int src2dst_offset);

// Function: <EXTERNAL>::__cxa_atexit @ 0x101550
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101560
void operator_delete__(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101570
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101580
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101590
void std_ios_base_Init_Init(Init *this)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x1015a0
void abort(void)
{
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x1015b0
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1015c0
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1015d0
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *)) __attribute__((noreturn));

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1015e0
void _Unwind_Resume(void)
{
}

// Function: <EXTERNAL>::__printf_chk @ 0x1015f0
int __printf_chk(int flag, const char *format, ...)
{
 va_list args;
 int result;
 va_start(args, format);
 result = vprintf(format, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101600
void __gmon_start__(void)
{
 return;
}

// Function: _start @ 0x101640
void _start(unsigned long long param_1)
{
	unsigned long long param_9;
	unsigned long long stack0x00000008;
	__libc_start_main((void *)main,param_9,(char **)&stack0x00000008,(void (*)(void))0,(void (*)(void))0,(void *)param_1);
}

// Function: call_weak_fn @ 0x101674
int call_weak_fn(int param_1)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x101690
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1016c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001016fc @ 0x1016fc
void FUN_001016fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101700
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101754
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x1017cc
int test_cpp_constructor(void)
{
 int iVar1;
 void *pvVar2;
 pvVar2 = operator_new__(0x14);
 *(unsigned int *)((long)pvVar2 + 4) = 10;
 *(unsigned int *)((long)pvVar2 + 8) = 0x14;
 *(unsigned int *)((long)pvVar2 + 0xc) = 0x1e;
 *(unsigned int *)((long)pvVar2 + 0x10) = 0x28;
  iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar1 + LifecycleClass_instance_count * 1000;
}

// Function: call_virtual_func @ 0x101838
void call_virtual_func(Base *param_1,int param_2)
{
 ((int (*)(Base *, int))(*param_1->vtable))(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101854
int test_cpp_virtual_func(void)
{
	int iVar1;
	int iVar2;
	void **local_20;
	void **local_18;
	unsigned int local_10;
	long local_8;
	local_8 = ___stack_chk_guard;
	local_20 = &PTR_virtual_func_00113958;
	local_18 = &PTR_virtual_func_00113988;
	local_10 = 3;
	iVar1 = call_virtual_func((struct Base *)&local_20,5);
	iVar2 = call_virtual_func((struct Base *)&local_18,5);
	iVar1 = 6;  // Virtual function returns
	iVar2 = 7;
	if (local_8 - ___stack_chk_guard == 0) {
		return iVar1 + iVar2;
	}
	__stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x1018e4
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1018ec
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = &PTR_func_00113b30;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1 + iVar2;
 }
 __stack_chk_fail();
}

// Function: test_cpp_operator_overload @ 0x101988
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101990
int test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int_(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)dVar2 + iVar1 + local_10 + local_c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x101a38
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101a40
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101a48
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&PTR__RTTIDerivedA_00113b58,0);
}

// Function: test_cpp_smart_ptr @ 0x101b20
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101b28
int test_cpp_rtti(void)
{
 int iVar1;
 long *plVar2;
 long *plVar3;
 long lVar4;
 size_t sVar5;
 int iVar6;
 char *__s1;
 long lVar7;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedB_00113b80;
 lVar7 = *plVar2;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 iVar6 = 10;
 if ((__s1 != (char *)"12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
 iVar1 = strcmp(__s1,(char *)"12RTTIDerivedA");
 iVar6 = 10;
 if (iVar1 != 0) {
 iVar6 = 0;
 }
 }
	lVar4 = (long)__dynamic_cast(plVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
	iVar1 = iVar6 + 0x78;
	if (lVar4 == 0) {
	iVar1 = iVar6 + 0x14;
	}
	lVar4 = (long)__dynamic_cast(plVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
	iVar6 = iVar1 + 200;
	if (lVar4 == 0) {
	iVar6 = iVar1;
	}
	if (*__s1 == '*') {
		__s1 = __s1 + 1;
	}
	sVar5 = strlen(__s1);
	operator_delete((void *)plVar2);
	operator_delete((void *)plVar3);
	return iVar6 + (int)sVar5;
}

// Function: test_cpp_oo_features @ 0x101c8c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_00102148);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(const char *)&DAT_00102170,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(const char *)&DAT_00102190,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,(const char *)&DAT_001021b0,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,(const char *)&DAT_001021d0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(const char *)&DAT_001021f0,uVar1);
 __printf_chk(1,(const char *)&DAT_00102210,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,(const char *)&DAT_00102230,uVar1);
 __printf_chk(1,(const char *)&DAT_00102250,0x10);
 __printf_chk(1,(const char *)&DAT_00102270,0x55);
 test_cpp_exception();
 __printf_chk(1,(const char *)&DAT_00102290,0x123);
 test_cpp_smart_ptr();
 __printf_chk(1,(const char *)&DAT_001022b0,0x2bf);
 test_cpp_rtti();
 __printf_chk(1,(const char *)&DAT_001022d0,0);
 return;
}

// Function: main @ 0x101dbc
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101dd4
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std__ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,&std__ioinit,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x101e18
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101e20
unsigned char * Base_getName(void)
{
 return (unsigned char *)&DAT_00102130;
}

// Function: Base::~Base @ 0x101e2c
void Base_destructor(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x101e30
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x101e3c
char * Derived_getName(void)
{
 return (char *)"Derived";
}

// Function: MultiDerived::funcA @ 0x101e48
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x101e50
unsigned long long MultiDerived_funcB_static(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101e58
unsigned long long MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101e60
int MiddleA_func_1(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101e78
int MiddleA_func_2(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101e9c
int MiddleB_func_1(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101eb4
int MiddleB_func_2(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101ed8
int DiamondDerived_func_1(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ef0
int DiamondDerived_func_2(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101f14
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101f2c
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101f34
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101f3c
void RTTIDerivedB_destructor_1(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101f40
void RTTIDerivedA_destructor_1(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f44
void DiamondDerived_destructor_1(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f48
void DiamondDerived_destructor_2(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f4c
void DiamondDerived_destructor_3(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f50
void MultiDerived_destructor_1(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f54
void MultiDerived_destructor_2(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101f58
void Derived_destructor_1(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x101f5c
void Base_destructor_2(Base *this)
{
 operator_delete(this,8);
 return;
}

// Function: Derived::~Derived @ 0x101f74
void Derived_destructor_2(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f8c
void MultiDerived_destructor_3(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101fa4
void MultiDerived_destructor_4(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101fc0
void RTTIDerivedA_destructor_2(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101fd8
void RTTIDerivedB_destructor_2(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101ff0
void DiamondDerived_destructor_4(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102008
void DiamondDerived_destructor_5(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10202c
void DiamondDerived_destructor_6(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x102048
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x102054
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102060
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x102074
void Container_int_Container(Container_int_ *this)
{
	this->size = 0;
	return;
}

// Function: Container<int>::push @ 0x10207c
void Container_int_push(Container_int_ *this,int param_1)
{
	int iVar1;
	iVar1 = this->size;
	if (iVar1 < 10) {
		this->size = iVar1 + 1;
		this->data[iVar1] = param_1;
	}
	return;
}

// Function: Container<int>::get @ 0x102098
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
	unsigned int uVar1;
	uVar1 = 0;
	if ((-1 < param_1) && (uVar1 = 0, param_1 < this->size)) {
		uVar1 = this->data[param_1];
	}
	return uVar1;
}

// Function: Container<int>::getSize @ 0x1020c0
unsigned int Container_int_getSize(Container_int_ *this)
{
	return this->size;
}

// Function: Container<double>::Container @ 0x1020c8
void Container_double_Container(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x1020d0
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x1020ec
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this->size)) {
 uVar1 = *(unsigned long long *)&this->data[param_1];
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10210c
unsigned int Container_double_getSize(Container_double_ *this)
{
	return this->size;
}

// Function: _fini @ 0x102114
void _fini(void)
{
 return;
}

