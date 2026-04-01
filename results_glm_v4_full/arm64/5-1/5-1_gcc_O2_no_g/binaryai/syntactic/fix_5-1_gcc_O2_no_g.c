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
struct type_info;

struct Base {
    void **vtable;
};
typedef struct Base Base;

/* std::ios_base::Init type */
struct Init {
    int dummy;
};

/* Forward declarations for external functions */
void std_ios_base_Init__Init_(struct Init *this);

/* Implementation of std::ios_base::Init::Init */
void std_ios_base_Init__Init_(struct Init *this) {
    if (this) {
        this->dummy = 0;
    }
}
extern void __cxa_finalize(void *);
extern void __stack_chk_fail(void);
extern int vprintf(const char *__format, __builtin_va_list __arg);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
extern void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, ptrdiff_t src2dst);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int strcmp(const char *s1, const char *s2);
extern void abort(void);
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_begin_catch(void);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __gxx_personality_v0(void);
extern void _Unwind_Resume(void);
extern int __printf_chk(int flag, const char *format, ...);
extern void __gmon_start__(void);
extern void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern void *malloc(size_t size);
extern void free(void *ptr);

void *operator_new(size_t size)
{
	/* Simple allocation stub for decompiled code */
	void *ptr = 0;
	if (size != 0) {
		ptr = malloc(size);
	}
	return ptr;
}

/* Standard operator delete for single parameter */
void operator_delete_single(void *ptr)
{
	if (ptr != 0) {
		free(ptr);
	}
}

/* Standard operator delete */
void operator_delete(void *ptr)
{
	if (ptr != 0) {
		free(ptr);
	}
}

/* RTTI type info structure */
struct type_info {
    const char *name;
};

/* RTTI class declarations */
struct RTTIBase {
};

