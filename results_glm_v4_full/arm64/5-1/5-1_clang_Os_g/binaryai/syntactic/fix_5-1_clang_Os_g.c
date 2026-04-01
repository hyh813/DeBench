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

/* Additional type definitions - undefined7 removed, using unsigned long long directly */

/* NULL definition */
#define NULL ((void *)0)

/* Forward declarations */
struct Base;

/* Base struct - needs vtable pointer for virtual function calls */
struct Base {
 void *vtable;  /* Virtual function table pointer */
};

/* Base vtable structure */
struct Base_vtable {
 void (*virtual_func)(struct Base *, int);
};

/* Standard library initialization stub */
extern void std_ios_base_Init_Init(void *this);

/* Global initialization functions that may be called by runtime */
void __attribute__((constructor)) _GLOBAL__sub_I_5_1_cpp(void);

/* Global variable definitions */
char completed_0 = 0;
void *__dso_handle = NULL;
void *stack0x00000008 = NULL;

/* Data character arrays */
char DAT_00101529[1] = {0};
char DAT_00101547[1] = {0};
char DAT_00101563[1] = {0};
char DAT_0010157f[1] = {0};
char DAT_0010159b[1] = {0};
char DAT_001015b8[1] = {0};
char DAT_001015d4[1] = {0};
char DAT_001015f0[1] = {0};
char DAT_0010160c[1] = {0};
char DAT_00101628[1] = {0};
char DAT_00101645[1] = {0};
char DAT_00101662[1] = {0};
char DAT_00101680[1] = {0};

/* RTTI typeinfo structures */
struct type_info {
 const char *name;
};

/* RTTI typeinfo definitions */
struct type_info RTTIBase_typeinfo = {"RTTIBase"};
struct type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB"};
struct type_info int_typeinfo = {"int"};

/* Function prototypes for forward references */
void call_weak_fn(void);
int main(int argc, char **argv);
void _exit(int status);

/* Function prototypes for test functions */
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(struct Base *param_1,int param_2);
unsigned long long test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_diamond_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
unsigned long long test_cpp_template_func(void);
unsigned long long test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
void test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
int test_cpp_oo_features(void);

/* C++ runtime abort function */
extern void abort(void) __attribute__((noreturn));

/* C++ runtime pure virtual function handler */
extern void __cxa_pure_virtual(void);

/* Definition for __cxa_pure_virtual - called when pure virtual is invoked */
__attribute__((noreturn))
void __cxa_pure_virtual(void)
{
 /* Pure virtual function called - this is undefined behavior */
 abort();
}

/* Definition for _exit function */
void _exit(int status)
{
 (void)status;
 while (1) {
  /* Infinite loop - _exit should never return */
 }
}

/* Declaration for _fini used by __libc_start_main */
extern void _fini(void);

/* LifecycleClass definition */
struct LifecycleClass {
 int instance_count;
};

/* RTTI class definitions */
struct RTTIBase {
 void *vtable;
};

struct RTTIDerivedA {
 void *vtable;
};

struct RTTIDerivedB {
 void *vtable;
};

/* Vtable structures for RTTI classes */
struct RTTIBase_vtable {
 void *typeinfo;
 void (*destructor)(void *);
};

struct RTTIDerivedA_vtable {
 void *typeinfo;
 void (*destructor)(void *);
 unsigned long long (*getType)(void *);
};

struct RTTIDerivedB_vtable {
 void *typeinfo;
 void (*destructor)(void *);
 unsigned long long (*getType)(void *);
};

/* Forward declarations for RTTI functions used in vtables - extern not needed for functions */
void RTTIBase_destructor(struct RTTIBase *);
void RTTIDerivedA_destructor(struct RTTIDerivedA *);
unsigned long long RTTIDerivedA_getType(struct RTTIDerivedA *);
void RTTIDerivedB_destructor(struct RTTIDerivedB *);
unsigned long long RTTIDerivedB_getType(struct RTTIDerivedB *);

/* Vtable instances */
struct RTTIBase_vtable RTTIBase_vtable_instance = {
 (void *)&RTTIBase_typeinfo,
 (void (*)(void *))RTTIBase_destructor
};

struct RTTIDerivedA_vtable RTTIDerivedA_vtable_instance = {
 (void *)&RTTIDerivedA_typeinfo,
 (void (*)(void *))RTTIDerivedA_destructor,
 (unsigned long long (*)(void *))RTTIDerivedA_getType
};

