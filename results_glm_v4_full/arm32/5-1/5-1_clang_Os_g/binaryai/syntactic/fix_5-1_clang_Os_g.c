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

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declarations */
void call_weak_fn(void);
unsigned int test_cpp_exception(void);
int test_cpp_rtti(void);
int main(int argc, char **argv);

// Decompiled by BinaryAI
// SHA256: b5e26cc077e0fa4cfa29f586c352e3f58e7d17e83d547fb7d554567e0e5829cc

// Function: _init @ 0x10848
void _init(void)
{
 call_weak_fn();
}

/* External declarations */
/* C++ operator new/delete - use mangled names for C compatibility */
extern void *_Znwj(size_t size);  /* operator new(unsigned int) */
extern void _ZdlPv(void *ptr);   /* operator delete(void*) */
extern void __cxa_begin_catch(void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void (*)(void *));
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_end_cleanup(void);
extern void *__dynamic_cast(void *, void *, void *, int);
extern void __cxa_finalize(void *);
extern int __gxx_personality_v0(int, int, int, void *);
extern int __aeabi_dcmpgt(double, double);
extern void __libc_start_main(int (*)(int, char **), int, char **, void *, void *, void *);
extern int printf(const char *__format, ...);
extern int puts(const char *__s);
extern void abort(void);

/* Missing types */
typedef struct Init {
    int dummy;
} Init;

// Function: <EXTERNAL>::operator.new @ 0x10868
void *operator_new_wrapper(size_t param_1)
{
 void *pvVar1;
 pvVar1 = _Znwj(param_1);
 return pvVar1;
}



// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception_wrapper(size_t param_1)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(param_1);
 return pvVar1;
}





/* C++ atexit function declaration - proper signature */
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dso_handle = NULL;

/* Global variables */
Init std___ioinit;

/* Missing global variables */
char completed_0 = 0;
void __gmon_start__(void) __attribute__((weak));

/* Data references */
char DAT_00011294[1] = {0};
char DAT_0001113d[1] = {0};
char DAT_0001115b[1] = {0};
char DAT_00011177[1] = {0};
char DAT_00011193[1] = {0};
char DAT_000111af[1] = {0};
char DAT_000111cc[1] = {0};
char DAT_000111e8[1] = {0};
char DAT_00011204[1] = {0};
char DAT_00011220[1] = {0};
char DAT_0001123c[1] = {0};
char DAT_00011259[1] = {0};
char DAT_00011276[1] = {0};

/* Forward declarations for vtables */
extern void *RTTIBase_vtable[4];
extern void *RTTIDerivedA_vtable[4];
extern void *RTTIDerivedB_vtable[4];

/* Forward declarations for virtual functions */
void RTTIBase__destructor(RTTIBase *this);
void RTTIDerivedA__destructor(RTTIDerivedA *this);
unsigned int RTTIDerivedA__getType(void);
void RTTIDerivedB__destructor(RTTIDerivedB *this);
unsigned int RTTIDerivedB__getType(void);

void *PTR__RTTIBase_00021ed8 = RTTIBase_vtable;
void *PTR__RTTIBase_00021eec = RTTIDerivedA_vtable;

/* C++ class stubs */
typedef struct Base Base;
struct Base {
    void **vtable;  /* vtable pointer for virtual functions */
};

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;
int LifecycleClass_instance_count = 0;

typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Forward declaration for type_info */
struct type_info;

/* Virtual function table for type_info */
typedef struct type_info_vtable {
    void (*destructor)(struct type_info *);
    const char *(*name_func)(struct type_info *);
    int (*before_func)(struct type_info *, struct type_info *);
} type_info_vtable;

/* C++ type_info structure - vtable pointer is first member for C++ ABI compatibility */
struct type_info {
    void *vtable;  /* vtable pointer - MUST be first for C++ RTTI */
    const char *name;  /* type name string */
};

/* Use the typedef for convenience */
typedef struct type_info type_info;

/* Global vtable for type_info - forward declaration */
extern type_info_vtable type_info_vtable_data;

/* Virtual function implementations */
void type_info_destructor(type_info *this) { (void)this; }
const char *type_info_name(type_info *this) { return this->name; }
int type_info_before(type_info *this, type_info *other) { 
    return strcmp(this->name, other->name) < 0; 
}

/* Global vtable for type_info definition */
type_info_vtable type_info_vtable_data = {
    type_info_destructor,
    type_info_name,
    type_info_before
};



/* Vtables for RTTI classes - properly initialized */
void *RTTIBase_vtable[4] = {
    (void *)RTTIBase__destructor,
    NULL,
    NULL,
    NULL
};

void *RTTIDerivedA_vtable[4] = {
    (void *)RTTIDerivedA__destructor,
    (void *)RTTIDerivedA__getType,
    NULL,
    NULL
};

void *RTTIDerivedB_vtable[4] = {
    (void *)RTTIDerivedB__destructor,
    (void *)RTTIDerivedB__getType,
    NULL,
    NULL
};

/* RTTI type_info references - properly initialized */
type_info int_typeinfo = {(void *)&type_info_vtable_data, "int"};
type_info RTTIBase_typeinfo = {(void *)&type_info_vtable_data, "Base"};
type_info RTTIDerivedA_typeinfo = {(void *)&type_info_vtable_data, "DerivedA"};
type_info RTTIDerivedB_typeinfo = {(void *)&type_info_vtable_data, "DerivedB"};

