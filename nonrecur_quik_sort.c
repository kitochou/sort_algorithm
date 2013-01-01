//trying to emulating the stack to escape the recursive way,
//but in fact it does not become more efficient.

//通过栈来模拟参数的传递，但很讽刺的是，这样做，效率并没有提高
#include <stdio.h>
#include <stdlib.h>
#define SCALE 5
#define STACK_SIZE 1000

void exchange(int * a, int * b);
void nonrecurs_quik_sort(int * array, int start, int end);
int array[SCALE];  

int main()
{
    int i;
    for(i = 0;i != SCALE; i ++)
    {
        scanf("%d",&array[i]);
    }
    nonrecurs_quik_sort(array, 0, SCALE - 1);
    for(i = 0;i != SCALE;i ++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
    

void exchange(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a  = *b;
    *b  = tmp;
}
void nonrecurs_quik_sort(int * array, int start, int end)
{
    int stack[STACK_SIZE];//the size of the stack can not be the size of the array
    int pivot;
    int mid;
    int esp = 0;
    int i, j;

    stack[esp ++] = end;
    stack[esp ++] = start;

    while(esp > 0)
    {
        start = stack[-- esp];//the position of operator -- is very important, i had made a mistake here!
        end = stack[-- esp];

        j = end + 1;
        pivot = array[start];
        for(i = end; i > start;  i --)
        {
            if(array[i] > pivot)
            {
                j --;
                exchange(&array[i], &array[j]);
            }
        }
        exchange(&array[start], &array[j - 1]);
        mid = j - 1;
        if(mid - 1 > start)
        {
            stack[esp ++] = mid - 1;
            stack[esp ++] = start;
        }

        if(end - 1 > mid)
        {
            stack[esp ++] = end;
            stack[esp ++] = mid + 1;
        }
    }
}
