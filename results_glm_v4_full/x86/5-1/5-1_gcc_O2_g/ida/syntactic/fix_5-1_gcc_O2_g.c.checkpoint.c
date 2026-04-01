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

/* Helper macros for 64-bit value access */
#define LODWORD(x) (*((unsigned int*)&(x)))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#define HIBYTE(x) (((x) >> 8) & 0xFF)

/* Forward declarations */
struct __class_type_info;

struct type_info {
    const char *_vptr_type_info;
    const char *name;
};

typedef struct _UNKNOWN _UNKNOWN;
struct _UNKNOWN {
    char dummy;
};

/* Type definitions for decompiled C++ classes */
typedef void (*vtable_func)();

typedef struct {
    vtable_func *_vptr_Base;
} Base;

typedef struct {
    Base base;
    int multiplier;
} Derived;

typedef struct {
    vtable_func *_vptr_Base;
} BaseA;

typedef struct {
    vtable_func *_vptr_Base;
} BaseB;

typedef struct {
    BaseA baseA;
    BaseB baseB;
} MultiDerived;

typedef struct {
    vtable_func *_vptr_MiddleA;
    int dataA;
} MiddleA;

typedef struct {
    vtable_func *_vptr_MiddleB;
    int dataB;
} MiddleB;

typedef struct {
    MiddleA middleA;
    MiddleB middleB;
} DiamondDerived;

typedef struct {
    vtable_func *_vptr_RTTIBase;
} RTTIBase;

typedef struct {
    RTTIBase base;
} RTTIDerivedA;

typedef struct {
    RTTIBase base;
} RTTIDerivedB;

typedef struct {
    char name[32];
} SimpleClass;

typedef struct {
    int data[10];
    int size;
} Container_int;

typedef struct {
    double data[10];
    int size;
} Container_double;

typedef struct LifecycleClass {
    int dummy;
} LifecycleClass;

/* Global variables */
int LifecycleClass_instance_count = 0;
vtable_func std___ioinit[1] = {0};
void *_dso_handle = 0;

/* Static definitions for vtable/type info references */
struct type_info typeinfo_for_RTTIDerivedA = { 0, "12RTTIDerivedA" };
struct type_info typeinfo_for_RTTIDerivedB = { 0, "12RTTIDerivedB" };
static void *off_3E48 = &typeinfo_for_RTTIDerivedA;
static void *off_3E5C = &typeinfo_for_RTTIDerivedB;

/* String constants */
static const char asc_2018[] = "Testing C++ OOP Features";
static const char unk_203C[] = "String length: %d\n";
static const char unk_205A[] = "Constructor: %d\n";
static const char unk_2076[] = "Virtual: %d\n";
static const char unk_2092[] = "Multiple inheritance: %d\n";
static const char unk_20AE[] = "Diamond: %d\n";
static const char unk_20CB[] = "Operator overload: %d\n";
static const char unk_20E7[] = "Template: %lld\n";
static const char unk_2103[] = "Template class: %d\n";
static const char unk_211F[] = "Lambda: %d\n";

/* Function declarations */
void test_cpp_oo_features(void);
void *_gmon_start__;
void frame_dummy(void);
int _do_global_ctors_aux(void);
int _do_global_dtors_aux(void);
void std_ios_base_Init_Init(void *init);
void std_ios_base_Init_destructor(void *init);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *_Znwj(unsigned int size);
void _ZdlPvj(void *ptr, unsigned int size);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *obj, struct type_info *tinfo, void *dest);
void *__dynamic_cast(void *obj, const struct __class_type_info *src, const struct __class_type_info *dst, int offset);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
unsigned int __readgsdword(unsigned int offset);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *memset(void *s, int c, size_t n);

/* Stub implementations for external library functions */
int puts(const char *s) {
    return 0;
}

void *malloc(size_t size) {
    /* Simple stub - return NULL for now */
    return 0;
}

void free(void *ptr) {
    /* Stub */
}

void *memset(void *s, int c, size_t n) {
    unsigned char *p = (unsigned char *)s;
    while (n--) *p++ = c;
    return s;
}

size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

unsigned int __readgsdword(unsigned int offset) {
    unsigned int value;
    __asm__ volatile("movl %%gs:%1, %0" : "=r"(value) : "m"(*(unsigned int *)(offset)));
    return value;
}

