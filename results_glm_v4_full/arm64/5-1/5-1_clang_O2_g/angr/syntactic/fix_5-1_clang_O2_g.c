// Angr Decompilation of 5-1_clang_O2_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Forward declarations for RTTI-related structures */
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

/* Typeinfo structure for RTTI */
typedef struct type_info {
 const char *_name;
} type_info;

/* CRT stub function _init removed by preprocessor */

/* External declarations for C++ runtime and CRT functions */
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void *frame_dummy(void);
extern void *__cxa_allocate_exception(unsigned long size);
extern void _Unwind_Resume(void *exception_object);
extern void __cxa_throw(void* thrown_exception, void* tinfo, void (*dest)(void*));
extern void* __cxa_begin_catch(void* exception_object);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void* operatornew(unsigned long size);
extern void operatordelete(void* ptr);
extern void* __dynamic_cast(const void* src_ptr, const void* from_type, const void* to_type, ptrdiff_t src2dst_offset);

/* External declarations for global data variables */
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned long long g_411ff8;
extern char __dollar_d_19[8];
extern void* g_411d58;
extern void* g_411d80;
extern char __dollar_d_28[];
extern char g_4015ef[];
extern char g_40160b[];
extern char g_401627[];
extern char g_401643[];
extern char g_401660[];
extern char g_40167c[];
extern char g_401698[];
extern char g_4016b4[];
extern char g_4016d0[];
extern char g_4016ed[];
extern char g_40170a[];
extern char g_401728[];

/* RTTI typeinfo objects */
extern char _ZTIi[8];
extern char _ZTIZ18test_cpp_exceptionvE16DerivedException[8];
extern type_info _ZTI8RTTIBase;
extern type_info _ZTI12RTTIDerivedA;

/* Forward declarations for RTTI class functions */
extern int _ZN12RTTIDerivedAD0Ev(void* this_ptr);
extern long long _ZNK12RTTIDerivedA7getTypeEv(void* this_ptr);
extern int _ZN8RTTIBaseD2Ev(void* this_ptr);
extern int _ZN12RTTIDerivedBD0Ev(void* this_ptr);
extern long long _ZNK12RTTIDerivedB7getTypeEv(void* this_ptr);
extern unsigned long long arm64g_calculate_condition(int cond, unsigned long long op1, unsigned long long op2, unsigned long long op3);
extern unsigned long long CmpF(double a, double b);



// Function: __dollar_x at 0x400d60

typedef long long (*func_ptr_t)(unsigned long long, unsigned long long);

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 long long result;
 func_ptr_t func;

 v0 = v2;
 v1 = v3;
 func = (func_ptr_t)g_411ff8;
 result = func(v0, v1);
 return result;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 char *v0; // x0

 return puts(v0);
}


// Function: __dollar_x_18 at 0x400ec0
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern void *__dso_handle;
extern void _ZNSt8ios_base4InitC1Ev(void *);

long long __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 _ZNSt8ios_base4InitC1Ev(&__dollar_d_19);
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
}


// Function: sub_400efc at 0x400efc
void sub_400efc(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400f30 at 0x400f30
void sub_400f30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400f48 at 0x400f48
void sub_400f48()
{
 deregister_tm_clones();
 return;
}


// Function: deregister_tm_clones at 0x400f50
void deregister_tm_clones()
{
 return;
}









/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400fbc at 0x400fbc
void sub_400fbc()
{
 __do_global_dtors_aux();
 return;
}


// Function: __do_global_dtors_aux at 0x400fc4
void __do_global_dtors_aux()
{
 return;
}








// Function: sub_401008 at 0x401008
long long sub_401008()
{
 unsigned long long v0; // x0

 v0 = (unsigned long long)frame_dummy();
 return (long long)frame_dummy();
}


// Function: frame_dummy at 0x401010
void* frame_dummy()
{
 return 0;
}








// Function: _ZNSt8ios_base4InitC1Ev at 0x401014
void _ZNSt8ios_base4InitC1Ev(void* this_ptr)
{
 return;
}


// Function: _ZNSt8ios_base4InitD1Ev at 0x401018
void _ZNSt8ios_base4InitD1Ev(void* this_ptr)
{
 return;
}


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
struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
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
extern char _ZTIi[8];

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4
extern char _ZTIZ18test_cpp_exceptionvE16DerivedException[8];

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 if (a1 != 1)
 {
LABEL_0x4011a8:
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void*)a0);
 }
 __cxa_rethrow();
}


