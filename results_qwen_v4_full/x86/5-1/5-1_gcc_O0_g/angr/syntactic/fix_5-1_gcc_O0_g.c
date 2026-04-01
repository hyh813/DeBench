// Angr Decompilation of 5-1_gcc_O0_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */

// Forward declarations for C++ operators
void* operatornew(unsigned long size);
void operatordelete(void* ptr, unsigned long size);
void* operatornew[](unsigned long size);
void operatordelete[](void* ptr);

// Forward declarations for C++ exception handling
void _Unwind_Resume(unsigned long long);
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* exc, void* type_info, void* dest_fn, void* type_info2);
void* __cxa_begin_catch(unsigned long long);
void __cxa_end_catch(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long v5, unsigned long long v6, unsigned long long v7);
void __cxa_rethrow(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long v5, unsigned long long v6, unsigned long long v7);
void __cxa_bad_typeid();
void* __dynamic_cast(void* src, void* src_type, void* dst_type, void* src2);
void* std_type_info_name(void* this_ptr);
int std_type_info_operator_eq(void* this_ptr, void* arg_0);
unsigned long strlen(const char* s);
void __stack_chk_fail();

// Forward declarations for smart pointer functions
unsigned long long* std_uniq_ptr_impl_int_default_delete_int__M_ptr(unsigned long long v1);
unsigned long long* std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(unsigned long long v1);
int std_Head_base_0ul_int_ptr_false__Head_base_default(unsigned long long *ptr);
long long std_Head_base_M_head(void* this_ptr);

// Forward declarations for classes
struct struct_SimpleClass;
struct struct_Derived;
struct struct_Derived_vfunc;
struct struct_Container_int;
struct struct_Container_int_size;
struct struct_Container_double;
struct struct_Container_double_push;

// Forward declarations for SimpleClass functions
long long SimpleClass_SimpleClass(struct_SimpleClass *ptr, unsigned int v2, char *v3);
long long SimpleClass_getValue(struct_SimpleClass *v1);
long long SimpleClass_setValue(struct_SimpleClass *ptr, unsigned int v2);
long long SimpleClass_compute(struct_SimpleClass *v1, unsigned int v3);
unsigned int SimpleClass_getClassID(unsigned long long v5, unsigned long long v6, unsigned long long v7, unsigned long long v8, unsigned long long v9, unsigned long long v10);

// Forward declarations for LifecycleClass functions
long long LifecycleClass_LifecycleClass(unsigned long long *ptr, unsigned long long v3);
long long LifecycleClass_getData(unsigned long long *v2, unsigned long v1);
long long LifecycleClass_getInstanceCount();

// Forward declarations for Derived functions
long long Derived_Derived(struct_Derived *ptr, unsigned int v2);
long long Derived_virtual_func();

struct struct_0;

extern struct_0 *g_408fe8;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_408fe8;
 if (g_408fe8)
 v1 = g_408fe8();
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_408f18;
extern unsigned long long g_408f20;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_408f18;
 goto g_408f20;
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
 [D] Unsupported jumpkind Ijk_SigTRAP at address 4203269()
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
 unsigned long long v5; // rdi
 unsigned long long v6; // rsi
 unsigned long long v7; // rdx
 unsigned long long v8; // rcx
 unsigned long long v9; // r8
 unsigned long long v10; // r9
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x38]

 SimpleClass_SimpleClass(&v3, 5, "Test");
 SimpleClass_setValue(&v3, 10);
 v0 = SimpleClass_getValue(&v3);
 v1 = SimpleClass_compute(&v3, 3);
 v2 = SimpleClass_getClassID(v5, v6, v7, v8, v9, v10);
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
 v0 += (int)LifecycleClass_getInstanceCount(v3, v4, v5, v6, v7, v8);
 v0 += (int)LifecycleClass_getInstanceCount(&v1, v4, v5, v6, v7, v8) * 1000;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4024de
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void (*)(void*, int, int, void*))(*(long long**)arg_0))(arg_0, arg_1, arg_1, arg_0);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x40250b
class Base {
} Base;

extern char *g_408b50;

void test_cpp_virtual_func()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x60]
 unsigned int v1; // [bp-0x5c]
 unsigned int v2; // [bp-0x58]
 unsigned int v3; // [bp-0x54]
 unsigned long v4; // [bp-0x50]
 Base *v5; // [bp-0x48]
 Base *v6; // [bp-0x40]
 char v7; // [bp-0x38]
 unsigned long v8; // [bp-0x20]

 v8 = *(unsigned long long*)(40 + (unsigned long)ptr);
 v4 = (unsigned long)g_408b50;
 Derived_Derived(&v7, 3);
 v0 = Base_virtual_func(&v4, 5);
 v1 = Derived_virtual_func(&v7, 5);
 v5 = &v4;
 v6 = &v7;
 v2 = (unsigned long long)call_virtual_func(v5, 5);
 v3 = (unsigned long long)call_virtual_func(v6, 5);
 if (v8 == *(unsigned long long*)(40 + (unsigned long)ptr))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4025e1 at 0x4025e1
long long sub_4025e1()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
 return 0;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402616
void test_cpp_multiple_inheritance()
{
 unsigned long ptr; // fs
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

 v9 = *(unsigned long long*)(40 + (unsigned long)ptr);
 MultiDerived_MultiDerived(&v5);
 v6 = 100;
 v8 = 200;
 v3 = &v5;
 v4 = &v7;
 v0 = MultiDerived_funcA(v3);
 v1 = MultiDerived_funcB(v4);
 v2 = v3 != v4;
 if (v9 == *(unsigned long long*)(40 + (unsigned long)ptr))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4026ca at 0x4026ca
long long sub_4026ca()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
 return 0;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4026f3
void test_cpp_diamond_inheritance()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x68]
 unsigned int v1; // [bp-0x64]
 char *v2; // [bp-0x60]
 char v3; // [bp-0x58]
 char v4; // [bp-0x38]
 unsigned int v5; // [bp-0x30]
 unsigned long v6; // [bp-0x20]

 v6 = *(unsigned long long*)(40 + (unsigned long)ptr);
 DiamondDerived_DiamondDerived(&v3);
 v5 = 50;
 v2 = &v4;
 v0 = DiamondDerived_func(v2);
 v5 = 100;
 v1 = DiamondDerived_func(v2);
 if (v6 == *(unsigned long long*)(40 + (unsigned long)ptr))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402789 at 0x402789
long long sub_402789()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
 return 0;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4027b2
void test_cpp_operator_overload()
{
 char result; // [bp-0x29]
 char v1; // [bp-0x28]
 char v2; // [bp-0x20]
 unsigned long v3; // [bp-0x18]

 Point_Point(&v1, 1, 2);
 Point_Point(&v2, 3, 4);
 v3 = Point_operator_plus(&v1, &v2);
 result = Point_operator_eq(&v1, &v2);
 Point_operator_inc(&v3);
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

 v2 = template_max_int(3, 7);
 template_max_double(0, 0, 0, 0, 0, 0);
 v3 = 0x4004000000000000;
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
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

 Container_int_Constructor(&v3);
 Container_int_push(&v3, 10);
 Container_int_push(&v3, 20);
 Container_int_push(&v3, 30);
 v0 = Container_int_get(&v3, 0);
 v1 = Container_int_getSize(&v3);
 Container_double_Constructor(&v4);
 Container_double_push(&v4, 0);
 Container_double_get(&v4, 0);
 v2 = 4614253070214989087;
 return;
}


