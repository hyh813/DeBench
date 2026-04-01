// Angr Decompilation of 5-1_gcc_O3_no_g
// Platform: X86

#include <string.h>


/* CRT stub function _init removed by preprocessor */

class Base {
public:
 virtual void virtual_func(int arg_0) = 0;
 virtual void getName() = 0;
 virtual ~Base() {}
};

class Derived : public Base {
public:
 virtual void virtual_func(int arg_0) = 0;
 virtual void getName() = 0;
 virtual ~Derived() {}
};

class MiddleA {
public:
 virtual void func() = 0;
};

class MiddleB {
public:
 virtual void func() = 0;
};

class MultiDerived : public MiddleA, public MiddleB {
public:
 void funcA();
 void funcB();
 virtual ~MultiDerived();
};

class DiamondDerived : public virtual Base {
public:
 virtual void func() = 0;
 virtual ~DiamondDerived() {}
};

class RTTIBase {
public:
 virtual void getType();
};

class RTTIDerivedA : public RTTIBase {
public:
 virtual void getType();
 virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
 virtual void getType();
 virtual ~RTTIDerivedB();
};

template<typename T>
T template_max(T arg_0, T arg_1);

template<typename T>
void template_swap(T& ptr, T& p);

template<typename T>
class Container {
public:
 Container();
 void push(T arg_0);
 T get(int arg_0);
 int getSize();
};

namespace __x86 {
 unsigned int get_pc_thunk_ax();
 void get_pc_thunk_bx();
 int get_pc_thunk_si(int a0, int a1);
 void get_pc_thunk_si(int* a0, int* a1, char* a2);
 void get_pc_thunk_dx();
 void get_pc_thunk_dx(unsigned int a0);
 int get_pc_thunk_di(int a0);
}

int sub_401090();
int sub_4010a0();
int sub_4010b0();
int sub_4010c0();
int sub_4010d0();
int sub_4010e0();
int sub_4010f0();
int sub_401100();
int sub_401110();
int sub_401120();
int sub_401130();
int sub_401140();
int sub_401150();
int sub_401160(int a0, unsigned int* a1, int a2);
int sub_401160();
int sub_401170();
int sub_401180(int a0);
unsigned int* sub_401190(unsigned int a0);
int sub_4011a0(void* a0, int unused);
int sub_4011b0(void* a0, void* a1, void* a2);
int sub_4011c0(int a0, int a1);
int sub_4011c0_v2(int a0, int a1);
int sub_4011d0(const char* a0, const char* a1);
void sub_4011f0();
int sub_401200();
int sub_401210();
int sub_401220(void* a0);
int sub_401230(unsigned int* a0);
int sub_401240(int a0);
int sub_401250(void* a0, int a1, int a2);
int sub_401260();
void test_cpp_exception();
void* _ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3);
void __stack_chk_fail_local();
void __stack_chk_fail_local(unsigned int a0);
int strncmp(const char* s1, const char* s2, unsigned int n);
void* operator new(unsigned int size);
void operator delete(void* ptr);
void frame_dummy();
unsigned int __do_global_ctors_aux();
int test_cpp_oo_features();
unsigned int main();

extern struct struct_0 {
 char padding_0[20000];
} *g_404ff4;

int _init()
{
 if (g_404ff4)
 ((void (*)(void))g_404ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(int arg_0)
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
void sub_40104e()
{
 return;
}

// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return 0;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 return;
}

// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 return;
}

// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return 0;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 return;
}

// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return 0;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
}


int sub_401090()
{
 sub_401030(40);
 return 0;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
}


int sub_4010a0()
{
 sub_401030(48);
 return 0;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
}


int sub_4010b0()
{
 sub_401030(56);
 return 0;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
}


