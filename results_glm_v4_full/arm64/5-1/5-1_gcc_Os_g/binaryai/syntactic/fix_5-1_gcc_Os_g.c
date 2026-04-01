/* Auto-injected type definitions by preprocessor */
#define NULL ((void *)0)
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

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct Init Init;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;

/* Global variable declarations */
extern long __stack_chk_guard;
extern long ___stack_chk_guard;
extern char completed_0;
extern void *__ioinit;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern int (*PTR_virtual_func_00113868)(Base *, int);
extern int (*PTR_virtual_func_00113898)(Derived *, int);
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern void *PTR__RTTIBase;
extern char **PTR_func_00113ac8;
extern char **PTR_func_00113b30;
extern char **PTR_func_00113af8;
extern char **PTR_func_001138e0;
extern char **PTR_func_00113918;
extern char **PTR_func_00113958;
extern char **PTR_func_00113990;
extern char DAT_001025b2;
extern char DAT_001025d6;
extern char DAT_001025f4;
extern char DAT_00102610;
extern char DAT_0010262c;
extern char DAT_00102648;
extern char DAT_00102665;
extern char DAT_00102681;
extern char DAT_0010269d;
extern char DAT_001026b9;
extern char DAT_001026d5;
extern char DAT_001026f2;
extern char DAT_0010270f;
extern char DAT_001025a0;

/* Function prototypes */
int call_weak_fn(void);
int test_cpp_oo_features(void);
void ios_base_Init__Init(Init *this);
void ios_base_Init__Init_fn(Init *this);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void std__unique_ptr_int___std__default_delete_int_______unique_ptr(void *);
void std__unique_ptr_int_std__default_delete_int_______unique_ptr(void *);
void Container_int__push(Container_int_ *this, int param_1);
int __printf_chk(int flag, const char *format, ...);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void *stack_end);
int Base_virtual_func(Base *this, int param_1);
char * Base_getName(void);
void Base__Base(Base *this);
void MiddleA__MiddleA_5(MiddleA *this, int in_w1, char ***in_x2);
MiddleA * MiddleA__MiddleA_5_return(MiddleA *this, int in_w1, char ***in_x2);
void MiddleB__MiddleB_5(MiddleB *this, int in_w1, char ***in_x2);
MiddleB * MiddleB__MiddleB_5_return(MiddleB *this, int in_w1, char ***in_x2);
void DiamondDerived__DiamondDerived(DiamondDerived *this, int in_w1, char ***in_x2);
int Derived_virtual_func(Derived *this, int param_1);
char * Derived_getName(void);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(MultiDerived *this);
unsigned long long VirtualBase_func(void);
void VirtualBase__VirtualBase(VirtualBase *this);
int MiddleA_func(MiddleA *this);
void MiddleA_func_void(MiddleA *this);
void MiddleA__MiddleA(MiddleA *this);
void MiddleA__MiddleA_2(MiddleA *this);
void MiddleA__MiddleA_3(MiddleA *this);
void MiddleA__MiddleA_4(MiddleA *this);
int MiddleB_func(MiddleB *this);
void MiddleB_func_void(MiddleB *this);
void MiddleB__MiddleB(MiddleB *this);
void MiddleB__MiddleB_2(MiddleB *this);
void MiddleB__MiddleB_3(MiddleB *this);
void MiddleB__MiddleB_4(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived_func_void(DiamondDerived *this);
void DiamondDerived_func_void2(DiamondDerived *this);

void DiamondDerived__DiamondDerived_2(DiamondDerived *this);
void DiamondDerived__DiamondDerived_3(DiamondDerived *this);
void DiamondDerived__DiamondDerived_4(DiamondDerived *this);
void DiamondDerived__DiamondDerived_5(DiamondDerived *this);
void DiamondDerived__DiamondDerived_6(DiamondDerived *this);
void DiamondDerived__DiamondDerived_7(DiamondDerived *this);
void DiamondDerived__DiamondDerived_8(DiamondDerived *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void MultiDerived__MultiDerived(MultiDerived *this);
void MultiDerived__MultiDerived_2(MultiDerived *this);
void MultiDerived__MultiDerived_3(MultiDerived *this);
void Derived__Derived(Derived *this);
void Derived__Derived_2(Derived *this);
void VirtualBase__VirtualBase_2(VirtualBase *this);
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this);
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this);
void std_ios_base_Init_Init(Init *this);
void Container_int_Container(Container_int_ *this);
void std_unique_ptr_int_std__default_delete_int____unique_ptr(unique_ptr_int_std__default_delete_int__ *this);
void std_unique_ptr_int___std__default_delete_int_____unique_ptr(unique_ptr_int___std__default_delete_int____ *this);
void Container_int_push(Container_int_ *this, int param_1);
unsigned int Container_int_get(Container_int_ *this, int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Container(Container_double_ *this);
void Container_double_push(Container_double_ *this, double param_1);
unsigned long long Container_double_get(Container_double_ *this, int param_1);
unsigned int Container_double_getSize(Container_double_ *this);


/* std namespace function stubs (C-compatible) */
struct ios_base_Init {
    void (*_Init)(void *);
};
struct std_ios_base_Init {
    void (*Init_fn)(void *);
    void (*_Init)(void *);
};

// Decompiled by BinaryAI
// SHA256: 7e572efce9a9d351dd239448e317e9135c09e459c23cd8ad6c44e7afba2f2b9b

/* Struct definitions */
struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int member;
};

