#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <limits.h>

/* Define va_list if not already defined */
#ifndef va_list
typedef __builtin_va_list va_list;
#endif

/* Define uint if not already defined (for decompiled code compatibility) */
#ifndef uint
typedef unsigned int uint;
#endif

/* Ensure uint32_t is defined */
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif

/* Ensure intptr_t is defined */
#ifndef intptr_t
typedef long intptr_t;
#endif

/* Forward declarations for external functions */
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void _ZNSt8ios_base4InitC1Ev(Init *this);
void _ZNSt8ios_base4InitD1Ev(Init *this);
void *memcpy_wrapper(void *dest,const void *src,size_t n);
size_t strlen_wrapper(const char *s);
int printf_wrapper(const char *format, ...);
int puts_wrapper(const char *s);
void __x86_get_pc_thunk_di(void);
void *operator_new(size_t size);
void operator_delete(void *ptr);
void *operator_new__(size_t size);
void operator_delete__(void *ptr);
void __cxa_begin_catch(void *param_1);
void *__cxa_allocate_exception(size_t size);
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
void __libc_start_main(void);
void *__dynamic_cast(void *obj,const type_info *src_type,const type_info *dst_type,int ptr);
void __cxa_end_catch(void);
void __cxa_throw(void *thrown_exception,type_info *tinfo,void *dest);
void _Unwind_Resume(void);
void __cxa_rethrow(void);

/* Forward declarations for decompiled types */
typedef struct Base Base;
struct Base {
    void **vtable;
};

typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    char dummy;
};

typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    void **vtable;
};

typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    void **vtable;
};

typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    void **vtable;
};

typedef struct Container_int_ Container_int_;
struct Container_int_ {
    int data[10];
    unsigned int size;
};

typedef struct Container_double_ Container_double_;
struct Container_double_ {
    double data[10];
    unsigned int size;
};

/* C++ RTTI type_info structure definition */
typedef struct type_info type_info;
struct type_info {
    const char *name;
};

/* Static data references (stubs) */
extern char DAT_000121d8[];
extern char DAT_00012081[];
extern char DAT_0001209f[];
extern char DAT_000120bb[];
extern char DAT_000120d7[];
extern char DAT_000120f3[];
extern char DAT_00012110[];
extern char DAT_0001212c[];
extern char DAT_00012148[];
extern char DAT_00012164[];
extern char DAT_00012180[];
extern char DAT_0001219d[];
extern char DAT_000121ba[];
extern char DAT_000121fc[];
extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;

/* External type_info symbols for C++ RTTI */
extern type_info *int_typeinfo;
extern type_info *RTTIBase_typeinfo;
extern type_info *RTTIDerivedA_typeinfo;
extern type_info *RTTIDerivedB_typeinfo;

/* External C++ symbols */
extern void *std___ioinit;
extern void *__dso_handle;

/* C++ std namespace forward declarations */
typedef struct Init Init;
struct Init {
    char dummy;
};

// Decompiled by BinaryAI
// SHA256: f34bb694d715844a9bd099c4fe9256f69544575444bb39ee457636ccb9961990

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: __gmon_start__ @ 0x11030
void __gmon_start__(void)
{
 return;
}

