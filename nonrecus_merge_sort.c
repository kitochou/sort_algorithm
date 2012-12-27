//this piece of code aims to satisty to n-way merge sort in a non-recursive procedure
#include <stdio.h>
#define SCALE 5
#define WAY 2

void nonrecurs_merge_sort(int * a,int scale);
int main()
{
    int i;
    int a[SCALE];
    for(i = 0;i != SCALE; i ++)
    {
        scanf("%d",&a[i]);
    }
    nonrecus_merge_sort(a,0,SCALE - 1);
    for(i = 0;i != SCALE;i ++)
    {
        printf("%d\n",a[i]);
    }
}


void nonrecurs_merge_sort(int * a,int scale);
{
    int *start[WAY];
    int *tmp = (int *)malloc(sizeof(int) * SCALE);
    for()
    {

    }
}
