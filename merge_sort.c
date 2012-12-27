#include <stdio.h>
#define SCALE 5

void exchange(int * a,int * b);
void merge_sort(int * a,int start,int end);
void merge(int * a,int start,int end);
int main()
{
    int i;
    int a[SCALE];
    for(i = 0;i != SCALE; i ++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,SCALE - 1);
    for(i = 0;i != SCALE;i ++)
    {
        printf("%d\n",a[i]);
    }
}

void merge_sort(int * a,int start,int end)
{
    int mid = (start + end)/2;
    if(start < end)
    {
        merge_sort(a,start,mid);
        merge_sort(a,mid + 1,end);
        merge(a,start,end);
    }
}


void merge(int * a,int start,int end)
{
    int mid = (start + end) / 2;
    int len = end - start + 1;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int * array1 = (int *)malloc(sizeof(int) * len1);
    int * array2 = (int *)malloc(sizeof(int) * len2);
    int i;
    int j = 0;
    int k = 0;

    for(i = start;i != start + len;i ++)
    {
        if( i <= mid)
        {
            array1[i - start] = a[i];
           // printf("%d\n",array1[i - start]);
        }
        else
        {
            array2[i - mid - 1] = a[i];
            //printf("%d\n",array2[i - mid - 1]);
        }
    }
    for(i = start;i != start + len;i ++)//here, handling the loop terminating condition must be careful
    {
        if(j > len1 - 1)
        {
            for(;k < len2; k ++)
            {
                a[i ++] = array2[k];
            }
            break;
        }
        else
        {
            if(k > len2 -1)
            {
                for(;j < len1;j ++)
                {
                    a[i ++] = array1[j];
                }
                break;
            }
            else
            {
                if(array1[j] < array2[k])
                {
                    a[i] = array1[j];
                    j ++;
                }
                else
                {
                    a[i] = array2[k];
                    k ++;
                }
            }
        }
    }
}


