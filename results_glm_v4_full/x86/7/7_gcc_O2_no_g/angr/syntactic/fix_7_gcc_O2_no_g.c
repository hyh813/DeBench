// Angr Decompilation of 7_gcc_O2_no_g
// Platform: X86

#include <stdint.h>
#include <stddef.h>

/* CRT stub function _init removed by preprocessor */
struct struct_0 {
  unsigned int padding_0[256];
};

extern int (*g_403ff4)(void);

void _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 register unsigned int *ptr asm("ebx"); // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto *(void *)ptr[2];
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
int sub_4010f0()
{
 struct struct_0 *v1; // ebx

 goto *(void **)&v1->padding_0[15];
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}





// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 sub_401110();
 return;
}





// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120();
 return;
}





// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return;
}





// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return;
}





// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}





// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
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


// Function: sub_401130 at 0x401130
int sub_401130(int a0, void *a1)
{
 return 0;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 return 0;
}


// Function: sub_401160 at 0x401160
int sub_401160(void *a0)
{
 return 0;
}


// Function: sub_401190 at 0x401190
int sub_401190(int a0, void *a1, int a2)
{
 return 0;
}


// Function: sub_401110 at 0x401110
int sub_401110(void *a0)
{
 return 0;
}


// Function: sub_401120 at 0x401120
int sub_401120(void *a0)
{
 return 0;
}


// Function: sub_401150 at 0x401150
int sub_401150(int a0)
{
 return 0;
}


// Function: sub_401180 at 0x401180
int sub_401180(void *a0, void *a1, int a2)
{
 return 0;
}


// Function: sub_40117a at 0x40117a
void sub_40117a()
{
 sub_401180(NULL, NULL, 0);
 return;
}





// Function: sub_40118a at 0x40118a
void sub_40118a()
{
 sub_401190(0, NULL, 0);
 return;
}





// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0(void *a0, int a1)
{
 struct struct_0 *v1; // ebx

 goto *(void **)&v1->padding_0[13];
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

// Forward declarations to avoid conflicting types
void param_string_encryption(unsigned int a0, char *a1, unsigned int a2, char a3);
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1);
unsigned int call_tail_call_optimized(void);
unsigned int param_non_tail_call(unsigned int i);
unsigned int call_non_tail_call(void);
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int i);
unsigned int call_vectorized_loop(void);
unsigned int param_division_by_zero(void);
int call_division_by_zero(void);
unsigned int param_null_pointer_deref(void);
int call_null_pointer_deref(void);
unsigned int param_buffer_overflow_heap(void);
unsigned int call_buffer_overflow(void);
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned int call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int a0);
unsigned int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);
unsigned int test_obf_opt_edge(void *a0);
unsigned int call_link_time_optimization(void);

// Function: sub_4011fc at 0x4011fc
void sub_4011fc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401200
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

