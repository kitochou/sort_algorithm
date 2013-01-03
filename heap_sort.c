//堆排序，构建的是大顶堆，排序结果为升序

#include <stdio.h>
#define SCALE 5
//分别求出下标为t的节点的左孩子、右孩子、父节点在数组中的下标
#define l(t) (((t) << 1) + 1)
#define r(t) (((t) << 1) + 2)
#define p(t) (((t) - 1) / 2)

int array[SCALE];

void exchange(int * a,int * b);
void heapify(int * array, int scale,int t);
void heap_init(int * array);
void heap_sort(int * array);
int main()
{
    int i;
    for(i = 0;i != SCALE; i ++)
    {
        scanf("%d",&array[i]);
    }
    heap_init(array);
    heap_sort(array);
    for(i = 0;i != SCALE;i ++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
void exchange(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a  = *b;
    *b  = tmp;
}
void heapify(int * array, int scale, int t)
{
    int i, j;
    int tmp;
    for(i = t; i <= scale / 2 - 1; )
    {
        printf("i is %d\n", i);
        j = r(i);
        if(j < scale)
        {
            j = ( array[l(i)] > array[r(i)] ? l(i) : r(i) );
        }
        else
        {
            j = l(i);
        }
        if(array[i] < array[j])
        {
            exchange(&array[j], &array[i]);
            i = j;
        }
        else
        {
            break;
        }
    }
}

void heap_init(int * array)
{
    int i = SCALE / 2 - 1;
    for(; i >= 0; i --)
    {
       // printf("i is %d\n", i);
        heapify(array, SCALE, i);
    }
}
void heap_sort(int * array)
{
    int i;
    int scale;
    for(scale = SCALE; scale > 1;)
    {
        exchange(&array[0], &array[scale - 1]);
        heapify(array, -- scale, 0);
    }
}