struct RTTIDerivedA {
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* Static typeinfo members */
struct type_info RTTIBase_typeinfo = {"4Base"};
struct type_info RTTIDerivedA_typeinfo = {"12RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {"12RTTIDerivedB"};

/* Typeinfo pointers for RTTI */
struct type_info PTR__RTTIDerivedA_00112c28 = {"12RTTIDerivedA"};
struct type_info PTR__RTTIDerivedB_00112c50 = {"12RTTIDerivedB"};

/* Derived class definitions */
struct Derived {
    void **vtable;
    int value;
};
typedef struct Derived Derived;

struct MultiDerived {
    void **vtable1;
    void **vtable2;
    int data1;
    int data2;
};
typedef struct MultiDerived MultiDerived;

struct MiddleA {
    void **vtable;
    int padding[4];
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    void **vtable;
    int padding[4];
};
typedef struct MiddleB MiddleB;

struct DiamondDerived {
    void **vtable;
    int padding[8];
    int data;
};
typedef struct DiamondDerived DiamondDerived;

/* Forward declarations for template container types */
struct Container_int_;
struct Container_double_;

/* Template container definitions */
struct Container_int_ {
    int data[10];
    unsigned int size;
    unsigned int capacity;
};
typedef struct Container_int_ Container_int_;

struct Container_double_ {
    double data[10];
    unsigned int size;
    unsigned int capacity;
};
typedef struct Container_double_ Container_double_;

/* Fundamental type typeinfo for int */
struct type_info int_typeinfo = {"i"};

/* Data constants */
extern char DAT_00101af8[];
extern char DAT_00101b10[];
extern char DAT_00101b38[];
extern char DAT_00101b58[];
extern char DAT_00101b78[];
extern char DAT_00101b98[];
extern char DAT_00101bb8[];
extern char DAT_00101bd8[];
extern char DAT_00101bf8[];
extern char DAT_00101c18[];
extern char DAT_00101c38[];
extern char DAT_00101c58[];
extern char DAT_00101c78[];
extern char DAT_00101c98[];

/* Typeinfo pointers */
extern struct type_info PTR__RTTIDerivedA_00112c28;
extern struct type_info PTR__RTTIDerivedB_00112c50;

/* std namespace forward declarations */
extern struct Init std___ioinit;

/* Global variable declarations */
extern unsigned long __stack_chk_guard;
extern char completed_0;
extern void *__dso_handle;

/* Forward declarations */
extern void call_weak_fn(void);
extern void test_cpp_oo_features(void);

/* Forward declarations for virtual functions */
extern int Base_virtual_func(Base *this, int param_1);
extern unsigned char *Base_getName(void);
extern void Base__Base(Base *this);
extern void Base__Base_deleting(Base *this);

extern int Derived_virtual_func(Derived *this, int param_1);
extern char *Derived_getName(void);
extern void Derived__Derived(Derived *this);
extern void Derived__Derived_deleting(Derived *this);

extern unsigned long long MultiDerived_funcA(void);
extern unsigned long long MultiDerived_funcB(MultiDerived *this);
extern void MultiDerived__MultiDerived(MultiDerived *this);
extern void MultiDerived__MultiDerived_deleting(MultiDerived *this);

extern int MiddleA_func(MiddleA *this);
extern int MiddleA_func_offset(MiddleA *this);
extern int MiddleB_func(MiddleB *this);
extern int MiddleB_func_offset(MiddleB *this);

extern int DiamondDerived_func(DiamondDerived *this);
extern int DiamondDerived_func_offset(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_offset(DiamondDerived *this);
extern void DiamondDerived__DiamondDerived_m10(DiamondDerived *this);

extern unsigned long long RTTIDerivedA_getType(void);
extern void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedA__RTTIDerivedA_deleting(RTTIDerivedA *this);
extern unsigned long long RTTIDerivedB_getType(void);
extern void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
extern void RTTIDerivedB__RTTIDerivedB_deleting(RTTIDerivedB *this);

/* Global variable definitions */
unsigned long __stack_chk_guard = 0;
char completed_0 = '\x01';
void *__dso_handle = 0;
struct Init std___ioinit = {0};

/* Vtable definitions for classes with virtual functions */
void *__vtable_for_Base[] = {
    (void *)Base_virtual_func,
    (void *)Base_getName,
    (void *)Base__Base,
    (void *)Base__Base_deleting
};

void *__vtable_for_Derived[] = {
    (void *)Derived_virtual_func,
    (void *)Derived_getName,
    (void *)Derived__Derived,
    (void *)Derived__Derived_deleting
};

void *__vtable_for_MultiDerived[] = {
    (void *)MultiDerived_funcA,
    (void *)MultiDerived_funcB,
    (void *)MultiDerived__MultiDerived,
    (void *)MultiDerived__MultiDerived_deleting
};

void *__vtable_for_MiddleA[] = {
    (void *)MiddleA_func,
    (void *)MiddleA_func_offset
};

void *__vtable_for_MiddleB[] = {
    (void *)MiddleB_func,
    (void *)MiddleB_func_offset
};

void *__vtable_for_DiamondDerived[] = {
    (void *)DiamondDerived_func,
    (void *)DiamondDerived_func_offset,
    (void *)DiamondDerived__DiamondDerived,
    (void *)DiamondDerived__DiamondDerived_offset,
    (void *)DiamondDerived__DiamondDerived_m10
};

void *__vtable_for_RTTIDerivedA[] = {
    (void *)RTTIDerivedA_getType,
    (void *)RTTIDerivedA__RTTIDerivedA,
    (void *)RTTIDerivedA__RTTIDerivedA_deleting
};

void *__vtable_for_RTTIDerivedB[] = {
    (void *)RTTIDerivedB_getType,
    (void *)RTTIDerivedB__RTTIDerivedB,
    (void *)RTTIDerivedB__RTTIDerivedB_deleting
};

/* Data constant definitions */
char DAT_00101af8[] = "Base";
char DAT_00101b10[] = "Testing C++ features";
char DAT_00101b38[] = "String length: %d\n";
char DAT_00101b58[] = "Constructor test: %d\n";
char DAT_00101b78[] = "Virtual function test: %d\n";
char DAT_00101b98[] = "Multiple inheritance test: %d\n";
char DAT_00101bb8[] = "Diamond inheritance test: %d\n";
char DAT_00101bd8[] = "Operator overload test: %d\n";
char DAT_00101bf8[] = "Template class test: %d\n";
char DAT_00101c18[] = "Lambda test: %d\n";
char DAT_00101c38[] = "Smart pointer test: %d\n";
char DAT_00101c58[] = "Exception caught, value: %d\n";
char DAT_00101c78[] = "RTTI test: %d\n";
char DAT_00101c98[] = "All tests completed\n";

/* Template function forward declarations */
extern int template_max_int_(int param_1, int param_2);
extern double template_max_double_(double param_1, double param_2);
extern void template_swap_int_(int *param_1, int *param_2);

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};
struct LifecycleClass LifecycleClass = {0};

// Decompiled by BinaryAI
// SHA256: d64f3969c0f44f026bf6f0f3ba02a195c17afc8814e8da130296a2c793a2337c

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x100ed0
// Uses external puts

// Function: <EXTERNAL>::strlen @ 0x100ee0
// Uses external strlen

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ef0
void __stack_chk_fail(void)
{
 __builtin_unreachable();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100f00
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100f10
// Uses external __cxa_allocate_exception

// Function: <EXTERNAL>::__cxa_finalize @ 0x100f20
// Uses external __cxa_finalize

// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
// Uses external __libc_start_main

// Function: <EXTERNAL>::operator.new @ 0x100f40
// Uses external operator new

// Function: <EXTERNAL>::operator.delete @ 0x100f50
void operator_delete(void *param_1,unsigned long param_2)
{
	/* External function - actual implementation in C++ runtime */
	return;
}

// Function: <EXTERNAL>::strncpy @ 0x100f60
// Uses external strncpy

// Function: <EXTERNAL>::__dynamic_cast @ 0x100f70
// Uses external __dynamic_cast

// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
// Uses external __cxa_atexit

// Function: <EXTERNAL>::strcmp @ 0x100f90
// Uses external strcmp

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100fa0
// Uses external __cxa_rethrow

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100fb0
void std_ios_base_Init__Init(struct Init *this)
{
 std_ios_base_Init__Init_(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x100fc0
// Uses external abort

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100fd0
// Uses external __cxa_end_catch

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100fe0
void __gxx_personality_v0(void)
{
	/* Exception handling personality function - stub implementation */
	return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100ff0
// Uses external __cxa_throw

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
// Uses external _Unwind_Resume

// Function: <EXTERNAL>::__printf_chk @ 0x101010
int __printf_chk(int __flag, const char *__format, ...)
{
 int iVar1;
 __builtin_va_list args;
 __builtin_va_start(args, __format);
 iVar1 = vprintf(__format, args);
 __builtin_va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
// Uses external __gmon_start__

// Function: test_cpp_exception @ 0x101040
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: main @ 0x101120
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init__Init_((struct Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init_,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101180
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack0x00000008 = 0;
 __libc_start_main(main,(int)param_9,(char **)&stack0x00000008,(void (*)(void))0,(void (*)(void))0,(void *)0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1011b4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x1011d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101200
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010123c @ 0x10123c
void FUN_0010123c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101240
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x1012a0
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = __stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - __stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
	__stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))(*((void **)param_1)))(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101340
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101350
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101360
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x101370
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101380
void test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = __stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int_(&local_10,&iStack_c);
 if (local_8 == __stack_chk_guard) {
 return;
 }
 (void)(dVar2 + iVar1 + local_10 + iStack_c);
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x101420
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101430
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x101440
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101450
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
 iVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 cVar1 = *__s1;
 if ((__s1 != "12RTTIDerivedA") && (iVar7 = 0, cVar1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
	iVar2 = iVar7 + 0x78;
	iVar7 = iVar2 + 200;
	if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
	sVar6 = strlen(__s1);
	(*(void (**)(void *))plVar3)(plVar3);
	(*(void (**)(void *))plVar4)(plVar4);
	return iVar7 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x1015b0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 size_t sVar2;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = __stack_chk_guard;
 puts((char *)DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,(const char *)DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(const char *)DAT_00101b58,uVar1);
 __printf_chk(1,(const char *)DAT_00101b78,0x2a);
 __printf_chk(1,(const char *)DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(const char *)DAT_00101bb8,uVar1);
 __printf_chk(1,(const char *)DAT_00101bd8,0x16);
 test_cpp_template_func();
 __printf_chk(1,(const char *)DAT_00101bf8,0x10);
 __printf_chk(1,(const char *)DAT_00101c38,0x55);
 /* Exception handling - test_cpp_exception uses __cxa_throw */
 /* Using standard C++ try-catch for the exception */
 __printf_chk(1,(const char *)DAT_00101c58,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(const char *)DAT_00101c78,uVar1);
 uVar1 = test_cpp_rtti();
 if (local_8 - __stack_chk_guard == 0) {
 __printf_chk(1,(const char *)DAT_00101c98);
 return;
 }
	__stack_chk_fail();
}

// Function: Base::virtual_func @ 0x101740
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101750
unsigned char * Base_getName(void)
{
 return (unsigned char *)DAT_00101af8;
}

// Function: Base::~Base @ 0x101760
void Base__Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x101770
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x101780
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101790
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1017a0
unsigned long long MultiDerived_funcB_static(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1017b0
unsigned long long MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x1017c0
int MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x1017e0
int MiddleA_func_offset(MiddleA *this)
{
	return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
	*(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101810
int MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101830
int MiddleB_func_offset(MiddleB *this)
{
	return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
	*(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101860
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



// Function: DiamondDerived::func @ 0x1018a4
int DiamondDerived_func_offset(DiamondDerived *this)
{
	return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1018c0
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x1018d0
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1018e0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1018f0
void RTTIDerivedB__RTTIDerivedB_deleting(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1018f0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}











// Function: Base::~Base @ 0x101940
void Base__Base_deleting(Base *this)
{
	operator_delete(this,8);
	return;
}

// Function: Derived::~Derived @ 0x101950
void Derived__Derived(Derived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101960
void Derived__Derived_deleting(Derived *this)
{
 operator_delete(this,0x10);
 return;
}



// Function: MultiDerived::~MultiDerived @ 0x101970
void MultiDerived__MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101980
void MultiDerived__MultiDerived_deleting(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}



// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101990
void RTTIDerivedA__RTTIDerivedA_deleting(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019a0
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019b0
void DiamondDerived__DiamondDerived_offset(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019c4
void DiamondDerived__DiamondDerived_m10(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x1019d0
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1019e0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1019f0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101a10
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101a20
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x101a40
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101a70
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101a80
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101a90
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101ab0
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101ad0
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x101ad8
void _fini(void)
{
 return;
}

