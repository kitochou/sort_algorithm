#include "sort.h"

void insert_sort(int * array)
{
    int i,j,k,index,a_tmp;
   
    for(i = 0; i != SCALE; i ++)
    {
        index = i;
        a_tmp = array[i];

        for(j = 0; j < i; j ++)
        {   
            if(array[i] < array[j])
            {
                index = j;
                break;
            }
        }
        //move the elements bigger than array[j]
        for(k = i;k > index - 1; k --)
        {
            array[k] = array[k - 1];
        }
            j ++;
        array[index] = a_tmp;
    }
}