// Function: frame_dummy @ 0x11040
void frame_dummy(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(size_t param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void * __cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::memcpy @ 0x11070
void * memcpy_wrapper(void *dest,const void *src,size_t n)
{
 void *pvVar1;
 pvVar1 = memcpy(dest,src,n);
 return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x11080
size_t strlen_wrapper(const char *s)
{
 size_t sVar1;
 sVar1 = strlen(s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11090
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
void *operator_new__(size_t param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x110c0
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
void *__dynamic_cast(void *obj,const type_info *src_type,const type_info *dst_type,int ptr)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
void operator_delete__(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::printf @ 0x110f0
int printf_wrapper(const char *format,...)
{
 int iVar1;
 va_list args;
 va_start(args, format);
 iVar1 = vprintf(format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x11110
int puts_wrapper(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}



// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw(void *thrown_exception,void *tinfo,void *dest)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume(void)
{
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 int unaff_EBX;
 unaff_EBX = 0;
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 unsigned int extraout_var;
 uVar1 = 0x11178;
 _ZNSt8ios_base4InitC1Ev((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void))_ZNSt8ios_base4InitD1Ev, (void *)&std___ioinit, __dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main();
 (void)param_1;
 (void)param_2;
 (void)auStack_4;
 return;
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 uint32_t uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2ddf) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d5b) != 0) {
 FUN_00011160(*(unsigned int *)(unaff_EDI + 0x2dcb));
 }
 uVar1 = *(uint32_t *)(unaff_EDI + 0x2de3);
 while (uVar1 < (uint32_t)(((unaff_EDI + 0x2bff) - (unaff_EDI + 0x2bfb)) >> 2) - 1U) {
 *(uint32_t *)(unaff_EDI + 0x2de3) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2bfb + (uVar1 + 1) * 4))();
 uVar1 = *(uint32_t *)(unaff_EDI + 0x2de3);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2ddf) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11324
int test_cpp_member_func(void)
{
 size_t sVar1;
 char local_28 [31];
 char local_9;
 memcpy_wrapper(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen_wrapper(local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11370
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 piVar1 = (int *)operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 /* LifecycleClass::instance_count = LifecycleClass::instance_count + 1; */
 /* iVar3 = LifecycleClass::instance_count + piVar1[2]; */
 operator_delete__(piVar1);
 /* LifecycleClass::instance_count = LifecycleClass::instance_count + -1; */
 /* return LifecycleClass::instance_count * 1000 + iVar3; */
 return 0;
}

// Function: call_virtual_func @ 0x113cf
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x113f4
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x113fa
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x11400
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11406
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1140c
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x11412
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11418
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1141e
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
 return 0x42;
}

// Function: test_cpp_smart_ptr @ 0x11502
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11508
int test_cpp_rtti(void)
{
 void **puVar1;
 void **piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (void **)operator_new(4);
 *puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = (void **)operator_new(4);
 *piVar2 = &PTR__RTTIBase_00013ee0;
 iVar3 = (int)(intptr_t)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = (int)(intptr_t)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 return iVar3 + 0xe;
}

// Function: test_cpp_oo_features @ 0x115c0
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char local_28 [31];
 char local_9;
 puts_wrapper(&DAT_000121d8);
 memcpy_wrapper(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen_wrapper(local_28);
 printf_wrapper(&DAT_00012081,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 printf_wrapper(&DAT_0001209f,uVar2);
 printf_wrapper(&DAT_000120bb,0x2a);
 printf_wrapper(&DAT_000120d7,0x47);
 printf_wrapper(&DAT_000120f3,0x28a);
 printf_wrapper(&DAT_00012110,0x16);
 printf_wrapper(&DAT_0001212c,0x27);
 printf_wrapper(&DAT_00012148,0x10);
 printf_wrapper(&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf_wrapper(&DAT_00012180,uVar2);
 printf_wrapper(&DAT_0001219d,0x2bf);
 uVar2 = test_cpp_rtti();
 printf_wrapper(&DAT_000121ba,uVar2);
 return;
}

// Function: main @ 0x11722
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1173e
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1174c
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x1175d
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Constructor @ 0x11770
void Container_int__Constructor(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x1177c
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

// Function: Container<int>::get @ 0x11798
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x117b0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Constructor @ 0x117b8
void Container_double__Constructor(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x117c4
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x117e2
long double Container_double__get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 lVar1 = (long double)this->data[param_1];
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x117fc
unsigned int Container_double__getSize(Container_double_ *this)
{
 return this->size;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11804
void RTTIDerivedA__destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11826
unsigned int RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1182a
void RTTIBase__destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1182c
void RTTIDerivedB__destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1184e
unsigned int RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _ZNSt8ios_base4InitC1Ev @ 0x11860
void _ZNSt8ios_base4InitC1Ev(Init *this)
{
 (void)this;
 return;
}

// Function: _ZNSt8ios_base4InitD1Ev @ 0x11868
void _ZNSt8ios_base4InitD1Ev(Init *this)
{
 (void)this;
 return;
}

// Function: __do_global_ctors_aux @ 0x1186c
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x118b8
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