struct MultiDerived {
    void *base1[8];
    void *base2[8];
};

struct Init {
    void *vtable;
};

struct MiddleA {
    void **vtable;
    void **vtable2;
    char padding[16];
};

struct MiddleB {
    void **vtable;
    void **vtable2;
    char padding[16];
};

struct DiamondDerived {
    void **vtable;
    void **vtable2;
    void **vtable3;
    char padding[24];
};

struct VirtualBase {
    void **vtable;
    char padding[8];
};

struct Container_int_ {
    int data[10];
    unsigned int size;
    char padding[4];
};

struct Container_double_ {
    double data[10];
    unsigned int size;
    char padding[4];
};

struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
};

struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
};

struct RTTIBase {
    void *type_info;
};

struct RTTIDerivedA {
    void *type_info;
};

struct RTTIDerivedB {
    void *type_info;
};

struct LifecycleClass {
    int dummy;
};

// Function: _init @ 0x101638
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_00101650 @ 0x101650
void FUN_00101650(void)
{
 void (*dummy_func)(void) = (void (*)(void))0;
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101670
void * operator_new__(unsigned long param_1)
{
 return NULL;
}

// Function: <EXTERNAL>::puts @ 0x101680
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x101690
size_t strlen(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1016a0
void __stack_chk_fail(void)
{
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1016b0
void __cxa_begin_catch(void)
{
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1016c0
void *__cxa_allocate_exception(void)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1016d0
void __cxa_finalize(void *dso_handle)
{
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1016e0
void __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void *stack_end)
{
}

// Function: <EXTERNAL>::operator.new @ 0x1016f0
void * operator_new(unsigned long param_1)
{
 return NULL;
}

// Function: <EXTERNAL>::operator.delete @ 0x101700
void operator_delete(void *param_1, size_t size)
{
 (void)size; // unused parameter
}

// Function: <EXTERNAL>::strncpy @ 0x101710
char * strncpy(char *__dest,char *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101720
void *__dynamic_cast(void *ptr, const void *src_type, const void *dst_type, int src2dst_offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101730
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101740
void operator_delete__(void *param_1)
{
}

// Function: <EXTERNAL>::strcmp @ 0x101750
int strcmp(char *__s1,char *__s2)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101760
void __cxa_rethrow(void)
{
}



// Function: <EXTERNAL>::abort @ 0x101780
void abort(void)
{
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101790
void __cxa_end_catch(void)
{
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1017a0
void __gxx_personality_v0(void)
{
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1017b0
void __cxa_throw(void)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1017c0
void _Unwind_Resume(void)
{
}

// Function: <EXTERNAL>::__printf_chk @ 0x1017d0
int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1017e0
void __gmon_start__(void)
{
}

// Function: test_cpp_exception @ 0x101800
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception();
 *puVar1 = 0x2a;
 __cxa_throw();
}

// Function: main @ 0x1018d0
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1018e8
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 ios_base_Init__Init((Init *)&__ioinit);
 __cxa_atexit((void (*)(void *))ios_base_Init__Init_fn,&__ioinit,&__dso_handle);
}

// Function: _start @ 0x101940
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 unsigned long long stack0x00000008;
 __libc_start_main((int (*)(void))main,(int)param_9,(char **)&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101974
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x101990
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1019c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001019fc @ 0x1019fc
void FUN_001019fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
}

// Function: test_cpp_member_func @ 0x101a54
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101ac0
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101ad8
int call_virtual_func(Base *param_1,int param_2)
{
 typedef int (*vfunc_t)(Base *, int);
 return (*((vfunc_t **)(param_1))[0][0])(param_1, param_2);
}

// Function: test_cpp_virtual_func @ 0x101ae8
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 char **local_20;
 char **local_18;
 unsigned int local_10;
 long local_8;
	local_8 = ___stack_chk_guard;
	local_20 = (char **)&PTR_virtual_func_00113868;
	local_18 = (char **)&PTR_virtual_func_00113898;
	local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x101b78
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x101b80
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101b88
void test_cpp_template_func(void)
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_template_class @ 0x101c30
int test_cpp_template_class(void)
{
 int iVar1;
 int local_38 [10];
 int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_10 = 1;
 local_38[0] = 10;
 Container_int__push((Container_int_ *)local_38,0x14);
 Container_int__push((Container_int_ *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_10 + iVar1 + 3;
}

// Function: test_cpp_lambda @ 0x101cc0
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x101cc8
int test_cpp_rtti(void)
{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if (__s1 == "12RTTIDerivedA") {
 iVar7 = 10;
 }
 else if (cVar1 == '*') {
 iVar7 = 0;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 iVar2 = iVar7 + 0x14;
 lVar5 = (long)__dynamic_cast(plVar3,&PTR__RTTIBase,&PTR__RTTIDerivedA_00113b58,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&PTR__RTTIBase,&PTR__RTTIDerivedB_00113b80,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 if ((*(void **)(lVar8 + 8)) != NULL) {
 ((void (*)(void *))(*(void **)(lVar8 + 8)))(plVar3);
 }
 if ((*(void **)(*plVar4 + 8)) != NULL) {
 ((void (*)(void *))(*(void **)(*plVar4 + 8)))(plVar4);
 }
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_smart_ptr @ 0x101e24
unsigned long long test_cpp_smart_ptr(void)
{
 unsigned long long local_20;
 unsigned int *puStack_18;
 unsigned long long *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
	puStack_18 = (unsigned int *)operator_new(4);
	*puStack_18 = 200;
	local_10 = (unsigned long long *)operator_new__(0x14);
	*local_10 = 0x200000001;
	local_10[1] = 0x400000003;
	*(unsigned int *)(local_10 + 2) = 5;
	local_20 = 0;
	std__unique_ptr_int___std__default_delete_int_______unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_10);
	std__unique_ptr_int_std__default_delete_int_______unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&puStack_18);
	;
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x101ef8
int test_cpp_diamond_inheritance(void)
{
	int iVar1;
	int iVar2;
	char **local_38;
	char **local_28;
	char **local_18;
	unsigned int local_10;
	long local_8;
	local_8 = ___stack_chk_guard;
	local_38 = PTR_func_00113ac8;
	local_18 = PTR_func_00113b30;
	local_28 = PTR_func_00113af8;
	local_10 = 0x32;
	iVar1 = 50;
 local_10 = 100;
	iVar2 = 60;
 DiamondDerived__DiamondDerived_2((DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x101fa0
int test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_001025b2);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,uVar1);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,uVar1);
 return 0;
}

// Function: Base::virtual_func @ 0x1020d8
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1020e0
char * Base_getName(void)
{
 return &DAT_001025a0;
}

// Function: Base::~Base @ 0x1020ec
void Base__Base(Base *this)
{
}

// Function: Derived::virtual_func @ 0x1020f0
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)((char *)this + 8);
}

// Function: Derived::getName @ 0x1020fc
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x102108
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102110
unsigned long long MultiDerived_funcB_static(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102118
unsigned long long MultiDerived_funcB_2(MultiDerived *this)
{
	return 0x28;
}

// Function: VirtualBase::func @ 0x102120
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102128
void VirtualBase__VirtualBase(VirtualBase *this)
{
}

// Function: MiddleA::func @ 0x10212c
int MiddleA_func(MiddleA *this)
{
	return 150;
}

// Function: MiddleA::func @ 0x102144
void MiddleA_func_void(MiddleA *this)
{
	(void)this;
	return;
}

// Function: MiddleB::func @ 0x102154
int MiddleB_func(MiddleB *this)
{
	(void)this;
	return 250;
}

// Function: MiddleB::func @ 0x10216c
void MiddleB_func_void(MiddleB *this)
{
	(void)this;
	return;
}

// Function: DiamondDerived::func @ 0x10217c
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102194
void DiamondDerived_func_void(DiamondDerived *this)
{
 DiamondDerived_func((DiamondDerived *)((char *)this + *(long *)(*(long *)this + -0x18)));
}

// Function: DiamondDerived::func @ 0x1021a4
void DiamondDerived_func_void2(DiamondDerived *this)
{
 DiamondDerived_func((DiamondDerived *)((char *)this - 0x10));
}

// Function: MiddleA::~MiddleA @ 0x1021ac
void MiddleA__MiddleA(MiddleA *this)
{
	*(char ***)this = PTR_func_001138e0;
	*(char ***)(this + 0x10) = PTR_func_00113918;
}

// Function: MiddleA::~MiddleA @ 0x1021c8
void MiddleA__MiddleA_2(MiddleA *this)
{
	long lVar1;
	lVar1 = *(long *)(*(long *)this + -0x20);
	*(char ***)(this + lVar1) = PTR_func_001138e0;
	*(char ***)(this + lVar1 + 0x10) = PTR_func_00113918;
}

// Function: MiddleB::~MiddleB @ 0x1021f0
void MiddleB__MiddleB(MiddleB *this)
{
	*(char ***)this = PTR_func_00113958;
	*(char ***)(this + 0x10) = PTR_func_00113990;
}

// Function: MiddleB::~MiddleB @ 0x10220c
void MiddleB__MiddleB_2(MiddleB *this)
{
	long lVar1;
	lVar1 = *(long *)(*(long *)this + -0x20);
	*(char ***)(this + lVar1) = PTR_func_00113958;
	*(char ***)(this + lVar1 + 0x10) = PTR_func_00113990;
}

// Function: RTTIDerivedA::getType @ 0x102234
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x10223c
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102244
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102248
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
}

// Function: MultiDerived::~MultiDerived @ 0x10224c
void MultiDerived__MultiDerived(MultiDerived *this)
{
}

// Function: MultiDerived::~MultiDerived @ 0x102250
void MultiDerived__MultiDerived_2(MultiDerived *this)
{
}

// Function: Derived::~Derived @ 0x102254
void __thiscall Derived__Derived(Derived *this)
{
}

// Function: Base::~Base @ 0x102258
void __thiscall Base__Base_2(Base *this)
{
 operator_delete(this, (size_t)8);
 return;
}

// Function: Derived::~Derived @ 0x102260
void __thiscall Derived__Derived_2(Derived *this)
{
 operator_delete(this, (size_t)0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102268
void __thiscall MultiDerived__MultiDerived_3(MultiDerived *this)
{
 operator_delete(this, (size_t)0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102270
void __thiscall MultiDerived__MultiDerived_4(MultiDerived *this)
{
 MultiDerived__MultiDerived(this + -0x10);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102278
void __thiscall VirtualBase__VirtualBase_2(VirtualBase *this)
{
 operator_delete(this, (size_t)0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102280
void __thiscall RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this)
{
 operator_delete(this, (size_t)8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102288
void __thiscall RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this)
{
 operator_delete(this, (size_t)8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102290
void __thiscall MiddleA__MiddleA_3(MiddleA *this)
{
 *(char ***)this = PTR_func_001138e0;
 *(char ***)(this + 0x10) = PTR_func_00113918;
 operator_delete(this, (size_t)0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022b0
void __thiscall MiddleA__MiddleA_4(MiddleA *this)
{
 MiddleA__MiddleA_2(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022f0

void __thiscall MiddleA__MiddleA_5(MiddleA *this, int in_w1, char ***in_x2)
{
	char **ppuVar1;
	char *puVar2;
	char **ppuVar3;
	if (in_w1 == 0) {
		ppuVar3 = *(char ***)in_x2;
	}
	else {
		ppuVar3 = PTR_func_001138e0;
	}
	*(char ***)this = ppuVar3;
	if (in_w1 == 0) {
		ppuVar1 = *(char ***)&in_x2[1];
		puVar2 = ppuVar3[-3];
	}
	else {
		puVar2 = (char *)0x10;
		ppuVar1 = PTR_func_00113918;
	}
 *(char ***)(this + (long)puVar2) = ppuVar1;
}

void MiddleA__MiddleA_5_return(MiddleA *this, int in_w1, char ***in_x2)
{
 MiddleA__MiddleA_5(this, in_w1, in_x2);
}

// Function: MiddleA::~MiddleA @ 0x10232c
void __thiscall MiddleA__MiddleA_6(MiddleA *this)
{
 MiddleA__MiddleA_5(this, 1, (char ***)0);
	return;
}

// Function: MiddleB::~MiddleB @ 0x102338
void __thiscall MiddleB__MiddleB_5(MiddleB *this, int in_w1, char ***in_x2)
{
 char **ppuVar1;
 char *puVar2;
 char **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = *(char ***)in_x2;
 }
 else {
 ppuVar3 = PTR_func_00113958;
 }
 *(char ***)this = ppuVar3;
	if (in_w1 == 0) {
		ppuVar1 = *(char ***)&in_x2[1];
		puVar2 = ppuVar3[-3];
	}
	else {
		puVar2 = (char *)0x10;
		ppuVar1 = PTR_func_00113990;
	}
	*(char ***)(this + (long)puVar2) = ppuVar1;
}

void MiddleB__MiddleB_5_return(MiddleB *this, int in_w1, char ***in_x2)
{
	MiddleB__MiddleB_5(this, in_w1, in_x2);
}

// Function: MiddleB::~MiddleB @ 0x102374
void __thiscall MiddleB__MiddleB_6(MiddleB *this)
{
	MiddleB__MiddleB_5(this, 1, (char ***)0);
	return;
}

// Function: template_max<int> @ 0x102380
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10238c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102398
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1023ac
void __thiscall Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1023b4
void __thiscall Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1023d0
unsigned int __thiscall Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1023f0
unsigned int __thiscall Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1023f8
void __thiscall Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102400
void __thiscall Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x10241c
unsigned long long __thiscall Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10243c
unsigned int __thiscall Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102444
void __thiscall
std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete(*(void **)this,4);
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102458
void __thiscall
std_unique_ptr_int___std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102468
void __thiscall DiamondDerived__DiamondDerived(DiamondDerived *this, int in_w1, char ***in_x2)
{
	char **ppuVar1;
	char *puVar2;
	if (in_w1 == 0) {
		ppuVar1 = *(char ***)in_x2;
	}
	else {
		ppuVar1 = PTR_func_00113ac8;
	}
	*(char **)this = ppuVar1;
	if (in_w1 == 0) {
		puVar2 = ppuVar1[-3];
		ppuVar1 = *(char ***)&in_x2[5];
	}
	else {
		puVar2 = (char *)0x20;
		ppuVar1 = PTR_func_00113b30;
	}
	*(char **)(this + (long)puVar2) = ppuVar1;
	if (in_w1 == 0) {
		ppuVar1 = *(char ***)&in_x2[6];
	}
	else {
		ppuVar1 = PTR_func_00113af8;
	}
	*(char **)(this + 0x10) = ppuVar1;
	MiddleB__MiddleB_5((MiddleB *)(this + 0x10), 1, 0);
	MiddleA__MiddleA_5((MiddleA *)this, 1, 0);
}

// Function: DiamondDerived::~DiamondDerived @ 0x102518
void __thiscall DiamondDerived__DiamondDerived_2(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this, 0, 0);
}

// Function: DiamondDerived::~DiamondDerived @ 0x102524
void __thiscall DiamondDerived__DiamondDerived_3(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + -0x10, 0, 0);
}

// Function: DiamondDerived::~DiamondDerived @ 0x10252c
void __thiscall DiamondDerived__DiamondDerived_4(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + *(long *)(*(long *)this + -0x20), 0, 0);
}

// Function: DiamondDerived::~DiamondDerived @ 0x10253c
void __thiscall DiamondDerived__DiamondDerived_5(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this, 0, 0);
 operator_delete(this, (size_t)0x30);
}

// Function: DiamondDerived::~DiamondDerived @ 0x102564
void __thiscall DiamondDerived__DiamondDerived_6(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + -0x10, 0, 0);
}

// Function: DiamondDerived::~DiamondDerived @ 0x10256c
void __thiscall DiamondDerived__DiamondDerived_7(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this + *(long *)(*(long *)this + -0x20), 0, 0);
}

// Function: DiamondDerived::~DiamondDerived @ 0x10257c
void __thiscall DiamondDerived__DiamondDerived_8(DiamondDerived *this)
{
 DiamondDerived__DiamondDerived(this, 0, 0);
}

// Function: _fini @ 0x102588
void _fini(void)
{
}

