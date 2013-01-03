#include<stdio.h>
#define SCALE 5

//bubble sort
void exchange(int * a, int * b);
void bubble_sort(int * array);

//quik sort
void choose_sort(int * array);
void quik_sort(int * array, int start, int end);
int  partition_last_pivot(int * array, int start, int end);
int  partition_first_pivot(int * array, int start, int end);
void insert_sort(int * array);

//heap sort
//分别求出下标为t的节点的左孩子、右孩子、父节点在数组中的下标
#define l(t) (((t) << 1) + 1)
#define r(t) (((t) << 1) + 2)
#define p(t) (((t) - 1) / 2)

void heapify(int * array, int scale,int t);
void heap_init(int * array);
void heap_sort(int * array);

//merge sort
void merge_sort(int * a,int start,int end);
void merge(int * a,int start,int end);

//non-recursive quik sort

#define STACK_SIZE 1000
void nonrecurs_quik_sort(int * array, int start, int end);

//non-recursive merge sort

#define WAY 2
void sort(int *a, int *b, int len1, int len2);
void nonrecurs_merge_sort(int * array);

//radix sort
#define RADIX 10
#define ELEM_LEN 6
int tmp[RADIX][SCALE];
int tmp_len[RADIX];
int get_i_digit(int a, int i);
void radix_sort(int * array);

void output();











