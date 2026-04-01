// Angr Decompilation of 5-1_clang_O0_no_g
// Platform: ARMEL

#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

// External declarations
extern int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
extern void __cxa_end_cleanup(void);
extern void __cxa_end_catch(void);
extern void *__cxa_begin_catch(void *);
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exc, void *tinfo, void *dest);
extern void *__cxa_bad_typeid(void);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, void *src2dst);
void *operatornew(unsigned int size);
void *operatornew_array(unsigned int size);
void operatordelete(void *ptr);
void operatordelete_array(void *ptr);
extern int strcmp(const char *s1, const char *s2);
extern int SimpleClass_SimpleClass(char *obj, int val, const char *name);
extern void SimpleClass_setValue(char *obj, int val);
extern unsigned int SimpleClass_getValue(char *obj);
extern unsigned int SimpleClass_compute(char *obj, int multiplier);
extern void SimpleClass_getClassID(char *obj, unsigned int a1, unsigned int a2, unsigned int a3);
extern void LifecycleClass_LifecycleClass(char *obj, unsigned int count);
extern unsigned int LifecycleClass_getData(char *obj, unsigned int index);
extern unsigned int LifecycleClass_getInstanceCount();
extern unsigned int strlen(const char *s);
extern int printf(const char *format, ...);

// C++ class forward declarations (converted to C structs)
struct Base;
struct Derived;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct DiamondDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Base class function declarations
extern int Base_Base(char *obj);
extern unsigned int Base_virtual_func(char *obj, int arg);
extern int Base_Destructor(char *obj);
extern int Derived_Derived(char *obj, int val);
extern unsigned int Derived_virtual_func(char *obj, int arg);
extern int Derived_Destructor(char *obj);
extern int MultiDerived_MultiDerived(char *obj);
extern int MultiDerived_Destructor(char *obj);
extern int DiamondDerived_DiamondDerived(char *obj);
extern int DiamondDerived_Destructor(char *obj);
extern int VirtualBase_VirtualBase(char *obj);
extern int MiddleA_MiddleA(char *obj, unsigned int vtable);
extern int MiddleB_MiddleB(char *obj, unsigned int vtable);
extern int Point_Point(char *obj, int x, int y);
extern int Point_operator_plus(char *result, char *a0, char *a1);
extern int Point_operator_eq(char *a0, char *a1);
extern int Point_operator_inc(char *obj, int dummy);
extern int RTTIBase_RTTIBase(char *obj);
extern int RTTIDerivedA_RTTIDerivedA(char *obj, int val, unsigned int v18, unsigned int v19);
extern int RTTIDerivedB_RTTIDerivedB(char *obj, int val, unsigned int v18, unsigned int v19);
extern unsigned int RTTIDerivedA_derivedA_data(void *obj);
extern unsigned int RTTIDerivedB_derivedB_data(void *obj);
extern int BaseA_BaseA(char *obj);
extern int BaseB_BaseB(char *obj);

// Template function declarations
extern unsigned int template_max_int(int arg_0, int arg_1);
extern unsigned int template_max_double(unsigned int v2, unsigned int v3, unsigned int v4, unsigned int v5);
extern int template_swap_int(unsigned int *ptr, unsigned int *p);

// Lambda function declarations
extern unsigned int _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(char *obj, unsigned int v0, unsigned int v1);
extern int test_cpp_lambda___dollar__1_operator(char *obj, int val);

// ARM EABI helper
extern int __aeabi_d2iz(unsigned int v3, unsigned int v5);

// Container class method declarations
extern int Container_int_Container(char *obj);
extern void Container_int_push(char *obj, int arg_0);
extern unsigned int Container_int_get(char *obj, unsigned int idx);
extern unsigned int Container_int_getSize(char *obj);
extern int Container_double_Container(char *obj);
extern int Container_double_push(char *obj);
extern unsigned int Container_double_get(char *obj, unsigned int idx);
extern void Container_double_getSize(char *obj);

// C++ class definitions - removed for C compatibility
// SimpleClass and LifecycleClass methods are declared as extern functions above

// Template class forward declarations - removed for C compatibility

// std namespace stubs - removed for C compatibility

// External variables
extern void *_ZTIi;
extern void *_ZTI8RTTIBase;
extern void *_ZTI12RTTIDerivedA;
extern void *_ZTI12RTTIDerivedB;
extern void *_ZTT14DiamondDerived;

// C++ function declarations converted to C
extern int std_type_info_operator_eq(void *a, void *b);
extern void *std_unique_ptr_get(void *ptr);
extern unsigned int *std_unique_ptr_int_get(void *ptr);
extern unsigned int *std_unique_ptr_int_array_get(void *ptr);
extern int std_unique_ptr_int_dereference(void *ptr);
extern int std_unique_ptr_int_array_index(void *ptr, unsigned int idx);
extern void std_unique_ptr_int_destructor(void *ptr);
extern void std_unique_ptr_int_array_destructor(void *ptr);
extern int std_unique_ptr_int_constructor(char *obj, void *ptr);
extern int std_unique_ptr_int_move_constructor(char *result, char *src);
extern int std_unique_ptr_int_array_constructor(char *obj, unsigned int *ptr);
extern int std_unique_ptr_custom_constructor(char *obj, unsigned int *ptr);
extern unsigned int *std_unique_ptr_custom_get(char *obj);
extern void *std_move(void *ptr);
extern int std_forward(void *ptr);
extern int std_get_tuple_0(void *ptr);
extern int std_get_tuple_1(void *ptr);
extern void *std_tuple_get_0(void *ptr);
extern void *std_tuple_get_1(void *ptr);
extern int std_default_delete_int(void *deleter, int *ptr);
extern int std_default_delete_int_array(void *deleter, int *ptr);
extern int std_uniq_ptr_data_custom(char *a0, unsigned int *a1, unsigned int v0);
extern unsigned int *std_uniq_ptr_impl_custom_M_ptr(unsigned int a0);
extern unsigned int std_unique_ptr_custom_get_deleter(unsigned int a0);
extern void __clang_call_terminate(void);

// Struct definitions for multiple inheritance and diamond inheritance
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

typedef struct struct_2 {
 struct struct_0 *field_4;
 unsigned int field_0;
} struct_2;



// Function: sub_400d38 at 0x400d38
extern unsigned int g_415008;

int sub_400d38()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_415008;
}


// Function: __dollar_a_0 at 0x400e84
extern void _ZNSt8ios_base4InitD1Ev(void);
extern char _ZStL8__ioinit;
extern unsigned int __dso_handle;
extern void _ZNSt8ios_base4InitC1Ev(char *obj);

