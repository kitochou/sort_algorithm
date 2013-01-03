//this piece of code aims to satisty to 2-way merge sort in a non-recursive procedure
#include "sort.h"


void nonrecurs_merge_sort(int * array)
{
    int *start1;
    int *start2;
    int len, len1, len2;
    int offset;
    int m;//每轮排序结果存放在tmp中，现在把结果复制到a中，m为计数
    for(len = 1; len < SCALE; len *= 2)
    {
        offset = 0;
        len1 = len;
        for(offset = 0; offset < SCALE; offset += 2 * len)
        {
            start1 = array + offset;
            start2 = start1 + len;
            //剩余数据(SCALE - offset )不足len个
            if((SCALE - offset) <= len / 2)
            {
                break;
            }
            else
            {
                //最开始，我把这种情形合并在剩余数据少于 len / 2的情形中。但事实上下面这种情形，可能导致当我们使用
                //最后一个单元时，但它却处于无序状态。
                //at the beginning, i put this case togther with the one above(when the remaining data is no more than len/2).
                //but in fact, this may cause the last unit may be not sorted when we use it.
                if(SCALE - offset <= len)
                {
                    start2 = start1 + len / 2;
                    len1 = len / 2;
                    len2 = SCALE - offset - len / 2;
                }
                else
                {
                    if((SCALE - offset) >= 2 * len)
                    {
                        len2 = len;
                    }
                    else
                    {
                        //剩余数据长度为len + x，其中x < len
                        //the number of the remaining data is len + x, and the x is less than len .
                        len2 = SCALE - offset - len;
                    }
                }

                sort(start1, start2, len1, len2);
            }

        }
        for(m = 0; m < SCALE; m ++)
        {
            array[m] = tmp[m];
        }
    }
}
//这里的排序和递归式归并排序类似，其中a,b为有序数组，len1, len2分别为它们的大小
//the following sort() function is like the recursice sort function. 
//a[] and b[] are two sorted arrays, len1 and len2 are their length respectively
void sort(int *a, int *b, int len1, int len2)
{

    int i = 0;
    int j = 0;
    int k = 0;
    for(k = a - array; k != a - array + len1 + len2; k ++)
    {
        if(i >= len1)
        {
            for(; j != len2; )
            {
                tmp[k ++] = b[j ++]; 
            }
            break;
        }
        else
        {
            if(j >= len2)
            {
                for(; i != len1; )
                {
                    tmp[k ++] = a[i ++]; 
                }
                break;
            }
            else
            {
                if(a[i] < b[j])
                {
                    tmp[k] = a[i ++];
                }
                else
                {
                    tmp[k] = b[j ++];
                }
            }
        }
    }

}
