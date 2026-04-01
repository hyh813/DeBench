// Angr Decompilation of 6_gcc_O3_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_10ca8 at 0x10ca8
extern unsigned int g_25008;
extern int *__errno_location(void);

int sub_10ca8()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}


// Function: main at 0x10f90
unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int count; // r2
 unsigned int v5; // r3
 unsigned int v6; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_standard_library_functions();
 v6 = test_system_calls(v2, v3, count, v5, *((int *)&v0), *((int *)&v1));
 test_thread_concurrency(v6, v3, count, v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10fe0 at 0x10fe0
void sub_10fe0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: signal_handler at 0x110a0
extern unsigned int signal_number;
extern unsigned int signal_received;

int signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: thread_sum at 0x110b8
unsigned int thread_sum(unsigned int *ptr)
{
 unsigned int v0; // r2
 unsigned int i; // r3
 unsigned int v2; // r1

 v0 = 0;
 i = *(ptr);
 v2 = ptr[1];
 ptr[2] = 0;
 if (v2 < i)
 return 0;
 do
 {
 v0 += i;
 i += 1;
 } while (v2 + 1 != i);
 ptr[2] = v0;
 return 0;
}


// Function: thread_compute at 0x110f0
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: thread_increment at 0x11118
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
 unsigned int i; // r7
 unsigned int v1; // r4

 i = *(ptr);
 if (i <= 0)
 return 0;
 v1 = 0;
 do
 {
 pthread_mutex_lock(0x25120);
 shared_counter = shared_counter + 1;
 v1 += 1;
 pthread_mutex_unlock(0x25120);
 usleep(1000);
 } while (i != v1);
 return 0;
}


// Function: consumer_thread at 0x11170
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread()
{
 unsigned int *ptr; // r0

 pthread_mutex_lock(0x2513c);
 if (!i)
 {
 do
 {
 pthread_cond_wait(0x25158, 0x2513c);
 } while (!i);
 }
 pthread_mutex_unlock(0x2513c);
 ptr = malloc(4);
 *(ptr) = data;
 return ptr;
}


// Function: producer_thread at 0x111d0
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned int producer_thread()
{
 sleep(1);
 pthread_mutex_lock(0x2513c);
 data = 42;
 ready = 1;
 pthread_cond_signal(0x25158);
 pthread_mutex_unlock(0x2513c);
 return 0;
}


// Function: thread_atomic_increment at 0x11218
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *ptr)
{
 unsigned int i; // r7
 unsigned int v4; // r4
 unsigned int v5; // r4
 unsigned int v6; // r0
 unsigned int v7; // r4
 unsigned int v0_var; // [bp-0x20]
 unsigned int v1_var; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]

 i = *(ptr);
 v2 = __glibc___stack_chk_guard;
 if (i > 0)
 {
 v4 = 0;
 do
 {
 v5 = v4;
 __sync_fetch_and_add_4(0x2518c, 1);
 v0_var = v5;
 v6 = __sync_val_compare_and_swap_4(0x2518c, v5, v5 + 1000);
 v7 = v5 + 1;
 v1_var = v6;
 v4 = v7;
 } while (i != v4);
 }
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: thread_atomic_load_store at 0x112a8
void thread_atomic_load_store()
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 (void)v4; (void)v5; (void)v6; (void)v7;
 __sync_synchronize();
}


// Function: sub_112b4 at 0x112b4
void sub_112b4()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_112bc at 0x112bc
void sub_112bc()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_112c4 at 0x112c4
typedef struct struct_0 {
 char padding_0[8];
 unsigned int field_8;
 char padding_1[104];
 unsigned int field_74;
} struct_0;

void sub_112c4()
{
 struct_0 *ptr; // r5
 unsigned int v1; // r4

 ptr->field_74 = v1;
 __sync_synchronize(); /* do not return */
}


// Function: sub_112cf at 0x112cf
int sub_112cf(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
}


// Function: sub_112d0 at 0x112d0
int sub_112d0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0;
}


// Function: thread_tls_test at 0x112d8
void thread_tls_test(unsigned int a0)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 (void)v4; (void)v5; (void)v6; (void)v7; (void)a0;
 __aeabi_read_tp();
}


// Function: sub_112e4 at 0x112e4
unsigned int * sub_112e4(unsigned int p, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r5
 unsigned int v1; // r4
 unsigned int *ptr; // r0

 v0 = *((int *)(8 + p));
 v1 = v0 + 50;
 *((unsigned int *)(8 + p)) = v1;
 strncpy((char*)(12 + p), a1, 31);
 ptr = malloc(8);
 ptr[0] = v0;
 ptr[1] = v1;
 return ptr;
}


// Function: param_fork_exec_part_0 at 0x11324
int param_fork_exec_part_0(char *a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 execl(a0, a0);
 _exit(127); /* do not return */
}


// Function: param_thread_local_storage_constprop_0 at 0x11340
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_thread_local_storage_constprop_0()
{
 unsigned int *addr; // r6
 void* *ptr_var; // r0
 unsigned int v9; // cc_ndep
 unsigned int i; // r4
 unsigned int *v4; // cc_dep1
 unsigned int *v23; // cc_dep1
 unsigned int v24; // cc_dep2
 unsigned int v25; // cc_ndep
 unsigned int v5; // cc_dep2
 void* *k; // r5
 void* *p; // r7
 void* *v31; // r8
 unsigned int v32; // r4
 void* *ptr3; // r8
 unsigned int ptr_val; // r0
 unsigned int v37; // r8
 void* *v38; // r10
 unsigned int v6; // cc_ndep
 unsigned int *v39; // r9
 unsigned int *v40; // r9
 void* *v41; // r10
 unsigned int *count; // r4
 unsigned int *j; // r8
 unsigned int *v46; // r10
 unsigned int *v47; // r9
 void* *v48; // r5
 unsigned int *v50; // r8
 unsigned int *v52; // cc_dep1
 unsigned int *v53; // cc_dep2
 unsigned int v54; // r0
 unsigned int *v55; // cc_dep1
 unsigned int *v56; // cc_dep2
 unsigned int v57; // cc_ndep
 unsigned int *v7; // cc_dep1
 unsigned int v8; // cc_dep2
 unsigned int ptr_arr[2]; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]

 v1 = __glibc___stack_chk_guard;
 addr = malloc(16);
 ptr_var = malloc(16);
 if (ptr_var)
 {
 v23 = (armg_calculate_condition(18, v4, v5, v6) ? addr : v4);
 v24 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v5);
 v25 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v6);
 if (!armg_calculate_condition(2, v23, v24, v25))
 { v54 = 0; goto LABEL_11376; }
LABEL_11375:
 i = 1;
 if (!armg_calculate_condition(18, v23, v24, v25))
 { v54 = 0; goto LABEL_1137a; }
