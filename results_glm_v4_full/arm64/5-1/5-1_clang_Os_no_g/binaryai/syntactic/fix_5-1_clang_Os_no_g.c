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
typedef unsigned long long undefined7;
#define NULL ((void *)0)

/* Forward declarations for C++ classes */
struct Base {
    void **vtable;
};
typedef struct Base Base;

struct LifecycleClass {
};
int LifecycleClass_instance_count = 0;

/* RTTI class definitions - moved here before vtable usage */
struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Forward declarations for functions */
void _GLOBAL__sub_I_5_1_cpp(void);
int main(int argc, char **argv, char **envp);
int call_weak_fn(int param);

/* C++ std library placeholders */
struct Init {
};
typedef struct Init Init;
struct Init_ {
};
typedef struct Init_ Init_;

struct ios_base {
    struct Init Init;
};
typedef struct ios_base ios_base;
typedef ios_base std_ios_base;
Init_ std___ioinit;


/* RTTI type info placeholders */
struct typeinfo {
    const char *name;
};
typedef struct typeinfo typeinfo;

typeinfo int_typeinfo = {"int"};
typeinfo RTTIBase_typeinfo = {"RTTIBase"};
typeinfo RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
typeinfo RTTIDerivedB_typeinfo = {"RTTIDerivedB"};

/* VTables for RTTI classes - forward declare the functions first */
extern void RTTIBase__RTTIBase(RTTIBase *this);
extern void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
extern void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
extern unsigned long long RTTIDerivedA__getType(void);
extern unsigned long long RTTIDerivedB__getType(void);

/* Use void* for vtables to accommodate both typeinfo and function pointers */
const void *_ZTV11RTTIBase[3] = { NULL, &RTTIBase_typeinfo, (const void *)RTTIBase__RTTIBase };
const void *_ZTV13RTTIDerivedA[4] = { NULL, &RTTIDerivedA_typeinfo, (const void *)RTTIDerivedA__RTTIDerivedA, (const void *)RTTIDerivedA__getType };
const void *_ZTV13RTTIDerivedB[4] = { NULL, &RTTIDerivedB_typeinfo, (const void *)RTTIDerivedB__RTTIDerivedB, (const void *)RTTIDerivedB__getType };

/* Stack placeholder */
unsigned long long stack0x00000008;

/* External symbols */
void *__dso_handle = 0;
char completed_0 = '\0';

/* C++ ABI functions - correct signatures */
extern void __cxa_finalize(void *dso_handle);
extern void *__dynamic_cast(const void *sub, const typeinfo *src, const typeinfo *dst, ptrdiff_t src2dst_offset);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_throw(void *thrown_exception, const typeinfo *tinfo, void (*dest)(void *));
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_begin_catch(void *exception_object);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *exception_object);
extern void __gxx_personality_v0(void);

/* Data string placeholders */
char DAT_00101680[] = "";
char DAT_00101529[] = "";
char DAT_00101547[] = "";
char DAT_00101563[] = "";
char DAT_0010157f[] = "";
char DAT_0010159b[] = "";
char DAT_001015b8[] = "";
char DAT_001015d4[] = "";
char DAT_001015f0[] = "";
char DAT_0010160c[] = "";
char DAT_00101628[] = "";
char DAT_00101645[] = "";
char DAT_00101662[] = "";

/* Type for Container methods */
typedef unsigned int uint;

/* Forward declarations for template instantiations */


/* Template instantiations - Container<int> */
struct Container_int_ {
    int data[10];
    unsigned int size;
};
typedef struct Container_int_ Container_int_;

/* Template instantiations - Container<double> */
struct Container_double_ {
    double data[10];
    unsigned int size;
};
typedef struct Container_double_ Container_double_;

/* C++ library functions - declarations for qualified names */
extern void std_ios_base_Init_Init(Init *this);
extern void std_ios_base_Init__Init(Init *this);

/* Standard C library functions */
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern size_t strlen(const char *s);
extern void abort(void);
extern void __gmon_start__(void);
extern void *malloc(unsigned long size);
extern void free(void *ptr);
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Decompiled by BinaryAI
// SHA256: bcc3c1f915f942182d2110f66079bde10fcde94c6d929c03621c5f174237c245

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
// puts is provided by the standard library

// Function: <EXTERNAL>::strlen @ 0x100d90
// strlen is provided by the standard library

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
// __cxa_begin_catch is provided by libstdc++

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
// __cxa_allocate_exception is provided by libstdc++

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
// __cxa_finalize is provided by libstdc++



// Function: <EXTERNAL>::operator.delete @ 0x100de0
void _ZdlPv(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
void *_Znwj(unsigned long param_1)
{
 return malloc(param_1);
}

// Compatibility wrappers
void operator_delete(void *param_1)
{
 _ZdlPv(param_1);
}

void *operator_new(unsigned long param_1)
{
 return _Znwj(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(const void *sub, const typeinfo *src, const typeinfo *dst, ptrdiff_t src2dst_offset)
{
 /* Simplified implementation - should be provided by libstdc++ */
 return (void *)sub;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
// __cxa_atexit is provided by libstdc++

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
// __cxa_rethrow is provided by libstdc++

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void std_ios_base_Init_Init(Init *this)
{
 /* Initialize ios_base - placeholder */
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::~Init @ 0x100e32
void std_ios_base_Init__Init(Init *this)
{
 /* Destruct ios_base - placeholder */
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
// abort is provided by the standard library

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
// __cxa_end_catch is provided by libstdc++

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
// __gxx_personality_v0 is provided by libstdc++

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
// __cxa_throw is provided by libstdc++

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
// _Unwind_Resume is provided by libstdc++

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
// __gmon_start__ is provided by libc

// Function: <EXTERNAL>::printf @ 0x100ea0
// printf is provided by the standard library

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x100f00
void _start(int argc, char **argv, char **envp, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 __libc_start_main(main, argc, argv, init, fini, rtld_fini, stack_end);
 abort();
}

// Function: call_weak_fn @ 0x100f34
int call_weak_fn(int param)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100f50
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100f80
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100fbc @ 0x100fbc
void FUN_00100fbc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 void **vtable = *(void ***)param_1;
 ((void (*)(Base *, int))vtable[param_2])(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101088
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x1011b0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011b8
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)_ZTV13RTTIDerivedA;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)(intptr_t)_ZTV13RTTIDerivedB;
 lVar3 = (long)(intptr_t)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)(intptr_t)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101278
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 puts(DAT_00101680);
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_38 | 4));
 printf(DAT_00101529,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_00101547,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101563,0x2a);
 printf(DAT_0010157f,0x47);
 printf(DAT_0010159b,0x28a);
 printf(DAT_001015b8,0x16);
 printf(DAT_001015d4,0x27);
 printf(DAT_001015f0,0x10);
 printf(DAT_0010160c,0x55);
 uVar3 = test_cpp_exception();
 printf(DAT_00101628,uVar3 & 0xffffffff);
 printf(DAT_00101645,0x2bf);
 uVar3 = test_cpp_rtti();
 iVar1 = printf(DAT_00101662,uVar3 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1013a4
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1013bc
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1013c8
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1013d4
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1013e8
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1013f0
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

// Function: Container<int>::get @ 0x10140c
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x10142c
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101434
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x10143c
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x101458
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101474
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x10147c
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101480
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101488
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10148c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101490
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x101498
void _fini(void)
{
 return;
}

