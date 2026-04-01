#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

/* Basic type_info definition for C++ RTTI support */
typedef struct type_info {
    const char *_name;
    void *vptr;  /* virtual table pointer for C++ RTTI */
} type_info;

/* Auto-injected type definitions by preprocessor */
typedef unsigned int uint;
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif

// Decompiled by BinaryAI
// SHA256: 5d02349844d25a496f5e07dea4ea0b2c41b31abb19c209e1a5560e148b73bbd3

/* Forward declarations for missing types */
struct Init { void **vtable; };
struct Base { void **vtable; type_info *type; };
struct RTTIBase { void **vtable; type_info *type; };
struct RTTIDerivedA { void **vtable; type_info *type; };
struct RTTIDerivedB { void **vtable; type_info *type; };
struct Container_int_ { int data[10]; unsigned int size; unsigned char padding[32]; };
struct Container_double_ { double data[10]; unsigned int size; unsigned char padding[24]; };
struct LifecycleClass { void **vtable; type_info *type; };

/* External function declarations */
int __gmon_start__(void);
void __libc_start_main(int (*)(int, char **), int, char **, 
                        void (*)(), void (*)(), void (*)(), void *);
void Init(struct Init *this);
void std__ios_base__Init__Init(struct Init *this);
void std__ios_base__Init__Init_(struct Init *this);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __cxa_begin_catch(void);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, void *type_info, void *dest);
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int hint);
void __cxa_rethrow(void);
void __cxa_end_catch(void);
void _Unwind_Resume(void);
void __cxa_finalize(void *dso_handle);
void cpp_operator_delete(void *ptr);
void *cpp_operator_new(unsigned long size);

/* Global variables */
/* Definitions for external variables */

/* Implementations for missing C++ runtime functions */
void std__ios_base__Init__Init(struct Init *this)
{
    /* Stub implementation for std::ios_base::Init constructor */
    (void)this;
}

void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int hint)
{
    /* Stub implementation for dynamic_cast */
    (void)src_type;
    (void)dst_type;
    (void)hint;
    return obj;
}

void __cxa_begin_catch(void)
{
    /* Stub for exception handling */
}

void *__cxa_allocate_exception(size_t size)
{
    /* Allocate exception using malloc */
    return malloc(size);
}

void __cxa_throw(void *thrown_exception, void *type_info, void *dest)
{
    /* Stub for throw - in real C++ this would unwind */
    (void)thrown_exception;
    (void)type_info;
    (void)dest;
}

void __cxa_rethrow(void)
{
    /* Stub for rethrow */
}

void __cxa_end_catch(void)
{
    /* Stub for end catch */
}

void _Unwind_Resume(void)
{
    /* Stub for unwind resume */
}

void __cxa_finalize(void *dso_handle)
{
    /* Stub for finalize */
    (void)dso_handle;
}

void cpp_operator_delete(void *ptr)
{
    /* Implementation of delete operator using free */
    free(ptr);
}

void *cpp_operator_new(unsigned long size)
{
    /* Implementation of new operator using malloc */
    return malloc(size);
}

int __gmon_start__(void)
{
    /* Stub for gmon profiling */
    return 0;
}

/* Definitions for external variables */
char completed_0 = 0;
struct Init std___ioinit = {NULL};
void *__dso_handle = NULL;
const char DAT_001021d4[] = "Testing C++ OO Features:";
const char DAT_0010207d[] = "test_cpp_member_func: %lu\n";
const char DAT_0010209b[] = "test_cpp_constructor: %lu\n";
const char DAT_001020b7[] = "test_cpp_virtual_func: %lu\n";
const char DAT_001020d3[] = "test_cpp_multiple_inheritance: %lu\n";
const char DAT_001020ef[] = "test_cpp_diamond_inheritance: %lu\n";
const char DAT_0010210c[] = "test_cpp_operator_overload: %lu\n";
const char DAT_00102128[] = "test_cpp_template_func: %lu\n";
const char DAT_00102144[] = "test_cpp_template_class: %lu\n";
const char DAT_00102160[] = "test_cpp_lambda: %lu\n";
const char DAT_0010217c[] = "test_cpp_exception: %lu\n";
const char DAT_00102199[] = "test_cpp_smart_ptr: %lu\n";
const char DAT_001021b6[] = "test_cpp_rtti: %lu\n";
void **PTR__RTTIBase_00103d78 = NULL;
void **PTR__RTTIBase_00103da0 = NULL;
struct type_info int__typeinfo = {"int"};
struct type_info RTTIBase__typeinfo = {"RTTIBase"};
struct type_info RTTIDerivedA__typeinfo = {"RTTIDerivedA"};
struct type_info RTTIDerivedB__typeinfo = {"RTTIDerivedB"};
int LifecycleClass__instance_count = 0;

