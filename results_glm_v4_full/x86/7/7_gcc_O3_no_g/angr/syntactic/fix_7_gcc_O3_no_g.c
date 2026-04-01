// Angr Decompilation of 7_gcc_O3_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

struct struct_0 {
    char padding[20000];
};

typedef struct struct_0 struct_0;

extern int (*g_403ff4)();
extern long _ccall(unsigned long, unsigned long, unsigned int, int, ...);
extern void* decrypt_string();
extern void frame_dummy(void);
extern void deregister_tm_clones(void);
extern int sub_4010f0(void *ptr);
extern int sub_401110();
extern void sub_401130(unsigned int a0, void (*a1)());
extern int sub_401140(unsigned int *a0);
extern void sub_401150(unsigned int a0);
extern int sub_401120(unsigned int *a0);
extern int sub_401160(unsigned int *a0);
extern void sub_401190(int a0, void *a1, unsigned int a2);
extern void sub_401180(void *a0, void *a1, unsigned int a2);
extern int sub_401170(void *a0);
extern unsigned int param_integer_overflow(unsigned int, unsigned int);
extern void __stack_chk_fail_local(void);

unsigned int __do_global_ctors_aux(void);

unsigned int __x86_get_pc_thunk_dx(void);
unsigned int __x86_get_pc_thunk_ax(void);
unsigned int __x86_get_pc_thunk_di(int);
unsigned int call_tail_call_optimized(void);
unsigned int param_non_tail_call(unsigned int);
unsigned int call_vectorized_loop(void);
unsigned int call_link_time_optimization(void);
unsigned int param_division_by_zero(unsigned int);
unsigned int param_null_pointer_deref(unsigned int *);
unsigned int param_buffer_overflow_heap(unsigned int);
unsigned int call_buffer_overflow(void);
unsigned int param_integer_overflow(unsigned int, unsigned int);
unsigned int call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int);
unsigned int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);

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
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto *ptr[2];
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
int sub_4010f0(void *ptr)
{
 goto *ptr;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
typedef struct struct_0_field_c {
 char padding_0[12];
 unsigned int field_c;
} struct_0_field_c;

int sub_401100(unsigned int *a0)
{
 struct_0_field_c *v1; // ebx

 v1 = (struct_0_field_c *)a0;
 goto *(void *)v1->field_c;
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
typedef struct struct_0_field_10 {
 char padding_0[16];
 unsigned int field_10;
} struct_0_field_10;

int sub_401110()
{
 struct_0_field_10 *v1; // ebx

 goto *(void *)v1->field_10;
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
typedef struct struct_0_field_14 {
 char padding_0[20];
 unsigned int field_14;
} struct_0_field_14;

int sub_401120(unsigned int *a0)
{
 struct_0_field_14 *v1; // ebx

 v1 = (struct_0_field_14 *)a0;
 goto *(void *)v1->field_14;
}


// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
typedef struct struct_0_field_18 {
 char padding_0[24];
 unsigned int field_18;
} struct_0_field_18;

void sub_401130(unsigned int a0, void (*a1)())
{
 struct_0_field_18 *v1; // ebx

 goto *(void *)v1->field_18;
}


// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
typedef struct struct_0_field_1c {
 char padding_0[28];
 unsigned int field_1c;
} struct_0_field_1c;

int sub_401140(unsigned int *a0)
{
 struct_0_field_1c *v1; // ebx

 v1 = (struct_0_field_1c *)a0;
 goto *(void *)v1->field_1c;
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
typedef struct struct_0_field_20 {
 char padding_0[32];
 unsigned int field_20;
} struct_0_field_20;

int sub_401150(unsigned int a0)
{
 struct_0_field_20 *v1; // ebx

 goto *(void *)v1->field_20;
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
typedef struct struct_0_field_24 {
 char padding_0[36];
 unsigned int field_24;
} struct_0_field_24;

int sub_401160(unsigned int *a0)
{
 struct_0_field_24 *v1; // ebx

 v1 = (struct_0_field_24 *)a0;
 goto *(void *)v1->field_24;
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170(void *a0)
{
 return 0;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
void sub_401180(void *a0, void *a1, unsigned int a2);


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
void sub_401190(int a0, void *a1, unsigned int a2);


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
typedef struct struct_0_field_34 {
 char padding_0[52];
 unsigned int field_34;
} struct_0_field_34;

int sub_4011a0()
{
 return 0;
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 main();
 return;
}


// Function: main at 0x4011b0
int main()
{
 char v0; // [bp+0x0]

 test_obf_opt_edge(&v0);
 return 0;
}


// Function: sub_4011c3 at 0x4011c3
void sub_4011c3()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011fc at 0x4011fc
void sub_4011fc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401200
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401204 at 0x401204
void sub_401204()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 ptr = 0;
}


// Function: sub_401243 at 0x401243
void sub_401243()
{
}


// Function: sub_401249 at 0x401249
void sub_401249()
{
 (void)register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = &v2->padding[11615];
 v0 = v4;
 if (!(&v3->padding[92] - &v3->padding[92] >> 31) + (&v3->padding[92] - &v3->padding[92] >> 2) >> 1)
 {
 return;
 }
 else if (*((int *)&v3->padding[72]))
 {
 (*((int *)&v3->padding[72]))(&v3->padding[92], (&v3->padding[92] - &v3->padding[92] >> 31) + (&v3->padding[92] - &v3->padding[92] >> 2) >> 1);
 return;
 }
 else
 {
 return;
 }
}


// Function: sub_401297 at 0x401297
void sub_401297()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
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

 v5 = (unsigned int *)(unsigned long)__x86_get_pc_thunk_di(*((int *)&v2));
 ptr = &v6->padding[11527];
 v1 = v8;
 v0 = v9;
 if (ptr->padding[108])
 return (unsigned int)v5;
 if (*((int *)&ptr->padding[60]))
 sub_4010f0(*((int *)&ptr->padding[80]));
 v10 = (struct_0 *)((char *)ptr + 224);
 v11 = *((int *)&ptr->padding[112]);
 i = (((char *)&ptr->padding[220] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptr->padding[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding[112]) = v13;
 ((void (*)(void))((char *)v10 + 4 * v13))();
 v11 = *((int *)&ptr->padding[112]);
 } while (*((int *)&ptr->padding[112]) < i);
 }
 deregister_tm_clones();
 ptr->padding[108] = 1;
 return 0;
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401339
unsigned int __x86_get_pc_thunk_dx(void)
{
 unsigned int v0; // eax

 return v0;
}

// Function: __x86.get_pc_thunk_ax at 0x401339
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int v0; // eax

 return v0;
}


// Function: __x86.get_pc_thunk_di at 0x40133d
unsigned int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401341 at 0x401341
int sub_401341()
{
 (void)div_zero_handler();
 return;
}


// Function: div_zero_handler at 0x401350
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

void div_zero_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 segv_handler(&jmp_buffer, 1, 1);
}


// Function: segv_handler at 0x401380
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

void segv_handler(void *a0, void *a1, unsigned int a2)
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 segv_caught = 1;
 sub_401190(1, &segv_buffer, 1);
}


// Function: sub_401180 at 0x401180
void sub_401180(void *a0, void *a1, unsigned int a2)
{
 return;
}


// Function: param_division_by_zero_constprop_0 at 0x4013b0
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero_constprop_0()
{
 sub_401130(8, div_zero_handler);
 if (!sub_401110(&jmp_buffer))
 goto LABEL_0x4013e6;
 return 4294967295;
LABEL_0x4013e6:
 return 4294967295;
}

// Function: param_division_by_zero_constprop_1 at 0x4013b0
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero_constprop_1()
{
 sub_401130(8, div_zero_handler);
 if (!sub_401110(&jmp_buffer))
 goto LABEL_0x4013e7;
 return 4294967295;
LABEL_0x4013e7:
 return 4294967295;
}


// Function: sub_4013e7 at 0x4013e7
void sub_4013e7()
{
 char *ptr; // eax

 *(ptr) = *(ptr) + (char)ptr;
}


// Function: sub_4013fa at 0x4013fa
int sub_4013fa()
{
 param_division_by_zero_constprop_1();
 return;
}





// Function: sub_40143f at 0x40143f
void sub_40143f(unsigned int a0)
{
 param_fake_branch();
 return;
}


// Function: param_fake_branch at 0x401440
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: sub_401449 at 0x401449
void sub_401449()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x401450
void call_fake_branch()
{
 return;
}


// Function: sub_40145a at 0x40145a
int sub_40145a()
{
 param_opaque_predicate();
 return;
}


// Function: param_opaque_predicate at 0x401460
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v0; // ebx
 unsigned int flag2; // edx
 unsigned int v2; // eax
 unsigned int flag1; // edx
 unsigned int result; // ecx

 v0 = a0;
 flag2 = v0 + 1;
 if (flag2)
 {
 v2 = v0;
 flag1 = flag2;
 do
 {
 result = flag1;
 v2 = result;
 flag1 = v2 % result;
 } while (flag1);
 if (result == 1 && v0 * 2 + v0 * v0 + 1 == flag2 * flag2)
 return v0 * 2 + 10;
 }
 return v0 * 3 + 20;
}


// Function: sub_4014ae at 0x4014ae
void sub_4014ae()
{
}


// Function: sub_4014b9 at 0x4014b9
int sub_4014b9()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x4014c0
void call_opaque_predicate()
{
 unsigned int flag1; // edx
 unsigned int v2; // eax
 unsigned int result; // ecx

 flag1 = 6;
 v2 = 5;
 do
 {
 result = flag1;
 flag1 = (int)(((signed long long)(signed int)v2 % (signed long long)(signed int)result) >> 32);
 v2 = result;
 } while (flag1);
 return;
}


// Function: sub_4014ed at 0x4014ed
void sub_4014ed(unsigned int a0)
{
 param_instruction_substitution();
 return;
}


// Function: param_instruction_substitution at 0x4014f0
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: sub_401512 at 0x401512
void sub_401512()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401520
void call_instruction_substitution()
{
 return;
}


// Function: sub_40152a at 0x40152a
int sub_40152a()
{
 decrypt_string();
 return;
}





// Function: sub_401589 at 0x401589
int sub_401589()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x401590
extern unsigned int encrypted_0;

int param_string_encryption()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 void* cur; // esi
 char v9; // dl
 char flag1; // dl
 unsigned int v11; // eax
 char v0; // [bp-0x3d]
 char v1; // [bp-0x30]
 char result; // [bp-0x11]
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 cur = &v1;
 sub_401180(&v1, &encrypted_0, 31);
 v9 = v1;
 result = 0;
 flag1 = v9;
 if (flag1)
 {
 do
 {
 cur += 1;
 *((char *)&cur[1]) = v9 ^ 90;
 v9 = *((char *)cur);
 } while (*((char *)cur));
 flag1 = v1;
 }
 v0 = flag1;
 v11 = sub_401170(&v1);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 return call_string_encryption();
 }
 return v11 + v0;
}


