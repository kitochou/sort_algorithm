#include "sort.h"

//set the last element in the array as the pivot
int partition_last_pivot(int * array, int start, int end)
{
    int pivot = array[end];
    int i;
    int j = start - 1;
    
    for(i = start; i < end; i ++)
    {
        if(array[i] < pivot)
        {
            j ++;
            exchange(&array[i], &array[j]);
        }
    }
    //handle this must be caucious
    exchange(&array[j + 1], &array[end]);
    return j + 1;
}

//set the first element in the array as the pivot
int  partition_first_pivot(int * array, int start, int end)
{
    int i, j, pivot;
    pivot = array[start];
    j = end + 1;
    for(i = end; i > start; i --)
    {
        if(array[i] > pivot)
        {
            j --;
            exchange(&array[i], &array[j]);
        }
    }
    exchange(&array[start], &array[j - 1]);
    return j - 1;
}

void quik_sort(int * array, int start, int end)
{
    int partition_index;
    if(start < end)
    {
        partition_index = partition_last_pivot(array, start, end);
        quik_sort(array, start, partition_index - 1);
        quik_sort(array, partition_index + 1, end);
    }
}