LABEL_11379:
 i = 0;
 if ((char)armg_calculate_condition(2, v23, v24, v25))
 { v54 = 0; goto LABEL_114a4; }
LABEL_11380:
 k = ptr_var + 1;
 p = ptr_var;
 v31 = k;
 do
 {
 v32 = i;
 ptr3 = v31;
 ptr_val = malloc(16);
 ptr3[1] = ptr_val;
 __snprintf_chk((void*)ptr_val, 16, 1, 16, "Thread-%d", v32);
 v31 = ptr3 + 1;
 i = v32 + 1;
 } while (i != 4);
 v37 = 0;
 v38 = k;
 v39 = addr;
 do
 {
 v40 = v39;
 v41 = v38;
 count = pthread_create(v40, 0, thread_tls_test, v41[1]);
 if (count)
 {
 do
 {
 free(k[1]);
 k += 1;
 } while (&p[v37] != k);
 free(p);
 free(addr);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v37 += 1, v38 = v41 + 4, v39 = v40 + 4, v37 != 4));
 j = addr + 1;
 v46 = addr + 3;
 v47 = count;
 do
 {
 v48 = k;
 v50 = j + 1;
 pthread_join(j[1], &ptr_arr);
 count = (char *)count + ptr_arr[0];
 v47 = (char *)v47 + ptr_arr[1];
 free((void*)ptr_arr);
 free(v48[1]);
 v52 = v50;
 v53 = v46;
 j = v50;
 k = v48 + 1;
 } while (j != v46);
 free(p);
 free(addr);
 v54 = 0;
 if (count == 0x190)
 {
 v55 = (armg_calculate_condition(2, v52, v53, 0) ? v47 : v52);
 v56 = (armg_calculate_condition(2, v52, v53, 0) ? 0x258 : v53);
 v57 = (armg_calculate_condition(2, v52, v53, 0) ? 0 : 0);
 if (!armg_calculate_condition(2, v55, v56, v57))
 { v54 = 0; goto LABEL_11452; }
LABEL_11451:
 v54 = 42;
 if (!armg_calculate_condition(18, v55, v56, v57))
 { v54 = 0; goto LABEL_11456; }
LABEL_11455:
 v54 = 4294967293;
 }
 else
 {
 v55 = (armg_calculate_condition(2, v52, v53, 0) ? v47 : v52);
 v56 = (armg_calculate_condition(2, v52, v53, 0) ? 0x258 : v53);
 v57 = (armg_calculate_condition(2, v52, v53, 0) ? 0 : 0);
 if (armg_calculate_condition(2, v55, v56, v57))
 { v54 = 0; goto LABEL_11451; }
LABEL_11452:
 if (armg_calculate_condition(18, v55, v56, v57))
 { v54 = 0; goto LABEL_11455; }
LABEL_11456:
 v54 = v54;
 ;
 }
 }
 else
 {
 v23 = (armg_calculate_condition(18, v7, v8, v9) ? addr : v7);
 v24 = (armg_calculate_condition(18, v7, v8, v9) ? 0 : v8);
 v25 = (armg_calculate_condition(18, v7, v8, v9) ? 0 : v9);
 if (armg_calculate_condition(2, v23, v24, v25))
 { v54 = 0; goto LABEL_11375; }
LABEL_11376:
 if (armg_calculate_condition(18, v23, v24, v25))
 { v54 = 0; goto LABEL_11379; }
LABEL_1137a:
 if (!((char)armg_calculate_condition(2, v23, v24, v25)))
 { v54 = 0; goto LABEL_11380; }
LABEL_114a4:
 v54 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v54;
}


// Function: param_atomic_ops_constprop_0 at 0x114bc
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_atomic_ops_constprop_0()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]

 v1 = __glibc___stack_chk_guard;
 v0 = 500;
 if (malloc(16))
 {
 __sync_synchronize(); /* do not return */
 }
 else if (!(v1 ^ __glibc___stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
}


// Function: sub_114f0 at 0x114f0
extern unsigned int atomic_counter;

void sub_114f0()
{
 atomic_counter = 0;
 __sync_synchronize(); /* do not return */
}


// Function: sub_1150c at 0x1150c
int sub_1150c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
 unsigned int v0; // r5
 unsigned int v1; // r4
 unsigned int v2; // r6
 unsigned int *v3; // r7
 unsigned int *i; // r4
 unsigned int *v5; // r4
 void* v6; // r7

 do
 {
 if (pthread_create(v1, 0, v0, &a5))
 free(v6);
 } while ((v1 += 4, v1 != v2));
 if (!pthread_create(0, 0, thread_atomic_load_store, 0))
 pthread_join(a6);
 i = v3 + 1;
 do
 {
 v5 = i + 1;
 pthread_join(i[1], 0);
 i = v5;
 } while (v3 + 3 != i);
 __sync_synchronize(); /* do not return */
}


// Function: sub_11570 at 0x11570
void sub_11570()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_11578 at 0x11578
int sub_11578()
{
 void* v0; // r7

 free(v0);
}


// Function: param_mutex_lock_constprop_0 at 0x115e4
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int shared_counter;

int param_mutex_lock_constprop_0()
{
 unsigned int *ptr; // r7
 unsigned int *v3; // r4
 unsigned int *i; // r4
 unsigned int v6; // r0
 unsigned int v7; // cc_dep2
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]

 v1 = __glibc___stack_chk_guard;
 v0 = 1000;
 ptr = malloc(16);
 if (ptr)
 {
 v3 = ptr;
 shared_counter = 0;
 do
 {
 if (pthread_create(v3, 0, thread_increment, &v0))
 {
 free(ptr);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v3 += 4, v3 != ptr + 16));
 i = ptr + 1;
 do
 {
 pthread_join(i[1], 0);
 i += 1;
 } while (ptr + 3 != i);
 free(ptr);
 v6 = 0;
 v7 = v0 * 4;
 if (shared_counter == v0 * 4)
 {
 v6 = 42;
 if (!armg_calculate_condition(18, shared_counter, v7, 0))
 goto LABEL_1168a;
LABEL_11689:
 v6 = 4294967293;
 }
 else
 {
 if (armg_calculate_condition(18, shared_counter, v7, 0))
 goto LABEL_11689;
LABEL_1168a:
 v6 = v6;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: param_strcpy at 0x116d4
int param_strcpy(char *a0, char *a1)
{
 return stpcpy(a0, a1) - a0;
}


// Function: call_strcpy at 0x116e8
unsigned int call_strcpy()
{
 return 8;
}


// Function: param_strcmp at 0x116f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v0; // r0
 unsigned int v2; // r0

 v0 = strcmp(a0, a1);
 if (v0 > 0)
 return 1;
 if (armg_calculate_condition(18, v0, 0, 0))
 {
 v2 = 4294967295;
 if (!armg_calculate_condition(2, v0, 0, 0))
 return v2;
 }
 else
 {
 v2 = v0;
 if (!armg_calculate_condition(2, v2, 0, 0))
 return v2;
 }
 return 0;
}


// Function: call_strcmp at 0x11714
unsigned int call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x1171c
int param_strlen()
{
 char *v0; // r0
 unsigned int len; // r0

 len = strlen(v0);
 return strlen(v0);
}


// Function: call_strlen at 0x11720
unsigned int call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x11728
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x1173c
unsigned int call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x11744
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // r0
 unsigned int v2; // r0

 v0 = memcmp(a0, a1, a2);
 if (v0 > 0)
 return 1;
 if (armg_calculate_condition(18, v0, 0, 0))
 {
 v2 = 4294967295;
 if (!armg_calculate_condition(2, v0, 0, 0))
 return v2;
 }
 else
 {
 v2 = v0;
 if (!armg_calculate_condition(2, v2, 0, 0))
 return v2;
 }
 return 0;
}