// Function: call_string_encryption at 0x401630
extern unsigned int encrypted_0;

int call_string_encryption()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 void* cur; // esi
 char v9; // dl
 char flag1; // dl
 unsigned int v11; // eax
 char v0; // [bp-0x3d]
 char v1; // [bp-0x30]
 char result; // [bp-0x11]
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 cur = &v1;
 sub_401180(&v1, &encrypted_0, 31);
 v9 = v1;
 result = 0;
 flag1 = v9;
 if (flag1)
 {
 do
 {
 cur += 1;
 *((char *)&cur[1]) = v9 ^ 90;
 v9 = *((char *)cur);
 } while (*((char *)cur));
 flag1 = v1;
 }
 v0 = flag1;
 v11 = sub_401170(&v1);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 return param_tail_call_optimized();
 }
 return v11 + v0;
}





// Function: sub_4016ea at 0x4016ea
void sub_4016ea()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x4016f0
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: sub_4016fa at 0x4016fa
void sub_4016fa(unsigned int a0)
{
 param_non_tail_call(a0);
 return;
}


// Function: param_non_tail_call at 0x401700
unsigned int param_non_tail_call(unsigned int i)
{
 unsigned int v0; // edx

 v0 = 0;
 if (i > 0)
 {
 do
 {
 v0 += i;
 i -= 1;
 } while (i != 1);
 }
 return v0;
}