void *__cxa_allocate_exception(unsigned int size) {
    return _Znwj(size);
}

void *_Znwj(unsigned int size) {
    return malloc(size);
}

void _ZdlPvj(void *ptr, unsigned int size) {
    free(ptr);
}

void __cxa_throw(void *obj, struct type_info *tinfo, void *dest) {
    /* Stub - would normally unwind */
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* Stub - just return success */
    return 0;
}

void *__dynamic_cast(void *obj, const struct __class_type_info *src, const struct __class_type_info *dst, int offset) {
    /* Simplified stub - just return obj offset by offset */
    if (offset)
        return (void *)((char *)obj + offset);
    return obj;
}

void strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int __printf_chk(int flag, const char *format, ...) {
    /* Stub - would normally format and print */
    return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O2_g
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
 __asm__ volatile("jmp *8(%%ebx)" ::: "memory");
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
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 __cxa_atexit((void (*)(void *))0, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_140C @ 0x140C */
void sub_140C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void __x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */
int _do_global_dtors_aux(void) {
    return 0;
}

/* CRT stub function __do_global_ctors_aux removed by preprocessor */
int _do_global_ctors_aux(void) {
    return 0;
}




/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {
}



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
long long test_cpp_member_func()
{
 long long result; // rax
 SimpleClass obj; // [esp+0h] [ebp-34h] BYREF
 unsigned int v2; // [esp+24h] [ebp-10h]

 v2 = __readgsdword(0x14u);
 strcpy(obj.name, "Test");
 memset(&obj.name[5], 0, 27);
 LODWORD(result) = strlen(obj.name) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int call_virtual_func(Base *obj, int x)
{
 (*obj->_vptr_Base)();
 return 0;
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
 double r2; // [esp+8h] [ebp-2Ch]
 int a; // [esp+1Ch] [ebp-18h] BYREF
 int b; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 a = 10;
 r2 = template_max_double(2.5, 1.5);
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = b + a + v0 + (int)r2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1750 */
size_t test_cpp_rtti()
{
 int v0; // esi
 int *v1; // edi
 const char *v2; // ebp
 int v3; // esi
 size_t v4; // esi
 RTTIBase *obj2; // [esp+14h] [ebp-28h]
 int v7; // [esp+18h] [ebp-24h]

 v0 = 10;
 v1 = (int *)operator new(4u);
 *v1 = (int)off_3E48;
 obj2 = (RTTIBase *)operator new(4u);
 obj2->_vptr_RTTIBase = (vtable_func *)off_3E5C;
 v7 = *v1;
 v2 = *(const char **)(*(unsigned int *)(*v1 - 4) + 4);
 if ( v2 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v2 != 42 )
 v0 = strcmp(v2, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v0 + 20;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 obj2,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(v2 + (*v2 == 42)) + v3;
 (*(void ( **)(int *))(v7 + 4))(v1);
 (*((void ( **)(RTTIBase *))obj2->_vptr_RTTIBase + 1))(obj2);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1880 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 unsigned short s[4]; // [esp+1Ch] [ebp-30h] BYREF
 int v5; // [esp+24h] [ebp-28h]
 int v6; // [esp+28h] [ebp-24h]
 int v7; // [esp+2Ch] [ebp-20h]
 int v8; // [esp+30h] [ebp-1Ch]
 int v9; // [esp+34h] [ebp-18h]
 short v10; // [esp+38h] [ebp-14h]
 char v11; // [esp+3Ah] [ebp-12h]
 char v12; // [esp+3Bh] [ebp-11h]
 unsigned int v13; // [esp+3Ch] [ebp-10h]

v13 = __readgsdword(0x14u);
puts(asc_2018);
v11 = 0;
v10 = 0;
strcpy((char *)s, "Test");
s[2] &= 0xFF;
s[3] = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v12 = 0;
 v0 = strlen((const char *)s);
 __printf_chk(1, unk_203C, v0 + 4700);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_205A, v1);
 __printf_chk(1, unk_2076, 42);
 __printf_chk(1, unk_2092, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_20AE, v2);
 __printf_chk(1, unk_20CB, 22);
 v3 = test_cpp_template_func();
 __printf_chk(1, unk_20E7, v3);
 __printf_chk(1, unk_2103, 16);
 __printf_chk(1, unk_211F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1A30 */
int Base_virtual_func(Base *self, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1A40 */
const char * Base_getName(const Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1A60 */
void Base_destructor(Base *self)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1A70 */
int Derived_virtual_func(Derived *self, int x)
{
 return self->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1A90 */
const char * Derived_getName(const Derived *self)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1AB0 */
int MultiDerived_funcA(MultiDerived *self)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1AC0 */
int MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1AD0 */
int thunk_non_virtual_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1AE0 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B00 */
int thunk_virtual_MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B20 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B40 */
int thunk_virtual_MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleB + *((unsigned int *)self->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B60 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->middleA.dataA + *((unsigned int *)self->middleA._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1B80 */
int thunk_virtual_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->middleA.dataA
 + *((unsigned int *)self->middleA._vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->middleA._vptr_MiddleA + *((unsigned int *)self->middleA._vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BA0 */
int thunk_non_virtual_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].middleB.dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BC0 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BD0 */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BE0 */
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1BF0 */
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C00 */
void DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C10 */
void thunk_virtual_DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C20 */
void thunk_non_virtual_DiamondDerived_destructor(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C30 */
void MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C40 */
void thunk_non_virtual_MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C50 */
void Derived_destructor(Derived *self)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C60 */
void Base_deleting_destructor(Base *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C90 */
void Derived_deleting_destructor(Derived *self)
{
 operator delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CC0 */
void MultiDerived_deleting_destructor(MultiDerived *self)
{
 operator delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1CF0 */
void thunk_non_virtual_MultiDerived_deleting_destructor(MultiDerived *self)
{
    operator delete(&self[-1].baseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1D20 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1D50 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *self)
{
 operator delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D80 */
void DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator delete(self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1DB0 */
void thunk_virtual_DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator delete((char *)self + *((unsigned int *)self->middleA._vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1DE0 */
void thunk_non_virtual_DiamondDerived_deleting_destructor(DiamondDerived *self)
{
 operator delete(&self[-1].middleB.dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1E10 */
int template_max_int(int a, int b)
{
 int result;

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1E30 */
double template_max_double(double a, double b)
{
 long double v2;

 v2 = a;
 if ( a <= (long double)b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1E50 */
void template_swap_int(int *a, int *b)
{
 int v2;

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1E70 */
void Container_int_Constructor(Container_int *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1E80 */
void Container_int_push(Container_int *self, int value)
{
 int size;

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1EA0 */
int Container_int_get(const Container_int *self, int idx)
{
 int result;

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1ED0 */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1EE0 */
void Container_double_Constructor(Container_double *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1EF0 */
void Container_double_push(Container_double *self, double value)
{
 int size;

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1F20 */
double Container_double_get(const Container_double *self, int idx)
{
 if ( idx >= 0 && idx < self->size )
 return self->data[idx];
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1F50 */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1F5C */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1F60 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1F70 */
void _stack_chk_fail_local()
{
 /* Stub - removed inline assembly that references __x86_get_pc_thunk_bx */
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1FDC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x402C */

/* FAILED to decompile: _Znwj @ 0x4034 */

/* FAILED to decompile: __cxa_finalize @ 0x4038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x403C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4040 */

/* FAILED to decompile: strlen @ 0x4044 */

/* FAILED to decompile: __cxa_atexit @ 0x4048 */

/* FAILED to decompile: _ZdlPvj @ 0x404C */

/* FAILED to decompile: strcmp @ 0x4054 */

/* FAILED to decompile: __libc_start_main @ 0x4058 */

/* FAILED to decompile: __stack_chk_fail @ 0x405C */

/* FAILED to decompile: __dynamic_cast @ 0x4060 */

/* FAILED to decompile: __cxa_rethrow @ 0x4068 */

/* FAILED to decompile: puts @ 0x406C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4070 */

/* FAILED to decompile: __cxa_end_catch @ 0x4074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4078 */

/* FAILED to decompile: __cxa_throw @ 0x407C */

/* FAILED to decompile: _Unwind_Resume @ 0x4080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4084 */

/* Total functions decompiled: 95, failed: 20 */
