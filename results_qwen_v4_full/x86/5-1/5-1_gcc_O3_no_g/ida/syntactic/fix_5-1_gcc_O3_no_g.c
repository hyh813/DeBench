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

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Compiler intrinsics */
#define __readgsdword(x) 0
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))

/* External function declarations */
int LifecycleClass_instance_count;
void *_gmon_start__;
void frame_dummy(void);
int _do_global_ctors_aux(void);
void *_dso_handle;
void *std___ioinit;
void _do_global_dtors_aux(void);
void *off_4E48;
void *off_4E5C;
char *asc_3018;
void *unk_303C;
void *unk_305A;
void *unk_3076;
void *unk_3092;
void *unk_30AE;
void *unk_30CB;
void *unk_30E7;
void *unk_3103;
void *unk_311F;
int template_max_int(int a1, int a2);
long double template_max_double(double a1, double a2);
int *template_swap_int(int *a1, int *a2);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void *operator_new_array(size_t size);
void operator_delete_array(void *ptr, size_t size);
void __cxa_throw(void *exception, struct type_info *tinfo, void *dest);
void *__cxa_allocate_exception(size_t size);
void *__dynamic_cast(const void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src_flags);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int strcmp(const char *s1, const char *s2);

/* CRT stub declarations - will be resolved by linker */
void std_ios_base_Init_Init(void *this_ptr);
void std_ios_base_Init_Init_destructor(void *this_ptr);

/* Stub implementations for external library functions */
void *__dynamic_cast(const void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src_flags)
{
 return 0;
}

int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

char *strcpy(char *dest, const char *src)
{
 char *orig_dest = dest;
 while ((*dest++ = *src++) != 0);
 return orig_dest;
}

void __cxa_throw(void *exception, struct type_info *tinfo, void *dest)
{
}

void *__cxa_allocate_exception(size_t size)
{
 return operator_new(size);
}

/* Stub implementations for CRT functions */
int puts(const char *s)
{
 return 0;
}

void frame_dummy(void)
{
}

int _do_global_ctors_aux(void)
{
 return 0;
}

void _do_global_dtors_aux(void)
{
}

size_t strlen(const char *s)
{
 size_t len = 0;
 while (s[len] != 0) len++;
 return len;
}

int strcmp(const char *s1, const char *s2)
{
 while (*s1 && (*s1 == *s2)) { s1++; s2++; }
 return *(unsigned char *)s1 - *(unsigned char *)s2;
}

void *operator_new(size_t size)
{
 return 0;
}

void operator_delete(void *ptr, size_t size)
{
}

/* Typeinfo declarations */
struct type_info { const char *name; };
struct __class_type_info { struct type_info base; };
struct type_info typeinfo_for_int;
struct type_info typeinfo_for_RTTIBase;
struct type_info typeinfo_for_RTTIDerivedA;
struct type_info typeinfo_for_RTTIDerivedB;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O3_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
int sub_1150(int a1)
{
 return (*(int (**)(void))(a1 + 84))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1270 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1380 */
void test_cpp_oo_features(long double a1);
int main(int argc, const char **argv, const char **envp);
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features(0.0);
 return 0;
}






/* CRT stub function _start removed by preprocessor */



