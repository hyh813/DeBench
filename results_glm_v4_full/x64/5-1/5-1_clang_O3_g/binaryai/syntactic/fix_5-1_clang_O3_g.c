#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned int uint;
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

#include <unistd.h>

/* Forward declarations for external functions */
void __gmon_start__(void);
void _fini(void);
int main(int argc, char **argv);
void test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1, int param_2);
unsigned long long test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_diamond_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
unsigned long long test_cpp_template_func(void);
unsigned long long test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
unsigned int test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
long test_cpp_rtti(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void *custom_operator_new(size_t param_1);
void custom_operator_delete(void *param_1);
void std_ios_base_Init_Init(void *this);

/* __libc_start_main is declared in system headers */

/* Global variables */
char completed_0 = 0;
void *__dso_handle = 0;
char std__ioinit = 0;

/* Data references */
const char DAT_001021d4[1] = "";
const char DAT_0010207d[1] = "";
const char DAT_0010209b[1] = "";
const char DAT_001020b7[1] = "";
const char DAT_001020d3[1] = "";
const char DAT_001020ef[1] = "";
const char DAT_0010210c[1] = "";
const char DAT_00102128[1] = "";
const char DAT_00102144[1] = "";
const char DAT_00102160[1] = "";
const char DAT_0010217c[1] = "";
const char DAT_00102199[1] = "";
const char DAT_001021b6[1] = "";

/* Typeinfo references */
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;

/* Class definitions */
typedef struct Init Init;
typedef struct Base Base;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Structure definitions */
struct Base {
    void **vtable;
};

struct Init {
    int dummy;
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

struct Container_int_ {
    int data[10];
    unsigned int size;
    char padding[40];
};

struct Container_double_ {
    double data[10];
    unsigned int size;
    char padding[80];
};

/* LifecycleClass */
typedef struct {
    int instance_count;
} LifecycleClass;

LifecycleClass LifecycleClass_instance = {0};

/* Constructor and destructor declarations for RTTI classes */
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);

/* C-compatible replacements for C++ namespace std */
struct std_ios_base_Init {
    /* Placeholder for C++ std::ios_base::Init */
};

/* RTTI typeinfo structures - simplified for compilation */
typedef struct {
    const char *name;
    void *vtable;
} type_info;

/* Typeinfo instances */
type_info RTTIBase_TypeInfo = {"RTTIBase", 0};
type_info RTTIDerivedA_TypeInfo = {"RTTIDerivedA", 0};
type_info RTTIDerivedB_TypeInfo = {"RTTIDerivedB", 0};
type_info int_TypeInfo = {"int", 0};

/* Standard C library functions - already in included headers */

/* C++ ABI functions */
extern void __cxa_begin_catch(void);
extern void *__cxa_allocate_exception(size_t size);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(void *ptr, void *from_type, void *to_type, int flags);
extern void __cxa_rethrow(void);
extern void __cxa_end_catch(void);
extern void __cxa_throw(void *obj, void *tinfo, void *dest);
extern void _Unwind_Resume(void);
extern void __cxa_finalize(void *dso_handle);

/* Global typeinfo symbols for RTTI */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

// Decompiled by BinaryAI
// SHA256: d9e7362b0248b250abdba69a9c576cf04e927c19a7172ae75f5a280e4eb7e8d7

// Function: _init @ 0x101000
void _init(void *ctx)
{
 __gmon_start__();
 return;
}

// Function: FUN_00101001020 @ 0x101020
void FUN_00101020(void)
{
 /* Original code tried to call null function pointer - stubbed for safety */
 return;
}











// Function: <EXTERNAL>::operator.delete @ 0x101080
void custom_operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101090
void *custom_operator_new(size_t param_1)
{
 return malloc(param_1);
}





// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010c0
void std_ios_base_Init_Init(void *this)
{
 (void)this;
 return;
}











// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std__ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101150
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 /* In x86_64 System V ABI: rdi=argc, rsi=argv, rdx=envp, rcx=auxv */
 __libc_start_main(main,(int)param_1,(char **)param_2,(void (*)(void))_init,(void (*)(void))_fini,NULL,(void*)auStack_8);
 /* __libc_start_main calls exit(), so code below is unreachable */
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
 const char test_str[] = "Test";
 sVar1 = strlen(test_str);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101280
int test_cpp_constructor(void)
{
 return LifecycleClass_instance.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
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
 __cxa_throw(puVar1,&int_TypeInfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x1013e0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013f0
long test_cpp_rtti(void)
{
 long iVar1;
 void *puVar2;
 void *plVar3;
 void *lVar4;
 long iVar5;
 puVar2 = custom_operator_new(8);
 *(void **)puVar2 = PTR__RTTIBase_00103d78;
 plVar3 = custom_operator_new(8);
 *(void **)plVar3 = PTR__RTTIBase_00103da0;
 lVar4 = __dynamic_cast(puVar2,&RTTIBase_TypeInfo,&RTTIDerivedA_TypeInfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,&RTTIBase_TypeInfo,&RTTIDerivedB_TypeInfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 custom_operator_delete(puVar2);
 RTTIDerivedB__RTTIDerivedB((RTTIDerivedB *)plVar3);
 custom_operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 int iVar7;
 const char test_str[] = "Test";
 puts(DAT_001021d4);
 sVar3 = strlen(test_str);
 printf(DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(DAT_0010209b,(unsigned long)(LifecycleClass_instance.instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)uVar1);
 printf(DAT_00102199,0x2bf);
 puVar4 = (unsigned long long *)custom_operator_new(8);
 *puVar4 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar5 = (long *)custom_operator_new(8);
 *plVar5 = (long)PTR__RTTIBase_00103da0;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase_TypeInfo,&RTTIDerivedA_TypeInfo,0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase_TypeInfo,&RTTIDerivedB_TypeInfo,0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 /* Call destructor before freeing */
 if (plVar5) {
 RTTIDerivedB_destructor((RTTIDerivedB *)plVar5);
 }
 custom_operator_delete(puVar4);
 custom_operator_delete(plVar5);
 printf(DAT_001021b6,(unsigned long)(iVar7 + 0xe));
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

// Function: Container<int>::Container @ 0x1016c0
void Container_int__Container(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x1016d0
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1016f0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x101710
unsigned int Container_int__getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Container @ 0x101720
void Container_double__Container(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x101730
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101750
double Container_double__get(Container_double_ *this,int param_1)
{
 double uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101770
unsigned int Container_double__getSize(Container_double_ *this)
{
 return this->size;
}

// Function: RTTIDerivedA::RTTIDerivedA (constructor stub)
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 if (this) {
     /* Initialize vtable pointer */
     *(void **)this = PTR__RTTIBase_00103d78;
 }
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101780
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 /* Destructor - freeing memory is handled by delete operator */
 return;
}

// Function: RTTIDerivedA::getType @ 0x101790
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1017a0
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::RTTIDerivedB (constructor stub)
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 if (this) {
     /* Initialize vtable pointer */
     *(void **)this = PTR__RTTIBase_00103da0;
 }
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1017b0
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 /* Destructor - freeing memory is handled by delete operator */
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

