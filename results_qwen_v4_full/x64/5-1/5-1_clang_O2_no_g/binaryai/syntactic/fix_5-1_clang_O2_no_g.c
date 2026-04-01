#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdbool.h>

// Decompiled by BinaryAI
// SHA256: 5d02349844d25a496f5e07dea4ea0b2c41b31abb19c209e1a5560e148b73bbd3

// Global variables
int completed_0 = 0;
void *__dso_handle = 0;
int std___ioinit = 0;
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

// Dummy typeinfo structures for C++ RTTI
struct type_info { void *vtable; const char *name; };
struct type_info int_typeinfo_struct = { 0, "int" };
void *int_typeinfo = &int_typeinfo_struct;

// LifecycleClass definition
typedef struct LifecycleClass { int instance_count; } LifecycleClass;
char DAT_001021d4[] = "Testing C++ OO features";
char DAT_0010207d[] = "test_cpp_member_func: %lu\n";
char DAT_0010209b[] = "test_cpp_constructor: %lu\n";
char DAT_001020b7[] = "test_cpp_virtual_func: %lu\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance: %lu\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance: %lu\n";
char DAT_0010210c[] = "test_cpp_operator_overload: %lu\n";
char DAT_00102128[] = "test_cpp_template_func: %lu\n";
char DAT_00102144[] = "test_cpp_template_class: %lu\n";
char DAT_00102160[] = "test_cpp_lambda: %lu\n";
char DAT_0010217c[] = "test_cpp_exception: %lu\n";
char DAT_00102199[] = "test_cpp_smart_ptr: %lu\n";
char DAT_001021b6[] = "test_cpp_rtti: %lu\n";

// Type definitions
typedef struct { unsigned char data[3]; } undefined3;
typedef struct Init { int dummy; } Init;
typedef struct Base { void **vtable; } Base;
typedef struct Container_int_ { int data[10]; int size; } Container_int_;
typedef struct Container_double_ { double data[10]; int size; } Container_double_;
typedef struct RTTIBase { void **vtable; } RTTIBase;
typedef struct RTTIDerivedA { void **vtable; } RTTIDerivedA;
typedef struct RTTIDerivedB { void **vtable; } RTTIDerivedB;

// External function declarations
extern int __gmon_start__(void);
extern int __libc_start_main(int (*main)(void), int argc, void **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void __cxa_begin_catch(void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
extern void __cxa_throw(void *exc, void *tinfo, void (*dest)(void *));
extern int fprintf(void *stream, const char *format, ...);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_finalize(void *);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_flags);
extern void _ZdlPv(void *ptr);
extern void *memset(void *s, int c, size_t n);

// Additional standard library function declarations
extern void *malloc(size_t size);
extern void free(void *ptr);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern size_t strlen(const char *s);

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_001020 @ 0x101020
void FUN_001020(void)
{
 return;
}

// Forward declaration for main
extern int main(void);

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 return;
}

// Function: _start @ 0x101150
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main((int (*)(void))main,param_2,(void **)auStack_8,(void (*)(void))0,(void (*)(void))0,(void (*)(void))0,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x101180
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011b0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011f0
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x101240
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3 uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 memset(&uStack_14, 0, sizeof(uStack_14));
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101280
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1,int param_2)
{
 void **vtable = param_1->vtable;
 ((void (*)(Base *))vtable[param_2])(param_1);
 return;
}

// Function: test_cpp_virtual_func @ 0x1012b0
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012c0
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012d0
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012e0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1012f0
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x101300
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101310
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101320
unsigned int test_cpp_exception(void)
{
 void *exc;
 exc = __cxa_allocate_exception(sizeof(int));
 *(int *)exc = 42;
 __cxa_throw(exc, int_typeinfo, (void (*)(void *))0);
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x1013e0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013f0
int test_cpp_rtti(void)
{
 int iVar1;
 unsigned long long *puVar2;
 void *plVar3;
 void *lVar4;
 int iVar5;
 puVar2 = (unsigned long long *)malloc(8);
 *puVar2 = (unsigned long long)&PTR__RTTIBase_00103d78;
 plVar3 = (void *)malloc(8);
 *(void **)plVar3 = (void *)&PTR__RTTIBase_00103da0;
 lVar4 = __dynamic_cast(puVar2,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 free(puVar2);
 free(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 void *plVar5;
 void *lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 undefined3 uStack_3c;
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(&DAT_001021d4);
 memset(&uStack_3c, 0, sizeof(uStack_3c));
 uStack_39 = 0;
 uStack_35 = 0;
 uStack_31 = 0;
 local_4c = 0x74736554;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 local_2d = 0;
 sVar3 = strlen((char *)&local_4c);
 printf(&DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(&DAT_0010209b,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(unsigned long)uVar1);
 printf(&DAT_00102199,0x2bf);
 puVar4 = (unsigned long long *)malloc(8);
 *puVar4 = (unsigned long long)&PTR__RTTIBase_00103d78;
 plVar5 = (void *)malloc(8);
 *(void **)plVar5 = (void *)&PTR__RTTIBase_00103da0;
 lVar6 = __dynamic_cast(puVar4,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = __dynamic_cast(plVar5,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 free(puVar4);
 free(plVar5);
 printf(&DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101690
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1016a0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1016b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x1016c0
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1016d0
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1016f0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x101710
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Container @ 0x101720
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x101730
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x101750
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x101770
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x101780
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101790
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x1017a0
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x1017b0
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x1017c0
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x1017c8
void _fini(void)
{
 return;
}

