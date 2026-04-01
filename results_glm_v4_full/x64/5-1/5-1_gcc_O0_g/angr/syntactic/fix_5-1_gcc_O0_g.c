// Angr Decompilation of 5-1_gcc_O0_g
// Platform: AMD64

#include <stdlib.h>
#include <new>
#include <memory>
#include <string.h>
#include <typeinfo>
#include <cxxabi.h>

// Forward declarations for operatordelete
void operatordelete(void* ptr);
void operatordelete(void* ptr, unsigned long size);
void operatordelete[](void* ptr);
void* operatornew(unsigned long size);
void* operatornew[](unsigned long size);

// Forward declaration for _Unwind_Resume
void _Unwind_Resume(void *exception_object) __attribute__((noreturn));

// Forward declaration for __stack_chk_fail
void __stack_chk_fail(void) __attribute__((noreturn));

// Forward declaration for SimpleClass
typedef struct SimpleClass {
    unsigned int value;
    char name[32];
} SimpleClass;

struct SimpleClass* SimpleClass_SimpleClass(struct SimpleClass* ptr, unsigned int v2, char* v3);
void SimpleClass_setValue(struct SimpleClass* ptr, unsigned int v2);
unsigned int SimpleClass_getValue(struct SimpleClass* v1);
unsigned int SimpleClass_compute(struct SimpleClass* v1, unsigned int v3);

// Forward declaration for LifecycleClass
typedef struct LifecycleClass {
    unsigned long long field_0;
    unsigned long long field_1;
} LifecycleClass;

long long LifecycleClass_LifecycleClass(void* ptr, unsigned long long v3);
int LifecycleClass_destructor(void* self);
long long LifecycleClass_getData(void *v2, unsigned long v1);
long long LifecycleClass_getInstanceCount();

// Forward declaration for Point
typedef struct Point {
    int x;
    int y;
} Point;

struct Point* Point_Point(struct Point* ptr, int x, int y);
struct Point* Point_operator_plus(struct Point* a, struct Point* b);
int Point_operator_equal(struct Point* a, struct Point* b);
struct Point* Point_operator_increment(struct Point* ptr);

// Function: _ZNSt11_Tuple_imp
struct struct_0;

extern struct struct_0 *g_408fe8;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_408fe8;
 if (g_408fe8)
 v1 = ((unsigned long long *(*)())g_408fe8)();
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_408f18;
extern unsigned long long g_408f20;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_408f18;
 goto *(void *)g_408f20;
}


// Function: sub_40202d at 0x40202d
void sub_40202d()
{
 sub_402030();
 return;
}


// Function: sub_402030 at 0x402030
void sub_402030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_402020();
 return;
}


// Function: sub_40203f at 0x40203f
void sub_40203f()
{
 sub_402040();
 return;
}


// Function: sub_402040 at 0x402040
void sub_402040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_402020();
 return;
}


// Function: sub_40204f at 0x40204f
void sub_40204f()
{
 sub_402050();
 return;
}


// Function: sub_402050 at 0x402050
void sub_402050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_402020();
 return;
}


// Function: sub_40205f at 0x40205f
void sub_40205f()
{
 sub_402060();
 return;
}


// Function: sub_402060 at 0x402060
void sub_402060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_402020();
 return;
}


// Function: sub_40206f at 0x40206f
void sub_40206f()
{
 sub_402070();
 return;
}


// Function: sub_402070 at 0x402070
void sub_402070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_402020();
 return;
}


// Function: sub_40207f at 0x40207f
void sub_40207f()
{
 sub_402080();
 return;
}


// Function: sub_402080 at 0x402080
void sub_402080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_402020();
 return;
}


// Function: sub_40208f at 0x40208f
void sub_40208f()
{
 sub_402090();
 return;
}


// Function: sub_402090 at 0x402090
void sub_402090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_402020();
 return;
}


// Function: sub_40209f at 0x40209f
void sub_40209f()
{
 sub_4020a0();
 return;
}


// Function: sub_4020a0 at 0x4020a0
void sub_4020a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_402020();
 return;
}


// Function: sub_4020af at 0x4020af
void sub_4020af()
{
 sub_4020b0();
 return;
}


// Function: sub_4020b0 at 0x4020b0
void sub_4020b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_402020();
 return;
}


// Function: sub_4020bf at 0x4020bf
void sub_4020bf()
{
 sub_4020c0();
 return;
}


// Function: sub_4020c0 at 0x4020c0
void sub_4020c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_402020();
 return;
}


// Function: sub_4020cf at 0x4020cf
void sub_4020cf()
{
 sub_4020d0();
 return;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_402020();
 return;
}


// Function: sub_4020df at 0x4020df
void sub_4020df()
{
 sub_4020e0();
 return;
}


// Function: sub_4020e0 at 0x4020e0
void sub_4020e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_402020();
 return;
}


// Function: sub_4020ef at 0x4020ef
void sub_4020ef()
{
 sub_4020f0();
 return;
}


// Function: sub_4020f0 at 0x4020f0
void sub_4020f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_402020();
 return;
}


// Function: sub_4020ff at 0x4020ff
void sub_4020ff()
{
 sub_402100();
 return;
}


// Function: sub_402100 at 0x402100
void sub_402100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_402020();
 return;
}


// Function: sub_40210f at 0x40210f
void sub_40210f()
{
 sub_402110();
 return;
}


// Function: sub_402110 at 0x402110
void sub_402110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_402020();
 return;
}


// Function: sub_40211f at 0x40211f
void sub_40211f()
{
 sub_402120();
 return;
}


// Function: sub_402120 at 0x402120
void sub_402120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_402020();
 return;
}


// Function: sub_40212f at 0x40212f
void sub_40212f()
{
 sub_402130();
 return;
}


// Function: sub_402130 at 0x402130
void sub_402130()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 16;
 sub_402020();
 return;
}


// Function: sub_40213f at 0x40213f
void sub_40213f()
{
 sub_402140();
 return;
}


// Function: sub_402140 at 0x402140
void sub_402140()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 17;
 sub_402020();
 return;
}


// Function: sub_40214f at 0x40214f
void sub_40214f()
{
 sub_402150();
 return;
}


// Function: sub_402150 at 0x402150
void sub_402150()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 18;
 sub_402020();
 return;
}


// Function: sub_40215f at 0x40215f
void sub_40215f()
{
 sub_402160();
 return;
}


// Function: sub_402160 at 0x402160
void sub_402160()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 19;
 sub_402020();
 return;
}


// Function: sub_40216f at 0x40216f
void sub_40216f()
{
 sub_402170();
 return;
}


// Function: sub_402170 at 0x402170
void sub_402170()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 20;
 sub_402020();
 return;
}


// Function: sub_40217f at 0x40217f
void sub_40217f()
{
 __cxa_finalize();
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_402305 at 0x402305
void sub_402305()
{
 __builtin_trap();
}


// Function: sub_402306 at 0x402306
void sub_402306()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402339 at 0x402339
void sub_402339()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402379 at 0x402379
void sub_402379()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4023b5 at 0x4023b5
void sub_4023b5()
{
}


// Function: sub_4023b9 at 0x4023b9
void sub_4023b9()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4023c9 at 0x4023c9
void sub_4023c9()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4023ca
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 struct SimpleClass v3; // [bp-0x38]

 SimpleClass_SimpleClass(&v3, 5, "Test");
 SimpleClass_setValue(&v3, 10);
 v0 = SimpleClass_getValue(&v3);
 v1 = SimpleClass_compute(&v3, 3);
 v2 = 0;
 return;
}


// Function: _Z20test_cpp_constructorv at 0x40245c
void test_cpp_constructor()
{
 unsigned long long v3; // rdi
 unsigned long long v4; // rsi
 unsigned long long v5; // rdx
 unsigned long long v6; // rcx
 unsigned long long v7; // r8
 unsigned long long v8; // r9
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]

 v0 = 0;
 LifecycleClass_LifecycleClass(&v1, 5);
 v0 += (int)LifecycleClass_getData(&v1, 2);
 v0 += (int)LifecycleClass_getInstanceCount();
 v0 += (int)LifecycleClass_getInstanceCount() * 1000;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4024de
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void* vtable = *(void**)arg_0;
 long long (*vfn)(void*, int, int, void*) = (long long (*)(void*, int, int, void*))*(void**)vtable;
 vfn(arg_0, arg_1, arg_1, vtable);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x40250b