// Function: sub_40171a at 0x40171a
void sub_40171a()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x401720
int call_non_tail_call()
{
 return 5050;
}


// Function: sub_40172a at 0x40172a
int sub_40172a()
{
 param_vectorized_loop();
 return;
}


// Function: param_vectorized_loop at 0x401730
int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int i)
{
 unsigned int *p; // edx
 unsigned int idx; // eax
 unsigned int v2; // edx
 unsigned int *ptr; // eax

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
 } while (&p[i] != ptr);
 return v2;
}


// Function: sub_40177f at 0x40177f
void sub_40177f()
{
}


// Function: sub_401788 at 0x401788
void sub_401788()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401790
unsigned int call_vectorized_loop()
{
 return 72;
}


// Function: sub_40179a at 0x40179a
void sub_40179a(unsigned int a0)
{
 param_link_time_optimization();
 return;
}


// Function: param_link_time_optimization at 0x4017a0
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_4017ad at 0x4017ad
void sub_4017ad()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x4017b0
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: sub_4017ba at 0x4017ba
int sub_4017ba()
{
 param_division_by_zero(0);
 return;
}


// Function: param_division_by_zero at 0x4017c0
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int v0)
{
 sub_401130(8, div_zero_handler);
 if (sub_401110(&jmp_buffer))
 return 4294967295;
 return (unsigned int)(((int)(((unsigned long long)0 << 32 | 10) % v0)) | ((int)(((unsigned long long)0 << 32 | 10) / v0)));
}