// Function: sub_402a11 at 0x402a11
void sub_402a11(unsigned long a0, unsigned long a1)
{
 test_cpp_lambda()::'lambda'(int)::operator()(int) const();
 return;
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x402a12
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

int test_cpp_lambda_lambda_operator(struct_0 *idx, unsigned int a1)
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
 char *v5; // [bp-0x20]

 v1 = 10;
 v0 = 20;
 v4 = v1;
 v5 = &v0;
 v2 = test_cpp_lambda_lambda_operator(&v4, 3);
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
 char* ptr; // rbp
 unsigned long long ptr_val; // rax
 unsigned long v12; // rax
 unsigned int v1; // [bp+0xfffdc]
 unsigned int v2; // [bp+0xfffe0]

 result = a2;
 if (result == 1)
 {
 v2 = *(int *)__cxa_begin_catch(v4);
 v1 = *(int *)(ptr - 44) + *(int *)(ptr - 40);
 __cxa_rethrow(a0, a1, a2, v5, v6, v7);
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 result = v9;
 }
 if (result != 1)
 _Unwind_Resume(v8); /* do not return */
 *(int *)&((char*)ptr)[36] = *(int *)__cxa_begin_catch(v8);
 ((unsigned int *)&((char*)ptr)[44])[0] = ((unsigned int *)&((char*)ptr)[44])[0] + ((unsigned int *)&((char*)ptr)[36])[0] * 2;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 ptr_val = __cxa_allocate_exception(1);
 __cxa_throw((void*)ptr_val, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, (void*)ptr_val);
 if (v9 != 2)
 {
 if (v9 != 3)
 _Unwind_Resume(v12); /* do not return */
 *(unsigned long long *)&((char*)ptr)[32] = (unsigned long long)__cxa_begin_catch(v12);
 ((unsigned int *)&((char*)ptr)[44])[0] = ((unsigned int *)&((char*)ptr)[44])[0] + 200;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 }
 else
 {
 *(unsigned long long *)&((char*)ptr)[24] = (unsigned long long)__cxa_begin_catch(v12);
 ((unsigned int *)&((char*)ptr)[44])[0] = ((unsigned int *)&((char*)ptr)[44])[0] + 100;
 __cxa_end_catch(a0, a1, a2, v5, v6, v7);
 }
}


// Function: sub_402be3 at 0x402be3
void sub_402be3(unsigned long a0, unsigned long a1)
{
 test_cpp_smart_ptr_lambda_operator();
 return;
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x402be4
unsigned int * test_cpp_smart_ptr_lambda_operator(unsigned long long a0, unsigned int *ptr)
{
 unsigned int *v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 *(ptr) = 4294967295;
 v2 = ptr;
 if (v2)
 operatordelete(v2, 4);
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

 v8 = *(unsigned long long*)(40 + (unsigned long)ptr6);
 p = operatornew(4);
 *(p) = 100;
 std_unique_ptr_int_default_delete_int_unique_ptr(&v4, p);
    *((unsigned int *)std_unique_ptr_operator_deref(&v4)) = 200;
 v12 = std_move_unique_ptr_int_default_delete_int(&v4);
 std_unique_ptr_constructor_copy(&v5, v12);
    v1 = *((int *)std_unique_ptr_operator_deref(&v5));
 ptr3 = operatornew[](20);
 ptr3[0] = 1;
 ptr4 = &ptr3[1];
 ptr4[0] = 2;
 ptr5 = &ptr4[1];
 ptr5[0] = 3;
 ptr = &ptr5[1];
 ptr[0] = 4;
 ptr[1] = 5;
 std_unique_ptr_int_array_default_delete_int_array__unique_ptr(&v6, ptr3);
 v2 = *(int *)std_unique_ptr_int_array_default_delete_int_array__operator_index((unsigned long)&v6, 2);
 addr = operatornew(4);
 *(addr) = 500;
 std_unique_ptr_custom_constructor(&v7, addr, &v0);
    v3 = *((int *)std_unique_ptr_custom_operator_deref(&v7));
 if (v8 == *(unsigned long long*)(40 + (unsigned long)ptr6))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402d7b at 0x402d7b
long long sub_402d7b()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
 return 0;
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

 ptr = operatornew(8);
 *(ptr) = NULL;
 RTTIDerivedA_RTTIDerivedA(ptr);
 result = ptr;
 p = operatornew(8);
 *(p) = NULL;
 RTTIDerivedB_RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid();
 }
 else if (!(std_type_info_operator_eq((void*)((unsigned long long*)*result)[8]), (void*)&_ZTI12RTTIDerivedA) & 255))
 {
 goto LABEL_402e4a;
 }
 cur += 10;
LABEL_402e4a:
 if (!flag1)
 {
 __cxa_bad_typeid();
 }
 else if (!(std_type_info_operator_eq((void*)((unsigned long long*)*flag1)[8]), (void*)&_ZTI12RTTIDerivedB) & 255))
 {
 goto LABEL_402e7b;
 }
 cur += 20;
LABEL_402e7b:
 v3 = (!result ? NULL : __dynamic_cast(result, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, NULL));
 if (v3)
 cur += RTTIDerivedA_derivedA_data(v3);
 v4 = (!flag1 ? NULL : __dynamic_cast(flag1, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
 if (v4)
 cur += RTTIDerivedB_derivedB_data(v4);
 if (result)
 {
 cur += (unsigned int)strlen(std_type_info_name((void*)((unsigned long long*)*result)[8]));
 v10 = result;
 if (!v10)
 goto LABEL_402f4e;
 }
 else
 {
 __cxa_bad_typeid();
 }
 std_type_info_name((void*)((unsigned long long*)*v10)[8]);
LABEL_402f4e:
 if (flag1)
 std_type_info_name((void*)((unsigned long long*)*flag1)[8]);
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
 std_uniq_ptr_data_constructor();
 return;
}


// Function: std_uniq_ptr_data_constructor at 0x4030e2
long long std_uniq_ptr_data_constructor(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 return std_uniq_ptr_impl_constructor(a0, a1, a2, a1);
}


// Function: std_unique_ptr_custom_constructor at 0x403110
long long std_unique_ptr_custom_constructor(char *a0, unsigned int *a1, char *a2)
{
 return std_uniq_ptr_data_constructor((unsigned long long)a0, (unsigned long long)a1, (unsigned long long)a2);
}


// Function: std_unique_ptr_custom_destructor at 0x40313e
unsigned long long * std_unique_ptr_custom_destructor(unsigned long long a0)
{
 unsigned long long v2; // rbx
 unsigned int *v3; // rax
 unsigned long long *ptr; // [bp-0x20]

 ptr = std_uniq_ptr_impl_M_ptr(a0);
 if (ptr && *ptr)
 {
 v2 = std_unique_ptr_custom_get_deleter(a0);
 v3 = (unsigned int *)(unsigned long)*ptr;
 test_cpp_smart_ptr_lambda_operator(v2, v3);
 }
 if (ptr) *ptr = 0;
 return ptr;
}


// Function: std_unique_ptr_custom_operator_deref at 0x4031a2
unsigned int* std_unique_ptr_custom_operator_deref(void* this_ptr)
{
 return (unsigned int*)std_unique_ptr_get((unsigned long long)this_ptr);
}


// Function: sub_4031c3 at 0x4031c3
void sub_4031c3(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_uniq_ptr_impl_constructor(a0, a1, a2);
 return;
}


// Function: std_uniq_ptr_impl_constructor at 0x4031c4
long long std_uniq_ptr_impl_constructor(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
 unsigned long v0; // [bp-0x28]

 v0 = a1;
 return std_tuple_constructor((long long)a0, (unsigned long long)&v0, a2);
}


// Function: std_uniq_ptr_impl_M_ptr at 0x403202
unsigned long long* std_uniq_ptr_impl_M_ptr(unsigned long long a0)
{
 return std_get_0ul_int_ptr_lambda(a0);
}


// Function: std_unique_ptr_get_deleter at 0x40321c
long long std_unique_ptr_get_deleter(unsigned long long a0)
{
 return std_uniq_ptr_impl_M_deleter(a0);
}


// Function: std_unique_ptr_get at 0x403236
long long std_unique_ptr_get(unsigned long long a0)
{
 return std_uniq_ptr_impl_M_ptr_const(a0);
}


// Function: std_forward_lambda at 0x403250
unsigned long std_forward_lambda(unsigned long a0)
{
 return a0;
}


// Function: std_tuple_constructor at 0x40325e
long long std_tuple_constructor(long long a0)
{
 unsigned int v1; // rdx
 unsigned long long v2; // rax
 unsigned long long v3; // rsi

 v2 = (unsigned long long)std_forward_lambda(v1);
 return std_Tuple_impl_constructor(a0, std_forward_int_ptr(v3), v2);
}


// Function: std_get_0ul_int_ptr_lambda at 0x4032ac
unsigned long long* std_get_0ul_int_ptr_lambda(unsigned long long a0);

unsigned long long* std_get_0ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long*)std_get_helper_0ul_int_ptr_lambda(a0);
}


