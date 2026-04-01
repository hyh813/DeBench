// Angr Decompilation of 5-1_gcc_O2_g
// Platform: X86

/* __x86 helper functions */

template<typename T>
class Container {
public:
    Container();
    void push(T value);
    T get(int index);
    int getSize();
private:
    T data[10];
    int count;
};

template<typename T>
Container<T>::Container() {
    count = 0;
}

template<typename T>
void Container<T>::push(T value) {
    if (count <= 9) {
        data[count++] = value;
    }
}

template<typename T>
T Container<T>::get(int index) {
    if (index >= 0 && index < count) {
        return data[index];
    }
    return T();
}

template<typename T>
int Container<T>::getSize() {
    return count;
}
static inline unsigned int __x86_get_pc_thunk_ax() {
    unsigned int val;
    __asm__ volatile ("movl %%eax, %0" : "=r" (val));
    return val;
}

static inline unsigned int __x86_get_pc_thunk_dx() {
    unsigned int val;
    __asm__ volatile ("movl %%edx, %0" : "=r" (val));
    return val;
}

static inline unsigned int __x86_get_pc_thunk_si(unsigned int a0, unsigned int a1, unsigned int a2) {
    unsigned int val;
    __asm__ volatile ("movl %%esi, %0" : "=r" (val));
    (void)a0; (void)a1; (void)a2;
    return val;
}

static inline unsigned int __x86_get_pc_thunk_di(int a0) {
    unsigned int val;
    __asm__ volatile ("movl %%edi, %0" : "=r" (val));
    return val;
}

static inline unsigned int __x86_get_pc_thunk_bx() {
    unsigned int val;
    __asm__ volatile ("movl %%ebx, %0" : "=r" (val));
    return val;
}

struct __x86 {
    static inline unsigned int get_pc_thunk_ax() { return __x86_get_pc_thunk_ax(); }
    static inline unsigned int get_pc_thunk_dx() { return __x86_get_pc_thunk_dx(); }
    static inline unsigned int get_pc_thunk_si(unsigned int a0, unsigned int a1, unsigned int a2) { return __x86_get_pc_thunk_si(a0, a1, a2); }
    static inline unsigned int get_pc_thunk_di(int a0) { return __x86_get_pc_thunk_di(a0); }
    static inline unsigned int get_pc_thunk_bx() { return __x86_get_pc_thunk_bx(); }
};

/* Forward declarations for missing functions */
int _ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, unsigned int param);
void frame_dummy(void);
void __stack_chk_fail_local(void);
void __do_global_ctors_aux(void);
void test_cpp_exception();
void test_cpp_oo_features();
double template_max_double(double arg_0, double arg_1);
int template_max_int(int arg_0, int arg_1);
#include <string.h>
int sub_401050();
int sub_401060();
int sub_401070();
int sub_401080();
int sub_401090();
int sub_4010a0();
int sub_4010b0();
int sub_4010c0();
int sub_4010d0();
int sub_4010e0();
int sub_4010f0();
int sub_401100();
int sub_401220(void *a0);
void sub_401260(void *a0);
int sub_4011a0(void *a0);
void* sub_401250(void *a0, void *a1, unsigned int a2);

/* Forward declarations for classes */
class Base;
class Derived;
class MultiDerived;
class MiddleA;
class MiddleB;
class DiamondDerived;
class RTTIDerivedA;
class RTTIDerivedB;

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 char padding_0[84];
 unsigned int field_54;
} struct_0;

extern struct_0 *g_403ff4;

void _init()
{
 if (g_403ff4)
 ((void (*)(void))g_403ff4)();
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int arg)
{
 return 0;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return 0;
}


// Function: sub_40104e at 0x40104e
int sub_40104e()
{
 sub_401050();
 return 0;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return 0;
}


