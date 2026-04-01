/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
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

/* Helper macro for type coercion */
#define COERCE_DOUBLE(x) (*(double*)&(x))

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10A5C */
int init_proc()
{
 return call_weak_fn();
}

/* Forward declarations for C++ classes used as function names */
typedef struct Base Base;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct Derived Derived;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Point Point;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Static variables */
static int LifecycleClass_instance_count = 0;

/* Forward declaration for std::type_info */
typedef struct type_info type_info;
struct type_info {
    const void **vtable;
    const char *_name;
};

/* External vtable and data references */
extern const void *off_14464;
extern const void *off_14478;
extern const void *off_1448C;
extern const void *off_144A4;
extern const void *off_144BC;
extern const void *off_144D8;
extern const void *off_144E8;
extern const void *off_144F0;
extern const void *off_14570;
extern const void *off_14584;
extern const void *off_1459C;
extern const void *off_145B0;
extern const void *off_145C4;
extern const void *off_145D8;
extern const void *off_145F0;

/* External type_info references for RTTI */
extern const struct type_info typeinfo_for_int;
extern const struct type_info typeinfo_for_RTTIBase;
extern const struct type_info typeinfo_for_RTTIDerivedA;
extern const struct type_info typeinfo_for_RTTIDerivedB;

/* External C++ runtime functions */
extern void _cxa_bad_typeid(void);
extern void *_cxa_allocate_exception(size_t);
extern void _cxa_throw(void *, const struct type_info *, void (*)(void *));
extern void _cxa_throw_bad_array_new_length(void);
extern int _aeabi_atexit(void *, void (*)(void *), void *);


/* Function: sub_10A68 @ 0x10A68 */
void sub_10A68()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10CC4 */
int test_cpp_member_func(void)
{
 int Value; // [sp+4h] [bp-38h]
 SimpleClass *v2; // [sp+8h] [bp-34h]
 unsigned char v3[36]; // [sp+10h] [bp-2Ch] BYREF

  _ZN11SimpleClassC2EiPKc((SimpleClass *)v3, 5, "Test");
  _ZN11SimpleClass8setValueEi((SimpleClass *)v3, 10);
  Value = _ZNK11SimpleClass8getValueEv((SimpleClass *)v3);
  v2 = (SimpleClass *)_ZNK11SimpleClass7computeEi((SimpleClass *)v3, 3);
  return (int)v2 + Value + _ZN11SimpleClass10getClassIDEv(v2);
}