// Function: std_uniq_ptr_impl_M_deleter at 0x4032c6
long long std_uniq_ptr_impl_M_deleter(unsigned long long a0)
{
 return std_get_1ul_int_ptr_lambda(a0);
}


// Function: std_uniq_ptr_impl_M_ptr_const at 0x4032e0
long long std_uniq_ptr_impl_M_ptr_const(unsigned long long a0)
{
 return *((long long *)std_get_0ul_int_ptr_lambda_const(a0));
}


// Function: sub_4032fd at 0x4032fd
void sub_4032fd(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std_Tuple_impl_0ul_constructor(a0, a1, a2);
 return;
}


// Function: std_Tuple_impl_0ul_constructor at 0x4032fe
long long std_Tuple_impl_0ul_constructor(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 unsigned long long v1; // rax

 v1 = a2;
 std_Tuple_impl_1ul_constructor(a0, v1, v1);
 std_Head_base_0ul_constructor(a0, a1);
 return a0;
}


// Function: std_get_helper_0ul_int_ptr_lambda at 0x403353
unsigned long long* std_get_helper_0ul_int_ptr_lambda(unsigned long long a0);

unsigned long long* std_get_helper_0ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long*)std_Tuple_impl_0ul_int_ptr_lambda_M_head(a0);
}


// Function: std_get_1ul_int_ptr_lambda at 0x40336d
unsigned long long* std_get_1ul_int_ptr_lambda(unsigned long long a0);

unsigned long long* std_get_1ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long*)std_get_helper_1ul_int_ptr_lambda(a0);
}


// Function: std_get_0ul_int_ptr_lambda_const at 0x403387
unsigned long long* std_get_0ul_int_ptr_lambda_const(unsigned long long a0);

unsigned long long* std_get_0ul_int_ptr_lambda_const(unsigned long long a0)
{
 return (unsigned long long*)std_get_helper_0ul_int_ptr_lambda_const(a0);
}


// Function: sub_4033a1 at 0x4033a1
void sub_4033a1(unsigned long a0, unsigned long a1)
{
 std_Tuple_impl_1ul_constructor(a0, a1);
 return;
}


// Function: std_Tuple_impl_1ul_constructor at 0x4033a2
long long std_Tuple_impl_1ul_constructor(unsigned long long a0, unsigned long long a1)
{
 return std_Head_base_1ul_constructor(a0, a1, a1);
}


// Function: std_Tuple_impl_0ul_M_head at 0x4033c8
long long std_Tuple_impl_0ul_M_head(unsigned long long a0)
{
 return std_Head_base_0ul_M_head(a0);
}


// Function: std_get_helper_1ul_int_ptr_lambda at 0x4033e2
unsigned long long* std_get_helper_1ul_int_ptr_lambda(unsigned long long a0);

unsigned long long* std_get_helper_1ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long*)std_Tuple_impl_1ul_int_ptr_lambda_M_head(a0);
}


// Function: std_get_helper_0ul_int_ptr_lambda_const at 0x4033fc
unsigned long long* std_get_helper_0ul_int_ptr_lambda_const(unsigned long long a0);

unsigned long long* std_get_helper_0ul_int_ptr_lambda_const(unsigned long long a0)
{
 return (unsigned long long*)std_Tuple_impl_0ul_int_ptr_lambda_M_head_const(a0);
}


