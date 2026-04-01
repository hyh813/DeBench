// Decompiled by BinaryAI
// SHA256: 41ab63a5b1fb290ed919ae7cf25bdd99379a08bdd05d6ead57ccacb29d67479e

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;
typedef unsigned char byte;

// External function declarations
extern void __stack_chk_fail(void);
extern void abort(void);
extern int fprintf(FILE *stream, const char *format, ...);
extern int printf(const char *format, ...);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *realloc(void *ptr, size_t size);
extern void *calloc(size_t nmemb, size_t size);
extern void *memset(void *s, int c, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern int getchar(void);

// Global variables
int global_counter = 0;
int counter_1 = 0;
int extern_global_var = 0;
unsigned int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
int global_array[10] = {0};
char const_string[100] = {0};
char DAT_00013008[100] = {0};
char DAT_00013151[100] = {0};
char DAT_000132a9[100] = {0};
char DAT_0001331f[100] = {0};
char DAT_000132b9[100] = {0};
char DAT_000132de[100] = {0};
char DAT_0001332a[100] = {0};
char DAT_0001358c[100] = {0};
char DAT_00013660[100] = {0};

// Forward declarations for static functions
static void __x86_get_pc_thunk_di(void);
static void __stack_chk_fail_local(void);
static void __x86_get_pc_thunk_bx(void);
static void __i686_get_pc_thunk_bx(void);
static void deregister_tm_clones(void);
static void register_tm_clones(void);
static void __do_global_dtors_aux(void);
static void __x86_get_pc_thunk_dx(void);
static unsigned int __x86_get_pc_thunk_ax(void);
static void __x86_get_pc_thunk_cx(void);
static void __do_global_ctors_aux(void);

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(void *param_1)
{
 ((void (*)(void))param_1)();
 return;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void *param_1, void *param_2, void *param_3, void *param_4, void *param_5, void *param_6, void *param_7)
{
 ((void (*)(void))param_1)();
 return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void *param_1, void *param_2, void *param_3)
{
 memmove(param_1, param_2, param_3);
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void *param_1)
{
 free(param_1);
 return;
}

// Function: FUN_00011160 @ 0x11160
int FUN_00011160(void *param_1, void *param_2, int param_3)
{
 return memcmp(param_1, param_2, param_3);
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void)
{
 __stack_chk_fail();
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void)
{
 abort();
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(const char *param_1, int param_2, void *param_3)
{
 fprintf(stderr, param_1, param_2);
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void *FUN_000111a0(void *param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
 return realloc(param_1, param_2);
}

// Function: FUN_000111b0 @ 0x111b0
void *FUN_000111b0(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *param_1)
{
 memset(param_1, 0, 100);
 return;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(void)
{
 return getchar();
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(int param_1, const char *param_2, ...)
{
 printf(param_2, param_1);
 return;
}

// Function: FUN_000111f0 @ 0x111f0
int FUN_000111f0(void)
{
 return 0;
}

// Function: FUN_00011200 @ 0x11200
void *FUN_00011200(unsigned int param_1, unsigned int param_2)
{
 return calloc(param_1, param_2);
}

// Function: main @ 0x11210
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x1126c
__attribute__((used)) static void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11270
__attribute__((used)) static void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11280
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x112c0
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11310
static void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4cf7) == '\0') {
 if (*(int *)(unaff_EDI + 0x4cd3) != 0) {
 FUN_00011120(*(void **)(unaff_EDI + 0x4ce7));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4cfb);
 while (uVar1 < ((unaff_EDI + 0x4baf) - (unaff_EDI + 0x4bab) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4cfb) = uVar1 + 1;
 ((void (*)(void))**(void ***)(unaff_EDI + 0x4bab + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4cfb);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4cf7) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x113a9
__attribute__((used)) static void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x113ad
__attribute__((used)) static void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: double_value @ 0x113b1
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: local_vars @ 0x113bf
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x113d0
unsigned int local_array(int param_1)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int aiStack_38 [10];
 int local_10;
 iVar2 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 aiStack_38[iVar1] = iVar2;
 iVar1 = iVar1 + 1;
 iVar2 = iVar2 + param_1;
 } while (iVar1 != 10);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 aiStack_38[5] = 0;
 }
 return aiStack_38[5];
}

// Function: local_struct @ 0x1140a
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x11417
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x1142e
int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Function: large_stack_frame @ 0x1143e
int large_stack_frame(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char acStack_810 [2048];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 acStack_810[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 iVar1 = (int)acStack_810[1024];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 iVar1 = 0;
 }
 return iVar1;
}

// Function: vla_stack @ 0x1147f
unsigned int vla_stack(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 uint uVar3;
 int iVar4;
 unsigned int extraout_EDX;
 char *puVar5;
 char *puVar6;
 int in_GS_OFFSET;
 char auStack_1c [12];
 int local_10;
 puVar6 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 uVar2 = 0xffffffff;
 if (param_1 - 1U < 1000) {
 uVar3 = param_1 * 4 + 0xf;
 for (; puVar5 != auStack_1c + -(uVar3 & 0xfffff000); puVar5 = puVar5 + -0x1000) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 uVar3 = uVar3 & 0xff0;
 iVar1 = -uVar3;
 puVar6 = puVar5 + iVar1;
 if (uVar3 != 0) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 iVar4 = 0;
 do {
 *(int *)(puVar5 + iVar4 * 4 + iVar1) = iVar4 * 2;
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 uVar2 = *(unsigned int *)(puVar5 + (param_1 >> 1) * 4 + iVar1);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)(puVar6 + -4) = 0x11507;
 __stack_chk_fail_local();
 uVar2 = extraout_EDX;
 }
 return uVar2;
}

// Function: alloca_usage @ 0x1150e
unsigned int alloca_usage(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 uint uVar3;
 int iVar4;
 unsigned int extraout_EDX;
 char *puVar5;
 char *puVar6;
 int in_GS_OFFSET;
 char auStack_1c [12];
 int local_10;
 puVar6 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 uVar2 = 0xffffffff;
 if (0 < param_1) {
 uVar3 = param_1 * 4 + 0x1b;
 for (; puVar5 != auStack_1c + -(uVar3 & 0xfffff000); puVar5 = puVar5 + -0x1000) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 uVar3 = uVar3 & 0xff0;
 iVar1 = -uVar3;
 puVar6 = puVar5 + iVar1;
 if (uVar3 != 0) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 iVar4 = 0;
 do {
 *(int *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + iVar4 * 4) = iVar4 * 3;
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 uVar2 = *(unsigned int *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + (param_1 >> 1) * 4);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)(puVar6 + -4) = 0x11594;
 __stack_chk_fail_local();
 uVar2 = extraout_EDX;
 }
 return uVar2;
}

// Function: stack_alias @ 0x1159b
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x115a5
void test_stack_memory(void)
{
 unsigned int uVar1;
 FUN_000111c0(&DAT_00013008);
 FUN_000111e0(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 uVar1 = local_array(2);
 FUN_000111e0(1,"MEM-L1-02 (local_array): %d\n",uVar1);
 FUN_000111e0(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 FUN_000111e0(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 FUN_000111e0(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 FUN_000111e0(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 FUN_000111e0(1,"MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 FUN_000111e0(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 FUN_000111e0(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x1169f
unsigned int heap_basic(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 iVar1 = FUN_000111b0(param_1 * 4);
 iVar2 = 0;
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
 *(int *)(iVar1 + iVar2 * 4) = iVar2 * 2;
 }
 uVar3 = *(unsigned int *)(iVar1 + (param_1 / 2) * 4);
 FUN_00011150(iVar1);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x1170b
int heap_calloc(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = -1;
 iVar1 = FUN_00011200(param_1,4);
 if (iVar1 != 0) {
 iVar3 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar3 = iVar3 + *(int *)(iVar1 + iVar2 * 4);
 }
 FUN_00011150(iVar1);
 }
 return iVar3;
}

// Function: heap_realloc @ 0x1175c
unsigned int heap_realloc(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 int iVar3;
 puVar1 = (unsigned int *)FUN_000111b0(0x14);
 uVar2 = 0xffffffff;
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = 1;
 puVar1[1] = 2;
 puVar1[2] = 3;
 puVar1[3] = 4;
 puVar1[4] = 5;
 iVar3 = FUN_000111a0(puVar1,0x28,0xffffffff,0xffffffff);
 if (iVar3 == 0) {
 FUN_00011150(puVar1);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if (*(int *)(iVar3 + 8) == 3) {
 uVar2 = 0x32;
 }
 FUN_00011150(iVar3);
 }
 }
 return uVar2;
}

// Function: heap_array @ 0x117f8
unsigned int heap_array(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 iVar1 = FUN_000111b0(param_1 * 4);
 iVar2 = 0;
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
 *(int *)(iVar1 + iVar2 * 4) = iVar2 * 3;
 }
 uVar3 = *(unsigned int *)(iVar1 + (param_1 / 2) * 4);
 FUN_00011150(iVar1);
 }
 return uVar3;
}

// Function: heap_struct @ 0x11864
int heap_struct(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = -1;
 iVar1 = FUN_000111b0(8);
 if (iVar1 != 0) {
 iVar2 = param_1 * 3;
 FUN_00011150(iVar1);
 }
 return iVar2;
}

// Function: heap_nested @ 0x118a5
unsigned int heap_nested(unsigned int *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 puVar1 = (unsigned int *)FUN_000111b0(8);
 *param_1 = puVar1;
 uVar2 = 0xffffffff;
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = 10;
 puVar3 = (unsigned int *)FUN_000111b0(8);
 puVar1[1] = puVar3;
 if (puVar3 == (unsigned int *)0x0) {
 FUN_00011150(puVar1);
 uVar2 = 0xfffffffe;
 }
 else {
 *puVar3 = 0x14;
 puVar3[1] = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x11917
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 iVar5 = 0;
 piVar1 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = (int *)FUN_000111b0(8);
 if (piVar2 == (int *)0x0) {
 while (piVar3 != (int *)0x0) {
 piVar1 = (int *)piVar3[1];
 FUN_00011150(piVar3);
 piVar3 = piVar1;
 }
 return -1;
 }
 *piVar2 = iVar5;
 piVar2[1] = 0;
 piVar4 = piVar2;
 if (piVar3 != (int *)0x0) {
 piVar1[1] = (int)piVar2;
 piVar4 = piVar3;
 }
 iVar5 = iVar5 + 10;
 piVar1 = piVar2;
 piVar3 = piVar4;
 } while (iVar5 != 0x32);
 iVar5 = 0;
 piVar1 = piVar4;
 do {
 iVar5 = iVar5 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 do {
 piVar1 = (int *)piVar4[1];
 FUN_00011150(piVar4);
 piVar4 = piVar1;
 } while (piVar1 != (int *)0x0);
 return iVar5;
}

// Function: create_tree_node @ 0x119b4
void *create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)FUN_000111b0(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 puVar1[1] = 0;
 puVar1[2] = 0;
 *puVar1 = param_1;
 }
 return puVar1;
}

// Function: tree_heap_traversal @ 0x119f0
int tree_heap_traversal(void)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int iVar5;
 int *piVar6;
 piVar4 = (int *)create_tree_node(10);
 iVar5 = -1;
 if (piVar4 != (int *)0x0) {
 piVar6 = (int *)create_tree_node(0x14);
 piVar4[1] = (int)piVar6;
 iVar5 = (int)create_tree_node(0x1e);
 piVar1 = (int *)piVar4[1];
 piVar4[2] = iVar5;
 if (piVar1 != (int *)0x0) {
 if ((int *)piVar4[2] != (int *)0x0) {
 iVar5 = *piVar1;
 iVar2 = *piVar4;
 iVar3 = *(int *)piVar4[2];
 FUN_00011150(piVar1);
 FUN_00011150((int *)piVar4[2]);
 FUN_00011150(piVar4);
 return iVar5 + iVar2 + iVar3;
 }
 FUN_00011150(piVar1);
 }
 if (piVar4[2] != 0) {
 FUN_00011150((int *)piVar4[2]);
 }
 FUN_00011150(piVar4);
 iVar5 = -2;
 }
 return iVar5;
}

// Function: memory_leak @ 0x11aac
unsigned int memory_leak(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 iVar1 = FUN_000111b0(param_1 * 4);
 iVar2 = 0;
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
 *(int *)(iVar1 + iVar2 * 4) = iVar2;
 }
 uVar3 = *(unsigned int *)(iVar1 + (param_1 / 2) * 4);
 }
 return uVar3;
}

// Function: dangling_pointer @ 0x11b01
unsigned int dangling_pointer(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 puVar1 = (unsigned int *)FUN_000111b0(4);
 uVar2 = 0xffffffff;
 if (puVar1 != (unsigned int *)0x0) {
 FUN_000111e0(1,"value before free: %d\n",0x2a,0xffffffff);
 FUN_00011150(puVar1);
 uVar2 = *puVar1;
 }
 return uVar2;
}

// Function: double_free @ 0x11b50
unsigned int double_free(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 if (param_1 == (unsigned int *)0x0) {
 iVar1 = FUN_000111b0(4);
 uVar2 = 0xffffffff;
 if (iVar1 != 0) {
 FUN_00011150(iVar1);
 FUN_00011150(iVar1);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: heap_overflow @ 0x11ba5
unsigned int heap_overflow(void)
{
 unsigned int *puVar1;
 int iVar2;
 unsigned int uVar3;
 uVar3 = 0xffffffff;
 puVar1 = (unsigned int *)FUN_000111b0(0x28);
 if (puVar1 != (unsigned int *)0x0) {
 iVar2 = 0;
 do {
 puVar1[iVar2] = iVar2 * 100;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0xb);
 uVar3 = *puVar1;
 FUN_00011150(puVar1);
 }
 return uVar3;
}

// Function: test_heap_memory @ 0x11bf2
void test_heap_memory(void)
{
 int iVar1;
 char *puVar2;
 unsigned int extraout_ECX;
 unsigned int extraout_ECX_00;
 unsigned int extraout_ECX_01;
 unsigned int uVar3;
 uint uVar4;
 unsigned int ***pppuVar5;
 int in_GS_OFFSET;
 char uVar6;
 char cVar7;
 char cVar8;
 int **local_2c;
 char *pcStack_28;
 unsigned int uStack_24_low;
 unsigned int uStack_24_high;
 char auStack_1c [4];
 unsigned int **local_18;
 uint local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x11bff;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_2c = (int **)&DAT_00013151;
 FUN_000111c0(&DAT_00013151);
 local_2c = (unsigned int **)0xa;
 uStack_24_low = heap_basic(10);
 pcStack_28 = "HEAP-L2-01 (heap_basic): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 local_2c = (unsigned int **)0x5;
 uStack_24_low = heap_calloc(5);
 pcStack_28 = "HEAP-L2-02 (heap_calloc): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 uStack_24_low = heap_realloc();
 pcStack_28 = "HEAP-L2-03 (heap_realloc): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 local_2c = (unsigned int **)0xa;
 uStack_24_low = heap_array(10);
 pcStack_28 = "HEAP-L2-04 (heap_array): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 local_2c = (unsigned int **)0x5;
 uStack_24_low = heap_struct(5);
 pcStack_28 = "HEAP-L2-05 (heap_struct): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 local_2c = (int **)&local_18;
 local_18 = (unsigned int **)0x0;
 uStack_24_low = heap_nested(local_18);
 pcStack_28 = "HEAP-L2-06 (heap_nested): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 if (local_18 != (unsigned int **)0x0) {
 local_2c = (int **)local_18[1];
 FUN_00011150(local_2c);
 local_2c = local_18;
 FUN_00011150(local_2c);
 }
 uStack_24_high = 0x11cf8;
 uStack_24_low = linked_list_heap();
 pcStack_28 = "HEAP-L3-01 (linked_list_heap): %d\n";
 local_2c = (unsigned int **)0x1;
 uStack_24_high = extraout_ECX;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 uStack_24_low = tree_heap_traversal();
 pcStack_28 = "HEAP-L3-02 (tree_heap_traversal): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 local_2c = (unsigned int **)0x5;
 uStack_24_low = memory_leak(5);
 pcStack_28 = "HEAP-L3-03 (memory_leak): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 pcStack_28 = "HEAP-L3-04 (dangling_pointer): ";
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, 0);
 iVar1 = FUN_000111f0();
 cVar8 = '\0';
 cVar7 = iVar1 < 0;
 uVar6 = iVar1 == 0;
 uVar3 = extraout_ECX_00;
 pppuVar5 = (unsigned int ***)auStack_1c;
 if ((bool)uVar6) {
 uStack_24_high = 0x11d5e;
 uStack_24_low = dangling_pointer();
 pcStack_28 = &DAT_000132a9;
 local_2c = (unsigned int **)0x1;
 FUN_000111e0(1, pcStack_28, uStack_24_low);
 local_2c = (unsigned int **)0x0;
 iVar1 = FUN_000111d0();
 uVar3 = extraout_ECX_01;
 pppuVar5 = &local_2c;
 }
 if ((bool)uVar6 || cVar8 != cVar7) {
 *(char **)((int)pppuVar5 + -0x10) = &DAT_0001331f;
 *(unsigned int *)((int)pppuVar5 + -0x14) = 0x11dcb;
 FUN_00011180();
 }
 else {
 *(unsigned int *)((int)pppuVar5 + -4) = uVar3;
 *(unsigned int *)((int)pppuVar5 + -8) = 0;
 *(uint **)((int)pppuVar5 + -0xc) = &local_14;
 *(int *)((int)pppuVar5 + -0x10) = iVar1;
 *(unsigned int *)((int)pppuVar5 + -0x14) = 0x11d89;
 FUN_00011190(pcStack_28, iVar1, 0);
 uVar4 = local_14 & 0x7f;
 if (uVar4 == 0) {
 *(unsigned int *)((int)pppuVar5 + -4) = 0;
 *(uint *)((int)pppuVar5 + -8) = local_14 >> 8 & 0xff;
 puVar2 = &DAT_000132b9;
 }
 else {
 if ((char)uVar4 == '\0' || (char)((char)uVar4 + '\x01') < '\x01') goto LAB_00011dce;
 *(uint *)((int)pppuVar5 + -4) = uVar4;
 puVar2 = &DAT_000132de;
 *(uint *)((int)pppuVar5 + -8) = uVar4;
 }
 *(char **)((int)pppuVar5 + -0xc) = puVar2;
 *(unsigned int *)((int)pppuVar5 + -0x10) = 1;
 *(unsigned int *)((int)pppuVar5 + -0x14) = 0x11dba;
 FUN_000111e0(1, pcStack_28, uVar4);
 }
LAB_00011dce:
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)((int)pppuVar5 + -4) = 0x11ddf;
 __stack_chk_fail_local();
 }
 return;
}

