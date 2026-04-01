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
#define NULL ((void *)0)

/* Forward declarations */
struct Init;
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
typedef struct Init Init;
typedef struct Base Base;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Struct definitions */
struct Init {
    void **vtable;
};

/* Forward declarations for functions */
void call_weak_fn(int);
void test_cpp_oo_features(void);
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this);
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this);
void RTTIDerivedA__RTTIDerivedA_delete(struct RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
void RTTIDerivedB__RTTIDerivedB_delete(struct RTTIDerivedB *this);
unsigned long long RTTIDerivedB_getType(void);



struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int value;
};

struct MultiDerived {
    void **vtable;
    char padding[8];
};

struct MiddleA {
    void **vtable;
    char padding[8];
};

struct MiddleB {
    void **vtable;
    char padding[8];
};

struct DiamondDerived {
    void **vtable;
    char padding[24];
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

struct LifecycleClass {
    void **vtable;
};

struct RTTIBase {
    void **vtable;
};

struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

/* Static member declarations */
int LifecycleClass_instance_count;

/* Global variable declarations */
extern long __stack_chk_guard;
extern long ___stack_chk_guard;
char completed_0;
void *__dso_handle;
extern void *malloc(size_t);
extern void free(void *);

/* Forward declarations for vtables */
extern void *RTTIDerivedA_vtable[];
extern void *RTTIDerivedB_vtable[];

/* Additional global variables for C++ features */
void *PTR__RTTIDerivedA_00112c28 = RTTIDerivedA_vtable;
void *PTR__RTTIDerivedB_00112c50 = RTTIDerivedB_vtable;

/* Forward declarations for RTTI typeinfo symbols */
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* Type info object definitions */
static void *RTTIBase_typeinfo_obj[4];
static void *RTTIDerivedA_typeinfo_obj[4];
static void *RTTIDerivedB_typeinfo_obj[4];
static void *int_typeinfo_obj[4];

/* Vtable definitions for RTTI classes */
void *RTTIDerivedA_vtable[] = {
    (void *)RTTIDerivedA__RTTIDerivedA_delete,
    (void *)RTTIDerivedA_getType,
    RTTIDerivedA_typeinfo_obj
};

void *RTTIDerivedB_vtable[] = {
    (void *)RTTIDerivedB__RTTIDerivedB_delete,
    (void *)RTTIDerivedB_getType,
    RTTIDerivedB_typeinfo_obj
};

/* Type info symbol definitions to satisfy linker */
static void *RTTIBase_typeinfo_obj[4];
static void *RTTIDerivedA_typeinfo_obj[4];
static void *RTTIDerivedB_typeinfo_obj[4];
static void *int_typeinfo_obj[4];

void *RTTIBase_typeinfo = RTTIBase_typeinfo_obj;
void *RTTIDerivedA_typeinfo = RTTIDerivedA_typeinfo_obj;
void *RTTIDerivedB_typeinfo = RTTIDerivedB_typeinfo_obj;
void *int_typeinfo = int_typeinfo_obj;

Init std__ioinit;
void *stack0x00000008;
char DAT_00101ba0[] = "Testing C++ object-oriented features:\n";
char DAT_00101bc8[] = "test_cpp_member_func returned: %d\n";
char DAT_00101be8[] = "test_cpp_constructor returned: %d\n";
char DAT_00101c08[] = "test_cpp_virtual_func returned: %d\n";
char DAT_00101c28[] = "test_cpp_multiple_inheritance returned: %d\n";
char DAT_00101c48[] = "test_cpp_diamond_inheritance returned: %d\n";
char DAT_00101c68[] = "test_cpp_operator_overload returned: %d\n";
char DAT_00101c88[] = "test_cpp_template_func returned: %d\n";
char DAT_00101ca8[] = "test_cpp_template_class returned: %d\n";
char DAT_00101cc8[] = "test_cpp_lambda returned: %d\n";
char DAT_00101ce8[] = "test_cpp_exception\n";
char DAT_00101d08[] = "test_cpp_smart_ptr returned: %d\n";
char DAT_00101d28[] = "test_cpp_rtti returned\n";
char DAT_00101b88[] = "Base";

// Decompiled by BinaryAI
// SHA256: 67937badd5d9935278c48841e591931c047a112e17c0823fbcc67627d062121c

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 call_weak_fn(0);
 return 0;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 ((void (*)(void))(void *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100ed0
int puts(char *__s);


// Function: <EXTERNAL>::strlen @ 0x100ee0
size_t strlen(char *__s);


// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ef0
void __stack_chk_fail(void);


// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100f00
void __cxa_begin_catch(void);


// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100f10
void *__cxa_allocate_exception(size_t thrown_size)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100f20
void __cxa_finalize(void *dso_handle);


// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
void __libc_start_main(void *main_func, unsigned long long argc, void *argv, void *init, void *fini, void *stack_end);


// Function: <EXTERNAL>::operator.new @ 0x100f40
void * operator_new(unsigned long param_1)
{
 void *ptr;
 ptr = malloc(param_1);
 return ptr;
}

// Function: <EXTERNAL>::operator.delete @ 0x100f50
void operator_delete(void *param_1)
{
 if (param_1 != (void *)0) {
 free(param_1);
 }
 return;
}


// Function: <EXTERNAL>::strncpy @ 0x100f60
char * strncpy(char *__dest,char *__src,size_t __n);


// Function: <EXTERNAL>::__dynamic_cast @ 0x100f70
void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::strcmp @ 0x100f90
int strcmp(char *__s1,char *__s2);


// Function: <EXTERNAL>::__cxa_rethrow @ 0x100fa0
void __cxa_rethrow(void);


// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100fb0
void Init__Init(Init *this)
{
    this->vtable = NULL;
    return;
}


// Function: <EXTERNAL>::abort @ 0x100fc0
void abort(void);


// Function: <EXTERNAL>::__cxa_end_catch @ 0x100fd0
void __cxa_end_catch(void);


// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100fe0
void __gxx_personality_v0(void);


// Function: <EXTERNAL>::__cxa_throw @ 0x100ff0
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *))
{
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
void _Unwind_Resume(void *exception_object)
{
}

// Function: <EXTERNAL>::__printf_chk @ 0x101010
int __printf_chk(int __flag, const char *__fmt, ...)
{
 return 0;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
void __gmon_start__(void);


// Function: test_cpp_exception @ 0x101040
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: main @ 0x101120
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 Init__Init((Init *)&std__ioinit);
 __cxa_atexit((void (*)(void *))Init__Init,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101180
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,(void *)(uintptr_t)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1011b4
void call_weak_fn(int param)
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
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(struct Base *param_1,int param_2)
{
 typedef int (*VFuncPtr)(struct Base *, int);
 (*(VFuncPtr)(*(void **)param_1))(param_1, param_2);
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
 int iVar1;
 int iVar2;
 void **plVar3;
 void **plVar4;
 void *lVar5;
 size_t sVar6;
 char *__s1;
 void *lVar7;
 char cVar8;
 plVar3 = (void **)operator_new(8);
 *plVar3 = PTR__RTTIDerivedA_00112c28;
 plVar4 = (void **)operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)(*(long *)((long)lVar7 - 8) + 8);
 *plVar4 = PTR__RTTIDerivedB_00112c50;
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
 lVar5 = __dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = __dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 RTTIDerivedA__RTTIDerivedA((struct RTTIDerivedA *)plVar3);
 RTTIDerivedB__RTTIDerivedB((struct RTTIDerivedB *)plVar4);
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
 puts(DAT_00101ba0);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,DAT_00101bc8,(int)sVar3 + 0x125c);
 __printf_chk(1,DAT_00101be8,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00101c08,0x2a);
 __printf_chk(1,DAT_00101c28,0x47);
 __printf_chk(1,DAT_00101c48,0x28a);
 __printf_chk(1,DAT_00101c68,0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap_int_(&local_38,aiStack_34);
 __printf_chk(1,DAT_00101c88,(int)dVar4 + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,DAT_00101ca8,0x10);
 __printf_chk(1,DAT_00101cc8,0x55);
 __printf_chk(1,DAT_00101ce8);
 test_cpp_exception();
 __printf_chk(1,DAT_00101d08,0x2bf);
 uVar2 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101d28);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x1017d0
int Base_virtual_func(struct Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1017e0
char * Base_getName(void)
{
 return DAT_00101b88;
}

// Function: Derived::virtual_func @ 0x101800
int Derived_virtual_func(struct Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x101810
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101820
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x101830
unsigned long long MultiDerived_funcB(struct MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101850
int MiddleA_func(struct MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101870
int MiddleA_func_2(struct MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x1018a0
int MiddleB_func(struct MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x1018c0
int MiddleB_func_2(struct MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x1018f0
int DiamondDerived_func(struct DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101910
int DiamondDerived_func_2(struct DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101934
int DiamondDerived_func_3(struct DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101950
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101960
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x101970
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this)
{
 *(void **)this = PTR__RTTIDerivedA_00112c28;
 return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x101980
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this)
{
 *(void **)this = PTR__RTTIDerivedB_00112c50;
 return;
}


// Function: MultiDerived::~MultiDerived @ 0x1019b0
void MultiDerived__MultiDerived(struct MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1019b4
void MultiDerived__MultiDerived_2(struct MultiDerived *this)
{
 return;
}

// Function: Base::~Base @ 0x1019d0
void Base__Base(struct Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::~Derived @ 0x1019e0
void Derived__Derived(struct Derived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1019f0
void MultiDerived__MultiDerived_delete(struct MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101a00
void MultiDerived__MultiDerived_2_delete(struct MultiDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101a10
void RTTIDerivedB__RTTIDerivedB_delete(struct RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101a20
void RTTIDerivedA__RTTIDerivedA_delete(struct RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a30
void DiamondDerived__DiamondDerived(struct DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a40
void DiamondDerived__DiamondDerived_2(struct DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a54
void DiamondDerived__DiamondDerived_3(struct DiamondDerived *this)
{
 operator_delete(this + -0x10);
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
void Container_int__Container(struct Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101ab0
void Container_int__push(struct Container_int_ *this,int param_1)
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
unsigned int Container_int__get(struct Container_int_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101b00
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101b10
void Container_double__Container(struct Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101b20
void Container_double__push(struct Container_double_ *this,double param_1)
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
unsigned long long Container_double__get(struct Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101b60
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x101b68
void _fini(void)
{
 return;
}

