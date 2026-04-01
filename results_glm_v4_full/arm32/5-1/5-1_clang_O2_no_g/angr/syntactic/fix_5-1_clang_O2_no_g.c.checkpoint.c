// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: ARMEL


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cxxabi.h>
#include <cstddef>
#include <iostream>

/* C++ runtime function declarations (for decompiled code) */
extern "C" {
void *__cxa_allocate_exception(size_t thrown_size);
void *__cxa_begin_catch(void *thrown_exception);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void __cxa_end_cleanup(void);
/* __cxa_throw is declared in cxxabi.h, not redeclaring here */
int __cxa_atexit(void (*f)(void *), void *obj, void *dso_handle);
}

/* Additional C++ runtime functions */
namespace __cxxabiv1 {
    class __class_type_info;
}
extern "C" void* __dynamic_cast(const void *sub, const __cxxabiv1::__class_type_info *src, const __cxxabiv1::__class_type_info *dst, ptrdiff_t src2dst_offset);
extern "C" int __aeabi_dcmpgt(double a, double b);

/* C++ operator new/delete declarations */
void* operator new(size_t size);
void operator delete(void* ptr) noexcept;

/* type_info stub for C++ RTTI */
class type_info {
public:
    virtual ~type_info();
    const char* name() const;
};

/* ARM condition code emulation helper (angr-specific) */
int armg_calculate_condition(int cond, unsigned int val1, unsigned int val2, int flags) {
    return 0;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_400854 at 0x400854
extern unsigned int g_412008;

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 /* Indirect jump stub - decompilation artifact */
 return 0;
}


// Function: __dollar_a_27 at 0x400958
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit[sizeof(std::ios_base::Init)];
extern unsigned int __dso_handle;

int __dollar_a_27()
{
 unsigned int v0; // r0

 new (&_ZStL8__ioinit) std::ios_base::Init();
 v0 = __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009cc at 0x4009cc
void sub_4009cc()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x400afc
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 strncpy(v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen((const char*)&v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
class Base {
public:
    virtual ~Base() {}
};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 /* Virtual function call stub - decompilation artifact */
 (void)arg_0;
 (void)arg_1;
}


// Function: _Z21test_cpp_virtual_funcv at 0x400b8c
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400b94
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x400b9c
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x400ba8
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x400bb0
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x400bb8
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x400bc0
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x400bc8
extern const __cxxabiv1::__class_type_info _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int v5; // r3
 unsigned int v6; // r1
 unsigned int v7; // r4
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxxabiv1::__cxa_throw(ptr, (std::type_info*)&_ZTIi, 0);
 __cxa_begin_catch(ptr);
 __cxa_end_catch();
 return;
}


// Function: sub_400bf4 at 0x400bf4
/* type_info stub for DerivedException */
namespace {
    class DerivedException {};
}

/* RTTI type info for DerivedException - type_info cannot be constructed directly */
/* Definition for DerivedException RTTI type info */
	const char _ZTIZ18test_cpp_exceptionvE16DerivedException_name[] = "18test_cpp_exceptionvE16DerivedException";

	/* Local type_info stub - mimics type_info layout without virtual functions for initialization */
	struct type_info_stub {
	    const char *__type_name;
	};

	const type_info_stub _ZTIZ18test_cpp_exceptionvE16DerivedException_stub = {
	    _ZTIZ18test_cpp_exceptionvE16DerivedException_name
	};

int sub_400bf4(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v4; // r2
 unsigned int v5; // r3

 __cxa_end_catch();
 __cxxabiv1::__cxa_throw(__cxa_allocate_exception(1), (std::type_info*)&_ZTIZ18test_cpp_exceptionvE16DerivedException_stub, 0);
 __cxa_rethrow();
}


// Function: sub_400c1c at 0x400c1c
void sub_400c1c(void *a0, unsigned int a1)
{
 __cxa_end_catch();
 (void)a0;
 (void)a1;
}


// Function: _Z18test_cpp_smart_ptrv at 0x400c98
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400ca4
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

/* RTTI class declarations */
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual void getType();
};

void RTTIBase::getType()
{
    return;
}

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual void getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual void getType();
};

extern const __cxxabiv1::__class_type_info _ZTI8RTTIBase;

/* Vtable/RTTI data structures */
char g_411ed8[8] = {0};
char g_411eec[8] = {0};
extern const __cxxabiv1::__class_type_info _ZTI12RTTIDerivedA;
extern const __cxxabiv1::__class_type_info _ZTI12RTTIDerivedB;

void test_cpp_rtti()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 unsigned int result; // r0
 unsigned int flag1; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
p = operator new(4);
	*((char **)p) = (char *)g_411ed8;
	ptr = (struct_0 **)operator new(4);
	*(ptr) = (struct_0 *)(char *)g_411eec;
	result = (unsigned int)__dynamic_cast(p, (const __cxxabiv1::__class_type_info *)&_ZTI8RTTIBase, (const __cxxabiv1::__class_type_info *)&_ZTI12RTTIDerivedA, 0);
	flag1 = (unsigned int)__dynamic_cast(ptr, (const __cxxabiv1::__class_type_info *)&_ZTI8RTTIBase, (const __cxxabiv1::__class_type_info *)&_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 /* Virtual function call - original code: ((struct_0 *)*(ptr))->field_4(ptr, ((struct_0 *)*(ptr))->field_4); */
 if (!flag1)
 return;
 return;
}