struct RTTIDerivedB_vtable RTTIDerivedB_vtable_instance = {
 (void *)&RTTIDerivedB_typeinfo,
 (void (*)(void *))RTTIDerivedB_destructor,
 (unsigned long long (*)(void *))RTTIDerivedB_getType
};

/* Container template instantiations */
struct Container_int_ {
 void *padding1[10];
 unsigned int size;
 int data[10];
};

struct Container_double_ {
 void *padding1[10];
 unsigned int size;
 double data[10];
};

/* LifecycleClass instance definition */
struct LifecycleClass LifecycleClass_instance = {0};

// Decompiled by BinaryAI
// SHA256: 010e8616b3ec90c6246288639bc968fba63d564d95a7d7012a9ab6a057832aa6

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))(void *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
int puts(const char *__s)
{
 const char *p = __s;
 while (*p) p++;
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x100d90
size_t strlen(const char *__s)
{
 const char *p = __s;
 while (*p) p++;
 return p - __s;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void *__cxa_allocate_exception(size_t size)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
void __libc_start_main(int (*main_func)(int, char **), int argc, char **argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 int exit_code;
 _init(0);
 exit_code = main_func(argc, argv);
 _exit(exit_code);
}

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void _ZdlPv(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
void * _Znwm(unsigned long param_1)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(void *src_ptr,void *src_type,void *dst_type,int src2dst_offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
void __cxa_atexit(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void std_ios_base_Init_Init(void *this)
{
 (void)this;
 /* Stub for std::ios_base::Init constructor */
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
__attribute__((noreturn))
void abort(void)
{
 while(1) {}
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void *ptr, void *type, void *dest)
{
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void)
{
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x100ea0
int printf(const char *__format,...)
{
 return 0;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 /* Stub for global initialization - may be called by runtime */
 std_ios_base_Init_Init(NULL);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 __libc_start_main((int (*)(int, char **))main,0,(char **)&stack0x00000008,(void *)_init,(void *)_fini,(void *)0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x100f34
void call_weak_fn(void)
{
 __gmon_start__();
 return;
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
 unsigned long long uStack_2c;
 char uStack_25;
 unsigned long long uStack_24;
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
 return LifecycleClass_instance.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(struct Base *param_1,int param_2)
{
 ((void (*)(struct Base *,int))(**(void ***)param_1))(param_1,param_2);
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
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 unsigned long long *plVar2;
 unsigned long long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)_Znwm(8);
 *puVar1 = (unsigned long long)&RTTIBase_vtable_instance;
 plVar2 = (unsigned long long *)_Znwm(8);
 *plVar2 = (unsigned long long)&RTTIDerivedA_vtable_instance;
 lVar3 = (unsigned long long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (unsigned long long)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 _ZdlPv(puVar1);
 if (plVar2 != (unsigned long long *)0) {
  void **vtable = *(void ***)plVar2;
  void (*destructor)(void *) = (void (*)(void *))vtable[1];
  destructor(plVar2);
 }
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
 unsigned long long uStack_2c;
 char uStack_25;
 unsigned long long uStack_24;
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
 printf(DAT_00101547,(unsigned long)(LifecycleClass_instance.instance_count * 0x3e9 + 0x15));
 printf(DAT_00101563,0x2a);
 printf(DAT_0010157f,0x47);
 printf(DAT_0010159b,0x28a);
 printf(DAT_001015b8,0x16);
 printf(DAT_001015d4,0x27);
 printf(DAT_001015f0,0x10);
 printf(DAT_0010160c,0x55);
 test_cpp_exception();
 printf(DAT_00101628,(unsigned long)0);
 printf(DAT_00101645,0x2bf);
 uVar3 = test_cpp_rtti();
 iVar1 = printf(DAT_00101662,uVar3 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1013a4
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
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
void Container_int__Container(struct Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1013f0
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

// Function: Container<int>::get @ 0x10140c
unsigned int Container_int__get(struct Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(unsigned int)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x10142c
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101434
void Container_double__Container(struct Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x10143c
void Container_double__push(struct Container_double_ *this,double param_1)
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
unsigned long long Container_double__get(struct Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101474
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x10147c
void RTTIDerivedA_destructor(struct RTTIDerivedA *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101480
unsigned long long RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 (void)this;
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101488
void RTTIBase_destructor(struct RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10148c
void RTTIDerivedB_destructor(struct RTTIDerivedB *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101490
unsigned long long RTTIDerivedB_getType(struct RTTIDerivedB *this)
{
 (void)this;
 return 2;
}

// Function: _fini @ 0x101498
void _fini(void)
{
 return;
}

