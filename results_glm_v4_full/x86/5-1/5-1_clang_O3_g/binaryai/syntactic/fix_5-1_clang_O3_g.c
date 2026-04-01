#define _GNU_SOURCE
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
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

/* Forward declarations */
typedef struct Base Base;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;

/* Struct definitions */
typedef struct LifecycleClass {
    int dummy;
} LifecycleClass;

typedef struct Base {
    void *vtable;
} Base;

typedef struct RTTIBase {
    void *vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
    void *vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *vtable;
} RTTIDerivedB;

typedef struct Container_int_ {
    char data[0x2c];  // 44 bytes to allow pointer arithmetic to +0x28
} Container_int_;

typedef struct Container_double_ {
    char data[0x58];  // 88 bytes to allow pointer arithmetic to +0x50
} Container_double_;

/* std::ios_base::Init struct definition */
typedef struct Init {
    int dummy;
} Init;

/* External function declarations */
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void __cxa_begin_catch(void);
void *__cxa_allocate_exception(size_t size);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __libc_start_main(int (*main)(int,char **,char **), int argc, void *argv, 
                       int (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void operator_delete(void *ptr);
int __dynamic_cast(void *obj, const void *from_type, const void *to_type, int ptrdiff);
void *operator_new(unsigned int size);
void __cxa_end_catch(void);
void __cxa_throw(void *exception, const void *type_info, void (*dest)(void*));
void _Unwind_Resume(void);
void *malloc(size_t size);
void free(void *ptr);
size_t strlen(const char *__s);
int printf(const char *__format, ...);
int vprintf(const char *__format, va_list ap);
int puts(const char *__s);
int main(int argc, char *argv[]);
void Init_constructor(Init *this);
void __x86_get_pc_thunk_di(void);

/* C++ typeinfo declarations */
extern const void *int_typeinfo;
extern const void *RTTIBase_typeinfo;
extern const void *RTTIDerivedA_typeinfo;
extern const void *RTTIDerivedB_typeinfo;

/* Global variables */
unsigned int LifecycleClass_instance_count = 0;
Init std___ioinit;
void *__dso_handle = NULL;
void *PTR__RTTIBase_00013ecc;
void *PTR__RTTIBase_00013ee0;

/* C++ typeinfo definitions - dummy placeholders for compilation */
const void *int_typeinfo = &(int_typeinfo);
const void *RTTIBase_typeinfo = &(RTTIBase_typeinfo);
const void *RTTIDerivedA_typeinfo = &(RTTIDerivedA_typeinfo);
const void *RTTIDerivedB_typeinfo = &(RTTIDerivedB_typeinfo);

// Decompiled by BinaryAI
// SHA256: 4fa90e217568c14d3445ee8828d57438d32bf6069cfe552e3f2c8d7ec3de581f

// Function: _init @ 0x11000
void _init(void)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch_impl(void)
{
 extern void __cxa_begin_catch(void);
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception_impl(size_t size)
{
 extern void *__cxa_allocate_exception(size_t size);
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::strlen @ 0x11070
/* strlen is declared in string.h */

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
void __cxa_atexit_impl(void (*func)(void *), void *arg, void *dso_handle)
{
 __cxa_atexit(func,arg,dso_handle);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
void __libc_start_main_impl(int (*main)(int,char **,char **), int argc, void *argv, 
                            int (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 ((int (*)(int,char **,char **))main)(argc, (char **)argv, NULL);
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x110a0
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
int __dynamic_cast(void *obj, const void *from_type, const void *to_type, int ptrdiff)
{
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x110c0
/* printf is declared in stdio.h */

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow_impl(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x110e0
/* puts is declared in stdio.h */

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
void std_ios_base_Init_Init(void *this)
{
 ((Init *)this)->dummy = 0;
 return;
}

// Function: Init_constructor @ 0x110f5
void Init_constructor(void *this)
{
 ((Init *)this)->dummy = 0;
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch_impl(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw_impl(void *exception, const void *type_info, void (*dest)(void*))
{
 __cxa_throw(exception, type_info, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume_impl(void)
{
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 unsigned int extraout_var;
 uVar1 = 0x11148;
 Init_constructor(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11180
void _start(unsigned int param_1,unsigned int param_2)
{
 char *auStack_4;
 __libc_start_main((int (*)(int,char **,char **))main,(int)param_2,(void *)&auStack_4,(int (*)(void))NULL,(void (*)(void))NULL,(void (*)(void))NULL,(void *)&auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111ac
void _i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11200
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11250
void __do_global_dtors_aux(void)
{
 /* Position-independent code - simplified stub for compilation */
 deregister_tm_clones();
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x112e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x112ed
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11300
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int uStack_10;
 unsigned int uStack_c;
 uStack_10 = 0;
 local_14 = 0;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0x74736554;
 uStack_c = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11380
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: FUN_00011385 @ 0x11385
int FUN_00011385(void)
{
 /* Stub for decompiled function */
 return 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x113a0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x113d0
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x113e0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x113f0
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11400
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11410
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x11420
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11430
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x11440
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x11530
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11540
int test_cpp_rtti(void)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = (unsigned int)&PTR__RTTIBase_00013ecc;
 puVar2 = (unsigned int *)operator_new(4);
 *puVar2 = (unsigned int)&PTR__RTTIBase_00013ee0;
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
	iVar4 = (int)__dynamic_cast(puVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
	iVar3 = iVar5 + 200;
	if (iVar4 == 0) {
		iVar3 = iVar5;
	}
	operator_delete(puVar1);
	operator_delete(puVar2);
	return iVar3 + 0xe;
}

// Function: test_cpp_oo_features @ 0x11600
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 puts("Test C++ Object-Oriented Features");
 uStack_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0x74736554;
 uStack_14 = 0;
 sVar1 = strlen((char *)&local_30);
 printf("test_cpp_member_func: %d\n",sVar1 + 0x125c);
 printf("test_cpp_constructor: %d\n",LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf("test_cpp_virtual_func: %d\n",0x2a);
 printf("test_cpp_multiple_inheritance: %d\n",0x47);
 printf("test_cpp_diamond_inheritance: %d\n",0x28a);
 printf("test_cpp_operator_overload: %d\n",0x16);
 printf("test_cpp_template_func: %d\n",0x27);
 printf("test_cpp_template_class: %d\n",0x10);
 printf("test_cpp_lambda: %d\n",0x55);
 uVar2 = test_cpp_exception();
 printf("test_cpp_exception: %d\n",uVar2);
 printf("test_cpp_smart_ptr: %d\n",0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = (unsigned int)&PTR__RTTIBase_00013ecc;
 puVar4 = (unsigned int *)operator_new(4);
 *puVar4 = (unsigned int)&PTR__RTTIBase_00013ee0;
 iVar5 = (int)__dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
	iVar6 = (int)__dynamic_cast(puVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
	iVar5 = iVar7 + 200;
	if (iVar6 == 0) {
		iVar5 = iVar7;
	}
	operator_delete(puVar3);
	operator_delete(puVar4);
 printf("test_cpp_rtti: %d\n",iVar5 + 0xe);
 return;
}

// Function: main @ 0x11810
int main(int argc, char *argv[])
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x11830
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x11840
double template_max_double_(double param_1,double param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11860
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11880
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11890
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x118b0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x118d0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x118e0
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x118f0
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11910
long double Container_double__get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 lVar1 = (long double)*(double *)((char *)this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11930
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11940
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11970
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11980
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11990
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119c0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x119d0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11a1c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

