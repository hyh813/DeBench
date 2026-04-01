// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* CRT stub function _init removed by preprocessor */

int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 0;
}

// C++ exception handling runtime functions
extern void* __cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void* thrown_exception, void* tinfo, void* dest);
extern void* __cxa_begin_catch(void* exception_object);
extern void __cxa_end_catch();
extern void __cxa_end_cleanup();
extern void __cxa_rethrow();
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return 0;
}

// C++ operator new/delete
void* operatornew(unsigned int size)
{
 return malloc(size);
}
void operatordelete(void* ptr)
{
 free(ptr);
}

// Dynamic cast runtime function
void* __dynamic_cast(void* src_ptr, void* src_type, void* dst_type, unsigned int src_ptr_dist)
{
 return src_ptr;
}

// Typeinfo stubs
unsigned int _ZTI8RTTIBase = 0;
unsigned int _ZTI12RTTIDerivedA = 0;
unsigned int _ZTI12RTTIDerivedB = 0;



// Function: sub_400854 at 0x400854
unsigned int g_412008 = 0;

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return ((int(*)())g_412008)();
}


// Function: __dollar_a_27 at 0x400958
extern void _ZNSt8ios_base4InitD1Ev();
void _ZStL8__ioinit()
{
}
extern unsigned int __dso_handle;

int __dollar_a_27()
{
 unsigned int v0; // r0

 _ZStL8__ioinit();
 v0 = __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, (void*)&__dso_handle);
 return __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, (void*)&__dso_handle);
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
 (void)strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void (*func_ptr)() = (void(*)())(*((int *)arg_0));
 func_ptr();
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











// Function: _Z18test_cpp_smart_ptrv at 0x400ca4
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400cb0
typedef struct struct_0 {
 char padding_0[4];
 void (*field_4)(struct struct_0*, void*);
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
char g_411ed8[4] = {0};
char g_411eec[4] = {0};

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
 p = operatornew(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)operatornew(4);
 *(ptr) = (struct_0 *)g_411eec;
 result = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = (unsigned int)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operatordelete(p);
 (*ptr)->field_4(*ptr, (void*)(*ptr)->field_4);
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d7c

unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
char g_401201[] = "%d\n";
char g_40121f[] = "%d\n";
char g_40123b[] = "%d\n";
char g_401257[] = "%d\n";
char g_401273[] = "%d\n";
char g_401290[] = "%d\n";
char g_4012ac[] = "%d\n";
char g_4012c8[] = "%d\n";
char g_4012e4[] = "%d\n";
char g_401300[] = "%d\n";
char g_40131d[] = "%d\n";
char g_40133a[] = "%d\n";
char g_401358[] = "Test\n";

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
 puts(g_401358);
 strncpy(&v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 flag2 = 0;
 flag3 = 0;
 v0 = 10;
 flag4 = 0;
 printf(g_401201, strlen(&v1) + 4700);
 printf(g_40121f, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_40123b, 42);
 printf(g_401257, 71);
 printf(g_401273, 650);
 printf(g_401290, 22);
 printf(g_4012ac, 39);
 printf(g_4012c8, 16);
 printf(g_4012e4, 85);
 printf(g_401300, 0);
 printf(g_40131d, 703);
 p = operatornew(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)operatornew(4);
 *(ptr) = (struct_0 *)g_411eec;
 v22 = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag5 = (unsigned int)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operatordelete(p);
 (*ptr)->field_4(*ptr, (void*)(*ptr)->field_4);
 v24 = (!v22 ? 30 : 130);
 if (flag5)
 v24 += 200;
 printf(g_40133a, v24 + 14);
 return;
}


// Function: main at 0x400fb8
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400fcc
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400fd8
int __aeabi_dcmpgt()
{
 return 0;
}

void template_max_double()
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
 result = __aeabi_dcmpgt();
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return;
 }
 else
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return;
 }
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40100c
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401020
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40102c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = (int)*((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char *)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401044
void Container_int_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401054;
 return;
LABEL_401054:
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401064
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40106c
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401078
void Container_double_push(void* ptr)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = (int)*((unsigned int *)((char *)ptr + 80));
 if (9 >= index)
 goto LABEL_401084;
 return;
LABEL_401084:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 *((unsigned int *)((char *)ptr + 80)) = index + 1;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40109c
void Container_double_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_4010b4;
 return;
LABEL_4010b4:
 if (arg_0 >= (int)((unsigned int*)this_ptr)[20])
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010c8
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4010d0
void RTTIDerivedA_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010d4
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010dc
void RTTIBase_destructor(void* this_ptr)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010e0
void RTTIDerivedB_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010e4
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