/* Function: _Z20test_cpp_constructorv @ 0x10D74 */
char *test_cpp_constructor(void)
{
 LifecycleClass *v0; // r0
 LifecycleClass *Data; // [sp+0h] [bp-14h]
 char *v3; // [sp+0h] [bp-14h]
 unsigned char v4[8]; // [sp+4h] [bp-10h] BYREF

  _ZN14LifecycleClassC2Ej((LifecycleClass *)v4, 5u);
  Data = (LifecycleClass *)_ZNK14LifecycleClass7getDataEj((LifecycleClass *)v4, 2u);
  v3 = (char *)Data + _ZN14LifecycleClass16getInstanceCountEv(Data);
  _ZN14LifecycleClassD2Ev((LifecycleClass *)v4);
  return &v3[1000 * _ZN14LifecycleClass16getInstanceCountEv(v0)];
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10E48 */
int call_virtual_func(int ( ***a1)(unsigned int, int), int a2)
{
 return (**a1)((Base *)a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10E84 */
int test_cpp_virtual_func(void)
{
 int v0; // r4
 unsigned int (**v2)(Base *__hidden, int); // [sp+0h] [bp-34h] BYREF
 int v3; // [sp+4h] [bp-30h]
 int v4; // [sp+8h] [bp-2Ch]
 unsigned int (***v5)(Base *__hidden, int); // [sp+Ch] [bp-28h]
 int ( ***v6)(unsigned int, int); // [sp+10h] [bp-24h]
 int v7; // [sp+14h] [bp-20h]
 int v8; // [sp+18h] [bp-1Ch]
 unsigned char v9[8]; // [sp+1Ch] [bp-18h] BYREF

 v2 = &off_145F0;
  _ZN7DerivedC2Ei((Derived *)v9, 3);
  v3 = _ZN4Base12virtual_funcEi((Base *)&v2, 5);
  v4 = _ZN7Derived12virtual_funcEi((Derived *)v9, 5);
  v5 = &v2;
  v6 = (int ( ***)(unsigned int, int))v9;
  v7 = call_virtual_func((int ( ***)(unsigned int, int))&v2, 5);
  v8 = call_virtual_func(v6, 5);
  v0 = v3 + v4 + v7 + v8;
  _ZN7DerivedD2Ev((Derived *)v9);
  _ZN4BaseD2Ev((Base *)&v2);
 return v0;
}


/* Function: Z29test_cpp_multiple_inheritancev @ 0x10FA0 */
int test_cpp_multiple_inheritance(void)
{
 int v0; // r4
 int v2; // [sp+8h] [bp-2Ch]
 MultiDerived v3; // [sp+14h] [bp-20h] BYREF
 MultiDerived v4; // [sp+1Ch] [bp-18h] BYREF

  _ZN12MultiDerivedC2Ev(&v3);
  v2 = _ZN12MultiDerived5funcAEv(&v3);
  v0 = v2 + _ZN12MultiDerived5funcBEv(&v4) + (&v3 != &v4);
  _ZN12MultiDerivedD2Ev(&v3);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110A4 */
int test_cpp_diamond_inheritance(void)
{
 int v0; // r4
 int v2; // [sp+4h] [bp-30h]
 unsigned char v3[16]; // [sp+Ch] [bp-28h] BYREF
 int ( **v4)(unsigned int); // [sp+1Ch] [bp-18h] BYREF
 int v5; // [sp+20h] [bp-14h]

  _ZN14DiamondDerivedC1Ev((DiamondDerived *)v3);
  v5 = 50;
  v2 = DiamondDerived_func((DiamondDerived *)v3);
  v5 = 100;
  v0 = v2 + DiamondDerived_func((DiamondDerived *)v3);
  _ZN14DiamondDerivedD1Ev((DiamondDerived *)v3);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1117C */
int test_cpp_operator_overload(void)
{
 int v0; // r2
 char v2; // [sp+3h] [bp-21h]
 unsigned char v3[8]; // [sp+4h] [bp-20h] BYREF
 unsigned char v4[8]; // [sp+Ch] [bp-18h] BYREF
 unsigned int v5[2]; // [sp+14h] [bp-10h] BYREF

  _ZN5PointC2Eii((Point *)v3, 1, 2);
  _ZN5PointC2Eii((Point *)v4, 3, 4);
  void_Point_operator_plus(v5, v3, v4);
  v2 = _ZNK5PointeqERKS_(v3, v4);
  _ZN5PointppEv(v5);
 if ( v2 )
 v0 = 0;
 else
 v0 = 10;
 return v0 + v5[0] + v5[1];
}


/* Function: _Z22test_cpp_template_funcv @ 0x11250 */
int test_cpp_template_func(int a1, int a2, int a3)
{
 int v4; // [sp+4h] [bp-20h] BYREF
 int v5; // [sp+8h] [bp-1Ch] BYREF
 int v6; // [sp+Ch] [bp-18h]
 double v7; // [sp+10h] [bp-14h]

 v6 = template_max_int(3, 7, a3, 0);
 v7 = COERCE_DOUBLE(template_max_double(0, 1074003968, 0, 1073217536));
 v4 = 10;
 v5 = 20;
 template_swap_int(&v4, &v5);
 return (int)v7 + v6 + v4 + v5;
}


/* Function: _Z23test_cpp_template_classv @ 0x11324 */
int test_cpp_template_class(void)
{
 int v1; // [sp+0h] [bp-ACh]
 int Size; // [sp+4h] [bp-A8h]
 unsigned char v3[44]; // [sp+14h] [bp-98h] BYREF
 unsigned char v4[92]; // [sp+40h] [bp-6Ch] BYREF

  _ZN9ContainerIiEC2Ev(v3);
  _ZN9ContainerIiE4pushEi(v3, 10);
  _ZN9ContainerIiE4pushEi(v3, 20);
  _ZN9ContainerIiE4pushEi(v3, 30);
  v1 = _ZNK9ContainerIiE3getEi(v3, 0);
  Size = _ZNK9ContainerIiE7getSizeEv(v3);
  _ZN9ContainerIdEC2Ev(v4);
  _ZN9ContainerIdE4pushEd(v4, v4, 1374389535, 1074339512);
  return v1 + Size + (int)COERCE_DOUBLE(_ZNK9ContainerIdE3getEi(v4, 0));
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1143C */
int test_cpp_lambda_lambda_int__operator_(int a1, int a2)
{
 **(unsigned int **)(a1 + 4) += 5;
 return *(unsigned int *)a1 * a2 + **(unsigned int **)(a1 + 4);
}


/* Function: _Z15test_cpp_lambdav @ 0x1149C */
int test_cpp_lambda(void)
{
 unsigned int v1[2]; // [sp+4h] [bp-20h] BYREF
 unsigned int v2[2]; // [sp+14h] [bp-10h] BYREF

 v1[1] = 10;
 v1[0] = 20;
 v2[0] = 10;
 v2[1] = v1;
 return test_cpp_lambda_lambda_int__operator_((int)v2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1152C */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: sub_11564 @ 0x11564 */
void sub_11564(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 __asm { POP {R4,R5,R11,PC} }
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1169C */
void test_cpp_smart_ptr_lambda_int_ptr__operator_(int a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x116E0 */
int test_cpp_smart_ptr(void)
{
 unsigned int *v0; // r0
 int v1; // r0
 unsigned int *v2; // r0
 unsigned int *v3; // r0
 int v4; // r4
 unsigned char v6[4]; // [sp+4h] [bp-30h] BYREF
 unsigned char v7[4]; // [sp+8h] [bp-2Ch] BYREF
 unsigned char v8[4]; // [sp+Ch] [bp-28h] BYREF
 unsigned char v9[4]; // [sp+10h] [bp-24h] BYREF
 unsigned char v10[4]; // [sp+14h] [bp-20h] BYREF
 int v11; // [sp+18h] [bp-1Ch]
 int v12; // [sp+1Ch] [bp-18h]
 int v13; // [sp+20h] [bp-14h]

 v0 = (unsigned int *)operator new(4u);
 *v0 = 100;
 _std_unique_ptr_int_unique_ptr(v7, v0);
 *(unsigned int *)_std_unique_ptr_int_operator_deref(v7) = 200;
 v1 = _std_move_unique_ptr_int_ref(v7);
 std::unique_ptr<int>::unique_ptr(v8, v1);
 v11 = *(unsigned int *)_std_unique_ptr_int_operator_deref(v8);
 v2 = (unsigned int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 _std_unique_ptr_int_array_unique_ptr(v9);
 v12 = *(unsigned int *)_std_unique_ptr_int_array_operator_bracket(v9, 2);
 v3 = (unsigned int *)operator new(4u);
 *v3 = 500;
 _std_unique_ptr_int_lambda_unique_ptr(
 v10,
 v3,
 v6);
 v13 = *(unsigned int *)_std_unique_ptr_int_lambda_operator_deref(v10);
 v4 = v11 + v12 + v13;
 _std_unique_ptr_int_lambda_dtor(v10);
 _std_unique_ptr_int_array_dtor(v9);
 _std_unique_ptr_int_dtor(v8);
 _std_unique_ptr_int_dtor(v7);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x118C4 */
size_t test_cpp_rtti(void)
{
 RTTIDerivedA *v0; // r4
 RTTIDerivedB *v1; // r4
 RTTIDerivedA *v2; // r3
 RTTIDerivedB *v3; // r3
 const char *v4; // r0
 int v6; // [sp+4h] [bp-20h]
 size_t v7; // [sp+4h] [bp-20h]
 RTTIDerivedA *lpsrc; // [sp+8h] [bp-1Ch]

 v0 = (RTTIDerivedA *)operator new(4u);
 *(unsigned int *)v0 = 0;
 RTTIDerivedA_RTTIDerivedA(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator new(4u);
 *(unsigned int *)v1 = 0;
 RTTIDerivedB_RTTIDerivedB(v1);
 v6 = 0;
 if ( !lpsrc )
 _cxa_bad_typeid();
 if ( ((type_info *)(*(unsigned int *)lpsrc - 4))->vtable == (const void **)&typeinfo_for_RTTIDerivedA )
 v6 = 10;
 if ( !v1 )
 _cxa_bad_typeid();
 if ( ((type_info *)(*(unsigned int *)v1 - 4))->vtable == (const void **)&typeinfo_for_RTTIDerivedB )
 v6 += 20;
 v2 = (RTTIDerivedA *)_dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 v6 += RTTIDerivedA_derivedA_data(v2);
 v3 = (RTTIDerivedB *)_dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 v6 += RTTIDerivedB_derivedB_data(v3);
 v4 = ((type_info **)(*(unsigned int *)lpsrc - 4)[0])->_name;
 v7 = strlen(v4) + v6;
 (*(void ( **)(RTTIDerivedA *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned int *)v1 + 4))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11ADC */
void test_cpp_oo_features(void)
{
 int v0; // r0
 char *v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r1
 int v8; // r2
 int v9; // r0
 int v10; // r0
 int v11; // r0

 puts(s);
 v0 = test_cpp_member_func();
 printf(format, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 v6 = printf(aCppL306D, v5);
 v9 = test_cpp_template_func(v6, v7, v8);
 printf(aCppL307D, v9);
 v10 = test_cpp_template_class();
 printf(aCppL308D, v10);
 v11 = test_cpp_lambda();
 printf(aCppL309D, v11);
 test_cpp_exception();
}


/* Function: main @ 0x11C18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: __ZNSt15__uniq_ptr_data_int_lambda_CI2 @ 0x11C30 */
int _ZNSt15__uniq_ptr_data_int_lambda_CI2(
 int a1,
 int a2,
 int a3)
{
 _std___uniq_ptr_impl_int_lambda___uniq_ptr_impl_const(
 a1,
 a2,
 a3);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x11C6C */
int _std_unique_ptr_int_lambda_unique_ptr(
 int a1,
 int a2,
 int a3)
{
 _ZNSt15__uniq_ptr_data_int_lambda_CI2(a1, a2, a3);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x11CA8 */
int _std_unique_ptr_int_lambda_dtor(int a1)
{
 int deleter; // r4
 unsigned int **v2; // r0
 unsigned int *v5; // [sp+Ch] [bp-10h]

 v5 = (unsigned int *)_std___uniq_ptr_impl_int_lambda__M_ptr_ptr(a1);
 if ( *v5 )
 {
 deleter = _std_unique_ptr_int_lambda_get_deleter(a1);
 v2 = (unsigned int **)_std_move_int_ptr_ref(v5);
 test_cpp_smart_ptr_lambda_operator(deleter, *v2);
 }
 *v5 = 0;
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x11D1C */
int _std_unique_ptr_int_lambda_operator_deref(int a1)
{
 return _std_unique_ptr_int_lambda_get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x11D4C */
int _std___uniq_ptr_impl_int_lambda___uniq_ptr_impl_const(
 int a1,
 int a2,
 int a3)
{
 int v4; // r0
 int v6; // [sp+8h] [bp-14h] BYREF
 int v7; // [sp+Ch] [bp-10h]

 v7 = a1;
 v6 = a2;
 v4 = _std_forward_lambda_const(a3);
 _std_tuple_int_ptr_lambda_tuple_const(
 a1,
 &v6,
 v4);
 return v7;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11D94 */
int _std___uniq_ptr_impl_int_lambda__M_ptr_ptr(int a1)
{
 return _std_get_0_int_ptr_lambda(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x11DC0 */
int _std_unique_ptr_int_lambda_get_deleter(int a1)
{
 return _std___uniq_ptr_impl_int_lambda__M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x11DEC */
int _std_unique_ptr_int_lambda_get(int a1)
{
 return _std___uniq_ptr_impl_int_lambda__M_ptr_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x11E18 */
void _std_forward_lambda_const()
{
 ;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x11E3C */
int _std_tuple_int_ptr_lambda_tuple_const(
 int a1,
 int a2)
{
 int v3; // r5
 int v4; // r0

 v3 = _std_forward_int_ptr_ref(a2);
 _std_forward_lambda_const();
 _std__Tuple_impl_0_int_ptr_lambda__Tuple_impl_const(
 a1,
 v3,
 v4);
 return a1;
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11E90 */
int _std_get_0_int_ptr_lambda(int a1)
{
 return _std___get_helper_0_int_ptr_lambda(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x11EBC */
int _std___uniq_ptr_impl_int_lambda__M_deleter(int a1)
{
 return _std_get_1_int_ptr_lambda(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11EE8 */
void *_std___uniq_ptr_impl_int_lambda__M_ptr_ptr(int a1)
{
 return (void *)_std_get_0_int_ptr_lambda(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x11F18 */
int _std__Tuple_impl_0_int_ptr_lambda__Tuple_impl_const(
 int a1,
 int a2)
{
 int v2; // r0
 int v3; // r0

 _std_forward_lambda_const();
 _std__Tuple_impl_1_lambda__Tuple_impl(a1, v2);
 v3 = _std_forward_int_ptr_ref(a2);
 _std__Head_base_0_int_ptr_false__Head_base_int_ref(a1, v3);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x11F74 */
int _std___get_helper_0_int_ptr_lambda(int a1)
{
 return _std__Tuple_impl_0_int_ptr_lambda__M_head(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11F9C */
int _std_get_1_int_ptr_lambda(int a1)
{
 return _std___get_helper_1_lambda(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x11FC4 */
int _std_get_0_int_ptr_lambda(int a1)
{
 return _std___get_helper_0_int_ptr_lambda(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x11FF0 */
int _std__Tuple_impl_1_lambda__Tuple_impl(int a1, int a2)
{
 _std__Head_base_1_lambda_true__Head_base(a1, a2);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x12020 */
int _std__Tuple_impl__M_head(int *self)
{
 return *self;
}

/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x120EC */
int _std__Tuple_impl_0_int_ptr_lambda__M_head(int *self)
{
 return *self;
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x1204C */
int _std___get_helper_1_lambda(int a1)
{
 return _std__Tuple_impl_1_lambda__M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x12074 */
int _std___get_helper_0_int_ptr_lambda(int a1)
{
 return _std__Tuple_impl_0_int_ptr_lambda__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x1209C */
void _std__Head_base_1_lambda_true__Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x120C4 */
int *_std__Tuple_impl_1_lambda__M_head(int *self)
{
 return self;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x120EC */
int _std__Tuple_impl_0_int_ptr_lambda__M_head_const(const int *self)
{
 return *self;
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x12118 */
int _std__Head_base_1_lambda_true__M_head(int *self)
{
 return *self;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x1213C */
int __static_initialization_and_destruction_0(int result, int a2)
{
 if ( result == 1 && a2 == 0xFFFF )
 {
 std_ios_base_Init_Init(&std___ioinit);
 return _aeabi_atexit(&std___ioinit, (void (*)(void *))std_ios_base_Init_Dtor, &_dso_handle);
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x121A0 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x121BC */
const char *std_type_info_name(const struct type_info *self)
{
 if ( **((unsigned char **)self + 1) == 42 )
 return (const char *)(*((unsigned int *)self + 1) + 1);
 else
 return (const char *)*((unsigned int *)self + 1);
}


/* Forward declarations for std library functions */
int _std__Head_base_0_int_ptr_false__M_head(int *self);
int _std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(int a1);
int _std__Head_base_0_int_ptr_false__M_head_const(const int *self);
int *_std_move_int_ptr_ref(int *a1);
void *_std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(int a1, int a2);
int _std___get_helper_0_int_ptr_lambda(int a1);
int _std__Tuple_impl_0_int_ptr_lambda__M_head(int a1);
int _std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(int a1);
unsigned int *_std__Head_base_0_int_ptr_false__Head_base(unsigned int *result);
int _std__Tuple_impl_0_int_ptr_lambda__M_head_const(int a1);
void _std__Head_base_0_int_ptr_false__Head_base_int_ref(unsigned int *a1, unsigned int *a2);
int _std___uniq_ptr_impl_int_lambda__M_ptr_ptr(int a1);
int _std_forward_int_ptr_ref(int a1);

/* Missing forward declarations */
size_t strlen(const char *s);

/* Forward declarations for static initialization */
extern void *_dso_handle;

/* Forward declaration for std::ios_base::Init */
struct std_ios_base_Init {
    void *vtable;
};
extern struct std_ios_base_Init std___ioinit;
void std_ios_base_Init_Init(struct std_ios_base_Init *obj);
void std_ios_base_Init_Dtor(struct std_ios_base_Init *obj);

/* Function: _ZN11SimpleClassC2EiPKc @ 0x12208 */
void SimpleClass_SimpleClass(SimpleClass *this_ptr, int a2, const char *a3)
{
 *(unsigned int *)this_ptr = a2;
 strncpy((char *)this_ptr + 4, a3, 0x1Fu);
 *((unsigned char *)this_ptr + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x12260 */
int SimpleClass_getValue(SimpleClass *this_ptr)
{
 return *(unsigned int *)this_ptr;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x12288 */
unsigned int * SimpleClass_setValue(SimpleClass *this_ptr, int a2)
{
 *this_ptr = a2;
 return this_ptr;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x122B8 */
size_t SimpleClass_compute(SimpleClass *this_ptr, int a2)
{
 return a2 * *(unsigned int *)this_ptr + strlen((const char *)this_ptr + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x12304 */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x12324 */
void LifecycleClass_LifecycleClass(LifecycleClass *this_ptr, unsigned int a2)
{
 unsigned int i; // [sp+Ch] [bp-8h]

 *((unsigned int *)this_ptr + 1) = a2;
 if ( a2 > 0x1FFFFFFE )
 _cxa_throw_bad_array_new_length();
 *(unsigned int *)this_ptr = operator new[](4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned int *)this_ptr + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x123F4 */
void LifecycleClass_dtor(LifecycleClass *this_ptr)
{
 if ( *this_ptr )
 operator delete[](*this_ptr);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x1244C */
int LifecycleClass_getData(LifecycleClass *this_ptr, unsigned int a2)
{
 if ( a2 >= *((unsigned int *)this_ptr + 1) )
 return -1;
 else
 return *(unsigned int *)(*(unsigned int *)this_ptr + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x124A4 */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x124C8 */
int Base_virtual_func(Base *self, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x124F4 */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1251C */
void Base_dtor(Base *self)
{
 *(unsigned int *)self = (unsigned int)&off_145F0;
}


/* Function: _ZN4BaseD0Ev @ 0x12550 */
void Base_del_dtor(Base *self)
{
 Base_dtor(self);
 operator delete(self, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x12584 */
void Base_ctor(Base *self)
{
 *(unsigned int *)self = (unsigned int)&off_145F0;
}


/* Function: _ZN7DerivedC2Ei @ 0x125B8 */
void Derived_ctor(Derived *self, int a2)
{
 Base_ctor(self);
 *(unsigned int *)self = (unsigned int)&off_145D8;
 *((unsigned int *)self + 1) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x12604 */
int Derived_virtual_func(Derived *self, int a2)
{
 return a2 * *((unsigned int *)self + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x12638 */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x12660 */
int BaseA_funcA(BaseA *this_ptr)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x12684 */
void BaseA_dtor(BaseA *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)&off_145C4;
}


/* Function: _ZN5BaseAD0Ev @ 0x126B8 */
void BaseA_del_dtor(BaseA *this_ptr)
{
 BaseA_dtor(this_ptr);
 operator delete(this_ptr, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x126EC */
int BaseB_funcB(BaseB *this_ptr)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x12710 */
void BaseB_dtor(BaseB *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)&off_145B0;
}


/* Function: _ZN5BaseBD0Ev @ 0x12744 */
void BaseB_del_dtor(BaseB *this_ptr)
{
 BaseB_dtor(this_ptr);
 operator delete(this_ptr, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x12778 */
int MultiDerived_funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1279C */
int MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x127C0 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return MultiDerived_funcB((MultiDerived *)((char *)_this - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x127C8 */
void BaseA_ctor(BaseA *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)(unsigned int)&off_145C4;
}


/* Function: _ZN5BaseBC2Ev @ 0x127FC */
void BaseB_ctor(BaseB *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)(unsigned int)&off_145B0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x12830 */
void MultiDerived_MultiDerived(MultiDerived *this_ptr)
{
 BaseA_ctor(this_ptr);
 BaseB_ctor((MultiDerived *)((char *)this_ptr + 8));
 *(unsigned int *)this_ptr = (unsigned int)&off_14584;
 *((unsigned int *)this_ptr + 2) = (unsigned int)&off_1459C;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1288C */
int VirtualBase_func(VirtualBase *this_ptr)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x128B0 */
void VirtualBase_dtor(VirtualBase *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)&off_14570;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x128E4 */
void VirtualBase_del_dtor(VirtualBase *this_ptr)
{
 VirtualBase_dtor(this_ptr);
 operator delete(this_ptr, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x12918 */
int MiddleA_func(MiddleA *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 150;
}

/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1295C */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return MiddleA_func((MiddleA *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}

/* Function: _ZN7MiddleB4funcEv @ 0x12970 */
int MiddleB_func(MiddleB *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 200;
}

/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x129B4 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return MiddleB_func((MiddleB *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x129C8 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 250;
}

/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x12A0C */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)));
}

/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x12A20 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return DiamondDerived_func((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x12A28 */
void VirtualBase_ctor(VirtualBase *self)
{
 *(unsigned int *)self = (unsigned int)(unsigned int)&off_14570;
}


/* Function: _ZN7MiddleAC2Ev @ 0x12A5C */
void MiddleA_ctor(MiddleA *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}

/* Function: _ZN7MiddleAD2Ev @ 0x12ABC */
void MiddleA_dtor(MiddleA *self)
{
 *(unsigned int *)self = (unsigned int)&off_144E8;
}

/* Function: _ZN7MiddleBC2Ev @ 0x12B1C */
void MiddleB_ctor(MiddleB *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}

/* Function: MiddleB::MiddleB @ 0x12B1C */
void MiddleB_ctor_alt(MiddleB *self, unsigned int *a2)
{
 *(unsigned int *)self = *a2;
 *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x12B7C */
void MiddleB_dtor(MiddleB *self)
{
 *(unsigned int *)self = (unsigned int)&off_144F0;
}

/* Function: _ZN14DiamondDerivedC1Ev @ 0x12BDC */
void DiamondDerived_ctor(DiamondDerived *this_ptr)
{
 VirtualBase_ctor((DiamondDerived *)((char *)this_ptr + 16));
 MiddleA_ctor(this_ptr, (unsigned int *)&off_144E8);
 MiddleB_ctor((DiamondDerived *)((char *)this_ptr + 8), (unsigned int *)&off_144F0);
 *(unsigned int *)this_ptr = (unsigned int)&off_144A4;
 *((unsigned int *)this_ptr + 4) = (unsigned int)&off_144D8;
 *((unsigned int *)this_ptr + 2) = (unsigned int)&off_144BC;
}


/* Function: _ZN5PointC2Eii @ 0x12C74 */
void Point_ctor(Point *self, int a2, int a3)
{
 *(unsigned int *)self = a2;
 *((unsigned int *)self + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 12CB8 */
void Point_operator_plus(Point *a1, unsigned int *a2, unsigned int *a3)
{
 *(unsigned int *)a1 = *a2 + *a3;
 *((unsigned int *)a1 + 1) = a2[1] + a3[1];
}


/* Function: _ZNK5PointeqERKS_ @ 0x12D10 */
bool Point_operator_eq(unsigned int *a1, unsigned int *a2)
{
 return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x12D70 */
unsigned int * Point_operator_pp(unsigned int *result)
{
 ++*result;
 ++result[1];
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x12DBC */
int template_max_int(int a1, int a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x12DFC */
long long template_max_double(double a1, double a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return *(unsigned long long *)&a2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x12E5C */
int * template_swap_int(int *result, int *a2)
{
 int v2; // [sp+Ch] [bp-8h]

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x12EA8 */
int Container_int_Container(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x12ED8 */
int Container_int_push(int result, int a2)
{
 int v2; // r3
 int v3; // [sp+4h] [bp-8h]

 v3 = result;
 if ( *(int *)(result + 40) <= 9 )
 {
 v2 = *(unsigned int *)(result + 40);
 result = v2 + 1;
 *(unsigned int *)(v3 + 40) = v2 + 1;
 *(unsigned int *)(v3 + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x12F2C */
int Container_int_get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x12F84 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x12FAC */
int Container_double_Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x12FDC */
int Container_double_push(int result, int a2, int a3, int a4)
{
 int v4; // r1
 unsigned int *v5; // r1

 if ( *(int *)(result + 80) <= 9 )
 {
 v4 = *(unsigned int *)(result + 80);
 *(unsigned int *)(result + 80) = v4 + 1;
 v5 = (unsigned int *)(result + 8 * v4);
 *v5 = a3;
 v5[1] = a4;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x13040 */
long long Container_double_get(int a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return *(unsigned long long *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x130A8 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x130D0 */
int std_uniq_ptr_data_int_default_delete___uniq_ptr_data(int a1, int a2)
{
 _std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x13108 */
int std_unique_ptr_int_unique_ptr(int a1, int a2)
{
 std_uniq_ptr_data_int_default_delete___uniq_ptr_data(a1, a2);
 return a1;
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x13140 */
int RTTIBase_getType(RTTIBase *this_ptr)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int RTTIDerivedA_derivedA_data(RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int RTTIDerivedA_derivedA_data(RTTIDerivedA *_this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x131AC */
int RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x131D0 */
int RTTIDerivedB_derivedB_data(RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x131F4 */
void RTTIBase_RTTIBase(RTTIBase *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)off_1448C;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x13228 */
void RTTIBase_dtor(RTTIBase *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)off_1448C;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x1325C */
void RTTIBase_del_dtor(RTTIBase *this_ptr)
{
 RTTIBase_dtor(this_ptr);
 operator delete(this_ptr, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x13290 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 RTTIBase_RTTIBase(this_ptr);
 *(unsigned int *)this_ptr = (unsigned int)off_14478;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x132CC */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 RTTIBase_RTTIBase(this_ptr);
 *(unsigned int *)this_ptr = (unsigned int)off_14464;
}


/* Function: __ZNSt15__uniq_ptr_data_int_default_delete_CI2 @ 0x13308 */
int _ZNSt15__uniq_ptr_data_int_default_delete_CI2(int a1, int a2)
{
 _std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x13340 */
int std_unique_ptr_int_unique_ptr_from_ptr(int a1, int a2)
{
 _ZNSt15__uniq_ptr_data_int_default_delete_CI2(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x13374 */
int _std_unique_ptr_int_dtor(int a1)
{
 int deleter; // r4
 unsigned int *v2; // r0
 unsigned int *v5; // [sp+Ch] [bp-10h]

 v5 = (unsigned int *)_std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(a1);
 if ( *v5 )
 {
 deleter = _std_unique_ptr_int_get_deleter(a1);
 v2 = (unsigned int *)_std_move_int_ptr_ref(v5);
 _std_default_delete_int_operator(deleter, *v2);
 }
 *v5 = 0;
 return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x133E8 */
int _std_unique_ptr_int_operator_deref(int a1)
{
 return _std_unique_ptr_int_get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x13418 */
void _std_move_unique_ptr_int_ref()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1343C */
unsigned int * _std__Tuple_impl_0_int_ptr_default_delete_int__Tuple_impl(unsigned int *a1, unsigned int *a2)
{
 _std__Tuple_impl_1_default_delete_int__Tuple_impl(a1, a2);
 *a1 = *a2;
 return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1347C */
unsigned int * _std_tuple_int_ptr_default_delete_int_tuple(unsigned int *a1, unsigned int *a2)
{
 _std__Tuple_impl_0_int_ptr_default_delete_int__Tuple_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x134B4 */
unsigned int * _std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(unsigned int *a1, int a2)
{
 unsigned int *v3; // r0

 v3 = (unsigned int *)_std_move_tuple_int_ptr_default_delete_int_ref(a2);
 _std_tuple_int_ptr_default_delete_int_tuple(a1, v3);
 *(unsigned int *)_std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(a2) = 0;
 return a1;
}


/* Function: __ZNSt15__uniq_ptr_data_int_array_default_delete_CI2 @ 0x1350C */
int _ZNSt15__uniq_ptr_data_int_array_default_delete_CI2(int a1, int a2)
{
 _std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x13544 */
int std_unique_ptr_int_array_unique_ptr(int a1, int a2)
{
 _ZNSt15__uniq_ptr_data_int_array_default_delete_CI2(a1, a2);
 return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x13578 */
int _std_unique_ptr_int_array_dtor(int a1)
{
 int deleter; // r0
 unsigned int *v4; // [sp+Ch] [bp-8h]

 v4 = (unsigned int *)_std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(a1);
 if ( *v4 )
 {
 deleter = _std_unique_ptr_int_array_get_deleter(a1);
 _std_default_delete_int_array_operator(deleter, *v4);
 }
 *v4 = 0;
 return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x135E4 */
int _std_unique_ptr_int_array_operator_bracket(int a1, int a2)
{
 return _std_unique_ptr_int_array_get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x13624 */
int std___uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(int a1, int a2)
{
 std_tuple_int_ptr_default_delete_int_tuple(a1);
 *(unsigned int *)_std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(a1) = a2;
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
int _std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(int a1)
{
 return _std_get_0_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x13694 */
int _std_unique_ptr_int_get_deleter(int a1)
{
 return _std___uniq_ptr_impl_int_default_delete_int__M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x136C0 */
void _std_move_int_ptr_ref()
{
 ;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x136E4 */
void _std_default_delete_int_operator(int a1, void *a2)
{
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x1371C */
int _std_unique_ptr_int_get(int a1)
{
 return _std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x13748 */
void _std_move_tuple_int_ptr_default_delete_int_ref()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x1376C */
void _std__Tuple_impl_1_default_delete_int__Tuple_impl()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x13794 */
int std___uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(int a1, int a2)
{
 std_tuple_int_ptr_default_delete_int_array_tuple_true(a1);
 *(unsigned int *)_std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(a1) = a2;
 return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x137D8 */
int _std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(int a1)
{
 return _std_get_0_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x13804 */
int _std_unique_ptr_int_array_get_deleter(int a1)
{
 return _std___uniq_ptr_impl_int_default_delete_int_array__M_deleter(a1);
}


/* Function: _ZNKSt14 default_deleteIA_iEclEP @0x13830 */
void _std_default_delete_int_array_operator(int a1, void *a2)
{
 if ( a2 )
 operator delete[](a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x13864 */
int _std_unique_ptr_int_array_get(int a1)
{
 return _std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x13890 */
int std_tuple_int_ptr_default_delete_int_tuple(int a1)
{
 std_Tuple_impl_0_int_ptr_default_delete_int___Tuple_impl(a1);
 return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x138BC */
int _std_get_0_int_ptr_default_delete_int(int a1)
{
 return _std___get_helper_0_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
int _std___uniq_ptr_impl_int_default_delete_int__M_deleter(int a1)
{
 return _std_get_1_int_ptr_default_delete_int(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int _std___uniq_ptr_impl_int_default_delete_int__M_ptr_ptr(int a1)
{
 return (int)(uintptr_t)*(unsigned int *)_std_get_0_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x13944 */
int std_tuple_int_ptr_default_delete_int_array_tuple_true(int a1)
{
 std_Tuple_impl_0_int_ptr_default_delete_int_array___Tuple_impl(a1);
 return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13970 */
int _std_get_0_int_ptr_default_delete_int_array(int a1)
{
 return _std___get_helper_0_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
int _std___uniq_ptr_impl_int_default_delete_int_array__M_deleter(int a1)
{
 return _std_get_1_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
int _std___uniq_ptr_impl_int_default_delete_int_array__M_ptr(int a1)
{
 return (int)(uintptr_t)*(unsigned int *)_std_get_0_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x139F8 */
int std_Tuple_impl_0_int_ptr_default_delete_int___Tuple_impl(int a1)
{
 std_Tuple_impl_1_default_delete_int___Tuple_impl(a1);
 _std__Head_base_0_int_ptr_false__Head_base(a1);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13A2C */
int _std___get_helper_0_int_ptr_default_delete_int(int a1)
{
 return std_Tuple_impl_0_int_ptr_default_delete_int__M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x13A54 */
int _std_get_1_int_ptr_default_delete_int(int a1)
{
 return std__get_helper_1_default_delete_int(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x13A7C */
int _std_get_0_int_ptr_default_delete_int(int a1)
{
 return _std___get_helper_0_int_ptr_default_delete_int(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x13AA8 */
int std_Tuple_impl_0_int_ptr_default_delete_int_array___Tuple_impl(int a1)
{
 std_Tuple_impl_1_default_delete_int_array___Tuple_impl(a1);
 _std__Head_base_0_int_ptr_false__Head_base(a1);
 return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13ADC */
int _std___get_helper_0_int_ptr_default_delete_int_array(int a1)
{
 return std_Tuple_impl_0_int_ptr_default_delete_int_array__M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13B04 */
int _std_get_1_int_ptr_default_delete_int_array(int a1)
{
 return std__get_helper_1_default_delete_int_array(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x13B2C */
int _std_get_0_int_ptr_default_delete_int_array(int a1)
{
 return _std___get_helper_0_int_ptr_default_delete_int_array(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x13B58 */
int _std_forward_int_ptr_ref(int a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x13B7C */
int std_Tuple_impl_1_default_delete_int___Tuple_impl(int a1)
{
 _std__Head_base_1_default_delete_int_true__Head_base(a1);
 return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x13BA4 */
unsigned int * _std__Head_base_0_int_ptr_false__Head_base(unsigned int *result)
{
 *result = 0;
 return result;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x13BD4 */
int std_Tuple_impl_0_int_ptr_default_delete_int__M_head(int a1)
{
 return _std__Head_base_0_int_ptr_false__M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x13C00 */
int std__get_helper_1_default_delete_int(int a1)
{
 return std_Tuple_impl_1_default_delete_int__M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13C28 */
int _std___get_helper_0_int_ptr_default_delete_int_const(int a1)
{
 return std_Tuple_impl_0_int_ptr_default_delete_int__M_head_const(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x13C50 */
int std_Tuple_impl_1_default_delete_int_array___Tuple_impl(int a1)
{
 _std__Head_base_1_default_delete_int_array_true__Head_base(a1);
 return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x13C78 */
int std_Tuple_impl_0_int_ptr_default_delete_int_array__M_head(int a1)
{
 return _std__Head_base_0_int_ptr_false__M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13CA4 */
int std__get_helper_1_default_delete_int_array(int a1)
{
 return std_Tuple_impl_1_default_delete_int_array____M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13CCC */
int _std___get_helper_0_int_ptr_default_delete_int_array_const(int a1)
{
 return std_Tuple_impl_0_int_ptr_default_delete_int_array__M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x13CF4 */
unsigned int * _std__Head_base_0_int_ptr_false__Head_base_int_ref(unsigned int *a1, unsigned int *a2)
{
 int *forwarded = (int *)_std_forward_int_ptr_ref((int)a2);
 *a1 = *a2;
 return a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x13D30 */
void _std__Head_base_1_default_delete_int_true__Head_base()
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x13D54 */
int _std__Head_base_0_int_ptr_false__M_head(int *self)
{
 return *self;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x13D78 */
int std_Tuple_impl_1_default_delete_int__M_head(int *self)
{
 return std_Head_base_1_default_delete_int_true__M_head(self);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x13DA0 */
int std_Tuple_impl_0_int_ptr_default_delete_int__M_head_const(int a1)
{
 return _std__Head_base_0_int_ptr_false__M_head_const(a1);
}




/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x13DCC */
void _std__Head_base_1_default_delete_int_array_true__Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x13DF0 */
int std_Tuple_impl_1_default_delete_int_array__M_head(int *self)
{
 return std_Head_base_1_default_delete_int_array_true__M_head(self);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x13E18 */
int std_Tuple_impl_0_int_ptr_default_delete_int_array__M_head_const(int a1)
{
 return _std__Head_base_0_int_ptr_false__M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x13E44 */
int *_std__Head_base_1_default_delete_int_true__M_head(int *self)
{
 return self;
}





/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x13E8C */
int *std_Head_base_1_default_delete_int_array_true__M_head(int *self)
{
 return self;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x13EB0 */
void RTTIDerivedB_dtor(RTTIDerivedB *this_ptr)
{
 *(unsigned int *)this_ptr = (unsigned int)off_0x14464;
 RTTIBase_dtor(this_ptr);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x13EEC */
void RTTIDerivedB_del_dtor(RTTIDerivedB *self)
{
 RTTIDerivedB_dtor(self);
 operator delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x13F20 */
void RTTIDerivedA_dtor(RTTIDerivedA *self)
{
 *(unsigned int *)self = (unsigned int)off_14478;
 RTTIBase_dtor(self);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x13F5C */
void RTTIDerivedA_del_dtor(RTTIDerivedA *self)
{
 RTTIDerivedA_dtor(self);
 operator delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedFromD1Ev @ 0x13F90 */
void DiamondDerived_dtor(DiamondDerived *self)
{
 *(unsigned int *)self = (unsigned int)&off_144A4;
 *((unsigned int *)self + 4) = (unsigned int)&off_144D8;
 *((unsigned int *)self + 2) = (unsigned int)&off_144BC;
 MiddleB_dtor((DiamondDerived *)((char *)self + 8));
 MiddleA_dtor(self);
 VirtualBase_dtor((DiamondDerived *)((char *)self + 16));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x14028 */
void non_virtual_thunk_to_DiamondDerived_D1(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x14030 */
void virtual_thunk_to_DiamondDerived_D1(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x14044 */
void DiamondDerived_del_dtor(DiamondDerived *self)
{
 DiamondDerived_dtor(self);
 operator delete(self, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x14078 */
void non_virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 DiamondDerived_del_dtor((DiamondDerived *)((char *)self - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x14080 */
void virtual_thunk_to_DiamondDerived_D0(DiamondDerived *self)
{
 DiamondDerived_dtor((DiamondDerived *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 16)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x14094 */
void MultiDerived_dtor(MultiDerived *self)
{
 *(unsigned int *)self = (unsigned int)&off_14584;
 *((unsigned int *)self + 2) = (unsigned int)&off_1459C;
 BaseB_dtor((MultiDerived *)((char *)self + 8));
 BaseA_dtor(self);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x140F0 */
void non_virtual_thunk_to_MultiDerived_D1(MultiDerived *self)
{
 MultiDerived_dtor((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x140F8 */
void MultiDerived_del_dtor(MultiDerived *self)
{
 MultiDerived_dtor(self);
 operator delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1412C */
void non_virtual_thunk_to_MultiDerived_D0(MultiDerived *self)
{
 MultiDerived_del_dtor((MultiDerived *)((char *)self - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x14134 */
void Derived_dtor(Derived *self)
{
 *(unsigned int *)self = (unsigned int)&off_145D8;
 Base_dtor(self);
}


/* Function: _ZN7DerivedD0Ev @ 0x14170 */
void Derived_del_dtor(Derived *self)
{
 Derived_dtor(self);
 operator delete(self, 8u);
}


/* Function: .term_proc @ 0x141A4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr1 @ 0x250A8 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x250AC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x250B0 */

/* FAILED to decompile: __imp_strncpy @ 0x250B4 */

/* FAILED to decompile: __imp__ZdaPv @ 0x250B8 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x250BC */

/* FAILED to decompile: __imp_abort @ 0x250C0 */

/* FAILED to decompile: __imp___cxa_throw @ 0x250C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x250C8 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x250CC */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x250D0 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x250D4 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x250D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x250DC */

/* FAILED to decompile: __imp___dynamic_cast @ 0x250E0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x250E4 */

/* FAILED to decompile: __imp_strlen @ 0x250E8 */

/* FAILED to decompile: __imp__Znwj @ 0x250EC */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x250F0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x250F4 */

/* FAILED to decompile: __imp_puts @ 0x250F8 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x250FC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x25100 */

/* FAILED to decompile: __imp___cxa_bad_typeid @ 0x25104 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x25108 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x2510C */

/* FAILED to decompile: __imp_printf @ 0x25110 */

/* FAILED to decompile: __imp__Znaj @ 0x25114 */

/* FAILED to decompile: __imp___cxa_throw_bad_array_new_length @ 0x25118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x25120 */

/* Total functions decompiled: 205, failed: 30 */
