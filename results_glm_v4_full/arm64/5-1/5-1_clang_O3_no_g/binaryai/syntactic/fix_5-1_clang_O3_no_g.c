#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef size_t
typedef unsigned long size_t;
#endif
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;

/* Additional type definitions for decompiled code */
typedef struct { uint8_t bytes[7]; } undefined7;

/* Forward declarations for C++ classes */
struct Init;
struct Container_int_;
struct Container_double_;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Base;

/* C++ runtime structures - C compatible */
struct std_ios_base_Init {
    void (*Init)(struct std_ios_base_Init*);
};

struct std__ioinit_t { char dummy; };
extern struct std__ioinit_t std_ioinit;

/* Forward declaration */
struct Base;

struct Base {
    void **vtable;
};

struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

/* Container template instantiations */
struct Container_int_ {
    void **vtable;
    char data[0x28];  // padding
    int size;
    int elements[10]; // capacity 10
};

struct Container_double_ {
    void **vtable;
    char data[0x50];  // padding
    int size;
    double elements[10]; // capacity 10
};

struct LifecycleClass {
    int dummy;
};

/* Define static members as global variables */
int LifecycleClass_instance_count = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *int_typeinfo = 0;

/* Forward declarations for virtual functions */
void RTTIBase__destructor(struct RTTIBase *this);
void RTTIDerivedA__destructor(struct RTTIDerivedA *this);
unsigned long long RTTIDerivedA__getType(void);
void RTTIDerivedB__destructor(struct RTTIDerivedB *this);
unsigned long long RTTIDerivedB__getType(void);

/* Vtables for polymorphic classes */
void *RTTIBase_vtable[] = {
    (void*)RTTIBase__destructor,
};

void *RTTIDerivedA_vtable[] = {
    (void*)RTTIDerivedA__destructor,
    (void*)RTTIDerivedA__getType,
};

void *RTTIDerivedB_vtable[] = {
    (void*)RTTIDerivedB__destructor,
    (void*)RTTIDerivedB__getType,
};

/* External symbols and global variables */
void *__dso_handle = 0;
char completed_0 = 0;
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;
void *stack0x00000008 = 0;
struct std__ioinit_t std_ioinit = {0};

/* Forward declarations for external functions */
void Init(struct std_ios_base_Init *);
void std_ios_base_Init_Init(struct std_ios_base_Init *this);
int main(void);

/* C++ operator forward declarations */
void operator_delete(void *ptr);
void *operator_new(unsigned long size);

/* Data symbols - format string placeholders */
char DAT_001015dd[1] = {0};
char DAT_001015fb[1] = {0};
char DAT_00101617[1] = {0};
char DAT_00101633[1] = {0};
char DAT_0010164f[1] = {0};
char DAT_0010166c[1] = {0};
char DAT_00101688[1] = {0};
char DAT_001016a4[1] = {0};
char DAT_001016c0[1] = {0};
char DAT_001016dc[1] = {0};
char DAT_001016f9[1] = {0};
char DAT_00101716[1] = {0};
char DAT_00101734[1] = {0};

// Decompiled by BinaryAI
// SHA256: 6114fd641e1e4a9548f1fff963f9e0542d4d06f047f847c2767a5f3429a836ed

/* Forward declaration */
int call_weak_fn(int ctx);
void RTTIBase__destructor(struct RTTIBase *this);

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
extern int puts(const char *__s);

// Function: <EXTERNAL>::strlen @ 0x100d90
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void *__cxa_allocate_exception(size_t size)
{
 return (void*)0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
int __libc_start_main(
    int (*main)(int, char **, char **),
    int argc,
    char **ubp_av,
    void (*init)(void),
    void (*fini)(void),
    void (*rtld_fini)(void),
    void *stack_end)
{
  (*main)(argc, ubp_av, NULL);
  abort();
  return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void operator_delete(void *param_1)
{
 if (param_1 != NULL) {
   free(param_1);
 }
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(void *src_obj, void *src_type, void *dst_type, long src2dst_offset)
{
 return (void*)0;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void std_ios_base_Init_Init(struct std_ios_base_Init *this)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
extern void abort(void) __attribute__((noreturn));

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
int __gxx_personality_v0(int version, int actions, long long exceptionClass, void *exceptionObject, void *context)
{
 return -5;  // _URC_CONTINUE_UNWIND
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void *exception_object)
{
 abort();  // Terminate on unwind resume
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x100ea0
extern int printf(char *__format,...);

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((struct std_ios_base_Init *)&std_ioinit);
 __cxa_atexit((void(*)(void*))std_ios_base_Init_Init,&std_ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 ((void (*)(int (*)(), int, char **, int (*)(), int (*)(), void *))__libc_start_main)((int (*)())main,(int)param_9,(char **)&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x100f34
int call_weak_fn(int ctx)
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
 undefined7 uStack_2c = {0};
 char uStack_25 = 0;
 undefined7 uStack_24 = {0};
 unsigned long long uStack_1d = 0;
 char local_15 = 0;
 local_15 = 0;
 local_38 = 10;
 local_34 = 0x74736554;
 uStack_1d = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(struct Base *param_1,int param_2)
{
 void *vptr = *(void **)param_1;
 void (**vtable)(struct Base *, int) = (void (**)(struct Base *, int))vptr;
 (*vtable)(param_1, param_2);
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

// Function: test_cpp_smart_ptr @ 0x1011bc
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011c4
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
  operator_delete(puVar1);
 RTTIBase__destructor((struct RTTIBase*)plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101284
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c = {0};
 char uStack_45 = 0;
 undefined7 uStack_44 = {0};
 unsigned long long uStack_3d = 0;
 char local_35 = 0;
 puts(DAT_00101734);
 local_58 = 10;
 local_54 = 0x74736554;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf(DAT_001015dd,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_001015fb,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101617,0x2a);
 printf(DAT_00101633,0x47);
 printf(DAT_0010164f,0x28a);
 printf(DAT_0010166c,0x16);
 printf(DAT_00101688,0x27);
 printf(DAT_001016a4,0x10);
 printf(DAT_001016c0,0x55);
 test_cpp_exception();
 printf(DAT_001016dc,0x0);
 printf(DAT_001016f9,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
  operator_delete(puVar4);
 RTTIBase__destructor((struct RTTIBase*)plVar5);
 iVar1 = printf(DAT_00101716,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x101458
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101470
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10147c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101488
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x10149c
void Container_int__Container_int_(struct Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1014a4
void Container_int__push_int_(struct Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1014c0
unsigned int Container_int__get_int_(struct Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1014e0
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1014e8
void Container_double__Container_double_(struct Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1014f0
void Container_double__push_double_(struct Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x10150c
unsigned long long Container_double__get_double_(struct Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101528
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101530
void RTTIDerivedA__destructor(struct RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101534
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10153c
void RTTIBase__destructor(struct RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101540
void RTTIDerivedB__destructor(struct RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101544
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
 return;
}