int sub_4010c0()
{
 sub_401030(64);
 return 0;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return 0;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return 0;
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 sub_401030(88);
 return 0;
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe()
{
 sub_401100();
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 sub_401030(96);
 return 0;
}


// Function: sub_40110e at 0x40110e
void sub_40110e()
{
 sub_401110();
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return 0;
}


// Function: sub_40111e at 0x40111e
void sub_40111e()
{
 sub_401120();
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 sub_401030(112);
 return 0;
}


// Function: sub_40112e at 0x40112e
void sub_40112e()
{
 sub_401130();
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 sub_401030(120);
 return 0;
}


// Function: sub_40113e at 0x40113e
void sub_40113e()
{
 sub_401140();
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
int sub_401150()
{
 return 0;
}


// Function: sub_40115a at 0x40115a
void sub_40115a()
{
 sub_401160();
}


// Function: sub_401160 at 0x401160
int sub_401160(int a0, unsigned int* a1, int a2)
{
 return 0;
}


// Function: sub_401170 at 0x401170
int sub_401170(unsigned int a0)
{
 return 0;
}


// Function: sub_40117a at 0x40117a
void sub_40117a()
{
 sub_401180(0);
}

// Function: sub_401180 at 0x401180
int sub_401180(int a0)
{
 return 0;
}


// Function: sub_40116a at 0x40116a
void sub_40116a()
{
 sub_401170(0);
}


// Function: sub_40118a at 0x40118a
void sub_40118a()
{
 sub_401190(0);
}


// Function: sub_401190 at 0x401190
unsigned int* sub_401190(unsigned int a0)
{
 return 0;
}


// Function: sub_40119a at 0x40119a
void sub_40119a()
{
 sub_4011a0();
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0(void* a0, int unused)
{
 return 0;
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 sub_4011b0(0, 0, 0);
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0(void* a0, void* a1, void* a2)
{
 return 0;
}


// Function: sub_4011ba at 0x4011ba
void sub_4011ba()
{
 sub_4011c0(0, 0);
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0(int a0, int a1)
{
 return 0;
}


// Function: sub_4011ca at 0x4011ca
void sub_4011ca()
{
 sub_4011d0("", "");
}

// Function: sub_4011d0 at 0x4011d0
int sub_4011d0()
{
 return 0;
}

// Function: sub_4011c0_v2 at 0x4011c0
int sub_4011c0_v2(int a0, int a1)
{
 return 0;
}


// Function: sub_4011da at 0x4011da
int sub_4011d0(const char* a0, const char* a1)
{
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
 sub_4011f0();
 return 0;
}


// Function: sub_4011f0 at 0x4011f0
void sub_4011f0()
{
 return;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return 0;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 return 0;
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 sub_401210();
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 return 0;
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 sub_401220(0);
}


// Function: sub_401220 at 0x401220
int sub_401220(void* a0)
{
 return 0;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 sub_401230(0);
}


// Function: sub_401230 at 0x401230
int sub_401230(unsigned int* a0)
{
 return 0;
}


// Function: sub_40123a at 0x40123a
void sub_40123a()
{
 sub_401240(0);
}

// Function: sub_401240 at 0x401240
int sub_401240(int a0)
{
 return 0;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 sub_401250();
}


// Function: sub_401250 at 0x401250
int sub_401250(void* a0, int a1, int a2)
{
 return 0;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 sub_401260();
}


// Function: sub_401260 at 0x401260
int sub_401260()
{
 return 0;
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401270
typedef struct struct_exception_data {
 char padding_0[15718];
 unsigned int field_3d66;
} struct_exception_data;

void test_cpp_exception()
{
 struct_exception_data *v6; // esi
 struct_exception_data *v7; // esi
 unsigned int v8; // ebx
 unsigned int *ptr; // eax
 unsigned int v10; // eax
 unsigned int result; // edx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0xc]
 char v3; // [bp-0x8]
 char v4; // [bp+0x0]

 __x86::get_pc_thunk_si(*((int *)&v2), *((int *)&v3), &v4);
 v7 = v6;
 v1 = v8;
ptr = sub_401190(4);
	*(ptr) = 42;
	v10 = sub_401250(ptr, 0, 0);
	if (result != 1)
 {
 v0 = 0;
 }
 else
 {
 sub_401180(v10);
 v10 = sub_401210();
 sub_401240(0);
 }
 if (result != 1)
 sub_401260();
sub_401180(v10);
	sub_401240(v10);
	v13 = sub_401250(sub_401190(1), (int)((char *)v7 + 300), 0);
	if (result != 2)
 {
 if (result != 3)
 {
 v13 = sub_401260();
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
int main()
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
 (void)sub_4011b0(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return 0;
}


// Function: sub_4013dc at 0x4013dc
void sub_4013dc()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40140c at 0x40140c

// Function: sub_40140c at 0x40140c
void sub_40140c()
{
 return;
}





// Function: __x86.get_pc_thunk_bx at 0x401410
void __x86::get_pc_thunk_bx()
{
 return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1_deregister {
 unsigned int field_0;
} struct_1_deregister;

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86::get_pc_thunk_dx();
 return (char *)&ptr[3836] + 3;
}


// Function: sub_401453 at 0x401453
void sub_401453()
{
}


// Function: sub_401459 at 0x401459
void sub_401459()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1_register {
 unsigned int field_0;
} struct_1_register;

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]
 char *p1, *p2;

 __x86::get_pc_thunk_dx();
 v3 = v2;
 v0 = v4;
 p1 = (char *)v3 + 132;
 p2 = (char *)v3 + 132;
 if (!((p1 - p2) >> 31) + ((p1 - p2) >> 2) >> 1)
 {
 return ((p1 - p2) >> 31) + ((p1 - p2) >> 2) >> 1;
 }
 else if (*((int *)((char *)v3 + 100)))
 {
 return ((unsigned int (*)(void*, unsigned int))(*((int *)((char *)v3 + 100))))((char *)v3 + 132, ((p1 - p2) >> 31) + ((p1 - p2) >> 2) >> 1);
 }
 else
 {
 return ((p1 - p2) >> 31) + ((p1 - p2) >> 2) >> 1;
 }
}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86::get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = v6;
 v1 = v8;
 v0 = v9;
 if (*((char *)ptr + 132))
 return v5;
 if (*((int *)((char *)ptr + 84)))
 sub_401150(*((int *)((char *)ptr + 112)));
 v10 = (struct_0 *)((char *)ptr + 348);
 v11 = *((unsigned int *)((char *)ptr + 136));
 i = ((char *)ptr + 344 - (char *)v10 >> 2) - 1;
 if (*((unsigned int *)((char *)ptr + 136)) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)((char *)ptr + 136)) = v13;
 ((void (*)(void))(*((int *)((char *)v10 + 4 * v13))))();
 v11 = *((unsigned int *)((char *)ptr + 136));
 } while (*((unsigned int *)((char *)ptr + 136)) < i);
 }
 v14 = deregister_tm_clones();
 *((char *)ptr + 132) = 1;
 return v14;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401549
void __x86::get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40154d
int __x86::get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
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
	sub_4011a0((void*)&v0);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 test_cpp_constructor();
 }
 return;
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
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void* v0; // [bp+0x4]

 v0 = arg_0;
 ((void (*)(void*, int))(*(void **)arg_0))(arg_0, arg_1);
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
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_40165a at 0x40165a
void sub_40165a()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401660
int test_cpp_operator_overload()
{
 return 0;
}


// Function: sub_40166a at 0x40166a
int sub_40166a()
{
 test_cpp_template_func();
 return 0;
}


// Function: _Z22test_cpp_template_funcv at 0x401670
void test_cpp_template_func()
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
 template_max<int>(3, 7);
 template_max<double>(0, 0x40040000, 0, 0x3ff80000);
 v3 = 10;
 v4 = 20;
 template_swap<int>((int*)&v3, (int*)&v4);
 v2 = _ccall(v10, 0, 0, 0);
 v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 {
 __stack_chk_fail_local(v0);
 test_cpp_template_class();
 }
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401720
int test_cpp_template_class()
{
 return 0;
}


// Function: sub_40172a at 0x40172a
void sub_40172a()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401730
int test_cpp_lambda()
{
 return 0;
}


// Function: sub_40173a at 0x40173a
void sub_40173a()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401740
int test_cpp_smart_ptr()
{
 return 0;
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
extern char g_404e48;
extern char g_404e5c;

void test_cpp_rtti()
{
 void* *ptr; // edi
 char *v5; // ebp
 unsigned int v6; // ecx
 struct_2 **p; // [bp-0x28]
 void* v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]

 ptr = (void* *)sub_401170(4);
 *(ptr) = &g_404e48;
 p = (struct_2 **)sub_401170(4);
 *(p) = &g_404e5c;
 v1 = *(ptr);
 v5 = *((char **)(*(int *)ptr + 4));
 v6 = (v5 == "12RTTIDerivedA" ? 30 : (*(v5) == 42 ? 20 : (-(sub_4011d0(v5, "12RTTIDerivedA") < 1) & 10) + 20));
 if (addr->field_4 != "12RTTIDerivedB")
 v2 = v6;
 v2 = &_ZTI8RTTIBase;
 ((void (*)(void*))(v1))(ptr);
 (*p)->field_4(*p);
 sub_4011a0(0);
 return;
}


// Function: sub_40188e at 0x40188e
int sub_40188e()
{
 return 0;
}


// Function: sub_40189c at 0x40189c
void sub_40189c()
{
}


// Function: sub_4018a7 at 0x4018a7
void sub_4018a7()
{
}


// Function: sub_4018bf at 0x4018bf
int sub_4018bf()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4018c0
class LifecycleClass {
public:
 static unsigned int instance_count;
};

extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned int g_403018;
extern unsigned int g_40303c;
extern unsigned int g_40305a;
extern unsigned int g_403076;
extern unsigned int g_403092;
extern unsigned int g_4030ae;
extern unsigned int g_4030cb;
extern unsigned int g_403103;
extern unsigned int g_40311f;
extern unsigned int g_40313b;
extern unsigned int g_403158;
extern unsigned int g_403175;

int test_cpp_oo_features()
{
 unsigned long v9; // ldt
 unsigned long v10; // gdt
 unsigned short v11; // gs
 unsigned int v13; // fpround
 double v0; // [bp-0x4c], Other Possible Types: unsigned long, unsigned int
 unsigned short v1; // [bp-0x40]
 unsigned short v2; // [bp-0x3e]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 char v5; // [bp-0x30]
 char v6[2]; // [bp-0x12]
 unsigned int v7; // [bp-0x10]

 v7 = *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
 sub_401220(&g_403018);
strncpy(v6, "Test", 4);
	sub_401160(1, &g_40303c, sub_4011a0((void*)&v5) + 4700);
 sub_401160(1, &g_40305a, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 sub_401160(1, &g_403076, 42);
 sub_401160(1, &g_403092, 71);
 sub_401160(1, &g_4030ae, 650);
 sub_401160(1, &g_4030cb, 22);
 template_max<int>(3, 7);
 template_max<double>(2.0, 1.5);
 v3 = 10;
 *((unsigned long long *)&v0) = 0;
 v4 = 20;
template_swap<int>(&v3, &v4);
	v2 = (unsigned int)_ccall(v13, 0, 0, 0);
	v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
	sub_401160(1, 0, 0);
	sub_401160(1, &g_403103, 16);
 sub_401160(1, &g_40311f, 85);
sub_401160(1, &g_40313b, (unsigned int)test_cpp_exception());
	sub_401160(1, &g_403158, 703);
	sub_401160(1, &g_403175, (unsigned int)test_cpp_rtti());
	if (v7 != *((int *)_ccall(v9, v10, (unsigned int)v11, 20)))
	{
		__stack_chk_fail_local();
		Base::virtual_func(0);
		return 0;
	}
 return v7 - *((int *)_ccall(v9, v10, (unsigned int)v11, 20));
}


// Function: _ZN4Base12virtual_funcEi at 0x401ae0
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401aec at 0x401aec
void sub_401aec()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401af0
void Base::getName()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_401b05 at 0x401b05
void sub_401b05()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401b10
Base::~Base()
{
}


// Function: sub_401b15 at 0x401b15
void sub_401b15(unsigned int a0, unsigned int a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401b20
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401b31 at 0x401b31
void sub_401b31()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401b40
void Derived::getName()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_401b55 at 0x401b55
void sub_401b55()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401b60
void MultiDerived::funcA()
{
 return;
}


// Function: sub_401b6a at 0x401b6a
void sub_401b6a()
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401b70
void MultiDerived::funcB()
{
 return;
}


// Function: sub_401b7a at 0x401b7a
void sub_401b7a()
{
 non_virtual_thunk_to_MultiDerived_funcB();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401b80
void non_virtual_thunk_to_MultiDerived_funcB()
{
}


// Function: sub_401b8a at 0x401b8a
void sub_401b8a(unsigned int a0)
{
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401b90
void MiddleA::func()
{
 return;
}


// Function: sub_401ba7 at 0x401ba7
void sub_401ba7(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401bb0
void thunk_to_MiddleA_func(void* *a0)
{
 void* *v0; // eax

 v0 = (void* *)((char *)a0 + ((unsigned int *)a0)[12]);
 return;
}


// Function: sub_401bcc at 0x401bcc
void sub_401bcc(unsigned int a0)
{
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401bd0
void MiddleB::func()
{
 return;
}


// Function: sub_401be7 at 0x401be7
void sub_401be7(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401bf0
void thunk_to_MiddleB_func(void* *a0)
{
 void* *v0; // eax

 v0 = (void* *)((char *)a0 + ((unsigned int *)a0)[12]);
 return;
}


// Function: sub_401c0c at 0x401c0c
void sub_401c0c(unsigned int a0)
{
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401c10
void DiamondDerived::func()
{
 return;
}


// Function: sub_401c27 at 0x401c27
void sub_401c27(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401c30
void thunk_to_DiamondDerived_func(void* *a0)
{
 void* *v0; // eax

 v0 = (void* *)((char *)a0 + ((unsigned int *)a0)[12]);
 return;
}


// Function: sub_401c4c at 0x401c4c
void sub_401c4c(unsigned int a0)
{
 non_virtual_thunk_to_DiamondDerived_func(a0);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401c50
void non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return;
}


// Function: sub_401c68 at 0x401c68
void sub_401c68()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401c70
void RTTIDerivedA::getType()
{
 return;
}


// Function: sub_401c7a at 0x401c7a
void sub_401c7a()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401c80
void RTTIDerivedB::getType()
{
 return;
}


// Function: sub_401c8a at 0x401c8a
void sub_401c8a()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401c90
RTTIDerivedB::~RTTIDerivedB()
{
}


// Function: sub_401c95 at 0x401c95
void sub_401c95()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401ca0
RTTIDerivedA::~RTTIDerivedA()
{
}


// Function: sub_401ca5 at 0x401ca5
void sub_401ca5()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401cb0
DiamondDerived::~DiamondDerived()
{
}


// Function: sub_401cb5 at 0x401cb5
void sub_401cb5()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401cc0
void thunk_to_DiamondDerived_destructor()
{
 return;
}


// Function: sub_401cc5 at 0x401cc5
void sub_401cc5()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401cd0
void non_virtual_thunk_to_DiamondDerived_destructor()
{
}


// Function: sub_401cd5 at 0x401cd5
void sub_401cd5()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401ce0
MultiDerived::~MultiDerived()
{
}


// Function: sub_401ce5 at 0x401ce5
void sub_401ce5()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401cf0
void non_virtual_thunk_to_MultiDerived_destructor()
{
}


// Function: sub_401cf5 at 0x401cf5
void sub_401cf5()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401d00
Derived::~Derived()
{
}


// Function: sub_401d05 at 0x401d05
int sub_401d05()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401d10
int _ZN4BaseD0Ev()
{
 sub_4011c0(0, 4);
 return 0;
}


// Function: sub_401d33 at 0x401d33
int sub_401d33()
{
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401d40
int _ZN7DerivedD0Ev()
{
 sub_4011c0(0, 8);
 return 0;
}


// Function: sub_401d63 at 0x401d63
int sub_401d63()
{
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401d70
int _ZN12MultiDerivedD0Ev()
{
 sub_4011c0(0, 16);
 return 0;
}


// Function: sub_401d93 at 0x401d93
int sub_401d93()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401da0
int non_virtual_thunk_to_MultiDerived_destructor(unsigned int a0)
{
 return 0;
}


// Function: sub_401dc7 at 0x401dc7
int sub_401dc7()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401dd0
int _ZN12RTTIDerivedBD0Ev()
{
 sub_4011c0(0, 4);
 return 0;
}


// Function: sub_401df3 at 0x401df3
int sub_401df3()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401e00
int _ZN12RTTIDerivedAD0Ev()
{
 sub_4011c0(0, 4);
 return 0;
}


// Function: sub_401e23 at 0x401e23
int sub_401e23()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401e30
int _ZN14DiamondDerivedD0Ev()
{
 sub_4011c0(0, 24);
 return 0;
}


// Function: sub_401e53 at 0x401e53
int sub_401e53()
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401e60
void thunk_to_DiamondDerived_destructor2(void* *a0)
{
 sub_4011c0((void* *)((char *)a0 + ((unsigned int *)a0)[16]), 24);
 return;
}


// Function: sub_401e89 at 0x401e89
int sub_401e89()
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401e90
int non_virtual_thunk_to_DiamondDerived_destructor2(unsigned int a0)
{
 return 0;
}


// Function: sub_401eb7 at 0x401eb7
int sub_401eb7(unsigned int a0, unsigned int a1)
{
 return template_max(a0, a1);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401ec0
int template_max(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: sub_401ed2 at 0x401ed2
double sub_401ed2(double a0, double a1)
{
 return template_max(a0, a1);
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401ee0
double template_max(double arg_0, double arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: sub_401ef3 at 0x401ef3
int sub_401ef3()
{
 int v0, v1;
 template_swap(v0, v1);
 return 0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401f00
void template_swap(int &ptr, int &p)
{
 unsigned int v0; // ecx

 v0 = ptr;
 ptr = p;
 p = v0;
 return;
}


// Function: sub_401f17 at 0x401f17
void sub_401f17(unsigned int a0)
{
 Container_int_constructor();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401f20
void Container_int_constructor()
{
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401f30
void Container_int_push(int arg_0)
{
 return;
}


// Function: sub_401f4e at 0x401f4e
void sub_401f4e(unsigned int a0, unsigned int a1)
{
 Container_int_get(a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401f50
int Container_int_get(int arg_0)
{
 if (arg_0 < 0)
 return 0;
 return 0;
}


// Function: sub_401f68 at 0x401f68
int sub_401f68()
{
 return 0;
}


// Function: sub_401f74 at 0x401f74
void sub_401f74(unsigned int a0)
{
 Container_int_getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401f80
int Container_int_getSize()
{
 return 0;
}


// Function: sub_401f8c at 0x401f8c
void sub_401f8c(unsigned int a0)
{
 Container_double_constructor();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401f90
void Container_double_constructor()
{
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401fa0
void Container_double_push()
{
 return;
}


// Function: sub_401fbf at 0x401fbf
int sub_401fbf()
{
 return 0;
}


// Function: sub_401fc3 at 0x401fc3
void sub_401fc3(unsigned int a0, unsigned int a1)
{
 Container_double_get(a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401fd0
double Container_double_get(int arg_0)
{
 if (arg_0 >= 0)
 {
 return 0.0;
 }
 return 0.0;
}


// Function: sub_401fe8 at 0x401fe8
int sub_401fe8()
{
 return 0;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4(unsigned int a0)
{
 Container_double_getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402000
int Container_double_getSize()
{
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x40200c
unsigned int __x86::get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_si at 0x402010
int __x86::get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_402014 at 0x402014
int sub_402014()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x402020
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4011f0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1_ctors {
 unsigned int field_0;
} struct_1_ctors;

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86::get_pc_thunk_dx();
 ptr = v2;
 v4 = (unsigned int *)*((unsigned int *)&ptr[356]);
 if (*((unsigned int *)&ptr[356]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = ptr;
 do
 {
 p = v6;
 ((void (*)())v4)();
 v4 = *((unsigned int *)&((char *)p)[4]);
 v6 = (struct_0 *)&((char *)p)[4];
 } while (*((unsigned int *)&((char *)p)[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_402082 at 0x402082
int sub_402082()
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


