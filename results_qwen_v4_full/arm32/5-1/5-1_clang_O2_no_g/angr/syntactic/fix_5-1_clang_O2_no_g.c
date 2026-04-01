// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int armg_calculate_condition(unsigned int cond, unsigned int arg1, unsigned int arg2, unsigned int arg3) { return 0; }

// C++ exception handling runtime functions
void* __cxa_allocate_exception(unsigned int size) { return malloc(size); }
void __cxa_throw(void* exc, void* type_info, void* dest, ...) { }
void* __cxa_begin_catch(...) { return 0; }
void __cxa_end_catch(...) { }
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle) { return 0; }

// C++ memory allocation
void* operatornew(unsigned int size) { return malloc(size); }
void operatordelete(void* ptr) { free(ptr); }

// RTTI dynamic cast stub
unsigned int __dynamic_cast(void* obj, void* src_type, void* dst_type, unsigned int flags) { return 0; }

// RTTI dynamic cast
extern unsigned int __dynamic_cast(void* obj, void* src_type, void* dst_type, unsigned int flags);

/* CRT stub function _init removed by preprocessor */



// Function: sub_400854 at 0x400854
unsigned int g_412008 = 0;

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v1 = 0;
 v0 = v1;
 return (int)g_412008;
}


// Function: __dollar_a_27 at 0x400958
void _ZNSt8ios_base4InitD1Ev() { }
extern unsigned int __dso_handle;

void _ZStL8__ioinit() { }

int __dollar_a_27()
{
 unsigned int v0; // r0

 _ZStL8__ioinit();
 v0 = __cxa_atexit((void (*)(void))_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, (void*)&__dso_handle);
 return v0;
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
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
struct Base {
 void* vtable;
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 void (*func)(struct Base*, int) = (void (*)(struct Base*, int))((int**)arg_0)[0];
 func(arg_0, arg_1);
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











// Function: _Z18test_cpp_smart_ptrv at 0x400c98
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400ca4
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[4];
 void (*field_4)(struct_0 **, struct_1 *);
} struct_0;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char* g_411ed8;
extern char* g_411eec;

// Define missing global string variables
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
char g_40134c[] = "Test";
char g_411ed8_data = 0;
char g_411eec_data = 0;
char* g_411ed8 = &g_411ed8_data;
char* g_411eec = &g_411eec_data;

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
 *(ptr) = (struct_0 *)&g_411eec;
 result = __dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = __dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operatordelete(p);
 struct_1 s1;
 s1.field_0 = 0;
 (*ptr)->field_4(ptr, &s1);
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d70

unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
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
extern char* g_411ed8;
extern char* g_411eec;

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
 printf(g_4012f4, 0);
 printf(g_401311, 703);
 p = operatornew(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)operatornew(4);
 *(ptr) = (struct_0 *)&g_411eec;
 v22 = __dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag5 = __dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operatordelete(p);
 struct_1 s1;
 s1.field_0 = 0;
 (*ptr)->field_4(ptr, &s1);
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
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
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
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401020
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 else
 v1 = index;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401038
int Container_int_get(void* ptr, int arg_0)
{
 if (armg_calculate_condition(66, arg_0, 0, 0) == 0)
 {
  goto LABEL_401048;
 }
 return 0;
LABEL_401048:
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401058
unsigned int Container_int_getSize(void* ptr)
{
 return *((unsigned int *)((char*)ptr + 40));
}


// Function: _ZN9ContainerIdEC1Ev at 0x401060
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40106c
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int index; // r12

 index = *((unsigned int *)((char*)ptr + 80));
 if (9 >= index)
 {
  *((double *)((char *)ptr + 8 * index)) = arg_0;
  *((unsigned int *)((char*)ptr + 80)) = index + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401090
double Container_double_get(void* ptr, int arg_0)
{
 if (armg_calculate_condition(66, arg_0, 0, 0) == 0)
 {
  goto LABEL_4010a8;
 }
 return 0.0;
LABEL_4010a8:
 if (arg_0 >= (int)*((unsigned int *)((char*)ptr + 80)))
 {
 }
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010bc
unsigned int Container_double_getSize(void* ptr)
{
 return *((unsigned int *)((char*)ptr + 80));
}





// Function: _ZN12RTTIDerivedAD0Ev at 0x4010c4
int RTTIDerivedA_destructor(void* ptr)
{
 operatordelete(ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010c8
void RTTIDerivedA_getType(void* ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010d0
int RTTIBase_destructor(void* ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010d4
int RTTIDerivedB_destructor(void* ptr)
{
 operatordelete(ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010d8
void RTTIDerivedB_getType(void* ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