// Function: sub_40105e at 0x40105e
int sub_40105e()
{
 sub_401060();
 return 0;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
int sub_40106e()
{
 sub_401070();
 return 0;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return 0;
}


// Function: sub_40107e at 0x40107e
int sub_40107e()
{
 sub_401080();
 return 0;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return 0;
}


// Function: sub_40108e at 0x40108e
int sub_40108e()
{
 sub_401090();
 return 0;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return 0;
}


// Function: sub_40109e at 0x40109e
int sub_40109e()
{
 sub_4010a0();
 return 0;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return 0;
}


// Function: sub_4010ae at 0x4010ae
int sub_4010ae()
{
 sub_4010b0();
 return 0;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return 0;
}


// Function: sub_4010be at 0x4010be
int sub_4010be()
{
 sub_4010c0();
 return 0;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return 0;
}


// Function: sub_4010ce at 0x4010ce
int sub_4010ce()
{
 sub_4010d0();
 return 0;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return 0;
}


// Function: sub_4010de at 0x4010de
int sub_4010de()
{
 sub_4010e0();
 return 0;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return 0;
}


// Function: sub_4010ee at 0x4010ee
int sub_4010ee()
{
 sub_4010f0();
 return 0;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 sub_401030(88);
 return 0;
}


// Function: sub_4010fe at 0x4010fe
int sub_4010fe()
{
 sub_401100();
 return 0;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 sub_401030(96);
 return 0;
}


// Function: sub_40110e at 0x40110e
int sub_40110e()
{
 sub_401110();
 return 0;
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return 0;
}


// Function: sub_40111e at 0x40111e
int sub_40111e()
{
 sub_401120();
 return 0;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 sub_401030(112);
 return 0;
}


// Function: sub_40112e at 0x40112e
int sub_40112e()
{
 sub_401130();
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 sub_401030(120);
 return 0;
}


// Function: sub_40113e at 0x40113e
int sub_40113e()
{
 sub_401140();
 return 0;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 sub_401030(128);
 return 0;
}


// Function: sub_40114e at 0x40114e
int sub_40114e()
{
 sub_401150();
 return 0;
}


// Function: sub_401150 at 0x401150
void sub_401150()
{
 return;
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return 0;
}


// Function: sub_401160 at 0x401160
void sub_401160(unsigned int a0, void *a1, unsigned int a2)
{
	return;
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return 0;
}


// Function: sub_401170 at 0x401170
void* sub_401170(unsigned int a0)
{
	return 0;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return 0;
}


// Function: sub_401180 at 0x401180
unsigned int sub_401180(unsigned int a0)
{
	return 0;
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return 0;
}


// Function: sub_401190 at 0x401190
unsigned int sub_401190(unsigned int a0)
{
	return 0;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return 0;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0(void *a0)
{
	return 0;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0();
 return 0;
}


// Function: sub_4011b0 at 0x4011b0
void sub_4011b0(void *a0, void *a1, void *a2)
{
	return;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0();
 return 0;
}


// Function: sub_4011c0 at 0x4011c0
void sub_4011c0(void *a0, unsigned int a1)
{
	return;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0();
 return 0;
}


// Function: sub_4011d0 at 0x4011d0
void sub_4011d0(void *a0, const char *a1)
{
	return;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0();
 return 0;
}


// Function: sub_4011e0 at 0x4011e0
void sub_4011e0()
{
	return;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 return 0;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0()
{
 return 0;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 return 0;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 return 0;
}


// Function: sub_40120a at 0x40120a
int sub_40120a()
{
 sub_401210();
 return 0;
}


// Function: sub_401210 at 0x401210
void* sub_401210()
{
	return 0;
}


// Function: sub_40121a at 0x40121a
int sub_40121a()
{
 sub_401220();
 return 0;
}


// Function: sub_401220 at 0x401220
int sub_401220(void *a0)
{
 return 0;
}


// Function: sub_40122a at 0x40122a
int sub_40122a()
{
 sub_401230();
 return 0;
}


// Function: sub_401230 at 0x401230
void sub_401230(void *a0)
{
}


// Function: sub_40123a at 0x40123a
int sub_40123a()
{
 sub_401240();
 return 0;
}


// Function: sub_401240 at 0x401240
void sub_401240(void *a0)
{
}


// Function: sub_40124a at 0x40124a
int sub_40124a()
{
 sub_401250();
 return 0;
}


// Function: sub_401250 at 0x401250
void* sub_401250(void *a0, void *a1, unsigned int a2)
{
	return 0;
}


// Function: sub_40125a at 0x40125a
int sub_40125a()
{
 sub_401260();
 return 0;
}


// Function: sub_401260 at 0x401260
void sub_401260(void *a0)
{
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401270
typedef struct struct_0 {
 char padding_0[11622];
 unsigned int field_2d66;
} struct_0;

void test_cpp_exception()
{
 struct_1 *v6; // esi
 struct_1 *v7; // esi
 unsigned int v8; // ebx
 unsigned int *ptr; // eax
 void *v10; // eax
 unsigned int result; // edx
 void *v13; // eax
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0xc]
 char v3; // [bp-0x8]
 char v4; // [bp+0x0]

 __x86_get_pc_thunk_si(*((int *)&v2), *((int *)&v3), &v4);
 v7 = (struct_1 *)((char *)v6 + 11542);
 v1 = v8;
 ptr = (unsigned int *)sub_401190(4);
 *(ptr) = 42;
 sub_401250(ptr, *((int *)&v7->padding_0[80]), 0);
 v10 = sub_401180(0);
 if (result != 1)
 {
 v0 = 0;
 }
 else
 {
 v0 = *((int *)sub_401180(v10));
 v10 = sub_401210();
 sub_401240(v10);
 }
 if (result != 1)
 sub_401260(v10);
 sub_401180(v10);
 sub_401240(v10);
 sub_401250(sub_401190(1), (void *)((char *)v7 + 300), 0);
 v13 = sub_401180(0);
 if (result != 2)
 {
 if (result != 3)
 {
 sub_401260(v13);
 v13 = 0;
 }
 else
 {
 sub_401180(v13);
 sub_401240(v13);
 return;
 }
 }
 sub_401180(v13);
 sub_401240(v13);
 return;
}


// Function: sub_40137e at 0x40137e
void sub_40137e()
{
 main();
 return;
}


// Function: main at 0x401380
unsigned int main()
{
 char v0; // [bp+0x0]

 test_cpp_oo_features(&v0);
 return 0;
}


// Function: sub_401393 at 0x401393
int sub_401393()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4013a0
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 sub_401230(&_ZStL8__ioinit);
 sub_4011b0(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return 0;
}


// Function: sub_4013dc at 0x4013dc
void sub_4013dc()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40140c at 0x40140c
unsigned int __x86_get_pc_thunk_bx()
{
 unsigned int val;
 __asm__ volatile ("movl %%ebx, %0" : "=r" (val));
 return val;
}


// Function: sub_401414 at 0x401414
int sub_401414()
{
 deregister_tm_clones();
 return 0;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void deregister_tm_clones()
{
 return;
}


// Function: sub_401453 at 0x401453
int sub_401453()
{
 return 0;
}


// Function: sub_401459 at 0x401459
int sub_401459()
{
 register_tm_clones();
 return 0;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void register_tm_clones()
{
 return;
}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc];
 char v2; // [bp-0x8];
 char v3; // [bp+0x0];

 __x86_get_pc_thunk_di(0);
 ptr = (struct_0 *)&v6->padding_0[10967];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[132])
 return;
 if (*((int *)&ptr->padding_0[84]))
 {
 sub_401150(*((int *)&ptr->padding_0[112]));
 }
 v10 = (struct_0 *)&ptr->padding_0[348];
 v11 = *((int *)&ptr->padding_0[136]);
 i = (&ptr->padding_0[344] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[136]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[136]) = v13;
 ((void (*)())(unsigned long)(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[136]);
 } while (*((int *)&ptr->padding_0[136]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[132] = 1;
 return;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy() {
}



// Function: __x86_get_pc_thunk_dx at 0x401549
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int val;
 __asm__ volatile ("movl %%edx, %0" : "=r" (val));
 return val;
}


// Function: __x86.get_pc_thunk_di at 0x40154d
unsigned int __x86_get_pc_thunk_di(int a0)
{
 unsigned int val;
 __asm__ volatile ("movl %%edi, %0" : "=r" (val));
 return val;
}


// Function: sub_401551 at 0x401551
int sub_401551()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401560
void test_cpp_member_func()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 char v0[4]; // [bp-0x30]
 char v1; // [bp-0x2c]
 char v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 strncpy(v0, "Test", 4);
 memset(&v1, 0, 24);
 memset(&v2, 0, 4);
 sub_4011a0(&v0);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 test_cpp_constructor();
 }
}


// Function: _Z20test_cpp_constructorv at 0x401600
void test_cpp_constructor()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_40161c at 0x40161c
void sub_40161c(unsigned int a0)
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401620
class Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void* v0; // [bp+0x4]

 v0 = arg_0;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401630
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_40163a at 0x40163a
void sub_40163a()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401640
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_40164a at 0x40164a
void sub_40164a()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401650
int test_cpp_diamond_inheritance()
{
 return 0;
}


// Function: sub_40165a at 0x40165a
void sub_40165a()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401660
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_40166a at 0x40166a
int sub_40166a()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401670
int test_cpp_template_func()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // fpround
 unsigned int v0; // [bp-0x2c]
 unsigned short v1; // [bp-0x20]
 unsigned short v2; // [bp-0x1e]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 template_max_int(3, 7);
 template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
 template_swap_int(v3, v4);
 v2 = _ccall(v10);
 v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
 v0 = 0;
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 {
 __stack_chk_fail_local();
 test_cpp_template_class();
 }
 return 0;
}


// Function: _Z23test_cpp_template_classv at 0x401720
void test_cpp_template_class()
{
 return;
}


// Function: sub_40172a at 0x40172a
void sub_40172a()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401730
void test_cpp_lambda()
{
 return;
}


// Function: sub_40173a at 0x40173a
void sub_40173a()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401740
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_40174a at 0x40174a
int sub_40174a()
{
 test_cpp_rtti();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x401750
typedef struct struct_2 {
 char padding_0[4];
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

typedef struct struct_5 {
 char field_0;
} struct_5;

typedef struct struct_4 {
 char padding_0[4];
 struct struct_5 *field_4;
} struct_4;

extern unsigned int _ZTI8RTTIBase;
extern struct_4 *addr;
extern char g_403e48;
extern char g_403e5c;

void test_cpp_rtti()
{
 void* *ptr; // edi
 char *v5; // ebp
 char *v6; // eax
 struct_2 **p; // [bp-0x28]
 void* v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]

 ptr = (void* *)(void*)sub_401170(4);
*(ptr) = &g_403e48;
	p = (struct_2 **)(void*)sub_401170(4);
 *(p) = (struct_2 *)&g_403e5c;
 v1 = *(ptr);
 v5 = *((char *)((int)(((void**)((unsigned int)v1))[4]) + 4));
 if ((unsigned long)v5 != (unsigned int)"12RTTIDerivedA" && *(char *)v5 != 42)
 sub_4011d0((void*)v5, "12RTTIDerivedA");
 v6 = (char *)addr->field_4;
 v2 = (unsigned int)&_ZTI8RTTIBase;
 sub_4011a0(0);
 ((void (*)(void*))((unsigned long)(((void**)v1)[4])))(ptr);
 (*(p))->field_4 = *(struct_2 *)(p);
}


// Function: sub_401878 at 0x401878
int sub_401878()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401880
extern unsigned int g_402018;
extern unsigned int g_40203c;
extern unsigned int g_40205a;
extern unsigned int g_402076;
extern unsigned int g_402092;
extern unsigned int g_4020ae;
extern unsigned int g_4020cb;
extern unsigned int g_4020e7;
extern unsigned int g_402103;
extern unsigned int g_40211f;
extern unsigned int g_40213b;
extern unsigned int g_402158;
extern unsigned int g_402175;

int test_cpp_oo_features()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0; // [bp-0x30]
 char v1[2]; // [bp-0x12]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 sub_401220(&g_402018);
 strncpy(v1, "Test", 4);
 sub_4011a0(&v0);
 sub_401160(1, &g_40203c, 4700);
 sub_401160(1, &g_40205a, 0);
 sub_401160(1, &g_402076, 42);
 sub_401160(1, &g_402092, 71);
 sub_401160(1, &g_4020ae, 0);
 sub_401160(1, &g_4020cb, 22);
 sub_401160(1, &g_4020e7, 0);
 sub_401160(1, &g_402103, 16);
 sub_401160(1, &g_40211f, 85);
 sub_401160(1, &g_40213b, 0);
 sub_401160(1, &g_402158, 0);
 sub_401160(1, &g_402175, 0);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 }
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x401a30
int Base::virtual_func(int arg_0)
{
 return 0;
}


// Function: sub_401a3c at 0x401a3c
void sub_401a3c()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401a40
int Base_getName()
{
 return 0;
}


// Function: sub_401a55 at 0x401a55
void sub_401a55()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401a60
void Base_dtor()
{
 return;
}


// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned int a0, unsigned int a1)
{
 /* Derived::virtual_func() called */
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401a70
int Derived_virtual_func(int arg_0)
{
 return 0;
}


// Function: sub_401a81 at 0x401a81
void sub_401a81()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401a90
int Derived_getName()
{
 return 0;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5()
{
 /* MultiDerived::funcA() called */
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401ab0
void MultiDerived_funcA()
{
 return;
}


// Function: sub_401aba at 0x401aba
void sub_401aba()
{
 /* MultiDerived::funcB() called */
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401ac0
void MultiDerived_funcB()
{
 return;
}


// Function: sub_401aca at 0x401aca
void sub_401aca()
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401ad0
void thunk_MultiDerived_funcB()
{
 return;
}


// Function: sub_401ada at 0x401ada
void sub_401ada(unsigned int a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401ae0
void MiddleA_func()
{
 return;
}


// Function: sub_401af7 at 0x401af7
void sub_401af7(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b00
void _ZTv0_n12_N7MiddleA4funcEv(void* *a0)
{
 void* *v0; // eax;

 v0 = (void**)((char *)a0 + (unsigned long)((unsigned int*)a0)[3]);
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401b20
void MiddleB_func()
{
 return;
}


// Function: sub_401b37 at 0x401b37
void sub_401b37(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b40
void _ZTv0_n12_N7MiddleB4funcEv(void* *a0)
{
 void* *v0; // eax;

 v0 = (void**)((char *)a0 + (unsigned long)((unsigned int*)a0)[3]);
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned int a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b60
void DiamondDerived_func()
{
 return;
}


// Function: sub_401b77 at 0x401b77
void sub_401b77(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401b80
void _ZTv0_n12_N14DiamondDerived4funcEv(void* *a0)
{
 void* *v0; // eax;

 v0 = (void**)((char *)a0 + (unsigned long)((unsigned int*)a0)[3]);
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0)
{
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401ba0
int thunk_DiamondDerived_func(void* a0)
{
 char* ptr = (char*)a0;
 return 250;
}


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bc0
void RTTIDerivedA_getType()
{
 return;
}


// Function: sub_401bca at 0x401bca
void sub_401bca()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401bd0
void RTTIDerivedB_getType()
{
 return;
}


// Function: sub_401bda at 0x401bda
void sub_401bda()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401be0
void RTTIDerivedB_dtor()
{
 return;
}


// Function: sub_401be5 at 0x401be5
void sub_401be5()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401bf0
void RTTIDerivedA_dtor()
{
 return;
}


// Function: sub_401bf5 at 0x401bf5
void sub_401bf5()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c00
void DiamondDerived_dtor()
{
 return;
}


// Function: sub_401c05 at 0x401c05
void sub_401c05()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c10
void thunk_v_DiamondDerived_dtor()
{
 return;
}


// Function: sub_401c15 at 0x401c15
int sub_401c15()
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c20
void thunk_h_DiamondDerived_dtor()
{
 return;
}


// Function: sub_401c25 at 0x401c25
void sub_401c25()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c30
void MultiDerived_dtor()
{
 return;
}


// Function: sub_401c35 at 0x401c35
int sub_401c35()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c40
void thunk_h_MultiDerived_dtor()
{
 return;
}


// Function: sub_401c45 at 0x401c45
int sub_401c45()
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x401c50
void Derived_dtor2()
{
 return;
}


// Function: sub_401c55 at 0x401c55
int sub_401c55()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401c60
void Base_deleting_dtor(void* this_ptr)
{
 sub_4011c0(this_ptr, 4);
}


// Function: sub_401c83 at 0x401c83
void sub_401c83()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401c90
void Derived_deleting_dtor(void* this_ptr)
{
 sub_4011c0(this_ptr, 8);
}


// Function: sub_401cb3 at 0x401cb3
void sub_401cb3()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401cc0
void MultiDerived_deleting_dtor(void* this_ptr)
{
 sub_4011c0(this_ptr, 16);
}


// Function: sub_401ce3 at 0x401ce3
void sub_401ce3()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401cf0
void thunk_h_MultiDerived_deleting_dtor(unsigned int a0)
{
 sub_4011c0((void*)(a0 - 8), 16);
}


// Function: sub_401d17 at 0x401d17
void sub_401d17()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401d20
void RTTIDerivedB_deleting_dtor(void* this_ptr)
{
 sub_4011c0(this_ptr, 4);
}


// Function: sub_401d43 at 0x401d43
void sub_401d43()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401d50
void RTTIDerivedA_deleting_dtor(void* this_ptr)
{
 sub_4011c0(this_ptr, 4);
}


// Function: sub_401d73 at 0x401d73
void sub_401d73()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d80
void DiamondDerived_deleting_dtor(void* this_ptr)
{
 sub_4011c0(this_ptr, 24);
}


// Function: sub_401da3 at 0x401da3
void sub_401da3()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401db0
void thunk_v_DiamondDerived_deleting_dtor(void* *a0)
{
 sub_4011c0((void*)((char *)a0 + (unsigned long)((unsigned int*)a0)[4]), 24);
}


// Function: sub_401dd9 at 0x401dd9
void sub_401dd9()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401de0
void thunk_h_DiamondDerived_deleting_dtor(unsigned int a0)
{
 sub_4011c0((void*)(a0 - 8), 24);
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0, unsigned int a1)
{
 template_max_int(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401e10
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: sub_401e22 at 0x401e22
int sub_401e22(unsigned int a0)
{
 unsigned int bit_pattern;
 memcpy(&bit_pattern, (double[]){2.5}, sizeof(bit_pattern));
 return (int)template_max_double(0.0, 0.0);
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401e30
// Function: sub_401e43 at 0x401e43
int sub_401e43()
{
 return 0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401e50
void template_swap_int(int &ptr, int &p)
{
 unsigned int v0; // ecx

 v0 = ptr;
 ptr = p;
 p = v0;
}


// Function: sub_401e67 at 0x401e67
void sub_401e67(void* a0)
{
 Container<int>::Container(a0);
}


// Function: _ZN9ContainerIiEC2Ev at 0x401e70
void Container_int_Container(void* ptr)
{
 *((unsigned int *)((unsigned char *)ptr + 40)) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401e80
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // edx

 index = *((int *)((unsigned char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((unsigned char *)ptr + 40)) = index + 1;
 *((int *)((unsigned char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401e9e at 0x401e9e
int sub_401e9e(void* a0, int a1)
{
 return Container<int>::get(a0, a1);
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ea0
int Container_int_get(void* this_ptr, int arg_0)
{
 unsigned char* ptr = (unsigned char*)this_ptr;
 if (arg_0 < 0 || arg_0 >= *((int *)(ptr + 40)))
 return 0;
 return *((int *)(ptr + 4 * arg_0));
}


// Function: sub_401eb8 at 0x401eb8
void sub_401eb8()
{
 return;
}


// Function: sub_401ec4 at 0x401ec4
int sub_401ec4(void* a0)
{
 return Container<int>::getSize(a0);
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401ed0
int Container_int_getSize(void* this_ptr)
{
 return *((int *)((unsigned char *)this_ptr + 40));
}


// Function: sub_401edc at 0x401edc
void sub_401edc(void* a0)
{
 Container<double>::Container(a0);
}


// Function: _ZN9ContainerIdEC1Ev at 0x401ee0
void Container_double_Container(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401ef0
void Container_double_push(void* ptr)
{
 unsigned int index; // edx

 index = *((unsigned int *)((char *)ptr + 80));
 if (index > 9)
 {
 return;
 }
 *((unsigned int *)((char *)ptr + 80)) = index + 1;
 *((unsigned long long *)((char *)ptr + 8 * index)) = 0;
 return;
}


// Function: sub_401f0f at 0x401f0f
void sub_401f0f()
{
 return;
}


// Function: sub_401f13 at 0x401f13
double sub_401f13(void* a0, int a1)
{
 return Container<double>::get(a0, a1);
}


// Function: _ZNK9ContainerIdE3getEi at 0x401f20
double Container_double_get(void* this_ptr, int arg_0)
{
 char* ptr = (char*)this_ptr;
 if (arg_0 >= 0 && arg_0 < *((int *)(ptr + 80)))
 {
 return *((double *)(ptr + 8 * arg_0));
 }
 return 0.0;
}


// Function: sub_401f38 at 0x401f38
void sub_401f38()
{
 return;
}


// Function: sub_401f44 at 0x401f44
int sub_401f44(void* a0)
{
 return Container<double>::getSize(a0);
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401f50
int Container_double_getSize(void* this_ptr)
{
 return *((int *)((char *)this_ptr + 80));
}


// Function: __x86_get_pc_thunk_ax at 0x401f5c
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get.pc_thunk_si at 0x401f60
unsigned int __x86_get_pc_thunk_si(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int val;
 __asm__ volatile ("movl %%esi, %0" : "=r" (val));
 return val;
}


// Function: sub_401f64 at 0x401f64
void sub_401f64()
{
 __stack_chk_fail_local();
}


// Function: __stack_chk_fail_local at 0x401f70
void __stack_chk_fail_local()
{
 (void)sub_4011f0();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 typedef void (*ctor_func_t)(void);
 ctor_func_t v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8];

 __x86::get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)&v2 + 351);
 v4 = (ctor_func_t)(*(unsigned int *)&ptr->padding_0[356]);
 if (*((unsigned int *)&ptr->padding_0[356]) == 0xffffffff)
 return;
 v0 = v5;
 v6 = (struct_0 *)(unsigned long)(*(unsigned int *)&ptr->padding_0[356]);
 do
 {
 p = v6;
 v4();
 v4 = (ctor_func_t)(*(unsigned int *)&p->padding_0[4]);
 v6 = (struct_0 *)(unsigned long)(*(unsigned int *)&p->padding_0[4]);
 } while (*(unsigned int *)&p->padding_0[4] != 0xffffffff);
 return;
}


// Function: sub_401fd2 at 0x401fd2
void sub_401fd2()
{
 return;
}

/* Forward declarations for missing functions */
int _ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, unsigned int param);
void sub_4011b0(void *a0, void *a1, void *a2);
void sub_4011d0(void *a0, const char *a1);
void sub_4011f0(void);
unsigned int __do_global_ctors_aux(void);
unsigned int* __do_global_dtors_aux(void);
void frame_dummy(void);
unsigned int* deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void __stack_chk_fail_local(void);
double template_max_double(double arg_0, double arg_1);