// Function: std_Head_base_1ul_constructor at 0x403416
void std_Head_base_1ul_constructor(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: std_Tuple_impl_1ul_M_head at 0x403425
long long std_Tuple_impl_1ul_M_head(unsigned long long a0)
{
 return std_Head_base_1ul_M_head(a0);
}


// Function: std_Tuple_impl_0ul_M_head_const at 0x40343f
long long std_Tuple_impl_0ul_M_head_const(unsigned long long a0)
{
 return std_Head_base_0ul_M_head(a0);
}


// Function: std_Head_base_1ul_M_head at 0x403459
long long std_Head_base_1ul_M_head(unsigned long a0)
{
 return a0;
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
const char* std_type_info_name(void* this_ptr)
{
 unsigned long long *uptr = (unsigned long long *)this_ptr;
 if (*((char *)(uptr[8])) != 42)
 return NULL;
 return (const char*)(uptr[8]);
}


// Function: sub_403509 at 0x403509
void sub_403509(unsigned long a0, unsigned long a1)
{
 std::type_info::operator==();
 return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x40350a
void std_type_info_operator_eq(void* this_ptr, void* arg_0)
{
 unsigned long long *uptr = (unsigned long long *)this_ptr;
 unsigned long long *a0ptr = (unsigned long long *)arg_0;
 if ((long long)(uptr[8]) != *((long long *)((unsigned char*)a0ptr + 8)) && (*((char *)(unsigned long)(uptr[8]) == 42) || strcmp((const char*)(unsigned long)(uptr[8]), (const char*)(*((long long *)((unsigned char*)a0ptr + 8))))))
 return;
 return;
}


// Function: sub_40356f at 0x40356f
void sub_40356f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 SimpleClass_SimpleClass();
 return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x403570
typedef struct struct_SimpleClass {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} struct_SimpleClass;

long long SimpleClass_SimpleClass(struct_SimpleClass *ptr, unsigned int v2, char *v3)
{
 ptr->field_0 = v2;
 return (long long)ptr;
}


// Function: sub_4035b7 at 0x4035b7
void sub_4035b7(unsigned long a0)
{
 SimpleClass_getValue();
 return;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x4035b8
long long SimpleClass_getValue(struct_SimpleClass *v1)
{
 return v1->field_0;
}


// Function: _ZN11SimpleClass8setValueEi at 0x4035cc
long long SimpleClass_setValue(struct_SimpleClass *ptr, unsigned int v2)
{
 ptr->field_0 = v2;
 return (long long)ptr;
}


// Function: sub_4035e7 at 0x4035e7
void sub_4035e7(unsigned long a0, unsigned long a1)
{
 SimpleClass_compute();
 return;
}


// Function: _ZNK11SimpleClass7computeEi at 0x4035e8
long long SimpleClass_compute(struct_SimpleClass *v1, unsigned int v3)
{
 unsigned long long len; // rax

 len = strlen(v1->padding_4);
 return len + v3 * v1->field_0;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403620
unsigned int SimpleClass_getClassID(unsigned long long v5, unsigned long long v6, unsigned long long v7, unsigned long long v8, unsigned long long v9, unsigned long long v10)
{
 return 0;
}


// Function: sub_40362f at 0x40362f
void sub_40362f(unsigned long a0, unsigned long a1)
{
 LifecycleClass_LifecycleClass();
 return;
}


// Function: _ZN14LifecycleClassC1Em at 0x403630
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_LifecycleClass(unsigned long long *ptr, unsigned long long v3)
{
 unsigned long long i; // [bp-0x10]
 void* v0; // rax

 v0 = operatornew[](v3 * 4);
 ptr = (unsigned long long *)v0;
 ptr[1] = v3;
 i = 0;
 for (; i < v3; i += 1)
 {
  ((unsigned int *)ptr)[i + 2] = (unsigned int)i * 10;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return (long long)(_ZN14LifecycleClass14instance_countE + 1);
}


// Function: _ZN14LifecycleClassD1Ev at 0x4036d0
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass_LifecycleClass_Destructor(void* this_ptr)
{
 unsigned long long *v0; // rax

 v0 = *(unsigned long long **)this_ptr;
 if (v0)
 operatordelete[](v0, 0);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return 0;
}


// Function: sub_40370d at 0x40370d
void sub_40370d(unsigned long a0, unsigned long a1)
{
 LifecycleClass_getData();
 return;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x40370e
long long LifecycleClass_getData(unsigned long long *v2, unsigned long v1)
{
 return (v1 < v2[1] ? ((int *)v2)[v1] : 4294967295);
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403749
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_getInstanceCount()
{
 return (long long)(unsigned long long)_ZN14LifecycleClass14instance_countE;
}


// Function: sub_403759 at 0x403759
void sub_403759(unsigned long a0, unsigned long a1)
{
 Base_virtual_func();
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x40375a
long long Base_virtual_func(void* this_ptr, unsigned int v1)
{
 (void)this_ptr;
 return v1 + 1;
}


// Function: sub_403771 at 0x403771
void sub_403771(unsigned long a0)
{
 Base_getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x403772
long long Base_getName(void* this_ptr)
{
 (void)this_ptr;
 return 0;
}


// Function: sub_403787 at 0x403787
void sub_403787(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x403788
extern char *g_408b50;

int Base_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408b50;
 (void)ptr;
 return 0;
}


// Function: sub_4037a5 at 0x4037a5
void sub_4037a5(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x4037a6
int Base_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: sub_4037d5 at 0x4037d5
void sub_4037d5(unsigned long a0)
{
 Base_Constructor();
 return;
}


// Function: _ZN4BaseC2Ev at 0x4037d6
extern char *g_408b50;

int Base_Constructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408b50;
 return 0;
}


// Function: sub_4037f3 at 0x4037f3
void sub_4037f3(unsigned long a0, unsigned long a1)
{
 Derived_Derived();
 return;
}


// Function: _ZN7DerivedC1Ei at 0x4037f4
typedef struct struct_Derived {
 char padding_0[8];
 unsigned int field_8;
} struct_Derived;

extern char *g_408b20;

long long Derived_Derived(struct_Derived *ptr, unsigned int v2)
{
 Base_Constructor((void*)ptr);
 *((unsigned long long *)ptr) = (unsigned long long)g_408b20;
 ptr->field_8 = v2;
 return (long long)ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x40382e
typedef struct struct_Derived_vfunc {
 char padding_0[8];
 unsigned int field_8;
} struct_Derived_vfunc;

long long Derived_virtual_func()
{
 unsigned int v1; // esi
 struct_Derived *v2; // rdi

 (void)v1;
 (void)v2;
 return 0;
}


// Function: _ZNK7Derived7getNameEv at 0x40384a
long long Derived_getName(void* this_ptr)
{
 (void)this_ptr;
 return 0;
}


// Function: sub_40385f at 0x40385f
void sub_40385f(unsigned long a0)
{
 BaseA_funcA();
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x403860
void BaseA_funcA(void* this_ptr)
{
 return;
}


// Function: sub_403873 at 0x403873
void sub_403873(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x403874
extern char *g_408af8;

int BaseA_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408af8;
 return 0;
}


// Function: sub_403891 at 0x403891
void sub_403891(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x403892
int BaseA_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}


// Function: sub_4038c1 at 0x4038c1
void sub_4038c1(unsigned long a0)
{
 BaseB_funcB();
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x4038c2
void BaseB_funcB(void* this_ptr)
{
 return;
}


// Function: sub_4038d5 at 0x4038d5
void sub_4038d5(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD1Ev at 0x4038d6
extern char *g_408ad0;

int BaseB_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408ad0;
 return 0;
}


// Function: sub_4038f3 at 0x4038f3
void sub_4038f3(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x4038f4
int BaseB_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}


// Function: sub_403923 at 0x403923
void sub_403923(unsigned long a0)
{
 MultiDerived_funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403924
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: sub_403937 at 0x403937
void sub_403937(unsigned long a0)
{
 MultiDerived_funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x403938
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x40394b
// non-virtual thunk to MultiDerived::funcB()
void sub_40394b(void* a0)
{
 MultiDerived_funcB((char*)a0 - 16);
 return;
}


// Function: sub_403955 at 0x403955
void sub_403955(unsigned long a0)
{
 BaseA_Constructor();
 return;
}


// Function: _ZN5BaseAC1Ev at 0x403956
extern char *g_408af8;

int BaseA_Constructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408af8;
 return 0;
}


// Function: sub_403973 at 0x403973
void sub_403973(unsigned long a0)
{
 BaseB_Constructor();
 return;
}


// Function: _ZN5BaseBC2Ev at 0x403974
extern char *g_408ad0;

int BaseB_Constructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408ad0;
 return 0;
}


// Function: sub_403991 at 0x403991
void sub_403991(unsigned long a0)
{
 MultiDerived_MultiDerived();
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403992
extern char *g_408a78;
extern char *g_408aa8;

long long MultiDerived_MultiDerived(char* ptr)
{
 BaseA_Constructor(ptr);
 BaseB_Constructor(ptr + 16);
 *((unsigned long long *)ptr) = (unsigned long long)g_408a78;
 *((unsigned long long *)&ptr[16]) = (unsigned long long)g_408aa8;
 return (long long)ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x4039de
void VirtualBase_func(void* this_ptr)
{
 return;
}


// Function: sub_4039f1 at 0x4039f1
void sub_4039f1(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4039f2
extern char *g_408a50;

int VirtualBase_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408a50;
 return 0;
}


// Function: sub_403a0f at 0x403a0f
void sub_403a0f(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x403a10
int VirtualBase_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}


// Function: sub_403a3f at 0x403a3f
void sub_403a3f(unsigned long a0)
{
 MiddleA_func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x403a40
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403a6e
// thunk to MiddleA::func()
void sub_403a6e(void* *a0)
{
 MiddleA_func((char *)a0 + ((unsigned long long*)(*(a0)))[24]);
 return;
}


// Function: sub_403a7b at 0x403a7b
void sub_403a7b(unsigned long a0)
{
 MiddleB_func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x403a7c
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403aaa
// thunk to MiddleB::func()
void sub_403aaa(void* *a0)
{
 MiddleB_func((char *)a0 + ((unsigned long long*)(*(a0)))[24]);
 return;
}


// Function: sub_403ab7 at 0x403ab7
void sub_403ab7(unsigned long a0)
{
 DiamondDerived_func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403ab8
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x403ae6
// thunk to DiamondDerived::func()
void sub_403ae6(void* *a0)
{
 DiamondDerived_func((char *)a0 + ((unsigned long long*)(*(a0)))[24]);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x403af3
// non-virtual thunk to DiamondDerived::func()
void sub_403af3(void* a0)
{
 DiamondDerived_func((char*)a0 - 16);
 return;
}


// Function: sub_403afd at 0x403afd
void sub_403afd(unsigned long a0)
{
 VirtualBase_Constructor();
 return;
}


// Function: _ZN11VirtualBaseC1Ev at 0x403afe
extern char *g_408a50;

int VirtualBase_Constructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408a50;
 return 0;
}


// Function: sub_403b1b at 0x403b1b
void sub_403b1b(unsigned long a0, unsigned long a1)
{
 MiddleA_MiddleA();
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x403b1c
int MiddleA_MiddleA(void* ptr)
{
 unsigned long long idx[2]; // rsi
 unsigned long long **vtable_ptr;
 unsigned long long *vtable;

 idx[0] = 0;
 idx[1] = 0;
 *((unsigned long long *)ptr) = idx[0];
 vtable_ptr = (unsigned long long **)ptr;
 vtable = (unsigned long long *)(*vtable_ptr);
 *((unsigned long long *)((char*)ptr + (long long)vtable[-6])) = idx[1];
 return 0;
}


// Function: _ZN7MiddleAD2Ev at 0x403b60
int MiddleA_Destructor(void* ptr)
{
 unsigned long long idx[2]; // rsi
 unsigned long long **vtable_ptr;
 unsigned long long *vtable;

 idx[0] = 0;
 idx[1] = 0;
 *((unsigned long long *)ptr) = idx[0];
 vtable_ptr = (unsigned long long **)ptr;
 vtable = (unsigned long long *)(*vtable_ptr);
 *((unsigned long long *)((char*)ptr + (long long)vtable[-6])) = idx[1];
 return 0;
}


// Function: _ZN7MiddleBC2Ev at 0x403ba4
int MiddleB_MiddleB(void* ptr)
{
 unsigned long long idx[2]; // rsi
 unsigned long long **vtable_ptr;
 unsigned long long *vtable;

 idx[0] = 0;
 idx[1] = 0;
 *((unsigned long long *)ptr) = idx[0];
 vtable_ptr = (unsigned long long **)ptr;
 vtable = (unsigned long long *)(*vtable_ptr);
 *((unsigned long long *)((char*)ptr + (long long)vtable[-6])) = idx[1];
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x403be8
int MiddleB_Destructor(void* ptr)
{
 unsigned long long idx[2]; // rsi
 unsigned long long **vtable_ptr;
 unsigned long long *vtable;

 idx[0] = 0;
 idx[1] = 0;
 *((unsigned long long *)ptr) = idx[0];
 vtable_ptr = (unsigned long long **)ptr;
 vtable = (unsigned long long *)(*vtable_ptr);
 *((unsigned long long *)((char*)ptr + (long long)vtable[-6])) = idx[1];
 return 0;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403c2c
extern char *g_4088b8;
extern char *g_4088e8;
extern char *g_408920;

long long DiamondDerived_DiamondDerived(char* ptr)
{
 VirtualBase_Constructor(ptr + 32);
 MiddleA_MiddleA(ptr);
 MiddleB_MiddleB(ptr + 16);
 *((unsigned long long *)ptr) = (unsigned long long)g_4088b8;
 *((unsigned long long *)&ptr[32]) = (unsigned long long)g_408920;
 *((unsigned long long *)&ptr[16]) = (unsigned long long)g_4088e8;
 return (long long)ptr;
}


// Function: _ZN5PointC1Eii at 0x403cae
int Point_Point(void* ptr, int arg_0, int arg_1)
{
 ((int *)ptr)[0] = arg_0;
 ((int *)ptr)[1] = arg_1;
 return 0;
}


// Function: _ZNK5PointplERKS_ at 0x403cd6
long long Point_operator_plus(char *a0, char *a1)
{
 unsigned long v0; // [bp-0x18]

 Point_Point((void*)&v0, *((int *)a0) + *((int *)a1), *((int *)(a0 + 4)) + *((int *)(a1 + 4)));
 return v0;
}


// Function: sub_403d3f at 0x403d3f
void sub_403d3f(unsigned long a0, unsigned long a1)
{
 Point_operator_eq();
 return;
}


// Function: _ZNK5PointeqERKS_ at 0x403d40
long long Point_operator_eq(char *a0, char *a1)
{
 if (*((int *)a0) == *((int *)a1) && *((int *)(a0 + 4)) == *((int *)(a1 + 4)))
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x403d80
long long Point_operator_inc(unsigned int *ptr)
{
 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return (long long)ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403db2
int template_max_int(int arg_0, int arg_1)
{
 return (arg_0 <= arg_1 ? arg_1 : arg_0);
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403dd2
double template_max_double(double arg_0, double arg_1)
{
 if (((CmpF(arg_0, arg_1) & 69 | (char)((CmpF(arg_0, arg_1) & 69) >> 6)) & 1) == 1)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x403e08
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
 Container_int_Constructor();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x403e3a
typedef struct struct_Container_int {
 char padding_0[40];
 unsigned int field_28;
} struct_Container_int;

long long Container_int_Constructor(struct_Container_int *ptr)
{
 ptr->field_28 = 0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403e54
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v1; // eax
 char* v0; // rax

 v0 = (char*)ptr;
 if ((int)v0[40] <= 9)
 {
 v1 = (int)v0[40];
 *((unsigned int *)&v0[40]) = v1 + 1;
 *((int *)(v0 + 4 * v1)) = arg_0;
 }
 return;
}


// Function: sub_403e8f at 0x403e8f
void sub_403e8f(unsigned long a0, unsigned long a1)
{
 Container_int_get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403e90
long long Container_int_get(struct_Container_int *v2, unsigned int v1)
{
 if (v1 >= 0 && v1 < v2->field_28)
 return ((unsigned int *)((char*)v2))[v1];
 return 0;
}


// Function: sub_403ec7 at 0x403ec7
void sub_403ec7(unsigned long a0)
{
 Container_int_getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403ec8
typedef struct struct_Container_int_size {
 char padding_0[40];
 unsigned int field_28;
} struct_Container_int_size;

long long Container_int_getSize(struct_Container_int *v1)
{
 return v1->field_28;
}


// Function: sub_403edd at 0x403edd
void sub_403edd(unsigned long a0)
{
 Container_double_Constructor();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x403ede
typedef struct struct_Container_double {
 char padding_0[80];
 unsigned int field_50;
} struct_Container_double;

long long Container_double_Constructor(struct_Container_double *ptr)
{
 ptr->field_50 = 0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403ef8
typedef struct struct_Container_double_push {
 unsigned long long field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_Container_double_push;

long long Container_double_push(struct_Container_double *ptr, unsigned long v4)
{
 unsigned long index; // rax
 unsigned int v3; // eax

 index = ptr->field_50;
 if ((unsigned int)index <= 9)
 {
 v3 = ptr->field_50;
 ptr->field_50 = v3 + 1;
 index = v3;
 ((unsigned long long*)((char*)ptr))[index] = v4;
 }
 return index;
}


// Function: sub_403f39 at 0x403f39
void sub_403f39(unsigned long a0, unsigned long a1)
{
 Container_double_get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403f3a
long long Container_double_get(struct_Container_double *v2, unsigned int v1)
{
 if (v1 >= 0 && v1 < (int)v2->field_50)
 return ((unsigned long long*)((char*)v2))[v1];
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x403f7c
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: sub_403f91 at 0x403f91
void sub_403f91(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403f92
int std_uniq_ptr_data_constructor_copy(void* this_ptr, void* arg_0)
{
 std_uniq_ptr_impl_constructor((unsigned long long)this_ptr, (unsigned long long)arg_0, (unsigned long long)arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x403fbc
long long std_unique_ptr_constructor_copy(void* v1, unsigned long v2)
{
 std_uniq_ptr_data_constructor_copy(v1, (void*)v2);
 return 0;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x403fe6
void RTTIBase_getType(void* this_ptr)
{
 return;
}


// Function: sub_403ff9 at 0x403ff9
void sub_403ff9(unsigned long a0)
{
 RTTIDerivedA_getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x403ffa
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: sub_40400d at 0x40400d
void sub_40400d(unsigned long a0)
{
 RTTIDerivedA_derivedA_data();
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x40400e
int RTTIDerivedA_derivedA_data(void* this_ptr)
{
 return 0;
}


// Function: sub_404021 at 0x404021
void sub_404021(unsigned long a0)
{
 RTTIDerivedB_getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x404022
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: sub_404035 at 0x404035
void sub_404035(unsigned long a0)
{
 RTTIDerivedB_derivedB_data();
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x404036
int RTTIDerivedB_derivedB_data(void* this_ptr)
{
 return 0;
}


// Function: sub_404049 at 0x404049
void sub_404049(unsigned long a0)
{
 RTTIBase_Constructor();
 return;
}


// Function: _ZN8RTTIBaseC1Ev at 0x40404a
extern char *g_408888;

int RTTIBase_Constructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408888;
 return 0;
}


// Function: sub_404067 at 0x404067
void sub_404067(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404068
extern char *g_408888;

int RTTIBase_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408888;
 return 0;
}


// Function: sub_404085 at 0x404085
void sub_404085(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x404086
int RTTIBase_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: sub_4040b5 at 0x4040b5
void sub_4040b5(unsigned long a0)
{
 RTTIDerivedA_RTTIDerivedA();
 return;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x4040b6
extern char *g_408860;

long long RTTIDerivedA_RTTIDerivedA(char* ptr)
{
 RTTIBase_Constructor(ptr);
 *((unsigned long long *)ptr) = (unsigned long long)g_408860;
 return (long long)ptr;
}


// Function: sub_4040e3 at 0x4040e3
void sub_4040e3(unsigned long a0)
{
 RTTIDerivedB_RTTIDerivedB();
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x4040e4
extern char *g_408838;

long long RTTIDerivedB_RTTIDerivedB(char* ptr)
{
 RTTIBase_Constructor(ptr);
 *((unsigned long long *)ptr) = (unsigned long long)g_408838;
 return (long long)ptr;
}


// Function: sub_404111 at 0x404111
void sub_404111(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x404112
int std_uniq_ptr_data_int_default_delete_int___uniq_ptr_data(void* this_ptr, int *arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int__uniq_ptr_impl((unsigned long long)this_ptr, arg_0, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x40413c
long long std_unique_ptr_int_default_delete_int_unique_ptr(char *a0, unsigned int *a1)
{
 std_uniq_ptr_data_int_default_delete_int___uniq_ptr_data((void*)a0, a1);
 return (long long)(unsigned long)a0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x404166
int std_unique_ptr_destructor(void* this_ptr)
{
 unsigned long long v2; // rbx
 unsigned long long *v3; // rax
 unsigned long long *ptr; // [bp-0x20]

 ptr = std_uniq_ptr_impl_M_ptr((unsigned long long)this_ptr);
 if (ptr && *ptr)
 {
 v2 = (unsigned long long)std_unique_ptr_get_deleter((unsigned long long)this_ptr);
 v3 = (unsigned int *)(unsigned long)*ptr;
 std_default_delete_operator_call((void*)v2, v3);
 }
 if (ptr) *ptr = 0;
 return 0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x4041ce
unsigned int* std_unique_ptr_operator_deref(void* this_ptr)
{
 return (unsigned int*)(unsigned long)std_unique_ptr_get((unsigned long long)this_ptr);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x4041f3
void* std_move_unique_ptr_int_default_delete_int(void* v1)
{
 return v1;
}


// Function: sub_404205 at 0x404205
void sub_404205(unsigned long a0, unsigned long a1)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_default();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_ at 0x404206
int std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(void* ptr, void* arg_0)
{
 std_Tuple_impl_1ul_default_delete_int__Tuple_impl((unsigned long long)ptr, (unsigned long long)arg_0, (unsigned long long)arg_0);
 *((long long *)ptr) = *((long long *)arg_0);
 return 0;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x40423e
int std_tuple_int_ptr_default_delete_int__tuple(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl((unsigned long long)this_ptr, (unsigned long long)arg_0);
 return 0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x404268
long long std_uniq_ptr_impl_int_default_delete_int__uniq_ptr_impl(void* v3, unsigned long long v1)
{
 unsigned long long *ptr; // rax

 std_tuple_int_ptr_default_delete_int__tuple((unsigned long long)v3, (unsigned long long)std_move_tuple(v1));
 ptr = (unsigned long long *)std_uniq_ptr_impl_int_default_delete_int__M_ptr((unsigned long long)v3);
 if (ptr) *(ptr) = 0;
 return (long long)(unsigned long)ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x4042b2
int std_uniq_ptr_data_int_default_delete_int_array___uniq_ptr_data(void* this_ptr, int *arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl((unsigned long long)this_ptr, (unsigned long long)arg_0, (unsigned long long)arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x4042dc
long long std_unique_ptr_int_array_default_delete_int_array__unique_ptr(char *a0, unsigned int *a1)
{
 std_uniq_ptr_data_int_default_delete_int_array___uniq_ptr_data((void*)a0, a1);
 return (long long)a0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x404306
int std_unique_ptr_int_array_default_delete_int_array_destructor(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long *ptr; // [bp-0x10]

 ptr = std_uniq_ptr_impl_int_default_delete_int_array__M_ptr((unsigned long long)this_ptr);
 if (ptr && *ptr)
 {
 v2 = (unsigned long long)std_unique_ptr_int_array_default_delete_int_array__get_deleter((unsigned long long)this_ptr);
 std_default_delete_array_operator_call((void*)v2, (void*)(unsigned long)*ptr);
 }
 if (ptr) *ptr = 0;
 return 0;
}


// Function: sub_404361 at 0x404361
void sub_404361(unsigned long a0, unsigned long a1)
{
 std_unique_ptr_int_array_default_delete_int_array__operator_index();
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x404362
long long std_unique_ptr_int_array_default_delete_int_array__operator_index(unsigned long v1, unsigned long long v2)
{
 return v1 * 4 + (long long)std_unique_ptr_array_get((void*)v2);
}


// Function: sub_404399 at 0x404399
void sub_404399(unsigned long a0, unsigned long a1)
{
 std_uniq_ptr_impl_int_default_delete_int__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x40439a
long long std_uniq_ptr_impl_int_default_delete_int__uniq_ptr_impl(void* a0, int *a1)
{
 unsigned long long **ptr; // rax

 std_tuple_int_ptr_default_delete_int__tuple_true_true((unsigned long long)a0);
 ptr = (unsigned long long **)std_uniq_ptr_impl_int_default_delete_int__M_ptr((unsigned long long)a0);
 if (ptr) *ptr = (unsigned long long *)a1;
 return (long long)ptr;
}


// Function: sub_4043d5 at 0x4043d5
void sub_4043d5(unsigned long a0)
{
 std_uniq_ptr_impl_int_default_delete_int__M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4043d6
unsigned long long* std_uniq_ptr_impl_int_default_delete_int__M_ptr(unsigned long long v1)
{
 return (unsigned long long*)std_get_0ul_int_ptr_default_delete_int((void*)v1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x4043f4
long long std_unique_ptr_int_default_delete_int__get_deleter(unsigned long long v1)
{
 return std_uniq_ptr_impl_M_deleter(v1);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404412
long long std_move_int_ptr_ref()
{
 unsigned long v1; // rdi

 return v1;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404424
void std_default_delete_operator_call(void* this_ptr, int *arg_0)
{
 (void)this_ptr;
 if (arg_0)
 operatordelete(arg_0, 4);
 return;
}


// Function: sub_404361 at 0x404361
void sub_404361(unsigned long a0, unsigned long a1)
{
 std_unique_ptr_int_array_default_delete_int_array__operator_index();
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x404362
unsigned int* std_unique_ptr_int_array_default_delete_int_array__operator_index(unsigned long v1, unsigned long long v2)
{
 return (unsigned int*)((unsigned long long)v1 * 4 + (unsigned long long)std_unique_ptr_array_get((void*)v2));
}


// Function: sub_404451 at 0x404451
void sub_404451(unsigned long a0)
{
 std_unique_ptr_int_default_delete_int_get();
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404452
long long std_unique_ptr_int_default_delete_int_get(unsigned long long v1)
{
 return (long long)(unsigned long)std_uniq_ptr_impl_int_default_delete_int__M_ptr((void*)v1);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x404470
void* std_move_tuple(void* this_ptr)
{
 return this_ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x404482
long long std_Tuple_impl_1ul_default_delete_int_Tuple_impl(unsigned long v1)
{
 return (long long)(unsigned long)v1;
}


// Function: sub_404495 at 0x404495
void sub_404495(unsigned long a0, unsigned long a1)
{
 std_uniq_ptr_impl_int_default_delete_int_array__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x404496
long long std_uniq_ptr_impl_int_default_delete_int_array__uniq_ptr_impl(void* a0, int *a1)
{
 unsigned long long **ptr; // rax

 std_tuple_int_ptr_default_delete_int_array__tuple_true_true((unsigned long long)a0);
 ptr = (unsigned long long **)std_uniq_ptr_impl_int_default_delete_int_array__M_ptr((unsigned long long)a0);
 if (ptr) *ptr = (unsigned long long *)a1;
 return (long long)ptr;
}


// Function: sub_4044d1 at 0x4044d1
void sub_4044d1(unsigned long a0)
{
 std_uniq_ptr_impl_int_default_delete_int_array__M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x4044d2
unsigned long long* std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(unsigned long long v1)
{
 return (unsigned long long*)std_get_0ul_int_ptr_default_delete_int_array((void*)v1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x4044f0
long long std_unique_ptr_int_array_default_delete_int_array__get_deleter(unsigned long long v1)
{
 return (long long)(unsigned long)std_uniq_ptr_impl_array_M_deleter((void*)v1);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x40450e
int std_default_delete_array_operator_call(unsigned long long a0, void* a1)
{
 (void)a0;
 if (a1)
 operatordelete[](a1);
 return 0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404538
unsigned long long* std_unique_ptr_array_get(void* this_ptr)
{
 return std_uniq_ptr_impl_M_ptr((unsigned long long)this_ptr);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x404556
long long std_tuple_int_ptr_default_delete_int__tuple_true_true(unsigned long long v1)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl((void*)v1);
 return v1;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404575
void* std_get_0_tuple(void* this_ptr)
{
 return std_get_helper_0(this_ptr);
}


// Function: sub_404593 at 0x404593
void sub_404593(unsigned long a0)
{
 std_uniq_ptr_impl_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x404594
long long std_uniq_ptr_impl_M_deleter(void* this_ptr)
{
 return std_get_1(this_ptr);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4045b2
long long std_uniq_ptr_impl_M_ptr_const(void* this_ptr)
{
 return (long long)std_get_0(this_ptr);
}


// Function: sub_4045d3 at 0x4045d3
void sub_4045d3(unsigned long a0)
{
 std_tuple_int_ptr_default_delete_int_array__tuple_true_true();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x4045d4
long long std_tuple_int_ptr_default_delete_int_array__tuple_true_true(unsigned long long v1)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl((void*)v1);
 return v1;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x4045f3
void* std_get_0ul_int_ptr_default_delete_int_array(void* this_ptr)
{
 return std_get_helper_0_array(this_ptr);
}


// Function: sub_404611 at 0x404611
void sub_404611(unsigned long a0)
{
 std_uniq_ptr_impl_array_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x404612
long long std_uniq_ptr_impl_array_M_deleter(void* this_ptr)
{
 return (long long)std_get_1_array(this_ptr);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404630
unsigned long long* std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(unsigned long long v1)
{
 return (unsigned long long*)std_get_0ul_int_ptr_default_delete_int_array((void*)v1);
}


// Function: sub_404651 at 0x404651
void sub_404651(unsigned long a0)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_default();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev at 0x404652
int std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl_default(void* this_ptr)
{
 std_Tuple_impl_1ul_default_delete_int__Tuple_impl_default((unsigned long long)this_ptr);
 std_Head_base_0ul_int_ptr_false__Head_base_default((unsigned long long)this_ptr);
 return 0;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40467d
long long std_get_helper_0ul_int_ptr_default_delete_int(unsigned long long v1)
{
 return (long long)std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head((void*)v1);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x40469b
long long std_get_1ul_int_ptr_default_delete_int(unsigned long long v1)
{
 return (long long)std_get_helper_1ul_default_delete_int((void*)v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x4046b9
long long std_get_0ul_int_ptr_default_delete_int_const(unsigned long long v1)
{
 return (long long)std_get_helper_0ul_int_ptr_default_delete_int_const((void*)v1);
}


// Function: sub_4046d7 at 0x4046d7
void sub_4046d7(unsigned long a0)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_default();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x4046d8
int std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl_default(void* this_ptr)
{
 std_Tuple_impl_1ul_default_delete_int_array__Tuple_impl_default((unsigned long long)this_ptr);
 std_Head_base_0ul_int_ptr_false__Head_base_default((unsigned long long)this_ptr);
 return 0;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404703
long long std_get_helper_0ul_int_ptr_default_delete_int_array(unsigned long long v1)
{
 return (long long)std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head((void*)v1);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404721
long long std_get_1ul_int_ptr_default_delete_int_array(unsigned long long v1)
{
 return (long long)std_get_helper_1ul_default_delete_int_array((void*)v1);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x40473f
void* std_get_0ul_int_ptr_default_delete_int_array_const(unsigned long long v1)
{
 return (void*)std_get_helper_0ul_int_ptr_default_delete_int_array_const((void*)v1);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x40475d
int ** std_forward_int_ptr(void* this_ptr)
{
 return (int **)this_ptr;
}


// Function: sub_40476f at 0x40476f
void sub_40476f(unsigned long a0)
{
 std_Tuple_impl_1ul_default_delete_int__Tuple_impl_default();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404770
long long std_Tuple_impl_1ul_default_delete_int__Tuple_impl_default()
{
 unsigned long long v1; // rdi

 return (long long)std_Head_base_1ul_default_delete_int_true__Head_base_default((void*)v1);
}


// Function: sub_40478f at 0x40478f
void sub_40478f(unsigned long a0)
{
 std_Head_base_0ul_int_ptr_false__Head_base_default();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC1Ev at 0x404790
long long std_Head_base_0ul_int_ptr_false__Head_base_default(unsigned long long *ptr)
{
 *ptr = 0;
 return (long long)ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4047aa
long long std_Tuple_impl_M_head(void* this_ptr)
{
 return (long long)(unsigned long)std_Head_base_M_head(this_ptr);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4047c8
void* std_get_helper_1(void* this_ptr)
{
 return std_Tuple_impl_1_M_head(this_ptr);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4047e6
int ** std_get_helper_0(void* this_ptr)
{
 return std_Tuple_impl_0_M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404804
long long std_Tuple_impl_1ul_default_delete_int_array__Tuple_impl_default(unsigned long long v1)
{
 return (long long)std_Head_base_1ul_default_delete_int_array_true__Head_base_default((void*)v1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404823
long long std_Tuple_impl_array_M_head(void* this_ptr)
{
 return (long long)(unsigned long)std_Head_base_M_head(this_ptr);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404841
void* std_get_helper_1_array(void* this_ptr)
{
 return std_Tuple_impl_1_array_M_head(this_ptr);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x40485f
long long std_get_helper_0ul_int_ptr_default_delete_int_array_const(unsigned long long v1)
{
 return (long long)std_Tuple_impl_0_array_M_head_const((void*)v1);
}


// Function: sub_40487d at 0x40487d
void sub_40487d(unsigned long a0, unsigned long a1)
{
 std_Head_base_constructor();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x40487e
int std_Head_base_constructor(void* ptr, int **arg_0)
{
 *(long long *)ptr = (long long)arg_0;
 return 0;
}


// Function: sub_4048ab at 0x4048ab
void sub_4048ab(unsigned long a0)
{
 std_Head_base_1ul_default_delete_int_true__Head_base_default();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x4048ac
int std_Head_base_1ul_default_delete_int_true__Head_base_default(void* this_ptr)
{
 return 0;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x4048bb
long long std_Head_base_0ul_int_ptr_false__M_head(void** this_ptr)
{
 return (long long)(unsigned long)*this_ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x4048cd
long long std_Tuple_impl_1ul_default_delete_int__M_head(void* this_ptr)
{
 return (long long)(unsigned long)std_Head_base_1ul_default_delete_int_true__M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x4048eb
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(void* this_ptr)
{
 return (long long)(unsigned long)std_Head_base_0ul_int_ptr_false__M_head_const(this_ptr);
}


// Function: sub_404909 at 0x404909
void sub_404909(unsigned long a0)
{
 std_Head_base_1ul_default_delete_int_array_true__Head_base_default();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev at 0x40490a
int std_Head_base_1ul_default_delete_int_array_true__Head_base_default(void* this_ptr)
{
 return 0;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404919
long long std_Tuple_impl_1ul_default_delete_int_array__M_head(void* this_ptr)
{
 return (long long)(unsigned long)std_Head_base_1ul_default_delete_int_array_true__M_head(this_ptr);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404937
long long std_Tuple_impl_0_array_M_head_const(unsigned long long v1)
{
 return (long long)(unsigned long)std_Head_base_M_head((void*)v1);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x404955
long long std_Head_base_1ul_default_delete_int_true__M_head(void** this_ptr)
{
 return (long long)(unsigned long)*this_ptr;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x404967
long long std_Head_base_0ul_int_ptr_false__M_head_const(void** this_ptr)
{
 return (long long)(unsigned long)*this_ptr;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404979
long long std_Head_base_1ul_default_delete_int_array_true__M_head(void** this_ptr)
{
 return (long long)(unsigned long)*this_ptr;
}


// Function: sub_40498b at 0x40498b
void sub_40498b(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x40498c
extern char *g_408838;

int RTTIDerivedB_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408838;
 return 0;
}


// Function: sub_4049b9 at 0x4049b9
void sub_4049b9(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4049ba
int RTTIDerivedB_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: sub_4049e9 at 0x4049e9
void sub_4049e9(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x4049ea
extern char *g_408860;

int RTTIDerivedA_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408860;
 return 0;
}


// Function: sub_404a17 at 0x404a17
void sub_404a17(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x404a18
int RTTIDerivedA_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: sub_404a47 at 0x404a47
void sub_404a47(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x404a48
extern char *g_4088b8;
extern char *g_4088e8;
extern char *g_408920;

int DiamondDerived_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_4088b8;
 *((unsigned long long *)&((char*)ptr)[32]) = (unsigned long long)g_408920;
 *((unsigned long long *)&((char*)ptr)[16]) = (unsigned long long)g_4088e8;
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404aca
// non-virtual thunk to DiamondDerived::~DiamondDerived()
void sub_404aca(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404ad7
// thunk to DiamondDerived::~DiamondDerived()
void sub_404ad7(unsigned long a0)
{
 return;
}


// Function: sub_404ae7 at 0x404ae7
void sub_404ae7(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404ae8
int DiamondDerived_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404b17
// non-virtual thunk to DiamondDerived::~DiamondDerived()
void sub_404b17(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x404b21
// thunk to DiamondDerived::~DiamondDerived()
void sub_404b21(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x404b2e
extern char *g_408a78;
extern char *g_408aa8;

int MultiDerived_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408a78;
 *((unsigned long long *)&((char*)ptr)[16]) = (unsigned long long)g_408aa8;
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x404b7a
// non-virtual thunk to MultiDerived::~MultiDerived()
void sub_404b7a(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x404b84
int MultiDerived_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x404bb3
// non-virtual thunk to MultiDerived::~MultiDerived()
void sub_404bb3(unsigned long a0)
{
 return;
}


// Function: sub_404bbd at 0x404bbd
void sub_404bbd(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x404bbe
extern char *g_408b20;

int Derived_Destructor(void* ptr)
{
 *((unsigned long long *)ptr) = (unsigned long long)g_408b20;
 return 0;
}


// Function: sub_404beb at 0x404beb
void sub_404beb(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x404bec
int Derived_DestructorDeleting(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


