/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

// Global variables needed
long ___stack_chk_guard = 0;
long *__stack_chk_guard = &___stack_chk_guard;
void *__dso_handle;
char completed_0 = 0;

// Type info structures for C++ RTTI
struct typeinfo {
    char *name;
};
extern struct typeinfo RTTIBase_typeinfo;
extern struct typeinfo RTTIDerivedA_typeinfo;
extern struct typeinfo RTTIDerivedB_typeinfo;

// RTTI type info pointers (vtable addresses)
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

// Forward declarations for functions
void test_cpp_oo_features(void);
int test_cpp_constructor(void);

// Forward declaration for Base (needed by call_virtual_func)
struct Base;
int test_cpp_exception(void);
int test_cpp_rtti(void);
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);
int call_weak_fn(int ctx);

// Forward declarations for typeinfo
extern struct typeinfo RTTIBase_typeinfo;
extern struct typeinfo RTTIDerivedA_typeinfo;
extern struct typeinfo RTTIDerivedB_typeinfo;

// Forward declarations for classes
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// RTTI type info declarations
extern struct typeinfo RTTIBase_typeinfo;
extern struct typeinfo RTTIDerivedA_typeinfo;
extern struct typeinfo RTTIDerivedB_typeinfo;

// RTTI type info structures (defined)
struct typeinfo RTTIBase_typeinfo = { "11RTTIBase" };
struct typeinfo RTTIDerivedA_typeinfo = { "12RTTIDerivedA" };
struct typeinfo RTTIDerivedB_typeinfo = { "12RTTIDerivedB" };

// vtable pointers for RTTI classes
void *PTR__RTTIDerivedA_00112c28 = 0;
void *PTR__RTTIDerivedB_00112c50 = 0;

// Global data symbols (string constants)
char DAT_00101ba0[] = "Testing C++ Features";
char DAT_00101bc8[] = "test_cpp_member_func returned: %d\n";
char DAT_00101be8[] = "test_cpp_constructor returned: %d\n";
char DAT_00101c08[] = "test_cpp_virtual_func returned: %llu\n";
char DAT_00101c28[] = "test_cpp_multiple_inheritance returned: %llu\n";
char DAT_00101c48[] = "test_cpp_diamond_inheritance returned: %llu\n";
char DAT_00101c68[] = "test_cpp_operator_overload returned: %llu\n";
char DAT_00101c88[] = "test_cpp_template_func completed. Sum: %d\n";
char DAT_00101ca8[] = "test_cpp_template_class returned: %llu\n";
char DAT_00101cc8[] = "test_cpp_lambda returned: %llu\n";
char DAT_00101ce8[] = "test_cpp_exception returned: %u\n";
char DAT_00101d08[] = "test_cpp_smart_ptr returned: %llu\n";
char DAT_00101d28[] = "test_cpp_rtti returned: %d\n";
unsigned char DAT_00101b88[] = "Base";

// Class definitions
struct Base {
    int (*virtual_func)(struct Base *this, int param_1);
    void (*_Base)(struct Base *this);
    unsigned char *(*getName)(struct Base *this);
    void *vtable;
    int data;
};

struct Derived {
    int (*virtual_func)(struct Derived *this, int param_1);
    void (*_Derived)(struct Derived *this);
    char *(*getName)(struct Derived *this);
    void *vtable;
    int multiplier;
};

struct MiddleA {
    int (*func)(struct MiddleA *this);
    void *vtable;
    int value;
};

struct MiddleB {
    int (*func)(struct MiddleB *this);
    void *vtable;
    int value;
};

struct MultiDerived {
    unsigned long long (*funcA)(struct MultiDerived *this);
    unsigned long long (*funcB)(struct MultiDerived *this);
    void (*_MultiDerived)(struct MultiDerived *this);
    void *vtable;
    int data;
};

struct DiamondDerived {
    int (*func)(struct DiamondDerived *this);
    void (*_DiamondDerived)(struct DiamondDerived *this);
    void *vtable;
    int data;
};

struct RTTIBase {
    void (*_RTTIBase)(struct RTTIBase *this);
    void *vtable;
};

struct RTTIDerivedA {
    unsigned long long (*getType)(struct RTTIDerivedA *this);
    void (*_RTTIDerivedA)(struct RTTIDerivedA *this);
    void *vtable;
};

struct RTTIDerivedB {
    unsigned long long (*getType)(struct RTTIDerivedB *this);
    void (*_RTTIDerivedB)(struct RTTIDerivedB *this);
    void *vtable;
};