class Base {
} Base;

extern char g_408b50;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x60]
 unsigned int v1; // [bp-0x5c]
 unsigned int v2; // [bp-0x58]
 unsigned int v3; // [bp-0x54]
 unsigned long v4; // [bp-0x50]
 Base *v5; // [bp-0x48]
 Base *v6; // [bp-0x40]
 char v7; // [bp-0x38]
 unsigned long v8; // [bp-0x20]

 v8 = 0;
 v4 = &g_408b50;
 Derived_Derived((Derived_struct*)&v7, 3);
 v0 = (unsigned int)Base_virtual_func((void*)&v4, 5);
 v1 = (unsigned int)Derived_virtual_func((Derived_struct*)&v7, 5);
 v5 = (Base*)&v4;
 v6 = (Base*)&v7;
 v2 = (unsigned int)call_virtual_func(v5, 5);
 v3 = (unsigned int)call_virtual_func(v6, 5);
 if (v8 == 0)
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4025e1 at 0x4025e1
long long sub_4025e1()
{
 unsigned long long v1; // rax

 _Unwind_Resume((void*)v1); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402616
void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x64]
 unsigned int v1; // [bp-0x60]
 unsigned int v2; // [bp-0x5c]
 char *v3; // [bp-0x58]
 char *v4; // [bp-0x50]
 char v5; // [bp-0x48]
 unsigned int v6; // [bp-0x40]
 char v7; // [bp-0x38]
 unsigned int v8; // [bp-0x30]
 unsigned long v9; // [bp-0x20]

 v9 = 0;
 MultiDerived_MultiDerived(&v5);
 v6 = 100;
 v8 = 200;
 v3 = (char*)&v5;
 v4 = (char*)&v7;
 v0 = ((long long (*)(void*))(unsigned long long)*(void**)v3)(v3);
 v1 = ((long long (*)(void*))(unsigned long long)*(void**)v4)(v4);
 v2 = v3 != v4;
 if (v9 == 0)
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4026ca at 0x4026ca
long long sub_4026ca()
{
 unsigned long long v1; // rax

 _Unwind_Resume((void*)v1); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4026f3
void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x68]
 unsigned int v1; // [bp-0x64]
 char *v2; // [bp-0x60]
 char v3; // [bp-0x58]
 char v4; // [bp-0x38]
 unsigned int v5; // [bp-0x30]
 unsigned long v6; // [bp-0x20]

 v6 = 0;
 DiamondDerived_DiamondDerived(&v3);
 v5 = 50;
 v2 = (char*)&v4;
 v0 = ((long long (*)(void*))(long long)(*(long long*)v2))(v2);
 v5 = 100;
 v1 = ((long long (*)(void*))(long long)(*(long long*)v2))(v2);
 if (v6 == 0)
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402789 at 0x402789
long long sub_402789()
{
 unsigned long long v1; // rax

 _Unwind_Resume((void*)v1); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x4027b2
void test_cpp_operator_overload()
{
 char result; // [bp-0x29]
 char v1; // [bp-0x28]
 char v2; // [bp-0x20]
 unsigned long v3; // [bp-0x18]

 Point_Point((Point*)&v1, 1, 2);
 Point_Point((Point*)&v2, 3, 4);
 v3 = (unsigned long)Point_operator_plus((Point*)&v1, (Point*)&v2);
 result = (char)Point_operator_equal((Point*)&v1, (Point*)&v2);
 Point_operator_increment((Point*)&v1);
 if (!result)
 return;
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402864
void test_cpp_template_func()
{
 unsigned long long v5; // rdi
 unsigned long long v6; // rsi
 unsigned long long v7; // rdx
 unsigned long long v8; // rcx
 unsigned long long v9; // r8
 unsigned long long v10; // r9
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned long long v3; // [bp-0x18]

 v2 = template_max<int>(3, 7);
 v3 = 0x4004000000000000;
 template_max<double>(3.5, 7.5);
 v0 = 10;
 v1 = 20;
 template_swap<int>(&v0, &v1);
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402906
void test_cpp_template_class()
{
 unsigned int v0; // [bp-0xa8]
 unsigned int v1; // [bp-0xa4]
 unsigned long long v2; // [bp-0xa0]
 char v3; // [bp-0x98]
 char v4; // [bp-0x68]

 Container_int_Constructor((Container_int_struct*)&v3);
 Container_int_push(&v3, 10);
 Container_int_push(&v3, 20);
 Container_int_push(&v3, 30);
 v0 = (unsigned int)Container_int_get((unsigned int*)&v3, 0);
 v1 = (unsigned int)Container_int_getSize((Container_int_struct*)&v3);
 Container_double_Constructor((Container_double_struct*)&v4);
 Container_double_push((Container_double_struct*)&v4, 0);
 Container_double_get((unsigned long long*)&v4, 0);
 v2 = 4614253070214989087;
 return;
}


// Function: sub_402a11 at 0x402a11
void sub_402a11(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x402a12
typedef struct lambda_struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct lambda_struct_1 *field_8;
} lambda_struct_0;

typedef struct lambda_struct_1 {
 unsigned int field_0;
} lambda_struct_1;

int test_cpp_lambda_operator_call_const(lambda_struct_0 *idx, unsigned int a1)
{
 idx->field_8->field_0 = idx->field_8->field_0 + 5;
 return idx->field_8->field_0 + a1 * idx->field_0;
}


// Function: _Z15test_cpp_lambdav at 0x402a4e
void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int *v5; // [bp-0x20]

 v1 = 10;
 v0 = 20;
 v4 = v1;
 v5 = &v0;
 v2 = test_cpp_lambda_operator_call_const(&v4, 3);
 v3 = 30;
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x402abe
extern unsigned long long CXXABI_1_3::_ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned int result; // [bp-0x34]

 result = 0;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &CXXABI_1_3::_ZTIi, 0, &CXXABI_1_3::_ZTIi);
 return;
}


// Function: sub_402b03 at 0x402b03
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_402b03(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long result; // rdx
 unsigned long long v4; // rax
 unsigned long long v5; // rcx
 unsigned long long v6; // r8
 unsigned long long v7; // r9
 unsigned long long v8; // rax
 unsigned long long v9; // rdx
 unsigned char *ptr; // rbp
 unsigned long long ptr2; // rax
 unsigned long v12; // rax
 unsigned int v1; // [bp+0xfffdc]
 unsigned int v2; // [bp+0xfffe0]

 result = a2;
 if (result == 1)
 {
 v2 = *((int *)__cxa_begin_catch(v4));
 v1 = v2 + *(int *)(((unsigned char *)&ptr2) - 44);
 v8 = __cxa_rethrow(a0, a1, a2, v5, v6, v7);
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 result = v9;
 }
 if (result != 1)
 _Unwind_Resume(v8); /* do not return */
 *((int *)&ptr[36]) = *((int *)__cxa_begin_catch(v8));
 *((unsigned int *)&ptr[44]) = *((unsigned int *)&ptr[44]) + *((unsigned int *)&ptr[36]) * 2;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 ptr2 = __cxa_allocate_exception(1);
 v12 = __cxa_throw(ptr2, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, ptr2);
 if (v9 != 2)
 {
 if (v9 != 3)
 _Unwind_Resume(v12); /* do not return */
 *((unsigned long long *)&ptr[32]) = __cxa_begin_catch(v12);
 *((unsigned int *)&ptr[44]) = (int)ptr[44] + 200;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 }
 else
 {
 *((unsigned long long *)&ptr[24]) = __cxa_begin_catch(v12);
 *((unsigned int *)&ptr[44]) = (int)ptr[44] + 100;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 }
}


// Function: sub_402be3 at 0x402be3
void sub_402be3(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x402be4
typedef struct lambda_struct_2 {
 unsigned int* (*operator_call)(void*, unsigned int*);
} lambda_struct_2;

unsigned int * test_cpp_smart_ptr_lambda_operator_call_const(lambda_struct_2 *self, unsigned int *ptr)
{
 unsigned int *v2; // rax

 *(ptr) = 4294967295;
 v2 = ptr;
 if (v2)
 {
 ::operator delete(v2);
 v2 = 0;
 }
 return v2;
}


// Function: _Z18test_cpp_smart_ptrv at 0x402c17
void test_cpp_smart_ptr()
{
 unsigned long ptr6; // fs
 unsigned int *p; // rax
 unsigned long long v12; // rax
 unsigned int *ptr3; // rax
 unsigned int *ptr4; // rax
 unsigned int *ptr5; // rax
 unsigned int *ptr; // rax
 unsigned int *addr; // rax
 char v0; // [bp-0x4d]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 char v4; // [bp-0x40]
 char v5; // [bp-0x38]
 char v6; // [bp-0x30]
 char v7; // [bp-0x28]
 unsigned long v8; // [bp-0x20]

 v8 = *((long long *)(40 + ptr6));
 p = (unsigned int *)operatornew(4);
 *(p) = 100;
 std_unique_ptr_int_default_delete_int___unique_ptr_ptr(&v4, p);
 *((unsigned int *)std_unique_ptr_int_operator_star(&v4)) = 200;
 v12 = std_move_unique_ptr_int_default_delete_int_(&v4);
 std_unique_ptr_int_default_delete_int___unique_ptr_move(&v5, v12);
 v1 = *((unsigned int *)(unsigned long)std_unique_ptr_int_operator_star(&v5));
 ptr3 = (unsigned int *)operatornew(20);
 ptr3[0] = 1;
 ptr4 = &ptr3[1];
 ptr4[0] = 2;
 ptr5 = &ptr4[1];
 ptr5[0] = 3;
 ptr = &ptr5[1];
 ptr[0] = 4;
 ptr[1] = 5;
 std_unique_ptr_int_array_default_delete_int_array___unique_ptr(&v6, ptr3);
 v2 = *((int *)std_unique_ptr_int_array_default_delete_int_array___operator_index((unsigned long long)&v6, 2));
 addr = (unsigned int *)operatornew(4);
 *(addr) = 500;
 std_unique_ptr_int_test_cpp_smart_ptr_lambda__unique_ptr(&v7, addr, &v0);
 v3 = *((unsigned int *)std_unique_ptr_int_test_cpp_smart_ptr_lambda__operator_star_const((unsigned long long)&v7));
 if (v8 == *((long long *)(40 + ptr6)))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402d7b at 0x402d7b
long long sub_402d7b()
{
 unsigned long long v1; // rax

 _Unwind_Resume((void*)v1); /* do not return */
}


// Function: sub_402d90 at 0x402d90
void sub_402d90()
{
}


// Function: _Z13test_cpp_rttiv at 0x402dc5
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
 void* *ptr; // rbx
 void* *p; // rbx
 void* *v10; // rax
 unsigned int cur; // [bp-0x3c]
 void* *result; // [bp-0x38]
 void* *flag1; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 unsigned long long v4; // [bp-0x20]

 ptr = (void**)operatornew(8);
 *(ptr) = NULL;
 RTTIDerivedA_RTTIDerivedA(ptr);
 result = ptr;
 p = (void**)operatornew(8);
 *(p) = NULL;
 RTTIDerivedB_RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid();
 }
 else if (!(std_type_info_eq(*(void**)((unsigned char*)(*(result)) + 8), (void*)((unsigned long long)&_ZTI12RTTIDerivedA)) & 255))
 {
 goto LABEL_402e4a;
 }
 cur += 10;
LABEL_402e4a:
 if (!flag1)
 {
 __cxa_bad_typeid();
 }
 else if (!(std_type_info_eq(*(void**)((unsigned char*)(*(flag1)) + 8), (void*)((unsigned long long)&_ZTI12RTTIDerivedB)) & 255))
 {
 goto LABEL_402e7b;
 }
 cur += 20;
LABEL_402e7b:
 v3 = (!result ? 0 : (unsigned long long)__dynamic_cast(result, (void*)((unsigned long long)&_ZTI8RTTIBase), (void*)((unsigned long long)&_ZTI12RTTIDerivedA), NULL));
 if (v3)
 cur += (unsigned int)RTTIDerivedA_derivedA_data((void*)v3);
 v4 = (!flag1 ? 0 : (unsigned long long)__dynamic_cast(flag1, (void*)((unsigned long long)&_ZTI8RTTIBase), (void*)((unsigned long long)&_ZTI12RTTIDerivedB), NULL));
 if (v4)
 cur += (unsigned int)RTTIDerivedB_derivedB_data((void*)v4);
 if (result)
 {
 cur += (unsigned int)strlen(std_type_info_name((void*)((unsigned long long)*(void**)((unsigned char*)(*(result)) + 8))));
 v10 = result;
 if (!v10)
 goto LABEL_402f4e;
 }
 else
 {
 v10 = (void**)(unsigned long long)_ZNKSt9type_info4nameEv();
 }
LABEL_402f4e:
 if (flag1)
 {
 void* vtable = *(void**)flag1;
 void (*dtor)(void*) = (void (*)(void*))(*(long long*)((unsigned char*)vtable + 8));
 dtor(flag1);
 }
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402f6f
extern char g_405040;
extern char g_405064;
extern char g_405082;
extern char g_40509e;
extern char g_4050ba;
extern char g_4050d6;
extern char g_4050f3;
extern char g_40510f;
extern char g_40512b;
extern char g_405147;
extern char g_405163;
extern char g_405180;
extern char g_40519d;

void test_cpp_oo_features()
{
 puts(&g_405040);
 test_cpp_member_func();
 printf(&g_405064, 0);
 test_cpp_constructor();
 printf(&g_405082, 0);
 test_cpp_virtual_func();
 printf(&g_40509e, 0);
 test_cpp_multiple_inheritance();
 printf(&g_4050ba, 0);
 test_cpp_diamond_inheritance();
 printf(&g_4050d6, 0);
 test_cpp_operator_overload();
 printf(&g_4050f3, 0);
 test_cpp_template_func();
 printf(&g_40510f, 0);
 test_cpp_template_class();
 printf(&g_40512b, 0);
 test_cpp_lambda();
 printf(&g_405147, 0);
 test_cpp_exception();
 printf(&g_405163, 0);
 test_cpp_smart_ptr();
 printf(&g_405180, 0);
 test_cpp_rtti();
 printf(&g_40519d, 0);
 return;
}


// Function: main at 0x4030cd
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_4030e1 at 0x4030e1
void sub_4030e1(unsigned long a0, unsigned long a1, unsigned long a2)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x4030e2
long long std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false___uniq_ptr_data(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl(a0, a1, a2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x403110
long long std_unique_ptr_int_test_cpp_smart_ptr_lambda__unique_ptr(char *a0, unsigned int *a1, char *a2)
{
 return std___uniq_ptr_data_int_test_cpp_smart_ptr_lambda_true_false___uniq_ptr_data(a0, a1, a2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x40313e
unsigned long long * std_unique_ptr_int_test_cpp_smart_ptr_lambda__unique_ptr_destructor(unsigned long long a0)
{
 unsigned long long v2; // rbx
 unsigned int **v3; // rax
 unsigned long long *ptr; // [bp-0x20]

 ptr = (unsigned long long *)std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(a0);
 if (*(ptr))
 {
 v2 = std_unique_ptr_int_test_cpp_smart_ptr_lambda__get_deleter(a0);
 v3 = std_move_int_ptr_ref(ptr);
 test_cpp_smart_ptr_lambda_operator_call_const(v2, *(v3));
 }
 *(ptr) = 0;
 return ptr;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x4031a2
long long std_unique_ptr_int_test_cpp_smart_ptr_lambda__operator_star_const(unsigned long long v1)
{
 return (long long)std_unique_ptr_int_test_cpp_smart_ptr_lambda__get_const(v1);
}


// Function: sub_4031c3 at 0x4031c3
void sub_4031c3(unsigned long a0, unsigned long a1, unsigned long a2)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x4031c4
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda___uniq_ptr_impl(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
 unsigned long v0; // [bp-0x28]

 v0 = a1;
 return std_tuple_int_test_cpp_smart_ptr_lambda__tuple(a0, &v0, std_forward_test_cpp_smart_ptr_lambda__const(a2));
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x403202
unsigned long long** std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr(unsigned long long a0)
{
 return (unsigned long long**)std_get_0ul_int_test_cpp_smart_ptr_lambda_(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x40321c
void* std_unique_ptr_int_test_cpp_smart_ptr_lambda__get_deleter(unsigned long long a0)
{
 return (void*)std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(a0);
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x403236
long long std_unique_ptr_int_test_cpp_smart_ptr_lambda__get_const(unsigned long long a0)
{
 return std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr_const(a0);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x403250
long long std_forward_test_cpp_smart_ptr_lambda__const(unsigned long long a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x40325e
long long std_tuple_int_test_cpp_smart_ptr_lambda__tuple(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v1;
 unsigned long long v2;
 unsigned long long v3;

 v1 = a1;
 v2 = std_forward_test_cpp_smart_ptr_lambda__const(a2);
 return std__Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda___Tuple_impl(a0, std_forward_int__ref(v3), v2);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4032ac
void* std_get_0ul_int_test_cpp_smart_ptr_lambda_(void* a0)
{
 void* result = std___get_helper_0ul_int_test_cpp_smart_ptr_lambda_(a0);
 return result ? *(void**)result : NULL;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x4032c6
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_deleter(unsigned long long a0)
{
 return std_get_1ul_int_test_cpp_smart_ptr_lambda_(a0);
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x4032e0
void* std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda__M_ptr_const(const void* a0)
{
 unsigned long long** ptr = (unsigned long long**)std_get_0ul_int_test_cpp_smart_ptr_lambda__const(a0);
 return ptr ? (void*)*ptr : 0;
}


// Function: sub_4032fd at 0x4032fd
void sub_4032fd(unsigned long a0, unsigned long a1, unsigned long a2)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x4032fe
long long std__Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda___Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
 unsigned long v1; // rax

 v1 = (unsigned long)std_forward_test_cpp_smart_ptr_lambda__const(a2);
 std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda___Tuple_impl(a0, v1, v1);
 return std__Head_base_0ul_int___Head_base_int_ref(a0, std_forward_int__ref(a1));
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x403353
void* std___get_helper_0ul_int_test_cpp_smart_ptr_lambda_(void* a0)
{
 return std__Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda___M_head(a0);
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x40336d
long long std_get_1ul_int_test_cpp_smart_ptr_lambda_(unsigned long long a0)
{
 return std___get_helper_1ul_test_cpp_smart_ptr_lambda_(a0);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x403387
void* std_get_0ul_int_test_cpp_smart_ptr_lambda__const(const void* a0)
{
 return std___get_helper_0ul_int_test_cpp_smart_ptr_lambda__const(a0);
}


// Function: sub_4033a1 at 0x4033a1
void sub_4033a1(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x4033a2
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda___Tuple_impl(unsigned long long a0, unsigned long long a1)
{
 return (long long)std__Head_base_1ul_test_cpp_smart_ptr_lambda___Head_base(a0, a1, a1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x4033c8
void* std__Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda___M_head(void* a0)
{
 return std__Head_base_0ul_int__M_head(a0);
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4033e2
long long std___get_helper_1ul_test_cpp_smart_ptr_lambda_(unsigned long long a0)
{
 return std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda___M_head(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4033fc
void* std___get_helper_0ul_int_test_cpp_smart_ptr_lambda__const(const void* a0)
{
 return (void*)std__Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda___M_head_const(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x403416
long long std__Head_base_1ul_test_cpp_smart_ptr_lambda___Head_base(long long ptr, long long arg)
{
 return ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x403425
long long std__Tuple_impl_1ul_test_cpp_smart_ptr_lambda___M_head(unsigned long long a0)
{
 return std__Head_base_1ul_test_cpp_smart_ptr_lambda__M_head(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x403459
long long std__Head_base_1ul_test_cpp_smart_ptr_lambda__M_head(unsigned long a0)
{
 return (long long)*(void**)a0;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x40343f
void* std__Tuple_impl_0ul_int_test_cpp_smart_ptr_lambda___M_head_const(const void* a0)
{
 return std__Head_base_0ul_int__M_head((unsigned long long)a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x403459
long long std__Head_base_1ul_test_cpp_smart_ptr_lambda__M_head(unsigned long a0)
{
 return (long long)a0;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x403467
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
 if (arg_0 != 1)
 {
 return;
 }
 else if (arg_1 == 65535)
 {
 std::ios_base::Init::Init(&_ZStL8__ioinit);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
 }
 else
 {
 return;
 }
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4034bd
void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 65535);
 return;
}


// Function: _ZNKSt9type_info4nameEv at 0x4034d6
char* std_type_info_name(void* self)
{
 unsigned char *self_bytes = (unsigned char *)self;
 void* name_ptr = (void*)(*(long long*)(self_bytes + 8));
 if (*((char *)name_ptr) != 42)
 return (char*)0;
 return (char*)name_ptr;
}


// Function: sub_403509 at 0x403509
void sub_403509(unsigned long a0, unsigned long a1)
{
 std::type_info::operator==((void*)a0, (void*)a1);
 return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x40350a
int std_type_info_eq(void* self, void* arg_0)
{
 unsigned char *self_bytes = (unsigned char *)self;
 unsigned char *arg_bytes = (unsigned char *)arg_0;
 void* self_name = (void*)(*(long long*)(self_bytes + 8));
 void* arg_name = (void*)(*(long long*)(arg_bytes + 8));
 if (self_name == arg_name || (*((char *)self_name) != 42 && !strcmp((char *)self_name, (char *)arg_name)))
 return 1;
 return 0;
}


// Function: sub_40356f at 0x40356f
void sub_40356f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 SimpleClass::SimpleClass(a0, a1, (char*)a2);
}


// Function: _ZN11SimpleClassC2EiPKc at 0x403570
typedef struct SimpleClass_struct {
 unsigned int field_0;
 char padding_4[28];
 char field_1c[4];
} SimpleClass_struct;

long long SimpleClass_SimpleClass(SimpleClass_struct *ptr, unsigned int v2, char *v3)
{
 ptr->field_0 = v2;
 strncpy(&ptr->padding_4, v3, 28);
 ptr->field_1c[0] = 0;
 return (long long)ptr;
}


// Function: sub_4035b7 at 0x4035b7
void sub_4035b7(unsigned long a0)
{
}


// Function: _ZNK11SimpleClass8getValueEv at 0x4035b8
long long SimpleClass_getValue(unsigned int *v1)
{
 return *(v1);
}


// Function: _ZN11SimpleClass8setValueEi at 0x4035cc
long long SimpleClass_setValue(unsigned int *ptr, unsigned int v2)
{
 *(ptr) = v2;
 return (long long)ptr;
}


// Function: sub_4035e7 at 0x4035e7
void sub_4035e7(unsigned long a0, unsigned long a1)
{
}


// Function: _ZNK11SimpleClass7computeEi at 0x4035e8
long long SimpleClass_compute(unsigned int *v1, unsigned int v3)
{
 unsigned long long len;

 len = strlen((char*)((unsigned long long)(v1 + 1)));
 return len + v3 * *(v1);
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403620
void SimpleClass_getClassID(void* self)
{
 return;
}


// Function: sub_40362f at 0x40362f
void sub_40362f(unsigned long a0, unsigned long a1)
{
}


// Function: _ZN14LifecycleClassC1Em at 0x403630
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_LifecycleClass(unsigned long long *ptr, unsigned long long v3)
{
 unsigned long long i;

 ptr[1] = v3;
 if (v3 <= 2305843009213693950)
 {
 ptr[0] = (unsigned long long)operatornew(v3 * 4);
 i = 0;
 }
 else
 {
 __cxa_throw_bad_array_new_length();
 }
 for (; i < v3; i += 1)
 {
 *((unsigned int *)(i * 4 + ptr[0])) = (unsigned int)i * 10;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return _ZN14LifecycleClass14instance_countE + 1;
}


// Function: _ZN14LifecycleClassD1Ev at 0x4036d0
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass_destructor(void* self)
{
 if (*((long long *)self))
 operatordelete[](*((long long *)self));
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return 0;
}


// Function: sub_40370d at 0x40370d
void sub_40370d(unsigned long a0, unsigned long a1)
{
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x40370e
long long LifecycleClass_getData(void *v2, unsigned long v1)
{
 unsigned long long *v2_cast = (unsigned long long *)v2;
 return (v1 < v2_cast[1] ? *((unsigned int *)(v1 * 4 + *(v2_cast))) : 4294967295);
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403749
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_getInstanceCount()
{
 return _ZN14LifecycleClass14instance_countE;
}


// Function: sub_403759 at 0x403759
void sub_403759(unsigned long a0, unsigned long a1)
{
}


// Function: _ZN4Base12virtual_funcEi at 0x40375a
long long Base_virtual_func(void* self, unsigned int v1)
{
 return v1 + 1;
}


// Function: sub_403771 at 0x403771
void sub_403771(unsigned long a0)
{
}


// Function: _ZNK4Base7getNameEv at 0x403772
void Base_getName(void* self)
{
 return;
}


// Function: sub_403787 at 0x403787
void sub_403787(unsigned long a0)
{
}


// Function: _ZN4BaseD1Ev at 0x403788
extern char g_408b50;

int Base_destructor(void* ptr)
{
 *((char **)ptr) = &g_408b50;
 return 0;
}


// Function: sub_4037a5 at 0x4037a5
void sub_4037a5(unsigned long a0)
{
}


// Function: _ZN4BaseD0Ev at 0x4037a6
int Base_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: sub_4037d5 at 0x4037d5
void sub_4037d5(unsigned long a0)
{
}


// Function: _ZN4BaseC2Ev at 0x4037d6
extern char g_408b50;

int Base_constructor(void* ptr)
{
 *((char **)ptr) = &g_408b50;
 return 0;
}


// Function: sub_4037f3 at 0x4037f3
void sub_4037f3(unsigned long a0, unsigned long a1)
{
}


// Function: _ZN7DerivedC1Ei at 0x4037f4
typedef struct Derived_struct {
 char padding_0[8];
 unsigned int field_8;
} Derived_struct;

extern char g_408b20;

long long Derived_Derived(Derived_struct *ptr, unsigned int v2)
{
 Base_constructor(ptr);
 *((char **)&ptr->padding_0[0]) = &g_408b20;
 ptr->field_8 = v2;
 return (long long)ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x40382e
typedef struct Derived_struct {
 char padding_0[8];
 unsigned int field_8;
} Derived_struct;

long long Derived_virtual_func(Derived_struct *v2, unsigned int v1)
{
 return v1 * v2->field_8;
}


// Function: _ZNK7Derived7getNameEv at 0x40384a
void Derived_getName(void* self)
{
 return;
}


// Function: sub_40385f at 0x40385f
void sub_40385f(unsigned long a0)
{
}


// Function: _ZN5BaseA5funcAEv at 0x403860
void BaseA_funcA(void* self)
{
 return;
}


// Function: sub_403873 at 0x403873
void sub_403873(unsigned long a0)
{
}


// Function: _ZN5BaseAD2Ev at 0x403874
extern char g_408af8;

int BaseA_destructor(void* ptr)
{
 *((char **)ptr) = &g_408af8;
 return 0;
}


// Function: sub_403891 at 0x403891
void sub_403891(unsigned long a0)
{
}


// Function: _ZN5BaseAD0Ev at 0x403892
int BaseA_deleting_destructor(void* self)
{
 operatordelete(self, 16);
 return 0;
}


// Function: sub_4038c1 at 0x4038c1
void sub_4038c1(unsigned long a0)
{
}


// Function: _ZN5BaseB5funcBEv at 0x4038c2
void BaseB_funcB(void* self)
{
 return;
}


// Function: sub_4038d5 at 0x4038d5
void sub_4038d5(unsigned long a0)
{
}


// Function: _ZN5BaseBD1Ev at 0x4038d6
extern char g_408ad0;

int BaseB_destructor(void* ptr)
{
 *((char **)ptr) = &g_408ad0;
 return 0;
}


// Function: sub_4038f3 at 0x4038f3
void sub_4038f3(unsigned long a0)
{
}


// Function: _ZN5BaseBD0Ev at 0x4038f4
int BaseB_deleting_destructor(void* self)
{
 operatordelete(self, 16);
 return 0;
}


// Function: sub_403923 at 0x403923
void sub_403923(unsigned long a0)
{
}


// Function: _ZN12MultiDerived5funcAEv at 0x403924
void MultiDerived_funcA(void* self)
{
 return;
}


// Function: sub_403937 at 0x403937
void sub_403937(unsigned long a0)
{
}


// Function: _ZN12MultiDerived5funcBEv at 0x403938
void MultiDerived_funcB(void* self)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x40394b
void non-virtual thunk to MultiDerived::funcB()(void* a0)
{
 MultiDerived::funcB(a0 - 16);
 return;
}


// Function: sub_403955 at 0x403955
void sub_403955(unsigned long a0)
{
}


// Function: _ZN5BaseAC1Ev at 0x403956
extern char g_408af8;

int BaseA_constructor(void* ptr)
{
 *((char **)ptr) = &g_408af8;
 return 0;
}


// Function: sub_403973 at 0x403973
void sub_403973(unsigned long a0)
{
}


// Function: _ZN5BaseBC2Ev at 0x403974
extern char g_408ad0;

int BaseB_constructor(void* ptr)
{
 *((char **)ptr) = &g_408ad0;
 return 0;
}


// Function: sub_403991 at 0x403991
void sub_403991(unsigned long a0)
{
}


// Function: _ZN12MultiDerivedC2Ev at 0x403992
extern char g_408a78;
extern char g_408aa8;

long long MultiDerived_MultiDerived(void* ptr)
{
 BaseA_constructor(ptr);
 BaseB_constructor((char*)ptr + 16);
 *((char **)ptr) = &g_408a78;
 *((char **)&ptr[16]) = &g_408aa8;
 return (long long)ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x4039de
void VirtualBase_func(void* self)
{
 return;
}


// Function: sub_4039f1 at 0x4039f1
void sub_4039f1(unsigned long a0)
{
}


// Function: _ZN11VirtualBaseD2Ev at 0x4039f2
extern char g_408a50;

int VirtualBase_destructor(void* ptr)
{
 *((char **)ptr) = &g_408a50;
 return 0;
}


// Function: sub_403a0f at 0x403a0f
void sub_403a0f(unsigned long a0)
{
}


// Function: _ZN11VirtualBaseD0Ev at 0x403a10
int VirtualBase_deleting_destructor(void* self)
{
 operatordelete(self, 16);
 return 0;
}


// Function: sub_403a3f at 0x403a3f
void sub_403a3f(unsigned long a0)
{
}


// Function: _ZN7MiddleA4funcEv at 0x403a40
void MiddleA_func(void* self)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403a6e
void MiddleA_func_thunk(void* *a0)
{
 MiddleA::func((char *)a0 + (*(a0))[24]);
 return;
}


// Function: sub_403a7b at 0x403a7b
void sub_403a7b(unsigned long a0)
{
}


// Function: _ZN7MiddleB4funcEv at 0x403a7c
void MiddleB_func(void* self)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403aaa
void MiddleB_func_thunk(void* *a0)
{
 MiddleB::func((char *)a0 + (*(a0))[24]);
 return;
}


// Function: sub_403ab7 at 0x403ab7
void sub_403ab7(unsigned long a0)
{
}


// Function: _ZN14DiamondDerived4funcEv at 0x403ab8
void DiamondDerived_func(void* self)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x403ae6
void DiamondDerived_func_thunk(void* *a0)
{
 DiamondDerived::func((char *)a0 + (*(a0))[24]);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x403af3
void non-virtual thunk to DiamondDerived::func()(void* a0)
{
 DiamondDerived::func(a0 - 16);
 return;
}


// Function: sub_403afd at 0x403afd
void sub_403afd(unsigned long a0)
{
}


// Function: _ZN11VirtualBaseC1Ev at 0x403afe
extern char g_408a50;

int VirtualBase_constructor(void* ptr)
{
 *((char **)ptr) = &g_408a50;
 return 0;
}


// Function: sub_403b1b at 0x403b1b
void sub_403b1b(unsigned long a0, unsigned long a1)
{
}


// Function: _ZN7MiddleAC2Ev at 0x403b1c
int MiddleA_MiddleA(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
 return 0;
}


// Function: _ZN7MiddleAD2Ev at 0x403b60
int MiddleA_destructor(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
 return 0;
}


// Function: _ZN7MiddleBC2Ev at 0x403ba4
int MiddleB_MiddleB(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x403be8
int MiddleB_destructor(void* ptr, unsigned long long *idx)
{
 *((unsigned long long *)ptr) = idx[0];
 *((unsigned long long *)(*((long long *)(*((long long *)ptr) - 24)) + (char *)ptr)) = idx[1];
 return 0;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403c2c
extern char g_4088b8;
extern char g_4088e8;
extern char g_408920;

long long DiamondDerived_DiamondDerived(void* ptr)
{
 VirtualBase_constructor((char*)ptr + 32);
 MiddleA_MiddleA(ptr, (unsigned long long*)0);
 MiddleB_MiddleB((char*)ptr + 16, (unsigned long long*)0);
 *((char **)ptr) = &g_4088b8;
 *((char **)&ptr[32]) = &g_408920;
 *((char **)&ptr[16]) = &g_4088e8;
 return (long long)ptr;
}


// Function: _ZN5PointC1Eii at 0x403cae
int Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return 0;
}


// Function: _ZNK5PointplERKS_ at 0x403cd6
long long Point_operator_plus(Point *a0, Point *a1)
{
 Point v0; // [bp-0x18]

 Point_Point(&v0, a0->x + a1->x, a0->y + a1->y);
 return (long long)&v0;
}


// Function: sub_403d3f at 0x403d3f
void sub_403d3f(unsigned long a0, unsigned long a1)
{
 Point_operator_equal((Point*)a0, (Point*)a1);
 return;
}


// Function: _ZNK5PointeqERKS_ at 0x403d40
long long Point_operator_equal(Point *a0, Point *a1)
{
 if (a0->x == a1->x && a0->y == a1->y)
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x403d80
long long Point_operator_increment(Point *ptr)
{
 ptr->x = ptr->x + 1;
 ptr->y = ptr->y + 1;
 return (long long)ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403db2
int template_max_int(int arg_0, int arg_1)
{
 return (arg_0 <= arg_1 ? arg_1 : arg_0);
}

double template_max_double(double arg_0, double arg_1)
{
 return (arg_0 <= arg_1 ? arg_1 : arg_0);
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404424
void std_default_delete_int_call(void* self, int *arg_0)
{
 if (arg_0)
 operatordelete(arg_0, 4);
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x40400e
int RTTIDerivedA_derivedA_data(void* self)
{
 return 100;
}


// Function: _ZN7Derived12virtual_funcEi at 0x40382e
typedef struct Derived_struct {
 char padding_0[8];
 unsigned int field_8;
} Derived_struct;

long long Derived_virtual_func(Derived_struct *v2, unsigned int v1)
{
 return v1 * v2->field_8;
}
long long template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // [bp-0xc]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return p;
}


// Function: sub_403e39 at 0x403e39
void sub_403e39(unsigned long a0)
{
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x403e3a
typedef struct Container_int_struct {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct;

long long Container_int_Constructor(Container_int_struct *ptr)
{
 ptr->field_28 = 0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403e54
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v1; // eax
 unsigned int* ptr32 = (unsigned int*)ptr;

 if ((int)ptr32[10] <= 9)
 {
 v1 = (int)ptr32[10];
 ptr32[10] = v1 + 1;
 ((int*)ptr)[v1] = arg_0;
 }
 return;
}


// Function: sub_403e8f at 0x403e8f
void sub_403e8f(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403e90
long long Container_int_get(unsigned int *v2, unsigned int v1)
{
 if (v1 >= 0 && v1 < v2[10])
 return (long long)v2[v1];
 return 0;
}


// Function: sub_403ec7 at 0x403ec7
void sub_403ec7(unsigned long a0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403ec8
typedef struct Container_int_struct {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct;

long long Container_int_getSize(Container_int_struct *v1)
{
 return v1->field_28;
}


// Function: sub_403edd at 0x403edd
void sub_403edd(unsigned long a0)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x403ede
typedef struct Container_double_struct {
 char padding_0[80];
 unsigned int field_50;
} Container_double_struct;

long long Container_double_Constructor(Container_double_struct *ptr)
{
 ptr->field_50 = 0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403ef8
typedef struct Container_double_struct {
 unsigned long long field_0;
 char padding_8[72];
 unsigned int field_50;
} Container_double_struct;

long long Container_double_push(Container_double_struct *ptr, unsigned long v4)
{
 unsigned long index;
 unsigned int v3;

 index = ptr->field_50;
 if ((unsigned int)index <= 9)
 {
 v3 = ptr->field_50;
 ptr->field_50 = v3 + 1;
 index = v3;
 ((unsigned long long*)ptr)[index] = v4;
 }
 return (long long)index;
}


// Function: sub_403f39 at 0x403f39
void sub_403f39(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403f3a
long long Container_double_get(unsigned long long *v2, unsigned int v1)
{
 if (v1 < (unsigned int)v2[10])
 return (long long)v2[v1];
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x403f7c
long long Container_double_getSize(void* self)
{
 return 0;
}


// Function: sub_403f91 at 0x403f91
void sub_403f91(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403f92
int std_uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data_move(void* self, void* arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move(self, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x403fbc
long long std_unique_ptr_int_default_delete_int___unique_ptr_move(void* v1, unsigned long v2)
{
 return std_uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data_move(v1, v2);
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x403fe6
void RTTIBase_getType(void* self)
{
 return;
}


// Function: sub_403ff9 at 0x403ff9
void sub_403ff9(unsigned long a0)
{
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x403ffa
void RTTIDerivedA_getType(void* self)
{
 return;
}


// Function: sub_40400d at 0x40400d
void sub_40400d(unsigned long a0)
{
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x40400e
int RTTIDerivedA_derivedA_data(void* self)
{
 return 100;
}


// Function: sub_404021 at 0x404021
void sub_404021(unsigned long a0)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x404022
void RTTIDerivedB_getType(void* self)
{
 return;
}


// Function: sub_404035 at 0x404035
void sub_404035(unsigned long a0)
{
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x404036
int RTTIDerivedB_derivedB_data(void* self)
{
 return 200;
}


// Function: sub_404049 at 0x404049
void sub_404049(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseC1Ev at 0x40404a
extern char g_408888;

int RTTIBase_constructor(void* ptr)
{
 *((char **)ptr) = &g_408888;
 return 0;
}


// Function: sub_404067 at 0x404067
void sub_404067(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404068
extern char g_408888;

int RTTIBase_destructor(void* ptr)
{
 *((char **)ptr) = &g_408888;
 return 0;
}


// Function: sub_404085 at 0x404085
void sub_404085(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x404086
int RTTIBase_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: sub_4040b5 at 0x4040b5
void sub_4040b5(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x4040b6
extern char g_408860;

long long RTTIDerivedA_RTTIDerivedA(void* ptr)
{
 RTTIBase_constructor(ptr);
 *((char **)ptr) = &g_408860;
 return (long long)ptr;
}


// Function: sub_4040e3 at 0x4040e3
void sub_4040e3(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x4040e4
extern char g_408838;

long long RTTIDerivedB_RTTIDerivedB(void* ptr)
{
 RTTIBase_constructor(ptr);
 *((char **)ptr) = &g_408838;
 return (long long)ptr;
}


// Function: sub_404111 at 0x404111
void sub_404111(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x404112
int std_uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data_ptr(void* self, unsigned int *arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_ptr(self, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x40413c
long long std_unique_ptr_int_default_delete_int___unique_ptr_ptr(char *a0, unsigned int *a1)
{
 return std_uniq_ptr_data_int_default_delete_int_true_true___uniq_ptr_data_ptr(a0, a1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x404166
int std_unique_ptr_int_default_delete_int_destructor(void* self)
{
 void* v2; // rbx
 void** v3; // rax
 void** ptr;

 ptr = (void**)std_uniq_ptr_impl_int_default_delete_int___M_ptr(self);
 if (*(ptr))
 {
 v2 = std_unique_ptr_int_default_delete_int___get_deleter((unsigned long long)self);
 v3 = (void**)std_move_int__ref(ptr);
 std_default_delete_int_call(v2, (unsigned int*)*(v3));
 }
 *(ptr) = 0;
 return 0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x4041ce
void* std_unique_ptr_int_operator_star(void* self)
{
 return std_unique_ptr_int_get((unsigned long long)self);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x4041f3
void* std_move_unique_ptr_int_default_delete_int_(void* v1)
{
 return v1;
}


// Function: sub_404205 at 0x404205
void sub_404205(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_ at 0x404206
int std__Tuple_impl_0ul_int_std__default_delete_int___Tuple_impl_move(void* ptr, void* arg_0)
{
 std__Tuple_impl_1ul_std__default_delete_int___Tuple_impl_move(ptr, arg_0);
 if (ptr && arg_0)
 *((long long *)ptr) = *((long long *)arg_0);
 return 0;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x40423e
int std_tuple_int_std__default_delete_int__tuple_move(void* this, void* arg_0)
{
 std__Tuple_impl_0ul_int_std__default_delete_int___Tuple_impl_move(this, arg_0);
 return 0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x404268
long long std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_move(void* v3, void* v1)
{
 unsigned long long *ptr;

 std_tuple_int_std__default_delete_int__tuple_move(v3, v1);
 ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int___M_ptr(v1);
 if (ptr)
 *(ptr) = 0;
 return (long long)ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x4042b2
int std_uniq_ptr_data_int_default_delete_int_array_true_true___uniq_ptr_data_ptr(void* self, unsigned int *arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_ptr(self, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x4042dc
long long std_unique_ptr_int_array_default_delete_int_array___unique_ptr(char *a0, unsigned int *a1)
{
 return std_uniq_ptr_data_int_default_delete_int_array_true_true___uniq_ptr_data_ptr(a0, a1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x404306
int std_unique_ptr_int_array_default_delete_int_array_destructor(void* self)
{
 unsigned long long v2; // rax
 unsigned long long *ptr;

 ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int_array___M_ptr(self);
 if (*(ptr))
 {
 v2 = std_unique_ptr_int_array_default_delete_int_array___get_deleter(self);
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(v2, (void*)*(ptr));
 }
 *(ptr) = 0;
 return 0;
}


// Function: sub_404361 at 0x404361
void sub_404361(unsigned long a0, unsigned long a1)
{
 std_unique_ptr_int_array_default_delete_int_array___operator_index(a0, a1);
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x404362
void* std_unique_ptr_int_array_default_delete_int_array___operator_index(unsigned long long v2, unsigned long v1)
{
 return (void*)(v1 * 4 + (unsigned long long)std_unique_ptr_int_array_default_delete_int_array___get(v2));
}


// Function: sub_404399 at 0x404399
void sub_404399(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x40439a
long long std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl_ptr(void* a0, unsigned int *a1)
{
 unsigned int **ptr;

 std_tuple_int_std__default_delete_int__tuple(a0);
 ptr = (unsigned int**)std_uniq_ptr_impl_int_default_delete_int___M_ptr(a0);
 *(ptr) = a1;
 return (long long)ptr;
}


// Function: sub_4043d5 at 0x4043d5
void sub_4043d5(unsigned long a0)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4043d6
unsigned long long** std_uniq_ptr_impl_int_default_delete_int___M_ptr(void* v1)
{
 return (unsigned long long**)std_get_0ul_int_std__default_delete_int_(v1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x4043f4
void* std_unique_ptr_int_get_deleter(unsigned long long v1)
{
 return (void*)std___uniq_ptr_impl_int_std__default_delete_int___M_deleter(v1);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404412
void* std_move_int__ref(void* v1)
{
 return v1;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404424
void std_default_delete_int_call(void* self, int *arg_0)
{
 if (arg_0)
 operatordelete(arg_0, 4);
 return;
}


// Function: sub_404451 at 0x404451
void sub_404451(unsigned long a0)
{
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404452
void* std_unique_ptr_int_get(unsigned long long v1)
{
 unsigned long long** ptr = (unsigned long long**)std_uniq_ptr_impl_int_default_delete_int___M_ptr((void*)v1);
 return ptr ? (void*)*ptr : NULL;
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x404470
void* std_move_tuple(void* arg_0)
{
 return arg_0;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x404482
long long std__Tuple_impl_1ul_std__default_delete_int___Tuple_impl_move(unsigned long v1)
{
 return v1;
}


// Function: sub_404495 at 0x404495
void sub_404495(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x404496
long long std_uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl_ptr(void* a0, unsigned int *a1)
{
 unsigned int **ptr;

 std_tuple_int_std__default_delete_int_array__tuple(a0);
 ptr = (unsigned int**)std_uniq_ptr_impl_int_default_delete_int_array___M_ptr(a0);
 *(ptr) = a1;
 return (long long)ptr;
}


// Function: sub_4044d1 at 0x4044d1
void sub_4044d1(unsigned long a0)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x4044d2
unsigned long long** std_uniq_ptr_impl_int_default_delete_int_array___M_ptr(void* v1)
{
 return (unsigned long long**)std_get_0ul_int_std__default_delete_int_array_(v1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x4044f0
void* std_unique_ptr_int_array_default_delete_int_array___get_deleter(unsigned long long v1)
{
 return (void*)std___uniq_ptr_impl_int_std__default_delete_int_array___M_deleter(v1);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x40450e
int std_default_delete_int_array_call(unsigned long long a0, void* a1)
{
 unsigned int v2;

 if (a1)
 v2 = operatordelete[](a1);
 return v2;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404538
void* std_unique_ptr_int_array_default_delete_int_array___get(void* v1)
{
 unsigned long long* ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int_array___M_ptr(v1);
 return (void*)(ptr ? *ptr : 0);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x404556
long long std_tuple_int_std__default_delete_int__tuple(unsigned long long v1)
{
 return std__Tuple_impl_0ul_int_std__default_delete_int___Tuple_impl(v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404575
void* std_get_0ul_int_std__default_delete_int_(void* arg_0)
{
 unsigned long long* result = (unsigned long long*)std___get_helper_0ul_int_std__default_delete_int_(arg_0);
 return result ? (void*)*result : NULL;
}


// Function: sub_404593 at 0x404593
void sub_404593(unsigned long a0)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x404594
void* std___uniq_ptr_impl_int_std__default_delete_int___M_deleter(void* v1)
{
 return (void*)std_get_1ul_int_std__default_delete_int_(v1);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4045b2
unsigned long long** std___uniq_ptr_impl_int_std__default_delete_int___M_ptr_const(const void* v1)
{
 return (unsigned long long**)std_get_0ul_int_std__default_delete_int_((void*)v1);
}


// Function: sub_4045d3 at 0x4045d3
void sub_4045d3(unsigned long a0)
{
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x4045d4
long long std_tuple_int_std__default_delete_int_array__tuple(unsigned long long v1)
{
 return std__Tuple_impl_0ul_int_std__default_delete_int_array___Tuple_impl(v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x4045f3
void* std_get_0ul_int_std__default_delete_int_array_(void* arg_0)
{
 unsigned long long* result = (unsigned long long*)std___get_helper_0ul_int_std__default_delete_int_array_(arg_0);
 return result ? (void*)*result : NULL;
}


// Function: sub_404611 at 0x404611
void sub_404611(unsigned long a0)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x404612
void* std___uniq_ptr_impl_int_std__default_delete_int_array___M_deleter(void* v1)
{
 return (void*)std_get_1ul_int_std__default_delete_int_array_(v1);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404630
void* std___uniq_ptr_impl_int_std__default_delete_int_array___M_ptr(const void* v1)
{
 unsigned long long** ptr = (unsigned long long**)std_get_0ul_int_std__default_delete_int_array_((void*)v1);
 return ptr ? (void*)*ptr : 0;
}


// Function: sub_404651 at 0x404651
void sub_404651(unsigned long a0)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev at 0x404652
int std__Tuple_impl_0ul_int_std__default_delete_int___Tuple_impl(void* this)
{
 std__Tuple_impl_1ul_std__default_delete_int___Tuple_impl(this);
 std__Head_base_0ul_int___Head_base(this);
 return 0;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40467d
void* std___get_helper_0ul_int_std__default_delete_int_(unsigned long long v1)
{
 unsigned long long* result = (unsigned long long*)std__Tuple_impl_0ul_int_std__default_delete_int___M_head(v1);
 return result ? (void*)*result : NULL;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x40469b
long long std_get_1ul_int_std__default_delete_int_(unsigned long long v1)
{
 return std___get_helper_1ul_std__default_delete_int_(v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x4046b9
long long std_get_0ul_int_std__default_delete_int__const(unsigned long long v1)
{
 return std___get_helper_0ul_int_std__default_delete_int_(v1);
}


// Function: sub_4046d7 at 0x4046d7
void sub_4046d7(unsigned long a0)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x4046d8
int std__Tuple_impl_0ul_int_std__default_delete_int_array___Tuple_impl(void* this)
{
 std__Tuple_impl_1ul_std__default_delete_int_array___Tuple_impl(this);
 std__Head_base_0ul_int___Head_base(this);
 return 0;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404703
void* std___get_helper_0ul_int_std__default_delete_int_array_(unsigned long long v1)
{
 unsigned long long* result = (unsigned long long*)std__Tuple_impl_0ul_int_std__default_delete_int_array___M_head(v1);
 return result ? (void*)*result : NULL;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404721
long long std_get_1ul_int_std__default_delete_int_array_(unsigned long long v1)
{
 return std___get_helper_1ul_std__default_delete_int_array_(v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x40473f
long long std_get_0ul_int_std__default_delete_int_array__const(void* arg_0)
{
 return std___get_helper_0ul_int_std__default_delete_int_array_(arg_0);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x40475d
void* std_forward_int__ref(void* arg_0)
{
 return arg_0;
}


// Function: sub_40476f at 0x40476f
void sub_40476f(unsigned long a0)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404770
long long std__Tuple_impl_1ul_std__default_delete_int___Tuple_impl(void* v1)
{
 return std__Head_base_1ul_std__default_delete_int___Head_base(v1);
}


// Function: sub_40478f at 0x40478f
void sub_40478f(unsigned long a0)
{
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC1Ev at 0x404790
long long std__Head_base_0ul_int___Head_base(unsigned long long *ptr)
{
 *(ptr) = 0;
 return (long long)ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4047aa
void* std__Tuple_impl_0ul_int_std__default_delete_int___M_head(void* arg_0)
{
 return std__Head_base_0ul_int__M_head(arg_0);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4047c8
void* std___get_helper_1ul_std__default_delete_int_(void* arg_0)
{
 return std__Tuple_impl_1ul_std__default_delete_int___M_head(arg_0);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4047e6
void* std___get_helper_0ul_int_std__default_delete_int__const(const void* arg_0)
{
 return std__Head_base_0ul_int__M_head_const(arg_0);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404804
long long std__Tuple_impl_1ul_std__default_delete_int_array___Tuple_impl(void* v1)
{
 return std__Head_base_1ul_std__default_delete_int_array___Head_base(v1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404823
long long std__Tuple_impl_0ul_int_std__default_delete_int_array___M_head(void* arg_0)
{
 return std__Head_base_0ul_int__M_head(arg_0);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404841
void* std___get_helper_1ul_std__default_delete_int_array_(void* arg_0)
{
 return std__Tuple_impl_1ul_std__default_delete_int_array___M_head(arg_0);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x40485f
void* std___get_helper_0ul_int_std__default_delete_int_array_(const void* v1)
{
 return std__Head_base_0ul_int__M_head_const(v1);
}


// Function: sub_40487d at 0x40487d
void sub_40487d(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x40487e
int std__Head_base_0ul_int___Head_base_int_ref(void* ptr, void* arg_0)
{
 *((long long *)ptr) = *((long long *)std_forward_int__ref(arg_0));
 return 0;
}


// Function: sub_4048ab at 0x4048ab
void sub_4048ab(unsigned long a0)
{
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x4048ac
long long std__Head_base_1ul_std__default_delete_int___Head_base(unsigned long long v1)
{
 return (long long)v1;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x4048bb
void* std__Head_base_0ul_int__M_head(unsigned long v1)
{
 return (void*)v1;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x4048cd
long long std__Tuple_impl_1ul_std__default_delete_int___M_head(unsigned long long v1)
{
 return std__Head_base_1ul_std__default_delete_int__M_head((void*)v1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x4048eb
long long std__Tuple_impl_0ul_int_std__default_delete_int___M_head(unsigned long long v1)
{
 unsigned long long* result = (unsigned long long*)std__Head_base_0ul_int__M_head(v1);
 return result ? (long long)*result : 0;
}


// Function: sub_404909 at 0x404909
void sub_404909(unsigned long a0)
{
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev at 0x40490a
long long std__Head_base_1ul_std__default_delete_int_array___Head_base(unsigned long long v1)
{
 return (long long)v1;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404919
long long std__Tuple_impl_1ul_std__default_delete_int_array___M_head(unsigned long long v1)
{
 return std__Head_base_1ul_std__default_delete_int_array__M_head((void*)v1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404937
long long std__Tuple_impl_0ul_int_std__default_delete_int_array___M_head(unsigned long long arg_0)
{
 unsigned long long* result = (unsigned long long*)std__Head_base_0ul_int__M_head(arg_0);
 return result ? (long long)*result : 0;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x404955
long long std__Head_base_1ul_std__default_delete_int__M_head(void* v1)
{
 return (long long)*(void**)v1;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x404967
void* std__Head_base_0ul_int__M_head_const(const void* v1)
{
 return (void*)v1;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404979
long long std__Head_base_1ul_std__default_delete_int_array__M_head(void* v1)
{
 return (long long)*(void**)v1;
}


// Function: sub_40498b at 0x40498b
void sub_40498b(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x40498c
extern char g_408838;

int RTTIDerivedB_destructor(void* ptr)
{
 *((char **)ptr) = &g_408838;
 return 0;
}


// Function: sub_4049b9 at 0x4049b9
void sub_4049b9(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4049ba
int RTTIDerivedB_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: sub_4049e9 at 0x4049e9
void sub_4049e9(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x4049ea
extern char g_408860;

int RTTIDerivedA_destructor(void* ptr)
{
 *((char **)ptr) = &g_408860;
 return 0;
}


// Function: sub_404a17 at 0x404a17
void sub_404a17(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x404a18
int RTTIDerivedA_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: sub_404a47 at 0x404a47
void sub_404a47(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x404a48
extern char g_4088b8;
extern char g_4088e8;
extern char g_408920;

int DiamondDerived_destructor(void* ptr)
{
 *((char **)ptr) = &g_4088b8;
 *((char **)&ptr[32]) = &g_408920;
 *((char **)&ptr[16]) = &g_4088e8;
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404aca
void DiamondDerived_destructor_thunk_non_virtual(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404ad7
void DiamondDerived_destructor_thunk(unsigned long a0)
{
 return;
}


// Function: sub_404ae7 at 0x404ae7
void sub_404ae7(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404ae8
int DiamondDerived_deleting_destructor(void* self)
{
 operatordelete(self, 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404b17
void DiamondDerived_deleting_destructor_thunk_non_virtual(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x404b21
void DiamondDerived_deleting_destructor_thunk(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x404b2e
extern char g_408a78;
extern char g_408aa8;

int MultiDerived_destructor(void* ptr)
{
 *((char **)ptr) = &g_408a78;
 *((char **)&ptr[16]) = &g_408aa8;
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x404b7a
void MultiDerived_destructor_thunk_non_virtual(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x404b84
int MultiDerived_deleting_destructor(void* self)
{
 operatordelete(self, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x404bb3
void MultiDerived_deleting_destructor_thunk_non_virtual(unsigned long a0)
{
 return;
}


// Function: sub_404bbd at 0x404bbd
void sub_404bbd(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x404bbe
extern char g_408b20;

int Derived_destructor(void* ptr)
{
 *((char **)ptr) = &g_408b20;
 return 0;
}


// Function: sub_404beb at 0x404beb
void sub_404beb(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x404bec
int Derived_deleting_destructor(void* self)
{
 operatordelete(self, 16);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


