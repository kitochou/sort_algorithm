#include <stdio.h>
#define RADIX 10
#define ELEM_LEN 6

#define SCALE 5
int tmp[RADIX][SCALE];
int tmp_len[RADIX];

int get_i_digit(int a, int i);
void radix_sort(int * array);

int array[SCALE];
int main()
{
    int i;
    for(i = 0;i != SCALE; i ++)
    {
        scanf("%d",&array[i]);
    }
    radix_sort(array);
    for(i = 0;i != SCALE;i ++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}

int get_i_digit(int a, int i)//获取a的第i位，从低位到高位
{
    int k;
    for(k = 1; k != i; k ++)
    {
        a /= 10;
    }
    return a % 10;
}

void radix_sort(int * a)
{
    int i, j, k;
    int m, n, t;
    int digit;
    for(i = 1; i < ELEM_LEN + 1; i ++)
    {
        for(k = 0; k != RADIX; k ++)
        {
            tmp_len[k] = 0;
        }
        //distributed, 将SCALE个数分派到tmp中
        for(j = 0; j != SCALE; j ++)
        {
            digit = get_i_digit(array[j], i);
            tmp[digit][tmp_len[digit] ++] = array[j];
        }
        t = 0;
        //colected,将tmp中的数按序收集到array中
        for(m = 0; m != RADIX; m ++)
        {
            for(n = 0; n != tmp_len[m]; n ++)
            {
                array[t ++] =tmp[m][n];
            }
        }
    }
}