void deregister_tm_clones(void)
{
 __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_401243 at 0x401243
void sub_401243()
{
}


// Function: sub_401249 at 0x401249
void sub_401249()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void register_tm_clones(void)
{
 __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_401297 at 0x401297
void sub_401297()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux(void)
{
 __x86_get_pc_thunk_di();
 deregister_tm_clones();
 return;
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401339
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40133d
int __x86_get_pc_thunk_di()
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401341 at 0x401341
int sub_401341()
{
 div_zero_handler();
 return;
}


// Function: div_zero_handler at 0x401350
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler(int a0)
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 sub_4011a0(&jmp_buffer, 1);
 segv_handler(&jmp_buffer, 1);
 return;
}


// Function: segv_handler at 0x401380
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler(int a0)
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 segv_caught = 1;
 sub_4011a0(&segv_buffer, 1);
 param_fake_branch(&segv_buffer, 1);
 return;
}


// Function: param_fake_branch at 0x4013b0
int param_fake_branch(void *a0, int a1)
{
 return a1;
}


// Function: sub_4013b9 at 0x4013b9
void sub_4013b9()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x4013c0
void call_fake_branch(void)
{
 return;
}


// Function: sub_4013ca at 0x4013ca
int sub_4013ca()
{
 param_opaque_predicate();
 return;
}


// Function: param_opaque_predicate at 0x4013d0
void param_opaque_predicate(void)
{
 return;
}


// Function: sub_40141e at 0x40141e
void sub_40141e()
{
}


// Function: sub_401429 at 0x401429
int sub_401429()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x401430
int call_opaque_predicate(void)
{
 unsigned int flag1; // edx
 unsigned int v2; // eax
 unsigned int result; // ecx

 flag1 = 6;
 v2 = 5;
 do
 {
 result = flag1;
 flag1 = ((int)(((uint64_t)((int64_t)v2) % (uint64_t)result) >> 32);
 v2 = result;
 } while (flag1);
 if (result == 1)
 return 20;
 return 35;
}


// Function: sub_40145d at 0x40145d
void sub_40145d(unsigned int a0)
{
 param_instruction_substitution();
 return;
}


// Function: param_instruction_substitution at 0x401460
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: sub_401482 at 0x401482
void sub_401482()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401490
int call_instruction_substitution()
{
 return 225;
}


// Function: sub_40149a at 0x40149a
int sub_40149a()
{
 decrypt_string();
 return;
}


// Function: decrypt_string at 0x4014a0
void decrypt_string(unsigned int a0, char *a1, unsigned int a2, char a3)
{
 char *p; // edi
 char v1; // al
 char *addr; // edx
 char *ptr; // edx;

 p = a1;
 p[1 + a2] = 0;
 v1 = p[0];
 if (!p[0])
 return;
 addr = p;
 do
 {
 ptr = &addr[1];
 ptr[1] = v1 ^ a3;
 v1 = ptr[0];
 addr = ptr;
 } while (addr[0]);
 return;
}


// Function: sub_4014f9 at 0x4014f9
int sub_4014f9()
{
 char buf[32];
 param_string_encryption(0, buf, 31, 90);
 return 0;
}


// Function: param_string_encryption at 0x401500
extern unsigned int encrypted_0;

unsigned int param_string_encryption(unsigned int a0, char *a1, unsigned int a2, char a3)
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 char *cur; // esi
 char v9; // dl
 char flag1; // dl
 unsigned int v11; // eax
 char v0; // [bp-0x3d]
 char v1[32]; // [bp-0x30]
 char result; // [bp-0x11]
 unsigned int v3; // [bp-0x10]

cur = v1;
sub_401180(v1, &encrypted_0, 31);
 v9 = *v1;
 result = 0;
 flag1 = v9;
 if (flag1)
 {
 do
 {
 cur += 1;
 cur[1] = v9 ^ 90;
 v9 = cur[0];
 } while (cur[0]);
 flag1 = v1;
 }
 v0 = flag1;
 v11 = sub_401170(&v1);
 return v11 + v0;
}


// Function: call_string_encryption at 0x4015a0
unsigned int call_string_encryption()
{
 char buf[32];
 return param_string_encryption(0, buf, 31, 90);
}


// Function: sub_4015a9 at 0x4015a9
void sub_4015a9(unsigned int a0, unsigned int a1)
{
 param_tail_call_optimized(a0, a1);
 return;
}


// Function: param_tail_call_optimized at 0x4015b0
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int i;

 v0 = a1;
 i = a0;
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


// Function: sub_4015ca at 0x4015ca
void sub_4015ca()
{
 call_tail_call_optimized(0, 0);
 return;
}


// Function: call_tail_call_optimized at 0x4015d0
unsigned int call_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 return param_tail_call_optimized(1000, 0);
}


// Function: sub_4015da at 0x4015da
void sub_4015da(unsigned int a0)
{
 param_non_tail_call(a0);
 return;
}


// Function: param_non_tail_call at 0x4015e0
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


// Function: sub_4015fa at 0x4015fa
void sub_4015fa()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x401600
unsigned int call_non_tail_call(void)
{
 return 5050;
}


// Function: sub_40160a at 0x40160a
void sub_40160a()
{
 unsigned int v1[4] = {1, 2, 3, 4};
 unsigned int v2[4] = {8, 7, 6, 5};
 unsigned int result[4];
 param_vectorized_loop((unsigned int)v1, (unsigned int)v2, result, 4);
 return;
}


// Function: param_vectorized_loop at 0x401610
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int i)
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


// Function: sub_40165f at 0x40165f
void sub_40165f()
{
}


// Function: sub_401668 at 0x401668
int sub_401668()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401670
unsigned int call_vectorized_loop()
{
 unsigned long v19; // ldt
 unsigned long v20; // gdt
 unsigned short v21; // gs
 unsigned int i; // eax
 unsigned int v23; // ebx
 unsigned int v24; // ecx
 char *cur; // edx
 unsigned int idx; // eax
 unsigned int v27; // edx
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
 v16[i/4] = 0;
 i += 4;
 } while (i <= 28);
 v23 = 8;
 v24 = 1;
 cur = (char *)v16;
 idx = 0;
 while (1)
 {
 v16[idx] = v24 + v23;
 idx += 1;
 if (idx == 8)
 break;
 v24 = (&result)[idx];
 v23 = (&v8)[idx];
 }
 v27 = 0;
 do
 {
 v27 += *(cur);
 cur += 1;
 } while ((void *)cur != (void *)&v17);
 return v27;
}


// Function: sub_401724 at 0x401724
void sub_401724()
{
}


// Function: param_link_time_optimization at 0x401770
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_40177d at 0x40177d
void sub_40177d()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x401780
unsigned int call_link_time_optimization(void)
{
 return 20;
}


// Function: sub_40178a at 0x40178a
void sub_40178a()
{
 param_division_by_zero();
 return;
}


// Function: param_division_by_zero at 0x401790
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero()
{
 sub_401130(8, div_zero_handler);
 return (!sub_401110(&jmp_buffer) ? 10 / 0 : 4294967295);
}


