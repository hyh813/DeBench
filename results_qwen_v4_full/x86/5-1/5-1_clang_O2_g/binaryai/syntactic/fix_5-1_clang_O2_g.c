/* Auto-injected type definitions by preprocessor */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <sys/types.h>

// Forward declarations for external functions
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_bx(void);
void *operator_new(size_t __size);
void operator_delete(void *__ptr);
int __dynamic_cast(void *__obj, void *__src_type, void *__dst_type, int __src_type_offset);
void *__cxa_allocate_exception(size_t __size);
void __cxa_throw(void *__exc, void *__type, void *__dest);
void __cxa_begin_catch(void *__exc);
void __cxa_end_catch(void);
void __cxa_atexit(void *__func, void *__arg, void *__dso);
void __cxa_rethrow(void);
void _Unwind_Resume(void *__exc);
void std_ios_base_Init_Init(void *__this);

// Forward declarations for standard library functions
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);
void *malloc(size_t size);
void free(void *ptr);

// Forward declarations for C++ types
typedef struct Base Base;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;

// Forward declarations for global variables
extern int LifecycleClass_instance_count;
extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *_ZTI8RTTIBase;
extern void *_ZTI12RTTIDerivedA;
extern void *_ZTI12RTTIDerivedB;

// Global variable definitions
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00013ecc = NULL;
void *PTR__RTTIBase_00013ee0 = NULL;
void *RTTIBase_typeinfo = NULL;
void *RTTIDerivedA_typeinfo = NULL;
void *RTTIDerivedB_typeinfo = NULL;
void *_ZTI8RTTIBase = NULL;
void *_ZTI12RTTIDerivedA = NULL;
void *_ZTI12RTTIDerivedB = NULL;

// Struct definitions for C++ types
struct Base {
    void *vtable;
};

struct Container_int_ {
    int data[10];
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct LifecycleClass {
    void *vtable;
};



// Decompiled by BinaryAI
// SHA256: a1e7823c9643d519922d31cfffe2154dc1ca054f334dba17c9214db250122f2b



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
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
void *__cxa_allocate_exception(size_t param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
void __cxa_atexit(void *param_1, void *param_2, void *param_3)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
void __libc_start_main(void *param_1, void *param_2, void *param_3, void *param_4, void *param_5, void *param_6, void *param_7)
{
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x110a0
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
int __dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow(void)
{
 return;
}



// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
void std_ios_base_Init_Init(void *this_ptr)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume(void *param_1)
{
 return;
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
 return;
}

// Forward declaration
int main(void);



// Function: __i686.get_pc_thunk.bx @ 0x111ac
void __i686_get_pc_thunk_bx(void)
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
 uint uVar1;
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
 return (int)(sVar1 + 0x125c);
}

// Function: test_cpp_constructor @ 0x11380
int test_cpp_constructor(void)
{
 return (int)(LifecycleClass_instance_count * 0x3e9 + 0x15);
}

// Function: FUN_00011385 @ 0x11385
int FUN_00011385(void)
{
 return (int)(LifecycleClass_instance_count * 0x3e9 + 0x15);
}

// Function: call_virtual_func @ 0x113a0
void call_virtual_func(Base *param_1,int param_2)
{
 void *vtable = *(void **)param_1;
 void (*func)(Base *, int) = (void (*)(Base *, int))((void **)vtable)[0];
 func(param_1, param_2);
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
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x11530
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11540
int test_cpp_rtti(void)
{
 void **puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (void **)operator_new(4);
 *puVar1 = PTR__RTTIBase_00013ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast(puVar1,(void*)RTTIBase_typeinfo,(void*)RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,(void*)RTTIBase_typeinfo,(void*)RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 operator_delete(piVar2);
 return iVar3 + 0xe;
}

// Definitions for external data
char DAT_000121d8[] = "Test";
char DAT_00012081[] = "%d\n";
char DAT_0001209f[] = "%d\n";
char DAT_000120bb[] = "%d\n";
char DAT_000120d7[] = "%d\n";
char DAT_000120f3[] = "%d\n";
char DAT_00012110[] = "%d\n";
char DAT_0001212c[] = "%d\n";
char DAT_00012148[] = "%d\n";
char DAT_00012164[] = "%d\n";
char DAT_00012180[] = "%d\n";
char DAT_0001219d[] = "%d\n";
char DAT_000121ba[] = "%d\n";



// Function: test_cpp_oo_features @ 0x11600
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 int *piVar4;
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
 puts((char*)&DAT_000121d8);
 uStack_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0x74736554;
 uStack_14 = 0;
 sVar1 = strlen((char *)&local_30);
 printf((char*)&DAT_00012081,sVar1 + 0x125c);
 printf((char*)&DAT_0001209f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf((char*)&DAT_000120bb,0x2a);
 printf((char*)&DAT_000120d7,0x47);
 printf((char*)&DAT_000120f3,0x28a);
 printf((char*)&DAT_00012110,0x16);
 printf((char*)&DAT_0001212c,0x27);
 printf((char*)&DAT_00012148,0x10);
 printf((char*)&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf((char*)&DAT_00012180,uVar2);
 printf((char*)&DAT_0001219d,0x2bf);
 puVar3 = (void **)operator_new(4);
 *puVar3 = PTR__RTTIBase_00013ecc;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)PTR__RTTIBase_00013ee0;
 iVar5 = __dynamic_cast(puVar3,(void*)RTTIBase_typeinfo,(void*)RTTIDerivedA_typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast(piVar4,(void*)RTTIBase_typeinfo,(void*)RTTIDerivedB_typeinfo,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator_delete(puVar3);
 operator_delete(piVar4);
 printf((char*)&DAT_000121ba,iVar5 + 0xe);
 return;
}

// Function: main @ 0x11810
int main(void)
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
 if (param_2 <= param_1 || param_1 != param_2) {
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

// Function: Container_int_Constructor @ 0x11880
void Container_int_Constructor(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x11890
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x118b0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x118d0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double_Constructor @ 0x118e0
void Container_double_Constructor(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x118f0
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x11910
double Container_double_get(Container_double_ *this,int param_1)
{
 double lVar1;
 lVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 lVar1 = *(double *)((char *)this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container_double_getSize @ 0x11930
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x11940
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x11970
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x11980
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x11990
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x119c0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x119d0
void __do_global_ctors_aux(void)
{
 return;
}