int __dollar_a_0()
{
 unsigned int v1; // r0
 void* v0; // [bp-0xc]

 v0 = &_ZStL8__ioinit;
 _ZNSt8ios_base4InitC1Ev((char*)&_ZStL8__ioinit);
 v1 = __cxa_atexit(_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
 return __cxa_atexit(_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
}


// Function: __dollar_a_193 at 0x400ed0
unsigned int __dollar_a_193()
{
 unsigned int v0; // r0

 v0 = __dollar_a_0();
 return __dollar_a_0();
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400f1c at 0x400f1c
void sub_400f1c()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x40104c
void test_cpp_member_func()
{
 unsigned int v4; // r1
 unsigned int v5; // r2
 unsigned int v6; // r3
 char *v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 char v3; // [bp-0x2c]

 v0 = &v3;
 SimpleClass_SimpleClass(v0, 5, "Test");
 SimpleClass_setValue(v0, 10);
 v2 = SimpleClass_getValue(v0);
 v1 = SimpleClass_compute(v0, 3);
 SimpleClass_getClassID(v0, v4, v5, v6);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4010c8
void test_cpp_constructor()
{
 unsigned int v6; // r0
 unsigned int v7; // r1
 unsigned int v8; // r2
 unsigned int v9; // r3
 unsigned int count; // [bp-0x28]
 char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 char v3; // [bp-0x14]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0xc]

 v4 = 0;
 v1 = &v3;
 LifecycleClass_LifecycleClass(&v3, 5);
 v2 = LifecycleClass_getData(v1, 2);
 v5 = v4 + v2;
 count = LifecycleClass_getInstanceCount();
 v4 = v5 + count;
 LifecycleClass_getInstanceCount();
 return;
}


// Function: sub_40115c at 0x40115c
int sub_40115c(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0xc]
 unsigned int v1; // [bp+0x10]

 v1 = a0;
 v0 = a1;
 __cxa_end_cleanup();
}


// Function: _Z17call_virtual_funcP4Basei at 0x401174

void call_virtual_func(void *arg_0, int arg_1)
{
 char v0; // [bp-0xc]

 ((void (*)(void *, int))(*((int *)*((int *)arg_0))))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4011ac

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 Base *v7; // [bp-0x2c]
 Base *v8; // [bp-0x28]
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 char v11; // [bp-0x14]
 char v12; // [bp-0xc]

 Base_Base(&v12);
 Derived_Derived(&v11, 3);
 v4 = Base_virtual_func(&v12, 5);
 v10 = v4;
 v3 = Derived_virtual_func(&v11, 5);
 v9 = v3;
 v8 = (Base *)&v12;
 v7 = (Base *)&v11;
 call_virtual_func(v8, 5);
 v6 = 0;
 call_virtual_func(v7, 5);
 v5 = 0;
 v0 = v10 + v9 + v6 + v5;
 return;
}


// Function: sub_401290 at 0x401290
int sub_401290(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = a0;
 v0 = a1;
 __cxa_end_cleanup();
}


// Function: sub_40129c at 0x40129c
int sub_40129c(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = a0;
 v0 = a1;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012c0

void test_cpp_multiple_inheritance()
{
 struct_1 **v14; // r0
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 struct_1 **result; // [bp-0x3c]
 struct_1 **v4; // [bp-0x38]
 struct_1 **v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x24]
 struct_1 **v8; // [bp-0x20]
 struct_1 **v9; // [bp-0x1c]
 char v10; // [bp-0x18]
 unsigned int v11; // [bp-0x14]
 char v12; // [bp-0x10]
 unsigned int v13; // [bp-0xc]

 result = (struct_1 **)&v10;
 MultiDerived_MultiDerived(&v10);
 v11 = 100;
 v13 = 200;
 v9 = result;
 v4 = NULL;
 if (result)
 v4 = (struct_1 **)&v12;
 v8 = v4;
 v2 = (unsigned int)(*(struct_1 **)v9)->field_0;
 v7 = v2;
 v1 = (unsigned int)(*(struct_1 **)v8)->field_0;
 v6 = v1;
 v14 = (struct_1 **)(v9 - v8);
 if (v9 != v8)
 v14 = (struct_1 **)0x1;
 v5 = v14;
 v0 = v7 + v6 + (unsigned int)v5;
 return;
}


// Function: sub_4013a8 at 0x4013a8
int sub_4013a8(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x1c]
 unsigned int v1; // [bp+0x20]

 v1 = a0;
 v0 = a1;
 __cxa_end_cleanup();
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4013c0

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 char *result; // [bp-0x3c]
 struct_1 **v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x28]
 struct_1 **v7; // [bp-0x24]
 void *ptr; // [bp-0x20]
 char v9; // [bp-0x1c]
 unsigned int offset; // [bp-0x18]
 unsigned int flag4; // [bp-0x14]
 void *flag1; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int cur; // [bp-0x8]

 result = (char *)&ptr;
 DiamondDerived_DiamondDerived((char *)&ptr);
 offset = ((unsigned char *)ptr)[12];
 v4 = NULL;
 if (result)
 v4 = (struct_1 **)((char *)&ptr + offset);
 v7 = v4;
 v2 = (unsigned int)(*(struct_1 **)v7)->field_0;
 v6 = v2;
 v1 = (unsigned int)(*(struct_1 **)v7)->field_0;
 v5 = v1;
 flag4 = (!flag1 ? 0 : (unsigned int)__dynamic_cast((void *)flag1, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
 v3 = flag4;
 if (flag4)
 cur += RTTIDerivedB_derivedB_data((void *)flag4);
 v0 = v6 + v5;
 return;
}


// Function: sub_4014ac at 0x4014ac
int sub_4014ac(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x18]
 unsigned int v1; // [bp+0x1c]

 v1 = a0;
 v0 = a1;
 __cxa_end_cleanup();
}


// Function: _Z26test_cpp_operator_overloadv at 0x4014c4
void test_cpp_operator_overload()
{
 char *v0; // [bp-0x30]
 char *v1; // [bp-0x2c]
 char *v2; // [bp-0x28]
 unsigned int v3; // [bp-0x21]
 char v4; // [bp-0x20]
 char v5; // [bp-0x18]
 char v6; // [bp-0x10]

 v0 = &v6;
 Point_Point(&v6, 1, 2);
 v1 = &v5;
 Point_Point(&v5, 3, 4);
 v2 = &v4;
 Point_operator_plus(&v4, v0, v1);
 v3 = Point_operator_eq(v0, v1);
 Point_operator_inc(v2, v3);
 if (!(v3 & 1))
 return;
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401550
void test_cpp_template_func()
{
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0xc]

 v4 = template_max_int(3, 7);
 v3 = template_max_double(0, 0x40040000, 0, 0x3ff80000);
 v2 = 10;
 v1 = 20;
 template_swap_int(&v2, &v1);
 v0 = v4;
 __aeabi_d2iz(v3, v5);
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4015e8
void test_cpp_template_class()
{
 unsigned int v9; // r1
 char *v0; // [bp-0xb0]
 char *v1; // [bp-0xac]
 unsigned int result; // [bp-0xa8]
 unsigned int v3; // [bp-0xa4]
 unsigned int v4; // [bp-0xa0]
 char v5; // [bp-0x98]
 unsigned int size; // [bp-0x3c]
 unsigned int v7; // [bp-0x38]
 char v8; // [bp-0x34]

 v0 = &v8;
 Container_int_Container(&v8);
 Container_int_push(v0, 10);
 Container_int_push(v0, 20);
 Container_int_push(v0, 30);
 result = 0;
 v7 = Container_int_get(v0, 0);
 size = Container_int_getSize(v0);
 v1 = &v5;
 Container_double_Container(&v5);
 Container_double_push(v1);
 v4 = Container_double_get(v1, result);
 v3 = v7 + size;
 __aeabi_d2iz(v4, v9);
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4016b4
void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x20]
 char v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 char *v5; // [bp-0x14]
 unsigned int v6; // [bp-0x10]
 unsigned int v7; // [bp-0xc]

 v0 = 10;
 v7 = 10;
 v1 = 20;
 v6 = 20;
 v4 = v7;
 v5 = (char *)&v6;
 v2 = test_cpp_lambda___dollar__1_operator(v5, 3);
 _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(&v3, v0, v1);
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__1clEi at 0x401724

unsigned int test_cpp_lambda___dollar__1_operator(char *obj, int val)
{
 struct_2 *idx; // r0
 unsigned int v1; // r1

 idx = (struct_2 *)obj;
 idx->field_4->field_0 = idx->field_4->field_0 + 5;
 return idx->field_4->field_0 + val * idx->field_0;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_ at 0x401760
int _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_()
{
 unsigned int v0; // r1
 unsigned int v1; // r2

 return v0 + v1;
}


// Function: _Z18test_cpp_exceptionv at 0x401784

void test_cpp_exception()
{
 unsigned int v3; // lr
 void *ptr; // r0
 unsigned int v5; // r3
 unsigned int result; // [bp-0x28]
 unsigned int flag1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 result = 0;
 flag1 = 0;
 ptr = __cxa_allocate_exception(4);
 *((int *)ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, (void *)0);
}


// Function: sub_4017c1 at 0x4017c1
void sub_4017c1(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017c5 at 0x4017c5
int sub_4017c5(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017cd at 0x4017cd
int sub_4017cd(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017d1 at 0x4017d1
int sub_4017d1(unsigned int a0)
{
}


// Function: sub_4017d5 at 0x4017d5
void sub_4017d5(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017dd at 0x4017dd
void sub_4017dd(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017e1 at 0x4017e1
int sub_4017e1()
{
}


// Function: sub_4017e9 at 0x4017e9
void sub_4017e9(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_4017ed at 0x4017ed
void sub_4017ed(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_4017f1 at 0x4017f1
int sub_4017f1(unsigned int a0)
{
}


// Function: sub_4017f5 at 0x4017f5
int sub_4017f5(unsigned int a0)
{
}


// Function: sub_4017f9 at 0x4017f9
int sub_4017f9(unsigned int a0)
{
}


// Function: sub_4017fd at 0x4017fd
void sub_4017fd(unsigned int a0)
{
}


// Function: sub_401809 at 0x401809
int sub_401809(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40180d at 0x40180d
int sub_40180d()
{
}


// Function: sub_401815 at 0x401815
int sub_401815(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401819 at 0x401819
int sub_401819(unsigned int a0)
{
}


// Function: sub_40181d at 0x40181d
void sub_40181d(unsigned int a0)
{
}


// Function: sub_401825 at 0x401825
void sub_401825(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401829 at 0x401829
int sub_401829()
{
}


// Function: sub_401831 at 0x401831
int sub_401831(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_401835 at 0x401835
int sub_401835(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_401839 at 0x401839
int sub_401839(unsigned int a0)
{
}


// Function: sub_40183d at 0x40183d
int sub_40183d(unsigned int a0)
{
}


// Function: sub_401841 at 0x401841
int sub_401841(unsigned int a0)
{
}


// Function: sub_401844 at 0x401844
void sub_401844()
{
 __cxa_end_catch();
}


// Function: sub_40184d at 0x40184d
int sub_40184d(unsigned int a0)
{
}


// Function: sub_401851 at 0x401851
int sub_401851(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_401859 at 0x401859
int sub_401859(unsigned int a0)
{
}


// Function: sub_40185d at 0x40185d
void sub_40185d()
{
}


// Function: sub_401861 at 0x401861
void sub_401861()
{
}


// Function: sub_40186d at 0x40186d
int sub_40186d(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401875 at 0x401875
int sub_401875(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401879 at 0x401879
int sub_401879(unsigned int a0)
{
}


// Function: sub_40187d at 0x40187d
int sub_40187d(unsigned int a0)
{
}


// Function: sub_401881 at 0x401881
void sub_401881(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401889 at 0x401889
void sub_401889(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40188d at 0x40188d
int sub_40188d(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401895 at 0x401895
int sub_401895(unsigned int a0)
{
}


// Function: sub_401899 at 0x401899
int sub_401899()
{
}


// Function: sub_40189d at 0x40189d
int sub_40189d(unsigned int a0)
{
}


// Function: sub_4018a0 at 0x4018a0
unsigned int sub_4018a0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 char v0; // [bp-0x4]

 __cxa_end_catch();
 return *((int *)&v0);
}


// Function: sub_4018b9 at 0x4018b9
int sub_4018b9(unsigned int a0)
{
}


// Function: sub_4018c4 at 0x4018c4
extern int sub_4018c8();

void sub_4018c4()
{
 sub_4018c8();
 return;
}


// Function: sub_4018c8 at 0x4018c8
int sub_4018c8()
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]
 unsigned int v2; // [bp-0x4]
 unsigned int v3; // [bp+0x10]

 v3 = __cxa_begin_catch(0);
 v2 = v1 + 200;
 __cxa_end_catch();
}


// Function: sub_4018e9 at 0x4018e9
int sub_4018e9()
{
}


// Function: sub_4018f1 at 0x4018f1
int sub_4018f1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: _Z18test_cpp_smart_ptrv at 0x4018f4
void test_cpp_smart_ptr()
{
 unsigned int *addr; // r0
 unsigned int v0; // [bp-0x60]
 char *v1; // [bp-0x5c]
 unsigned int *p; // [bp-0x58]
 unsigned int *ptr4; // [bp-0x54]
 char *v4; // [bp-0x50]
 unsigned int v5; // [bp-0x4c]
 unsigned int *ptr6; // [bp-0x48]
 unsigned int ptr[5]; // [bp-0x44]
 char *v8; // [bp-0x40]
 unsigned int *ptr5; // [bp-0x3c]
 char *v10; // [bp-0x38]
 void *ptr3; // [bp-0x34]
 unsigned int v12; // [bp-0x30]
 char v13; // [bp-0x2c]
 char v14; // [bp-0x28]
 unsigned int v15; // [bp-0x24]
 char v16; // [bp-0x20]
 unsigned int v17; // [bp-0x1c]
 char v18; // [bp-0x18]
 char v19; // [bp-0xc]

 addr = (unsigned int *)operatornew(4);
 *(addr) = 100;
 v10 = &v19;
 std_unique_ptr_int_constructor(v10, addr);
 ptr3 = std_unique_ptr_int_get(v10);
 *(ptr3) = 200;
 v8 = &v18;
 std_unique_ptr_int_move_constructor(v8, v10);
 ptr5 = std_unique_ptr_int_get(v8);
 v17 = *(ptr5);
 ptr[0] = (unsigned int)operatornew[](20);
 ptr[0] = 1;
 v5 = 2;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 v4 = &v16;
 std_unique_ptr_int_array_constructor(v4, (unsigned int *)ptr);
 ptr6 = std_unique_ptr_int_array_get(v4);
 v15 = *(ptr6);
 ptr4 = (unsigned int *)operatornew(4);
 *(ptr4) = 500;
 v1 = &v13;
 std_unique_ptr_custom_constructor(v1, ptr4);
 p = std_unique_ptr_custom_get(v1);
 v12 = *(p);
 v0 = v17 + v15 + v12;
 return;
}


// Function: sub_401a6c at 0x401a6c
int sub_401a6c(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0;
 v0 = a1;
 __cxa_end_cleanup();
}


// Function: sub_401a78 at 0x401a78
int sub_401a78(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0;
 v0 = a1;
}


// Function: sub_401a84 at 0x401a84
int sub_401a84(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0;
 v0 = a1;
}


// Function: sub_401a90 at 0x401a90
int sub_401a90(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0;
 v0 = a1;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IS0_vEEPiRKS0_ at 0x401acc
int std_unique_ptr_custom_constructor(char *a0, unsigned int *a1)
{
 unsigned int v0; // r2

 std_uniq_ptr_data_custom(a0, a1, v0);
 return a0;
}


// Function: sub_401b0c at 0x401b0c
void sub_401b0c()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EdeEv at 0x401b10
unsigned int std_unique_ptr_custom_dereference_impl(unsigned int v0)
{
 unsigned int v1; // r0
 unsigned int *ptr; // r0

 ptr = std_unique_ptr_custom_get((char *)v0);
 v1 = *ptr;
 return v1;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2ED2Ev at 0x401b44
extern int test_cpp_smart_ptr_dollar_2_operator(unsigned int a0, unsigned int *ptr);

unsigned int std_unique_ptr_custom_destructor(unsigned int a0)
{
 unsigned int *v5; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int *v2; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14]
 unsigned int v4; // [bp-0xc]

 v1 = a0;
 v4 = a0;
 v2 = std_uniq_ptr_impl_custom_M_ptr(a0);
 ptr = v2;
 if (ptr && *(ptr))
 {
 v0 = std_unique_ptr_custom_get_deleter(v1);
 v5 = (unsigned int *)std_move((void *)ptr);
 test_cpp_smart_ptr_dollar_2_operator(v0, *(v5));
 }
 if (ptr)
 *(ptr) = 0;
 return v4;
}


// Function: sub_401bd0 at 0x401bd0
void sub_401bd0()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _Z13test_cpp_rttiv at 0x401bd4
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

void test_cpp_rtti()
{
 unsigned int v18; // r2
 unsigned int v19; // r3
 void **v0; // [bp-0x50]
 void **v1; // [bp-0x4c]
 void **v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 void **v4; // [bp-0x40]
 void *v5; // [bp-0x3c]
 void **v6; // [bp-0x38]
 void **v7; // [bp-0x34]
 unsigned int v8; // [bp-0x30]
 unsigned int *ptr; // [bp-0x2c]
 unsigned int flag2; // [bp-0x28]
 unsigned int *p; // [bp-0x24]
 void **v12; // [bp-0x20]
 unsigned int flag4; // [bp-0x1c]
 void *flag3; // [bp-0x18]
 unsigned int cur; // [bp-0x14]
 unsigned int *flag1; // [bp-0x10]
 void *result; // [bp-0xc]

 v8 = 4;
 ptr = (unsigned int *)operatornew(4);
 flag2 = 0;
 *((int *)ptr) = 0;
 RTTIDerivedA_RTTIDerivedA((char *)ptr, 0, v18, v19);
 result = (void *)ptr;
 p = (unsigned int *)operatornew(v8);
 *((int *)p) = flag2;
 RTTIDerivedB_RTTIDerivedB((char *)p, flag2, v18, v19);
 flag1 = (unsigned int *)p;
 cur = flag2;
 v12 = (void **)&result;
 if (!result)
 __cxa_bad_typeid();
 if (std_type_info_operator_eq((void *)((unsigned int *)result)[1], &_ZTI12RTTIDerivedA))
 cur += 10;
 v7 = (void **)&flag1;
 if (!flag1)
 __cxa_bad_typeid();
 if (std_type_info_operator_eq((void *)((unsigned int *)flag1)[1], &_ZTI12RTTIDerivedB))
 cur += 20;
 v6 = (void **)result;
 v5 = (void *)(!result ? NULL : __dynamic_cast(result, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, NULL));
 flag3 = v5;
 if (flag3)
 cur += RTTIDerivedA_derivedA_data((void *)flag3);
 v4 = (void **)flag1;
 flag4 = (unsigned int)(!flag1 ? NULL : __dynamic_cast((void *)flag1, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
 v3 = flag4;
 if (flag4)
 cur += RTTIDerivedB_derivedB_data((void *)flag4);
 v2 = (void **)result;
 if (!result)
 __cxa_bad_typeid();
 cur += strlen((char *)((void **)result)[1]);
 v1 = (void **)result;
 if (result)
 ((void (*)(void *, int))((void **)result)[1])(result, (int)((void **)result)[1]);
 v0 = (void **)&flag1;
 if (!flag1)
 return;
 ((void (*)(void *, int))((void **)flag1)[1])(flag1, (int)((void **)flag1)[1]);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401e74
extern char g_404221;
extern char g_404246;
extern char g_404264;
extern char g_404280;
extern char g_40429c;
extern char g_4042b8;
extern char g_4042d5;
extern char g_4042f1;
extern char g_40430d;
extern char g_404329;

void test_cpp_oo_features()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 printf(&g_404221);
 printf(&g_404246, (unsigned int)test_cpp_member_func());
 printf(&g_404264, (unsigned int)test_cpp_constructor());
 printf(&g_404280, (unsigned int)test_cpp_virtual_func());
 printf(&g_40429c, (unsigned int)test_cpp_multiple_inheritance());
 printf(&g_4042b8, (unsigned int)test_cpp_diamond_inheritance());
 printf(&g_4042d5, (unsigned int)test_cpp_operator_overload());
 printf(&g_4042f1, (unsigned int)test_cpp_template_func());
 printf(&g_40430d, (unsigned int)test_cpp_template_class());
 printf(&g_404329, (unsigned int)test_cpp_lambda());
 test_cpp_exception(); /* do not return */
}


// Function: sub_401f40 at 0x401f40
extern char g_404345;
extern char g_404362;
extern char g_40437f;

int sub_401f40(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v1; // r0
 unsigned int v2; // r0

 printf(&g_404345, a0);
 printf(&g_404362, (unsigned int)test_cpp_smart_ptr());
 v1 = (unsigned int)test_cpp_rtti();
 v2 = printf(&g_40437f, v1);
 return printf(&g_40437f, v1);
}


// Function: main at 0x401fb4
int main()
{
 unsigned int v3; // lr
 unsigned int result; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 result = 0;
 flag1 = 0;
 test_cpp_oo_features(); /* do not return */
}


// Function: sub_401fd3 at 0x401fd3
int sub_401fd3()
{
}


// Function: sub_401fd5 at 0x401fd5
int sub_401fd5()
{
 unsigned int v0; // cc_op
 unsigned int v1; // cc_dep1
 unsigned int v2; // cc_dep2
 unsigned int v3; // cc_ndep

 if ((char)armg_calculate_condition(v0, v1, v2, v3))
 goto LABEL_0x401fef;
}


// Function: sub_401fd8 at 0x401fd8
int sub_401fd8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__dollar__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x401fe0
int std::__uniq_ptr_data<int, test_cpp_smart_ptr()::__dollar__2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::__dollar__2 const&>(int*, test_cpp_smart_ptr()::__dollar__2 const&)(char *a0)
{
 unsigned int v0; // r1
 unsigned int v1; // r2

 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__dollar__2 const&>(int*, test_cpp_smart_ptr()::__dollar__2 const&)(a0, v0, v1);
 return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IRKS0_EEPiOT_ at 0x40201c
unsigned int std_uniq_ptr_impl_constructor()
{
 unsigned int v0; // r2
 unsigned int v2; // r0

 return v2;
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3__dollar__2EOT_RNSt16remove_referenceIS3_E4typeE at 0x402064
unsigned int std_forward_test_cpp_smart_ptr(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402078
unsigned int std_tuple_constructor(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x1c]

 v0 = a1;
 return a0;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x4020d4
unsigned int std_Tuple_impl_constructor(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3__dollar__2EEC2ERKS0_ at 0x40212c
unsigned int std_Tuple_impl_1_constructor(unsigned int a0, unsigned int a1)
{
 return a0;
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EEC2ERKS0_ at 0x402160
unsigned int std_Head_base_constructor(unsigned int a0, unsigned int a1)
{
 return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x402178
unsigned int std_uniq_ptr_impl_M_ptr(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std_get_tuple_0((void *)a0);
 return v0;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E11get_deleterEv at 0x40219c
unsigned int std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::get_deleter()(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_deleter()(a0);
 return v0;
}


// Function: sub_4021cc at 0x4021cc
void sub_4021cc()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENK3__dollar__2clEPi at 0x4021d0
unsigned int * test_cpp_smart_ptr()::__dollar__2::operator()(int*) const(unsigned int a0, unsigned int *ptr)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 *(ptr) = 4294967295;
 if (!ptr)
 return ptr;
 v1 = operatordelete(ptr);
 return operatordelete(ptr);
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x40221c
unsigned int* std_get_0_tuple_int_ptr(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std__get_helper_0_int_ptr(a0);
 return (unsigned int*)v0;
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402240
unsigned int std__get_helper_0_int_ptr(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_0_M_head_int_ptr(a0);
 return v0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS2_ at 0x402264
unsigned int std_Tuple_impl_0_M_head_int_ptr(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std_Head_base_0_M_head_int_ptr(a0);
 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E10_M_deleterEv at 0x402288
unsigned int std_uniq_ptr_impl_M_deleter(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std_get_1_tuple_deleter(a0);
 return v0;
}


// Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4022ac
unsigned int std_get_1_tuple_deleter(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std__get_helper_1_deleter(a0);
 return v0;
}


// Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3__dollar__2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x4022d0
unsigned int std__get_helper_1_deleter(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_1_M_head_deleter(a0);
 return v0;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS1_ at 0x4022f4
unsigned int std_Tuple_impl_1_M_head_deleter(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std_Head_base_1_M_head_deleter(a0);
 return v0;
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EE7_M_headERS1_ at 0x402318
unsigned int std_Head_base_1_M_head_deleter(unsigned int a0)
{
 return a0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E3getEv at 0x40232c
unsigned int std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::get() const(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_ptr() const(a0);
 return v0;
}


// Function: sub_40235c at 0x40235c
void sub_40235c()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x402360
unsigned int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_ptr() const(unsigned int a0)
{
 return *((int *)std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2> const&)(a0));
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402388
unsigned int std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2> const&)(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)(a0);
 return int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)(a0);
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4023ac
unsigned int int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)(a0);
 return std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)(a0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERKS2_ at 0x4023d0
unsigned int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::__dollar__2> const&)(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = std::_Head_base<0u, int*, false>::_M_head(a0);
 return std::_Head_base<0u, int*, false>::_M_head(a0);
}


// Function: _ZN11SimpleClassC2EiPKc at 0x4023f4
int SimpleClass_SimpleClass_impl(char *this_ptr, int val, const char *name)
{
 struct_0 *ptr = (struct_0 *)this_ptr;
 unsigned int v1 = val; // r1
 char *v2 = (char *)name; // r2

 ptr->field_0 = v1;
 strncpy(&ptr->padding_4, v2, 31);
 ptr->field_23 = 0;
 return 0;
}


// Function: _ZN11SimpleClass8setValueEi at 0x402444
int SimpleClass_setValue_impl(char *obj, int val)
{
 struct_0 *ptr; // r0

 ptr = (struct_0 *)obj;
 ptr->field_0 = val;
 return val;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x402464
unsigned int SimpleClass_getValue_impl(char *obj)
{
 struct_0 *v0; // r0

 v0 = (struct_0 *)obj;
 return v0->field_0;
}


// Function: _ZNK11SimpleClass7computeEi at 0x40247c
unsigned int SimpleClass_compute_impl(char *obj, int multiplier)
{
 struct_0 *ptr; // r0
 unsigned int v0; // [bp-0x14]

 ptr = (struct_0 *)obj;
 v0 = ptr->field_0;
 return strlen(ptr->padding_4) + v0 * multiplier;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x4024c4
void SimpleClass_getClassID_impl(void* this)
{
 return;
}


// Function: _ZN14LifecycleClassC2Ej at 0x4024d0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void LifecycleClass_LifecycleClass_impl()
{
 unsigned int ptr[2]; // r0
 unsigned int v2; // r1
 unsigned int v3; // r1
 unsigned int result; // r1
 unsigned int v5; // r0
 unsigned int idx; // [bp-0x18]

 ptr[1] = v2;
 v3 = v2 & 1073741823;
 result = v2 - v3;
 if (v2 != v3)
 result = 1;
 v5 = v2 * 4;
 if (result)
 v5 = 4294967295;
 ptr[0] = (unsigned int)operatornew[](v5);
 for (idx = 0; v2 > idx; idx += 1)
 {
 *((unsigned int *)(ptr[0] + idx * 4)) = idx * 10;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x40259c
unsigned int LifecycleClass_getData_impl(char *obj, unsigned int index)
{
 struct_0 *v1; // r0
 unsigned int v0; // [bp-0x10]

 v1 = (struct_0 *)obj;
 v0 = (v1->field_0 <= index ? 4294967295 : *((int *)(v1->field_0 + index * 4)));
 return v0;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x4025f4
void LifecycleClass_getInstanceCount_impl(void* this)
{
 return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x402604
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass_Destructor_impl(void* ptr)
{
 unsigned int v0; // [bp-0x14]

 v0 = *((int *)ptr);
 if (*((int *)ptr))
 operatordelete[](v0);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _ZN4BaseC2Ev at 0x40266c
extern char g_414c48;

int Base_Base_impl()
{
 unsigned int ptr; // r0

 *((char **)ptr) = &g_414c48;
 return 0;
}


// Function: _ZN7DerivedC2Ei at 0x402694
extern char g_414c68;

int Derived_Derived_impl()
{
 struct_0 *ptr; // r0
 unsigned int v1; // r1

 Base::Base();
 *((char **)&ptr->padding_0[0]) = &g_414c68;
 ptr->field_4 = v1;
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x4026e0
int Base_virtual_func_impl(char *obj, int arg)
{
 return arg + 1;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4026fc
int Derived_virtual_func_impl(char *obj, int arg)
{
 struct_0 *v1; // r0

 v1 = (struct_0 *)obj;
 return arg * v1->field_4;
}


// Function: _ZN7DerivedD2Ev at 0x402720
int Derived_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN4BaseD2Ev at 0x40274c
int Base_Destructor_impl(void* this)
{
 return 0;
}


// Function: _ZN12MultiDerivedC2Ev at 0x402760
extern char g_414c8c;
extern char g_414ca4;

int MultiDerived_MultiDerived_impl()
{
 unsigned int ptr; // r0

 BaseA_BaseA(ptr);
 BaseB_BaseB(ptr + 8);
 *((char **)ptr) = &g_414c8c;
 *((char **)(ptr + 8)) = &g_414ca4;
 return ptr;
}


// Function: _ZN12MultiDerivedD2Ev at 0x4027b4
int MultiDerived_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x4027ec
extern unsigned int _ZTT14DiamondDerived;
extern char g_414d14;
extern char g_414d2c;
extern char g_414d48;
extern unsigned int g_414d58;

int DiamondDerived_DiamondDerived_impl()
{
 unsigned int ptr; // r0
 unsigned int v0; // [bp-0x14]

 VirtualBase_VirtualBase(ptr + 16);
 v0 = &_ZTT14DiamondDerived;
 MiddleA_MiddleA(ptr, &g_414d58);
 MiddleB_MiddleB(ptr + 8, v0 + 12);
 *((char **)ptr) = &g_414d14;
 *((char **)(ptr + 16)) = &g_414d48;
 *((char **)(ptr + 8)) = &g_414d2c;
 return ptr;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402870
int DiamondDerived_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN5PointC2Eii at 0x4028b4
int Point_Point_impl(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return;
}


// Function: _ZNK5PointplERKS_ at 0x4028e0
int Point_operator_plus_impl(char *a0, char *a1)
{
 unsigned int v0[2]; // r2
 unsigned int v1; // r0

 v1 = (unsigned int)Point_Point_impl(a0, *((int *)&a1) + v0[0], *((int *)&a1[4]) + v0[1]);
 return (unsigned int)Point_Point_impl(a0, *((int *)&a1) + v0[0], *((int *)&a1[4]) + v0[1]);
}


// Function: _ZNK5PointeqERKS_ at 0x402924
int Point_operator_eq_impl(char *ptr, char *other)
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 if (*((int *)ptr) == *((int *)other))
 {
 v2 = *((int *)&ptr[4]) - *((int *)&other[4]);
 v0 = v2 + -(v2) + (v2 <= 0);
 }
 return v0 & 1;
}


// Function: _ZN5PointppEv at 0x40298c
int Point_operator_increment_impl(unsigned int *ptr)
{
 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return ptr[0];
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4029b8
int template_max<int>(int arg_0, int arg_1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (arg_0 <= arg_1 ? arg_1 : arg_0);
 return v0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4029fc
unsigned int template_max_double(unsigned int v2, unsigned int v3, unsigned int v4, unsigned int v5)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]

 if (!__aeabi_dcmpgt(v2, v3, v4, v5))
 {
 v0 = v4;
 v1 = v5;
 return v1;
 }
 v0 = v2;
 v1 = v3;
 return v1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402a74
int template_swap<int>(unsigned int *ptr)
{
 unsigned int *p; // r1
 unsigned int v0; // [bp-0xc]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402ab0
int Container_int_Container_impl()
{
 struct_0 *ptr; // r0

 ptr->field_28 = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402acc
void Container_int_push_impl(char *ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int *p = (unsigned int *)ptr;

 if (9 >= p[10])
 {
 index = p[10];
 p[10] = index + 1;
 p[index] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402b14
unsigned int Container_int_get_impl(char *obj, unsigned int idx)
{
 unsigned int *ptr; // r0
 unsigned int v0; // [bp-0x4]

 ptr = (unsigned int *)obj;
 if (ptr[10] > idx)
 {
 v0 = ptr[idx];
 return v0;
 }
 v0 = 0;
 return v0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402b7c
unsigned int Container_int_getSize_impl(char *obj)
{
 unsigned int *v0; // r0

 v0 = (unsigned int *)obj;
 return v0[10];
}


// Function: _ZN9ContainerIdEC1Ev at 0x402b94
int Container_double_Container_impl()
{
 struct_0 *ptr; // r0

 ptr->field_50 = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402bb0
int Container_double_push_impl()
{
 unsigned int ptr[21]; // r0
 unsigned int v1; // r0
 unsigned int v2; // r3
 unsigned int index; // r3
 unsigned int v4; // r2

 v1 = ptr[20];
 if (9 >= v1)
 {
 v1 = v2;
 index = ptr[20];
 ptr[20] = index + 1;
 ptr[2 * index] = v4;
 ptr[1 + 2 * index] = v1;
 }
 return v1;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402c04
unsigned int Container_double_get_impl(char *obj, unsigned int idx)
{
 unsigned int *ptr; // r0
 unsigned int v0; // [bp-0x8]

 ptr = (unsigned int *)obj;
 if (ptr[20] > idx)
 {
 v0 = ptr[2 * idx];
 return v0;
 }
 v0 = 0;
 return v0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402c7c
unsigned int Container_double_getSize_impl(char *obj)
{
 unsigned int *ptr; // r0

 ptr = (unsigned int *)obj;
 return ptr[20];
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x402c94
int std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(char *a0)
{
 unsigned int v0; // r1

 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, v0);
 return a0;
}


// Function: sub_402ccc at 0x402ccc
void sub_402ccc()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x402cd0
unsigned int std_unique_ptr_int_dereference_impl(void* this)
{
 return std_unique_ptr_int_get_impl();
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x402d04
int std::move<std::unique_ptr<int, std::default_delete<int>>&>(char *a0)
{
 return a0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x402d18
int std::unique_ptr<int, std::default_delete<int>>::unique_ptr()
{
 unsigned int v0; // r0
 unsigned int v1; // r1

 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(v0, v1);
 return v0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x402d4c
int std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(char *a0)
{
 unsigned int v0; // r1

 std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, v0);
 return a0;
}


// Function: sub_402d84 at 0x402d84
void sub_402d84()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x402d88
int std::unique_ptr<int[], std::default_delete<int[]>>::operator[]()
{
 unsigned int v0; // r0
 unsigned int v1; // r1

 return std::unique_ptr<int[], std::default_delete<int[]>>::get(v0) + v1 * 4;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x402dc8
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
 unsigned int v3; // r0
 unsigned int v4; // r2
 unsigned int v5; // r3
 void* v0; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14]
 void* v2; // [bp-0xc]

 v0 = this;
 v2 = this;
 ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
 if (*(ptr))
 {
 v3 = std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter(v0);
 std::default_delete<int[]>::operator()<int>(v3, *(ptr), v4, v5);
 }
 *(ptr) = 0;
 return;
}


// Function: sub_402e38 at 0x402e38
void sub_402e38()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x402e3c
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
 unsigned int *v4; // r0
 unsigned int v0; // [bp-0x1c]
 void* v1; // [bp-0x18]
 unsigned int *v2; // [bp-0x14]
 void* v3; // [bp-0xc]

 v1 = this;
 v3 = this;
 v2 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
 if (*(v2))
 {
 v0 = std::unique_ptr<int, std::default_delete<int>>::get_deleter(v1);
 v4 = std::move<int*&>(v2);
 std::default_delete<int>::operator()(v0, *(v4));
 }
 *(v2) = 0;
 return;
}


// Function: sub_402ebc at 0x402ebc
void sub_402ebc()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x402ec0
extern char g_414ec4;

int RTTIDerivedA::RTTIDerivedA()
{
 unsigned int ptr; // r0

 RTTIBase::RTTIBase(ptr);
 *((char **)ptr) = &g_414ec4;
 return ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x402f00
extern char g_414eec;

int RTTIDerivedB::RTTIDerivedB()
{
 unsigned int ptr; // r0

 RTTIBase::RTTIBase(ptr);
 *((char **)ptr) = &g_414eec;
 return ptr;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x402f40
void std::type_info::operator==(void* this, class std::type_info &arg_0)
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]

 v1 = 1;
 if ((int)this[4] == *((int *)(arg_0 + 4)))
 return;
 v0 = 0;
 if (*((char *)(int)this[4]) != 42)
 {
 v2 = strcmp((int)this[4], *((int *)(arg_0 + 4)));
 v0 = v2 + -(v2) + (v2 <= 0);
 }
 v1 = v0;
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x402fe0
unsigned int RTTIDerivedA::derivedA_data(void* this)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x402ff4
unsigned int RTTIDerivedB::derivedB_data(void* this)
{
 return 0;
}


// Function: _ZNKSt9type_info4nameEv at 0x403008
void std::type_info::name(void* ptr)
{
 char *v0; // [bp-0xc], Other Possible Types: unsigned int

 if (*((char *)(int)ptr[4]) != 42)
 {
 v0 = (int)ptr[4];
 return;
 }
 v0 = (int)ptr[4] + 1;
 return;
}


// Function: _ZNK4Base7getNameEv at 0x40305c
void Base::getName(void* this)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x403078
int Base::~Base(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4030a8
void Derived::getName(void* this)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x4030c4
int Derived::~Derived(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZN5BaseAC2Ev at 0x4030f4
extern char g_414ce8;

int BaseA::BaseA(void* ptr)
{
 *((char **)ptr) = &g_414ce8;
 return;
}


// Function: _ZN5BaseBC2Ev at 0x40311c
extern char g_414cfc;

int BaseB::BaseB(void* ptr)
{
 *((char **)ptr) = &g_414cfc;
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403144
void MultiDerived::funcA(void* this)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x403158
int MultiDerived::~MultiDerived(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x403188
void MultiDerived::funcB(void* this)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x40319c
int non-virtual thunk to MultiDerived::funcB()(void* a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MultiDerived::funcB(a0 - 8);
 return (unsigned int)MultiDerived::funcB(a0 - 8);
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x4031b4
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x4031d0
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZN5BaseA5funcAEv at 0x4031e8
void BaseA::funcA(void* this)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x4031fc
int BaseA_Destructor_impl(void* this)
{
 return 0;
}


// Function: _ZN5BaseAD0Ev at 0x403210
int BaseA::~BaseA(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x403240
void BaseB::funcB(void* this)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x403254
int BaseB_Destructor_impl(void* this)
{
 return 0;
}


// Function: _ZN5BaseBD0Ev at 0x403268
int BaseB::~BaseB(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x403298
extern char g_414e38;

int VirtualBase::VirtualBase(void* ptr)
{
 *((char **)ptr) = &g_414e38;
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x4032c0
int MiddleA::MiddleA(void* ptr)
{
 unsigned int idx[2]; // r1

 *((unsigned int *)ptr) = idx[0];
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
 return;
}


// Function: _ZN7MiddleBC2Ev at 0x4032f4
int MiddleB::MiddleB(void* ptr)
{
 unsigned int idx[2]; // r1

 *((unsigned int *)ptr) = idx[0];
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x403328
void MiddleA::func(void* this)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x403350
int MiddleA_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x403394
int MiddleA::~MiddleA(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x4033c4
int thunk to MiddleA::func()(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
 return (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x4033e4
int thunk to MiddleA::~MiddleA()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x403408
int thunk to MiddleA::~MiddleA()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZN7MiddleB4funcEv at 0x403428
void MiddleB::func(void* this)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x403450
int MiddleB_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN7MiddleBD0Ev at 0x403494
int MiddleB::~MiddleB(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x4034c4
int thunk to MiddleB::func()(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
 return (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x4034e4
int thunk to MiddleB::~MiddleB()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x403508
int thunk to MiddleB::~MiddleB()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403528
void DiamondDerived::func(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x403550
int DiamondDerived::~DiamondDerived(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x403580
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)DiamondDerived::func(a0 - 8);
 return (unsigned int)DiamondDerived::func(a0 - 8);
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x403598
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x4035b4
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x4035cc
int thunk to DiamondDerived::func()(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
 return (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x4035ec
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x403610
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 return v1;
}


// Function: _ZN11VirtualBase4funcEv at 0x403630
void VirtualBase::func(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x403644
int VirtualBase_Destructor_impl(void* this)
{
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x403658
int VirtualBase::~VirtualBase(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x403688
int MiddleA::~MiddleA(void* this)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x4036a0
int MiddleB::~MiddleB(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x4036b8
void DiamondDerived_Destructor_impl2(void* this)
{
 unsigned int v2; // r1
 unsigned int v0; // [bp-0x18]
 void* v1; // [bp-0x14]

 v1 = this;
 v0 = v2;
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403708
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, class std::__uniq_ptr_data<int, std::default_delete<int>, true, true> &arg_0)
{
 void* v0; // [bp-0x14]

 v0 = this;
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x40373c
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl()
{
 unsigned int v1; // r1
 unsigned int v3; // r0
 unsigned int *ptr; // [bp-0x14]

 std::tuple<int*, std::default_delete<int>>::tuple(v3, std::move<std::tuple<int*, std::default_delete<int>>&>(v1));
 ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v1);
 *(ptr) = 0;
 return v3;
}


// Function: sub_403798 at 0x403798
void sub_403798()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x40379c
class std::remove_reference<std::tuple<int*, std::default_delete<int>>&>::type & std::move<std::tuple<int*, std::default_delete<int>>&>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
 return this;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x4037b0
int std::tuple<int*, std::default_delete<int>>::tuple(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
 void* v0; // [bp-0x14]

 v0 = this;
 std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(this, arg_0);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4037e4
int std_uniq_ptr_impl_int_M_ptr()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v1 = std_get_0_tuple_int((void*)v0);
 return v1;
}


// Function: __clang_call_terminate at 0x403808
void __clang_call_terminate()
{
 std::terminate(__cxa_begin_catch()); /* do not return */
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x403810
int std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl()
{
 unsigned int *ptr; // r0
 unsigned int *v2; // r1
 unsigned int v0; // [bp-0x10]

 std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(ptr, v0);
 *(ptr) = *(v2);
 return ptr;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x403850
int std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403868
unsigned int std_get_0_tuple_int(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std__get_helper_0_int(this_ptr);
 return std__get_helper_0_int(this_ptr);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40388c
unsigned int * std__get_helper_0_int(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_0_M_head(this_ptr);
 return (unsigned int *)std_Tuple_impl_0_M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4038b0
unsigned int std_Tuple_impl_0_M_head(void* this_ptr)
{
 return std_Head_base_0_M_head();
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x4038d4
unsigned int std_Head_base_0_M_head()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN8RTTIBaseC2Ev at 0x4038e8
extern char g_414ed8;

int RTTIBase::RTTIBase(void* ptr)
{
 *((char **)ptr) = &g_414ed8;
 return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x403910
int RTTIDerivedA_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40393c
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x40396c
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x403980
int RTTIBase_Destructor_impl(void* this)
{
 return 0;
}


// Function: _ZN8RTTIBaseD0Ev at 0x403994
int RTTIBase::~RTTIBase(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x4039c4
void RTTIBase::getType(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x4039d8
int RTTIDerivedB_Destructor_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x403a04
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operatordelete(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x403a34
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x403a48
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data()
{
 unsigned int v0; // r0
 unsigned int v1; // r1

 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(v0, v1);
 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x403a7c
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* this, int *arg_0)
{
 void* v0; // [bp-0x14]

 v0 = this;
 std::tuple<int*, std::default_delete<int>>::tuple<true, true>(this);
 *((int **)std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()) = arg_0;
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x403ac8
int std::tuple<int*, std::default_delete<int>>::tuple<true, true>()
{
 unsigned int v0; // r0

 std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(v0);
 return v0;
}


// Function: sub_403af8 at 0x403af8
void sub_403af8()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev at 0x403afc
int std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(void* this)
{
 std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0u, int*, false>::_Head_base(this);
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev at 0x403b30
int std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl()
{
 unsigned int v0; // r0

 std::_Head_base<1u, std::default_delete<int>, true>::_Head_base(v0);
 return v0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev at 0x403b5c
int std::_Head_base<0u, int*, false>::_Head_base()
{
 unsigned int *ptr; // r0

 *(ptr) = 0;
 return ptr;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev at 0x403b78
int std::_Head_base<1u, std::default_delete<int>, true>::_Head_base(void* this)
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x403b8c
int std::unique_ptr<int, std::default_delete<int>>::get_deleter()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v1);
 return v0;
}


// Function: sub_403bbc at 0x403bbc
void sub_403bbc()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x403bc0
void std::default_delete<int>::operator()(void* this, int *arg_0)
{
 void* v0; // [bp-0xc]

 v0 = this;
 if (!arg_0)
 return;
 operatordelete(arg_0);
 return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x403c00
int std::move<int*&>()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x403c14
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(void* this)
{
 std::get<1u, int*, std::default_delete<int>>(this);
 return;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403c38
unsigned int std_get_1_tuple_int()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v1 = std__get_helper_1_delete(v0);
 return std__get_helper_1_delete(v0);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x403c5c
unsigned int std__get_helper_1_delete(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_1_M_head(this_ptr);
 return std_Tuple_impl_1_M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x403c80
unsigned int std_Tuple_impl_1_M_head(void* this_ptr)
{
 return std_Head_base_1_M_head();
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x403ca4
unsigned int std_Head_base_1_M_head()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x403cb8
int std_unique_ptr_int_get_impl()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = v1;
 return v0;
}


// Function: sub_403ce8 at 0x403ce8
void sub_403ce8()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403cec
unsigned int std_uniq_ptr_impl_int_M_ptr_impl(void* this)
{
 return std_get_0_tuple_int(this);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x403d14
unsigned int std_get_0_tuple_int_const()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v1 = std__get_helper_0_int_const(v0);
 return std__get_helper_0_int_const(v0);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x403d38
unsigned int * std__get_helper_0_int_const(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_0_M_head_const(this_ptr);
 return (unsigned int *)std_Tuple_impl_0_M_head_const(this_ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x403d5c
unsigned int std_Tuple_impl_0_M_head_const(void* this_ptr)
{
 return std_Head_base_0_M_head_const();
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x403d80
unsigned int std_Head_base_0_M_head_const()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x403d94
int std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data()
{
 unsigned int v0; // r0
 unsigned int v1; // r1

 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(v0, v1);
 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x403dc8
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(void* this, int *arg_0)
{
 std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>(this);
 *((int **)std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this, arg_0)) = arg_0;
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x403e14
int std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
 unsigned int v0; // r0

 std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(v0);
 return v0;
}


// Function: sub_403e44 at 0x403e44
void sub_403e44()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403e48
int std_uniq_ptr_impl_int_array_M_ptr_impl()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v1 = v0;
 return v1;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x403e6c
int std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(void* this)
{
 void* v0; // [bp-0x10]

 v0 = this;
 std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl(this);
 std::_Head_base<0u, int*, false>::_Head_base();
 return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev at 0x403ea0
int std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl()
{
 unsigned int v0; // r0

 std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base(v0);
 return v0;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x403ecc
int std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base(void* this)
{
 return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403ee0
unsigned int std_get_0_tuple_int_array(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std__get_helper_0_int_array(this_ptr);
 return std__get_helper_0_int_array(this_ptr);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x403f04
unsigned int * std__get_helper_0_int_array(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_0_array_M_head(this_ptr);
 return (unsigned int *)std_Tuple_impl_0_array_M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x403f28
unsigned int std_Tuple_impl_0_array_M_head(void* this_ptr)
{
 return std_Head_base_0_M_head();
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x403f4c
int std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v1);
 return v0;
}


// Function: sub_403f7c at 0x403f7c
void sub_403f7c()
{
 __clang_call_terminate(); /* do not return */
}


// Failed to decompile function _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x403f80
// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x403fc0
void std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(void* this)
{
 std::get<1u, int*, std::default_delete<int[]>>(this);
 return;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403fe4
unsigned int std_get_1_tuple_int_array()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v1 = std__get_helper_1_delete_array(v0);
 return std__get_helper_1_delete_array(v0);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404008
unsigned int std__get_helper_1_delete_array(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_1_array_M_head(this_ptr);
 return std_Tuple_impl_1_array_M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x40402c
unsigned int std_Tuple_impl_1_array_M_head(void* this_ptr)
{
 return std_Head_base_1_array_M_head();
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404050
unsigned int std_Head_base_1_array_M_head()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404064
unsigned int std_unique_ptr_int_array_get_impl(void* this)
{
 unsigned int v0; // [bp-0x10]

 v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
 return v0;
}


// Function: sub_404094 at 0x404094
void sub_404094()
{
 __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404098
int std_uniq_ptr_impl_int_array_M_ptr()
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x4040c0
unsigned int std_get_0_tuple_int_array_const(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std__get_helper_0_int_array_const(this_ptr);
 return std__get_helper_0_int_array_const(this_ptr);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x4040e4
unsigned int * std__get_helper_0_int_array_const(void* this_ptr)
{
 unsigned int v0; // r0

 v0 = std_Tuple_impl_0_array_M_head_const(this_ptr);
 return (unsigned int *)std_Tuple_impl_0_array_M_head_const(this_ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404108
unsigned int std_Tuple_impl_0_array_M_head_const(void* this_ptr)
{
 return std_Head_base_0_M_head_const();
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x40412c
unsigned int * std_forward_int_ptr(void* this_ptr)
{
 return (unsigned int *)this_ptr;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x404140
int std_Head_base_0_constructor(void* ptr, unsigned int *arg_0)
{
 *((int *)ptr) = *((int *)std_forward_int_ptr(arg_0));
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