/* Class member function declarations */
unsigned long long RTTIDerivedA__getType(void);
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this);
void RTTIBase__RTTIBase(struct RTTIBase *this);
unsigned long long RTTIDerivedB__getType(void);
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this);

/* Function declarations */
int main(int argc, char **argv);

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}



















// Function: std__ios_base__Init__Init_ @ 0x1010c0
void std__ios_base__Init__Init_(struct Init *this)
{
 std__ios_base__Init__Init(this);
 return;
}











// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std__ios_base__Init__Init_((struct Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std__ios_base__Init__Init_,(void *)&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101150
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,auStack_8,0,0,param_1,auStack_8);
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
 uint8_t uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 uStack_14 = 0;
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
 return LifecycleClass__instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(struct Base *param_1,int param_2)
{
 void (*vfunc)(void);
 vfunc = (void (*)(void))param_1->vtable[0];
 if (vfunc != NULL) {
 vfunc();
 }
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
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int__typeinfo,NULL);
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
 long *plVar3;
 long lVar4;
 int iVar5;
 puVar2 = (unsigned long long *)cpp_operator_new(8);
 *puVar2 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar3 = (long *)cpp_operator_new(8);
 *plVar3 = (long)PTR__RTTIBase_00103da0;
 lVar4 = (long)__dynamic_cast((void *)puVar2,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedA__typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = (long)__dynamic_cast((void *)plVar3,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedB__typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 cpp_operator_delete(puVar2);
 cpp_operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 uint8_t uStack_3c[3];
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(&DAT_001021d4);
 memset(&uStack_3c, 0, 3);
 uStack_39 = 0;
 uStack_35 = 0;
 uStack_31 = 0;
 local_4c = 0x74736554;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 local_2d = 0;
 uStack_3c[0] = 0;
 sVar3 = strlen((char *)&local_4c);
 printf(&DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(&DAT_0010209b,(unsigned long)(LifecycleClass__instance_count * 0x3e9 + 0x15));
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
 puVar4 = (unsigned long long *)cpp_operator_new(8);
 *puVar4 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar5 = (long *)cpp_operator_new(8);
 *plVar5 = (long)PTR__RTTIBase_00103da0;
 lVar6 = (long)__dynamic_cast((void *)puVar4,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedA__typeinfo,0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = (long)__dynamic_cast((void *)plVar5,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedB__typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 cpp_operator_delete(puVar4);
 cpp_operator_delete(plVar5);
 printf(&DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(int argc, char **argv)
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

// Function: Container_int__Container @ 0x1016c0
void Container_int__Container(struct Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container_int__push @ 0x1016d0
void Container_int__push(struct Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x1016f0
unsigned int Container_int__get(struct Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 >= 0 && (unsigned int)param_1 < this->size) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x101710
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return this->size;
}

// Function: Container_double__Container @ 0x101720
void Container_double__Container(struct Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container_double__push @ 0x101730
void Container_double__push(struct Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x101750
double Container_double__get(struct Container_double_ *this,int param_1)
{
 if (param_1 >= 0 && (unsigned int)param_1 < this->size) {
 return this->data[param_1];
 }
 return 0.0;
}

// Function: Container_double__getSize @ 0x101770
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return this->size;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x101780
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this)
{
 return;
}

// Function: RTTIDerivedA::getType @ 0x101790
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase__RTTIBase @ 0x1017a0
void RTTIBase__RTTIBase(struct RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x1017b0
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedB::getType @ 0x1017c0
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x1017c8
void _fini(void)
{
 return;
}

