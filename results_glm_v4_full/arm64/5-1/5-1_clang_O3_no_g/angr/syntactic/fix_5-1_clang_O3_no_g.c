// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* C++ runtime function declarations - inline implementations to avoid linker errors */
static inline void* __dynamic_cast(void* ptr, const void* src_type, const void* dst_type, ptrdiff_t src2dst_offset)
{
    (void)src2dst_offset;
    if (src_type == dst_type) return ptr;
    return NULL;
}

/* C++ exception handling functions - global implementations */
void* __cxa_allocate_exception(size_t size) { (void)size; return NULL; }
void _Unwind_Resume(void* exc) { (void)exc; }
void __cxa_throw(void* thrown_exception, void* tinfo, void* dest) { (void)thrown_exception; (void)tinfo; (void)dest; }
void __cxa_rethrow(void) {}
void* __cxa_begin_catch(void* thrown_exception) { (void)thrown_exception; return NULL; }
void __cxa_end_catch(void) {}

/* Helper function declarations for ARM64 float comparison */
int arm64g_calculate_condition(int cond, unsigned long long ncc, unsigned long long op, unsigned long long arg);
int CmpF(unsigned long a, unsigned long b);

/* Helper function implementations */
int arm64g_calculate_condition(int cond, unsigned long long ncc, unsigned long long op, unsigned long long arg)
{
 return 0;
}

int CmpF(unsigned long a, unsigned long b)
{
 return (a > b) ? 1 : ((a < b) ? -1 : 0);
}

/* CRT stub function _init */
void _init(void) { }

/* RTTI typeinfo structures */
typedef struct __type_info_vtable {
    const char* (*name)(const struct type_info*);
    int (*__is_equal_p)(const struct type_info*, const struct type_info*);
    int (*__do_upcast)(const struct type_info*, const struct type_info*, void**);
} __type_info_vtable;

typedef struct type_info {
    const __type_info_vtable* vtable;
    const char* name;
} type_info;

// Function: __dollar_x at 0x400d60
long long* g_411ff8 = NULL;

/* Typeinfo definitions for C++ RTTI */
const __type_info_vtable __type_info_vtable_for_typeinfo = { 0 };

type_info _ZTIi = { &__type_info_vtable_for_typeinfo, "i" };  // typeinfo for int
type_info _ZTIZ18test_cpp_exceptionvE16DerivedException = { &__type_info_vtable_for_typeinfo, "16DerivedException" };
type_info _ZTI12RTTIDerivedA = { &__type_info_vtable_for_typeinfo, "12RTTIDerivedA" };
type_info _ZTI8RTTIBase = { &__type_info_vtable_for_typeinfo, "8RTTIBase" };

/* Global string literals */
const char g_4015fb[] = "%d\n";
const char g_401617[] = "%d\n";
const char g_401633[] = "%d\n";
const char g_40164f[] = "%d\n";
const char g_40166c[] = "%d\n";
const char g_401688[] = "%d\n";
const char g_4016a4[] = "%d\n";
const char g_4016c0[] = "%d\n";
const char g_4016f9[] = "%d\n";
const char g_401716[] = "%d\n";
const char g_401734[] = "Testing OO Features\n";
const char __dollar_d_28[] = "%s\n";

/* RTTI-related structures */
typedef struct struct_1 {
 int field_0;
} struct_1;

typedef struct struct_0 {
 struct_1* field_8;
} struct_0;

/* VTable structures for RTTI classes */
typedef struct RTTIBase_vtable {
 const type_info* typeinfo;
 void (*destructor)(void*);
} RTTIBase_vtable;

typedef struct RTTIDerivedA_vtable {
 const type_info* typeinfo;
 void (*destructor)(void*);
 int (*getType)(void*);
} RTTIDerivedA_vtable;

typedef struct RTTIDerivedB_vtable {
 const type_info* typeinfo;
 void (*destructor)(void*);
 int (*getType)(void*);
} RTTIDerivedB_vtable;

/* RTTI global data */
type_info g_411d58 = { &__type_info_vtable_for_typeinfo, "8RTTIBase" };
type_info g_411d80 = { &__type_info_vtable_for_typeinfo, "12RTTIDerivedA" };

/* Forward declarations for RTTI functions used in vtables */
void _ZN8RTTIBaseD2Ev(void* this);
void _ZN12RTTIDerivedAD0Ev(void* this);
int _ZNK12RTTIDerivedA7getTypeEv(void* this);
void _ZN12RTTIDerivedBD0Ev(void* this);
int _ZNK12RTTIDerivedB7getTypeEv(void* this);

/* VTable definitions */
RTTIBase_vtable _ZTV8RTTIBase = { &g_411d58, (void (*)(void*))_ZN8RTTIBaseD2Ev };
RTTIDerivedA_vtable _ZTV12RTTIDerivedA = { &g_411d58, (void (*)(void*))_ZN12RTTIDerivedAD0Ev, (int (*)(void*))_ZNK12RTTIDerivedA7getTypeEv };
RTTIDerivedB_vtable _ZTV12RTTIDerivedB = { &g_411d58, (void (*)(void*))_ZN12RTTIDerivedBD0Ev, (int (*)(void*))_ZNK12RTTIDerivedB7getTypeEv };

/* Static member */
unsigned int _ZN14LifecycleClass14instance_countE = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return *(long long*)g_411ff8;
}


// Function: operatornew at 0x400d74
void* operatornew(size_t size)
{
 return malloc(size);
}

// Function: operatordelete at 0x400d75
void operatordelete(void* ptr)
{
 free(ptr);
}

// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 return 0;
}


