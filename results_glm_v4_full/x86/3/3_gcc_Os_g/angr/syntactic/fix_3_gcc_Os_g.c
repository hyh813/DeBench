// Angr Decompilation of 3_gcc_Os_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    char padding_0[20000];
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern void (*g_405ff4)();

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]
 void (*jump_target)();

 v0 = ptr[1];
 jump_target = (void (*)())ptr[2];
 if (jump_target)
 jump_target();
 return 0;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 sub_401030(8);
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 sub_401030(16);
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 sub_401030(24);
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 sub_401030(32);
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 sub_401030(40);
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 sub_401030(48);
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 sub_401030(56);
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 sub_401030(64);
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
}


// Function: sub_4010d0 at 0x4010d0
void sub_4010d0()
{
 sub_401030(72);
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0()
{
 sub_401030(80);
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
 return;
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
 return;
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
 return;
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return;
}


// Function: sub_40111e at 0x40111e
int sub_40111e()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
typedef struct struct_1_local {
 char padding_0[72];
 unsigned int field_48;
} struct_1_local;

int sub_401120()
{
 struct_1_local *v1; // ebx
 v1 = 0;
 /* goto v1->field_48; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
typedef struct struct_2 {
 char padding_0[12];
 unsigned int field_c;
} struct_2;

int sub_401130()
{
 struct_2 *v1; // ebx
 v1 = 0;
 /* goto v1->field_c; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
typedef struct struct_3 {
 char padding_0[16];
 unsigned int field_10;
} struct_3;

int sub_401140(void *dest, const void *src, unsigned int n)
{
 if (dest && src && n) {
 unsigned char *d = (unsigned char *)dest;
 const unsigned char *s = (const unsigned char *)src;
 while (n--) {
 *d++ = *s++;
 }
 }
 return 0;
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
typedef struct struct_4 {
 char padding_0[20];
 unsigned int field_14;
} struct_4;

int sub_401150()
{
 struct_4 *v1; // ebx
 v1 = 0;
 /* goto v1->field_14; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
typedef struct struct_5 {
 char padding_0[24];
 unsigned int field_18;
} struct_5;

int sub_401160(const void *s1, const void *s2, unsigned int n)
{
 if (s1 && s2 && n) {
 const unsigned char *p1 = (const unsigned char *)s1;
 const unsigned char *p2 = (const unsigned char *)s2;
 while (n--) {
 if (*p1 != *p2) {
 return *p1 - *p2;
 }
 p1++;
 p2++;
 }
 }
 return 0;
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
typedef struct struct_6 {
 char padding_0[28];
 unsigned int field_1c;
} struct_6;

int sub_401170()
{
 struct_6 *v1; // ebx
 v1 = 0;
 /* goto v1->field_1c; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
typedef struct struct_7 {
 char padding_0[32];
 unsigned int field_20;
} struct_7;

int sub_401180()
{
 struct_7 *v1; // ebx
 v1 = 0;
 /* goto v1->field_20; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
typedef struct struct_8 {
 char padding_0[36];
 unsigned int field_24;
} struct_8;

int sub_401190()
{
 struct_8 *v1; // ebx
 v1 = 0;
 /* goto v1->field_24; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
typedef struct struct_9 {
 char padding_0[40];
 unsigned int field_28;
} struct_9;

int sub_4011a0()
{
 struct_9 *v1; // ebx
 v1 = 0;
 /* goto v1->field_28; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0();
 return;
}


// Function: sub_4011b0 at 0x4011b0
typedef struct struct_10 {
 char padding_0[44];
 unsigned int field_2c;
} struct_10;

int sub_4011b0()
{
 struct_10 *v1; // ebx
 v1 = 0;
 /* goto v1->field_2c; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0();
 return;
}


// Function: sub_4011c0 at 0x4011c0
typedef struct struct_11 {
 char padding_0[48];
 unsigned int field_30;
} struct_11;

int sub_4011c0()
{
 struct_11 *v1; // ebx
 v1 = 0;
 /* goto v1->field_30; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
typedef struct struct_12 {
 char padding_0[52];
 unsigned int field_34;
} struct_12;

int sub_4011d0()
{
 struct_12 *v1; // ebx
 v1 = 0;
 /* goto v1->field_34; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0();
 return;
}


// Function: sub_4011e0 at 0x4011e0
typedef struct struct_13 {
 char padding_0[56];
 unsigned int field_38;
} struct_13;

int sub_4011e0()
{
 struct_13 *v1; // ebx
 v1 = 0;
 /* goto v1->field_38; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
typedef struct struct_14 {
 char padding_0[60];
 unsigned int field_3c;
} struct_14;

int sub_4011f0()
{
 struct_14 *v1; // ebx
 v1 = 0;
 /* goto v1->field_3c; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return;
}


// Function: sub_401200 at 0x401200
typedef struct struct_15 {
 char padding_0[64];
 unsigned int field_40;
} struct_15;

int sub_401200()
{
 struct_15 *v1; // ebx
 v1 = 0;
 /* goto v1->field_40; */ /* invalid decompilation output */
 return 0;
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 main();
 return;
}


// Function: main at 0x401210
int main()
{
 char v0; // [bp+0x0]

 test_stack_memory(&v0);
 test_heap_memory(&v0);
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_401232 at 0x401232
void sub_401232()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40126c at 0x40126c
void sub_40126c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401270
void __x86_get_pc_thunk_bx()
{
 return;
}


// Forward declarations
unsigned int deregister_tm_clones();
unsigned int register_tm_clones();
unsigned int __do_global_dtors_aux();
int __do_global_ctors_aux();
void frame_dummy();
void _start();
unsigned int extern_function(unsigned int a0);
unsigned int __x86_get_pc_thunk_ax();
unsigned int __x86_get_pc_thunk_cx();
unsigned int __x86_get_pc_thunk_dx();
struct_0 *__x86_get_pc_thunk_dx_ptr();
int sub_4011e0(unsigned int, const char*, ...);

// Function: sub_401274 at 0x401274
void sub_401274()
{
 deregister_tm_clones();
 return;
}

unsigned int deregister_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int *ptr; // edx

 v2 = __x86_get_pc_thunk_dx();
 return (unsigned int)((char *)&v2->padding_0[4963] + 3);
}


// Function: sub_4012b3 at 0x4012b3
void sub_4012b3()
{
}


// Function: sub_4012b9 at 0x4012b9
void sub_4012b9()
{
 register_tm_clones();
 return;
}

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401307 at 0x401307
void sub_401307()
{
 __do_global_dtors_aux();
 return;
}

unsigned int __do_global_dtors_aux()
{
 unsigned int *v2; // eax
 unsigned int *v3; // ecx
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
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
 char v2_local; // [bp-0x8]
 char v3_local; // [bp+0x0]
 struct_0 *v6_ptr; // helper for decompilation
 struct_0 *ptrv; // helper for decompilation

 v5 = __x86_get_pc_thunk_di(*((int *)&v2));
 v6_ptr = (struct_0 *)__x86_get_pc_thunk_dx();
 ptr = &v6_ptr->padding_0[19595];
 ptrv = ptr;
 v1 = v8;
 v0 = v9;
 if (ptrv->padding_0[108])
 return v5;
 if (*((int *)&ptrv->padding_0[72]))
 sub_401120(*((int *)&ptrv->padding_0[92]));
 v10 = &ptrv->padding_0[224];
 v11 = *((int *)&ptrv->padding_0[112]);
 i = ((unsigned int)(&ptrv->padding_0[220] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptrv->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptrv->padding_0[112]) = v13;
 ((void (*)())(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptrv->padding_0[112]);
 } while (*((int *)&ptrv->padding_0[112]) < i);
 }
 v14 = deregister_tm_clones();
 ptrv->padding_0[108] = 1;
 return v14;
}
void sub_40139a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */






// Function: __x86.get_pc_thunk_di at 0x4013ad
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: double_value at 0x4013b1
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x4013bf
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x4013d0
unsigned int local_array(unsigned int a0)
{
 unsigned int v2; // edx
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int idx; // eax
 unsigned int v7; // eax
 unsigned long v8; // [bp-0x38]
 char v0; // [bp-0x24]
 unsigned int v1; // [bp-0x10]

 v2 = 0;
 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 idx = 0;
 do
 {
 (&v8)[idx] = v2;
 idx += 1;
 v2 += a0;
 } while (idx != 10);
 v7 = *((int *)&v0);
 if (v1 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: local_struct at 0x40140a
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x401417
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x40142e
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x40143e
int large_stack_frame()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int i; // eax
 unsigned int v7; // eax
 unsigned long v8; // [bp-0x810]
 char v0; // [bp-0x410]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 i = 0;
 do
 {
 *((char *)&v8 + i) = i;
 i += 1;
 } while (i != 0x800);
 v7 = v0;
 if (v1 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: vla_stack at 0x40147f
extern char g_401507;

 unsigned int vla_stack(unsigned int i)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v5; // edx
 unsigned int v6; // ecx
 unsigned int result; // edx
 unsigned int ptr; // ecx
 unsigned int idx; // edx
 unsigned long v10; // [bp-0x101c]
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]
 void *vvar_39;
 void *vvar_72;
 char *vvar_2;

 vvar_39 = &v0;
 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 v5 = 4294967295;
 if (i - 1 <= 999)
 {
 v6 = i * 4 + 15;
 while ((char *)&v10 != (char *)((unsigned long)(&v0) - (v6 & 0xfffff000)))
 ;
 result = (v6 & 0xfffffff0) & 4095;
 vvar_72 = (void *)((char *)&v10 - result);
 if (result)
 *((int *)(&v10 - result)) = *((int *)(&v10 - result));
 ptr = (unsigned int)((char *)&v10 - result);
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 2;
 idx += 1;
 } while (i != idx);
 v5 = *((int *)(ptr + (i >> 1) * 4));
 }
 if (v1 != *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 {
 __stack_chk_fail_local();
 }
 return v5;
}


// Function: alloca_usage at 0x40150e
extern char g_401594;

unsigned int alloca_usage(unsigned int i)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v5; // edx
 unsigned int v6; // ecx
 unsigned int result; // edx
 unsigned int idx; // edx
 unsigned int ptr; // ecx
 unsigned long v10; // [bp-0x101c]
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]
 void *vvar_39;
 void *vvar_71;
 void *vvar_2;

 vvar_39 = &v0;
 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 v5 = 4294967295;
 if (i > 0)
 {
 v6 = i * 4 + 27;
 while (&v10 != &(&v0)[-1 * (v6 & 0xfffff000)])
 ;
 result = v6 & 0xfffffff0 & 4095;
 vvar_71 = (char *)&v10 - result;
 if (result)
 *((int *)(vvar_2 + result - 4)) = *((int *)(vvar_2 + result - 4));
 idx = 0;
 ptr = (unsigned int)((char *)vvar_71 + 15) & 0xfffffff0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 idx += 1;
 } while (i != idx);
 v5 = *((int *)(ptr + (i >> 1) * 4));
 }
 if (v1 != *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 {
 *((char **)(vvar_2 - 4)) = &g_401594;
 __stack_chk_fail_local();
 }
 return v5;
}