// Function: sub_4017d9 at 0x4017d9
void sub_4017d9()
{
}


// Function: sub_4017e7 at 0x4017e7
int sub_4017e7()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x4017f0
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero();
 v2 = param_division_by_zero();
 sub_401130(8, 0);
 return v1 + v2;
}


// Function: sub_401831 at 0x401831
void sub_401831()
{
 param_null_pointer_deref();
 return;
}


// Function: param_null_pointer_deref at 0x401840
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref()
{
 sub_401130(11, segv_handler);
 return (!sub_401110(&segv_buffer) ? *(unsigned int *)0 : 4294967295);
}


// Function: sub_401885 at 0x401885
void sub_401885()
{
}


// Function: sub_40188f at 0x40188f
int sub_40188f()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x401890
int call_null_pointer_deref()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v0 = 42;
 v6 = param_null_pointer_deref();
 v7 = param_null_pointer_deref();
 sub_401130(11, 0);
 return v6 + v7;
}


// Function: param_buffer_overflow_stack at 0x401900
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401909 at 0x401909
void sub_401909()
{
 param_buffer_overflow_heap();
 return;
}


// Function: param_buffer_overflow_heap at 0x401910
unsigned int param_buffer_overflow_heap(void)
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 4294967294;
 sub_401120((void *)result);
 return result;
}


// Function: sub_40194d at 0x40194d
int sub_40194d()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401950
unsigned int call_buffer_overflow()
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 8;
 sub_401120((void *)result);
 return 30;
}


// Function: sub_40198e at 0x40198e
void sub_40198e(unsigned int a0, unsigned int a1)
{
 param_integer_overflow(a0, a1);
 return;
}


// Function: param_integer_overflow at 0x401990
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
 if (((int)a1 & (int)a0) >= 0)
 {
 return v0;
 }
 else if ((char)(0))
 {
 return 4294967294;
 }
 else
 {
 return v0;
 }
}


// Function: sub_4019b2 at 0x4019b2
void sub_4019b2()
{
}


// Function: sub_4019c7 at 0x4019c7
void sub_4019c7()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x4019d0
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_4019da at 0x4019da
void sub_4019da(unsigned int a0)
{
 param_undefined_behavior(a0);
 return;
}


// Function: param_undefined_behavior at 0x4019e0
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4019eb at 0x4019eb
void sub_4019eb()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x4019f0
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: sub_4019fa at 0x4019fa
void sub_4019fa()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x401a00
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: sub_401a0a at 0x401a0a
void sub_401a0a()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x401a10
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: sub_401a1a at 0x401a1a
int sub_401a1a()
{
 char v0;
 test_obf_opt_edge(&v0);
 return 0;
}


// Function: test_obf_opt_edge at 0x401a20
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
extern unsigned int encrypted_0;

unsigned int test_obf_opt_edge(void *a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned int v13; // eax
 unsigned int v14; // eax
 unsigned int result; // eax
 unsigned int v16; // eax
 unsigned short v5; // gs
 unsigned int flag2; // edx
 unsigned int v7; // eax
 unsigned int flag1; // ecx
 unsigned int v11; // eax
 unsigned int v12; // eax
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 sub_401160(&g_402008);
 sub_401190(1, &g_40212f, 10);
 flag2 = 6;
 v7 = 5;
 do
 {
 flag1 = flag2;
 flag2 = ((int)(((uint64_t)((int64_t)v7) % (uint64_t)flag1) >> 32);
 v7 = flag1;
 } while (flag2);
 sub_401190(0, 0, 0);
 sub_401190(1, &g_402167, 225);
 {
   char buf[32];
   sub_401190(1, &g_402184, param_string_encryption(0, buf, 31, 90));
 }
 sub_401190(1, &g_402038, 500500);
 sub_401190(1, &g_402064, 5050);
 sub_401190(1, &g_40208c, call_vectorized_loop());
 sub_401190(1, &g_4020b4, 20);
 v11 = param_division_by_zero();
 v12 = param_division_by_zero();
 sub_401130(8, 0);
 sub_401190(1, &g_4021a0, v11 + v12);
 v0 = 42;
 v13 = param_null_pointer_deref();
 v14 = param_null_pointer_deref();
 sub_401130(11, 0);
 sub_401190(1, &g_4021bc, v13 + v14);
 result = sub_401150(16);
 if (result)
 {
 sub_401120((void *)result);
 v16 = 30;
 }
 else
 {
 v16 = 8;
 }
 sub_401190(1, &g_4021d9, v16);
 sub_401190(1, &g_4020d4, 0x77359400);
 sub_401190(1, &g_4021f6, 10);
 sub_401190(1, &g_402108, 43);
 return 0;
}


// Function: __stack_chk_fail_local at 0x401c40
void __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401140();
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux(void)
{
 __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_401ca2 at 0x401ca2
void sub_401ca2()
{
}



/* CRT stub function _fini removed by preprocessor */