// Function: sub_401809 at 0x401809
void sub_401809()
{
}


// Function: sub_401817 at 0x401817
int sub_401817()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x401820
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero_constprop_1();
 v2 = param_division_by_zero_constprop_0();
 sub_401130(8, 0);
 return v1 + v2;
}


// Function: sub_401856 at 0x401856
int sub_401856()
{
 unsigned int v0;
 v0 = 0;
 param_null_pointer_deref(&v0);
 return;
}


// Function: param_null_pointer_deref at 0x401860
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *v0)
{
 sub_401130(11, segv_handler);
 return (!sub_401110(&segv_buffer) ? *(v0) : 4294967295);
}


// Function: sub_4018a5 at 0x4018a5
void sub_4018a5()
{
}


// Function: sub_4018af at 0x4018af
int sub_4018af()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x4018b0
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
 v6 = param_null_pointer_deref(&v0);
 v7 = param_null_pointer_deref(&v0);
 sub_401130(11, 0);
 if (v1 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 {
 __stack_chk_fail_local();
 return 0;
 }
 return v6 + v7;
}


// Function: param_buffer_overflow_stack at 0x401920
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401929 at 0x401929
int sub_401929()
{
 param_buffer_overflow_heap(0);
 return;
}


// Function: param_buffer_overflow_heap at 0x401930
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 4294967294;
 sub_401120(result);
 return a0;
}


// Function: sub_40196d at 0x40196d
int sub_40196d()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401970
unsigned int call_buffer_overflow()
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 8;
 sub_401120(result);
 return 30;
}


// Function: sub_4019ae at 0x4019ae
void sub_4019ae(unsigned int a0, unsigned int a1)
{
 param_integer_overflow(a0, a1);
 return;
}


// Function: param_integer_overflow at 0x4019b0
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = a0 + a1;
 if (a0 > 0 && a1 > 0)
 {
 if ((int)v0 < 0)
 return 4294967295;
 return v0;
 }
 if ((a1 & a0) >= 0)
 {
 return v0;
 }
 else if ((char)_ccall(15, 15, v0, 0, 0))
 {
 return 4294967294;
 }
 else
 {
 return v0;
 }
}


// Function: sub_4019d2 at 0x4019d2
void sub_4019d2()
{
}


// Function: sub_4019e7 at 0x4019e7
void sub_4019e7()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x4019f0
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_4019fa at 0x4019fa
void sub_4019fa(unsigned int a0)
{
 param_undefined_behavior(a0);
 return;
}


// Function: param_undefined_behavior at 0x401a00
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}

// Function: call_undefined_behavior at 0x401a10
unsigned int call_undefined_behavior()
{
 return 10;
}

// Function: param_implementation_defined at 0x401a20
unsigned int param_implementation_defined()
{
 return 43;
}