// LifecycleClass definition
struct LifecycleClass {
    static int instance_count;
    struct LifecycleClass *next;  // for list management
    struct LifecycleClass *prev;
    int value;
};

int LifecycleClass_instance_count = 0;

// Constructor and Destructor definitions for LifecycleClass
struct LifecycleClass* LifecycleClass_constructor(struct LifecycleClass *this) {
    LifecycleClass_instance_count++;
    return this;
}

void LifecycleClass_destructor(struct LifecycleClass *this) {
    LifecycleClass_instance_count--;
}

// Template class Container
template<typename T>
struct Container {
    void Container();
    void push(T value);
    T get(int index);
    unsigned int getSize();
    T data[10];
    unsigned int size;
};

// Concrete template instantiations used in code
typedef struct Container<int> Container_int_;
typedef struct Container<double> Container_double_;
// SHA256: 67937badd5d9935278c48841e591931c047a112e17c0823fbcc67627d062121c

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100ed0
int puts(char *__s);

// Function: <EXTERNAL>::strlen @ 0x100ee0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ef0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100f00
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100f10
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100f20
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x100f40
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x100f50
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x100f60
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100f70
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x100f90
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100fa0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100fb0
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x100fc0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100fd0
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100fe0
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100ff0
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__printf_chk @ 0x101010
int __printf_chk(int __flag, char *__format, ...)
{
 va_list __args;
 va_start(__args, __format);
 int result = vprintf(__format, __args);
 va_end(__args);
 return result;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: test_cpp_exception @ 0x101040
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: main @ 0x101120
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Global std::ios_base::Init object
struct std_ios_base_Init {
    char data[1];
};
struct std_ios_base_Init __ioinit;

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 // std_ios_base_Init is a struct, not a function - just use placeholder init
 __ioinit.data[0] = 0;
 __cxa_atexit((void (*)(void *))&_GLOBAL__sub_I_test_cpp_member_func,&__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101180
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&_init,0,0,param_1);
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
 struct Base local_base;  // Declare a Base object for testing
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(struct Base *param_1, int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
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
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int_(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return;
 }
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + iStack_c);
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
 int iVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 char *__s1;
 long lVar7;
 char cVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 if (__s1 == "12RTTIDerivedA") {
 cVar8 = '1';
 iVar2 = 0x1e;
 }
 else {
 cVar8 = *__s1;
 if (cVar8 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = 0x14;
 if (iVar1 == 0) {
 iVar2 = 0x1e;
 }
 }
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(void **)(lVar7 + 8))(plVar3);
 (**(void **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x1015f0
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t sVar3;
 double dVar4;
 int local_38;
 int aiStack_34 [2];
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(&DAT_00101ba0);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,&DAT_00101bc8,(int)sVar3 + 0x125c);
 __printf_chk(1,&DAT_00101be8,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00101c08,0x2a);
 __printf_chk(1,&DAT_00101c28,0x47);
 __printf_chk(1,&DAT_00101c48,0x28a);
 __printf_chk(1,&DAT_00101c68,0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap_int_(&local_38,aiStack_34);
 __printf_chk(1,&DAT_00101c88,(int)dVar4 + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,&DAT_00101ca8,0x10);
 __printf_chk(1,&DAT_00101cc8,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_00101ce8,uVar2);
 __printf_chk(1,&DAT_00101d08,0x2bf);
 uVar2 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00101d28);
 return;
 }
 __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar2,0);
}

// Function: Base_virtual_func @ 0x1017d0
int __thiscall Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1017e0
unsigned char * Base::getName(void)
{
 return &DAT_00101b88;
}

// Function: Base::~Base @ 0x1017f0
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived_virtual_func @ 0x101800
int __thiscall Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived_getName @ 0x101810
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x101820
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x101830
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x101840
unsigned long long __thiscall MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101850
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101870
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x1018a0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x1018c0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x1018f0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101910
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101934
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x101950
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101960
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101970
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101980
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101990
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101994
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019a0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1019b0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1019b4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x1019c0
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x1019d0
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this,8);
 return;
}

// Function: Derived::~Derived @ 0x1019e0
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1019f0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101a00
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101a10
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101a20
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a30
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a40
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a54
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x101a60
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x101a70
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101a80
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101aa0
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101ab0
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x101ad0
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101b00
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101b10
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101b20
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101b40
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101b60
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x101b68
void _fini(void)
{
 return;
}