// Function: stack_alias at 0x40159b
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x4015a5
extern unsigned int g_403008;

int test_stack_memory()
{
 sub_4011c0(&g_403008);
 sub_4011e0(1, "MEM-L1-01 (local_vars): %d\n", 20);
 sub_4011e0(1, "MEM-L1-02 (local_array): %d\n", local_array(2));
 sub_4011e0(1, "MEM-L1-03 (local_struct): %d\n", 15);
 sub_4011e0(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 sub_4011e0(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 sub_4011e0(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 sub_4011e0(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 sub_4011e0(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 return sub_4011e0(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x40169f
unsigned int heap_basic(unsigned int a0)
{
 unsigned int *ptr; // ecx
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x20]

 ptr = (unsigned int *)sub_4011b0(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 ptr[idx] = idx * 2;
 }
 v0 = ptr[(a0 / 2)];
 sub_401150(ptr);
 return v0;
}


// Function: heap_calloc at 0x40170b
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int ptr; // eax
 unsigned int idx; // edx
 unsigned int v2; // edi

 ptr = sub_401200(a0, 4);
 if (!ptr)
 return 4294967295;
 idx = 0;
 for (v2 = 0; idx < a0; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 sub_401150(ptr);
 return v2;
}


// Function: heap_realloc at 0x40175c

typedef struct struct_realloc_result {
 char padding_0[8];
 unsigned int field_8;
} struct_realloc_result;

unsigned int heap_realloc()
{
 unsigned int *ptr; // esi
 struct_realloc_result *result; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v2; // [bp-0x14]

 ptr = (unsigned int *)sub_4011b0(20);
 if (!ptr)
 return 4294967295;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 result = (struct_realloc_result *)sub_4011a0(ptr, 40, 4294967295, 4294967295);
 if (!result)
 {
 sub_401150(ptr);
 return 4294967294;
 }
 v0 = (result->field_8 == 3 ? 50 : 4294967293);
 v2 = v0;
 sub_401150(v2);
 return v0;
}


// Function: heap_array at 0x4017f8
unsigned int heap_array(unsigned int a0)
{
 unsigned int ptr; // ecx
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x20]

 ptr = sub_4011b0(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 }
 v0 = *((int *)(ptr + (a0 / 2) * 4));
 sub_401150(ptr);
 return v0;
}


// Function: heap_struct at 0x401864
unsigned int heap_struct(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_4011b0(8);
 if (!result)
 return 4294967295;
 sub_401150(result);
 return a0 * 3;
}


// Function: heap_nested at 0x4018a5
typedef struct struct_heap_nested_node {
 unsigned int field_0;
 struct struct_heap_nested_inner *field_4;
} struct_heap_nested_node;

typedef struct struct_heap_nested_param {
 unsigned int field_0;
 struct struct_heap_nested_inner2 *field_4;
} struct_heap_nested_param;

typedef struct struct_heap_nested_inner {
 unsigned int field_0;
 unsigned int field_4;
} struct_heap_nested_inner;

typedef struct struct_heap_nested_inner2 {
 unsigned int field_0;
 unsigned int field_4;
} struct_heap_nested_inner2;

unsigned int heap_nested(struct_heap_nested_param **addr)
{
 struct_heap_nested_node *ptr; // esi
 unsigned int *p; // eax

 ptr = sub_4011b0(8);
 *(addr) = ptr;
 if (!ptr)
 return 4294967295;
 ptr->field_0 = 10;
 p = sub_4011b0(8);
 ptr->field_4 = p;
 if (p)
 {
 p[0] = 20;
 p[1] = 0;
 return 0;
 }
 sub_401150(ptr);
 return 4294967294;
}


// Function: linked_list_heap at 0x401917

typedef struct struct_linked_list_node {
 unsigned int field_0;
 struct struct_linked_list_node *field_4;
} struct_linked_list_node;

#define NULL ((void*)0)

 unsigned int linked_list_heap()
{
 struct_linked_list_node *p; // eax
 unsigned int v3; // edi
 struct_linked_list_node *result; // esi
 struct_linked_list_node *ptr3; // esi
 struct_linked_list_node *v6; // esi
 unsigned int cur; // eax
 struct_linked_list_node *ptr; // edx
 struct_linked_list_node *ptr4; // esi
 struct_linked_list_node *v11; // esi
 struct_linked_list_node *addr; // [bp-0x20]

 p = NULL;
 v3 = 0;
 result = NULL;
 while (1)
 {
 addr = p;
 p = (struct_linked_list_node *)sub_4011b0(8);
 if (!p)
 {
 while (1)
 {
 ptr3 = result;
 if (!ptr3)
 break;
 v6 = ptr3->field_4;
 sub_401150(ptr3);
 result = v6;
 }
 return 4294967295;
 }
 else
 {
 p->field_0 = v3;
 p->field_4 = 0;
 if (result)
 addr->field_4 = p;
 else
 result = p;
 v3 += 10;
 if (v3 == 50)
 {
 cur = 0;
 ptr = result;
 do
 {
 cur += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 do
 {
 ptr4 = result;
 v11 = ptr4->field_4;
 sub_401150(ptr4);
 result = v11;
 } while (ptr4->field_4);
 return cur;
 }
 }
 }
}


// Function: create_tree_node at 0x4019b4
void *create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // eax

 ptr = (unsigned int *)sub_4011b0(12);
 if (!ptr)
 return 0;
 ptr[1] = 0;
 ptr[2] = 0;
 ptr[0] = a0;
 return ptr;
}


// Function: tree_heap_traversal at 0x4019f0

typedef struct struct_tree_node {
 unsigned int field_0;
 struct struct_tree_child1 *field_4;
 struct struct_tree_child2 *field_8;
} struct_tree_node;

typedef struct struct_tree_child1 {
 unsigned int field_0;
} struct_tree_child1;

typedef struct struct_tree_child2 {
 unsigned int field_0;
} struct_tree_child2;

unsigned int tree_heap_traversal()
{
 struct_tree_node *ptr; // esi
 struct_tree_node *addr; // eax
 struct_tree_node *p; // edx
 unsigned int v0; // [bp-0x10]

 ptr = (struct_tree_node *)create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ptr->field_4 = (struct_tree_child1 *)create_tree_node(20);
 addr = (struct_tree_node *)create_tree_node(30);
 p = (struct_tree_node *)ptr->field_4;
 ptr->field_8 = (struct_tree_child2 *)addr;
 if (p)
 {
 if (!addr)
 {
 sub_401150(p);
 }
 else
 {
 v0 = p->field_0 + ptr->field_0 + addr->field_0;
 sub_401150(p);
 sub_401150(ptr->field_8);
 sub_401150(ptr);
 return v0;
 }
 }
 if (ptr->field_8)
 sub_401150(ptr->field_8);
 sub_401150(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x401aac
unsigned int memory_leak(unsigned int a0)
{
 unsigned int ptr; // ecx
 unsigned int idx; // eax

 ptr = sub_4011b0(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 }
 return *((int *)(ptr + (a0 / 2) * 4));
}


// Function: dangling_pointer at 0x401b01
unsigned int dangling_pointer()
{
 unsigned int *result; // esi

 result = sub_4011b0(4);
 if (!result)
 return 4294967295;
 sub_4011e0(1, "value before free: %d\n", 42, 4294967295);
 sub_401150(result);
 return *(result);
}


// Function: double_free at 0x401b50
unsigned int double_free(unsigned int *a0)
{
 unsigned int result; // esi

 if (a0)
 return *(a0);
 result = sub_4011b0(4);
 if (!result)
 return 4294967295;
 sub_401150(result);
 sub_401150(result);
 return 4294967294;
}


// Function: heap_overflow at 0x401ba5
unsigned int heap_overflow()
{
 unsigned int *ptr; // eax
 unsigned int idx; // edx

 ptr = sub_4011b0(40);
 if (!ptr)
 return 4294967295;
 idx = 0;
 do
 {
 ptr[idx] = idx * 100;
 idx += 1;
 } while (idx != 11);
 sub_401150(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x401bf2

typedef struct struct_test_heap_result {
 char padding_0[4];
 unsigned int field_4;
} struct_test_heap_result;

extern unsigned int g_403151;
extern unsigned int g_4032a9;
extern unsigned int g_4032b9;
extern unsigned int g_4032de;
extern unsigned int g_40331f;

int test_heap_memory()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned int v14; // ecx
 unsigned int flag1; // eax
 unsigned int v19; // edx
 unsigned int v21; // eax
 unsigned int v22; // eax
 unsigned int v23; // eax
 unsigned short v6; // gs
 struct_0 *result; // [bp-0x18]
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 sub_4011c0(&g_403151);
 sub_4011e0(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 sub_4011e0(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 sub_4011e0(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 sub_4011e0(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 sub_4011e0(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 sub_4011e0(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_heap_nested_param**)&result));
 if (result)
 {
 sub_401150(((struct_heap_nested_node*)result)->field_4);
 sub_401150(result);
 }
 sub_4011e0(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap(), v14);
 sub_4011e0(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 sub_4011e0(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 sub_4011e0(1, "HEAP-L3-04 (dangling_pointer): ");
 flag1 = sub_4011f0(1, "HEAP-L3-04 (dangling_pointer): ");
 if (!flag1)
 {
 sub_4011e0(1, &g_4032a9, dangling_pointer(), v19);
 v21 = sub_4011d0(0);
 if ((char)_ccall(14, 15, flag1, 0, 0))
 goto LABEL_401dbc;
LABEL_401d7c:
 sub_401190(v21, &v1, 0, v14);
 if (!((char)v1 & 127))
 {
 v22 = &g_4032b9;
 }
 else
 {
 if ((char)_ccall(14, 19, (unsigned int)(((char)v1 & 127) - 0), 0, _ccall(15, v1 & 127, 0, 0)))
 goto LABEL_401dcb;
 v22 = &g_4032de;
 }
 sub_4011e0(1, v22);
 }
 else
 {
 v21 = flag1;
 if (!((char)_ccall(14, 15, v21, 0, 0)))
 goto LABEL_401d7c;
LABEL_401dbc:
 sub_401180(&g_40331f);
 }
LABEL_401dcb:
 v23 = v2 - *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 v23 = __stack_chk_fail_local();
 return v23;
}


// Function: global_var_access at 0x401de4
typedef struct struct_0_global_var_access {
 char padding_0[16951];
 unsigned int field_4237;
} struct_0_global_var_access;

int global_var_access()
{
 struct_0_global_var_access *v2; // edx
 struct_0_global_var_access *v1; // edx
 unsigned int v3; // eax

 v2 = __x86_get_pc_thunk_dx();
 v1 = &v2->padding_0[16827];
 v3 = *((int *)&v1->padding_0[124]);
 *((unsigned int *)&v1->padding_0[124]) = v3 + 1;
 return v3 + 1;
}


// Function: global_var_read at 0x401e01
unsigned int global_var_read()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 16922)) * 2;
}


// Function: global_array_access at 0x401e18
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx();
 if (a0 > 9)
 return 4294967295;
 return *((int *)(v0 + 16775 + a0 * 4 - 10536));
}


// Function: static_local at 0x401e3e
typedef struct struct_0_static_local {
 char padding_0[16853];
 unsigned int field_41d5;
} struct_0_static_local;

unsigned int static_local(unsigned int a0)
{
 struct_0 *v0; // edx
 struct_0 *ptr; // edx
 unsigned int v2; // eax

 __x86_get_pc_thunk_dx();
 ptr = &v0->padding_0[16737];
 v2 = 0;
 if (!a0)
 v2 = *((int *)&ptr->padding_0[116]) + 1;
 *((unsigned int *)&ptr->padding_0[116]) = v2;
 return v2;
}


// Function: call_static_func at 0x401e67
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x401e76
int access_extern_global()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 16785)) + 100;
}


// Function: call_extern_func at 0x401e90
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: read_const_data at 0x401eb2
typedef struct struct_1_read_const_data {
 char padding_0[16721];
 struct struct_0_read_const_data *field_4151;
} struct_1_read_const_data;

typedef struct struct_0_read_const_data {
 char padding_0[4];
 char field_4;
} struct_0_read_const_data;

int read_const_data()
{
 struct_1_read_const_data *v1; // eax

 v1 = __x86_get_pc_thunk_ax();
 return *((char *)(*((int *)&(&v1->padding_0)[1]) + 4)) + 42;
}


// Function: access_bss_var at 0x401ece
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401ed5
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401edc
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401ee6
typedef struct struct_0_set_file_static {
 char padding_0[16665];
 unsigned int field_4119;
} struct_0_set_file_static;

struct_0_set_file_static * set_file_static(unsigned int a0)
{
 *((unsigned int *)(__x86_get_pc_thunk_ax() + 16665)) = a0;
 return __x86_get_pc_thunk_ax() + 16569;
}


// Function: get_file_static at 0x401f02
int get_file_static()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 16637));
}


// Function: set_global_callback at 0x401f17
typedef struct struct_0_set_global_callback {
 char padding_0[16640];
 unsigned int field_4100;
} struct_0_set_global_callback;

struct_0_set_global_callback * set_global_callback(unsigned int a0)
{
 *((unsigned int *)(__x86_get_pc_thunk_ax() + 0x4100)) = a0;
 return __x86_get_pc_thunk_ax() + 16520;
}


// Function: call_global_callback at 0x401f33
unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax();
 if (!*((int *)(__x86_get_pc_thunk_ax() + 16612)))
 return 4294967295;
 return ((unsigned int (*)(unsigned int))(*((int *)(__x86_get_pc_thunk_ax() + 16612))))(a0);
}


// Function: global_heap_store at 0x401f5c
unsigned int global_heap_store(unsigned int *ptr)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (ptr)
 v0 = *(ptr);
 return v0;
}


// Function: static_complex_init at 0x401f71
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401f7b
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401f89
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401f93
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int g_40332a;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

int test_static_global()
{
 sub_4011c0(&g_40332a);
 sub_4011e0(1, "STM-L1-01 (global_var_access): %d\n", global_var_access());
 sub_4011e0(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 sub_4011e0(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 sub_4011e0(1, "STM-L1-03 (static_local): %d\n", 1);
 counter_1 = counter_1 + 1;
 sub_4011e0(1, "STM-L1-03 (static_local): %d\n", counter_1);
 sub_4011e0(1, "STM-L1-04 (call_static_func): %d\n", 11);
 sub_4011e0(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 sub_4011e0(1, "STM-L2-02 (call_extern_func): %d\n", (unsigned int)call_extern_func());
 sub_4011e0(1, "STM-L2-03 (read_const_data): %d\n", read_const_data());
 sub_4011e0(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 sub_4011e0(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 sub_4011e0(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 file_scope_static = 50;
 sub_4011e0(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 sub_4011e0(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));
 sub_4011e0(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 sub_4011e0(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 sub_4011e0(1, "STM-L3-01 (tls_access): %d\n", 20);
 return sub_4011e0(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: memop_memset at 0x40216c
unsigned int memop_memset(char *a0, unsigned int a1, char a2)
{
 char *result; // edx
 char *cur; // edi

 result = a0;
 if (result && a1)
 {
 for (cur = result; a1; cur += 1)
 {
 a1 -= 1;
 *(cur) = a2;
 }
 return *(result);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x402194
unsigned int memop_memcpy(char *a0, char *a1, unsigned int a2)
{
 unsigned int v0; // edx
 char *flag1; // eax
 char *i; // esi
 char *cur; // edi
 unsigned int result; // ecx

 v0 = a2;
 flag1 = a0;
 i = a1;
 if (v0 && i && flag1)
 {
 cur = flag1;
 for (result = v0; result; i += 1)
 {
 result -= 1;
 *(cur) = *(i);
 cur += 1;
 }
 return *((int *)&flag1[4 + (v0 & 0xfffffffc)]);
 }
 return 4294967295;
}


// Function: memop_memmove at 0x4021d0

typedef struct struct_memmove_param {
 char padding_0[1];
 char field_1;
} struct_memmove_param;

unsigned int memop_memmove(struct_memmove_param *a0, unsigned int a1)
{
 unsigned int v0; // edx

 if (a0 && a1 > 1)
 {
 sub_401140((struct struct_0 *)&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x402213
unsigned int memop_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // ecx
 unsigned int v2; // edx
 char v0; // [bp-0xd]

 v0 = !a1;
 if (a2 && !v0 && a0)
 {
 v2 = sub_401160(a0, a1, a2);
 if (v2 > 0)
 return 1;
 return -(_ccall(5, 15, v2, 0, 0) & 255);
 }
 return 0;
}


// Function: memop_bzero at 0x402271
unsigned int memop_bzero(char *a0, unsigned int a1)
{
 char *result; // edx
 char *cur; // edi

 result = a0;
 if (!result)
 return 4294967295;
 for (cur = result; a1; cur += 1)
 {
 a1 -= 1;
 *(cur) = 0;
 }
 return *(result);
}


// Function: memop_bcopy at 0x402292
unsigned int memop_bcopy(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned int v0; // edx

 if (a2 && a1 && a0)
 {
 sub_401140(a1, a0, a2);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x4022e1
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

unsigned int memop_unaligned_access(struct_0 *ptr)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (ptr)
 v0 = *((int *)&ptr->padding_0[1]);
 return v0;
}


// Function: memop_memory_barrier at 0x4022f7
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v1; // eax
 char v0; // [bp-0x4]

 v1 = 4294967295;
 if (ptr)
 {
 v0 = 0;
 v1 = *(ptr) * 2;
 }
 return v1;
}


// Function: test_memory_op_functions at 0x402315
extern unsigned int g_40358c;

int test_memory_op_functions()
{
 char *cur; // edi
 unsigned long v17; // ldt
 unsigned int flag4; // ecx
 unsigned int v30; // edx
 unsigned int v31; // eax
 unsigned long v18; // gdt
 unsigned short v19; // gs
 unsigned int *i; // esi
 unsigned int flag3; // ecx
 unsigned int *node; // edi
 char *k; // esi
 unsigned int flag5; // ecx
 char *iter; // edi
 unsigned int v0[1]; // [bp-0x184]
 unsigned int flag1; // [bp-0x180]
 unsigned int v2; // [bp-0x17c]
 unsigned int v3; // [bp-0x178]
 unsigned int flag2; // [bp-0x174]
 unsigned int v5; // [bp-0x170]
 unsigned int v6; // [bp-0x16c]
 char v7[20]; // [bp-0x168]
 char v8[23]; // [bp-0x154]
 unsigned int v9; // [bp-0x13d]
 unsigned int result; // [bp-0x139]
 char v11[10]; // [bp-0x135]
 char v12; // [bp-0x12b]
 char v13[256]; // [bp-0x120]
 unsigned int v14; // [bp-0x20]

 cur = &v7;
 v14 = *((int *)_ccall(v17, v18, (unsigned int)v19, 20));
 i = "\n";
 sub_4011c0(&g_40358c);
 for (flag3 = 5; flag3; i += 1)
 {
 flag3 -= 1;
 *((unsigned int *)&cur[0]) = *(i);
 cur += 1;
 }
 node = &v8;
 k = "HelloWorld";
 for (flag5 = 5; flag5; node += 1)
 {
 flag5 -= 1;
 *(node) = 0;
 }
 iter = &v12;
 sub_4011e0(1, "MEMOP-L2-01: %d\n", memop_memset(&v13, 10, 65));
 sub_4011e0(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v8, &v7, 20));
 for (flag4 = 11; flag4; k += 1)
 {
 flag4 -= 1;
 *(iter) = *(k);
 iter += 1;
 }
 sub_4011e0(1, "MEMOP-L2-03: %c\n", memop_memmove(&v12, 10));
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 flag2 = 1;
 v5 = 2;
 v6 = 4;
 v30 = sub_401160(&flag1, &flag2, 12);
 v31 = 1;
 if (v30 <= 0)
 v31 = -(_ccall(5, 15, v30, 0, 0) & 255);
 sub_4011e0(1, "MEMOP-L2-04: %d\n", v31, v30);
 sub_4011e0(1, "MEMOP-L2-05: %d\n", memop_bzero(&v11, 10));
 v9 = 67305985;
 result = 0;
 sub_4011e0(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v9, &result, 4));
 sub_4011e0(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 *((unsigned int *)v0) = 5;
 sub_4011e0(1, "MEMOP-L3-02: %d\n", memop_memory_barrier(&v0));
 if (v14 == *((int *)_ccall(v17, v18, (unsigned int)v19, 20)))
 return v14 - *((int *)_ccall(v17, v18, (unsigned int)v19, 20));
 return __stack_chk_fail_local();
}


// Function: __x86.get_pc_thunk_ax at 0x402523
unsigned int __x86_get_pc_thunk_ax(void)
{
 return 0;
}


// Function: __x86.get_pc_thunk_cx at 0x402527
unsigned int __x86_get_pc_thunk_cx()
{
 return 0;
}


// Function: extern_function at 0x40252b
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_402538 at 0x402538
int sub_402538()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x402540
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401170();
 __do_global_ctors_aux();
 return 0;
}

/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef void (*ctor_func_ptr)();

int __do_global_ctors_aux()
{
 ctor_func_ptr *func;
 ctor_func_ptr *func_array;
 int *v4;
 int v10;

 v4 = (int *)0;
 v10 = 0;
 v4 = (int *)0xffffffff;
 if ((int)v4 == -1)
 return 0;
 func_array = (ctor_func_ptr *)v4;
 func = func_array;
 do
 {
 if (*func != 0)
 (*func)();
 v10++;
 func++;
 } while (v10 < 1000);
 return 0;
}


// Function: sub_4025a2 at 0x4025a2
void sub_4025a2()
{
}



/* CRT stub function _fini removed by preprocessor */


