// Angr Decompilation of 7_gcc_O1_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

/* Forward declaration of struct_0 - includes vtable fields */
typedef struct struct_0 {
 char padding_0[12];  /* field_0 to field_b (vtable entries start at 0xc) */
 int (*field_c)(void);  /* vtable entry 0 */
 int (*field_10)(void); /* vtable entry 1 */
 int (*field_14)(void); /* vtable entry 2 */
 int (*field_18)(void); /* vtable entry 3 */
 int (*field_1c)(void); /* vtable entry 4 */
 int (*field_20)(void); /* vtable entry 5 */
 int (*field_24)(void); /* vtable entry 6 */
 int (*field_28)(void); /* vtable entry 7 */
 int (*field_2c)(void); /* vtable entry 8 */
 int (*field_30)(void); /* vtable entry 9 */
 int (*field_34)(void); /* vtable entry 10 */
 char padding_1[8];     /* padding to maintain size */
 unsigned int field_3c;
} struct_0;

/* Define int256_t for the decompiled code */
typedef unsigned int int256_t[8];

/* g_403ff4 is actually a function pointer in the vtable */
typedef int (*vtable_func)(void);
extern vtable_func g_403ff4;

/* Dummy forward declarations to satisfy the decompiled code */
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
unsigned int __x86_get_pc_thunk_di(unsigned int, unsigned int *);
void __stack_chk_fail_local(void);
void _start(void);
void frame_dummy(void);

/* _ccall is a placeholder - define as a function that returns its last argument */
unsigned int _ccall(unsigned int a, unsigned int b, unsigned int c, unsigned int d) { return d; }

/* External function declarations */
int __do_global_ctors_aux(void);
unsigned int * __do_global_dtors_aux(void);
unsigned int * deregister_tm_clones(void);
unsigned int register_tm_clones(void);

int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 /* Empty stub function - decompilation artifact */
 return 0;
}


// Function: sub_40103c at 0x40103c
void sub_40103c()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return;
}


// Function: sub_4010ee at 0x4010ee
int sub_4010ee()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
typedef int (*func_ptr)(void);

int sub_4010f0()
{
 /* Empty stub - decompilation artifact, field_3c is not a valid vtable entry */
 return 0;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 /* Dummy struct for vtable access - actual code uses ebx register content */
 static struct_0 dummy_vtable;
 struct_0 *v1 = &dummy_vtable;

 return ((func_ptr)v1->field_c)();
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
typedef int (*func_ptr_10)(unsigned int);

int sub_401110(unsigned int a0)
{
 /* Dummy struct for vtable access - actual code uses ebx register content */
 static struct_0 dummy_vtable;
 struct_0 *v1 = &dummy_vtable;

 return ((func_ptr_10)v1->field_10)(a0);
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_14)();
}


// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
int sub_401130(int a0, void *a1)
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_18)();
}


// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_1c)();
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_20)();
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_24)();
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_28)();
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_2c)();
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_30)();
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 struct_0 *v1; // ebx

 return ((func_ptr)v1->field_34)();
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (char *)&ptr[2950] + 3;
}


// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = &v2->padding_0[11647];
 v0 = v4;
 if (!(&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1)
 {
 return (&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[72]))
 {
 return (*((int *)&v3->padding_0[72]))(&v3->padding_0[92], (&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1;
 }
}


// Function: sub_401277 at 0x401277
void sub_401277()
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

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[11559];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[108])
 return v5;
 if (*((int *)&ptr->padding_0[60]))
 sub_4010f0(*((int *)&ptr->padding_0[80]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[112]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[112]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[112]);
 } while (*((int *)&ptr->padding_0[112]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[108] = 1;
 return v14;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401319
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
unsigned int __x86_get_pc_thunk_di(unsigned int a0, unsigned int *a1)
{
 unsigned int v0; // eax

 v0 = a0;
 return v0;
}


// Function: div_zero_handler at 0x401321
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 /* sub_4011a0 is a vtable call that shouldn't be invoked here */
 return 0;
}


// Function: segv_handler at 0x40134c
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 segv_caught = 1;
 /* sub_4011a0 is a vtable call stub, doesn't take arguments */
 sub_4011a0();
 return 0;
}


// Function: param_fake_branch at 0x401377
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x401380
unsigned int call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x40138a
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v0; // esi
 unsigned int flag2; // ecx
 unsigned int v3; // eax

 v0 = a0;
 flag2 = v0 + 1;
 if (flag2)
 {
 /* Complex bit manipulation - simplified from decompiled code */
 v3 = v0;
 do
 {
 /* This appears to be a complicated bit manipulation - treating as no-op for now */
 v3 = 0;
 } while (v3);
 }
 return v0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x4013dd
unsigned int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x4013ec
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x40140e
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x401418
char * decrypt_string(unsigned int a0, char *a1, unsigned int a2, char a3)
{
 char *addr; // edi
 char v1; // al
 char *ptr; // edx
 char *p; // edx

 addr = a1;
 sub_401180(addr, a0, a2);
 addr[1 + a2] = 0;
 v1 = addr[0];
 if (!addr[0])
 return addr;
 ptr = addr;
 do
 {
 ptr[0] = v1 ^ a3;
 p = &ptr[1];
 v1 = p[0];
 ptr = p;
 } while (ptr[0]);
 return addr;
}


// Function: param_string_encryption at 0x40146f
extern unsigned int encrypted_0;

int param_string_encryption()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char v0[32]; // [bp-0x30]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 decrypt_string(&encrypted_0, v0, 32, 90);
 v6 = sub_401170();
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return (int)v0 + v6;
 __stack_chk_fail_local();
}


// Function: call_string_encryption at 0x4014d0
unsigned int call_string_encryption()
{
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x4014e0
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 return a1;
 return param_tail_call_optimized(a0 - 1, a1 + a0);
}


// Function: call_tail_call_optimized at 0x40150b
unsigned int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x401522
unsigned int param_non_tail_call(unsigned int a0)
{
 if (a0 <= 0)
 return 0;
 return param_non_tail_call(a0 - 1) + a0;
}


// Function: call_non_tail_call at 0x40154d
unsigned int call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x40155f
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int i)
{
 unsigned int *p; // ecx
 unsigned int idx; // eax
 unsigned int v2; // eax
 unsigned int *ptr; // edx

 p = a2;
 if (i <= 0)
 return 0;
 idx = 0;
 do
 {
 p[idx] = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (i != idx);
 v2 = 0;
 ptr = p;
 do
 {
 v2 += *(ptr);
 ptr += 1;
 } while (ptr != &p[idx]);
 return v2;
}


// Function: call_vectorized_loop at 0x4015ad
unsigned int call_vectorized_loop()
{
 unsigned long v19; // ldt
 unsigned long v20; // gdt
 unsigned short v21; // gs
 unsigned int i; // eax
 unsigned int v23; // eax
 unsigned int result; // [bp-0x70]
 unsigned int v1; // [bp-0x6c]
 unsigned int v2; // [bp-0x68]
 unsigned int v3; // [bp-0x64]
 unsigned int v4; // [bp-0x60]
 unsigned int v5; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned int v7; // [bp-0x54]
 unsigned int v8; // [bp-0x50]
 unsigned int v9; // [bp-0x4c]
 unsigned int v10; // [bp-0x48]
 unsigned int v11; // [bp-0x44]
 unsigned int v12; // [bp-0x40]
 unsigned int v13; // [bp-0x3c]
 unsigned int v14; // [bp-0x38]
 unsigned int flag1; // [bp-0x34]
 unsigned int v16[8]; // [bp-0x30]
 unsigned int v17; // [bp-0x10]

 v17 = *((int *)_ccall(v19, v20, (unsigned int)v21, 20));
 i = 0;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 8;
 v9 = 7;
 v10 = 6;
 v11 = 5;
 v12 = 4;
 v13 = 3;
 v14 = 2;
 flag1 = 1;
 do
 {
 *((unsigned int *)((char *)&v16 + i)) = 0;
 i += 4;
 } while (i < 32);
 v23 = param_vectorized_loop(&result, &v8, &v16, 8);
 if (v17 == *((int *)_ccall(v19, v20, (unsigned int)v21, 20)))
 return v23;
 __stack_chk_fail_local();
}


// Function: param_link_time_optimization at 0x401684
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: call_link_time_optimization at 0x401691
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x40169b
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero()
{
 unsigned int v0; // [bp+0x4]

 sub_401130(8, div_zero_handler);
 /* Simplified: return 10 divided by v0, or -1 on error */
 return (sub_401110(0) == 0 ? 10 / v0 : 4294967295);
}


// Function: call_division_by_zero at 0x4016eb
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero();
 v2 = param_division_by_zero();
 sub_401130(8, 0);
 return v1 + v2;
}


