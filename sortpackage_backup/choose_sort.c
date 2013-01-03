#include "sort.h"
void choose_sort(int * array)
{
    int i, j, tmp;
    for(i = 0; i != SCALE; i ++)
    {
        for(j = i; j != SCALE; j ++)
        {
            if(array[i] > array[j])
            {
                exchange( &array[i], &array[j]);
            }
        }

    }
 }
