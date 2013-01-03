#include "sort.h"

void bubble_sort(int * array)
{
    int i,j;
    for(i = 0;i != SCALE; i ++)
    {
        for(j = 0;j != SCALE - i - 1; j ++)
        if(array[j] > array[j + 1])
        {
            exchange(&array[j],&array[j + 1]);
        }
    }
}