/* Function: sub_140C @ 0x140C */
void sub_140C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1549 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x154D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1560 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+0h] [ebp-30h] BYREF
 short v2; // [esp+6h] [ebp-2Ah]
 int v3; // [esp+8h] [ebp-28h]
 int v4; // [esp+Ch] [ebp-24h]
 int v5; // [esp+10h] [ebp-20h]
 int v6; // [esp+14h] [ebp-1Ch]
 int v7; // [esp+18h] [ebp-18h]
 short v8; // [esp+1Ch] [ebp-14h]
 char v9; // [esp+1Eh] [ebp-12h]
 char v10; // [esp+1Fh] [ebp-11h]
 unsigned int v11; // [esp+20h] [ebp-10h]

 v11 = __readgsdword(0x14u);
 strcpy(s, "Test");
 s[5] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
  v10 = 0;
  result = (long long)(strlen(s) + 4700);
  return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int call_virtual_func(int (***a1)(void), int a2)
{
 return (**a1)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
long long test_cpp_template_func(long double a1)
{
 int v1; // ebx
 long long result; // rax
 int v3; // [esp+1Ch] [ebp-18h] BYREF
 int v4; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v1 = template_max_int(3, 7);
 template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
  template_swap_int(&v3, &v4);
  result = (long long)(v4 + v3 + v1 + (int)(double)a1);
  return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1750 */
size_t test_cpp_rtti(void)
{
 unsigned int *v0; // edi
 const char *v1; // ebp
 int v2; // ecx
 int v3; // esi
 size_t v4; // esi
 int *lpsrc; // [esp+14h] [ebp-28h]
 int v7; // [esp+18h] [ebp-24h]

 v0 = (unsigned int *)operator_new(4u);
 *v0 = (unsigned int)(uintptr_t)off_4E48;
 lpsrc = (int *)operator_new(4u);
 *lpsrc = (int)(uintptr_t)off_4E5C;
 v7 = *(unsigned int *)v0;
 v1 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( v1 == "12RTTIDerivedA" )
 {
 v2 = 30;
 }
 else if ( *v1 == 42 )
 {
 v2 = 20;
 }
 else
 {
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 30 : 20;
 }
 v3 = v2;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
  v4 = strlen(v1) + v3;
  (*(void ( **)(int *))(v7 + 4))((int *)v0);
  (*(void ( **)(void *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x18C0 */
void test_cpp_oo_features(long double a1);
void test_cpp_oo_features(long double a1)
{
 size_t v1; // eax
 int v2; // esi
 int v3; // [esp+20h] [ebp-3Ch] BYREF
 int v4; // [esp+24h] [ebp-38h] BYREF
 unsigned short s[4]; // [esp+2Ch] [ebp-30h] BYREF
 int v6; // [esp+34h] [ebp-28h]
 int v7; // [esp+38h] [ebp-24h]
 int v8; // [esp+3Ch] [ebp-20h]
 int v9; // [esp+40h] [ebp-1Ch]
 int v10; // [esp+44h] [ebp-18h]
 short v11; // [esp+48h] [ebp-14h]
 char v12; // [esp+4Ah] [ebp-12h]
 char v13; // [esp+4Bh] [ebp-11h]
 unsigned int v14; // [esp+4Ch] [ebp-10h]

 v14 = __readgsdword(0x14u);
 puts(asc_3018);
 v12 = 0;
 v11 = 0;
  strcpy((char *)s, "Test");
  ((char *)s)[5] = 0;
  s[3] = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v13 = 0;
  v1 = strlen((const char *)s);
  __printf_chk(1, (const char *)&unk_303C, v1 + 4700);
  __printf_chk(1, (const char *)&unk_305A, 1001 * LifecycleClass_instance_count + 21);
  __printf_chk(1, (const char *)&unk_3076, 42);
  __printf_chk(1, (const char *)&unk_3092, 71);
  __printf_chk(1, (const char *)&unk_30AE, 650);
  __printf_chk(1, (const char *)&unk_30CB, 22);
  v2 = template_max_int(3, 7);
  template_max_double(2.5, 1.5);
  v3 = 10;
  v4 = 20;
  template_swap_int(&v3, &v4);
  __printf_chk(1, (const char *)&unk_30E7, v4 + v3 + v2 + (int)(double)a1);
  __printf_chk(1, (const char *)&unk_3103, 16);
  __printf_chk(1, (const char *)&unk_311F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AE0 */
int Base_virtual_func(Base *this_ptr, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AF0 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B10 */
void Base_destructor()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B20 */
int Derived_virtual_func(Derived *this_ptr, int a2)
{
 return *((unsigned int *)this_ptr + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B40 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B60 */
int MultiDerived_funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B70 */
int MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B80 */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B90 */
int MiddleA_func(MiddleA *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1BB0 */
int virtual_thunk_to_MiddleA_func(MiddleA *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr
 + *(unsigned int *)(*(unsigned int *)this_ptr - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1BD0 */
int MiddleB_func(MiddleB *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1BF0 */
int virtual_thunk_to_MiddleB_func(MiddleB *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr
 + *(unsigned int *)(*(unsigned int *)this_ptr - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C10 */
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C30 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr
 + *(unsigned int *)(*(unsigned int *)this_ptr - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C50 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + *(unsigned int *)(*((unsigned int *)this_ptr - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1C70 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1C80 */
int RTTIDerivedB_getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1C90 */
void RTTIDerivedB_destructor()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1CA0 */
void RTTIDerivedA_destructor()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1CB0 */
void DiamondDerived_destructor()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1CC0 */
void virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1CD0 */
void non_virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1CE0 */
void MultiDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1CF0 */
void non_virtual_thunk_to_MultiDerived_destructor()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D00 */
void Derived_destructor()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D10 */
void Base_destructor_delete(Base *this_ptr)
{
 operator_delete(this_ptr, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D40 */
void Derived_destructor_delete(Derived *this_ptr)
{
 operator_delete(this_ptr, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D70 */
void MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 operator_delete(this_ptr, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DA0 */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *this_ptr)
{
 operator_delete((char *)this_ptr - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DD0 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E00 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1E30 */
void DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete(this_ptr, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1E60 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete((char *)this_ptr + *(unsigned int *)(*(unsigned int *)this_ptr - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1E90 */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *this_ptr)
{
 operator_delete((char *)this_ptr - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1EC0 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1EE0 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a1;
 if ( a1 <= (long double)a2 )
 return a2;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1F00 */
int * template_swap_int(int *a1, int *a2)
{
 int *result; // eax
 int v3; // ecx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1F20 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1F30 */
int Container_int_push(int a1, int a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1F50 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1F80 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1F90 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1FA0 */
int Container_double_push(int a1, double a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1FD0 */
long double Container_double_get(int a1, int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2000 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: __x86.get_pc_thunk.ax @ 0x200C */
void *_x86_get_pc_thunk_ax()
{
 return 0;
}


/* Function: __x86.get_pc_thunk.si @ 0x2010 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2020 */
void _stack_chk_fail_local()
{
 ;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x208C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: __stack_chk_fail @ 0x505C */

/* FAILED to decompile: __dynamic_cast @ 0x5060 */

/* FAILED to decompile: __cxa_rethrow @ 0x5068 */

/* FAILED to decompile: puts @ 0x506C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5070 */

/* FAILED to decompile: __cxa_end_catch @ 0x5074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5078 */

/* FAILED to decompile: __cxa_throw @ 0x507C */

/* FAILED to decompile: _Unwind_Resume @ 0x5080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5084 */

/* Total functions decompiled: 95, failed: 20 */