// Function: global_var_access @ 0x11de4
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x11e01
int global_var_read(void)
{
 return global_counter * 2;
}

// Function: global_array_access @ 0x11e18
unsigned int global_array_access(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(unsigned int *)(global_array + param_1 * 4);
 }
 return uVar1;
}

// Function: static_local @ 0x11e3e
void static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = counter_1 + 1;
 }
 counter_1 = iVar1;
 return;
}

// Function: call_static_func @ 0x11e67
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x11e76
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: extern_function @ defined locally
static int local_extern_function(int param_1)
{
 return param_1 * 2;
}

// Function: call_extern_func @ 0x11e90
int call_extern_func(void)
{
 return local_extern_function(5);
}

// Function: read_const_data @ 0x11eb2
int read_const_data(void)
{
 return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x11ece
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x11ed5
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x11edc
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x11ee6
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x11f02
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x11f17
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x11f33
unsigned int call_global_callback(void)
{
 unsigned int uVar1;
 if (global_func_ptr != (int (*)(int))0x0) {
 uVar1 = (unsigned int)(*global_func_ptr)(0);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x11f5c
unsigned int global_heap_store(unsigned int *param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 != (unsigned int *)0x0) {
 uVar1 = *param_1;
 }
 return uVar1;
}

// Function: static_complex_init @ 0x11f71
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x11f7b
int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x11f89
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x11f93
void test_static_global(void)
{
 unsigned int uVar1;
 FUN_000111c0(&DAT_0001332a);
 global_var_access();
 FUN_000111e0(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 FUN_000111e0(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 uVar1 = global_array_access(5);
 FUN_000111e0(1,"STM-L1-02 (global_array_access): %d\n",uVar1);
 counter_1 = 1;
 static_local(0);
 FUN_000111e0(1,"STM-L1-03 (static_local): %d\n",counter_1);
 counter_1 = counter_1 + 1;
 FUN_000111e0(1,"STM-L1-03 (static_local): %d\n",counter_1);
 uVar1 = call_static_func(5);
 FUN_000111e0(1,"STM-L1-04 (call_static_func): %d\n",uVar1);
 uVar1 = access_extern_global();
 FUN_000111e0(1,"STM-L2-01 (access_extern_global): %d\n",uVar1);
 uVar1 = call_extern_func();
 FUN_000111e0(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 uVar1 = read_const_data();
 FUN_000111e0(1,"STM-L2-03 (read_const_data): %d\n",uVar1);
 uVar1 = access_bss_var();
 FUN_000111e0(1,"STM-L2-04 (access_bss_var): %d\n",uVar1);
 uVar1 = access_bss_buffer();
 FUN_000111e0(1,"STM-L2-04 (access_bss_buffer): %d\n",uVar1);
 uVar1 = global_struct_access();
 FUN_000111e0(1,"STM-L2-05 (global_struct_access): %d\n",uVar1);
 file_scope_static = 0x32;
 FUN_000111e0(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = double_value;
 uVar1 = call_global_callback();
 FUN_000111e0(1,"STM-L2-07 (global_func_ptr): %d\n",uVar1);
 uVar1 = global_heap_store(&uVar1);
 FUN_000111e0(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar1 = static_complex_init();
 FUN_000111e0(1,"STM-L2-09 (static_complex_init): %d\n",uVar1);
 uVar1 = tls_access(10);
 FUN_000111e0(1,"STM-L3-01 (tls_access): %d\n",uVar1);
 uVar1 = init_order_test();
 FUN_000111e0(1,"STM-L3-02 (init_order_test): %d\n",uVar1);
 return;
}

// Function: memop_memset @ 0x1216c
uint memop_memset(byte *param_1,int param_2,byte param_3)
{
 uint uVar1;
 byte *pbVar2;
 if ((param_1 == (byte *)0x0) || (pbVar2 = param_1, param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 for (; param_2 != 0; param_2 = param_2 + -1) {
 *pbVar2 = param_3;
 pbVar2 = pbVar2 + 1;
 }
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x12194
unsigned int memop_memcpy(char *param_1,char *param_2,uint param_3)
{
 unsigned int uVar1;
 uint uVar2;
 char *puVar3;
 if ((param_3 == 0 || param_2 == (char *)0x0) || (param_1 == (char *)0x0)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar2 = param_3 & 0xfffffffc;
 puVar3 = param_1;
 for (; param_3 != 0; param_3 = param_3 - 1) {
 *puVar3 = *param_2;
 param_2 = param_2 + 1;
 puVar3 = puVar3 + 1;
 }
 uVar1 = *(unsigned int *)(param_1 + (uVar2 - 4));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x121d0
int memop_memmove(unsigned int param_1_00,unsigned int param_2_00,int param_1,uint param_2)
{
 int iVar1;
 if ((param_1 == 0) || (param_2 < 2)) {
 iVar1 = -1;
 }
 else {
 FUN_00011140((void *)(param_1 + 1),(void *)param_1,(void *)(param_2 - 1));
 iVar1 = (int)*(char *)(param_1 + 1);
 }
 return iVar1;
}

// Function: memop_memcmp @ 0x12213
int memop_memcmp(int param_1,int param_2,int param_3)
{
 int iVar1;
 int iVar2;
 bool bVar3;
 bVar3 = param_3 == 0 || param_2 == 0;
 if ((bVar3) || (param_1 == 0)) {
 iVar2 = 0;
 }
 else {
 iVar1 = FUN_00011160((void *)param_1,(void *)param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 }
 return iVar2;
}

// Function: memop_bzero @ 0x12271
uint memop_bzero(byte *param_1,int param_2)
{
 uint uVar1;
 byte *pbVar2;
 uVar1 = 0xffffffff;
 pbVar2 = param_1;
 if (param_1 != (byte *)0x0) {
 for (; param_2 != 0; param_2 = param_2 + -1) {
 *pbVar2 = 0;
 pbVar2 = pbVar2 + 1;
 }
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_bcopy @ 0x12292
uint memop_bcopy(int param_1,byte *param_2,int param_3)
{
 uint uVar1;
 bool bVar2;
 bVar2 = param_3 == 0 || param_2 == (byte *)0x0;
 if ((bVar2) || (param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011140(param_2,(void *)param_1,(void *)((uintptr_t)param_3));
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x122e1
unsigned int memop_unaligned_access(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 != 0) {
 uVar1 = *(unsigned int *)(param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memory_barrier @ 0x122f7
int memop_memory_barrier(int *param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1 + *param_1;
 }
 return iVar1;
}

// Function: test_memory_op_functions @ 0x12315
void test_memory_op_functions(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 unsigned int *puVar4;
 char *pcVar5;
 unsigned int *puVar6;
 char *pcVar7;
 int in_GS_OFFSET;
 byte bVar8;
 unsigned int local_184;
 unsigned int local_180;
 unsigned int local_17c;
 unsigned int local_178;
 unsigned int local_174;
 unsigned int local_170;
 unsigned int local_16c;
 unsigned int local_168 [5];
 unsigned int local_154 [5];
 unsigned int local_13d;
 unsigned int local_139;
 char local_135 [10];
 char local_12b [11];
 char local_120 [256];
 int local_20;
 unsigned int uStack_14;
 bVar8 = 0;
 uStack_14 = 0x1232a;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000111c0(&DAT_0001358c);
 puVar4 = &DAT_00013660;
 puVar6 = local_168;
 for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
 *puVar6 = *puVar4;
 puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
 puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
 }
 puVar4 = local_154;
 for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
 *puVar4 = 0;
 puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
 }
 uVar1 = memop_memset(local_120,10,0x41);
 FUN_000111e0(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(local_154,local_168,0x14);
 FUN_000111e0(1,"MEMOP-L2-02: %d\n",uVar1);
 pcVar5 = "HelloWorld";
 pcVar7 = local_12b;
 for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
 *pcVar7 = *pcVar5;
 pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
 pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
 }
 uVar1 = memop_memmove(0, 0, (int)local_12b, 10);
 FUN_000111e0(1,"MEMOP-L2-03: %c\n",uVar1);
 local_180 = 1;
 local_17c = 2;
 local_178 = 3;
 local_174 = 1;
 local_170 = 2;
 local_16c = 4;
 iVar3 = FUN_00011160(&local_180,&local_174,0xc);
 iVar2 = 1;
 if (iVar3 < 1) {
 iVar2 = -(uint)(iVar3 != 0);
 }
 FUN_000111e0(1,"MEMOP-L2-04: %d\n",iVar2,iVar3);
 uVar1 = memop_bzero(local_135,10);
 FUN_000111e0(1,"MEMOP-L2-05: %d\n",uVar1);
 local_13d = 0x4030201;
 local_139 = 0;
 uVar1 = memop_bcopy(&local_13d,&local_139,4);
 FUN_000111e0(1,"MEMOP-L2-06: %d\n",uVar1);
 FUN_000111e0(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 local_184 = 5;
 uVar1 = memop_memory_barrier(&local_184);
 FUN_000111e0(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x12523
__attribute__((used)) static unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x12527
__attribute__((used)) static void __x86_get_pc_thunk_cx(void)
{
 return;
}



// Function: __stack_chk_fail_local @ 0x12540
static void __stack_chk_fail_local(void)
{
 FUN_00011170();
 return;
}

// Function: __do_global_ctors_aux @ 0x12560
static void __do_global_ctors_aux(void)
{
 return;
}