// Function: call_memcmp at 0x11768
extern unsigned int __glibc___stack_chk_guard;

int call_memcmp()
{
 unsigned int v10; // r0
 unsigned int v11; // r6
 unsigned int v12; // r6
 unsigned int v13; // r0
 unsigned int v14; // r0
 unsigned int result; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int flag2; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 result = 1;
 v1 = 2;
 v2 = 3;
 v9 = __glibc___stack_chk_guard;
 flag1 = 1;
 v4 = 2;
 v5 = 4;
 flag2 = 1;
 v7 = 2;
 v8 = 3;
 v10 = memcmp(&result, &flag1, 12);
 if (0 < v10)
 {
 v11 = 1;
 if (!((char)armg_calculate_condition(194, v10, 0, 0)))
 {
 if (armg_calculate_condition(18, v10, 0, 0))
 goto LABEL_117c9;
LABEL_117ca:
 if (armg_calculate_condition(2, v10, 0, 0))
 goto LABEL_117cd;
LABEL_117ce:
 ;
 }
 }
 else
 {
 v11 = v12;
 if (!((char)armg_calculate_condition(194, v10, 0, 0)))
 {
 if (!armg_calculate_condition(18, v10, 0, 0))
 goto LABEL_117ca;
LABEL_117c9:
 v11 = 4294967295;
 if (!armg_calculate_condition(2, v10, 0, 0))
 goto LABEL_117ce;
LABEL_117cd:
 v11 = 0;
 }
 }
 v13 = memcmp(&result, &flag2, 12);
 if (0 < v13)
 {
 v14 = 1;
 if (!((char)armg_calculate_condition(194, v13, 0, 0)))
 {
 if (armg_calculate_condition(18, v13, 0, 0))
 goto LABEL_117ed;
LABEL_117ee:
 if (armg_calculate_condition(2, v13, 0, 0))
 goto LABEL_117f1;
LABEL_117f2:
 ;
 }
 }
 else
 {
 v14 = v13;
 if (!((char)armg_calculate_condition(194, v13, 0, 0)))
 {
 if (!armg_calculate_condition(18, v13, 0, 0))
 goto LABEL_117ee;
LABEL_117ed:
 v14 = 4294967295;
 if (!armg_calculate_condition(2, v13, 0, 0))
 goto LABEL_117f2;
LABEL_117f1:
 v14 = 0;
 }
 }
 if ((v9 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v14 + v11;
}


// Function: param_printf at 0x11824
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x1183c
int call_printf()
{
 unsigned int v0; // r0

 v0 = __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x11858
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_scanf()
{
 unsigned int v4; // lr
 char *v5; // r0
 unsigned int v6; // r0
 unsigned int v7; // r3
 unsigned int v9; // r0
 unsigned int v10; // r0
 char v0; // [bp-0x14]
 char v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 v6 = __isoc99_sscanf(v5, "%d,%d", &v0, &v1);
 if (armg_calculate_condition(2, v6, 2, 0))
 v9 = v6 + v7;
 else
 v9 = v6;
 v10 = v9;
 if (armg_calculate_condition(18, v6, 2, 0))
 v10 = 4294967295;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v10;
}


// Function: call_scanf at 0x118bc
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_scanf()
{
 unsigned int v2; // lr
 unsigned int v3; // r0
 unsigned int v4; // r3
 unsigned int v6; // r0
 unsigned int v7; // r0
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = __glibc___stack_chk_guard;
 v3 = __isoc99_sscanf("123,456", "%d,%d");
 if (armg_calculate_condition(2, v3, 2, 0))
 v6 = v3 + v4;
 else
 v6 = v3;
 v7 = v6;
 if (armg_calculate_condition(18, v3, 2, 0))
 v7 = 4294967295;
 if ((v0 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: param_fopen_fclose at 0x11928
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose()
{
 char *v0; // r0
 FILE *fp; // r0
 unsigned int v2; // r0

 fp = fopen(v0, "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2;
}


// Function: call_fopen_fclose at 0x11964
unsigned int call_fopen_fclose()
{
 void* fp; // r4
 unsigned int v1; // r0

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v1 = fileno(fp);
 fclose(fp);
 if (v1 < 0)
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x119b0
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // r4
 void* v3; // r0
 unsigned int count; // r3
 unsigned int result; // r0
 unsigned int v6; // r0
 char v0; // [bp-0x34]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 fp = fopen(a0, "w+");
 if (fp)
 {
 v3 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) == 18)
 {
 rewind(v3);
 count = fread(&v0, 1, 18, fp);
 (&v0)[count] = 0;
 fclose(fp);
 unlink(a0);
 if (count == 18)
 {
 result = strcmp(&v0, "BinBench Test Data");
 if (result)
 {
 v6 = 4294967293;
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_11a5e;
LABEL_11a5d:
 v6 = 42;
 }
 else
 {
 v6 = 0;
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_11a5d;
LABEL_11a5e:
 }
 }
 else
 {
 v6 = 4294967293;
 }
 }
 else
 {
 fclose(v3);
 v6 = 4294967294;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_fread_fwrite at 0x11aac
unsigned int call_fread_fwrite()
{
 unsigned int count; // r0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x11ab8
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr_var; // r0
 unsigned int v2; // r2
 unsigned int *ptr_iter; // r3
 unsigned int *v4; // r3

 v0 = a0 * 4;
 ptr_var = malloc(v0);
 if (!ptr_var)
 return 4294967295;
 if (a0)
 {
 v2 = 0;
 ptr_iter = ptr_var + 1;
 do
 {
 v4 = ptr_iter + 1;
 ptr_iter[1] = v2;
 v2 += 10;
 ptr_iter = v4;
 } while (ptr_iter != -4 + (char *)ptr_iter + v0);
 }
 free(ptr_var);
 return 0;
}


// Function: call_malloc_free at 0x11b20
unsigned int call_malloc_free()
{
 void* ptr; // r0

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return 90;
}


// Function: param_memset at 0x11b48
unsigned int param_memset(char *a0, unsigned int n)
{
 unsigned int v0; // r0
 char *cur; // r3
 unsigned int v2; // r0
 unsigned int v3; // r2
 unsigned int v4; // r0

 memset(a0, 0, n);
 if (!n)
 return 0;
 v0 = 0;
 cur = a0 + 1;
 do
 {
 v2 = v0;
 cur += 1;
 v4 = v2 + cur[1];
 v0 = v4;
 } while (&a0[1 + n] != cur);
 return v2;
}


// Function: call_memset at 0x11b94
unsigned int call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x11b9c
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v12; // r0
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int ptr1; // r0
 unsigned int v9; // cc_dep1
 unsigned int v10; // r4
 unsigned int ptr2; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 ptr1 = (unsigned int)strchr(a0, a1);
 v9 = ptr1;
 if (!ptr1)
 {
 v10 = 4294967295;
 if (!armg_calculate_condition(18, v9, 0, 0))
 { v10 = 0; goto LABEL_11bbe; }
LABEL_11bbd:
 v10 -= (unsigned int)a0;
 }
 else
 {
 v10 = ptr1;
 if (armg_calculate_condition(18, v9, 0, 0))
 { v10 = 0; goto LABEL_11bbd; }
LABEL_11bbe:
 v10 = v10;
 }
 ptr2 = (unsigned int)strstr(a0, a2);
 if (!ptr2)
 {
 v12 = 4294967295;
 if (!armg_calculate_condition(18, ptr2, 0, 0))
 { v12 = 0; goto LABEL_11bce; }
LABEL_11bcd:
 v12 -= (unsigned int)a0;
 }
 else
 {
 v12 = ptr2;
 if (armg_calculate_condition(18, ptr2, 0, 0))
 { v12 = 0; goto LABEL_11bcd; }
LABEL_11bce:
 v12 = v12;
 }
 return v10 + v12;
}


// Function: call_strchr_strstr at 0x11bd8
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x11be0
extern unsigned int __glibc___stack_chk_guard;
extern char g_13e40;
extern char g_13e64;
extern char g_13e80;
extern char g_13e9c;
extern char g_13eb8;
extern char g_13ed4;
extern char g_13ef0;
extern char g_13f0c;
extern char g_13f2c;
extern char g_13f48;
extern char g_13f64;
extern char g_13f80;
extern char g_13f9c;

int test_standard_library_functions()
{
 void* ptr; // r0
 unsigned int v12; // r2
 unsigned int v13; // r0
 unsigned int v3; // r0
 unsigned int v4; // r2
 unsigned int v5; // r2
 unsigned int v6; // r3
 void* fp; // r4
 unsigned int v8; // r4
 unsigned int v9; // r2
 unsigned int v0; // [bp-0xc]

 v0 = __glibc___stack_chk_guard;
 puts(0x13e40);
 __printf_chk(1, 0x13e64, 8);
 __printf_chk(1, 0x13e80, 0);
 __printf_chk(1, 0x13e9c, 12);
 __printf_chk(1, 0x13eb8, 90);
 __printf_chk(1, 0x13ed4, call_memcmp());
 __printf_chk(1, 0x13ef0, __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test"));
 v3 = __isoc99_sscanf("123,456", "%d,%d");
 if (armg_calculate_condition(18, v3, 2, 0))
 {
 v4 = 4294967295;
 if (!armg_calculate_condition(2, v3, 2, 0))
 goto LABEL_11c9a;
LABEL_11c99:
 v4 += v6;
 }
 else
 {
 v4 = v5;
 if (armg_calculate_condition(2, v3, 2, 0))
 goto LABEL_11c99;
LABEL_11c9a:
 ;
 }
 __printf_chk(1, 0x13f0c, v4);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v8 = fileno(fp);
 fclose(fp);
 if (0 <= v8)
 {
 v9 = 42;
 if (!((char)armg_calculate_condition(178, v8, 0, 0)))
 goto LABEL_11cdc;
 }
 else if (!((char)armg_calculate_condition(178, v8, 0, 0)))
 {
 goto LABEL_11cdc;
 }
 }
 v9 = 4294967295;
LABEL_11cdc:
 __printf_chk(1, 0x13f2c, v9);
 __printf_chk(1, 0x13f48, param_fread_fwrite("/tmp/binbench_test_tmp"));
 ptr = malloc(40);
 if (ptr)
 {
 free(ptr);
 v12 = 90;
 }
 else
 {
 v12 = 4294967295;
 }
 __printf_chk(1, 0x13f64, v12);
 __printf_chk(1, 0x13f80, 0);
 if ((v0 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v13 = __printf_chk(1, 0x13f9c, 15);
 return __printf_chk(1, 0x13f9c, 15);
}


// Function: param_linux_syscall at 0x11dcc
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = syscall(5);
 if (v0 < 0)
 return -(*(__errno_location()));
 syscall(6);
 return v0;
}


// Function: call_linux_syscall at 0x11e10
unsigned int call_linux_syscall()
{
 int *err; // r0
 unsigned int v2; // r0

 if (syscall(5) >= 0)
 {
 syscall(6);
 return 0x2a;
 }
 err = __errno_location();
 if (*err <= 0)
 {
 v2 = 0x2a;
 if (!armg_calculate_condition(194, *err, 0, 0))
 return v2;
 }
 else
 {
 v2 = *err;
 if (!armg_calculate_condition(194, v2, 0, 0))
 return v2;
 }
 return 0xffffffff;
}


// Function: param_win32_api at 0x11e58
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_win32_api()
{
 unsigned int v3; // lr
 unsigned int v4; // r0
 char v0; // [bp-0x3c]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 v4 = stat();
 if (v4 < 0)
 {
 v4 = 4294967295;
 }
 else if (0 < *((int *)&v0))
 {
 v4 = 42;
 if (!armg_calculate_condition(210, *((int *)&v0), 0, 0))
 goto LABEL_11e8e;
LABEL_11e8d:
 v4 = 4294967294;
 }
 else
 {
 if (armg_calculate_condition(210, *((int *)&v0), 0, 0))
 goto LABEL_11e8d;
LABEL_11e8e:
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: call_win32_api at 0x11ec0
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_win32_api()
{
 unsigned int v4; // lr
 unsigned int v5; // r0
 char v0; // [bp-0x68]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 v5 = stat("/etc/passwd", &v0);
 if (v5 < 0)
 {
 v5 = 4294967295;
 }
 else if (0 < *((int *)&v1))
 {
 v5 = 42;
 if (!armg_calculate_condition(210, *((int *)&v1), 0, 0))
 goto LABEL_11efa;
LABEL_11ef9:
 v5 = 4294967294;
 }
 else
 {
 if (armg_calculate_condition(210, *((int *)&v1), 0, 0))
 goto LABEL_11ef9;
LABEL_11efa:
 }
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: param_fork_exec at 0x11f30
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // r0
 unsigned int v3; // r0
 unsigned int v5; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 pid = fork();
 if (pid < 0)
 {
 v5 = 4294967295;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v3 = waitpid(pid, &v0, 0);
 if (v3 < 0)
 {
 v5 = 4294967294;
 if (!((char)armg_calculate_condition(178, v3, 0, 0)))
 goto LABEL_11f78;
 }
 else
 {
 v5 = v3;
 if (!((char)armg_calculate_condition(178, v5, 0, 0)))
 {
LABEL_11f78:
 v5 = (!(v0 & 127) ? (!(v0 & 127) ? ((v0 & 127) ? 4294967293 : v0) >> 8 : 4294967293) & 255 : (!(v0 & 127) ? ((v0 & 127) ? 4294967293 : v0) >> 8 : 4294967293));
 }
 }
 }
 else
 {
 param_fork_exec_part_0(a0, a1); /* do not return */
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: call_fork_exec at 0x11fc8
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_fork_exec()
{
 unsigned int v3; // lr
 unsigned int pid; // r0
 unsigned int v5; // r0
 unsigned int result; // r3
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 pid = fork();
 if (pid >= 0)
 {
 if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v5 = waitpid(pid, &v0, 0);
 if (v5 >= 0 && !((char)v0 & 127))
 {
 result = v0 >> 8 & 255;
 if (!result)
 {
 if ((char)armg_calculate_condition(2, result, 0, 0))
 {
 if (!(v1 ^ __glibc___stack_chk_guard))
 return 42;
 __stack_chk_fail(); /* do not return */
 }
 }
 else
 {
 if ((char)armg_calculate_condition(2, result, 0, 0))
 {
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
 }
 }
 }
 }
 else
 {
 param_fork_exec_part_0("/bin/true", pid); /* do not return */
 }
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967295;
}


// Function: param_pipe_communication at 0x12060
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_pipe_communication()
{
 unsigned int pid; // r4
 unsigned int count; // r4
 unsigned int v6; // r0
 char v0; // [bp-0x3c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x38]
 char v2; // [bp-0x34]
 unsigned int v3; // [bp-0x14]

 v3 = __glibc___stack_chk_guard;
 if (pipe(&v0) >= 0)
 {
 pid = fork();
 if (pid >= 0)
 {
 if (!((char)armg_calculate_condition(18, pid, 0, 0)))
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(pid); /* do not return */
 }
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 v6 = wait(0);
 if (0 < count)
 {
 v6 = 42;
 if (!armg_calculate_condition(210, count, 0, 0))
 goto LABEL_12106;
LABEL_12105:
 v6 = 4294967293;
 }
 else
 {
 if (armg_calculate_condition(210, count, 0, 0))
 goto LABEL_12105;
LABEL_12106:
 ;
 }
 }
 else
 {
 v6 = 4294967294;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_pipe_communication at 0x12144
unsigned int call_pipe_communication()
{
 unsigned int v0; // r0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x12148
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

extern unsigned int __glibc___stack_chk_guard;

unsigned int param_socket_create()
{
 unsigned int sock; // r4
 unsigned int v8; // r0
 unsigned int v9; // r0
 unsigned int flag3; // [bp-0x20]
 sockaddr v1; // [bp-0x1c]
 unsigned int v6; // [bp-0xc]

 v6 = __glibc___stack_chk_guard;
 sock = socket(2, 1, 0);
 if (sock >= 0)
 {
 flag3 = 1;
 if (setsockopt(sock, 1, 2, &flag3, 4) >= 0)
 {
 *((unsigned int *)&v1.sin_family) = 0;
 *((unsigned int *)&v1.sa_data[2]) = 0;
 v1.sin_family = 2;
 *((unsigned int *)&v1.sa_data[6]) = 0;
 *((unsigned int *)&v1.sa_data[10]) = 0;
 if (bind(sock, &v1, 16) >= 0)
 {
 v8 = sock;
 if (listen(sock, 5) >= 0)
 {
 close(v8);
 v9 = 42;
 }
 else
 {
 close(v8);
 v9 = 0xfffffffc;
 }
 }
 else
 {
 close(sock);
 v9 = 4294967293;
 }
 }
 else
 {
 close(sock);
 v9 = 4294967294;
 }
 }
 else
 {
 v9 = 4294967295;
 }
 if ((v6 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v9;
}


// Function: call_socket_create at 0x1224c
unsigned int call_socket_create()
{
 unsigned int sock; // r0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x12250
unsigned int param_shmget_shmat()
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 void* v2; // r0

 v0 = open("/tmp/binbench_shm", 66, 438);
 if (v0 < 0)
 return 4294967295;
 close(v0);
 if (ftok("/tmp/binbench_shm", 42) < 0)
 return 4294967295;
 v1 = shmget();
 if (v1 < 0)
 return 4294967294;
 v2 = shmat();
 if (v2 == 0xffffffff)
 return 4294967293;
 memcpy(v2, "SharedMemory", 13);
 shmdt(v2);
 shmctl(v1, 0, 0);
 return 12;
}


// Function: call_shmget_shmat at 0x12304
unsigned int call_shmget_shmat()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = param_shmget_shmat();
 if (0 < v4)
 {
 v6 = 42;
 if (!armg_calculate_condition(210, v4, 0, 0))
 return v6;
 }
 else
 {
 v6 = v4;
 if (!armg_calculate_condition(210, v6, 0, 0))
 return v6;
 }
 return 4294967295;
}


// Function: param_signal_handling at 0x1231c
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r0
 unsigned int v1; // r4
 unsigned int result; // r4
 unsigned int v3; // r4
 unsigned int v4; // r4
 unsigned int flag1; // r4
 unsigned int v6; // r4

 v0 = signal(10, signal_handler);
 if (v0 != 4294967295)
 goto LABEL_12334;
 return v0;
LABEL_12334:
 if (signal(14, signal_handler) == 4294967295)
 return 4294967294;
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 result = v1;
 usleep(1000);
 } while (!signal_received && (v3 = result - 1, v1 = result - 1, result != 1));
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v4 = 2000;
 do
 {
 flag1 = v4;
 usleep(1000);
 } while (!signal_received && (v6 = flag1 - 1, v4 = flag1 - 1, flag1 != 1));
 }
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 else
 {
 return 4294967291;
 }
 }
 else
 {
 return 0xfffffffc;
 }
}


// Function: call_signal_handling at 0x12444
unsigned int call_signal_handling()
{
 unsigned int v4; // r0
 unsigned int v5; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int v8; // r0
 char v0; // [bp+0x0]
 char v1; // [bp+0x4]
 char v2; // [bp+0x8]
 char v3; // [bp+0xc]

 v8 = param_signal_handling(v4, v5, v6, v7, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
 return param_signal_handling(v4, v5, v6, v7, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
}


// Function: test_system_calls at 0x12448
extern unsigned int __glibc___stack_chk_guard;
extern char g_13ff4;
extern char g_1402c;
extern char g_14048;
extern char g_14064;
extern char g_14080;
extern char g_1409c;
extern char g_140b8;

int test_system_calls()
{
 unsigned int v5; // r2
 unsigned int *err; // r0
 unsigned int v15; // r0
 unsigned int v16; // r1
 unsigned int v17; // r2
 unsigned int v18; // r3
 unsigned int v19; // r0
 unsigned int v20; // r0
 unsigned int v7; // r2
 unsigned int pid; // r0
 unsigned int result; // r3
 unsigned int v10; // r2
 unsigned int v13; // r3
 unsigned int v14; // r2
 unsigned int v0; // [bp-0x68]
 char v1; // [bp-0x60]
 char v2; // [bp-0x5c]
 char v3; // [bp-0x3c]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 puts(0x13ff4);
 if (syscall(5) >= 0)
 {
 syscall(6);
 v5 = 42;
 }
 else
 {
 err = __errno_location();
 if (*err <= 0)
 {
 v5 = 42;
 if (!armg_calculate_condition(194, *err, 0, 0))
 goto LABEL_125ae;
LABEL_125ad:
 v5 = 4294967295;
 ;
 }
 else
 {
 if (armg_calculate_condition(194, *err, 0, 0))
 goto LABEL_125ad;
LABEL_125ae:
 v5 = v5;
 }
 }
 __printf_chk(1, "SYS-L3-01: %", v5);
 if (stat("/etc/passwd", &v0) < 0)
 {
 v7 = 4294967295;
 }
 else if (0 < *((int *)&v3))
 {
 v7 = 42;
 if (!armg_calculate_condition(210, *((int *)&v3), 0, 0))
 goto LABEL_124ba;
LABEL_124b9:
 v7 = 4294967294;
 ;
 }
 else
 {
 if (armg_calculate_condition(210, *((int *)&v3), 0, 0))
 goto LABEL_124b9;
LABEL_124ba:
 v7 = v7;
 ;
 ;
 ;
 }
 __printf_chk(1, 0x1402c, v7);
 pid = fork();
 if (pid >= 0)
 {
 if ((char)armg_calculate_condition(2, pid, 0, 0))
 param_fork_exec_part_0("/bin/true", pid); /* do not return */
 if (waitpid(pid, &v0, 0) >= 0 && !((char)v0 & 127))
 {
 result = v0 >> 8 & 255;
 if (!result)
 {
 v10 = 42;
 if ((char)armg_calculate_condition(2, result, 0, 0))
 goto LABEL_124fc;
 }
 else if ((char)armg_calculate_condition(2, result, 0, 0))
 {
 goto LABEL_124fc;
 }
 }
 }
 v10 = 4294967295;
LABEL_124fc:
 ;
 __printf_chk(1, 0x14048, v10);
 __printf_chk(1, 0x14064, param_pipe_communication());
 __printf_chk(1, 0x14080, param_socket_create());
 v13 = param_shmget_shmat();
 if (0 < v13)
 {
 v14 = 42;
 if (!armg_calculate_condition(210, v13, 0, 0))
 goto LABEL_12542;
LABEL_12541:
 v14 = 4294967295;
 }
 else
 {
 if (armg_calculate_condition(210, v13, 0, 0))
 goto LABEL_12541;
LABEL_12542:
 ;
 }
 v15 = __printf_chk(1, 0x1409c, v14);
 v19 = param_signal_handling(v15, v16, v17, v18, (unsigned int)*(&v0), (unsigned int)*(&v0), *((int *)&v1), *((int *)&v2));
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v20 = __printf_chk(1, 0x140b8, v19);
 return __printf_chk(1, 0x140b8, v19);
}


// Function: param_pthread_create at 0x125f4
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v4; // r4
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr_var; // [bp-0x10], Other Possible Types: char
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v1 = a0;
 if (!pthread_create((void*)&v0, 0, thread_compute, &v1))
 {
 pthread_join((void*)v0, (void**)&ptr_var);
 v4 = *(ptr_var);
 free(ptr_var);
 }
 else
 {
 v4 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: call_pthread_create at 0x12680
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_pthread_create()
{
 unsigned int v4; // r4
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr_var; // [bp-0x10], Other Possible Types: char
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v1 = 7;
 if (!pthread_create((void*)&v0, 0, thread_compute, &v1))
 {
 pthread_join((void*)v0, (void**)&ptr_var);
 v4 = *(ptr_var);
 free(ptr_var);
 }
 else
 {
 v4 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: param_pthread_join at 0x1270c

extern unsigned int __glibc___stack_chk_guard;

unsigned int param_pthread_join()
{
 unsigned int *v12; // r6
 char *v13; // r7
 struct_0 *cur; // r8
 char *v15; // r5
 unsigned int count; // r0
 unsigned int *v17; // r6
 unsigned int v0; // [bp-0x54]
 unsigned int result; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 unsigned int flag1; // [bp-0x40]
 unsigned int v5; // [bp-0x3c]
 unsigned int v6; // [bp-0x38]
 unsigned int flag2; // [bp-0x34]
 unsigned int v8; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 unsigned int flag3; // [bp-0x28]
 unsigned int v11; // [bp-0x24]

 v12 = &v0;
 v13 = (char*)&v0;
 v11 = __glibc___stack_chk_guard;
 cur = &result;
 v15 = (char*)&result;
 result = 1;
 v3 = 10;
 flag1 = 0;
 v5 = 11;
 v6 = 20;
 flag2 = 0;
 v8 = 21;
 v9 = 30;
 flag3 = 0;
 while (1)
 {
 count = pthread_create((void*)v13, 0, thread_sum, v15);
 if (!count)
 {
 v15 += 12;
 v13 += 4;
 if (v15 == (char*)&v11)
 {
 do
 {
 v17 = v12;
 if (pthread_join(*(v17), 0))
 {
 if (!(v11 ^ __glibc___stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 } while ((count += cur->field_8, cur += 12, v12 = v17 + 4, v12 != &result));
 if ((v11 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return count;
 }
 }
 else if (!(v11 ^ __glibc___stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: call_pthread_join at 0x127f8
unsigned int call_pthread_join()
{
 unsigned int count; // r0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x127fc
extern unsigned int shared_counter;

int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr; // r8
 unsigned int i; // r6
 unsigned int v12; // r0
 unsigned int v13; // r7
 unsigned int *v3; // r5
 unsigned int *v4; // r5
 unsigned int count; // r0
 unsigned int v6; // r3
 unsigned int *v8; // r5
 unsigned int v9; // r4
 unsigned int v0; // [bp-0x24]

 v0 = a1;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 i = 0;
 shared_counter = 0;
 if (a0 > 0)
 {
 v3 = ptr;
 while (1)
 {
 v4 = v3;
 v6 = i + 1;
 if (pthread_create(v4, 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 if (a0 == v6)
 break;
 i = v6;
 v3 = v4 + 1;
 }
 v8 = ptr + 1;
 do
 {
 v9 = count;
 pthread_join(v8[1], 0);
 v8 += 1;
 count = v9 + 1;
 } while (i != v9);
 }
 free(ptr);
 v12 = 0;
 v13 = v0 * a0;
 if (shared_counter == v13)
 {
 if (!armg_calculate_condition(18, shared_counter, v13, 0))
 return 42;
 }
 else
 {
 if (!armg_calculate_condition(18, shared_counter, v13, 0))
 return v12;
 }
 return 4294967293;
}


// Function: call_mutex_lock at 0x128d4
unsigned int call_mutex_lock()
{
 unsigned int v0; // r0

 v0 = param_mutex_lock_constprop_0();
 return param_mutex_lock_constprop_0();
}


// Function: param_condition_variable at 0x128d8
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
 unsigned int count1; // r0
 unsigned int count2; // r0
 unsigned int v6; // r4
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *ptr_var; // [bp-0x10], Other Possible Types: char
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 ready = 0;
 data = 0;
 count1 = pthread_create((void*)&v1, 0, consumer_thread, 0);
 if (!count1)
 {
 count2 = pthread_create((void*)&v0, 0, producer_thread, 0);
 if (!count2)
 {
 pthread_join((void*)v1, (void**)&ptr_var);
 pthread_join((void*)v0, 0);
 v6 = *(ptr_var);
 free(ptr_var);
 }
 else
 {
 pthread_cancel((void*)v1);
 v6 = 4294967294;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_condition_variable at 0x129a0
unsigned int call_condition_variable()
{
 unsigned int v0; // r0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: param_atomic_ops at 0x129a4
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x24]

 v1 = __glibc___stack_chk_guard;
 v0 = a1;
 if (malloc(a0 * 4))
 {
 __sync_synchronize(); /* do not return */
 }
 else if (!(v1 ^ __glibc___stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
}


// Function: sub_129e0 at 0x129e0

void sub_129e0()
{
 struct_0 *ptr; // r9
 unsigned int v1; // r5

 ptr->field_74 = v1;
 __sync_synchronize(); /* do not return */
}


// Function: sub_129e8 at 0x129e8
int sub_129e8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
 unsigned int v0; // r7
 unsigned int v1; // r5
 unsigned int *v2; // r8
 unsigned int *v3; // r6
 unsigned int v4; // r5
 unsigned int *v5; // r6
 unsigned int count; // r4
 unsigned int *v7; // r6
 unsigned int *v8; // r5
 unsigned int *v9; // r5

 if (v0 > v1)
 {
 v3 = v2;
 do
 {
 count = pthread_create(v3, 0, thread_atomic_increment, &a5);
 if (count)
 free(v2);
 } while ((v4 += 1, v7 = v5 + 4, v3 = v5 + 4, v0 != v4));
 if (!pthread_create(0, count, thread_atomic_load_store, count))
 pthread_join(a6, count);
 v8 = v2 + 1;
 do
 {
 v9 = v8 + 1;
 count += 1;
 pthread_join(v8[1], 0);
 v8 = v9;
 } while (count < v0);
 }
 else if (!pthread_create(0, v4, thread_atomic_load_store, v4))
 {
 pthread_join(a6);
 }
 __sync_synchronize(); /* do not return */
}


// Function: sub_12a90 at 0x12a90
void sub_12a90()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_12a98 at 0x12a98
int sub_12a98()
{
 void* v0; // r8
 unsigned int v1; // r4

 free(v0);
 if (0 < v1)
 {
 if (!armg_calculate_condition(210, v1, 0, 0))
 goto LABEL_12aaa;
LABEL_12aa9:
 ;
 }
 else
 {
 if (armg_calculate_condition(210, v1, 0, 0))
 goto LABEL_12aa9;
LABEL_12aaa:
 ;
 }
}


// Function: call_atomic_ops at 0x12b04
unsigned int call_atomic_ops()
{
 unsigned int v0; // r0

 v0 = param_atomic_ops_constprop_0();
 return param_atomic_ops_constprop_0();
}


// Function: param_thread_local_storage at 0x12b08
extern unsigned int __glibc___stack_chk_guard;

int param_thread_local_storage(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
 unsigned int v6; // r3
 unsigned int v7; // r4
 unsigned int *v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 void* *k; // r7
 void* *v23; // r6
 unsigned int v24; // r4
 unsigned int *ptr_var; // r10
 void* *ptr3; // r6
 unsigned int ptr_val; // r0
 unsigned int j; // r5
 unsigned int v30; // r4
 void* *v31; // r11
 unsigned int *v32; // r6
 unsigned int v33; // r4
 unsigned int *v34; // r6
 void* *ptr_var2; // r0
 void* *v35; // r11
 unsigned int v40; // r0
 unsigned int v41; // r9
 unsigned int v42; // r6
 unsigned int *v43; // r11
 unsigned int *v10; // cc_dep1
 unsigned int v44; // r6
 void* *v45; // r7
 unsigned int v49; // r2
 unsigned int v50; // r1
 unsigned int v51; // cc_dep2
 unsigned int v52; // r2
 unsigned int v53; // r3
 unsigned int v11; // cc_dep2
 unsigned int v54; // cc_dep2
 unsigned int result; // r3
 unsigned int v12; // cc_ndep
 unsigned int *v13; // cc_dep1
 unsigned int v14; // cc_dep2
 unsigned int v15; // cc_ndep
 unsigned int *addr; // [bp-0x3c]
 void* *p; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int ptr_arr[2]; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x8]
 unsigned int vvar_4;

 v5 = &vvar_4;
 v4 = __glibc___stack_chk_guard;
 v6 = i * 4;
 v7 = v6;
 v2 = v6;
 ptr_var = malloc(v6);
 addr = ptr_var;
 ptr_var = malloc(v7);
 if (ptr_var)
 {
 v13 = (armg_calculate_condition(18, v10, v11, v12) ? ptr_var : v10);
 v14 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v11);
 v15 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v12);
 }
 else
 {
 v13 = (armg_calculate_condition(18, v16, v17, v18) ? ptr_var : v16);
 v14 = (armg_calculate_condition(18, v16, v17, v18) ? 0 : v17);
 v15 = (armg_calculate_condition(18, v16, v17, v18) ? 0 : v18);
 }
 p = ptr_var;
 if (armg_calculate_condition(2, v13, v14, v15))
 {
 v7 = 1;
 if (!armg_calculate_condition(18, v13, v14, v15))
 { v40 = 0; goto LABEL_12b5a; }
LABEL_12b59:
 v7 = 0;
 if ((char)armg_calculate_condition(2, v13, v14, v15))
 {
 if (!(v4 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 else
 {
 if (armg_calculate_condition(18, v13, v14, v15))
 { v40 = 0; goto LABEL_12b59; }
LABEL_12b5a:
 if ((char)armg_calculate_condition(2, v13, v14, v15))
 {
 if (!(v4 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 if (i > 0)
 {
 k = ptr_var + 1;
 v23 = k;
 do
 {
 v24 = v7;
 ptr3 = v23;
 ptr_val = malloc(16);
 ptr3[1] = ptr_val;
 j = v24;
 __snprintf_chk((void*)ptr_val, 16, 1, 16, "Thread-%d", v24);
 v23 = ptr3 + 1;
 v7 = v24 + 1;
 } while (i != v7);
 v30 = 0;
 v31 = k;
 v32 = addr;
 do
 {
 v33 = v30;
 v34 = v32;
 v35 = v31;
 if (pthread_create(v34, 0, thread_tls_test, v35[1]))
 {
 do
 {
 free(k[1]);
 k += 1;
 } while (&p[v33] != k);
 free(p);
 free(addr);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v31 = v35 + 4, v32 = v34 + 4, v30 = v33 + 1, j != v33));
 v41 = 0;
 v42 = 0;
 v7 = 0;
 v43 = addr + 1;
 do
 {
 v44 = v42;
 v45 = k;
 pthread_join(v43[1], &ptr_arr);
 v41 += ptr_arr[0];
 v7 += ptr_arr[1];
 free((void*)ptr_arr);
 free(v45[1]);
 v43 += 1;
 k = v45 + 1;
 v42 = v44 + 1;
 } while (j != v44);
 }
 else
 {
 v41 = v7;
 }
 free(p);
 free(addr);
 v40 = 0;
 v49 = v2 + i;
 v50 = v49 * 5;
 v51 = v50 * 4;
 v52 = v49 * 15;
 if (v41 == v50 * 4)
 {
 v53 = 1;
 if (!armg_calculate_condition(18, v41, v51, 0))
 { v40 = 0; goto LABEL_12caa; }
LABEL_12ca9:
 v53 = 0;
 }
 else
 {
 v53 = v2;
 if (armg_calculate_condition(18, v41, v51, 0))
 { v40 = 0; goto LABEL_12ca9; }
LABEL_12caa:
 ;
 }
 v54 = v52 * 2;
 if (v7 != v52 * 2)
 {
 result = 0;
 if (!armg_calculate_condition(2, v7, v54, 0))
 { v40 = 0; goto LABEL_12cb6; }
LABEL_12cb5:
 result &= 1;
 }
 else
 {
 result = v53;
 if (armg_calculate_condition(2, v7, v54, 0))
 { v40 = 0; goto LABEL_12cb5; }
LABEL_12cb6:
 ;
 }
 if (result)
 {
 v40 = 42;
 if (!armg_calculate_condition(2, result, 0, 0))
 { v40 = 0; goto LABEL_12cc2; }
LABEL_12cc1:
 v40 = 4294967293;
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 { v40 = 0; goto LABEL_12cc1; }
LABEL_12cc2:
 ;
 }
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v40;
}


// Function: call_thread_local_storage at 0x12ce8
unsigned int call_thread_local_storage()
{
 unsigned int count; // r0

 count = param_thread_local_storage_constprop_0();
 return param_thread_local_storage_constprop_0();
}


// Function: test_thread_concurrency at 0x12cec
extern unsigned int __glibc___stack_chk_guard;
extern char g_140d4;
extern char g_140f4;
extern char g_14110;
extern char g_14130;
extern char g_1414c;
extern char g_14168;
extern char g_14184;

int test_thread_concurrency()
{
 unsigned int v4; // r4
 unsigned int count; // r0
 unsigned int v10; // r0
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 puts(0x140d4);
 v1 = 7;
 if (!pthread_create(&v0, 0, thread_compute, &v1))
 {
 pthread_join(v0, &ptr);
 v4 = *(ptr);
 free(ptr);
 }
 else
 {
 v4 = 4294967295;
 }
 __printf_chk(1, 0x140f4, v4);
 __printf_chk(1, 0x14110, param_pthread_join());
 __printf_chk(1, 0x14130, param_mutex_lock_constprop_0());
 __printf_chk(1, 0x1414c, param_condition_variable());
 __printf_chk(1, 0x14168, param_atomic_ops_constprop_0());
 count = param_thread_local_storage_constprop_0();
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v10 = __printf_chk(1, 0x14184, count);
 return __printf_chk(1, 0x14184, count);
}


// Function: __sync_fetch_and_add_4 at 0x12e0c
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x12e44
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x12e7c
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x12eb4
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x12eec
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x12f24
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x12f60
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x12fc0
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x13020
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x13080
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x130e0
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x13140
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x131a4
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x13200
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x1325c
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x132b8
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x13314
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x13370
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x133d0
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x13408
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x13440
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x13478
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x134b0
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x134e8
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x13524
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_sub_and_fetch_2 at 0x1358c
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_or_and_fetch_2 at 0x135f4
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_and_and_fetch_2 at 0x1365c
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_xor_and_fetch_2 at 0x136c4
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_nand_and_fetch_2 at 0x1372c
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_add_and_fetch_1 at 0x13798
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_sub_and_fetch_1 at 0x137fc
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_or_and_fetch_1 at 0x13860
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_and_and_fetch_1 at 0x138c4
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_xor_and_fetch_1 at 0x13928
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_nand_and_fetch_1 at 0x1398c
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (v1);
 return v1;
}


// Function: __sync_val_compare_and_swap_4 at 0x139f4
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x13a44
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
 {
 if (0)
 return a1;
 }
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x13abc
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
 {
 if (0)
 return a1;
 }
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x13b30
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x13b5c
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_1 at 0x13b78
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_synchronize at 0x13b94
void __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x13ba0
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x13bd8
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_lock_test_and_set_1 at 0x13c38
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_lock_release_8 at 0x13c94
void __sync_lock_release_8(unsigned int *ptr)
{
 *(ptr) = 0;
 ptr[1] = 0;
}


// Function: __sync_lock_release_4 at 0x13cb8
void __sync_lock_release_4(unsigned int *ptr)
{
 *(ptr) = 0;
}


// Function: __sync_lock_release_2 at 0x13cd8
void __sync_lock_release_2(unsigned short *ptr)
{
 *(ptr) = 0;
}


// Function: __sync_lock_release_1 at 0x13cf8
void __sync_lock_release_1(char *ptr)
{
 *(ptr) = 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