/* Type accessor macros */
#define int_typeinfo_accessor (&int_typeinfo)
#define RTTIBase_typeinfo_accessor (&RTTIBase_typeinfo)
#define RTTIDerivedA_typeinfo_accessor (&RTTIDerivedA_typeinfo)
#define RTTIDerivedB_typeinfo_accessor (&RTTIDerivedB_typeinfo)

/* Container types */
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Container_int_ structure - holds up to 10 ints with size at offset 0x28 */
struct Container_int_ {
    int data[10];
    int size;
    int padding[7];  // Padding to reach offset 0x28
};

/* Container_double_ structure - holds up to 10 doubles with size at offset 0x50 */
struct Container_double_ {
    double data[10];
    int size;
    int padding[15];  // Padding to reach offset 0x50
};

/* Macro for concatenation */
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned long long)(lo))



// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
void __libc_start_main_wrapper(void)
{
 __libc_start_main(main, 0, NULL, NULL, NULL, NULL);
 return;
}

// Function: <EXTERNAL>::abort @ 0x108b0
void abort_wrapper(void)
{
 abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete_wrapper(void *param_1)
{
 _ZdlPv(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup_wrapper(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast_wrapper(void *param_1, void *param_2, void *param_3, int param_4)
{
 void *pvVar1;
 pvVar1 = __dynamic_cast(param_1, param_2, param_3, param_4);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen_wrapper(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
void std_ios_base_Init_Init(Init *this)
{
 /* Init constructor stub */
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
int __gxx_personality_v0_wrapper(int param_1, int param_2, int param_3, void *param_4)
{
 return __gxx_personality_v0(param_1, param_2, param_3, param_4);
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw_wrapper(void *param_1, void *param_2, void *param_3)
{
 __cxa_throw(param_1, param_2, param_3);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
int __aeabi_dcmpgt_wrapper(double param_1, double param_2)
{
 return __aeabi_dcmpgt(param_1, param_2);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize_wrapper(void *param_1)
{
 __cxa_finalize(param_1);
 return;
}

/* Destructor wrapper for Init type */
void std_ios_base_Init__destructor(void *arg) {
    Init *init = (Init *)arg;
    if (init) {
        /* Init destructor stub */
    }
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit(std_ios_base_Init__destructor,&std___ioinit,__dso_handle);
 return;
}

// Function: _start @ 0x10994
void _start(void)
{
 __libc_start_main(main, 0, NULL, NULL, NULL, NULL);
 abort();
}

// Function: call_weak_fn @ 0x109d8
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x109fc
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10a40
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10a90
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10afc
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10b64
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
void call_virtual_func(Base *param_1,int param_2)
{
 void (**vtable)(Base *);
 vtable = (void (**)(Base *))param_1->vtable;
 (*vtable)(param_1);
 return;
}

// Function: test_cpp_virtual_func @ 0x10b8c
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10b94
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10b9c
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10ba8
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10bb0
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10bb8
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10bc0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x10bc8
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,(void (*)(void *))0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x10c98
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10ca4
int test_cpp_rtti(void)
{
 void **puVar1;
 void **piVar2;
 void *iVar3;
 void *iVar4;
 int iVar5;
 puVar1 = (void **)_Znwj(4);
 *puVar1 = PTR__RTTIBase_00021ed8;
 piVar2 = (void **)_Znwj(4);
 *piVar2 = PTR__RTTIBase_00021eec;
 iVar3 = __dynamic_cast(puVar1,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar4 = __dynamic_cast(piVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 _ZdlPv(puVar1);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 _ZdlPv(piVar2);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10d70
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 puts(&DAT_00011294);
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 printf(&DAT_0001113d,sVar1 + 0x125c);
 printf(&DAT_0001115b,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_00011177,0x2a);
 printf(&DAT_00011193,0x47);
 printf(&DAT_000111af,0x28a);
 printf(&DAT_000111cc,0x16);
 printf(&DAT_000111e8,0x27);
 printf(&DAT_00011204,0x10);
 printf(&DAT_00011220,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0001123c,uVar2);
 printf(&DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_00011276,uVar2);
 return;
}

// Function: main @ 0x10ef4
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x10f08
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10f14
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x10f48
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x10f5c
void Container_int__Container(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x10f68
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x10f80
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < this->size) {
 uVar1 = (unsigned int)this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x10fa0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return (unsigned int)this->size;
}

// Function: Container<double>::Container @ 0x10fa8
void Container_double__Container(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x10fb4
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar2;
 iVar2 = this->size;
 if (iVar2 > 9) {
 return;
 }
 this->data[iVar2] = param_1;
 this->size = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x10fd8
double Container_double__get(Container_double_ *this,int param_1)
{
 if (-1 < param_1) {
 if (param_1 < this->size) {
 return this->data[param_1];
 }
 }
 return 0.0;
}

// Function: Container<double>::getSize @ 0x11004
unsigned int Container_double__getSize(Container_double_ *this)
{
 return (unsigned int)this->size;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1100c
void RTTIDerivedA__destructor(RTTIDerivedA *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11010
unsigned int RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11018
void RTTIBase__destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1101c
void RTTIDerivedB__destructor(RTTIDerivedB *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x11020
unsigned int RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x11028
void _fini(void)
{
 return;
}

