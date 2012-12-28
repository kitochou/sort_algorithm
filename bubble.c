#include <stdio.h>
#define SCALE 5

void exchange(int * a,int * b);
void bubble_sort(int * a);

int main()
{
    int i;
    int a[SCALE];
    for(i = 0;i != SCALE; i ++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a);
    for(i = 0;i != SCALE;i ++)
    {
        printf("%d\n",a[i]);
    }
}
void exchange(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a  = *b;
    *b  = tmp;
}

void bubble_sort(int * a)
{
    int i,j;
    for(i = 0;i != SCALE; i ++)
    {
        for(j = 0;j != SCALE - i - 1; j ++)
        if(a[j] > a[j + 1])
        {
            exchange(&a[j],&a[j + 1]);
        }
    }
}