// Function: sub_40111c at 0x40111c
void sub_40111c(unsigned long a0, unsigned long a1)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011b0
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011b8
void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
	ptr = operatornew(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)operatornew(8);
 *p = (struct_0 *)&g_411d80;
 operatordelete(ptr);
 ((long long (*)(struct_0 *))(*p)->field_8)(*p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278
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
	puts(g_401728);
	result = 0;
	v0 = 10;
	strncpy(v1, "Test", 4);
	flag1 = 0;
	printf(__dollar_d_28, strlen((char*)&v0 + 4) + 4700);
	printf(g_4015ef, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_40160b, 42);
 printf(g_401627, 71);
 printf(g_401643, 650);
 printf(g_401660, 22);
 printf(g_40167c, 39);
	printf(g_401698, 16);
	printf(g_4016b4, 85);
 test_cpp_exception();
	printf(g_4016d0, 0);
	printf(g_4016ed, 703);
	ptr = operatornew(8);
 *((char **)ptr) = g_411d58;
 p = operatornew(8);
 *(p) = (struct_0 *)g_411d80;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v10 = 30;
 else
 v10 = 130;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v11 = v10;
 else
 v11 = v10 + 200;
 operatordelete(ptr);
 ((long long (*)(struct_0 *))(*p)->field_8)(*p);
	printf(g_40170a, v11 + 14);
 return;
}


// Function: main at 0x40144c
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401464
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401470
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40147c
void _Z13template_swapIiEvRT_S1_(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401490
int _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401498
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = *(unsigned int *)((char *)ptr + 40);
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 44 + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4014b4
int _ZNK9ContainerIiE3getEi(void* this_ptr, int arg_0)
{
 return *(int *)((char *)this_ptr + 44 + 4 * arg_0);
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4014d4
unsigned int _ZNK9ContainerIiE7getSizeEv(void* this_ptr)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4014dc
int _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4014e4
void _ZN9ContainerIdE4pushEd(void* ptr, double arg_0)
{
 unsigned long idx; // x8

 idx = *(unsigned int *)((char *)ptr + 80);
 if (9 >= (unsigned int)idx)
 {
 *((double *)((char *)ptr + 88 + 8 * idx)) = arg_0;
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401500
double _ZNK9ContainerIdE3getEi(void* this_ptr, int arg_0)
{
 return *(double *)((char *)this_ptr + 88 + 8 * arg_0);
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40151c
unsigned int _ZNK9ContainerIdE7getSizeEv(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401524
int _ZN12RTTIDerivedAD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401528
long long _ZNK12RTTIDerivedA7getTypeEv(void* this_ptr)
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401530
int _ZN8RTTIBaseD2Ev(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401534
int _ZN12RTTIDerivedBD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401538
long long _ZNK12RTTIDerivedB7getTypeEv(void* this_ptr)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */

/* Implement operator new and delete */
void* operatornew(unsigned long size)
{
	void *ptr = malloc(size);
	if (!ptr)
	{
		// Throw bad_alloc in case of failure
		exit(1);
	}
	return ptr;
}

void operatordelete(void* ptr)
{
	free(ptr);
}

/* Definitions for external symbols to fix linker errors */

/* Global data variables */
unsigned long long g_411ff8 = 0;
char __dollar_d_19[8];

/* Vtable for RTTIDerivedA - contains function pointers */
static void* _ZTV12RTTIDerivedA[] = {
    (void*)0,  /* offset_to_top */
    (void*)&_ZTI12RTTIDerivedA,  /* typeinfo */
    (void*)_ZNK12RTTIDerivedA7getTypeEv  /* getType */
};

/* Vtable for RTTIBase/RTTIDerivedB */
static void* _ZTV8RTTIBase[] = {
    (void*)0,  /* offset_to_top */
    (void*)&_ZTI8RTTIBase,  /* typeinfo */
    (void*)_ZNK12RTTIDerivedB7getTypeEv  /* getType */
};

/* Vtable pointers - point to vtables */
void* g_411d58 = _ZTV12RTTIDerivedA;
void* g_411d80 = _ZTV8RTTIBase;

/* String literals for test_cpp_oo_features */
char __dollar_d_28[] = "%d";
char g_4015ef[] = "%d";
char g_40160b[] = "%d";
char g_401627[] = "%d";
char g_401643[] = "%d";
char g_401660[] = "%d";
char g_40167c[] = "%d";
char g_401698[] = "%d";
char g_4016b4[] = "%d";
char g_4016d0[] = "%d";
char g_4016ed[] = "%d";
char g_40170a[] = "%d";
char g_401728[] = "%s";

/* RTTI typeinfo objects */
type_info _ZTI8RTTIBase = { "8RTTIBase" };
type_info _ZTI12RTTIDerivedA = { "12RTTIDerivedA" };
type_info _ZTIi = { "i" };
type_info _ZTIZ18test_cpp_exceptionvE16DerivedException = { "Z18test_cpp_exceptionvE16DerivedException" };

/* Static member */
unsigned int _ZN14LifecycleClass14instance_countE = 0;

/* DSO handle for C++ runtime */
void *__dso_handle = 0;





