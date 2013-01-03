//堆排序，构建的是大顶堆，排序结果为升序

#include "sort.h"

void heapify(int * array, int scale, int t)
{
    int i, j;
    int tmp;
    for(i = t; i <= scale / 2 - 1; )
    {
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