// Function: param_null_pointer_deref at 0x40172d
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref()
{
 unsigned int *v0; // [bp+0x4]

 sub_401130(11, segv_handler);
 return (!sub_401110(&segv_buffer) ? *(v0) : 4294967295);
}


// Function: call_null_pointer_deref at 0x401779
int call_null_pointer_deref()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v0 = 42;
 v6 = param_null_pointer_deref();
 v7 = param_null_pointer_deref();
 sub_401130(11, 0);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return v6 + v7;
 __stack_chk_fail_local();
}


// Function: param_buffer_overflow_stack at 0x4017e7
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: param_buffer_overflow_heap at 0x4017f0
unsigned int param_buffer_overflow_heap()
{
 unsigned int result; // eax
 unsigned int flag1; // edx
 unsigned int v0; // [bp+0x4]

 result = sub_401150(16);
 if (!result)
 {
 v0 = 4294967294;
 return v0;
 }
 flag1 = 33;
 do
 {
 flag1 -= 1;
 } while (flag1 != 1);
 sub_401120(result);
 return v0;
}


// Function: call_buffer_overflow at 0x40183a
unsigned int call_buffer_overflow()
{
 unsigned int v0; // [bp-0x1c]

 v0 = 20;
 return param_buffer_overflow_heap() + 10;
}


// Function: param_integer_overflow at 0x40184f
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = a0 + a1;
 if (((_ccall(15, 15, a1) != 0) && (_ccall(15, 15, a0) != 0)) && v0 < 0)
 return 4294967295;
 if ((a1 & a0) >= 0)
 {
 return v0;
 }
 else if ((char)_ccall(15, 15, v0))
 {
 return 4294967294;
 }
 else
 {
 return v0;
 }
}


// Function: call_integer_overflow at 0x401890
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x40189a
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x4018a5
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x4018af
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: call_implementation_defined at 0x4018b9
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: test_obf_opt_edge at 0x4018c3
extern unsigned int g_402008;
extern unsigned int g_402038;
extern unsigned int g_402064;
extern unsigned int g_40208c;
extern unsigned int g_4020b4;
extern unsigned int g_4020d4;
extern unsigned int g_402108;
extern unsigned int g_40212f;
extern unsigned int g_40214b;
extern unsigned int g_402167;
extern unsigned int g_402184;
extern unsigned int g_4021a0;
extern unsigned int g_4021bc;
extern unsigned int g_4021d9;
extern unsigned int g_4021f6;

int test_obf_opt_edge()
{
 sub_401160(&g_402008);
 sub_401190(1, &g_40212f, 10);
 sub_401190(1, &g_40214b, call_opaque_predicate());
 sub_401190(1, &g_402167, 225);
 sub_401190(1, &g_402184, param_string_encryption());
 sub_401190(1, &g_402038, call_tail_call_optimized());
 sub_401190(1, &g_402064, call_non_tail_call());
 sub_401190(1, &g_40208c, call_vectorized_loop());
 sub_401190(1, &g_4020b4, 20);
 sub_401190(1, &g_4021a0, call_division_by_zero());
 sub_401190(1, &g_4021bc, call_null_pointer_deref());
 sub_401190(1, &g_4021d9, call_buffer_overflow());
 sub_401190(1, &g_4020d4, 0x77359400);
 sub_401190(1, &g_4021f6, 10);
 return sub_401190(1, &g_402108, 43);
}


// Function: main at 0x401a17
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}


// Function: sub_401a2d at 0x401a2d
int sub_401a2d()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401a30
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401140();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2[1]_padding_0[227];
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401a92 at 0x401a92
void sub_401a92()
{
}



/* CRT stub function _fini removed by preprocessor */