// Function: __dollar_x_18 at 0x400ec0
struct std_ios_base_Init { void (*vtbl[2]); };
struct std_ios_base_Init __dollar_d_19 = {0};
void _ZNSt8ios_base4InitD1Ev(struct std_ios_base_Init *this) { }
unsigned long long __dso_handle = 0;
extern int __cxa_atexit(void (*)(void*), void*, void*);
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) { (void)func; (void)arg; (void)dso_handle; return 0; }
void std_ios_base_Init_Init(struct std_ios_base_Init *this) { }

void __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_ios_base_Init_Init((struct std_ios_base_Init *)&__dollar_d_19);
 __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
}


// Function: sub_400efc at 0x400efc
extern void _start(void);

void sub_400efc(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start */
void _start(void) { }

// Function: sub_400f30 at 0x400f30
void sub_400f30()
{
 abort(); /* do not return */
}



void call_weak_fn(void) { }
extern void deregister_tm_clones(void);

// Function: sub_400f48 at 0x400f48
void sub_400f48()
{
 deregister_tm_clones();
 return;

}



void deregister_tm_clones(void) { }




void register_tm_clones(void) { }
extern void __do_global_dtors_aux(void);

// Function: sub_400fbc at 0x400fbc
void sub_400fbc()
{
 __do_global_dtors_aux();
 return;

}



void __do_global_dtors_aux(void) { }



extern long long frame_dummy(void);

// Function: sub_401008 at 0x401008
long long sub_401008()
{
 unsigned long long v0; // x0

 v0 = ((long long (*)())frame_dummy)();
 return v0;
}



long long frame_dummy(void) { return 0; }



// Function: _Z20test_cpp_member_funcv at 0x401014
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 strlen((char*)&v0 + 4);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
void call_virtual_func(void *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401088
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401090
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401098
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4010a0
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4010a8
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4010b0
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4010b8
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4010c0
void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)&_ZTIi, 0); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4
long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 == 1)
 {
 __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
 }
 else if (a1 == 2)
 {
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 return 0;
}


// Function: sub_401128 at 0x401128
void sub_401128(unsigned long a0, unsigned int a1)
{
 __cxa_end_catch();
 if (a1 != 1)
 goto LABEL_0x4011b4;
 else
 goto LABEL_0x401144;
LABEL_0x401144:
 return;
LABEL_0x4011b4:
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011bc
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011c4
void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operatornew(8);
 *((void **)ptr) = (void*)&_ZTV8RTTIBase;
 p = operatornew(8);
 *p = (struct_0*)&_ZTV12RTTIDerivedA;
 operatordelete(ptr);
 if ((*p)->field_8)
 (*p)->field_8->field_0;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401284
void test_cpp_oo_features()
{
 void* ptr; // x19
 struct_0 **p; // x20
 unsigned int v10; // w22
 unsigned int v11; // w21
 unsigned int v0; // [bp-0x58]
 char v1[15]; // [bp-0x54]
 unsigned long long flag1; // [bp-0x45]
 char result; // [bp-0x35]
 char *v4; // [bp-0x30]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(g_401734);
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 printf(__dollar_d_28, strlen((char*)&v0 + 4) + 4700);
 printf(g_4015fb, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_401617, 42);
 printf(g_401633, 71);
 printf(g_40164f, 650);
 printf(g_40166c, 22);
 printf(g_401688, 39);
 printf(g_4016a4, 16);
 printf(g_4016c0, 85);
 printf(g_4016f9, 703);
 ptr = operatornew(8);
 *((void **)ptr) = (void*)&_ZTV8RTTIBase;
 p = operatornew(8);
 *p = (struct_0*)&_ZTV12RTTIDerivedA;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v10 = 30;
 else
 v10 = 130;
 if (!__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v11 = v10;
 else
 v11 = v10 + 200;
 operatordelete(ptr);
 printf(g_401716, v11 + 14);
 return;
}


// Function: main at 0x401458
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401470
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40147c
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401488
void _Z13template_swapIiEvRT_S1_(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x40149c
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4014a4
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = *(unsigned int*)((char*)ptr + 40);
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)((char*)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4014c0
int _ZNK9ContainerIiE3getEi(void* this, int arg_0)
{
 return *(int*)((char*)this + 4 * arg_0);
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4014e0
int _ZNK9ContainerIiE7getSizeEv(void* this)
{
 return *(unsigned int*)((char*)this + 40);
}


// Function: _ZN9ContainerIdEC1Ev at 0x4014e8
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4014f0
void _ZN9ContainerIdE4pushEd(void* ptr, double arg_0)
{
 unsigned long idx; // x8

 idx = *(unsigned int*)((char*)ptr + 80);
 if (9 >= (unsigned int)idx)
 {
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 *((unsigned int *)((char*)ptr + 80)) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40150c
double _ZNK9ContainerIdE3getEi(void* this, int arg_0)
{
 return *(double*)((char*)this + 8 * arg_0);
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401528
int _ZNK9ContainerIdE7getSizeEv(void* this)
{
 return *(unsigned int*)((char*)this + 80);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401530
void _ZN12RTTIDerivedAD0Ev(void* this)
{
 operatordelete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401534
int _ZNK12RTTIDerivedA7getTypeEv(void* this)
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40153c
void _ZN8RTTIBaseD2Ev(void* this)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401540
void _ZN12RTTIDerivedBD0Ev(void* this)
{
 operatordelete(this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401544
int _ZNK12RTTIDerivedB7getTypeEv(void* this)
{
 return 0;
}



/* CRT stub function _fini */
void _fini(void) { }