void* operator new(size_t size) {
 return malloc(size);
}

void operator delete(void* ptr) noexcept {
 free(ptr);
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d70

extern unsigned int _ZN14LifecycleClass14instance_countE;
extern const __cxxabiv1::__class_type_info _ZTI12RTTIDerivedA;
extern const __cxxabiv1::__class_type_info _ZTI12RTTIDerivedB;
extern const __cxxabiv1::__class_type_info _ZTI8RTTIBase;
extern char g_4011f5[];
extern char g_401213[];
extern char g_40122f[];
extern char g_40124b[];
extern char g_401267[];
extern char g_401284[];
extern char g_4012a0[];
extern char g_4012bc[];
extern char g_4012d8[];
extern char g_4012f4[];
extern char g_401311[];
extern char g_40132e[];
extern char g_40134c[];
char g_4011f5[] = "%d";
char g_401213[] = "%d";
char g_40122f[] = "%d";
char g_40124b[] = "%d";
char g_401267[] = "%d";
char g_401284[] = "%d";
char g_4012a0[] = "%d";
char g_4012bc[] = "%d";
char g_4012d8[] = "%d";
char g_4012f4[] = "%d";
char g_401311[] = "%d";
char g_40132e[] = "%d";
char g_40134c[] = "Test features";

void test_cpp_oo_features()
{
 unsigned int v13; // lr
 unsigned int v14; // r7
 unsigned int flag5; // r0
 unsigned int v24; // r0
 unsigned int v15; // r6
 unsigned int v16; // r5
 unsigned int v17; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 unsigned int v22; // r0
 unsigned int v0; // [bp-0x3c]
 char v1; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 char v4; // [bp-0x2c]
 unsigned short flag3; // [bp-0x1c]
 char flag2; // [bp-0x1a]
 char flag4; // [bp-0x19]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]
 unsigned int v12; // [bp-0x4]

 v12 = v13;
 v11 = v14;
 v10 = v15;
 v9 = v16;
 v8 = v17;
 puts(g_40134c);
 strncpy(&v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 flag2 = 0;
 flag3 = 0;
 v0 = 10;
 flag4 = 0;
 printf(g_4011f5, strlen(&v1) + 4700);
 printf(g_401213, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_40122f, 42);
 printf(g_40124b, 71);
 printf(g_401267, 650);
 printf(g_401284, 22);
 printf(g_4012a0, 39);
 printf(g_4012bc, 16);
 printf(g_4012d8, 85);
 test_cpp_exception();
 printf(g_4012f4, 42);
 printf(g_401311, 703);
p = operator new(4);
	*((char **)p) = (char *)g_411ed8;
	ptr = (struct_0 **)operator new(4);
	*(ptr) = (struct_0 *)(char *)g_411eec;
	v22 = (unsigned int)__dynamic_cast(p, (const __cxxabiv1::__class_type_info *)&_ZTI8RTTIBase, (const __cxxabiv1::__class_type_info *)&_ZTI12RTTIDerivedA, 0);
	flag5 = (unsigned int)__dynamic_cast(ptr, (const __cxxabiv1::__class_type_info *)&_ZTI8RTTIBase, (const __cxxabiv1::__class_type_info *)&_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 /* Virtual function call - original code: *(ptr)->field_4(ptr, *(ptr)->field_4); */
 v24 = (!v22 ? 30 : 130);
 if (flag5)
 v24 += 200;
 printf(g_40132e, v24 + 14);
 return;
}


// Function: main at 0x400fac
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400fc0
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400fcc
double template_max_double(double arg_0, double arg_1)
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
 result = __aeabi_dcmpgt(arg_0, arg_1);
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return 0.0;
 }
 else
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return 0.0;
 }
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401000
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401014
int Container_int_Constructor(void* this_ptr)
{
 *((unsigned int *)((char *)this_ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401020
void Container_int_push(void* this_ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = *(int *)((char *)this_ptr + 40);
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char *)this_ptr + 40)) = v1;
 *((int *)((char *)this_ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401038
int Container_int_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401048;
 return 0;
LABEL_401048:
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401058
int Container_int_getSize(void* this_ptr)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401060
int Container_double_Constructor(void* this_ptr)
{
 *((unsigned int *)((char *)this_ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40106c
void Container_double_push(void* this_ptr, double arg_0)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = *(int *)((char *)this_ptr + 80);
 if (9 >= index)
 goto LABEL_401078;
 return;
LABEL_401078:
 *((unsigned int *)((char *)this_ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)this_ptr + 8 * index)) = v2;
 *((unsigned int *)((char *)this_ptr + 80)) = index + 1;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401090
double Container_double_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_4010a8;
 return 0.0;
LABEL_4010a8:
 if (arg_0 >= *(int *)((char *)this_ptr + 80))
 return 0.0;
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010bc
int Container_double_getSize(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4010c4
RTTIDerivedA::~RTTIDerivedA()
{
 ::operator delete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010c8
void RTTIDerivedA::getType()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010d0
RTTIBase::~RTTIBase()
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010d4
RTTIDerivedB::~RTTIDerivedB()
{
 ::operator delete(this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010d8
void RTTIDerivedB::getType()
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


