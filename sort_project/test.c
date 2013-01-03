//if U want to try other sort algorithms, U may need to do:
//1. add the functions respectively;
//2. rewrite the Makefile, but U just need to add something, it is trivial
//3. extern variable is alse need to add to the test.c

#include "sort.h"

extern int  array[SCALE] = {3,7,2,5,1};
int main()
{  
    choose_sort(array);
    //insert_sort(array);
    //bubble_sort(array);
    output();
}
