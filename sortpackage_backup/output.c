#include "sort.h"
extern int array[SCALE];
void output()
{
    int i;
    printf("decending elements are: \n");
    for(i = 0; i != SCALE; i ++)
    {
        printf("%d\n",array[i]);
    }
}
