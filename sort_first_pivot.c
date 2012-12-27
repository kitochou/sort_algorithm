#include<stdio.h>
#define SCALE 5

void exchange(int * a, int * b);
void quik_sort_first_pivot(int * a,int start,int end);
int  partition(int * a,int start,int end);

int main()
{
    int a[SCALE],i;
    for(i = 0; i != SCALE; i ++)
    {
        scanf("%d",&a[i]);
    }
    quik_sort_first_pivot(a,0,SCALE - 1);
    for(i = 0; i != SCALE; i ++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

void exchange(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int  partition(int * a,int start,int end)
{
    int i,j,pivot;
    pivot = a[start];
    j = end + 1;
    for(i = end;i > start;i --)
    {
        if(a[i] > pivot)
        {
            j --;
            exchange(&a[i],&a[j]);
        }
    }
    exchange(&a[start],&a[j - 1]);
    return j - 1;
}
void quik_sort_first_pivot(int * a,int start,int end)  
{
    int partition_index;
    if(start < end)
    {
        partition_index = partition(a,start,end);
        quik_sort_first_pivot(a,start,partition_index - 1);
        quik_sort_first_pivot(a,partition_index + 1,end);
    }

} 
