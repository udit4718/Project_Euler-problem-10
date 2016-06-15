#include <stdio.h>

void mul2(int *n)
{
    int c = 0, v;
    while(*n>=0)
    {
        v  = c + *n * 2;
        c  = v / 10;
        *n++ = v % 10;
    }
    if(c) *n++ = c;
    *n = -1;
}

int sum(int *n)
{
    int sum=0;
    while(*n>=0)
        sum += *n++;
    return sum;
}

int main(void)
{
    int arr[350] = {1, -1};
    int i;
    for(i=0; i<1000; i++)
        mul2(arr);
    printf("%d\n", sum(arr));
    return 0;
}
