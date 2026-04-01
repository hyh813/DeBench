#include <stdlib.h>

#include <stdint.h>
#include <stddef.h>

/* Additional type definitions for decompiled code */
typedef unsigned long long undefined7;

/* Global variables */
char completed_0 = 0;
void *__dso_handle = 0;
char std___ioinit = 0;
int LifecycleClass_instance_count = 0;

/* Forward declarations */
struct Base;
typedef struct Base Base;
struct Init;
typedef struct Init Init;
struct LifecycleClass;
typedef struct LifecycleClass LifecycleClass;
struct RTTIBase;
typedef struct RTTIBase RTTIBase;
struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;
struct Container_int_;
typedef struct Container_int_ Container_int_;
struct Container_double_;
typedef struct Container_double_ Container_double_;

/* Function forward declarations */
void call_weak_fn(void);
int main(int argc, char **argv, char **envp);
void _init(void);
void _fini(void);
void _start(unsigned long long param_1);
void _GLOBAL__sub_I_5_1_cpp(void);
void __do_global_dtors_aux(void);
void FUN_00100d60(void);
void FUN_00100fbc(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1,int param_2);
unsigned long long test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_diamond_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
unsigned long long test_cpp_template_func(void);
unsigned long long test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
unsigned long long test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
int test_cpp_oo_features(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int_Container(Container_int_ *this);
void Container_int_push(Container_int_ *this,int param_1);
unsigned int Container_int_get(Container_int_ *this,int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Container(Container_double_ *this);
void Container_double_push(Container_double_ *this,double param_1);
unsigned long long Container_double_get(Container_double_ *this,int param_1);
unsigned int Container_double_getSize(Container_double_ *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
void RTTIBase__RTTIBase(RTTIBase *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
unsigned long long RTTIDerivedB_getType(void);


/* External data references - definitions */
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *RTTIBase_typeinfo_ref = 0;
void *RTTIDerivedA_typeinfo_ref = 0;
void *RTTIDerivedB_typeinfo_ref = 0;
void *_ZTVN10__cxxabiv117__class_type_infoE = 0;
void *_ZTVN10__cxxabiv120__si_class_type_infoE = 0;
void *_ZTVN10__cxxabiv121__vmi_class_type_infoE = 0;
void *_ZTIi = 0;
void *_ZTId = 0;
char DAT_00101728 = 0;
char DAT_001015d1 = 0;
char DAT_001015ef = 0;
char DAT_0010160b = 0;
char DAT_00101627 = 0;
char DAT_00101643 = 0;
char DAT_00101660 = 0;
char DAT_0010167c = 0;
char DAT_00101698 = 0;
char DAT_001016b4 = 0;
char DAT_001016d0 = 0;
char DAT_001016ed = 0;
char DAT_0010170a = 0;

/* Structure definitions */
struct Base {
 void *vtable;
};

struct Init {
 int dummy;
};

void Init_Init(Init *this) {
 this->dummy = 0;
 return;
}

void Init_Init_wrapper(void *arg) {
 (void)arg;
 Init_Init((Init *)&std___ioinit);
}

struct LifecycleClass {
 int instance_count;
};

struct RTTIBase {
 void *vtable;
};

struct RTTIDerivedA {
 void *vtable;
};

struct RTTIDerivedB {
 void *vtable;
};

struct Container_int_ {
 unsigned char data[0x28];
 unsigned int size;
};

struct Container_double_ {
 unsigned char data[0x50];
 unsigned int size;
};

/* External function declarations */
extern int puts(const char *__s);
extern size_t strlen(const char *__s);
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int printf(const char *__format, ...);
extern void abort(void);

/* C++ runtime function implementations */
void *__cxa_begin_catch(void *exc) {
 return exc;
}

void *__cxa_allocate_exception(unsigned long size) {
 return malloc(size);
}

void __cxa_finalize(void *dso_handle) {
 (void)dso_handle;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
 (void)func; (void)arg; (void)dso_handle;
 return 0;
}

void __cxa_rethrow(void) {
 abort();
}

void __cxa_throw(void *exc, void *tinfo, void *dest) {
 (void)exc; (void)tinfo; (void)dest;
 abort();
}

void __gmon_start__(void) {
}

void _Unwind_Resume(void) {
}

void __gxx_personality_v0(void) {
}

void __cxa_end_catch(void) {
}

/* C++ runtime function wrappers */
void operator_delete(void *ptr) {
 free(ptr);
}

void *operator_new(unsigned long size) {
 return malloc(size);
}

void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) {
 return obj;
}


// Decompiled by BinaryAI
// SHA256: 329c6f885953c0704914fb7ba3807a228163f40c7059363d95498127463c12de

// Function: _init @ 0x100d48
void _init(void)
{
 call_weak_fn();
 return;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}



// Function: _GLOBAL__sub_I_5_1_cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 Init_Init((Init *)&std___ioinit);
 __cxa_atexit(Init_Init_wrapper,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 __libc_start_main(main,0,(char **)0,_init,_fini,(void *)0,(void *)param_1);
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
 ((void (*)(Base *, int))**(void ***)param_1)(param_1,param_2);
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
unsigned long long test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&RTTIBase_typeinfo,0);
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
 *puVar1 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo_ref,RTTIDerivedA_typeinfo_ref,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo_ref,RTTIDerivedB_typeinfo_ref,0);
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
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts(&DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf(&DAT_001015d1,(unsigned long)((int)sVar2 + 0x125c));
 printf(&DAT_001015ef,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(&DAT_0010160b,0x2a);
 printf(&DAT_00101627,0x47);
 printf(&DAT_00101643,0x28a);
 printf(&DAT_00101660,0x16);
 printf(&DAT_0010167c,0x27);
 printf(&DAT_00101698,0x10);
 printf(&DAT_001016b4,0x55);
 uVar3 = test_cpp_exception();
 printf(&DAT_001016d0,uVar3 & 0xffffffff);
 printf(&DAT_001016ed,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,RTTIBase_typeinfo_ref,RTTIDerivedA_typeinfo_ref,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,RTTIBase_typeinfo_ref,RTTIDerivedB_typeinfo_ref,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
operator_delete(puVar4);
operator_delete(plVar5);
iVar1 = printf(&DAT_0010170a,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x10144c
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101464
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x101470
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x10147c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x101490
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x101498
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1014b4
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(unsigned int)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x1014d4
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Container @ 0x1014dc
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x1014e4
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double_get @ 0x101500
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x10151c
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA destructor @ 0x101524
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101528
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase destructor @ 0x101530
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB destructor @ 0x101534
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x101538
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x101540
void _fini(void)
{
 return;
}