// Function: call_implementation_defined at 0x401a30
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: sub_401a0b at 0x401a0b
void sub_401a0b()
{
 call_undefined_behavior();
 return;
}


// Function: sub_401a1a at 0x401a1a
void sub_401a1a()
{
 param_implementation_defined();
 return;
}


// Function: sub_401a2a at 0x401a2a
void sub_401a2a()
{
 call_implementation_defined();
 return;
}


// Function: sub_401a3a at 0x401a3a
int sub_401a3a()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x401a40
extern unsigned int encrypted_0;
extern unsigned int g_402008;
extern unsigned int g_402038;
extern unsigned int g_402064;
extern unsigned int g_40208c;
extern unsigned int g_4020b4;
extern unsigned int g_4020d4;
extern unsigned int g_402108;
extern unsigned int g_40212f;
extern unsigned int g_402167;
extern unsigned int g_402184;
extern unsigned int g_4021a0;
extern unsigned int g_4021bc;
extern unsigned int g_4021d9;
extern unsigned int g_4021f6;

int test_obf_opt_edge()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned int v17; // eax
 unsigned int v18; // eax
 unsigned int v19; // eax
 unsigned int v20; // eax
 unsigned int flag1; // eax
 unsigned int v22; // eax
 unsigned short v8; // gs
 unsigned int flag3; // edx
 unsigned int v10; // eax
 unsigned int flag2; // ecx
 void* cur; // esi
 char v13; // dl
 char flag4; // dl
 char v0; // [bp-0x3d]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]
 char result; // [bp-0x11]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 sub_401160(&g_402008);
 sub_401190(1, &g_40212f, 10);
 flag3 = 6;
 v10 = 5;
 do
 {
 flag2 = flag3;
 flag3 = v10 % flag2;
 v10 = flag2;
 } while (flag3);
 sub_401190(1, &g_402038, 225);
 sub_401190(1, &g_402167, 225);
 cur = &v2;
 sub_401180(&v2, &encrypted_0, 31);
 v13 = v2;
 result = 0;
 flag4 = v13;
 if (flag4)
 {
 do
 {
 cur += 1;
 *((char *)&cur[1]) = v13 ^ 90;
 v13 = *((char *)cur);
 } while (*((char *)cur));
 flag4 = v2;
 }
 v0 = flag4;
 sub_401190(1, &g_402184, v0 + sub_401170(&v2));
 sub_401190(1, &g_402038, 500500);
 sub_401190(1, &g_402064, 5050);
 sub_401190(1, &g_40208c, call_vectorized_loop());
 sub_401190(1, &g_4020b4, 20);
 v17 = param_division_by_zero_constprop_1();
 v18 = param_division_by_zero_constprop_0(10);
 sub_401130(8, 0);
 sub_401190(1, &g_4021a0, v17 + v18);
 v1 = 42;
 v19 = param_null_pointer_deref(&v1);
 v20 = param_null_pointer_deref(&v1);
 sub_401130(11, 0);
 sub_401190(1, &g_4021bc, v19 + v20);
 flag1 = sub_401150(16);
 if (flag1)
 {
 sub_401120(flag1);
 v22 = 30;
 }
 else
 {
 v22 = 8;
 }
 sub_401190(1, &g_4021d9, v22);
 sub_401190(1, &g_4020d4, param_integer_overflow(0x77359400, 0x77359400));
 sub_401190(1, &g_4021f6, 10);
 sub_401190(1, &g_402108, 43);
 if (v4 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 {
 __stack_chk_fail_local();
 return __stack_chk_fail_local();
 }
 return v4 - *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
}


// Function: __stack_chk_fail_local at 0x401ca0
void __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]
 unsigned int temp; // temporary for sub_401140 argument

 v0 = v2;
 sub_401140(&temp);
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 void (*v4)(); // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2[1].padding[227];
 v4 = (void (*)())*((int *)&ptr->padding[232]);
 if (*((int *)&ptr->padding[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding[232];
 do
 {
 p = v6;
 if (v4)
 v4();
 v4 = (void (*)())*((int *)&p->padding[4]);
 v6 = &p->padding[4];
 } while (*((int *)&p->padding[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401d02 at 0x401d02
void sub_401d02()
{
}



/* CRT stub function _fini removed by preprocessor */


